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
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t838865395;
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_t1282956080;
// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState>
struct Dictionary_2_t302432617;
// System.Char[]
struct CharU5BU5D_t1860498715;
// System.Type[]
struct TypeU5BU5D_t1776528574;
// System.Int32[]
struct Int32U5BU5D_t1593056302;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t1619578865;
// System.Security.Util.Tokenizer/StringMaker
struct StringMaker_t908835345;
// System.Double[]
struct DoubleU5BU5D_t161968971;
// System.Char
struct Char_t2413453678;
// System.Globalization.CompareInfo
struct CompareInfo_t197266613;
// System.Object[]
struct ObjectU5BU5D_t3295846574;
// System.Void
struct Void_t3395209399;
// System.Byte
struct Byte_t4086288798;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t2885200007;
// System.Action`1<System.Object>
struct Action_1_t3486213808;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3551330611;
// System.Byte[]
struct ByteU5BU5D_t1526353451;
// System.Int32
struct Int32_t1572026263;
// System.String[]
struct StringU5BU5D_t202926790;
// System.Reflection.MemberFilter
struct MemberFilter_t2922594904;
// System.Reflection.Binder
struct Binder_t1797978565;
// System.Delegate[]
struct DelegateU5BU5D_t1442489063;
// System.Version
struct Version_t1740450134;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2967903353;
// System.IAsyncResult
struct IAsyncResult_t2683198007;
// System.AsyncCallback
struct AsyncCallback_t350718677;
// System.MonoTypeInfo
struct MonoTypeInfo_t2583934034;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1470681582;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t3103248525;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2738320603;

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
#ifndef THROWHELPER_T643168555_H
#define THROWHELPER_T643168555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThrowHelper
struct  ThrowHelper_t643168555  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T643168555_H
#ifndef EVENTARGS_T464601784_H
#define EVENTARGS_T464601784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t464601784  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t464601784_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t464601784 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t464601784_StaticFields, ___Empty_0)); }
	inline EventArgs_t464601784 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t464601784 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t464601784 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T464601784_H
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
#ifndef DATETIMEPARSE_T1426086680_H
#define DATETIMEPARSE_T1426086680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse
struct  DateTimeParse_t1426086680  : public RuntimeObject
{
public:

public:
};

