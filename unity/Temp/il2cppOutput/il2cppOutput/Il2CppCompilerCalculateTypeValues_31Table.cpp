#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4104533433;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1054215881;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t2628689988;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t2269414340;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t4262029204;
// UnityEngine.Transform
struct Transform_t3986277830;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1940189435;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t3201176157;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1638053283;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t3930468335;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t2465968876;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t572968898;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3078254760;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1988907771;
// System.IntPtr[]
struct IntPtrU5BU5D_t1319287842;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3157911449;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3733290172;
// System.Type
struct Type_t;
// UnityEngine.GameObject
struct GameObject_t3797318714;
// UnityEngine.Camera
struct Camera_t3462235041;
// System.Action`1<System.Object>
struct Action_1_t3486213808;
// System.Char[]
struct CharU5BU5D_t1860498715;
// System.IFormatProvider
struct IFormatProvider_t973159295;
// System.Void
struct Void_t3395209399;
// UnityEngine.ReflectionProbe
struct ReflectionProbe_t3022992380;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3551330611;
// System.Delegate[]
struct DelegateU5BU5D_t1442489063;
// UnityEngine.EnumInfo
struct EnumInfo_t1374982515;
// UnityEngine.RectTransform
struct RectTransform_t279665734;
// System.IAsyncResult
struct IAsyncResult_t2683198007;
// System.AsyncCallback
struct AsyncCallback_t350718677;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1414399278;

