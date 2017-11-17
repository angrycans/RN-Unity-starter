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

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t3018186929;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t3042553775;
// System.Threading.ExecutionContext
struct ExecutionContext_t1570053076;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t2601911161;
// System.Threading.ContextCallback
struct ContextCallback_t4002018270;
// System.Action
struct Action_t1496373777;
// System.Threading.Tasks.Task
struct Task_t1659338782;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1016881794;
// System.Threading.WaitCallback
struct WaitCallback_t1130744583;
// System.String
struct String_t;
// System.Resources.NameOrId
struct NameOrId_t3201646188;
// System.Resources.ResourceManager/ResourceManagerMediator
struct ResourceManagerMediator_t3373229017;
// System.Collections.IDictionary
struct IDictionary_t2369680111;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2592104723;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t745537828;
// System.IntPtr[]
struct IntPtrU5BU5D_t68393292;
// System.Exception
struct Exception_t1895951012;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t2739800559;
// System.Void
struct Void_t237477608;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2284404197;
// System.Int32[]
struct Int32U5BU5D_t401338588;
// System.UInt32[]
struct UInt32U5BU5D_t1117984333;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1194799797;

struct Guid_t ;
struct Exception_t1895951012_marshaled_pinvoke;
struct Exception_t1895951012_marshaled_com;



// System.Runtime.InteropServices.IErrorInfo
struct NOVTABLE IErrorInfo_t1668042125 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m1820495157(Guid_t * ___pGuid0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m2762179254(Il2CppChar** ___pBstrSource0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m2385898703(Il2CppChar** ___pbstrDescription0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m2596014355(Il2CppChar** ___pBstrHelpFile0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m2331440059(uint32_t* ___pdwHelpContext0, int32_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo
struct NOVTABLE IRestrictedErrorInfo_t186340866 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped0_GetErrorDetails_m487263765() = 0;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped1_GetReference_m455003588() = 0;
};
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
#ifndef ASYNCTASKCACHE_T778011410_H
#define ASYNCTASKCACHE_T778011410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskCache
struct  AsyncTaskCache_t778011410  : public RuntimeObject
{
public:

public:
};

struct AsyncTaskCache_t778011410_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t3018186929 * ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t3018186929 * ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t3042553775* ___Int32Tasks_2;

public:
	inline static int32_t get_offset_of_TrueTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t778011410_StaticFields, ___TrueTask_0)); }
	inline Task_1_t3018186929 * get_TrueTask_0() const { return ___TrueTask_0; }
	inline Task_1_t3018186929 ** get_address_of_TrueTask_0() { return &___TrueTask_0; }
	inline void set_TrueTask_0(Task_1_t3018186929 * value)
	{
		___TrueTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___TrueTask_0), value);
	}

	inline static int32_t get_offset_of_FalseTask_1() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t778011410_StaticFields, ___FalseTask_1)); }
	inline Task_1_t3018186929 * get_FalseTask_1() const { return ___FalseTask_1; }
	inline Task_1_t3018186929 ** get_address_of_FalseTask_1() { return &___FalseTask_1; }
	inline void set_FalseTask_1(Task_1_t3018186929 * value)
	{
		___FalseTask_1 = value;
		Il2CppCodeGenWriteBarrier((&___FalseTask_1), value);
	}

	inline static int32_t get_offset_of_Int32Tasks_2() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t778011410_StaticFields, ___Int32Tasks_2)); }
	inline Task_1U5BU5D_t3042553775* get_Int32Tasks_2() const { return ___Int32Tasks_2; }
	inline Task_1U5BU5D_t3042553775** get_address_of_Int32Tasks_2() { return &___Int32Tasks_2; }
	inline void set_Int32Tasks_2(Task_1U5BU5D_t3042553775* value)
	{
		___Int32Tasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Tasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKCACHE_T778011410_H
#ifndef UNSAFENATIVEMETHODS_T2762231074_H
#define UNSAFENATIVEMETHODS_T2762231074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.UnsafeNativeMethods
struct  UnsafeNativeMethods_t2762231074  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T2762231074_H
#ifndef RUNTIMEHELPERS_T1287175917_H
#define RUNTIMEHELPERS_T1287175917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t1287175917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T1287175917_H
#ifndef JITHELPERS_T2999267910_H
#define JITHELPERS_T2999267910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t2999267910  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T2999267910_H
#ifndef MOVENEXTRUNNER_T854846491_H
#define MOVENEXTRUNNER_T854846491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct  MoveNextRunner_t854846491  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t1570053076 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_t854846491, ___m_context_0)); }
	inline ExecutionContext_t1570053076 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t1570053076 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t1570053076 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_0), value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_t854846491, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_1), value);
	}
};

struct MoveNextRunner_t854846491_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_t4002018270 * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_t854846491_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t4002018270 * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t4002018270 ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t4002018270 * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_invokeMoveNext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVENEXTRUNNER_T854846491_H
#ifndef CONTINUATIONWRAPPER_T3346912433_H
#define CONTINUATIONWRAPPER_T3346912433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
struct  ContinuationWrapper_t3346912433  : public RuntimeObject
{
public:
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_continuation
	Action_t1496373777 * ___m_continuation_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_invokeAction
	Action_t1496373777 * ___m_invokeAction_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_innerTask
	Task_t1659338782 * ___m_innerTask_2;

public:
	inline static int32_t get_offset_of_m_continuation_0() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t3346912433, ___m_continuation_0)); }
	inline Action_t1496373777 * get_m_continuation_0() const { return ___m_continuation_0; }
	inline Action_t1496373777 ** get_address_of_m_continuation_0() { return &___m_continuation_0; }
	inline void set_m_continuation_0(Action_t1496373777 * value)
	{
		___m_continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuation_0), value);
	}

	inline static int32_t get_offset_of_m_invokeAction_1() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t3346912433, ___m_invokeAction_1)); }
	inline Action_t1496373777 * get_m_invokeAction_1() const { return ___m_invokeAction_1; }
	inline Action_t1496373777 ** get_address_of_m_invokeAction_1() { return &___m_invokeAction_1; }
	inline void set_m_invokeAction_1(Action_t1496373777 * value)
	{
		___m_invokeAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_invokeAction_1), value);
	}

	inline static int32_t get_offset_of_m_innerTask_2() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t3346912433, ___m_innerTask_2)); }
	inline Task_t1659338782 * get_m_innerTask_2() const { return ___m_innerTask_2; }
	inline Task_t1659338782 ** get_address_of_m_innerTask_2() { return &___m_innerTask_2; }
	inline void set_m_innerTask_2(Task_t1659338782 * value)
	{
		___m_innerTask_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerTask_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUATIONWRAPPER_T3346912433_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T15464870_H
#define U3CU3EC__DISPLAYCLASS4_0_T15464870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t15464870  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::innerTask
	Task_t1659338782 * ___innerTask_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::continuation
	Action_t1496373777 * ___continuation_1;

public:
	inline static int32_t get_offset_of_innerTask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t15464870, ___innerTask_0)); }
	inline Task_t1659338782 * get_innerTask_0() const { return ___innerTask_0; }
	inline Task_t1659338782 ** get_address_of_innerTask_0() { return &___innerTask_0; }
	inline void set_innerTask_0(Task_t1659338782 * value)
	{
		___innerTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerTask_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t15464870, ___continuation_1)); }
	inline Action_t1496373777 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t1496373777 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t1496373777 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T15464870_H