struct DateTimeParse_t1426086680_StaticFields
{
public:
	// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse::m_hebrewNumberParser
	MatchNumberDelegate_t838865395 * ___m_hebrewNumberParser_0;
	// System.DateTimeParse/DS[][] System.DateTimeParse::dateParsingStates
	DSU5BU5DU5BU5D_t1282956080* ___dateParsingStates_1;

public:
	inline static int32_t get_offset_of_m_hebrewNumberParser_0() { return static_cast<int32_t>(offsetof(DateTimeParse_t1426086680_StaticFields, ___m_hebrewNumberParser_0)); }
	inline MatchNumberDelegate_t838865395 * get_m_hebrewNumberParser_0() const { return ___m_hebrewNumberParser_0; }
	inline MatchNumberDelegate_t838865395 ** get_address_of_m_hebrewNumberParser_0() { return &___m_hebrewNumberParser_0; }
	inline void set_m_hebrewNumberParser_0(MatchNumberDelegate_t838865395 * value)
	{
		___m_hebrewNumberParser_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_hebrewNumberParser_0), value);
	}

	inline static int32_t get_offset_of_dateParsingStates_1() { return static_cast<int32_t>(offsetof(DateTimeParse_t1426086680_StaticFields, ___dateParsingStates_1)); }
	inline DSU5BU5DU5BU5D_t1282956080* get_dateParsingStates_1() const { return ___dateParsingStates_1; }
	inline DSU5BU5DU5BU5D_t1282956080** get_address_of_dateParsingStates_1() { return &___dateParsingStates_1; }
	inline void set_dateParsingStates_1(DSU5BU5DU5BU5D_t1282956080* value)
	{
		___dateParsingStates_1 = value;
		Il2CppCodeGenWriteBarrier((&___dateParsingStates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEPARSE_T1426086680_H
#ifndef APPCONTEXTDEFAULTVALUES_T4139740127_H
#define APPCONTEXTDEFAULTVALUES_T4139740127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextDefaultValues
struct  AppContextDefaultValues_t4139740127  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTDEFAULTVALUES_T4139740127_H
#ifndef APPCONTEXTSWITCHES_T4158727416_H
#define APPCONTEXTSWITCHES_T4158727416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextSwitches
struct  AppContextSwitches_t4158727416  : public RuntimeObject
{
public:

public:
};

struct AppContextSwitches_t4158727416_StaticFields
{
public:
	// System.Int32 System.AppContextSwitches::_noAsyncCurrentCulture
	int32_t ____noAsyncCurrentCulture_0;
	// System.Int32 System.AppContextSwitches::_throwExceptionIfDisposedCancellationTokenSource
	int32_t ____throwExceptionIfDisposedCancellationTokenSource_1;
	// System.Boolean System.AppContextSwitches::<DisableCaching>k__BackingField
	bool ___U3CDisableCachingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__noAsyncCurrentCulture_0() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4158727416_StaticFields, ____noAsyncCurrentCulture_0)); }
	inline int32_t get__noAsyncCurrentCulture_0() const { return ____noAsyncCurrentCulture_0; }
	inline int32_t* get_address_of__noAsyncCurrentCulture_0() { return &____noAsyncCurrentCulture_0; }
	inline void set__noAsyncCurrentCulture_0(int32_t value)
	{
		____noAsyncCurrentCulture_0 = value;
	}

	inline static int32_t get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4158727416_StaticFields, ____throwExceptionIfDisposedCancellationTokenSource_1)); }
	inline int32_t get__throwExceptionIfDisposedCancellationTokenSource_1() const { return ____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline int32_t* get_address_of__throwExceptionIfDisposedCancellationTokenSource_1() { return &____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline void set__throwExceptionIfDisposedCancellationTokenSource_1(int32_t value)
	{
		____throwExceptionIfDisposedCancellationTokenSource_1 = value;
	}

	inline static int32_t get_offset_of_U3CDisableCachingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4158727416_StaticFields, ___U3CDisableCachingU3Ek__BackingField_2)); }
	inline bool get_U3CDisableCachingU3Ek__BackingField_2() const { return ___U3CDisableCachingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CDisableCachingU3Ek__BackingField_2() { return &___U3CDisableCachingU3Ek__BackingField_2; }
	inline void set_U3CDisableCachingU3Ek__BackingField_2(bool value)
	{
		___U3CDisableCachingU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTSWITCHES_T4158727416_H
#ifndef APPCONTEXT_T962598582_H
#define APPCONTEXT_T962598582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext
struct  AppContext_t962598582  : public RuntimeObject
{
public:

public:
};

struct AppContext_t962598582_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState> System.AppContext::s_switchMap
	Dictionary_2_t302432617 * ___s_switchMap_0;

public:
	inline static int32_t get_offset_of_s_switchMap_0() { return static_cast<int32_t>(offsetof(AppContext_t962598582_StaticFields, ___s_switchMap_0)); }
	inline Dictionary_2_t302432617 * get_s_switchMap_0() const { return ___s_switchMap_0; }
	inline Dictionary_2_t302432617 ** get_address_of_s_switchMap_0() { return &___s_switchMap_0; }
	inline void set_s_switchMap_0(Dictionary_2_t302432617 * value)
	{
		___s_switchMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_switchMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXT_T962598582_H
#ifndef VERSION_T1740450134_H
#define VERSION_T1740450134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t1740450134  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t1740450134, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t1740450134, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t1740450134, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t1740450134, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t1740450134_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t1860498715* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t1740450134_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t1860498715* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t1860498715** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t1860498715* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T1740450134_H
#ifndef UNITYSERIALIZATIONHOLDER_T263366464_H
#define UNITYSERIALIZATIONHOLDER_T263366464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t263366464  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t1776528574* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t1593056302* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t1619578865 * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_instantiation_0)); }
	inline TypeU5BU5D_t1776528574* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t1776528574** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t1776528574* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_instantiation_0), value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t1593056302* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t1593056302** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t1593056302* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_elementTypes_1), value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringType_3), value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_declaringMethod_4)); }
	inline MethodBase_t1619578865 * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t1619578865 ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t1619578865 * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringMethod_4), value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_5), value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemblyName_6), value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t263366464, ___m_unityType_7)); }
	inline int32_t get_m_unityType_7() const { return ___m_unityType_7; }
	inline int32_t* get_address_of_m_unityType_7() { return &___m_unityType_7; }
	inline void set_m_unityType_7(int32_t value)
	{
		___m_unityType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T263366464_H
#ifndef STRINGCOMPARER_T236125212_H
#define STRINGCOMPARER_T236125212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t236125212  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t236125212_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t236125212 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t236125212 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t236125212 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t236125212 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t236125212_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t236125212 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t236125212 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t236125212 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t236125212_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t236125212 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t236125212 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t236125212 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t236125212_StaticFields, ____ordinal_2)); }
	inline StringComparer_t236125212 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t236125212 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t236125212 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t236125212_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t236125212 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t236125212 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t236125212 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T236125212_H
#ifndef SHAREDSTATICS_T1454961133_H
#define SHAREDSTATICS_T1454961133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SharedStatics
struct  SharedStatics_t1454961133  : public RuntimeObject
{
public:
	// System.Security.Util.Tokenizer/StringMaker System.SharedStatics::_maker
	StringMaker_t908835345 * ____maker_1;

public:
	inline static int32_t get_offset_of__maker_1() { return static_cast<int32_t>(offsetof(SharedStatics_t1454961133, ____maker_1)); }
	inline StringMaker_t908835345 * get__maker_1() const { return ____maker_1; }
	inline StringMaker_t908835345 ** get_address_of__maker_1() { return &____maker_1; }
	inline void set__maker_1(StringMaker_t908835345 * value)
	{
		____maker_1 = value;
		Il2CppCodeGenWriteBarrier((&____maker_1), value);
	}
};

struct SharedStatics_t1454961133_StaticFields
{
public:
	// System.SharedStatics System.SharedStatics::_sharedStatics
	SharedStatics_t1454961133 * ____sharedStatics_0;

public:
	inline static int32_t get_offset_of__sharedStatics_0() { return static_cast<int32_t>(offsetof(SharedStatics_t1454961133_StaticFields, ____sharedStatics_0)); }
	inline SharedStatics_t1454961133 * get__sharedStatics_0() const { return ____sharedStatics_0; }
	inline SharedStatics_t1454961133 ** get_address_of__sharedStatics_0() { return &____sharedStatics_0; }
	inline void set__sharedStatics_0(SharedStatics_t1454961133 * value)
	{
		____sharedStatics_0 = value;
		Il2CppCodeGenWriteBarrier((&____sharedStatics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDSTATICS_T1454961133_H
#ifndef RANDOM_T1846702370_H
#define RANDOM_T1846702370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1846702370  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t1593056302* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t1846702370, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t1846702370, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t1846702370, ___SeedArray_2)); }
	inline Int32U5BU5D_t1593056302* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t1593056302** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t1593056302* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1846702370_H
#ifndef NUMBER_T2045728665_H
#define NUMBER_T2045728665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number
struct  Number_t2045728665  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBER_T2045728665_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MATH_T3971696866_H
#define MATH_T3971696866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t3971696866  : public RuntimeObject
{
public:

public:
};

struct Math_t3971696866_StaticFields
{
public:
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_t161968971* ___roundPower10Double_1;

public:
	inline static int32_t get_offset_of_doubleRoundLimit_0() { return static_cast<int32_t>(offsetof(Math_t3971696866_StaticFields, ___doubleRoundLimit_0)); }
	inline double get_doubleRoundLimit_0() const { return ___doubleRoundLimit_0; }
	inline double* get_address_of_doubleRoundLimit_0() { return &___doubleRoundLimit_0; }
	inline void set_doubleRoundLimit_0(double value)
	{
		___doubleRoundLimit_0 = value;
	}

	inline static int32_t get_offset_of_roundPower10Double_1() { return static_cast<int32_t>(offsetof(Math_t3971696866_StaticFields, ___roundPower10Double_1)); }
	inline DoubleU5BU5D_t161968971* get_roundPower10Double_1() const { return ___roundPower10Double_1; }
	inline DoubleU5BU5D_t161968971** get_address_of_roundPower10Double_1() { return &___roundPower10Double_1; }
	inline void set_roundPower10Double_1(DoubleU5BU5D_t161968971* value)
	{
		___roundPower10Double_1 = value;
		Il2CppCodeGenWriteBarrier((&___roundPower10Double_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T3971696866_H
#ifndef GC_T3894232209_H
#define GC_T3894232209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t3894232209  : public RuntimeObject
{
public:

public:
};

struct GC_t3894232209_StaticFields
{
public:
	// System.Object System.GC::EPHEMERON_TOMBSTONE
	RuntimeObject * ___EPHEMERON_TOMBSTONE_0;

public:
	inline static int32_t get_offset_of_EPHEMERON_TOMBSTONE_0() { return static_cast<int32_t>(offsetof(GC_t3894232209_StaticFields, ___EPHEMERON_TOMBSTONE_0)); }
	inline RuntimeObject * get_EPHEMERON_TOMBSTONE_0() const { return ___EPHEMERON_TOMBSTONE_0; }
	inline RuntimeObject ** get_address_of_EPHEMERON_TOMBSTONE_0() { return &___EPHEMERON_TOMBSTONE_0; }
	inline void set_EPHEMERON_TOMBSTONE_0(RuntimeObject * value)
	{
		___EPHEMERON_TOMBSTONE_0 = value;
		Il2CppCodeGenWriteBarrier((&___EPHEMERON_TOMBSTONE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T3894232209_H
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
#ifndef SBYTE_T1923427693_H
#define SBYTE_T1923427693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1923427693 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1923427693, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1923427693_H
#ifndef UNSAFECHARBUFFER_T4051276432_H
#define UNSAFECHARBUFFER_T4051276432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t4051276432 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t4051276432, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t4051276432, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t4051276432, ___m_length_2)); }
	inline int32_t get_m_length_2() const { return ___m_length_2; }
	inline int32_t* get_address_of_m_length_2() { return &___m_length_2; }
	inline void set_m_length_2(int32_t value)
	{
		___m_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t4051276432_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t4051276432_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
#endif // UNSAFECHARBUFFER_T4051276432_H
#ifndef INVALIDTIMEZONEEXCEPTION_T865228470_H
#define INVALIDTIMEZONEEXCEPTION_T865228470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t865228470  : public Exception_t3693249845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T865228470_H
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
#ifndef __DTSTRING_T3154086286_H
#define __DTSTRING_T3154086286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t3154086286 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t197266613 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___m_info_4)); }
	inline CompareInfo_t197266613 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t197266613 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t197266613 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t3154086286, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t3154086286_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t1860498715* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t3154086286_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t1860498715* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t1860498715** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t1860498715* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t3154086286_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t197266613 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t3154086286_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t197266613 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T3154086286_H
#ifndef INT64_T895486500_H
#define INT64_T895486500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t895486500 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t895486500, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T895486500_H
#ifndef CULTUREAWARECOMPARER_T1691426937_H
#define CULTUREAWARECOMPARER_T1691426937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1691426937  : public StringComparer_t236125212
{
public:
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t197266613 * ____compareInfo_4;
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_5;

public:
	inline static int32_t get_offset_of__compareInfo_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1691426937, ____compareInfo_4)); }
	inline CompareInfo_t197266613 * get__compareInfo_4() const { return ____compareInfo_4; }
	inline CompareInfo_t197266613 ** get_address_of__compareInfo_4() { return &____compareInfo_4; }
	inline void set__compareInfo_4(CompareInfo_t197266613 * value)
	{
		____compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_4), value);
	}

	inline static int32_t get_offset_of__ignoreCase_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1691426937, ____ignoreCase_5)); }
	inline bool get__ignoreCase_5() const { return ____ignoreCase_5; }
	inline bool* get_address_of__ignoreCase_5() { return &____ignoreCase_5; }
	inline void set__ignoreCase_5(bool value)
	{
		____ignoreCase_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1691426937_H
#ifndef SYSTEMEXCEPTION_T3911392464_H
#define SYSTEMEXCEPTION_T3911392464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3911392464  : public Exception_t3693249845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3911392464_H
#ifndef THREADSTATICATTRIBUTE_T2834863730_H
#define THREADSTATICATTRIBUTE_T2834863730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t2834863730  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T2834863730_H
#ifndef UINT16_T2594693309_H
#define UINT16_T2594693309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2594693309 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2594693309, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2594693309_H
#ifndef UINT32_T4085920941_H
#define UINT32_T4085920941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4085920941 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4085920941, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4085920941_H
#ifndef INT16_T1608211152_H
#define INT16_T1608211152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t1608211152 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t1608211152, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T1608211152_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2967903353_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2967903353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2967903353  : public EventArgs_t464601784
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2967903353, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2967903353, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2967903353_H
#ifndef ORDINALCOMPARER_T3684393487_H
#define ORDINALCOMPARER_T3684393487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3684393487  : public StringComparer_t236125212
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3684393487, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3684393487_H
#ifndef UINT64_T2143496590_H
#define UINT64_T2143496590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t2143496590 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t2143496590, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T2143496590_H
#ifndef SERIALIZABLEATTRIBUTE_T692295426_H
#define SERIALIZABLEATTRIBUTE_T692295426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t692295426  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T692295426_H
#ifndef PARAMSARRAY_T771708856_H
#define PARAMSARRAY_T771708856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamsArray
struct  ParamsArray_t771708856 
{
public:
	// System.Object System.ParamsArray::arg0
	RuntimeObject * ___arg0_3;
	// System.Object System.ParamsArray::arg1
	RuntimeObject * ___arg1_4;
	// System.Object System.ParamsArray::arg2
	RuntimeObject * ___arg2_5;
	// System.Object[] System.ParamsArray::args
	ObjectU5BU5D_t3295846574* ___args_6;

public:
	inline static int32_t get_offset_of_arg0_3() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856, ___arg0_3)); }
	inline RuntimeObject * get_arg0_3() const { return ___arg0_3; }
	inline RuntimeObject ** get_address_of_arg0_3() { return &___arg0_3; }
	inline void set_arg0_3(RuntimeObject * value)
	{
		___arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_3), value);
	}

	inline static int32_t get_offset_of_arg1_4() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856, ___arg1_4)); }
	inline RuntimeObject * get_arg1_4() const { return ___arg1_4; }
	inline RuntimeObject ** get_address_of_arg1_4() { return &___arg1_4; }
	inline void set_arg1_4(RuntimeObject * value)
	{
		___arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_4), value);
	}

	inline static int32_t get_offset_of_arg2_5() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856, ___arg2_5)); }
	inline RuntimeObject * get_arg2_5() const { return ___arg2_5; }
	inline RuntimeObject ** get_address_of_arg2_5() { return &___arg2_5; }
	inline void set_arg2_5(RuntimeObject * value)
	{
		___arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_5), value);
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856, ___args_6)); }
	inline ObjectU5BU5D_t3295846574* get_args_6() const { return ___args_6; }
	inline ObjectU5BU5D_t3295846574** get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(ObjectU5BU5D_t3295846574* value)
	{
		___args_6 = value;
		Il2CppCodeGenWriteBarrier((&___args_6), value);
	}
};

