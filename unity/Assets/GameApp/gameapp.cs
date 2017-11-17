using System;
using System.Collections;
using System.IO;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using ICSharpCode.SharpZipLib.Zip;

using System.Runtime.InteropServices;
using acans.util;

public class gameapp : MonoBehaviour
{

  // Use this for initialization

  XLua.LuaEnv luaenv = GameManager.LUAENV;
  void Start()
  {
    //test c# call rnlog
    //RnLog.rnlog("c# test rnlog");

    //var obj = GameObject.Find("Cube");
    //XLuaBehaviour.CreateComponet(obj, "LuaScripts/LuaTestScript.lua", null);
    //obj.SetActive(false);
    /* var myScript = Resources.Load("Assets/GameApp/test.cs");
     // var script = System.Type.GetType("acans.util.LuaBehaviour");
     //Debug.Log("script=" + script.FullName);

     var com = obj.AddComponent(System.Type.GetType("Test")) as Test;
     RnLog.rnlog("c# test rnlog 0");
     //var luabehaviour = new acans.util.LuaBehaviour();
     var luaScriptTextAsset = Resources.Load("LuaScripts/LuaTestScript.lua") as TextAsset;
     //obj.AddComponent(luabehaviour.GetType());
     RnLog.rnlog("c# test rnlog 1");

     //obj.GetComponentInChildren

     RnLog.rnlog("luaScriptTextAsset text=\n" + luaScriptTextAsset.text);
     acans.util.LuaBehaviour luabehaviour;

     // obj.AddComponent<luabehaviour>();

     obj.AddComponent<acans.util.LuaBehaviour>().luaScript = luaScriptTextAsset;
     */

    //luabehaviour.luaScript = new TextAsset();
    // RnLog.rnlog("c# test rnlog 2");
    //luabehaviour.luaScript = luaScriptTextAsset;
    // RnLog.rnlog("c# test rnlog 3");
    //  obj.SetActive(true);
    //RnLog.rnlog(luabehaviour.luaScript.text);

    // obj.AddComponent(luabehaviour.GetType());

    //luabehaviour.injections = new acans.util.Injection[] { };
    // var 
    // com.a = 2;
    // Debug.Log("test.a=" + com.a);
    // Debug.Log("child.name=" + com.GetComponent(System.Type.GetType("Test")).name);
    // Debug.Log("obj.name=" + obj.name);
    //Debug.Log("obj.name=" + com.a);


#if UNITY_EDITOR
    //Debug.Log(Application.dataPath);
    luaenv.DoString("require 'LuaScripts/main'");

#else
    var dirname = "LuaScripts";
    
    RnLog.rnlog("add loader");
    luaenv.AddLoader((ref string fname) => {
        string filePath =  Application.persistentDataPath + "/" + fname + ".lua.txt";
            RnLog.rnlog("add loader"+filePath);

        if (System.IO.File.Exists (filePath)) {
            string script  = System.IO.File.ReadAllText(filePath);
              return System.Text.Encoding.UTF8.GetBytes(script);
        }else{
          return null;
        }
    });
    StartCoroutine(Load());
    

#endif

  }

  // Update is called once per frame
  void Update()
  {

  }



  void getLuaScript()
  {

  }
  IEnumerator Load()
  {
    string zipPath = "https://192.168.3.101/api/files/zip";
    string exportPath = Application.persistentDataPath;
    RnLog.rnlog("export Path=" + exportPath);
    RnLog.rnlog("url Path=" + zipPath);


    WWW www = new WWW(zipPath);
    yield return www;
    if (www.isDone)
    {
      if (www.error == null)
      {
        RnLog.rnlog("download url ok");
        //System.IO.File.WriteAllBytes(exportPath + "/LuaScripts.zip", www.bytes);

        DecompressZip(www.bytes, exportPath);
        RnLog.rnlog("DecompressZip ok =" + exportPath);

      }
      else
      {
        RnLog.rnlog("www error=>" + www.error);
      }
    }

    RnLog.rnlog("www ok");



    RnLog.rnlog("luaenv init main");
    luaenv.DoString("require 'LuaScripts/main'");


  }

  IEnumerator LoadFormPersistentDataPath(string fname)
  {

    string filePath = "file://" + Application.persistentDataPath + "/" + fname + ".lua.txt";
    RnLog.rnlog("LoadFormPersistentDataPath filePath =" + filePath);

    WWW www = new WWW(filePath);
    yield return www.text;

  }

  private static void DecompressZip(byte[] ZipByte, string outFolder)
  {
    ICSharpCode.SharpZipLib.Zip.ZipConstants.DefaultCodePage = System.Text.Encoding.UTF8.CodePage;

    using (ZipInputStream s = new ZipInputStream(new MemoryStream(ZipByte)))
    {

      ZipEntry theEntry;
      while ((theEntry = s.GetNextEntry()) != null)
      {

        Console.WriteLine(theEntry.Name);
        string name = theEntry.Name;
        string filePath = Path.Combine(outFolder, name);

        string directoryName = Path.GetDirectoryName(filePath);
        string fileName = Path.GetFileName(filePath);

        // create directory
        if (directoryName.Length > 0)
        {
          Directory.CreateDirectory(directoryName);
        }

        if (fileName != String.Empty)
        {
          using (FileStream streamWriter = File.Create(filePath))
          {

            int size = 2048;
            byte[] data = new byte[2048];
            while (true)
            {
              size = s.Read(data, 0, data.Length);
              if (size > 0)
              {
                streamWriter.Write(data, 0, size);
              }
              else
              {
                break;
              }
            }
          }
        }
      }
    }
  }


}
