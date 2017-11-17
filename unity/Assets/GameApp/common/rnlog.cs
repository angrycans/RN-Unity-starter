using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using XLua;


namespace acans.util
{
  [LuaCallCSharp]
  public class RnLog
  {

    [LuaCallCSharp]

#if UNITY_EDITOR

    public static void rnlog(string txt)
    {
      Debug.Log(txt);
    }

#else
    [DllImportAttribute("__Internal")]
		public static extern void rnlog(string txt);
#endif


    [LuaCallCSharp]
    public static void test(string txt)
    {
      Debug.Log("xluabehaviour test=>" + txt);
    }
  }



}