#ifndef U3CU3EC_T1689348008_H
#define U3CU3EC_T1689348008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
struct  U3CU3Ec_t1689348008  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1689348008_StaticFields
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9
	U3CU3Ec_t1689348008 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_0
	SendOrPostCallback_t1016881794 * ___U3CU3E9__6_0_1;
	// System.Threading.WaitCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_1
	WaitCallback_t1130744583 * ___U3CU3E9__6_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1689348008_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1689348008 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1689348008 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1689348008 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1689348008_StaticFields, ___U3CU3E9__6_0_1)); }
	inline SendOrPostCallback_t1016881794 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline SendOrPostCallback_t1016881794 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(SendOrPostCallback_t1016881794 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1689348008_StaticFields, ___U3CU3E9__6_1_2)); }
	inline WaitCallback_t1130744583 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline WaitCallback_t1130744583 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(WaitCallback_t1130744583 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1689348008_H
#ifndef NAMEORID_T3201646188_H
#define NAMEORID_T3201646188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
struct  NameOrId_t3201646188  : public RuntimeObject
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t3201646188, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t3201646188, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEORID_T3201646188_H
#ifndef RUNTIMEENVIRONMENT_T1053071452_H
#define RUNTIMEENVIRONMENT_T1053071452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RuntimeEnvironment
struct  RuntimeEnvironment_t1053071452  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENVIRONMENT_T1053071452_H
#ifndef WIN32RESOURCE_T3901951203_H
#define WIN32RESOURCE_T3901951203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t3901951203  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t3201646188 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t3201646188 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t3901951203, ___type_0)); }
	inline NameOrId_t3201646188 * get_type_0() const { return ___type_0; }
	inline NameOrId_t3201646188 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t3201646188 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t3901951203, ___name_1)); }
	inline NameOrId_t3201646188 * get_name_1() const { return ___name_1; }
	inline NameOrId_t3201646188 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t3201646188 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESOURCE_T3901951203_H
#ifndef FASTRESOURCECOMPARER_T490354161_H
#define FASTRESOURCECOMPARER_T490354161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FastResourceComparer
struct  FastResourceComparer_t490354161  : public RuntimeObject
{
public:

public:
};

struct FastResourceComparer_t490354161_StaticFields
{
public:
	// System.Resources.FastResourceComparer System.Resources.FastResourceComparer::Default
	FastResourceComparer_t490354161 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FastResourceComparer_t490354161_StaticFields, ___Default_0)); }
	inline FastResourceComparer_t490354161 * get_Default_0() const { return ___Default_0; }
	inline FastResourceComparer_t490354161 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(FastResourceComparer_t490354161 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTRESOURCECOMPARER_T490354161_H
#ifndef FILEBASEDRESOURCEGROVELER_T3944556403_H
#define FILEBASEDRESOURCEGROVELER_T3944556403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FileBasedResourceGroveler
struct  FileBasedResourceGroveler_t3944556403  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.FileBasedResourceGroveler::_mediator
	ResourceManagerMediator_t3373229017 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(FileBasedResourceGroveler_t3944556403, ____mediator_0)); }
	inline ResourceManagerMediator_t3373229017 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t3373229017 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t3373229017 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEBASEDRESOURCEGROVELER_T3944556403_H
#ifndef VALUETYPE_T2839607602_H
#define VALUETYPE_T2839607602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2839607602  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2839607602_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2839607602_marshaled_com
{
};
#endif // VALUETYPE_T2839607602_H
#ifndef ATTRIBUTE_T2236125943_H
#define ATTRIBUTE_T2236125943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2236125943  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2236125943_H
#ifndef CRITICALFINALIZEROBJECT_T740142646_H
#define CRITICALFINALIZEROBJECT_T740142646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t740142646  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T740142646_H
#ifndef EVIDENCEBASE_T1129098351_H
#define EVIDENCEBASE_T1129098351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.EvidenceBase
struct  EvidenceBase_t1129098351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEBASE_T1129098351_H
#ifndef ISVOLATILE_T303529260_H
#define ISVOLATILE_T303529260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t303529260  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T303529260_H
#ifndef ERRORWRAPPER_T3787300947_H
#define ERRORWRAPPER_T3787300947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t3787300947  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::m_ErrorCode
	int32_t ___m_ErrorCode_0;

public:
	inline static int32_t get_offset_of_m_ErrorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t3787300947, ___m_ErrorCode_0)); }
	inline int32_t get_m_ErrorCode_0() const { return ___m_ErrorCode_0; }
	inline int32_t* get_address_of_m_ErrorCode_0() { return &___m_ErrorCode_0; }
	inline void set_m_ErrorCode_0(int32_t value)
	{
		___m_ErrorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T3787300947_H
#ifndef EXCEPTION_T1895951012_H
#define EXCEPTION_T1895951012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1895951012  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t1895951012 * ____innerException_4;
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
	SafeSerializationManager_t2592104723 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t745537828* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t68393292* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____innerException_4)); }
	inline Exception_t1895951012 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t1895951012 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t1895951012 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2592104723 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2592104723 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2592104723 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t745537828* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t745537828** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t745537828* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t1895951012, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t68393292* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t68393292** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t68393292* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t1895951012_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t1895951012_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t1895951012_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1895951012_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2592104723 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t745537828* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t1895951012_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1895951012_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2592104723 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t745537828* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T1895951012_H
#ifndef MANAGEDERRORINFO_T3978487595_H
#define MANAGEDERRORINFO_T3978487595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ManagedErrorInfo
struct  ManagedErrorInfo_t3978487595  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.InteropServices.ManagedErrorInfo::m_Exception
	Exception_t1895951012 * ___m_Exception_0;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ManagedErrorInfo_t3978487595, ___m_Exception_0)); }
	inline Exception_t1895951012 * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t1895951012 ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t1895951012 * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDERRORINFO_T3978487595_H
#ifndef MARSHAL_T542040022_H
#define MARSHAL_T542040022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t542040022  : public RuntimeObject
{
public:

public:
};