struct Exception_t3693249845_marshaled_pinvoke;
struct Exception_t3693249845_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MARSHALBYREFOBJECT_T245461312_H
#define MARSHALBYREFOBJECT_T245461312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t245461312  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t4104533433 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t245461312, ____identity_0)); }
	inline ServerIdentity_t4104533433 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t4104533433 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t4104533433 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t245461312_marshaled_pinvoke
{
	ServerIdentity_t4104533433 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t245461312_marshaled_com
{
	ServerIdentity_t4104533433 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T245461312_H
#ifndef GUISTATEOBJECTS_T542703444_H
#define GUISTATEOBJECTS_T542703444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStateObjects
struct  GUIStateObjects_t542703444  : public RuntimeObject
{
public:

public:
};

struct GUIStateObjects_t542703444_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> UnityEngine.GUIStateObjects::s_StateCache
	Dictionary_2_t1054215881 * ___s_StateCache_0;

public:
	inline static int32_t get_offset_of_s_StateCache_0() { return static_cast<int32_t>(offsetof(GUIStateObjects_t542703444_StaticFields, ___s_StateCache_0)); }
	inline Dictionary_2_t1054215881 * get_s_StateCache_0() const { return ___s_StateCache_0; }
	inline Dictionary_2_t1054215881 ** get_address_of_s_StateCache_0() { return &___s_StateCache_0; }
	inline void set_s_StateCache_0(Dictionary_2_t1054215881 * value)
	{
		___s_StateCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StateCache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISTATEOBJECTS_T542703444_H
#ifndef PROPERTYNAMEUTILS_T2872828283_H
#define PROPERTYNAMEUTILS_T2872828283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t2872828283  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T2872828283_H
#ifndef ATTRIBUTEHELPERENGINE_T2152198672_H
#define ATTRIBUTEHELPERENGINE_T2152198672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2152198672  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2152198672_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t2628689988* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t2269414340* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t4262029204* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2152198672_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t2628689988* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t2628689988** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t2628689988* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2152198672_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t2269414340* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t2269414340** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t2269414340* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2152198672_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t4262029204* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t4262029204** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t4262029204* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2152198672_H
#ifndef CLASSLIBRARYINITIALIZER_T663876947_H
#define CLASSLIBRARYINITIALIZER_T663876947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t663876947  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T663876947_H
#ifndef ENUMERATOR_T2066765163_H
#define ENUMERATOR_T2066765163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t2066765163  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t3986277830 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t2066765163, ___outer_0)); }
	inline Transform_t3986277830 * get_outer_0() const { return ___outer_0; }
	inline Transform_t3986277830 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t3986277830 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t2066765163, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2066765163_H
#ifndef SCENEMANAGER_T2788310816_H
#define SCENEMANAGER_T2788310816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2788310816  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2788310816_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t1940189435 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t3201176157 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1638053283 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2788310816_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t1940189435 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t1940189435 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t1940189435 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2788310816_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t3201176157 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t3201176157 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t3201176157 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2788310816_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1638053283 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1638053283 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1638053283 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2788310816_H
#ifndef SPRITEATLASMANAGER_T585514181_H
#define SPRITEATLASMANAGER_T585514181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t585514181  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t585514181_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t3930468335 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t2465968876 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t585514181_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t3930468335 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t3930468335 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t3930468335 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t585514181_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t2465968876 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t2465968876 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t2465968876 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T585514181_H
#ifndef VALUETYPE_T1414820322_H
#define VALUETYPE_T1414820322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1414820322  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1414820322_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1414820322_marshaled_com
{
};
#endif // VALUETYPE_T1414820322_H
#ifndef STACKTRACEUTILITY_T1296780932_H
#define STACKTRACEUTILITY_T1296780932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1296780932  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1296780932_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1296780932_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1296780932_H
#ifndef SETUPCOROUTINE_T3329483733_H
#define SETUPCOROUTINE_T3329483733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t3329483733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T3329483733_H
#ifndef EXCEPTION_T3693249845_H
#define EXCEPTION_T3693249845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3693249845  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t3693249845 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t3078254760 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1988907771* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t1319287842* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____innerException_4)); }
	inline Exception_t3693249845 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t3693249845 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t3693249845 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t3078254760 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t3078254760 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t3078254760 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1988907771* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1988907771** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1988907771* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t3693249845, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t1319287842* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t1319287842** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t1319287842* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t3693249845_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t3693249845_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t3693249845_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3693249845_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t3078254760 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1988907771* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t3693249845_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3693249845_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t3078254760 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1988907771* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T3693249845_H
#ifndef MANAGEDSTREAMHELPERS_T973954020_H
#define MANAGEDSTREAMHELPERS_T973954020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ManagedStreamHelpers
struct  ManagedStreamHelpers_t973954020  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDSTREAMHELPERS_T973954020_H
#ifndef TIME_T2936834198_H
#define TIME_T2936834198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t2936834198  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T2936834198_H
#ifndef SCRIPTINGUTILS_T1294835265_H
#define SCRIPTINGUTILS_T1294835265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t1294835265  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T1294835265_H
#ifndef YIELDINSTRUCTION_T1465229181_H
#define YIELDINSTRUCTION_T1465229181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t1465229181  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1465229181_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1465229181_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T1465229181_H
#ifndef ATTRIBUTE_T2621428887_H
#define ATTRIBUTE_T2621428887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2621428887  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2621428887_H
#ifndef ENUMINFO_T1374982515_H
#define ENUMINFO_T1374982515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EnumInfo
struct  EnumInfo_t1374982515  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMINFO_T1374982515_H
#ifndef SENDMOUSEEVENTS_T2339349021_H
#define SENDMOUSEEVENTS_T2339349021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t2339349021  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t2339349021_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3157911449* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3157911449* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3157911449* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t3733290172* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2339349021_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2339349021_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t3157911449* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t3157911449** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t3157911449* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2339349021_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t3157911449* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t3157911449** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t3157911449* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2339349021_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t3157911449* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t3157911449** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t3157911449* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2339349021_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t3733290172* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t3733290172** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t3733290172* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T2339349021_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T2354164122_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T2354164122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t2354164122  : public Attribute_t2621428887
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t2354164122, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T2354164122_H
#ifndef DEFAULTEXECUTIONORDER_T3751755991_H
#define DEFAULTEXECUTIONORDER_T3751755991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t3751755991  : public Attribute_t2621428887
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t3751755991, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T3751755991_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T2522071384_H
#define ASSEMBLYISEDITORASSEMBLY_T2522071384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t2522071384  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T2522071384_H
#ifndef CONTEXTMENU_T3227819824_H
#define CONTEXTMENU_T3227819824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t3227819824  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T3227819824_H
#ifndef ADDCOMPONENTMENU_T65612958_H
#define ADDCOMPONENTMENU_T65612958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t65612958  : public Attribute_t2621428887
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t65612958, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t65612958, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T65612958_H
#ifndef WRITABLEATTRIBUTE_T3659974382_H
#define WRITABLEATTRIBUTE_T3659974382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t3659974382  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T3659974382_H
#ifndef REQUIRECOMPONENT_T2474655657_H
#define REQUIRECOMPONENT_T2474655657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t2474655657  : public Attribute_t2621428887
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t2474655657, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t2474655657, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t2474655657, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T2474655657_H
#ifndef DISALLOWMULTIPLECOMPONENT_T4257730745_H
#define DISALLOWMULTIPLECOMPONENT_T4257730745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t4257730745  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T4257730745_H
#ifndef HITINFO_T2850451016_H
#define HITINFO_T2850451016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t2850451016 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3797318714 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t3462235041 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2850451016, ___target_0)); }
	inline GameObject_t3797318714 * get_target_0() const { return ___target_0; }
	inline GameObject_t3797318714 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3797318714 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2850451016, ___camera_1)); }
	inline Camera_t3462235041 * get_camera_1() const { return ___camera_1; }
	inline Camera_t3462235041 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t3462235041 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2850451016_marshaled_pinvoke
{
	GameObject_t3797318714 * ___target_0;
	Camera_t3462235041 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2850451016_marshaled_com
{
	GameObject_t3797318714 * ___target_0;
	Camera_t3462235041 * ___camera_1;
};
#endif // HITINFO_T2850451016_H
#ifndef COLOR32_T3321179363_H
#define COLOR32_T3321179363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t3321179363 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t3321179363, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t3321179363, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t3321179363, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t3321179363, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T3321179363_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1510859553_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1510859553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t1510859553  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1510859553_H
#ifndef PROPERTYATTRIBUTE_T3167929710_H
#define PROPERTYATTRIBUTE_T3167929710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3167929710  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3167929710_H
#ifndef NATIVECLASSATTRIBUTE_T2163769706_H
#define NATIVECLASSATTRIBUTE_T2163769706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t2163769706  : public Attribute_t2621428887
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t2163769706, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T2163769706_H
#ifndef EXECUTEINEDITMODE_T3122664249_H
#define EXECUTEINEDITMODE_T3122664249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t3122664249  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T3122664249_H
#ifndef RANGEINT_T3658259367_H
#define RANGEINT_T3658259367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t3658259367 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t3658259367, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t3658259367, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T3658259367_H
#ifndef PROPERTYNAME_T543055053_H
#define PROPERTYNAME_T543055053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t543055053 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t543055053, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T543055053_H
#ifndef VECTOR2_T767971740_H
#define VECTOR2_T767971740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t767971740 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t767971740, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t767971740, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t767971740_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t767971740  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t767971740  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t767971740  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t767971740  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t767971740  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t767971740  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t767971740  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t767971740  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___zeroVector_2)); }
	inline Vector2_t767971740  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t767971740 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t767971740  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___oneVector_3)); }
	inline Vector2_t767971740  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t767971740 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t767971740  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___upVector_4)); }
	inline Vector2_t767971740  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t767971740 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t767971740  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___downVector_5)); }
	inline Vector2_t767971740  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t767971740 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t767971740  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___leftVector_6)); }
	inline Vector2_t767971740  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t767971740 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t767971740  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___rightVector_7)); }
	inline Vector2_t767971740  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t767971740 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t767971740  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t767971740  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t767971740 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t767971740  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t767971740_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t767971740  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t767971740 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t767971740  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T767971740_H
