using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Runtime.InteropServices;
using acans.util;

public class gameapp : MonoBehaviour
{

  // Use this for initialization

  XLua.LuaEnv luaenv = new XLua.LuaEnv();
  void Start()
  {
    RnLog.rnlog("c# test rnlog");

    string script = @"
        CS.UnityEngine.Debug.Log('hello world')
        local rnlogClass = CS.acans.util.RnLog
        CS.UnityEngine.Debug.Log('1')
        local rnlog = rnlogClass
        CS.UnityEngine.Debug.Log('2')
        rnlog.rnlog('lua test rnlog') 
";
    luaenv.DoString(script);


  }

  // Update is called once per frame
  void Update()
  {

  }
}