struct Marshal_t542040022_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Boolean System.Runtime.InteropServices.Marshal::SetErrorInfoNotAvailable
	bool ___SetErrorInfoNotAvailable_2;
	// System.Boolean System.Runtime.InteropServices.Marshal::GetErrorInfoNotAvailable
	bool ___GetErrorInfoNotAvailable_3;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t542040022_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t542040022_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t542040022_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t542040022_StaticFields, ___GetErrorInfoNotAvailable_3)); }
	inline bool get_GetErrorInfoNotAvailable_3() const { return ___GetErrorInfoNotAvailable_3; }
	inline bool* get_address_of_GetErrorInfoNotAvailable_3() { return &___GetErrorInfoNotAvailable_3; }
	inline void set_GetErrorInfoNotAvailable_3(bool value)
	{
		___GetErrorInfoNotAvailable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T542040022_H
#ifndef OUTATTRIBUTE_T335657942_H
#define OUTATTRIBUTE_T335657942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t335657942  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T335657942_H
#ifndef COMPILERGENERATEDATTRIBUTE_T3098544647_H
#define COMPILERGENERATEDATTRIBUTE_T3098544647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t3098544647  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T3098544647_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T234000118_H
#define CUSTOMCONSTANTATTRIBUTE_T234000118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t234000118  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T234000118_H
#ifndef INATTRIBUTE_T1469717536_H
#define INATTRIBUTE_T1469717536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t1469717536  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T1469717536_H
#ifndef EXTENSIONATTRIBUTE_T2811956508_H
#define EXTENSIONATTRIBUTE_T2811956508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t2811956508  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T2811956508_H
#ifndef FIXEDBUFFERATTRIBUTE_T768401417_H
#define FIXEDBUFFERATTRIBUTE_T768401417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t768401417  : public Attribute_t2236125943
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t768401417, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t768401417, ___length_1)); }
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
#endif // FIXEDBUFFERATTRIBUTE_T768401417_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T1633776541_H
#define INTERNALSVISIBLETOATTRIBUTE_T1633776541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t1633776541  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1633776541, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_0), value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1633776541, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T1633776541_H
#ifndef FRIENDACCESSALLOWEDATTRIBUTE_T1270164061_H
#define FRIENDACCESSALLOWEDATTRIBUTE_T1270164061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FriendAccessAllowedAttribute
struct  FriendAccessAllowedAttribute_t1270164061  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDACCESSALLOWEDATTRIBUTE_T1270164061_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T1933200402_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T1933200402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t1933200402  : public Attribute_t2236125943
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t1933200402, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T1933200402_H
#ifndef STATEMACHINEATTRIBUTE_T2700873383_H
#define STATEMACHINEATTRIBUTE_T2700873383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StateMachineAttribute
struct  StateMachineAttribute_t2700873383  : public Attribute_t2236125943
{
public:
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t * ___U3CStateMachineTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StateMachineAttribute_t2700873383, ___U3CStateMachineTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CStateMachineTypeU3Ek__BackingField_0() const { return ___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CStateMachineTypeU3Ek__BackingField_0() { return &___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline void set_U3CStateMachineTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CStateMachineTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStateMachineTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEATTRIBUTE_T2700873383_H
#ifndef TASKAWAITER_T2254524569_H
#define TASKAWAITER_T2254524569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t2254524569 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1659338782 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t2254524569, ___m_task_0)); }
	inline Task_t1659338782 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1659338782 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1659338782 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t2254524569_marshaled_pinvoke
{
	Task_t1659338782 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t2254524569_marshaled_com
{
	Task_t1659338782 * ___m_task_0;
};
#endif // TASKAWAITER_T2254524569_H
#ifndef TYPEDEPENDENCYATTRIBUTE_T4213603694_H
#define TYPEDEPENDENCYATTRIBUTE_T4213603694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeDependencyAttribute
struct  TypeDependencyAttribute_t4213603694  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.CompilerServices.TypeDependencyAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeDependencyAttribute_t4213603694, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDEPENDENCYATTRIBUTE_T4213603694_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T831274264_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T831274264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t831274264  : public Attribute_t2236125943
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t831274264, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T831274264_H
#ifndef TYPEFORWARDEDFROMATTRIBUTE_T751915045_H
#define TYPEFORWARDEDFROMATTRIBUTE_T751915045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeForwardedFromAttribute
struct  TypeForwardedFromAttribute_t751915045  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.CompilerServices.TypeForwardedFromAttribute::assemblyFullName
	String_t* ___assemblyFullName_0;

public:
	inline static int32_t get_offset_of_assemblyFullName_0() { return static_cast<int32_t>(offsetof(TypeForwardedFromAttribute_t751915045, ___assemblyFullName_0)); }
	inline String_t* get_assemblyFullName_0() const { return ___assemblyFullName_0; }
	inline String_t** get_address_of_assemblyFullName_0() { return &___assemblyFullName_0; }
	inline void set_assemblyFullName_0(String_t* value)
	{
		___assemblyFullName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyFullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFORWARDEDFROMATTRIBUTE_T751915045_H
#ifndef UNSAFEVALUETYPEATTRIBUTE_T1402256222_H
#define UNSAFEVALUETYPEATTRIBUTE_T1402256222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.UnsafeValueTypeAttribute
struct  UnsafeValueTypeAttribute_t1402256222  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEVALUETYPEATTRIBUTE_T1402256222_H
#ifndef DISPIDATTRIBUTE_T1669011326_H
#define DISPIDATTRIBUTE_T1669011326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t1669011326  : public Attribute_t2236125943
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t1669011326, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T1669011326_H
#ifndef WIN32VERSIONRESOURCE_T3294584464_H
#define WIN32VERSIONRESOURCE_T3294584464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32VersionResource
struct  Win32VersionResource_t3294584464  : public Win32Resource_t3901951203
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32VERSIONRESOURCE_T3294584464_H
#ifndef ENUM_T4037983940_H
#define ENUM_T4037983940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4037983940  : public ValueType_t2839607602
{
public:

public:
};

struct Enum_t4037983940_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t2739800559* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4037983940_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t2739800559* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t2739800559** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t2739800559* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4037983940_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4037983940_marshaled_com
{
};
#endif // ENUM_T4037983940_H
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
#ifndef SYSTEMEXCEPTION_T966492187_H
#define SYSTEMEXCEPTION_T966492187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t966492187  : public Exception_t1895951012
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T966492187_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2284404197 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2284404197 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t2284404197 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t2284404197 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t2284404197 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t2284404197 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t2284404197 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t2284404197 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATETIME_T683409619_H
#define DATETIME_T683409619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t683409619 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t683409619, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t683409619_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t401338588* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t401338588* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t683409619  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t683409619  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t683409619_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t401338588* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t401338588** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t401338588* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t683409619_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t401338588* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t401338588** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t401338588* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t683409619_StaticFields, ___MinValue_2)); }
	inline DateTime_t683409619  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t683409619 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t683409619  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t683409619_StaticFields, ___MaxValue_3)); }
	inline DateTime_t683409619  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t683409619 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t683409619  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T683409619_H
#ifndef CONFIGUREDTASKAWAITER_T2883366365_H
#define CONFIGUREDTASKAWAITER_T2883366365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t2883366365 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t1659338782 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2883366365, ___m_task_0)); }
	inline Task_t1659338782 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1659338782 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1659338782 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2883366365, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t2883366365_marshaled_pinvoke
{
	Task_t1659338782 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t2883366365_marshaled_com
{
	Task_t1659338782 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T2883366365_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T427073780_H
#define COMDEFAULTINTERFACEATTRIBUTE_T427073780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t427073780  : public Attribute_t2236125943
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_val
	Type_t * ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t427073780, ____val_0)); }
	inline Type_t * get__val_0() const { return ____val_0; }
	inline Type_t ** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(Type_t * value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T427073780_H
#ifndef GCHANDLE_T3413823742_H
#define GCHANDLE_T3413823742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3413823742 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3413823742, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3413823742_H
#ifndef COMIMPORTATTRIBUTE_T697538799_H
#define COMIMPORTATTRIBUTE_T697538799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t697538799  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T697538799_H
#ifndef ACTIVATIONARGUMENTS_T1292216299_H
#define ACTIVATIONARGUMENTS_T1292216299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t1292216299  : public EvidenceBase_t1129098351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T1292216299_H
#ifndef PRESERVESIGATTRIBUTE_T84628641_H
#define PRESERVESIGATTRIBUTE_T84628641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t84628641  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T84628641_H
#ifndef EPHEMERON_T3998537983_H
#define EPHEMERON_T3998537983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t3998537983 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t3998537983, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t3998537983, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t3998537983_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t3998537983_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T3998537983_H
#ifndef GUIDATTRIBUTE_T437843328_H
#define GUIDATTRIBUTE_T437843328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t437843328  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t437843328, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T437843328_H
#ifndef STRINGFREEZINGATTRIBUTE_T2380719370_H
#define STRINGFREEZINGATTRIBUTE_T2380719370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2380719370  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T2380719370_H
#ifndef BESTFITMAPPINGATTRIBUTE_T1177129132_H
#define BESTFITMAPPINGATTRIBUTE_T1177129132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t1177129132  : public Attribute_t2236125943
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::_bestFitMapping
	bool ____bestFitMapping_0;

public:
	inline static int32_t get_offset_of__bestFitMapping_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t1177129132, ____bestFitMapping_0)); }
	inline bool get__bestFitMapping_0() const { return ____bestFitMapping_0; }
	inline bool* get_address_of__bestFitMapping_0() { return &____bestFitMapping_0; }
	inline void set__bestFitMapping_0(bool value)
	{
		____bestFitMapping_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BESTFITMAPPINGATTRIBUTE_T1177129132_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2414903361_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2414903361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2414903361  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClassName
	String_t* ____importClassName_0;

public:
	inline static int32_t get_offset_of__importClassName_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2414903361, ____importClassName_0)); }
	inline String_t* get__importClassName_0() const { return ____importClassName_0; }
	inline String_t** get_address_of__importClassName_0() { return &____importClassName_0; }
	inline void set__importClassName_0(String_t* value)
	{
		____importClassName_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClassName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2414903361_H
#ifndef FIELDOFFSETATTRIBUTE_T735856662_H
#define FIELDOFFSETATTRIBUTE_T735856662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t735856662  : public Attribute_t2236125943
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t735856662, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T735856662_H
#ifndef DECIMAL_T338775544_H
#define DECIMAL_T338775544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t338775544 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t338775544, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t338775544, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t338775544, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t338775544, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t338775544_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t1117984333* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t338775544  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t338775544  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t338775544  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t338775544  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t338775544  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t338775544  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t338775544  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t1117984333* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t1117984333** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t1117984333* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___Zero_7)); }
	inline Decimal_t338775544  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t338775544 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t338775544  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___One_8)); }
	inline Decimal_t338775544  get_One_8() const { return ___One_8; }
	inline Decimal_t338775544 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t338775544  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___MinusOne_9)); }
	inline Decimal_t338775544  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t338775544 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t338775544  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___MaxValue_10)); }
	inline Decimal_t338775544  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t338775544 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t338775544  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___MinValue_11)); }
	inline Decimal_t338775544  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t338775544 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t338775544  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t338775544  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t338775544 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t338775544  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t338775544_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t338775544  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t338775544 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t338775544  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T338775544_H