#ifndef VECTOR3_T59122720_H
#define VECTOR3_T59122720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t59122720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t59122720, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t59122720, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t59122720, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t59122720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t59122720  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t59122720  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t59122720  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t59122720  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t59122720  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t59122720  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t59122720  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t59122720  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t59122720  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t59122720  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___zeroVector_4)); }
	inline Vector3_t59122720  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t59122720 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t59122720  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___oneVector_5)); }
	inline Vector3_t59122720  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t59122720 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t59122720  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___upVector_6)); }
	inline Vector3_t59122720  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t59122720 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t59122720  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___downVector_7)); }
	inline Vector3_t59122720  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t59122720 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t59122720  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___leftVector_8)); }
	inline Vector3_t59122720  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t59122720 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t59122720  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___rightVector_9)); }
	inline Vector3_t59122720  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t59122720 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t59122720  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___forwardVector_10)); }
	inline Vector3_t59122720  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t59122720 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t59122720  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___backVector_11)); }
	inline Vector3_t59122720  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t59122720 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t59122720  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t59122720  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t59122720 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t59122720  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t59122720_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t59122720  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t59122720 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t59122720  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T59122720_H
#ifndef SINGLE_T489102839_H
#define SINGLE_T489102839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t489102839 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t489102839, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T489102839_H
#ifndef HASH128_T3308511727_H
#define HASH128_T3308511727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Hash128
struct  Hash128_t3308511727 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t3308511727, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t3308511727, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t3308511727, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t3308511727, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH128_T3308511727_H
#ifndef VOID_T3395209399_H
#define VOID_T3395209399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3395209399 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t3395209399__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3395209399_H
#ifndef TEXTWRITER_T1094821404_H
#define TEXTWRITER_T1094821404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t1094821404  : public MarshalByRefObject_t245461312
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1860498715* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404, ___CoreNewLine_9)); }
	inline CharU5BU5D_t1860498715* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t1860498715** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t1860498715* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t1094821404_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t1094821404 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3486213808 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3486213808 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3486213808 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3486213808 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3486213808 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3486213808 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3486213808 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ___Null_1)); }
	inline TextWriter_t1094821404 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t1094821404 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t1094821404 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3486213808 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3486213808 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3486213808 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3486213808 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3486213808 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3486213808 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3486213808 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3486213808 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3486213808 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3486213808 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3486213808 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3486213808 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3486213808 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3486213808 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3486213808 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3486213808 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3486213808 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3486213808 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t1094821404_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3486213808 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3486213808 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3486213808 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T1094821404_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T3984157214_H
#define ENUM_T3984157214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3984157214  : public ValueType_t1414820322
{
public:

public:
};

struct Enum_t3984157214_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1860498715* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t3984157214_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1860498715* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1860498715** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1860498715* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3984157214_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3984157214_marshaled_com
{
};
#endif // ENUM_T3984157214_H
#ifndef UNITYEXCEPTION_T782937631_H
#define UNITYEXCEPTION_T782937631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t782937631  : public Exception_t3693249845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T782937631_H
#ifndef SERIALIZEFIELD_T2378171179_H
#define SERIALIZEFIELD_T2378171179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2378171179  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2378171179_H
#ifndef SCENE_T1268476840_H
#define SCENE_T1268476840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t1268476840 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t1268476840, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T1268476840_H
#ifndef SERIALIZEPRIVATEVARIABLES_T2092534276_H
#define SERIALIZEPRIVATEVARIABLES_T2092534276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t2092534276  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T2092534276_H
#ifndef SELECTIONBASEATTRIBUTE_T3516548680_H
#define SELECTIONBASEATTRIBUTE_T3516548680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t3516548680  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T3516548680_H
#ifndef RECT_T1972721213_H
#define RECT_T1972721213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t1972721213 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t1972721213, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t1972721213, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t1972721213, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t1972721213, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T1972721213_H
#ifndef REFLECTIONPROBEBLENDINFO_T2257679837_H
#define REFLECTIONPROBEBLENDINFO_T2257679837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ReflectionProbeBlendInfo
struct  ReflectionProbeBlendInfo_t2257679837 
{
public:
	// UnityEngine.ReflectionProbe UnityEngine.Rendering.ReflectionProbeBlendInfo::probe
	ReflectionProbe_t3022992380 * ___probe_0;
	// System.Single UnityEngine.Rendering.ReflectionProbeBlendInfo::weight
	float ___weight_1;

public:
	inline static int32_t get_offset_of_probe_0() { return static_cast<int32_t>(offsetof(ReflectionProbeBlendInfo_t2257679837, ___probe_0)); }
	inline ReflectionProbe_t3022992380 * get_probe_0() const { return ___probe_0; }
	inline ReflectionProbe_t3022992380 ** get_address_of_probe_0() { return &___probe_0; }
	inline void set_probe_0(ReflectionProbe_t3022992380 * value)
	{
		___probe_0 = value;
		Il2CppCodeGenWriteBarrier((&___probe_0), value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(ReflectionProbeBlendInfo_t2257679837, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ReflectionProbeBlendInfo
struct ReflectionProbeBlendInfo_t2257679837_marshaled_pinvoke
{
	ReflectionProbe_t3022992380 * ___probe_0;
	float ___weight_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ReflectionProbeBlendInfo
struct ReflectionProbeBlendInfo_t2257679837_marshaled_com
{
	ReflectionProbe_t3022992380 * ___probe_0;
	float ___weight_1;
};
#endif // REFLECTIONPROBEBLENDINFO_T2257679837_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T1652648197_H
#define DRIVENRECTTRANSFORMTRACKER_T1652648197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t1652648197 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T1652648197_H
#ifndef PREFERBINARYSERIALIZATION_T1802244115_H
#define PREFERBINARYSERIALIZATION_T1802244115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t1802244115  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T1802244115_H
#ifndef COLOR_T3988933665_H
#define COLOR_T3988933665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3988933665 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3988933665, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3988933665, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3988933665, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3988933665, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3988933665_H
#ifndef LIGHTPROBEUSAGE_T3266124225_H
#define LIGHTPROBEUSAGE_T3266124225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.LightProbeUsage
struct  LightProbeUsage_t3266124225 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_t3266124225, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTPROBEUSAGE_T3266124225_H
#ifndef KEYCODE_T2583516222_H
#define KEYCODE_T2583516222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2583516222 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2583516222, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2583516222_H
#ifndef REFLECTIONPROBEUSAGE_T2246460229_H
#define REFLECTIONPROBEUSAGE_T2246460229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ReflectionProbeUsage
struct  ReflectionProbeUsage_t2246460229 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_t2246460229, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROBEUSAGE_T2246460229_H
#ifndef RANGEATTRIBUTE_T1013582630_H
#define RANGEATTRIBUTE_T1013582630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t1013582630  : public PropertyAttribute_t3167929710
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t1013582630, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t1013582630, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T1013582630_H
#ifndef PLANE_T4180683590_H
#define PLANE_T4180683590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t4180683590 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t59122720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t4180683590, ___m_Normal_0)); }
	inline Vector3_t59122720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t59122720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t59122720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t4180683590, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T4180683590_H
#ifndef TOOLTIPATTRIBUTE_T4146912424_H
#define TOOLTIPATTRIBUTE_T4146912424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t4146912424  : public PropertyAttribute_t3167929710
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t4146912424, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T4146912424_H
#ifndef SPACEATTRIBUTE_T1016393278_H
#define SPACEATTRIBUTE_T1016393278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t1016393278  : public PropertyAttribute_t3167929710
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t1016393278, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T1016393278_H
#ifndef SHADOWCASTINGMODE_T3369283502_H
#define SHADOWCASTINGMODE_T3369283502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t3369283502 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t3369283502, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWCASTINGMODE_T3369283502_H
#ifndef TEXTAREAATTRIBUTE_T906842637_H
#define TEXTAREAATTRIBUTE_T906842637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t906842637  : public PropertyAttribute_t3167929710
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t906842637, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t906842637, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T906842637_H
#ifndef RAY_T895323317_H
#define RAY_T895323317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t895323317 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t59122720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t59122720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t895323317, ___m_Origin_0)); }
	inline Vector3_t59122720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t59122720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t59122720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t895323317, ___m_Direction_1)); }
	inline Vector3_t59122720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t59122720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t59122720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T895323317_H
#ifndef RAY2D_T2215830626_H
#define RAY2D_T2215830626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray2D
struct  Ray2D_t2215830626 
{
public:
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_t767971740  ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_t767971740  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray2D_t2215830626, ___m_Origin_0)); }
	inline Vector2_t767971740  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector2_t767971740 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector2_t767971740  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray2D_t2215830626, ___m_Direction_1)); }
	inline Vector2_t767971740  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector2_t767971740 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector2_t767971740  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY2D_T2215830626_H