struct ParamsArray_t771708856_StaticFields
{
public:
	// System.Object[] System.ParamsArray::oneArgArray
	ObjectU5BU5D_t3295846574* ___oneArgArray_0;
	// System.Object[] System.ParamsArray::twoArgArray
	ObjectU5BU5D_t3295846574* ___twoArgArray_1;
	// System.Object[] System.ParamsArray::threeArgArray
	ObjectU5BU5D_t3295846574* ___threeArgArray_2;

public:
	inline static int32_t get_offset_of_oneArgArray_0() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856_StaticFields, ___oneArgArray_0)); }
	inline ObjectU5BU5D_t3295846574* get_oneArgArray_0() const { return ___oneArgArray_0; }
	inline ObjectU5BU5D_t3295846574** get_address_of_oneArgArray_0() { return &___oneArgArray_0; }
	inline void set_oneArgArray_0(ObjectU5BU5D_t3295846574* value)
	{
		___oneArgArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___oneArgArray_0), value);
	}

	inline static int32_t get_offset_of_twoArgArray_1() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856_StaticFields, ___twoArgArray_1)); }
	inline ObjectU5BU5D_t3295846574* get_twoArgArray_1() const { return ___twoArgArray_1; }
	inline ObjectU5BU5D_t3295846574** get_address_of_twoArgArray_1() { return &___twoArgArray_1; }
	inline void set_twoArgArray_1(ObjectU5BU5D_t3295846574* value)
	{
		___twoArgArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___twoArgArray_1), value);
	}

	inline static int32_t get_offset_of_threeArgArray_2() { return static_cast<int32_t>(offsetof(ParamsArray_t771708856_StaticFields, ___threeArgArray_2)); }
	inline ObjectU5BU5D_t3295846574* get_threeArgArray_2() const { return ___threeArgArray_2; }
	inline ObjectU5BU5D_t3295846574** get_address_of_threeArgArray_2() { return &___threeArgArray_2; }
	inline void set_threeArgArray_2(ObjectU5BU5D_t3295846574* value)
	{
		___threeArgArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___threeArgArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParamsArray
struct ParamsArray_t771708856_marshaled_pinvoke
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t3295846574* ___args_6;
};
// Native definition for COM marshalling of System.ParamsArray
struct ParamsArray_t771708856_marshaled_com
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t3295846574* ___args_6;
};
#endif // PARAMSARRAY_T771708856_H
#ifndef NONSERIALIZEDATTRIBUTE_T74192848_H
#define NONSERIALIZEDATTRIBUTE_T74192848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t74192848  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T74192848_H
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
#ifndef NUMBERBUFFER_T2236156020_H
#define NUMBERBUFFER_T2236156020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number/NumberBuffer
struct  NumberBuffer_t2236156020 
{
public:
	// System.Byte* System.Number/NumberBuffer::baseAddress
	uint8_t* ___baseAddress_1;
	// System.Char* System.Number/NumberBuffer::digits
	Il2CppChar* ___digits_2;
	// System.Int32 System.Number/NumberBuffer::precision
	int32_t ___precision_3;
	// System.Int32 System.Number/NumberBuffer::scale
	int32_t ___scale_4;
	// System.Boolean System.Number/NumberBuffer::sign
	bool ___sign_5;

public:
	inline static int32_t get_offset_of_baseAddress_1() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020, ___baseAddress_1)); }
	inline uint8_t* get_baseAddress_1() const { return ___baseAddress_1; }
	inline uint8_t** get_address_of_baseAddress_1() { return &___baseAddress_1; }
	inline void set_baseAddress_1(uint8_t* value)
	{
		___baseAddress_1 = value;
	}

	inline static int32_t get_offset_of_digits_2() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020, ___digits_2)); }
	inline Il2CppChar* get_digits_2() const { return ___digits_2; }
	inline Il2CppChar** get_address_of_digits_2() { return &___digits_2; }
	inline void set_digits_2(Il2CppChar* value)
	{
		___digits_2 = value;
	}

	inline static int32_t get_offset_of_precision_3() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020, ___precision_3)); }
	inline int32_t get_precision_3() const { return ___precision_3; }
	inline int32_t* get_address_of_precision_3() { return &___precision_3; }
	inline void set_precision_3(int32_t value)
	{
		___precision_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020, ___scale_4)); }
	inline int32_t get_scale_4() const { return ___scale_4; }
	inline int32_t* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(int32_t value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020, ___sign_5)); }
	inline bool get_sign_5() const { return ___sign_5; }
	inline bool* get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(bool value)
	{
		___sign_5 = value;
	}
};