#ifndef ASYNCMETHODBUILDERCORE_T3387846284_H
#define ASYNCMETHODBUILDERCORE_T3387846284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t3387846284 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1496373777 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3387846284, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3387846284, ___m_defaultContextAction_1)); }
	inline Action_t1496373777 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1496373777 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1496373777 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3387846284_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3387846284_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T3387846284_H
#ifndef OPTIONALATTRIBUTE_T1300816474_H
#define OPTIONALATTRIBUTE_T1300816474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t1300816474  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T1300816474_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T420575979_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T420575979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t420575979  : public Attribute_t2236125943
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_major
	int32_t ____major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_minor
	int32_t ____minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_build
	int32_t ____build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_revision
	int32_t ____revision_3;

public:
	inline static int32_t get_offset_of__major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t420575979, ____major_0)); }
	inline int32_t get__major_0() const { return ____major_0; }
	inline int32_t* get_address_of__major_0() { return &____major_0; }
	inline void set__major_0(int32_t value)
	{
		____major_0 = value;
	}

	inline static int32_t get_offset_of__minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t420575979, ____minor_1)); }
	inline int32_t get__minor_1() const { return ____minor_1; }
	inline int32_t* get_address_of__minor_1() { return &____minor_1; }
	inline void set__minor_1(int32_t value)
	{
		____minor_1 = value;
	}

	inline static int32_t get_offset_of__build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t420575979, ____build_2)); }
	inline int32_t get__build_2() const { return ____build_2; }
	inline int32_t* get_address_of__build_2() { return &____build_2; }
	inline void set__build_2(int32_t value)
	{
		____build_2 = value;
	}

	inline static int32_t get_offset_of__revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t420575979, ____revision_3)); }
	inline int32_t get__revision_3() const { return ____revision_3; }
	inline int32_t* get_address_of__revision_3() { return &____revision_3; }
	inline void set__revision_3(int32_t value)
	{
		____revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T420575979_H
#ifndef COMVISIBLEATTRIBUTE_T4104790806_H
#define COMVISIBLEATTRIBUTE_T4104790806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t4104790806  : public Attribute_t2236125943
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t4104790806, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T4104790806_H
#ifndef CALLINGCONVENTION_T2090553871_H
#define CALLINGCONVENTION_T2090553871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t2090553871 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_t2090553871, ___value___2)); }
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
#endif // CALLINGCONVENTION_T2090553871_H
#ifndef GCHANDLETYPE_T1269278611_H
#define GCHANDLETYPE_T1269278611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1269278611 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t1269278611, ___value___2)); }
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
#endif // GCHANDLETYPE_T1269278611_H
#ifndef CHARSET_T2212483935_H
#define CHARSET_T2212483935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t2212483935 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_t2212483935, ___value___2)); }
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
#endif // CHARSET_T2212483935_H
#ifndef ASYNCTASKMETHODBUILDER_1_T752903699_H
#define ASYNCTASKMETHODBUILDER_1_T752903699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t752903699 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t3387846284  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1194799797 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t752903699, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t3387846284  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t3387846284 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t3387846284  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t752903699, ___m_task_2)); }
	inline Task_1_t1194799797 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1194799797 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1194799797 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t752903699_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1194799797 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t752903699_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1194799797 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1194799797 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1194799797 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T752903699_H
#ifndef SAFEHANDLE_T2263620957_H
#define SAFEHANDLE_T2263620957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2263620957  : public CriticalFinalizerObject_t740142646
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2263620957, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t2263620957, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t2263620957, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t2263620957, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T2263620957_H
#ifndef COMINTERFACETYPE_T579520674_H
#define COMINTERFACETYPE_T579520674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t579520674 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComInterfaceType_t579520674, ___value___2)); }
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
#endif // COMINTERFACETYPE_T579520674_H
#ifndef WIN32RESOURCETYPE_T600791049_H
#define WIN32RESOURCETYPE_T600791049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResourceType
struct  Win32ResourceType_t600791049 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Win32ResourceType_t600791049, ___value___2)); }
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
#endif // WIN32RESOURCETYPE_T600791049_H
#ifndef EXTERNALEXCEPTION_T873590537_H
#define EXTERNALEXCEPTION_T873590537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t873590537  : public SystemException_t966492187
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T873590537_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T344271351_H
#define MARSHALDIRECTIVEEXCEPTION_T344271351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t344271351  : public SystemException_t966492187
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T344271351_H
#ifndef DECIMALCONSTANTATTRIBUTE_T3744319500_H
#define DECIMALCONSTANTATTRIBUTE_T3744319500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t3744319500  : public Attribute_t2236125943
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t338775544  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3744319500, ___dec_0)); }
	inline Decimal_t338775544  get_dec_0() const { return ___dec_0; }
	inline Decimal_t338775544 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t338775544  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T3744319500_H