#ifndef MATHFINTERNAL_T1385595486_H
#define MATHFINTERNAL_T1385595486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t1385595486 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t1385595486__padding[1];
	};

public:
};

struct MathfInternal_t1385595486_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t1385595486_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t1385595486_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t1385595486_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T1385595486_H
#ifndef STENCILOP_T3012787869_H
#define STENCILOP_T3012787869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t3012787869 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StencilOp_t3012787869, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T3012787869_H
#ifndef DELEGATE_T486270610_H
#define DELEGATE_T486270610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t486270610  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t3551330611 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___data_9)); }
	inline DelegateData_t3551330611 * get_data_9() const { return ___data_9; }
	inline DelegateData_t3551330611 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t3551330611 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t486270610, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t486270610_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t3551330611 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t486270610_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t3551330611 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T486270610_H
#ifndef COMPAREFUNCTION_T1021696594_H
#define COMPAREFUNCTION_T1021696594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t1021696594 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_t1021696594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T1021696594_H
#ifndef DATASTREAMTYPE_T865845630_H
#define DATASTREAMTYPE_T865845630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t865845630 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataStreamType_t865845630, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T865845630_H
#ifndef PLAYABLEGRAPH_T793053104_H
#define PLAYABLEGRAPH_T793053104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t793053104 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t793053104, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t793053104, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T793053104_H
#ifndef PLAYABLEOUTPUTHANDLE_T2962676212_H
#define PLAYABLEOUTPUTHANDLE_T2962676212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t2962676212 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2962676212, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2962676212, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T2962676212_H
#ifndef LOCALNOTIFICATION_T1851008101_H
#define LOCALNOTIFICATION_T1851008101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t1851008101  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	intptr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t1851008101, ___notificationWrapper_0)); }
	inline intptr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline intptr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(intptr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t1851008101_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t1851008101_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T1851008101_H
#ifndef REMOTENOTIFICATION_T555568574_H
#define REMOTENOTIFICATION_T555568574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t555568574  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	intptr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t555568574, ___notificationWrapper_0)); }
	inline intptr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline intptr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(intptr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T555568574_H
#ifndef LOADSCENEMODE_T1570612992_H
#define LOADSCENEMODE_T1570612992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t1570612992 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t1570612992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T1570612992_H
#ifndef SCRIPTABLERENDERCONTEXT_T2066735317_H
#define SCRIPTABLERENDERCONTEXT_T2066735317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t2066735317 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t2066735317, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T2066735317_H
#ifndef ROTATIONORDER_T1667348975_H
#define ROTATIONORDER_T1667348975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RotationOrder
struct  RotationOrder_t1667348975 
{
public:
	// System.Int32 UnityEngine.RotationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationOrder_t1667348975, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONORDER_T1667348975_H
#ifndef COLORWRITEMASK_T3830709933_H
#define COLORWRITEMASK_T3830709933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t3830709933 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorWriteMask_t3830709933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T3830709933_H
#ifndef DRIVENTRANSFORMPROPERTIES_T1948712232_H
#define DRIVENTRANSFORMPROPERTIES_T1948712232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t1948712232 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t1948712232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T1948712232_H
#ifndef AUDIOTYPE_T2053625028_H
#define AUDIOTYPE_T2053625028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioType
struct  AudioType_t2053625028 
{
public:
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioType_t2053625028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOTYPE_T2053625028_H
#ifndef EDGE_T827470582_H
#define EDGE_T827470582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t827470582 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Edge_t827470582, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGE_T827470582_H
#ifndef AXIS_T669431017_H
#define AXIS_T669431017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t669431017 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t669431017, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T669431017_H
#ifndef UNITYLOGWRITER_T1654351694_H
#define UNITYLOGWRITER_T1654351694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t1654351694  : public TextWriter_t1094821404
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T1654351694_H
#ifndef OBJECT_T408436123_H
#define OBJECT_T408436123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t408436123  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t408436123, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t408436123_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t408436123_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t408436123_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t408436123_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T408436123_H
#ifndef SENDMESSAGEOPTIONS_T1548837066_H
#define SENDMESSAGEOPTIONS_T1548837066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t1548837066 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t1548837066, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T1548837066_H
#ifndef TEXTUREFORMAT_T3826334072_H
#define TEXTUREFORMAT_T3826334072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t3826334072 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t3826334072, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T3826334072_H
#ifndef TEXTUREWRAPMODE_T2786360499_H
#define TEXTUREWRAPMODE_T2786360499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t2786360499 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t2786360499, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T2786360499_H
#ifndef SKINQUALITY_T3722535983_H
#define SKINQUALITY_T3722535983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkinQuality
struct  SkinQuality_t3722535983 
{
public:
	// System.Int32 UnityEngine.SkinQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SkinQuality_t3722535983, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINQUALITY_T3722535983_H
#ifndef CAMERACLEARFLAGS_T3571701723_H
#define CAMERACLEARFLAGS_T3571701723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t3571701723 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t3571701723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T3571701723_H
#ifndef DIAGNOSTICSWITCHFLAGS_T373171985_H
#define DIAGNOSTICSWITCHFLAGS_T373171985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DiagnosticSwitchFlags
struct  DiagnosticSwitchFlags_t373171985 
{
public:
	// System.Int32 UnityEngine.DiagnosticSwitchFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DiagnosticSwitchFlags_t373171985, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSWITCHFLAGS_T373171985_H
#ifndef HIDEFLAGS_T3439328282_H
#define HIDEFLAGS_T3439328282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t3439328282 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t3439328282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T3439328282_H
#ifndef CACHEDASSETBUNDLE_T657563705_H
#define CACHEDASSETBUNDLE_T657563705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedAssetBundle
struct  CachedAssetBundle_t657563705 
{
public:
	// System.String UnityEngine.CachedAssetBundle::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Hash128 UnityEngine.CachedAssetBundle::m_Hash
	Hash128_t3308511727  ___m_Hash_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(CachedAssetBundle_t657563705, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Hash_1() { return static_cast<int32_t>(offsetof(CachedAssetBundle_t657563705, ___m_Hash_1)); }
	inline Hash128_t3308511727  get_m_Hash_1() const { return ___m_Hash_1; }
	inline Hash128_t3308511727 * get_address_of_m_Hash_1() { return &___m_Hash_1; }
	inline void set_m_Hash_1(Hash128_t3308511727  value)
	{
		___m_Hash_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CachedAssetBundle
struct CachedAssetBundle_t657563705_marshaled_pinvoke
{
	char* ___m_Name_0;
	Hash128_t3308511727  ___m_Hash_1;
};
// Native definition for COM marshalling of UnityEngine.CachedAssetBundle
struct CachedAssetBundle_t657563705_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Hash128_t3308511727  ___m_Hash_1;
};
#endif // CACHEDASSETBUNDLE_T657563705_H
#ifndef LOGTYPE_T3818471439_H
#define LOGTYPE_T3818471439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3818471439 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t3818471439, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T3818471439_H
#ifndef OPERATINGSYSTEMFAMILY_T2561649708_H
#define OPERATINGSYSTEMFAMILY_T2561649708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t2561649708 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t2561649708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEMFAMILY_T2561649708_H
#ifndef RUNTIMEPLATFORM_T3700075968_H
#define RUNTIMEPLATFORM_T3700075968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t3700075968 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_t3700075968, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T3700075968_H
#ifndef SPACE_T3556691464_H
#define SPACE_T3556691464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t3556691464 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t3556691464, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T3556691464_H
#ifndef PRIMITIVETYPE_T1967281191_H
#define PRIMITIVETYPE_T1967281191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t1967281191 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t1967281191, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T1967281191_H
#ifndef THREADPRIORITY_T889131918_H
#define THREADPRIORITY_T889131918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadPriority
struct  ThreadPriority_t889131918 
{
public:
	// System.Int32 UnityEngine.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_t889131918, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPRIORITY_T889131918_H
#ifndef PLAYABLEHANDLE_T1979518735_H
#define PLAYABLEHANDLE_T1979518735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1979518735 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1979518735, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1979518735, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1979518735_H
#ifndef TEXTURE_T990401831_H
#define TEXTURE_T990401831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t990401831  : public Object_t408436123
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T990401831_H
#ifndef MULTICASTDELEGATE_T2563738156_H
#define MULTICASTDELEGATE_T2563738156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2563738156  : public Delegate_t486270610
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1442489063* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2563738156, ___delegates_11)); }
	inline DelegateU5BU5D_t1442489063* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1442489063** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1442489063* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2563738156_marshaled_pinvoke : public Delegate_t486270610_marshaled_pinvoke
{
	DelegateU5BU5D_t1442489063* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2563738156_marshaled_com : public Delegate_t486270610_marshaled_com
{
	DelegateU5BU5D_t1442489063* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2563738156_H
#ifndef COMPONENT_T2891509687_H
#define COMPONENT_T2891509687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2891509687  : public Object_t408436123
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2891509687_H
#ifndef TEXTASSET_T83552751_H
#define TEXTASSET_T83552751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t83552751  : public Object_t408436123
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T83552751_H
#ifndef PLAYABLEOUTPUT_T3654415806_H
#define PLAYABLEOUTPUT_T3654415806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3654415806 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t2962676212  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3654415806, ___m_Handle_0)); }
	inline PlayableOutputHandle_t2962676212  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t2962676212 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t2962676212  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3654415806_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3654415806  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3654415806_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3654415806  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3654415806 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3654415806  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3654415806_H
#ifndef SPRITEATLAS_T382794067_H
#define SPRITEATLAS_T382794067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t382794067  : public Object_t408436123
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T382794067_H
#ifndef DIAGNOSTICSWITCH_T3615271249_H
#define DIAGNOSTICSWITCH_T3615271249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DiagnosticSwitch
struct  DiagnosticSwitch_t3615271249 
{
public:
	// System.String UnityEngine.DiagnosticSwitch::name
	String_t* ___name_0;
	// System.String UnityEngine.DiagnosticSwitch::description
	String_t* ___description_1;
	// UnityEngine.DiagnosticSwitchFlags UnityEngine.DiagnosticSwitch::flags
	int32_t ___flags_2;
	// System.Object UnityEngine.DiagnosticSwitch::value
	RuntimeObject * ___value_3;
	// System.Object UnityEngine.DiagnosticSwitch::minValue
	RuntimeObject * ___minValue_4;
	// System.Object UnityEngine.DiagnosticSwitch::maxValue
	RuntimeObject * ___maxValue_5;
	// System.Object UnityEngine.DiagnosticSwitch::persistentValue
	RuntimeObject * ___persistentValue_6;
	// UnityEngine.EnumInfo UnityEngine.DiagnosticSwitch::enumInfo
	EnumInfo_t1374982515 * ___enumInfo_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}

	inline static int32_t get_offset_of_minValue_4() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___minValue_4)); }
	inline RuntimeObject * get_minValue_4() const { return ___minValue_4; }
	inline RuntimeObject ** get_address_of_minValue_4() { return &___minValue_4; }
	inline void set_minValue_4(RuntimeObject * value)
	{
		___minValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___minValue_4), value);
	}

	inline static int32_t get_offset_of_maxValue_5() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___maxValue_5)); }
	inline RuntimeObject * get_maxValue_5() const { return ___maxValue_5; }
	inline RuntimeObject ** get_address_of_maxValue_5() { return &___maxValue_5; }
	inline void set_maxValue_5(RuntimeObject * value)
	{
		___maxValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___maxValue_5), value);
	}

	inline static int32_t get_offset_of_persistentValue_6() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___persistentValue_6)); }
	inline RuntimeObject * get_persistentValue_6() const { return ___persistentValue_6; }
	inline RuntimeObject ** get_address_of_persistentValue_6() { return &___persistentValue_6; }
	inline void set_persistentValue_6(RuntimeObject * value)
	{
		___persistentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___persistentValue_6), value);
	}

	inline static int32_t get_offset_of_enumInfo_7() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t3615271249, ___enumInfo_7)); }
	inline EnumInfo_t1374982515 * get_enumInfo_7() const { return ___enumInfo_7; }
	inline EnumInfo_t1374982515 ** get_address_of_enumInfo_7() { return &___enumInfo_7; }
	inline void set_enumInfo_7(EnumInfo_t1374982515 * value)
	{
		___enumInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___enumInfo_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.DiagnosticSwitch
struct DiagnosticSwitch_t3615271249_marshaled_pinvoke
{
	char* ___name_0;
	char* ___description_1;
	int32_t ___flags_2;
	Il2CppIUnknown* ___value_3;
	Il2CppIUnknown* ___minValue_4;
	Il2CppIUnknown* ___maxValue_5;
	Il2CppIUnknown* ___persistentValue_6;
	EnumInfo_t1374982515 * ___enumInfo_7;
};
// Native definition for COM marshalling of UnityEngine.DiagnosticSwitch
struct DiagnosticSwitch_t3615271249_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___description_1;
	int32_t ___flags_2;
	Il2CppIUnknown* ___value_3;
	Il2CppIUnknown* ___minValue_4;
	Il2CppIUnknown* ___maxValue_5;
	Il2CppIUnknown* ___persistentValue_6;
	EnumInfo_t1374982515 * ___enumInfo_7;
};
#endif // DIAGNOSTICSWITCH_T3615271249_H
#ifndef PLAYABLE_T2147805336_H
#define PLAYABLE_T2147805336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t2147805336 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1979518735  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t2147805336, ___m_Handle_0)); }
	inline PlayableHandle_t1979518735  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1979518735 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1979518735  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t2147805336_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t2147805336  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t2147805336_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t2147805336  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t2147805336 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t2147805336  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T2147805336_H
