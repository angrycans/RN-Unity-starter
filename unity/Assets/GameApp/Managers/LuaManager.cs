using UnityEngine;
using System.IO;
using System;
using System.Text;
public class LuaManager : MonoBehaviour
{
  //是否加密解密
  public static LuaManager Instance;
  string envPath
  {
    get
    {
#if UNITY_EDITOR
      return Application.streamingAssetsPath + "/xLua";
#else
            return Application.persistentDataPath + "/xLua";
#endif
    }
  }
  void Awake()
  {
    Instance = this;
  }
  void Start()
  {


  }
  void Update()
  {

  }
  void OnDestroy()
  {
  }

}