#ifndef UNMANAGEDTYPE_T1469457139_H
#define UNMANAGEDTYPE_T1469457139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1469457139 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t1469457139, ___value___2)); }
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
#endif // UNMANAGEDTYPE_T1469457139_H
#ifndef WINDOWSRUNTIMEMARSHAL_T1622923615_H
#define WINDOWSRUNTIMEMARSHAL_T1622923615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal
struct  WindowsRuntimeMarshal_t1622923615  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeMarshal_t1622923615_StaticFields
{
public:
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_haveBlueErrorApis
	bool ___s_haveBlueErrorApis_0;
	// System.Guid System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_iidIErrorInfo
	Guid_t  ___s_iidIErrorInfo_1;

public:
	inline static int32_t get_offset_of_s_haveBlueErrorApis_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t1622923615_StaticFields, ___s_haveBlueErrorApis_0)); }
	inline bool get_s_haveBlueErrorApis_0() const { return ___s_haveBlueErrorApis_0; }
	inline bool* get_address_of_s_haveBlueErrorApis_0() { return &___s_haveBlueErrorApis_0; }
	inline void set_s_haveBlueErrorApis_0(bool value)
	{
		___s_haveBlueErrorApis_0 = value;
	}

	inline static int32_t get_offset_of_s_iidIErrorInfo_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t1622923615_StaticFields, ___s_iidIErrorInfo_1)); }
	inline Guid_t  get_s_iidIErrorInfo_1() const { return ___s_iidIErrorInfo_1; }
	inline Guid_t * get_address_of_s_iidIErrorInfo_1() { return &___s_iidIErrorInfo_1; }
	inline void set_s_iidIErrorInfo_1(Guid_t  value)
	{
		___s_iidIErrorInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEMARSHAL_T1622923615_H
#ifndef CLASSINTERFACETYPE_T3904572609_H
#define CLASSINTERFACETYPE_T3904572609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t3904572609 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t3904572609, ___value___2)); }
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
#endif // CLASSINTERFACETYPE_T3904572609_H
#ifndef METHODIMPLOPTIONS_T264624266_H
#define METHODIMPLOPTIONS_T264624266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t264624266 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplOptions_t264624266, ___value___2)); }
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
#endif // METHODIMPLOPTIONS_T264624266_H
#ifndef ITERATORSTATEMACHINEATTRIBUTE_T4006792450_H
#define ITERATORSTATEMACHINEATTRIBUTE_T4006792450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IteratorStateMachineAttribute
struct  IteratorStateMachineAttribute_t4006792450  : public StateMachineAttribute_t2700873383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATORSTATEMACHINEATTRIBUTE_T4006792450_H
#ifndef ASYNCSTATEMACHINEATTRIBUTE_T3449644170_H
#define ASYNCSTATEMACHINEATTRIBUTE_T3449644170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct  AsyncStateMachineAttribute_t3449644170  : public StateMachineAttribute_t2700873383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATEMACHINEATTRIBUTE_T3449644170_H
#ifndef COMPILATIONRELAXATIONS_T2817823895_H
#define COMPILATIONRELAXATIONS_T2817823895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t2817823895 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t2817823895, ___value___2)); }
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
#endif // COMPILATIONRELAXATIONS_T2817823895_H
#ifndef VARENUM_T1875031406_H
#define VARENUM_T1875031406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t1875031406 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t1875031406, ___value___2)); }
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
#endif // VARENUM_T1875031406_H
#ifndef CONFIGUREDTASKAWAITABLE_T1364922869_H
#define CONFIGUREDTASKAWAITABLE_T1364922869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t1364922869 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2883366365  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t1364922869, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2883366365  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2883366365 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2883366365  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t1364922869_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t2883366365_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t1364922869_marshaled_com
{
	ConfiguredTaskAwaiter_t2883366365_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T1364922869_H
#ifndef LOADHINT_T2692744166_H
#define LOADHINT_T2692744166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2692744166 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadHint_t2692744166, ___value___2)); }
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
#endif // LOADHINT_T2692744166_H
#ifndef DATETIMECONSTANTATTRIBUTE_T1747524979_H
#define DATETIMECONSTANTATTRIBUTE_T1747524979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t1747524979  : public CustomConstantAttribute_t234000118
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t683409619  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t1747524979, ___date_0)); }
	inline DateTime_t683409619  get_date_0() const { return ___date_0; }
	inline DateTime_t683409619 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t683409619  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T1747524979_H