struct NumberBuffer_t2236156020_StaticFields
{
public:
	// System.Int32 System.Number/NumberBuffer::NumberBufferBytes
	int32_t ___NumberBufferBytes_0;

public:
	inline static int32_t get_offset_of_NumberBufferBytes_0() { return static_cast<int32_t>(offsetof(NumberBuffer_t2236156020_StaticFields, ___NumberBufferBytes_0)); }
	inline int32_t get_NumberBufferBytes_0() const { return ___NumberBufferBytes_0; }
	inline int32_t* get_address_of_NumberBufferBytes_0() { return &___NumberBufferBytes_0; }
	inline void set_NumberBufferBytes_0(int32_t value)
	{
		___NumberBufferBytes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Number/NumberBuffer
struct NumberBuffer_t2236156020_marshaled_pinvoke
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
// Native definition for COM marshalling of System.Number/NumberBuffer
struct NumberBuffer_t2236156020_marshaled_com
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
#endif // NUMBERBUFFER_T2236156020_H
#ifndef BOOLEAN_T1181726232_H
#define BOOLEAN_T1181726232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1181726232 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t1181726232, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t1181726232_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t1181726232_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t1181726232_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1181726232_H
#ifndef OBSOLETEATTRIBUTE_T985873749_H
#define OBSOLETEATTRIBUTE_T985873749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t985873749  : public Attribute_t2621428887
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t985873749, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t985873749, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T985873749_H
#ifndef INT32_T1572026263_H
#define INT32_T1572026263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1572026263 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t1572026263, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1572026263_H
#ifndef CANCELLATIONTOKEN_T3889982524_H
#define CANCELLATIONTOKEN_T3889982524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t3889982524 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t2885200007 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t3889982524, ___m_source_0)); }
	inline CancellationTokenSource_t2885200007 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t2885200007 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t2885200007 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t3889982524_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3486213808 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t3889982524_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3486213808 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3486213808 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3486213808 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t3889982524_marshaled_pinvoke
{
	CancellationTokenSource_t2885200007 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t3889982524_marshaled_com
{
	CancellationTokenSource_t2885200007 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T3889982524_H
#ifndef FLAGSATTRIBUTE_T3774907726_H
#define FLAGSATTRIBUTE_T3774907726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t3774907726  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T3774907726_H
#ifndef PARAMARRAYATTRIBUTE_T570295837_H
#define PARAMARRAYATTRIBUTE_T570295837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t570295837  : public Attribute_t2621428887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T570295837_H
#ifndef ARITHMETICEXCEPTION_T3808734584_H
#define ARITHMETICEXCEPTION_T3808734584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t3808734584  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T3808734584_H
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
#ifndef BINDINGFLAGS_T2724564040_H
#define BINDINGFLAGS_T2724564040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2724564040 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2724564040, ___value___2)); }
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
#endif // BINDINGFLAGS_T2724564040_H
#ifndef PARSEFAILUREKIND_T1250042209_H
#define PARSEFAILUREKIND_T1250042209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/ParseFailureKind
struct  ParseFailureKind_t1250042209 
{
public:
	// System.Int32 System.Version/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t1250042209, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T1250042209_H
#ifndef TOKENTYPE_T2121812130_H
#define TOKENTYPE_T2121812130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t2121812130 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t2121812130, ___value___2)); }
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
#endif // TOKENTYPE_T2121812130_H
#ifndef INVALIDPROGRAMEXCEPTION_T3301531607_H
#define INVALIDPROGRAMEXCEPTION_T3301531607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidProgramException
struct  InvalidProgramException_t3301531607  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMEXCEPTION_T3301531607_H
#ifndef SWITCHVALUESTATE_T2041385247_H
#define SWITCHVALUESTATE_T2041385247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t2041385247 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t2041385247, ___value___2)); }
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
#endif // SWITCHVALUESTATE_T2041385247_H
#ifndef INVALIDOPERATIONEXCEPTION_T4047946793_H
#define INVALIDOPERATIONEXCEPTION_T4047946793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t4047946793  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T4047946793_H
#ifndef INVALIDCASTEXCEPTION_T2775751428_H
#define INVALIDCASTEXCEPTION_T2775751428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t2775751428  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T2775751428_H
#ifndef DTSUBSTRINGTYPE_T52345313_H
#define DTSUBSTRINGTYPE_T52345313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t52345313 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t52345313, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T52345313_H
#ifndef DTT_T3193904483_H
#define DTT_T3193904483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DTT
struct  DTT_t3193904483 
{
public:
	// System.Int32 System.DateTimeParse/DTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTT_t3193904483, ___value___2)); }
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
#endif // DTT_T3193904483_H
#ifndef PARSEFLAGS_T1359084197_H
#define PARSEFLAGS_T1359084197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFlags
struct  ParseFlags_t1359084197 
{
public:
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFlags_t1359084197, ___value___2)); }
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
#endif // PARSEFLAGS_T1359084197_H
#ifndef TM_T888503279_H
#define TM_T888503279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/TM
struct  TM_t888503279 
{
public:
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TM_t888503279, ___value___2)); }
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
#endif // TM_T888503279_H
#ifndef FORMATEXCEPTION_T3765252861_H
#define FORMATEXCEPTION_T3765252861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t3765252861  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T3765252861_H
#ifndef EXECUTIONENGINEEXCEPTION_T1367645924_H
#define EXECUTIONENGINEEXCEPTION_T1367645924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t1367645924  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T1367645924_H
#ifndef PARSEFAILUREKIND_T1510780964_H
#define PARSEFAILUREKIND_T1510780964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFailureKind
struct  ParseFailureKind_t1510780964 
{
public:
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t1510780964, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T1510780964_H
#ifndef RUNTIMETYPEHANDLE_T4164564020_H
#define RUNTIMETYPEHANDLE_T4164564020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t4164564020 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t4164564020, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T4164564020_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1591238199_H
#define INDEXOUTOFRANGEEXCEPTION_T1591238199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1591238199  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1591238199_H
#ifndef DS_T2577368180_H
#define DS_T2577368180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DS
struct  DS_t2577368180 
{
public:
	// System.Int32 System.DateTimeParse/DS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DS_t2577368180, ___value___2)); }
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
#endif // DS_T2577368180_H
#ifndef EXCEPTIONMESSAGEKIND_T1586348570_H
#define EXCEPTIONMESSAGEKIND_T1586348570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception/ExceptionMessageKind
struct  ExceptionMessageKind_t1586348570 
{
public:
	// System.Int32 System.Exception/ExceptionMessageKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionMessageKind_t1586348570, ___value___2)); }
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
#endif // EXCEPTIONMESSAGEKIND_T1586348570_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T3731785404_H
#define UNAUTHORIZEDACCESSEXCEPTION_T3731785404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t3731785404  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T3731785404_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T1260659391_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T1260659391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t1260659391  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T1260659391_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T1611486822_H
#define NOTIMPLEMENTEDEXCEPTION_T1611486822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t1611486822  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T1611486822_H
#ifndef NOTSUPPORTEDEXCEPTION_T1641711765_H
#define NOTSUPPORTEDEXCEPTION_T1641711765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1641711765  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1641711765_H
#ifndef NULLREFERENCEEXCEPTION_T1566663021_H
#define NULLREFERENCEEXCEPTION_T1566663021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1566663021  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1566663021_H
#ifndef MEMBERACCESSEXCEPTION_T4221539861_H
#define MEMBERACCESSEXCEPTION_T4221539861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t4221539861  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T4221539861_H
#ifndef OPERATIONCANCELEDEXCEPTION_T3595030490_H
#define OPERATIONCANCELEDEXCEPTION_T3595030490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t3595030490  : public SystemException_t3911392464
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t3889982524  ____cancellationToken_16;

public:
	inline static int32_t get_offset_of__cancellationToken_16() { return static_cast<int32_t>(offsetof(OperationCanceledException_t3595030490, ____cancellationToken_16)); }
	inline CancellationToken_t3889982524  get__cancellationToken_16() const { return ____cancellationToken_16; }
	inline CancellationToken_t3889982524 * get_address_of__cancellationToken_16() { return &____cancellationToken_16; }
	inline void set__cancellationToken_16(CancellationToken_t3889982524  value)
	{
		____cancellationToken_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T3595030490_H
#ifndef OUTOFMEMORYEXCEPTION_T601198750_H
#define OUTOFMEMORYEXCEPTION_T601198750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t601198750  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T601198750_H
#ifndef RANKEXCEPTION_T1612711601_H
#define RANKEXCEPTION_T1612711601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t1612711601  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T1612711601_H
#ifndef TYPENAMEFORMATFLAGS_T2275139472_H
#define TYPENAMEFORMATFLAGS_T2275139472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_t2275139472 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_t2275139472, ___value___2)); }
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
#endif // TYPENAMEFORMATFLAGS_T2275139472_H
#ifndef STACKOVERFLOWEXCEPTION_T3294447853_H
#define STACKOVERFLOWEXCEPTION_T3294447853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3294447853  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3294447853_H
#ifndef STRINGSPLITOPTIONS_T3157134224_H
#define STRINGSPLITOPTIONS_T3157134224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t3157134224 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t3157134224, ___value___2)); }
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
#endif // STRINGSPLITOPTIONS_T3157134224_H
#ifndef TYPENAMEKIND_T2121396415_H
#define TYPENAMEKIND_T2121396415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameKind
struct  TypeNameKind_t2121396415 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t2121396415, ___value___2)); }
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
#endif // TYPENAMEKIND_T2121396415_H
#ifndef TIMESPAN_T1921238100_H
#define TIMESPAN_T1921238100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1921238100 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1921238100_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1921238100  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1921238100  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1921238100  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100_StaticFields, ___Zero_0)); }
	inline TimeSpan_t1921238100  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t1921238100 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t1921238100  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t1921238100  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t1921238100 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t1921238100  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t1921238100  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t1921238100 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t1921238100  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t1921238100_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1921238100_H
#ifndef TYPELOADEXCEPTION_T3488971209_H
#define TYPELOADEXCEPTION_T3488971209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3488971209  : public SystemException_t3911392464
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_16;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_17;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_18;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_19;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(TypeLoadException_t3488971209, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_AssemblyName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t3488971209, ___AssemblyName_17)); }
	inline String_t* get_AssemblyName_17() const { return ___AssemblyName_17; }
	inline String_t** get_address_of_AssemblyName_17() { return &___AssemblyName_17; }
	inline void set_AssemblyName_17(String_t* value)
	{
		___AssemblyName_17 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_17), value);
	}

	inline static int32_t get_offset_of_MessageArg_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t3488971209, ___MessageArg_18)); }
	inline String_t* get_MessageArg_18() const { return ___MessageArg_18; }
	inline String_t** get_address_of_MessageArg_18() { return &___MessageArg_18; }
	inline void set_MessageArg_18(String_t* value)
	{
		___MessageArg_18 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_18), value);
	}

	inline static int32_t get_offset_of_ResourceId_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t3488971209, ___ResourceId_19)); }
	inline int32_t get_ResourceId_19() const { return ___ResourceId_19; }
	inline int32_t* get_address_of_ResourceId_19() { return &___ResourceId_19; }
	inline void set_ResourceId_19(int32_t value)
	{
		___ResourceId_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3488971209_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T436802032_H
#define TYPEINITIALIZATIONEXCEPTION_T436802032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t436802032  : public SystemException_t3911392464
{
public:
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_16;

public:
	inline static int32_t get_offset_of__typeName_16() { return static_cast<int32_t>(offsetof(TypeInitializationException_t436802032, ____typeName_16)); }
	inline String_t* get__typeName_16() const { return ____typeName_16; }
	inline String_t** get_address_of__typeName_16() { return &____typeName_16; }
	inline void set__typeName_16(String_t* value)
	{
		____typeName_16 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T436802032_H
#ifndef TIMEOUTEXCEPTION_T4290248113_H
#define TIMEOUTEXCEPTION_T4290248113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t4290248113  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T4290248113_H
#ifndef EXCEPTIONARGUMENT_T3903108202_H
#define EXCEPTIONARGUMENT_T3903108202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionArgument
struct  ExceptionArgument_t3903108202 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t3903108202, ___value___2)); }
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
#endif // EXCEPTIONARGUMENT_T3903108202_H
#ifndef EXCEPTIONRESOURCE_T3260914578_H
#define EXCEPTIONRESOURCE_T3260914578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionResource
struct  ExceptionResource_t3260914578 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_t3260914578, ___value___2)); }
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
#endif // EXCEPTIONRESOURCE_T3260914578_H
#ifndef DTSUBSTRING_T2012590026_H
#define DTSUBSTRING_T2012590026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t2012590026 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t2012590026, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t2012590026, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t2012590026, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t2012590026, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t2012590026, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t2012590026_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t2012590026_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T2012590026_H
#ifndef MISSINGMEMBEREXCEPTION_T1272154548_H
#define MISSINGMEMBEREXCEPTION_T1272154548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1272154548  : public MemberAccessException_t4221539861
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_16;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_17;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t1526353451* ___Signature_18;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(MissingMemberException_t1272154548, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_MemberName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t1272154548, ___MemberName_17)); }
	inline String_t* get_MemberName_17() const { return ___MemberName_17; }
	inline String_t** get_address_of_MemberName_17() { return &___MemberName_17; }
	inline void set_MemberName_17(String_t* value)
	{
		___MemberName_17 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_17), value);
	}

	inline static int32_t get_offset_of_Signature_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t1272154548, ___Signature_18)); }
	inline ByteU5BU5D_t1526353451* get_Signature_18() const { return ___Signature_18; }
	inline ByteU5BU5D_t1526353451** get_address_of_Signature_18() { return &___Signature_18; }
	inline void set_Signature_18(ByteU5BU5D_t1526353451* value)
	{
		___Signature_18 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1272154548_H
#ifndef DATETIMERAWINFO_T4066325587_H
#define DATETIMERAWINFO_T4066325587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeRawInfo
struct  DateTimeRawInfo_t4066325587 
{
public:
	// System.Int32* System.DateTimeRawInfo::num
	int32_t* ___num_0;
	// System.Int32 System.DateTimeRawInfo::numCount
	int32_t ___numCount_1;
	// System.Int32 System.DateTimeRawInfo::month
	int32_t ___month_2;
	// System.Int32 System.DateTimeRawInfo::year
	int32_t ___year_3;
	// System.Int32 System.DateTimeRawInfo::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Int32 System.DateTimeRawInfo::era
	int32_t ___era_5;
	// System.DateTimeParse/TM System.DateTimeRawInfo::timeMark
	int32_t ___timeMark_6;
	// System.Double System.DateTimeRawInfo::fraction
	double ___fraction_7;
	// System.Boolean System.DateTimeRawInfo::hasSameDateAndTimeSeparators
	bool ___hasSameDateAndTimeSeparators_8;
	// System.Boolean System.DateTimeRawInfo::timeZone
	bool ___timeZone_9;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___num_0)); }
	inline int32_t* get_num_0() const { return ___num_0; }
	inline int32_t** get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t* value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_numCount_1() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___numCount_1)); }
	inline int32_t get_numCount_1() const { return ___numCount_1; }
	inline int32_t* get_address_of_numCount_1() { return &___numCount_1; }
	inline void set_numCount_1(int32_t value)
	{
		___numCount_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_year_3() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___year_3)); }
	inline int32_t get_year_3() const { return ___year_3; }
	inline int32_t* get_address_of_year_3() { return &___year_3; }
	inline void set_year_3(int32_t value)
	{
		___year_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_era_5() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___era_5)); }
	inline int32_t get_era_5() const { return ___era_5; }
	inline int32_t* get_address_of_era_5() { return &___era_5; }
	inline void set_era_5(int32_t value)
	{
		___era_5 = value;
	}

	inline static int32_t get_offset_of_timeMark_6() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___timeMark_6)); }
	inline int32_t get_timeMark_6() const { return ___timeMark_6; }
	inline int32_t* get_address_of_timeMark_6() { return &___timeMark_6; }
	inline void set_timeMark_6(int32_t value)
	{
		___timeMark_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___fraction_7)); }
	inline double get_fraction_7() const { return ___fraction_7; }
	inline double* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(double value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_hasSameDateAndTimeSeparators_8() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___hasSameDateAndTimeSeparators_8)); }
	inline bool get_hasSameDateAndTimeSeparators_8() const { return ___hasSameDateAndTimeSeparators_8; }
	inline bool* get_address_of_hasSameDateAndTimeSeparators_8() { return &___hasSameDateAndTimeSeparators_8; }
	inline void set_hasSameDateAndTimeSeparators_8(bool value)
	{
		___hasSameDateAndTimeSeparators_8 = value;
	}

	inline static int32_t get_offset_of_timeZone_9() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t4066325587, ___timeZone_9)); }
	inline bool get_timeZone_9() const { return ___timeZone_9; }
	inline bool* get_address_of_timeZone_9() { return &___timeZone_9; }
	inline void set_timeZone_9(bool value)
	{
		___timeZone_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t4066325587_marshaled_pinvoke
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
// Native definition for COM marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t4066325587_marshaled_com
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
#endif // DATETIMERAWINFO_T4066325587_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T2200538252_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T2200538252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t2200538252  : public NotSupportedException_t1641711765
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T2200538252_H
#ifndef OVERFLOWEXCEPTION_T317108968_H
#define OVERFLOWEXCEPTION_T317108968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t317108968  : public ArithmeticException_t3808734584
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T317108968_H
#ifndef FIELDACCESSEXCEPTION_T3485206300_H
#define FIELDACCESSEXCEPTION_T3485206300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t3485206300  : public MemberAccessException_t4221539861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T3485206300_H
#ifndef DATETIMEFORMAT_T492383598_H
#define DATETIMEFORMAT_T492383598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeFormat
struct  DateTimeFormat_t492383598  : public RuntimeObject
{
public:

public:
};

struct DateTimeFormat_t492383598_StaticFields
{
public:
	// System.TimeSpan System.DateTimeFormat::NullOffset
	TimeSpan_t1921238100  ___NullOffset_0;
	// System.Char[] System.DateTimeFormat::allStandardFormats
	CharU5BU5D_t1860498715* ___allStandardFormats_1;
	// System.String[] System.DateTimeFormat::fixedNumberFormats
	StringU5BU5D_t202926790* ___fixedNumberFormats_2;

public:
	inline static int32_t get_offset_of_NullOffset_0() { return static_cast<int32_t>(offsetof(DateTimeFormat_t492383598_StaticFields, ___NullOffset_0)); }
	inline TimeSpan_t1921238100  get_NullOffset_0() const { return ___NullOffset_0; }
	inline TimeSpan_t1921238100 * get_address_of_NullOffset_0() { return &___NullOffset_0; }
	inline void set_NullOffset_0(TimeSpan_t1921238100  value)
	{
		___NullOffset_0 = value;
	}

	inline static int32_t get_offset_of_allStandardFormats_1() { return static_cast<int32_t>(offsetof(DateTimeFormat_t492383598_StaticFields, ___allStandardFormats_1)); }
	inline CharU5BU5D_t1860498715* get_allStandardFormats_1() const { return ___allStandardFormats_1; }
	inline CharU5BU5D_t1860498715** get_address_of_allStandardFormats_1() { return &___allStandardFormats_1; }
	inline void set_allStandardFormats_1(CharU5BU5D_t1860498715* value)
	{
		___allStandardFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___allStandardFormats_1), value);
	}

	inline static int32_t get_offset_of_fixedNumberFormats_2() { return static_cast<int32_t>(offsetof(DateTimeFormat_t492383598_StaticFields, ___fixedNumberFormats_2)); }
	inline StringU5BU5D_t202926790* get_fixedNumberFormats_2() const { return ___fixedNumberFormats_2; }
	inline StringU5BU5D_t202926790** get_address_of_fixedNumberFormats_2() { return &___fixedNumberFormats_2; }
	inline void set_fixedNumberFormats_2(StringU5BU5D_t202926790* value)
	{
		___fixedNumberFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___fixedNumberFormats_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMAT_T492383598_H
#ifndef DATETIMETOKEN_T2564888895_H
#define DATETIMETOKEN_T2564888895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeToken
struct  DateTimeToken_t2564888895 
{
public:
	// System.DateTimeParse/DTT System.DateTimeToken::dtt
	int32_t ___dtt_0;
	// System.TokenType System.DateTimeToken::suffix
	int32_t ___suffix_1;
	// System.Int32 System.DateTimeToken::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_dtt_0() { return static_cast<int32_t>(offsetof(DateTimeToken_t2564888895, ___dtt_0)); }
	inline int32_t get_dtt_0() const { return ___dtt_0; }
	inline int32_t* get_address_of_dtt_0() { return &___dtt_0; }
	inline void set_dtt_0(int32_t value)
	{
		___dtt_0 = value;
	}

	inline static int32_t get_offset_of_suffix_1() { return static_cast<int32_t>(offsetof(DateTimeToken_t2564888895, ___suffix_1)); }
	inline int32_t get_suffix_1() const { return ___suffix_1; }
	inline int32_t* get_address_of_suffix_1() { return &___suffix_1; }
	inline void set_suffix_1(int32_t value)
	{
		___suffix_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(DateTimeToken_t2564888895, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMETOKEN_T2564888895_H
#ifndef OBJECTDISPOSEDEXCEPTION_T2189406634_H
#define OBJECTDISPOSEDEXCEPTION_T2189406634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t2189406634  : public InvalidOperationException_t4047946793
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_16;

public:
	inline static int32_t get_offset_of_objectName_16() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2189406634, ___objectName_16)); }
	inline String_t* get_objectName_16() const { return ___objectName_16; }
	inline String_t** get_address_of_objectName_16() { return &___objectName_16; }
	inline void set_objectName_16(String_t* value)
	{
		___objectName_16 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T2189406634_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t4164564020  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t4164564020  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t4164564020 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t4164564020  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t2922594904 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t2922594904 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t2922594904 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1776528574* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t1797978565 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t2922594904 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t2922594904 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t2922594904 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t2922594904 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t2922594904 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t2922594904 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t2922594904 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t2922594904 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t2922594904 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t1776528574* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t1776528574** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t1776528574* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t1797978565 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t1797978565 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t1797978565 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TYPEDREFERENCE_T4287736675_H
#define TYPEDREFERENCE_T4287736675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t4287736675 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t4164564020  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t4287736675, ___type_0)); }
	inline RuntimeTypeHandle_t4164564020  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t4164564020 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t4164564020  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t4287736675, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t4287736675, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T4287736675_H
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
#ifndef VERSIONRESULT_T239753079_H
#define VERSIONRESULT_T239753079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/VersionResult
struct  VersionResult_t239753079 
{
public:
	// System.Version System.Version/VersionResult::m_parsedVersion
	Version_t1740450134 * ___m_parsedVersion_0;
	// System.Version/ParseFailureKind System.Version/VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version/VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version/VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version/VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_t239753079, ___m_parsedVersion_0)); }
	inline Version_t1740450134 * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_t1740450134 ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_t1740450134 * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parsedVersion_0), value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_t239753079, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_t239753079, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionArgument_2), value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_t239753079, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_argumentName_3), value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_t239753079, ___m_canThrow_4)); }
	inline bool get_m_canThrow_4() const { return ___m_canThrow_4; }
	inline bool* get_address_of_m_canThrow_4() { return &___m_canThrow_4; }
	inline void set_m_canThrow_4(bool value)
	{
		___m_canThrow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Version/VersionResult
struct VersionResult_t239753079_marshaled_pinvoke
{
	Version_t1740450134 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_t239753079_marshaled_com
{
	Version_t1740450134 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
#endif // VERSIONRESULT_T239753079_H
#ifndef METHODACCESSEXCEPTION_T2366439676_H
#define METHODACCESSEXCEPTION_T2366439676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t2366439676  : public MemberAccessException_t4221539861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T2366439676_H
#ifndef MISSINGMETHODEXCEPTION_T331916236_H
#define MISSINGMETHODEXCEPTION_T331916236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t331916236  : public MissingMemberException_t1272154548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T331916236_H
#ifndef TYPEINFO_T4038389375_H
#define TYPEINFO_T4038389375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t4038389375  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T4038389375_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T1784484006_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T1784484006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1784484006  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T1784484006_H
#ifndef MATCHNUMBERDELEGATE_T838865395_H
#define MATCHNUMBERDELEGATE_T838865395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/MatchNumberDelegate
struct  MatchNumberDelegate_t838865395  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHNUMBERDELEGATE_T838865395_H
#ifndef MISSINGFIELDEXCEPTION_T2343415376_H
#define MISSINGFIELDEXCEPTION_T2343415376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t2343415376  : public MissingMemberException_t1272154548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T2343415376_H
#ifndef RUNTIMETYPE_T1688209989_H
#define RUNTIMETYPE_T1688209989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t1688209989  : public TypeInfo_t4038389375
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t2583934034 * ___type_info_10;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_11;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1470681582 * ___m_serializationCtor_12;

public:
	inline static int32_t get_offset_of_type_info_10() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989, ___type_info_10)); }
	inline MonoTypeInfo_t2583934034 * get_type_info_10() const { return ___type_info_10; }
	inline MonoTypeInfo_t2583934034 ** get_address_of_type_info_10() { return &___type_info_10; }
	inline void set_type_info_10(MonoTypeInfo_t2583934034 * value)
	{
		___type_info_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_10), value);
	}

	inline static int32_t get_offset_of_GenericCache_11() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989, ___GenericCache_11)); }
	inline RuntimeObject * get_GenericCache_11() const { return ___GenericCache_11; }
	inline RuntimeObject ** get_address_of_GenericCache_11() { return &___GenericCache_11; }
	inline void set_GenericCache_11(RuntimeObject * value)
	{
		___GenericCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_11), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_12() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989, ___m_serializationCtor_12)); }
	inline RuntimeConstructorInfo_t1470681582 * get_m_serializationCtor_12() const { return ___m_serializationCtor_12; }
	inline RuntimeConstructorInfo_t1470681582 ** get_address_of_m_serializationCtor_12() { return &___m_serializationCtor_12; }
	inline void set_m_serializationCtor_12(RuntimeConstructorInfo_t1470681582 * value)
	{
		___m_serializationCtor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_12), value);
	}
};

