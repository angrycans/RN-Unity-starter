/*
 * Tencent is pleased to support the open source community by making xLua available.
 * Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using XLua;
using System;


namespace acans.util
{

  public class XInjection
  {
    public string name;
    public GameObject value;
  }

  [LuaCallCSharp]
  public class XLuaBehaviour : MonoBehaviour
  {
    public TextAsset luaScript;
    private string luaScriptText;
    public XInjection[] injections;

    internal static LuaEnv luaEnv = GameManager.LUAENV; //all lua behaviour shared one luaenv only!
    internal static float lastGCTime = 0;
    internal const float GCInterval = 1;//1 second 

    private Action luaStart;
    private Action luaUpdate;
    private Action luaOnDestroy;

    private LuaTable scriptEnv;

    [LuaCallCSharp]
    public static XLuaBehaviour CreateComponet(GameObject obj, string _textasset, XInjection[] injections)
    {
      RnLog.rnlog("XLuaBehaviour CreateComponet()");
      obj.SetActive(false);

      XLuaBehaviour luabehaviour = obj.AddComponent<XLuaBehaviour>();
      luabehaviour.luaScriptText = GameManager.LoadTextAsset(_textasset);
      luabehaviour.injections = injections;

      obj.SetActive(true);

      return luabehaviour;

      //luaScript = new TextAsset();
    }

    [LuaCallCSharp]
    public static void test(string txt)
    {
      RnLog.rnlog("xluabehaviour test=>" + txt);
    }
    void Awake()
    {

      RnLog.rnlog("Attach Script XLuaBehaviout.cs to GameObject");
      //RnLog.rnlog("luaScript.text=\n" + luaScript.text);

      scriptEnv = luaEnv.NewTable();

      LuaTable meta = luaEnv.NewTable();
      meta.Set("__index", luaEnv.Global);
      scriptEnv.SetMetaTable(meta);
      meta.Dispose();

      scriptEnv.Set("self", this);

      if (injections != null)
      {
        foreach (var injection in injections)
        {
          scriptEnv.Set(injection.name, injection.value);
        }

      }

      if (luaScript != null)
      {
        luaScriptText = luaScript.text;
      }
      luaEnv.DoString(luaScriptText, "XLuaBehaviour", scriptEnv);

      Action luaAwake = scriptEnv.Get<Action>("awake");
      scriptEnv.Get("start", out luaStart);
      scriptEnv.Get("update", out luaUpdate);
      scriptEnv.Get("ondestroy", out luaOnDestroy);

      if (luaAwake != null)
      {
        luaAwake();
      }
    }

    // Use this for initialization
    void Start()
    {
      if (luaStart != null)
      {
        luaStart();
      }
    }

    // Update is called once per frame
    void Update()
    {
      if (luaUpdate != null)
      {
        luaUpdate();
      }
      if (Time.time - LuaBehaviour.lastGCTime > GCInterval)
      {
        luaEnv.Tick();
        LuaBehaviour.lastGCTime = Time.time;
      }
    }

    void OnDestroy()
    {
      if (luaOnDestroy != null)
      {
        luaOnDestroy();
      }
      luaOnDestroy = null;
      luaUpdate = null;
      luaStart = null;
      scriptEnv.Dispose();
      //injections = null;
    }
  }
}