#ifndef DLLIMPORTATTRIBUTE_T3942525232_H
#define DLLIMPORTATTRIBUTE_T3942525232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t3942525232  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.InteropServices.DllImportAttribute::_val
	String_t* ____val_0;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_1;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_2;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}

	inline static int32_t get_offset_of_EntryPoint_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___EntryPoint_1)); }
	inline String_t* get_EntryPoint_1() const { return ___EntryPoint_1; }
	inline String_t** get_address_of_EntryPoint_1() { return &___EntryPoint_1; }
	inline void set_EntryPoint_1(String_t* value)
	{
		___EntryPoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_1), value);
	}

	inline static int32_t get_offset_of_CharSet_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___CharSet_2)); }
	inline int32_t get_CharSet_2() const { return ___CharSet_2; }
	inline int32_t* get_address_of_CharSet_2() { return &___CharSet_2; }
	inline void set_CharSet_2(int32_t value)
	{
		___CharSet_2 = value;
	}

	inline static int32_t get_offset_of_SetLastError_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___SetLastError_3)); }
	inline bool get_SetLastError_3() const { return ___SetLastError_3; }
	inline bool* get_address_of_SetLastError_3() { return &___SetLastError_3; }
	inline void set_SetLastError_3(bool value)
	{
		___SetLastError_3 = value;
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_CallingConvention_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___CallingConvention_6)); }
	inline int32_t get_CallingConvention_6() const { return ___CallingConvention_6; }
	inline int32_t* get_address_of_CallingConvention_6() { return &___CallingConvention_6; }
	inline void set_CallingConvention_6(int32_t value)
	{
		___CallingConvention_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3942525232, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T3942525232_H
#ifndef ASYNCTASKMETHODBUILDER_T3054739682_H
#define ASYNCTASKMETHODBUILDER_T3054739682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3054739682 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t752903699  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3054739682, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t752903699  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t752903699 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t752903699  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3054739682_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1194799797 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3054739682_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1194799797 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1194799797 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1194799797 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3054739682_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t752903699  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3054739682_marshaled_com
{
	AsyncTaskMethodBuilder_1_t752903699  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3054739682_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T4004078343_H
#define DEFAULTDEPENDENCYATTRIBUTE_T4004078343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t4004078343  : public Attribute_t2236125943
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::loadHint
	int32_t ___loadHint_0;

public:
	inline static int32_t get_offset_of_loadHint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t4004078343, ___loadHint_0)); }
	inline int32_t get_loadHint_0() const { return ___loadHint_0; }
	inline int32_t* get_address_of_loadHint_0() { return &___loadHint_0; }
	inline void set_loadHint_0(int32_t value)
	{
		___loadHint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T4004078343_H
#ifndef MARSHALASATTRIBUTE_T2320250160_H
#define MARSHALASATTRIBUTE_T2320250160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t2320250160  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_0;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_1;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_2;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::SafeArrayUserDefinedSubType
	Type_t * ___SafeArrayUserDefinedSubType_3;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_4;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_5;
	// System.Runtime.InteropServices.VarEnum System.Runtime.InteropServices.MarshalAsAttribute::SafeArraySubType
	int32_t ___SafeArraySubType_6;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_7;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::IidParameterIndex
	int32_t ___IidParameterIndex_8;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_9;

public:
	inline static int32_t get_offset_of_MarshalCookie_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___MarshalCookie_0)); }
	inline String_t* get_MarshalCookie_0() const { return ___MarshalCookie_0; }
	inline String_t** get_address_of_MarshalCookie_0() { return &___MarshalCookie_0; }
	inline void set_MarshalCookie_0(String_t* value)
	{
		___MarshalCookie_0 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_0), value);
	}

	inline static int32_t get_offset_of_MarshalType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___MarshalType_1)); }
	inline String_t* get_MarshalType_1() const { return ___MarshalType_1; }
	inline String_t** get_address_of_MarshalType_1() { return &___MarshalType_1; }
	inline void set_MarshalType_1(String_t* value)
	{
		___MarshalType_1 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_1), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___MarshalTypeRef_2)); }
	inline Type_t * get_MarshalTypeRef_2() const { return ___MarshalTypeRef_2; }
	inline Type_t ** get_address_of_MarshalTypeRef_2() { return &___MarshalTypeRef_2; }
	inline void set_MarshalTypeRef_2(Type_t * value)
	{
		___MarshalTypeRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_2), value);
	}

	inline static int32_t get_offset_of_SafeArrayUserDefinedSubType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___SafeArrayUserDefinedSubType_3)); }
	inline Type_t * get_SafeArrayUserDefinedSubType_3() const { return ___SafeArrayUserDefinedSubType_3; }
	inline Type_t ** get_address_of_SafeArrayUserDefinedSubType_3() { return &___SafeArrayUserDefinedSubType_3; }
	inline void set_SafeArrayUserDefinedSubType_3(Type_t * value)
	{
		___SafeArrayUserDefinedSubType_3 = value;
		Il2CppCodeGenWriteBarrier((&___SafeArrayUserDefinedSubType_3), value);
	}

	inline static int32_t get_offset_of_utype_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___utype_4)); }
	inline int32_t get_utype_4() const { return ___utype_4; }
	inline int32_t* get_address_of_utype_4() { return &___utype_4; }
	inline void set_utype_4(int32_t value)
	{
		___utype_4 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___ArraySubType_5)); }
	inline int32_t get_ArraySubType_5() const { return ___ArraySubType_5; }
	inline int32_t* get_address_of_ArraySubType_5() { return &___ArraySubType_5; }
	inline void set_ArraySubType_5(int32_t value)
	{
		___ArraySubType_5 = value;
	}

	inline static int32_t get_offset_of_SafeArraySubType_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___SafeArraySubType_6)); }
	inline int32_t get_SafeArraySubType_6() const { return ___SafeArraySubType_6; }
	inline int32_t* get_address_of_SafeArraySubType_6() { return &___SafeArraySubType_6; }
	inline void set_SafeArraySubType_6(int32_t value)
	{
		___SafeArraySubType_6 = value;
	}

	inline static int32_t get_offset_of_SizeConst_7() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___SizeConst_7)); }
	inline int32_t get_SizeConst_7() const { return ___SizeConst_7; }
	inline int32_t* get_address_of_SizeConst_7() { return &___SizeConst_7; }
	inline void set_SizeConst_7(int32_t value)
	{
		___SizeConst_7 = value;
	}

	inline static int32_t get_offset_of_IidParameterIndex_8() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___IidParameterIndex_8)); }
	inline int32_t get_IidParameterIndex_8() const { return ___IidParameterIndex_8; }
	inline int32_t* get_address_of_IidParameterIndex_8() { return &___IidParameterIndex_8; }
	inline void set_IidParameterIndex_8(int32_t value)
	{
		___IidParameterIndex_8 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_9() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2320250160, ___SizeParamIndex_9)); }
	inline int16_t get_SizeParamIndex_9() const { return ___SizeParamIndex_9; }
	inline int16_t* get_address_of_SizeParamIndex_9() { return &___SizeParamIndex_9; }
	inline void set_SizeParamIndex_9(int16_t value)
	{
		___SizeParamIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T2320250160_H
#ifndef INTERFACETYPEATTRIBUTE_T1533862377_H
#define INTERFACETYPEATTRIBUTE_T1533862377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t1533862377  : public Attribute_t2236125943
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t1533862377, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T1533862377_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T326756344_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T326756344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t326756344  : public Attribute_t2236125943
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t326756344, ___m_callingConvention_0)); }
	inline int32_t get_m_callingConvention_0() const { return ___m_callingConvention_0; }
	inline int32_t* get_address_of_m_callingConvention_0() { return &___m_callingConvention_0; }
	inline void set_m_callingConvention_0(int32_t value)
	{
		___m_callingConvention_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T326756344_H
#ifndef COMEXCEPTION_T2536314464_H
#define COMEXCEPTION_T2536314464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t2536314464  : public ExternalException_t873590537
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T2536314464_H
#ifndef METHODIMPLATTRIBUTE_T3786641767_H
#define METHODIMPLATTRIBUTE_T3786641767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplAttribute
struct  MethodImplAttribute_t3786641767  : public Attribute_t2236125943
{
public:
	// System.Runtime.CompilerServices.MethodImplOptions System.Runtime.CompilerServices.MethodImplAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(MethodImplAttribute_t3786641767, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTE_T3786641767_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1213134353_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1213134353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1213134353  : public SafeHandle_t2263620957
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1213134353_H
#ifndef CLASSINTERFACEATTRIBUTE_T841312112_H
#define CLASSINTERFACEATTRIBUTE_T841312112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t841312112  : public Attribute_t2236125943
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t841312112, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T841312112_H
#ifndef SAFEBUFFER_T3015708817_H
#define SAFEBUFFER_T3015708817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeBuffer
struct  SafeBuffer_t3015708817  : public SafeHandleZeroOrMinusOneIsInvalid_t1213134353
{
public:
	// System.Boolean System.Runtime.InteropServices.SafeBuffer::inited
	bool ___inited_4;

public:
	inline static int32_t get_offset_of_inited_4() { return static_cast<int32_t>(offsetof(SafeBuffer_t3015708817, ___inited_4)); }
	inline bool get_inited_4() const { return ___inited_4; }
	inline bool* get_address_of_inited_4() { return &___inited_4; }
	inline void set_inited_4(bool value)
	{
		___inited_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBUFFER_T3015708817_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (GCHandle_t3413823742)+ sizeof (RuntimeObject), sizeof(GCHandle_t3413823742 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1009[1] = 
{
	GCHandle_t3413823742::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (GCHandleType_t1269278611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1010[5] = 
{
	GCHandleType_t1269278611::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { 0, sizeof(IErrorInfo_t1668042125*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (ManagedErrorInfo_t3978487595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1012[1] = 
{
	ManagedErrorInfo_t3978487595::get_offset_of_m_Exception_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (Marshal_t542040022), -1, sizeof(Marshal_t542040022_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1013[4] = 
{
	Marshal_t542040022_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t542040022_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
	Marshal_t542040022_StaticFields::get_offset_of_SetErrorInfoNotAvailable_2(),
	Marshal_t542040022_StaticFields::get_offset_of_GetErrorInfoNotAvailable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (MarshalAsAttribute_t2320250160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1014[10] = 
{
	MarshalAsAttribute_t2320250160::get_offset_of_MarshalCookie_0(),
	MarshalAsAttribute_t2320250160::get_offset_of_MarshalType_1(),
	MarshalAsAttribute_t2320250160::get_offset_of_MarshalTypeRef_2(),
	MarshalAsAttribute_t2320250160::get_offset_of_SafeArrayUserDefinedSubType_3(),
	MarshalAsAttribute_t2320250160::get_offset_of_utype_4(),
	MarshalAsAttribute_t2320250160::get_offset_of_ArraySubType_5(),
	MarshalAsAttribute_t2320250160::get_offset_of_SafeArraySubType_6(),
	MarshalAsAttribute_t2320250160::get_offset_of_SizeConst_7(),
	MarshalAsAttribute_t2320250160::get_offset_of_IidParameterIndex_8(),
	MarshalAsAttribute_t2320250160::get_offset_of_SizeParamIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (SafeBuffer_t3015708817), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1015[1] = 
{
	SafeBuffer_t3015708817::get_offset_of_inited_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (SafeHandle_t2263620957), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1016[4] = 
{
	SafeHandle_t2263620957::get_offset_of_handle_0(),
	SafeHandle_t2263620957::get_offset_of__state_1(),
	SafeHandle_t2263620957::get_offset_of__ownsHandle_2(),
	SafeHandle_t2263620957::get_offset_of__fullyInitialized_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (UnmanagedFunctionPointerAttribute_t326756344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1017[1] = 
{
	UnmanagedFunctionPointerAttribute_t326756344::get_offset_of_m_callingConvention_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (DispIdAttribute_t1669011326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[1] = 
{
	DispIdAttribute_t1669011326::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (ComInterfaceType_t579520674)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1019[5] = 
{
	ComInterfaceType_t579520674::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (InterfaceTypeAttribute_t1533862377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[1] = 
{
	InterfaceTypeAttribute_t1533862377::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (ComDefaultInterfaceAttribute_t427073780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[1] = 
{
	ComDefaultInterfaceAttribute_t427073780::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (ClassInterfaceType_t3904572609)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1022[4] = 
{
	ClassInterfaceType_t3904572609::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (ClassInterfaceAttribute_t841312112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[1] = 
{
	ClassInterfaceAttribute_t841312112::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (ComVisibleAttribute_t4104790806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[1] = 
{
	ComVisibleAttribute_t4104790806::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (TypeLibImportClassAttribute_t2414903361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1025[1] = 
{
	TypeLibImportClassAttribute_t2414903361::get_offset_of__importClassName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (VarEnum_t1875031406)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1026[45] = 
{
	VarEnum_t1875031406::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (UnmanagedType_t1469457139)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1027[39] = 
{
	UnmanagedType_t1469457139::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (ComImportAttribute_t697538799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (GuidAttribute_t437843328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1029[1] = 
{
	GuidAttribute_t437843328::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (PreserveSigAttribute_t84628641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (InAttribute_t1469717536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (OutAttribute_t335657942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (OptionalAttribute_t1300816474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (DllImportAttribute_t3942525232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1034[9] = 
{
	DllImportAttribute_t3942525232::get_offset_of__val_0(),
	DllImportAttribute_t3942525232::get_offset_of_EntryPoint_1(),
	DllImportAttribute_t3942525232::get_offset_of_CharSet_2(),
	DllImportAttribute_t3942525232::get_offset_of_SetLastError_3(),
	DllImportAttribute_t3942525232::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t3942525232::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t3942525232::get_offset_of_CallingConvention_6(),
	DllImportAttribute_t3942525232::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t3942525232::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (FieldOffsetAttribute_t735856662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1035[1] = 
{
	FieldOffsetAttribute_t735856662::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (ComCompatibleVersionAttribute_t420575979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1036[4] = 
{
	ComCompatibleVersionAttribute_t420575979::get_offset_of__major_0(),
	ComCompatibleVersionAttribute_t420575979::get_offset_of__minor_1(),
	ComCompatibleVersionAttribute_t420575979::get_offset_of__build_2(),
	ComCompatibleVersionAttribute_t420575979::get_offset_of__revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (BestFitMappingAttribute_t1177129132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1037[1] = 
{
	BestFitMappingAttribute_t1177129132::get_offset_of__bestFitMapping_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (CallingConvention_t2090553871)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1038[6] = 
{
	CallingConvention_t2090553871::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (CharSet_t2212483935)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1039[5] = 
{
	CharSet_t2212483935::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (COMException_t2536314464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (ErrorWrapper_t3787300947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1041[1] = 
{
	ErrorWrapper_t3787300947::get_offset_of_m_ErrorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (ExternalException_t873590537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (MarshalDirectiveException_t344271351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (RuntimeEnvironment_t1053071452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (UnsafeNativeMethods_t2762231074), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { 0, sizeof(IRestrictedErrorInfo_t186340866*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (WindowsRuntimeMarshal_t1622923615), -1, sizeof(WindowsRuntimeMarshal_t1622923615_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1047[2] = 
{
	WindowsRuntimeMarshal_t1622923615_StaticFields::get_offset_of_s_haveBlueErrorApis_0(),
	WindowsRuntimeMarshal_t1622923615_StaticFields::get_offset_of_s_iidIErrorInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (ActivationArguments_t1292216299), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (Ephemeron_t3998537983)+ sizeof (RuntimeObject), sizeof(Ephemeron_t3998537983_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1049[2] = 
{
	Ephemeron_t3998537983::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ephemeron_t3998537983::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1050[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (RuntimeHelpers_t1287175917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (JitHelpers_t2999267910), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (StringFreezingAttribute_t2380719370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (LoadHint_t2692744166)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1054[4] = 
{
	LoadHint_t2692744166::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (DefaultDependencyAttribute_t4004078343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1055[1] = 
{
	DefaultDependencyAttribute_t4004078343::get_offset_of_loadHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (AsyncTaskMethodBuilder_t3054739682)+ sizeof (RuntimeObject), -1, sizeof(AsyncTaskMethodBuilder_t3054739682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1056[2] = 
{
	AsyncTaskMethodBuilder_t3054739682_StaticFields::get_offset_of_s_cachedCompleted_0(),
	AsyncTaskMethodBuilder_t3054739682::get_offset_of_m_builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1057[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (AsyncTaskCache_t778011410), -1, sizeof(AsyncTaskCache_t778011410_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1058[3] = 
{
	AsyncTaskCache_t778011410_StaticFields::get_offset_of_TrueTask_0(),
	AsyncTaskCache_t778011410_StaticFields::get_offset_of_FalseTask_1(),
	AsyncTaskCache_t778011410_StaticFields::get_offset_of_Int32Tasks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (AsyncMethodBuilderCore_t3387846284)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1059[2] = 
{
	AsyncMethodBuilderCore_t3387846284::get_offset_of_m_stateMachine_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncMethodBuilderCore_t3387846284::get_offset_of_m_defaultContextAction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (MoveNextRunner_t854846491), -1, sizeof(MoveNextRunner_t854846491_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1060[3] = 
{
	MoveNextRunner_t854846491::get_offset_of_m_context_0(),
	MoveNextRunner_t854846491::get_offset_of_m_stateMachine_1(),
	MoveNextRunner_t854846491_StaticFields::get_offset_of_s_invokeMoveNext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (ContinuationWrapper_t3346912433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1061[3] = 
{
	ContinuationWrapper_t3346912433::get_offset_of_m_continuation_0(),
	ContinuationWrapper_t3346912433::get_offset_of_m_invokeAction_1(),
	ContinuationWrapper_t3346912433::get_offset_of_m_innerTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (U3CU3Ec__DisplayClass4_0_t15464870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1062[2] = 
{
	U3CU3Ec__DisplayClass4_0_t15464870::get_offset_of_innerTask_0(),
	U3CU3Ec__DisplayClass4_0_t15464870::get_offset_of_continuation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (U3CU3Ec_t1689348008), -1, sizeof(U3CU3Ec_t1689348008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1063[3] = 
{
	U3CU3Ec_t1689348008_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1689348008_StaticFields::get_offset_of_U3CU3E9__6_0_1(),
	U3CU3Ec_t1689348008_StaticFields::get_offset_of_U3CU3E9__6_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (AsyncStateMachineAttribute_t3449644170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (CompilationRelaxations_t2817823895)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1065[2] = 
{
	CompilationRelaxations_t2817823895::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (CompilationRelaxationsAttribute_t831274264), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1066[1] = 
{
	CompilationRelaxationsAttribute_t831274264::get_offset_of_m_relaxations_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (CompilerGeneratedAttribute_t3098544647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (CustomConstantAttribute_t234000118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (DateTimeConstantAttribute_t1747524979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[1] = 
{
	DateTimeConstantAttribute_t1747524979::get_offset_of_date_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (DecimalConstantAttribute_t3744319500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1070[1] = 
{
	DecimalConstantAttribute_t3744319500::get_offset_of_dec_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (ExtensionAttribute_t2811956508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (FixedBufferAttribute_t768401417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[2] = 
{
	FixedBufferAttribute_t768401417::get_offset_of_elementType_0(),
	FixedBufferAttribute_t768401417::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (InternalsVisibleToAttribute_t1633776541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1076[2] = 
{
	InternalsVisibleToAttribute_t1633776541::get_offset_of__assemblyName_0(),
	InternalsVisibleToAttribute_t1633776541::get_offset_of__allInternalsVisible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (FriendAccessAllowedAttribute_t1270164061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (IsVolatile_t303529260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (IteratorStateMachineAttribute_t4006792450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (MethodImplOptions_t264624266)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1080[9] = 
{
	MethodImplOptions_t264624266::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (MethodImplAttribute_t3786641767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1081[1] = 
{
	MethodImplAttribute_t3786641767::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (RuntimeCompatibilityAttribute_t1933200402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1082[1] = 
{
	RuntimeCompatibilityAttribute_t1933200402::get_offset_of_m_wrapNonExceptionThrows_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (StateMachineAttribute_t2700873383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1083[1] = 
{
	StateMachineAttribute_t2700873383::get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (TaskAwaiter_t2254524569)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1084[1] = 
{
	TaskAwaiter_t2254524569::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1085[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (ConfiguredTaskAwaitable_t1364922869)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[1] = 
{
	ConfiguredTaskAwaitable_t1364922869::get_offset_of_m_configuredTaskAwaiter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (ConfiguredTaskAwaiter_t2883366365)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1087[2] = 
{
	ConfiguredTaskAwaiter_t2883366365::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConfiguredTaskAwaiter_t2883366365::get_offset_of_m_continueOnCapturedContext_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1088[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (TypeDependencyAttribute_t4213603694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[1] = 
{
	TypeDependencyAttribute_t4213603694::get_offset_of_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (TypeForwardedFromAttribute_t751915045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1091[1] = 
{
	TypeForwardedFromAttribute_t751915045::get_offset_of_assemblyFullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (UnsafeValueTypeAttribute_t1402256222), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (Win32ResourceType_t600791049)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1094[21] = 
{
	Win32ResourceType_t600791049::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (NameOrId_t3201646188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1095[2] = 
{
	NameOrId_t3201646188::get_offset_of_name_0(),
	NameOrId_t3201646188::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (Win32Resource_t3901951203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1096[2] = 
{
	Win32Resource_t3901951203::get_offset_of_type_0(),
	Win32Resource_t3901951203::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (Win32VersionResource_t3294584464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (FastResourceComparer_t490354161), -1, sizeof(FastResourceComparer_t490354161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1098[1] = 
{
	FastResourceComparer_t490354161_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (FileBasedResourceGroveler_t3944556403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[1] = 
{
	FileBasedResourceGroveler_t3944556403::get_offset_of__mediator_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