struct RuntimeType_t1688209989_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t3103248525 * ___clsid_types_13;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t2738320603 * ___clsid_assemblybuilder_14;
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t1688209989 * ___ValueType_15;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t1688209989 * ___EnumType_16;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t1688209989 * ___ObjectType_17;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t1688209989 * ___StringType_18;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t1688209989 * ___DelegateType_19;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t1776528574* ___s_SICtorParamTypes_20;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t1688209989 * ___s_typedRef_30;

public:
	inline static int32_t get_offset_of_clsid_types_13() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___clsid_types_13)); }
	inline Dictionary_2_t3103248525 * get_clsid_types_13() const { return ___clsid_types_13; }
	inline Dictionary_2_t3103248525 ** get_address_of_clsid_types_13() { return &___clsid_types_13; }
	inline void set_clsid_types_13(Dictionary_2_t3103248525 * value)
	{
		___clsid_types_13 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_13), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_14() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___clsid_assemblybuilder_14)); }
	inline AssemblyBuilder_t2738320603 * get_clsid_assemblybuilder_14() const { return ___clsid_assemblybuilder_14; }
	inline AssemblyBuilder_t2738320603 ** get_address_of_clsid_assemblybuilder_14() { return &___clsid_assemblybuilder_14; }
	inline void set_clsid_assemblybuilder_14(AssemblyBuilder_t2738320603 * value)
	{
		___clsid_assemblybuilder_14 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_14), value);
	}

	inline static int32_t get_offset_of_ValueType_15() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___ValueType_15)); }
	inline RuntimeType_t1688209989 * get_ValueType_15() const { return ___ValueType_15; }
	inline RuntimeType_t1688209989 ** get_address_of_ValueType_15() { return &___ValueType_15; }
	inline void set_ValueType_15(RuntimeType_t1688209989 * value)
	{
		___ValueType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_15), value);
	}

	inline static int32_t get_offset_of_EnumType_16() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___EnumType_16)); }
	inline RuntimeType_t1688209989 * get_EnumType_16() const { return ___EnumType_16; }
	inline RuntimeType_t1688209989 ** get_address_of_EnumType_16() { return &___EnumType_16; }
	inline void set_EnumType_16(RuntimeType_t1688209989 * value)
	{
		___EnumType_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_16), value);
	}

	inline static int32_t get_offset_of_ObjectType_17() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___ObjectType_17)); }
	inline RuntimeType_t1688209989 * get_ObjectType_17() const { return ___ObjectType_17; }
	inline RuntimeType_t1688209989 ** get_address_of_ObjectType_17() { return &___ObjectType_17; }
	inline void set_ObjectType_17(RuntimeType_t1688209989 * value)
	{
		___ObjectType_17 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_17), value);
	}

	inline static int32_t get_offset_of_StringType_18() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___StringType_18)); }
	inline RuntimeType_t1688209989 * get_StringType_18() const { return ___StringType_18; }
	inline RuntimeType_t1688209989 ** get_address_of_StringType_18() { return &___StringType_18; }
	inline void set_StringType_18(RuntimeType_t1688209989 * value)
	{
		___StringType_18 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_18), value);
	}

	inline static int32_t get_offset_of_DelegateType_19() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___DelegateType_19)); }
	inline RuntimeType_t1688209989 * get_DelegateType_19() const { return ___DelegateType_19; }
	inline RuntimeType_t1688209989 ** get_address_of_DelegateType_19() { return &___DelegateType_19; }
	inline void set_DelegateType_19(RuntimeType_t1688209989 * value)
	{
		___DelegateType_19 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_19), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_20() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___s_SICtorParamTypes_20)); }
	inline TypeU5BU5D_t1776528574* get_s_SICtorParamTypes_20() const { return ___s_SICtorParamTypes_20; }
	inline TypeU5BU5D_t1776528574** get_address_of_s_SICtorParamTypes_20() { return &___s_SICtorParamTypes_20; }
	inline void set_s_SICtorParamTypes_20(TypeU5BU5D_t1776528574* value)
	{
		___s_SICtorParamTypes_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_20), value);
	}

	inline static int32_t get_offset_of_s_typedRef_30() { return static_cast<int32_t>(offsetof(RuntimeType_t1688209989_StaticFields, ___s_typedRef_30)); }
	inline RuntimeType_t1688209989 * get_s_typedRef_30() const { return ___s_typedRef_30; }
	inline RuntimeType_t1688209989 ** get_address_of_s_typedRef_30() { return &___s_typedRef_30; }
	inline void set_s_typedRef_30(RuntimeType_t1688209989 * value)
	{
		___s_typedRef_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T1688209989_H
#ifndef REFLECTIONONLYTYPE_T3846254090_H
#define REFLECTIONONLYTYPE_T3846254090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ReflectionOnlyType
struct  ReflectionOnlyType_t3846254090  : public RuntimeType_t1688209989
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONONLYTYPE_T3846254090_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (ExceptionMessageKind_t1586348570)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable200[4] = 
{
	ExceptionMessageKind_t1586348570::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (ExecutionEngineException_t1367645924), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (FieldAccessException_t3485206300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (FlagsAttribute_t3774907726), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (FormatException_t3765252861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (GC_t3894232209), -1, sizeof(GC_t3894232209_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable205[1] = 
{
	GC_t3894232209_StaticFields::get_offset_of_EPHEMERON_TOMBSTONE_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (InvalidCastException_t2775751428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (IndexOutOfRangeException_t1591238199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (InvalidOperationException_t4047946793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (InvalidProgramException_t3301531607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (Int16_t1608211152)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable222[1] = 
{
	Int16_t1608211152::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (Int32_t1572026263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable223[3] = 
{
	Int32_t1572026263::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (Int64_t895486500)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable224[1] = 
{
	Int64_t895486500::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (InvalidTimeZoneException_t865228470), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (Math_t3971696866), -1, sizeof(Math_t3971696866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable227[2] = 
{
	Math_t3971696866_StaticFields::get_offset_of_doubleRoundLimit_0(),
	Math_t3971696866_StaticFields::get_offset_of_roundPower10Double_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (MemberAccessException_t4221539861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (MethodAccessException_t2366439676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (MissingFieldException_t2343415376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (MissingMemberException_t1272154548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable231[3] = 
{
	MissingMemberException_t1272154548::get_offset_of_ClassName_16(),
	MissingMemberException_t1272154548::get_offset_of_MemberName_17(),
	MissingMemberException_t1272154548::get_offset_of_Signature_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (MissingMethodException_t331916236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { sizeof (MulticastNotSupportedException_t1260659391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (NonSerializedAttribute_t74192848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (NotImplementedException_t1611486822), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (NotSupportedException_t1641711765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (NullReferenceException_t1566663021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (Number_t2045728665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (NumberBuffer_t2236156020)+ sizeof (RuntimeObject), sizeof(NumberBuffer_t2236156020_marshaled_pinvoke), sizeof(NumberBuffer_t2236156020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable239[6] = 
{
	NumberBuffer_t2236156020_StaticFields::get_offset_of_NumberBufferBytes_0(),
	NumberBuffer_t2236156020::get_offset_of_baseAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2236156020::get_offset_of_digits_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2236156020::get_offset_of_precision_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2236156020::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2236156020::get_offset_of_sign_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (ObjectDisposedException_t2189406634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable240[1] = 
{
	ObjectDisposedException_t2189406634::get_offset_of_objectName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (ObsoleteAttribute_t985873749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable241[2] = 
{
	ObsoleteAttribute_t985873749::get_offset_of__message_0(),
	ObsoleteAttribute_t985873749::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (OperationCanceledException_t3595030490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable242[1] = 
{
	OperationCanceledException_t3595030490::get_offset_of__cancellationToken_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (OutOfMemoryException_t601198750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (OverflowException_t317108968), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (ParamArrayAttribute_t570295837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (ParamsArray_t771708856)+ sizeof (RuntimeObject), -1, sizeof(ParamsArray_t771708856_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable246[7] = 
{
	ParamsArray_t771708856_StaticFields::get_offset_of_oneArgArray_0(),
	ParamsArray_t771708856_StaticFields::get_offset_of_twoArgArray_1(),
	ParamsArray_t771708856_StaticFields::get_offset_of_threeArgArray_2(),
	ParamsArray_t771708856::get_offset_of_arg0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t771708856::get_offset_of_arg1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t771708856::get_offset_of_arg2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t771708856::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (PlatformNotSupportedException_t2200538252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (Random_t1846702370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable248[3] = 
{
	Random_t1846702370::get_offset_of_inext_0(),
	Random_t1846702370::get_offset_of_inextp_1(),
	Random_t1846702370::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (RankException_t1612711601), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (TypeNameFormatFlags_t2275139472)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable250[11] = 
{
	TypeNameFormatFlags_t2275139472::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (TypeNameKind_t2121396415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable251[5] = 
{
	TypeNameKind_t2121396415::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (ReflectionOnlyType_t3846254090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (SByte_t1923427693)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable253[1] = 
{
	SByte_t1923427693::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (SerializableAttribute_t692295426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (SharedStatics_t1454961133), -1, sizeof(SharedStatics_t1454961133_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable255[2] = 
{
	SharedStatics_t1454961133_StaticFields::get_offset_of__sharedStatics_0(),
	SharedStatics_t1454961133::get_offset_of__maker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (StackOverflowException_t3294447853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (Single_t489102839)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable257[7] = 
{
	Single_t489102839::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (StringSplitOptions_t3157134224)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable258[3] = 
{
	StringSplitOptions_t3157134224::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (StringComparer_t236125212), -1, sizeof(StringComparer_t236125212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable259[4] = 
{
	StringComparer_t236125212_StaticFields::get_offset_of__invariantCulture_0(),
	StringComparer_t236125212_StaticFields::get_offset_of__invariantCultureIgnoreCase_1(),
	StringComparer_t236125212_StaticFields::get_offset_of__ordinal_2(),
	StringComparer_t236125212_StaticFields::get_offset_of__ordinalIgnoreCase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (CultureAwareComparer_t1691426937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable260[2] = 
{
	CultureAwareComparer_t1691426937::get_offset_of__compareInfo_4(),
	CultureAwareComparer_t1691426937::get_offset_of__ignoreCase_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (OrdinalComparer_t3684393487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable261[1] = 
{
	OrdinalComparer_t3684393487::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (SystemException_t3911392464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (TimeoutException_t4290248113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (TimeSpan_t1921238100)+ sizeof (RuntimeObject), sizeof(TimeSpan_t1921238100 ), sizeof(TimeSpan_t1921238100_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable264[6] = 
{
	TimeSpan_t1921238100_StaticFields::get_offset_of_Zero_0(),
	TimeSpan_t1921238100_StaticFields::get_offset_of_MaxValue_1(),
	TimeSpan_t1921238100_StaticFields::get_offset_of_MinValue_2(),
	TimeSpan_t1921238100::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpan_t1921238100_StaticFields::get_offset_of__legacyConfigChecked_4(),
	TimeSpan_t1921238100_StaticFields::get_offset_of__legacyMode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (ThreadStaticAttribute_t2834863730), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (ThrowHelper_t643168555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (ExceptionArgument_t3903108202)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable267[25] = 
{
	ExceptionArgument_t3903108202::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (ExceptionResource_t3260914578)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable268[47] = 
{
	ExceptionResource_t3260914578::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (TypeInitializationException_t436802032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable269[1] = 
{
	TypeInitializationException_t436802032::get_offset_of__typeName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (TypeLoadException_t3488971209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable270[4] = 
{
	TypeLoadException_t3488971209::get_offset_of_ClassName_16(),
	TypeLoadException_t3488971209::get_offset_of_AssemblyName_17(),
	TypeLoadException_t3488971209::get_offset_of_MessageArg_18(),
	TypeLoadException_t3488971209::get_offset_of_ResourceId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (TypedReference_t4287736675)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable271[3] = 
{
	TypedReference_t4287736675::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t4287736675::get_offset_of_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t4287736675::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (UInt16_t2594693309)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable272[1] = 
{
	UInt16_t2594693309::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (UInt32_t4085920941)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable273[3] = 
{
	UInt32_t4085920941::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (UInt64_t2143496590)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable274[1] = 
{
	UInt64_t2143496590::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (UnauthorizedAccessException_t3731785404), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (UnhandledExceptionEventArgs_t2967903353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable276[2] = 
{
	UnhandledExceptionEventArgs_t2967903353::get_offset_of__Exception_1(),
	UnhandledExceptionEventArgs_t2967903353::get_offset_of__IsTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (UnhandledExceptionEventHandler_t1784484006), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (UnitySerializationHolder_t263366464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable278[8] = 
{
	UnitySerializationHolder_t263366464::get_offset_of_m_instantiation_0(),
	UnitySerializationHolder_t263366464::get_offset_of_m_elementTypes_1(),
	UnitySerializationHolder_t263366464::get_offset_of_m_genericParameterPosition_2(),
	UnitySerializationHolder_t263366464::get_offset_of_m_declaringType_3(),
	UnitySerializationHolder_t263366464::get_offset_of_m_declaringMethod_4(),
	UnitySerializationHolder_t263366464::get_offset_of_m_data_5(),
	UnitySerializationHolder_t263366464::get_offset_of_m_assemblyName_6(),
	UnitySerializationHolder_t263366464::get_offset_of_m_unityType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (UnSafeCharBuffer_t4051276432)+ sizeof (RuntimeObject), sizeof(UnSafeCharBuffer_t4051276432_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable279[3] = 
{
	UnSafeCharBuffer_t4051276432::get_offset_of_m_buffer_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t4051276432::get_offset_of_m_totalSize_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t4051276432::get_offset_of_m_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (Version_t1740450134), -1, sizeof(Version_t1740450134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable280[6] = 
{
	Version_t1740450134::get_offset_of__Major_0(),
	Version_t1740450134::get_offset_of__Minor_1(),
	Version_t1740450134::get_offset_of__Build_2(),
	Version_t1740450134::get_offset_of__Revision_3(),
	Version_t1740450134_StaticFields::get_offset_of_SeparatorsArray_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (ParseFailureKind_t1250042209)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable281[5] = 
{
	ParseFailureKind_t1250042209::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (VersionResult_t239753079)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable282[5] = 
{
	VersionResult_t239753079::get_offset_of_m_parsedVersion_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t239753079::get_offset_of_m_failure_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t239753079::get_offset_of_m_exceptionArgument_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t239753079::get_offset_of_m_argumentName_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t239753079::get_offset_of_m_canThrow_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (AppContext_t962598582), -1, sizeof(AppContext_t962598582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	AppContext_t962598582_StaticFields::get_offset_of_s_switchMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (SwitchValueState_t2041385247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable284[5] = 
{
	SwitchValueState_t2041385247::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (AppContextSwitches_t4158727416), -1, sizeof(AppContextSwitches_t4158727416_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable285[3] = 
{
	AppContextSwitches_t4158727416_StaticFields::get_offset_of__noAsyncCurrentCulture_0(),
	AppContextSwitches_t4158727416_StaticFields::get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1(),
	AppContextSwitches_t4158727416_StaticFields::get_offset_of_U3CDisableCachingU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (AppContextDefaultValues_t4139740127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (DateTimeFormat_t492383598), -1, sizeof(DateTimeFormat_t492383598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable287[3] = 
{
	DateTimeFormat_t492383598_StaticFields::get_offset_of_NullOffset_0(),
	DateTimeFormat_t492383598_StaticFields::get_offset_of_allStandardFormats_1(),
	DateTimeFormat_t492383598_StaticFields::get_offset_of_fixedNumberFormats_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (DateTimeParse_t1426086680), -1, sizeof(DateTimeParse_t1426086680_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable288[2] = 
{
	DateTimeParse_t1426086680_StaticFields::get_offset_of_m_hebrewNumberParser_0(),
	DateTimeParse_t1426086680_StaticFields::get_offset_of_dateParsingStates_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (MatchNumberDelegate_t838865395), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (DTT_t3193904483)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable290[22] = 
{
	DTT_t3193904483::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (TM_t888503279)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable291[4] = 
{
	TM_t888503279::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (DS_t2577368180)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable292[40] = 
{
	DS_t2577368180::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (__DTString_t3154086286)+ sizeof (RuntimeObject), -1, sizeof(__DTString_t3154086286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable293[7] = 
{
	__DTString_t3154086286::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286::get_offset_of_len_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286::get_offset_of_m_current_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286::get_offset_of_m_info_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286::get_offset_of_m_checkDigitToken_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t3154086286_StaticFields::get_offset_of_WhiteSpaceChecks_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (DTSubStringType_t52345313)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable294[6] = 
{
	DTSubStringType_t52345313::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (DTSubString_t2012590026)+ sizeof (RuntimeObject), sizeof(DTSubString_t2012590026_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable295[5] = 
{
	DTSubString_t2012590026::get_offset_of_s_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t2012590026::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t2012590026::get_offset_of_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t2012590026::get_offset_of_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t2012590026::get_offset_of_value_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (DateTimeToken_t2564888895)+ sizeof (RuntimeObject), sizeof(DateTimeToken_t2564888895 ), 0, 0 };
extern const int32_t g_FieldOffsetTable296[3] = 
{
	DateTimeToken_t2564888895::get_offset_of_dtt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t2564888895::get_offset_of_suffix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t2564888895::get_offset_of_num_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (DateTimeRawInfo_t4066325587)+ sizeof (RuntimeObject), sizeof(DateTimeRawInfo_t4066325587_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable297[10] = 
{
	DateTimeRawInfo_t4066325587::get_offset_of_num_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_numCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_month_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_year_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_era_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_timeMark_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_fraction_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_hasSameDateAndTimeSeparators_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t4066325587::get_offset_of_timeZone_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (ParseFailureKind_t1510780964)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable298[6] = 
{
	ParseFailureKind_t1510780964::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (ParseFlags_t1359084197)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable299[16] = 
{
	ParseFlags_t1359084197::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