#ifndef REAPPLYDRIVENPROPERTIES_T1414399278_H
#define REAPPLYDRIVENPROPERTIES_T1414399278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1414399278  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T1414399278_H
#ifndef REQUESTATLASCALLBACK_T3930468335_H
#define REQUESTATLASCALLBACK_T3930468335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t3930468335  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T3930468335_H
#ifndef RENDERTEXTURE_T148392396_H
#define RENDERTEXTURE_T148392396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t148392396  : public Texture_t990401831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T148392396_H
#ifndef TEXTURE2D_T2295384068_H
#define TEXTURE2D_T2295384068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t2295384068  : public Texture_t990401831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T2295384068_H
#ifndef TRANSFORM_T3986277830_H
#define TRANSFORM_T3986277830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3986277830  : public Component_t2891509687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3986277830_H
#ifndef RECTTRANSFORM_T279665734_H
#define RECTTRANSFORM_T279665734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t279665734  : public Transform_t3986277830
{
public:

public:
};

struct RectTransform_t279665734_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1414399278 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t279665734_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1414399278 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1414399278 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1414399278 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T279665734_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (TextAsset_t83552751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (Texture_t990401831), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (Texture2D_t2295384068), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (RenderTexture_t148392396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (Time_t2936834198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (HideFlags_t3439328282)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3105[10] = 
{
	HideFlags_t3439328282::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (Object_t408436123), sizeof(Object_t408436123_marshaled_pinvoke), sizeof(Object_t408436123_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3106[2] = 
{
	Object_t408436123::get_offset_of_m_CachedPtr_0(),
	Object_t408436123_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (Hash128_t3308511727)+ sizeof (RuntimeObject), sizeof(Hash128_t3308511727 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3107[4] = 
{
	Hash128_t3308511727::get_offset_of_m_u32_0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Hash128_t3308511727::get_offset_of_m_u32_1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Hash128_t3308511727::get_offset_of_m_u32_2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Hash128_t3308511727::get_offset_of_m_u32_3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { sizeof (AudioType_t2053625028)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3108[14] = 
{
	AudioType_t2053625028::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { sizeof (UnityLogWriter_t1654351694), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (YieldInstruction_t1465229181), sizeof(YieldInstruction_t1465229181_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (PlayableHandle_t1979518735)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t1979518735 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3111[2] = 
{
	PlayableHandle_t1979518735::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t1979518735::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (Playable_t2147805336)+ sizeof (RuntimeObject), sizeof(Playable_t2147805336 ), sizeof(Playable_t2147805336_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3112[2] = 
{
	Playable_t2147805336::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t2147805336_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (DataStreamType_t865845630)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3113[5] = 
{
	DataStreamType_t865845630::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (PlayableGraph_t793053104)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t793053104 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3114[2] = 
{
	PlayableGraph_t793053104::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t793053104::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (PlayableOutputHandle_t2962676212)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t2962676212 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3115[2] = 
{
	PlayableOutputHandle_t2962676212::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t2962676212::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (PlayableOutput_t3654415806)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3654415806 ), sizeof(PlayableOutput_t3654415806_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3116[2] = 
{
	PlayableOutput_t3654415806::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3654415806_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (LocalNotification_t1851008101), -1, sizeof(LocalNotification_t1851008101_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3117[2] = 
{
	LocalNotification_t1851008101::get_offset_of_notificationWrapper_0(),
	LocalNotification_t1851008101_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (RemoteNotification_t555568574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3118[1] = 
{
	RemoteNotification_t555568574::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (Scene_t1268476840)+ sizeof (RuntimeObject), sizeof(Scene_t1268476840 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3119[1] = 
{
	Scene_t1268476840::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (LoadSceneMode_t1570612992)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3120[3] = 
{
	LoadSceneMode_t1570612992::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (SceneManager_t2788310816), -1, sizeof(SceneManager_t2788310816_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3121[3] = 
{
	SceneManager_t2788310816_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t2788310816_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t2788310816_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (ScriptableRenderContext_t2066735317)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t2066735317 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3122[1] = 
{
	ScriptableRenderContext_t2066735317::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (RotationOrder_t1667348975)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3123[7] = 
{
	RotationOrder_t1667348975::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (Transform_t3986277830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (Enumerator_t2066765163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3125[2] = 
{
	Enumerator_t2066765163::get_offset_of_outer_0(),
	Enumerator_t2066765163::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (DrivenTransformProperties_t1948712232)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3126[26] = 
{
	DrivenTransformProperties_t1948712232::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (DrivenRectTransformTracker_t1652648197)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t1652648197 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (RectTransform_t279665734), -1, sizeof(RectTransform_t279665734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3128[1] = 
{
	RectTransform_t279665734_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (ReapplyDrivenProperties_t1414399278), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (Edge_t827470582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3130[5] = 
{
	Edge_t827470582::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { sizeof (Axis_t669431017)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3131[3] = 
{
	Axis_t669431017::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { sizeof (SpriteAtlasManager_t585514181), -1, sizeof(SpriteAtlasManager_t585514181_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3132[2] = 
{
	SpriteAtlasManager_t585514181_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t585514181_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { sizeof (RequestAtlasCallback_t3930468335), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { sizeof (SpriteAtlas_t382794067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { sizeof (AttributeHelperEngine_t2152198672), -1, sizeof(AttributeHelperEngine_t2152198672_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3135[3] = 
{
	AttributeHelperEngine_t2152198672_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t2152198672_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t2152198672_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { sizeof (DisallowMultipleComponent_t4257730745), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { sizeof (RequireComponent_t2474655657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3137[3] = 
{
	RequireComponent_t2474655657::get_offset_of_m_Type0_0(),
	RequireComponent_t2474655657::get_offset_of_m_Type1_1(),
	RequireComponent_t2474655657::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { sizeof (AddComponentMenu_t65612958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3138[2] = 
{
	AddComponentMenu_t65612958::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t65612958::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { sizeof (ContextMenu_t3227819824), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { sizeof (ExecuteInEditMode_t3122664249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { sizeof (DefaultExecutionOrder_t3751755991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3141[1] = 
{
	DefaultExecutionOrder_t3751755991::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { sizeof (IL2CPPStructAlignmentAttribute_t2354164122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3142[1] = 
{
	IL2CPPStructAlignmentAttribute_t2354164122::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { sizeof (NativeClassAttribute_t2163769706), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3143[1] = 
{
	NativeClassAttribute_t2163769706::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { sizeof (AssemblyIsEditorAssembly_t2522071384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { sizeof (WritableAttribute_t3659974382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3146 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t1510859553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3147 = { sizeof (SendMessageOptions_t1548837066)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3147[3] = 
{
	SendMessageOptions_t1548837066::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3148 = { sizeof (PrimitiveType_t1967281191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3148[7] = 
{
	PrimitiveType_t1967281191::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3149 = { sizeof (Space_t3556691464)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3149[3] = 
{
	Space_t3556691464::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3150 = { sizeof (RuntimePlatform_t3700075968)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3150[34] = 
{
	RuntimePlatform_t3700075968::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3151 = { sizeof (OperatingSystemFamily_t2561649708)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3151[5] = 
{
	OperatingSystemFamily_t2561649708::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3152 = { sizeof (LogType_t3818471439)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3152[6] = 
{
	LogType_t3818471439::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3153 = { sizeof (ThreadPriority_t889131918)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3153[5] = 
{
	ThreadPriority_t889131918::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3154 = { sizeof (CachedAssetBundle_t657563705)+ sizeof (RuntimeObject), sizeof(CachedAssetBundle_t657563705_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3154[2] = 
{
	CachedAssetBundle_t657563705::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CachedAssetBundle_t657563705::get_offset_of_m_Hash_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3155[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3156 = { sizeof (ClassLibraryInitializer_t663876947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3157 = { sizeof (Color_t3988933665)+ sizeof (RuntimeObject), sizeof(Color_t3988933665 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3157[4] = 
{
	Color_t3988933665::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3988933665::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3988933665::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3988933665::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3158 = { sizeof (Color32_t3321179363)+ sizeof (RuntimeObject), sizeof(Color32_t3321179363 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3158[4] = 
{
	Color32_t3321179363::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t3321179363::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t3321179363::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t3321179363::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3159 = { sizeof (SetupCoroutine_t3329483733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3160 = { sizeof (DiagnosticSwitchFlags_t373171985)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3160[3] = 
{
	DiagnosticSwitchFlags_t373171985::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3161 = { sizeof (DiagnosticSwitch_t3615271249)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3161[8] = 
{
	DiagnosticSwitch_t3615271249::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_description_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_value_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_minValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_maxValue_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_persistentValue_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DiagnosticSwitch_t3615271249::get_offset_of_enumInfo_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3162 = { sizeof (EnumInfo_t1374982515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3163 = { sizeof (CameraClearFlags_t3571701723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3163[6] = 
{
	CameraClearFlags_t3571701723::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3164 = { sizeof (SkinQuality_t3722535983)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3164[5] = 
{
	SkinQuality_t3722535983::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3165 = { sizeof (TextureWrapMode_t2786360499)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3165[5] = 
{
	TextureWrapMode_t2786360499::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3166 = { sizeof (TextureFormat_t3826334072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3166[54] = 
{
	TextureFormat_t3826334072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3167 = { sizeof (CompareFunction_t1021696594)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3167[10] = 
{
	CompareFunction_t1021696594::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3168 = { sizeof (ColorWriteMask_t3830709933)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3168[6] = 
{
	ColorWriteMask_t3830709933::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3169 = { sizeof (StencilOp_t3012787869)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3169[9] = 
{
	StencilOp_t3012787869::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3170 = { sizeof (ShadowCastingMode_t3369283502)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3170[5] = 
{
	ShadowCastingMode_t3369283502::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3171 = { sizeof (ReflectionProbeUsage_t2246460229)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3171[5] = 
{
	ReflectionProbeUsage_t2246460229::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3172 = { sizeof (ReflectionProbeBlendInfo_t2257679837)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3172[2] = 
{
	ReflectionProbeBlendInfo_t2257679837::get_offset_of_probe_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReflectionProbeBlendInfo_t2257679837::get_offset_of_weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3173 = { sizeof (LightProbeUsage_t3266124225)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3173[4] = 
{
	LightProbeUsage_t3266124225::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3174 = { sizeof (GUIStateObjects_t542703444), -1, sizeof(GUIStateObjects_t542703444_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3174[1] = 
{
	GUIStateObjects_t542703444_StaticFields::get_offset_of_s_StateCache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3175 = { sizeof (KeyCode_t2583516222)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3175[322] = 
{
	KeyCode_t2583516222::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3176 = { sizeof (ManagedStreamHelpers_t973954020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3177 = { sizeof (MathfInternal_t1385595486)+ sizeof (RuntimeObject), sizeof(MathfInternal_t1385595486 ), sizeof(MathfInternal_t1385595486_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3177[3] = 
{
	MathfInternal_t1385595486_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t1385595486_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t1385595486_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3178 = { sizeof (ScriptingUtils_t1294835265), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3179 = { sizeof (SendMouseEvents_t2339349021), -1, sizeof(SendMouseEvents_t2339349021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3179[5] = 
{
	SendMouseEvents_t2339349021_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t2339349021_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t2339349021_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t2339349021_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t2339349021_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3180 = { sizeof (HitInfo_t2850451016)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3180[2] = 
{
	HitInfo_t2850451016::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t2850451016::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3181 = { sizeof (Plane_t4180683590)+ sizeof (RuntimeObject), sizeof(Plane_t4180683590 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3181[2] = 
{
	Plane_t4180683590::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t4180683590::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3182 = { sizeof (PropertyAttribute_t3167929710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3183 = { sizeof (TooltipAttribute_t4146912424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3183[1] = 
{
	TooltipAttribute_t4146912424::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3184 = { sizeof (SpaceAttribute_t1016393278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3184[1] = 
{
	SpaceAttribute_t1016393278::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3185 = { sizeof (RangeAttribute_t1013582630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3185[2] = 
{
	RangeAttribute_t1013582630::get_offset_of_min_0(),
	RangeAttribute_t1013582630::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3186 = { sizeof (TextAreaAttribute_t906842637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3186[2] = 
{
	TextAreaAttribute_t906842637::get_offset_of_minLines_0(),
	TextAreaAttribute_t906842637::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3187 = { sizeof (PropertyNameUtils_t2872828283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3188 = { sizeof (PropertyName_t543055053)+ sizeof (RuntimeObject), sizeof(PropertyName_t543055053 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3188[1] = 
{
	PropertyName_t543055053::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3189 = { sizeof (RangeInt_t3658259367)+ sizeof (RuntimeObject), sizeof(RangeInt_t3658259367 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3189[2] = 
{
	RangeInt_t3658259367::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t3658259367::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3190 = { sizeof (Ray_t895323317)+ sizeof (RuntimeObject), sizeof(Ray_t895323317 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3190[2] = 
{
	Ray_t895323317::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t895323317::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3191 = { sizeof (Ray2D_t2215830626)+ sizeof (RuntimeObject), sizeof(Ray2D_t2215830626 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3191[2] = 
{
	Ray2D_t2215830626::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray2D_t2215830626::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3192 = { sizeof (Rect_t1972721213)+ sizeof (RuntimeObject), sizeof(Rect_t1972721213 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3192[4] = 
{
	Rect_t1972721213::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1972721213::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1972721213::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1972721213::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3193 = { sizeof (SelectionBaseAttribute_t3516548680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3194 = { sizeof (SerializePrivateVariables_t2092534276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3195 = { sizeof (SerializeField_t2378171179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3196 = { sizeof (PreferBinarySerialization_t1802244115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3197 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3198 = { sizeof (StackTraceUtility_t1296780932), -1, sizeof(StackTraceUtility_t1296780932_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3198[1] = 
{
	StackTraceUtility_t1296780932_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3199 = { sizeof (UnityException_t782937631), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
