using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using XLua;


namespace acans.util
{
  public static class GameManager
  {
    public static XLua.LuaEnv LUAENV = new XLua.LuaEnv();

    public static void Reload()
    {
      RnLog.rnlog("GameManager Reload");

      GameManager.LUAENV = null;
      GameManager.LUAENV = new XLua.LuaEnv();

    }
    public static string LoadTextAsset(string path)
    {

      string ret = "";
#if UNITY_EDITOR
      RnLog.rnlog("LoadTextAsset UNITY_EDITOR Resources.Load=>" + path);
      var _textasset = Resources.Load(path) as TextAsset;
      ret = _textasset.text;
#else
      string filePath =  Application.persistentDataPath + "/" + path + ".txt";
      RnLog.rnlog("LoadTextAsset =>" + filePath);
      
      if (System.IO.File.Exists (filePath)) {
          ret  = System.IO.File.ReadAllText(filePath);
          //  ret= System.Text.Encoding.UTF8.GetBytes(script);
      }
#endif
      return ret;

    }

  }

}