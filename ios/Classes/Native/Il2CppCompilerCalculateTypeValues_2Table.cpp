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
struct IDictionary_t3994973483;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t697907711;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1856654997;
// System.IntPtr[]
struct IntPtrU5BU5D_t4117928909;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t829181835;
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_t4224182768;
// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState>
struct Dictionary_2_t3816378276;
// System.Char[]
struct CharU5BU5D_t1699394265;
// System.Type[]
struct TypeU5BU5D_t2478201611;
// System.Int32[]
struct Int32U5BU5D_t542481240;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t2219535545;
// System.Security.Util.Tokenizer/StringMaker
struct StringMaker_t811619399;
// System.Double[]
struct DoubleU5BU5D_t2739712427;
// System.Char
struct Char_t1436390408;
// System.Globalization.CompareInfo
struct CompareInfo_t4037591785;
// System.Object[]
struct ObjectU5BU5D_t1978347991;
// System.Void
struct Void_t4217116866;
// System.Byte
struct Byte_t885726038;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t944714143;
// System.Action`1<System.Object>
struct Action_1_t3709472613;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2502878004;
// System.Byte[]
struct ByteU5BU5D_t3406352019;
// System.Int32
struct Int32_t3220237365;
// System.String[]
struct StringU5BU5D_t2926391647;
// System.Reflection.MemberFilter
struct MemberFilter_t3823077846;
// System.Reflection.Binder
struct Binder_t2921483979;
// System.Delegate[]
struct DelegateU5BU5D_t2295054860;
// System.Version
struct Version_t850475422;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t219850330;
// System.IAsyncResult
struct IAsyncResult_t4156225140;
// System.AsyncCallback
struct AsyncCallback_t1302858180;
// System.MonoTypeInfo
struct MonoTypeInfo_t3553873356;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1907711032;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t3742941199;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t713001379;

struct Exception_t3092957848_marshaled_pinvoke;
struct Exception_t3092957848_marshaled_com;



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
#ifndef THROWHELPER_T880539173_H
#define THROWHELPER_T880539173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThrowHelper
struct  ThrowHelper_t880539173  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T880539173_H
#ifndef EVENTARGS_T1220260229_H
#define EVENTARGS_T1220260229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1220260229  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1220260229_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1220260229 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1220260229_StaticFields, ___Empty_0)); }
	inline EventArgs_t1220260229 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1220260229 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1220260229 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1220260229_H
#ifndef EXCEPTION_T3092957848_H
#define EXCEPTION_T3092957848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3092957848  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t3092957848 * ____innerException_4;
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
	SafeSerializationManager_t697907711 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1856654997* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4117928909* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____innerException_4)); }
	inline Exception_t3092957848 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t3092957848 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t3092957848 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t697907711 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t697907711 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t697907711 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1856654997* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1856654997** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1856654997* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t3092957848, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4117928909* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4117928909** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4117928909* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t3092957848_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t3092957848_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t3092957848_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3092957848_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t697907711 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1856654997* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t3092957848_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3092957848_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t697907711 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1856654997* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T3092957848_H
#ifndef VALUETYPE_T221354359_H
#define VALUETYPE_T221354359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t221354359  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t221354359_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t221354359_marshaled_com
{
};
#endif // VALUETYPE_T221354359_H
#ifndef ATTRIBUTE_T2551568327_H
#define ATTRIBUTE_T2551568327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2551568327  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2551568327_H
#ifndef DATETIMEPARSE_T142487781_H
#define DATETIMEPARSE_T142487781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse
struct  DateTimeParse_t142487781  : public RuntimeObject
{
public:

public:
};

struct DateTimeParse_t142487781_StaticFields
{
public:
	// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse::m_hebrewNumberParser
	MatchNumberDelegate_t829181835 * ___m_hebrewNumberParser_0;
	// System.DateTimeParse/DS[][] System.DateTimeParse::dateParsingStates
	DSU5BU5DU5BU5D_t4224182768* ___dateParsingStates_1;

public:
	inline static int32_t get_offset_of_m_hebrewNumberParser_0() { return static_cast<int32_t>(offsetof(DateTimeParse_t142487781_StaticFields, ___m_hebrewNumberParser_0)); }
	inline MatchNumberDelegate_t829181835 * get_m_hebrewNumberParser_0() const { return ___m_hebrewNumberParser_0; }
	inline MatchNumberDelegate_t829181835 ** get_address_of_m_hebrewNumberParser_0() { return &___m_hebrewNumberParser_0; }
	inline void set_m_hebrewNumberParser_0(MatchNumberDelegate_t829181835 * value)
	{
		___m_hebrewNumberParser_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_hebrewNumberParser_0), value);
	}

	inline static int32_t get_offset_of_dateParsingStates_1() { return static_cast<int32_t>(offsetof(DateTimeParse_t142487781_StaticFields, ___dateParsingStates_1)); }
	inline DSU5BU5DU5BU5D_t4224182768* get_dateParsingStates_1() const { return ___dateParsingStates_1; }
	inline DSU5BU5DU5BU5D_t4224182768** get_address_of_dateParsingStates_1() { return &___dateParsingStates_1; }
	inline void set_dateParsingStates_1(DSU5BU5DU5BU5D_t4224182768* value)
	{
		___dateParsingStates_1 = value;
		Il2CppCodeGenWriteBarrier((&___dateParsingStates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEPARSE_T142487781_H
#ifndef APPCONTEXTDEFAULTVALUES_T1407290779_H
#define APPCONTEXTDEFAULTVALUES_T1407290779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextDefaultValues
struct  AppContextDefaultValues_t1407290779  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTDEFAULTVALUES_T1407290779_H
#ifndef APPCONTEXTSWITCHES_T2998694100_H
#define APPCONTEXTSWITCHES_T2998694100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextSwitches
struct  AppContextSwitches_t2998694100  : public RuntimeObject
{
public:

public:
};

struct AppContextSwitches_t2998694100_StaticFields
{
public:
	// System.Int32 System.AppContextSwitches::_noAsyncCurrentCulture
	int32_t ____noAsyncCurrentCulture_0;
	// System.Int32 System.AppContextSwitches::_throwExceptionIfDisposedCancellationTokenSource
	int32_t ____throwExceptionIfDisposedCancellationTokenSource_1;
	// System.Boolean System.AppContextSwitches::<DisableCaching>k__BackingField
	bool ___U3CDisableCachingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__noAsyncCurrentCulture_0() { return static_cast<int32_t>(offsetof(AppContextSwitches_t2998694100_StaticFields, ____noAsyncCurrentCulture_0)); }
	inline int32_t get__noAsyncCurrentCulture_0() const { return ____noAsyncCurrentCulture_0; }
	inline int32_t* get_address_of__noAsyncCurrentCulture_0() { return &____noAsyncCurrentCulture_0; }
	inline void set__noAsyncCurrentCulture_0(int32_t value)
	{
		____noAsyncCurrentCulture_0 = value;
	}

	inline static int32_t get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1() { return static_cast<int32_t>(offsetof(AppContextSwitches_t2998694100_StaticFields, ____throwExceptionIfDisposedCancellationTokenSource_1)); }
	inline int32_t get__throwExceptionIfDisposedCancellationTokenSource_1() const { return ____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline int32_t* get_address_of__throwExceptionIfDisposedCancellationTokenSource_1() { return &____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline void set__throwExceptionIfDisposedCancellationTokenSource_1(int32_t value)
	{
		____throwExceptionIfDisposedCancellationTokenSource_1 = value;
	}

	inline static int32_t get_offset_of_U3CDisableCachingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppContextSwitches_t2998694100_StaticFields, ___U3CDisableCachingU3Ek__BackingField_2)); }
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
#endif // APPCONTEXTSWITCHES_T2998694100_H
#ifndef APPCONTEXT_T3837165335_H
#define APPCONTEXT_T3837165335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext
struct  AppContext_t3837165335  : public RuntimeObject
{
public:

public:
};

struct AppContext_t3837165335_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState> System.AppContext::s_switchMap
	Dictionary_2_t3816378276 * ___s_switchMap_0;

public:
	inline static int32_t get_offset_of_s_switchMap_0() { return static_cast<int32_t>(offsetof(AppContext_t3837165335_StaticFields, ___s_switchMap_0)); }
	inline Dictionary_2_t3816378276 * get_s_switchMap_0() const { return ___s_switchMap_0; }
	inline Dictionary_2_t3816378276 ** get_address_of_s_switchMap_0() { return &___s_switchMap_0; }
	inline void set_s_switchMap_0(Dictionary_2_t3816378276 * value)
	{
		___s_switchMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_switchMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXT_T3837165335_H
#ifndef VERSION_T850475422_H
#define VERSION_T850475422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t850475422  : public RuntimeObject
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
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t850475422, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t850475422, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t850475422, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t850475422, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t850475422_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t1699394265* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t850475422_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t1699394265* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t1699394265** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t1699394265* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T850475422_H
#ifndef UNITYSERIALIZATIONHOLDER_T94251793_H
#define UNITYSERIALIZATIONHOLDER_T94251793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t94251793  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t2478201611* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t542481240* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t2219535545 * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_instantiation_0)); }
	inline TypeU5BU5D_t2478201611* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t2478201611** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t2478201611* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_instantiation_0), value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t542481240* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t542481240** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t542481240* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_elementTypes_1), value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringType_3), value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_declaringMethod_4)); }
	inline MethodBase_t2219535545 * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t2219535545 ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t2219535545 * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringMethod_4), value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_5), value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemblyName_6), value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t94251793, ___m_unityType_7)); }
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
#endif // UNITYSERIALIZATIONHOLDER_T94251793_H
#ifndef STRINGCOMPARER_T3238039843_H
#define STRINGCOMPARER_T3238039843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3238039843  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3238039843_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t3238039843 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t3238039843 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t3238039843 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t3238039843 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t3238039843_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t3238039843 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t3238039843 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t3238039843 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t3238039843_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t3238039843 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t3238039843 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t3238039843 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t3238039843_StaticFields, ____ordinal_2)); }
	inline StringComparer_t3238039843 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t3238039843 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t3238039843 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t3238039843_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t3238039843 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t3238039843 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t3238039843 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3238039843_H
#ifndef SHAREDSTATICS_T3999767229_H
#define SHAREDSTATICS_T3999767229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SharedStatics
struct  SharedStatics_t3999767229  : public RuntimeObject
{
public:
	// System.Security.Util.Tokenizer/StringMaker System.SharedStatics::_maker
	StringMaker_t811619399 * ____maker_1;

public:
	inline static int32_t get_offset_of__maker_1() { return static_cast<int32_t>(offsetof(SharedStatics_t3999767229, ____maker_1)); }
	inline StringMaker_t811619399 * get__maker_1() const { return ____maker_1; }
	inline StringMaker_t811619399 ** get_address_of__maker_1() { return &____maker_1; }
	inline void set__maker_1(StringMaker_t811619399 * value)
	{
		____maker_1 = value;
		Il2CppCodeGenWriteBarrier((&____maker_1), value);
	}
};

struct SharedStatics_t3999767229_StaticFields
{
public:
	// System.SharedStatics System.SharedStatics::_sharedStatics
	SharedStatics_t3999767229 * ____sharedStatics_0;

public:
	inline static int32_t get_offset_of__sharedStatics_0() { return static_cast<int32_t>(offsetof(SharedStatics_t3999767229_StaticFields, ____sharedStatics_0)); }
	inline SharedStatics_t3999767229 * get__sharedStatics_0() const { return ____sharedStatics_0; }
	inline SharedStatics_t3999767229 ** get_address_of__sharedStatics_0() { return &____sharedStatics_0; }
	inline void set__sharedStatics_0(SharedStatics_t3999767229 * value)
	{
		____sharedStatics_0 = value;
		Il2CppCodeGenWriteBarrier((&____sharedStatics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDSTATICS_T3999767229_H
#ifndef RANDOM_T1052122836_H
#define RANDOM_T1052122836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1052122836  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t542481240* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t1052122836, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t1052122836, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t1052122836, ___SeedArray_2)); }
	inline Int32U5BU5D_t542481240* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t542481240** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t542481240* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1052122836_H
#ifndef NUMBER_T4150180962_H
#define NUMBER_T4150180962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number
struct  Number_t4150180962  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBER_T4150180962_H
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
#ifndef MATH_T3905586499_H
#define MATH_T3905586499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t3905586499  : public RuntimeObject
{
public:

public:
};

struct Math_t3905586499_StaticFields
{
public:
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_t2739712427* ___roundPower10Double_1;

public:
	inline static int32_t get_offset_of_doubleRoundLimit_0() { return static_cast<int32_t>(offsetof(Math_t3905586499_StaticFields, ___doubleRoundLimit_0)); }
	inline double get_doubleRoundLimit_0() const { return ___doubleRoundLimit_0; }
	inline double* get_address_of_doubleRoundLimit_0() { return &___doubleRoundLimit_0; }
	inline void set_doubleRoundLimit_0(double value)
	{
		___doubleRoundLimit_0 = value;
	}

	inline static int32_t get_offset_of_roundPower10Double_1() { return static_cast<int32_t>(offsetof(Math_t3905586499_StaticFields, ___roundPower10Double_1)); }
	inline DoubleU5BU5D_t2739712427* get_roundPower10Double_1() const { return ___roundPower10Double_1; }
	inline DoubleU5BU5D_t2739712427** get_address_of_roundPower10Double_1() { return &___roundPower10Double_1; }
	inline void set_roundPower10Double_1(DoubleU5BU5D_t2739712427* value)
	{
		___roundPower10Double_1 = value;
		Il2CppCodeGenWriteBarrier((&___roundPower10Double_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T3905586499_H
#ifndef GC_T3603327376_H
#define GC_T3603327376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t3603327376  : public RuntimeObject
{
public:

public:
};

struct GC_t3603327376_StaticFields
{
public:
	// System.Object System.GC::EPHEMERON_TOMBSTONE
	RuntimeObject * ___EPHEMERON_TOMBSTONE_0;

public:
	inline static int32_t get_offset_of_EPHEMERON_TOMBSTONE_0() { return static_cast<int32_t>(offsetof(GC_t3603327376_StaticFields, ___EPHEMERON_TOMBSTONE_0)); }
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
#endif // GC_T3603327376_H
#ifndef ENUM_T2846586762_H
#define ENUM_T2846586762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2846586762  : public ValueType_t221354359
{
public:

public:
};

struct Enum_t2846586762_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1699394265* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2846586762_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1699394265* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1699394265** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1699394265* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2846586762_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2846586762_marshaled_com
{
};
#endif // ENUM_T2846586762_H
#ifndef SBYTE_T2415696944_H
#define SBYTE_T2415696944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t2415696944 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t2415696944, ___m_value_0)); }
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
#endif // SBYTE_T2415696944_H
#ifndef UNSAFECHARBUFFER_T814388175_H
#define UNSAFECHARBUFFER_T814388175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t814388175 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t814388175, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t814388175, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t814388175, ___m_length_2)); }
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
struct UnSafeCharBuffer_t814388175_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t814388175_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
#endif // UNSAFECHARBUFFER_T814388175_H
#ifndef INVALIDTIMEZONEEXCEPTION_T1450113872_H
#define INVALIDTIMEZONEEXCEPTION_T1450113872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t1450113872  : public Exception_t3092957848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T1450113872_H
#ifndef SINGLE_T2789257130_H
#define SINGLE_T2789257130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2789257130 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t2789257130, ___m_value_0)); }
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
#endif // SINGLE_T2789257130_H
#ifndef __DTSTRING_T622273961_H
#define __DTSTRING_T622273961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t622273961 
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
	CompareInfo_t4037591785 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___m_info_4)); }
	inline CompareInfo_t4037591785 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t4037591785 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t4037591785 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t622273961, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t622273961_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t1699394265* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t622273961_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t1699394265* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t1699394265** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t1699394265* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t622273961_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t4037591785 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t622273961_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t4037591785 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T622273961_H
#ifndef INT64_T615160929_H
#define INT64_T615160929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t615160929 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t615160929, ___m_value_0)); }
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
#endif // INT64_T615160929_H
#ifndef CULTUREAWARECOMPARER_T1049649571_H
#define CULTUREAWARECOMPARER_T1049649571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1049649571  : public StringComparer_t3238039843
{
public:
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t4037591785 * ____compareInfo_4;
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_5;

public:
	inline static int32_t get_offset_of__compareInfo_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1049649571, ____compareInfo_4)); }
	inline CompareInfo_t4037591785 * get__compareInfo_4() const { return ____compareInfo_4; }
	inline CompareInfo_t4037591785 ** get_address_of__compareInfo_4() { return &____compareInfo_4; }
	inline void set__compareInfo_4(CompareInfo_t4037591785 * value)
	{
		____compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_4), value);
	}

	inline static int32_t get_offset_of__ignoreCase_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1049649571, ____ignoreCase_5)); }
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
#endif // CULTUREAWARECOMPARER_T1049649571_H
#ifndef SYSTEMEXCEPTION_T3603334603_H
#define SYSTEMEXCEPTION_T3603334603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3603334603  : public Exception_t3092957848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3603334603_H
#ifndef THREADSTATICATTRIBUTE_T657745144_H
#define THREADSTATICATTRIBUTE_T657745144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t657745144  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T657745144_H
#ifndef UINT16_T963878603_H
#define UINT16_T963878603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t963878603 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t963878603, ___m_value_0)); }
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
#endif // UINT16_T963878603_H
#ifndef UINT32_T2673469311_H
#define UINT32_T2673469311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2673469311 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2673469311, ___m_value_0)); }
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
#endif // UINT32_T2673469311_H
#ifndef INT16_T2112327974_H
#define INT16_T2112327974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2112327974 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2112327974, ___m_value_0)); }
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
#endif // INT16_T2112327974_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T219850330_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T219850330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t219850330  : public EventArgs_t1220260229
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t219850330, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t219850330, ____IsTerminating_2)); }
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
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T219850330_H
#ifndef ORDINALCOMPARER_T2074275312_H
#define ORDINALCOMPARER_T2074275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t2074275312  : public StringComparer_t3238039843
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t2074275312, ____ignoreCase_4)); }
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
#endif // ORDINALCOMPARER_T2074275312_H
#ifndef UINT64_T3410892325_H
#define UINT64_T3410892325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t3410892325 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t3410892325, ___m_value_0)); }
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
#endif // UINT64_T3410892325_H
#ifndef SERIALIZABLEATTRIBUTE_T1188283944_H
#define SERIALIZABLEATTRIBUTE_T1188283944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t1188283944  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T1188283944_H
#ifndef PARAMSARRAY_T1740815304_H
#define PARAMSARRAY_T1740815304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamsArray
struct  ParamsArray_t1740815304 
{
public:
	// System.Object System.ParamsArray::arg0
	RuntimeObject * ___arg0_3;
	// System.Object System.ParamsArray::arg1
	RuntimeObject * ___arg1_4;
	// System.Object System.ParamsArray::arg2
	RuntimeObject * ___arg2_5;
	// System.Object[] System.ParamsArray::args
	ObjectU5BU5D_t1978347991* ___args_6;

public:
	inline static int32_t get_offset_of_arg0_3() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304, ___arg0_3)); }
	inline RuntimeObject * get_arg0_3() const { return ___arg0_3; }
	inline RuntimeObject ** get_address_of_arg0_3() { return &___arg0_3; }
	inline void set_arg0_3(RuntimeObject * value)
	{
		___arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_3), value);
	}

	inline static int32_t get_offset_of_arg1_4() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304, ___arg1_4)); }
	inline RuntimeObject * get_arg1_4() const { return ___arg1_4; }
	inline RuntimeObject ** get_address_of_arg1_4() { return &___arg1_4; }
	inline void set_arg1_4(RuntimeObject * value)
	{
		___arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_4), value);
	}

	inline static int32_t get_offset_of_arg2_5() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304, ___arg2_5)); }
	inline RuntimeObject * get_arg2_5() const { return ___arg2_5; }
	inline RuntimeObject ** get_address_of_arg2_5() { return &___arg2_5; }
	inline void set_arg2_5(RuntimeObject * value)
	{
		___arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_5), value);
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304, ___args_6)); }
	inline ObjectU5BU5D_t1978347991* get_args_6() const { return ___args_6; }
	inline ObjectU5BU5D_t1978347991** get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(ObjectU5BU5D_t1978347991* value)
	{
		___args_6 = value;
		Il2CppCodeGenWriteBarrier((&___args_6), value);
	}
};

struct ParamsArray_t1740815304_StaticFields
{
public:
	// System.Object[] System.ParamsArray::oneArgArray
	ObjectU5BU5D_t1978347991* ___oneArgArray_0;
	// System.Object[] System.ParamsArray::twoArgArray
	ObjectU5BU5D_t1978347991* ___twoArgArray_1;
	// System.Object[] System.ParamsArray::threeArgArray
	ObjectU5BU5D_t1978347991* ___threeArgArray_2;

public:
	inline static int32_t get_offset_of_oneArgArray_0() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304_StaticFields, ___oneArgArray_0)); }
	inline ObjectU5BU5D_t1978347991* get_oneArgArray_0() const { return ___oneArgArray_0; }
	inline ObjectU5BU5D_t1978347991** get_address_of_oneArgArray_0() { return &___oneArgArray_0; }
	inline void set_oneArgArray_0(ObjectU5BU5D_t1978347991* value)
	{
		___oneArgArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___oneArgArray_0), value);
	}

	inline static int32_t get_offset_of_twoArgArray_1() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304_StaticFields, ___twoArgArray_1)); }
	inline ObjectU5BU5D_t1978347991* get_twoArgArray_1() const { return ___twoArgArray_1; }
	inline ObjectU5BU5D_t1978347991** get_address_of_twoArgArray_1() { return &___twoArgArray_1; }
	inline void set_twoArgArray_1(ObjectU5BU5D_t1978347991* value)
	{
		___twoArgArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___twoArgArray_1), value);
	}

	inline static int32_t get_offset_of_threeArgArray_2() { return static_cast<int32_t>(offsetof(ParamsArray_t1740815304_StaticFields, ___threeArgArray_2)); }
	inline ObjectU5BU5D_t1978347991* get_threeArgArray_2() const { return ___threeArgArray_2; }
	inline ObjectU5BU5D_t1978347991** get_address_of_threeArgArray_2() { return &___threeArgArray_2; }
	inline void set_threeArgArray_2(ObjectU5BU5D_t1978347991* value)
	{
		___threeArgArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___threeArgArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParamsArray
struct ParamsArray_t1740815304_marshaled_pinvoke
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t1978347991* ___args_6;
};
// Native definition for COM marshalling of System.ParamsArray
struct ParamsArray_t1740815304_marshaled_com
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t1978347991* ___args_6;
};
#endif // PARAMSARRAY_T1740815304_H
#ifndef NONSERIALIZEDATTRIBUTE_T3948633045_H
#define NONSERIALIZEDATTRIBUTE_T3948633045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t3948633045  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T3948633045_H
#ifndef VOID_T4217116866_H
#define VOID_T4217116866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4217116866 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t4217116866__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4217116866_H
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
#ifndef NUMBERBUFFER_T2555433079_H
#define NUMBERBUFFER_T2555433079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number/NumberBuffer
struct  NumberBuffer_t2555433079 
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
	inline static int32_t get_offset_of_baseAddress_1() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079, ___baseAddress_1)); }
	inline uint8_t* get_baseAddress_1() const { return ___baseAddress_1; }
	inline uint8_t** get_address_of_baseAddress_1() { return &___baseAddress_1; }
	inline void set_baseAddress_1(uint8_t* value)
	{
		___baseAddress_1 = value;
	}

	inline static int32_t get_offset_of_digits_2() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079, ___digits_2)); }
	inline Il2CppChar* get_digits_2() const { return ___digits_2; }
	inline Il2CppChar** get_address_of_digits_2() { return &___digits_2; }
	inline void set_digits_2(Il2CppChar* value)
	{
		___digits_2 = value;
	}

	inline static int32_t get_offset_of_precision_3() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079, ___precision_3)); }
	inline int32_t get_precision_3() const { return ___precision_3; }
	inline int32_t* get_address_of_precision_3() { return &___precision_3; }
	inline void set_precision_3(int32_t value)
	{
		___precision_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079, ___scale_4)); }
	inline int32_t get_scale_4() const { return ___scale_4; }
	inline int32_t* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(int32_t value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079, ___sign_5)); }
	inline bool get_sign_5() const { return ___sign_5; }
	inline bool* get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(bool value)
	{
		___sign_5 = value;
	}
};

struct NumberBuffer_t2555433079_StaticFields
{
public:
	// System.Int32 System.Number/NumberBuffer::NumberBufferBytes
	int32_t ___NumberBufferBytes_0;

public:
	inline static int32_t get_offset_of_NumberBufferBytes_0() { return static_cast<int32_t>(offsetof(NumberBuffer_t2555433079_StaticFields, ___NumberBufferBytes_0)); }
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
struct NumberBuffer_t2555433079_marshaled_pinvoke
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
// Native definition for COM marshalling of System.Number/NumberBuffer
struct NumberBuffer_t2555433079_marshaled_com
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
#endif // NUMBERBUFFER_T2555433079_H
#ifndef BOOLEAN_T3344806696_H
#define BOOLEAN_T3344806696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3344806696 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t3344806696, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t3344806696_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t3344806696_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t3344806696_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T3344806696_H
#ifndef OBSOLETEATTRIBUTE_T44980568_H
#define OBSOLETEATTRIBUTE_T44980568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t44980568  : public Attribute_t2551568327
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t44980568, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t44980568, ____error_1)); }
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
#endif // OBSOLETEATTRIBUTE_T44980568_H
#ifndef INT32_T3220237365_H
#define INT32_T3220237365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3220237365 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t3220237365, ___m_value_0)); }
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
#endif // INT32_T3220237365_H
#ifndef CANCELLATIONTOKEN_T3154187278_H
#define CANCELLATIONTOKEN_T3154187278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t3154187278 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t944714143 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t3154187278, ___m_source_0)); }
	inline CancellationTokenSource_t944714143 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t944714143 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t944714143 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t3154187278_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3709472613 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t3154187278_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3709472613 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3709472613 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3709472613 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t3154187278_marshaled_pinvoke
{
	CancellationTokenSource_t944714143 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t3154187278_marshaled_com
{
	CancellationTokenSource_t944714143 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T3154187278_H
#ifndef FLAGSATTRIBUTE_T126271280_H
#define FLAGSATTRIBUTE_T126271280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t126271280  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T126271280_H
#ifndef PARAMARRAYATTRIBUTE_T515356620_H
#define PARAMARRAYATTRIBUTE_T515356620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t515356620  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T515356620_H
#ifndef ARITHMETICEXCEPTION_T3339753440_H
#define ARITHMETICEXCEPTION_T3339753440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t3339753440  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T3339753440_H
#ifndef DELEGATE_T3403533457_H
#define DELEGATE_T3403533457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3403533457  : public RuntimeObject
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
	DelegateData_t2502878004 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___data_9)); }
	inline DelegateData_t2502878004 * get_data_9() const { return ___data_9; }
	inline DelegateData_t2502878004 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t2502878004 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t3403533457, ___method_is_virtual_10)); }
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
struct Delegate_t3403533457_marshaled_pinvoke
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
	DelegateData_t2502878004 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t3403533457_marshaled_com
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
	DelegateData_t2502878004 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T3403533457_H
#ifndef BINDINGFLAGS_T64702940_H
#define BINDINGFLAGS_T64702940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t64702940 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t64702940, ___value___2)); }
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
#endif // BINDINGFLAGS_T64702940_H
#ifndef PARSEFAILUREKIND_T2414417101_H
#define PARSEFAILUREKIND_T2414417101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/ParseFailureKind
struct  ParseFailureKind_t2414417101 
{
public:
	// System.Int32 System.Version/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t2414417101, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T2414417101_H
#ifndef TOKENTYPE_T161081841_H
#define TOKENTYPE_T161081841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t161081841 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t161081841, ___value___2)); }
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
#endif // TOKENTYPE_T161081841_H
#ifndef INVALIDPROGRAMEXCEPTION_T1878216546_H
#define INVALIDPROGRAMEXCEPTION_T1878216546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidProgramException
struct  InvalidProgramException_t1878216546  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMEXCEPTION_T1878216546_H
#ifndef SWITCHVALUESTATE_T3948801789_H
#define SWITCHVALUESTATE_T3948801789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t3948801789 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t3948801789, ___value___2)); }
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
#endif // SWITCHVALUESTATE_T3948801789_H
#ifndef INVALIDOPERATIONEXCEPTION_T2097409113_H
#define INVALIDOPERATIONEXCEPTION_T2097409113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t2097409113  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T2097409113_H
#ifndef INVALIDCASTEXCEPTION_T1873147580_H
#define INVALIDCASTEXCEPTION_T1873147580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t1873147580  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T1873147580_H
#ifndef DTSUBSTRINGTYPE_T4090750909_H
#define DTSUBSTRINGTYPE_T4090750909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t4090750909 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t4090750909, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T4090750909_H
#ifndef DTT_T2061685563_H
#define DTT_T2061685563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DTT
struct  DTT_t2061685563 
{
public:
	// System.Int32 System.DateTimeParse/DTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTT_t2061685563, ___value___2)); }
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
#endif // DTT_T2061685563_H
#ifndef PARSEFLAGS_T3987676099_H
#define PARSEFLAGS_T3987676099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFlags
struct  ParseFlags_t3987676099 
{
public:
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFlags_t3987676099, ___value___2)); }
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
#endif // PARSEFLAGS_T3987676099_H
#ifndef TM_T1100125177_H
#define TM_T1100125177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/TM
struct  TM_t1100125177 
{
public:
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TM_t1100125177, ___value___2)); }
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
#endif // TM_T1100125177_H
#ifndef FORMATEXCEPTION_T1772878609_H
#define FORMATEXCEPTION_T1772878609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t1772878609  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T1772878609_H
#ifndef EXECUTIONENGINEEXCEPTION_T3859758636_H
#define EXECUTIONENGINEEXCEPTION_T3859758636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t3859758636  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T3859758636_H
#ifndef PARSEFAILUREKIND_T1924786925_H
#define PARSEFAILUREKIND_T1924786925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFailureKind
struct  ParseFailureKind_t1924786925 
{
public:
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t1924786925, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T1924786925_H
#ifndef RUNTIMETYPEHANDLE_T3864910978_H
#define RUNTIMETYPEHANDLE_T3864910978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3864910978 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3864910978, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3864910978_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T2056095785_H
#define INDEXOUTOFRANGEEXCEPTION_T2056095785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t2056095785  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T2056095785_H
#ifndef DS_T2895933748_H
#define DS_T2895933748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DS
struct  DS_t2895933748 
{
public:
	// System.Int32 System.DateTimeParse/DS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DS_t2895933748, ___value___2)); }
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
#endif // DS_T2895933748_H
#ifndef EXCEPTIONMESSAGEKIND_T3471273742_H
#define EXCEPTIONMESSAGEKIND_T3471273742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception/ExceptionMessageKind
struct  ExceptionMessageKind_t3471273742 
{
public:
	// System.Int32 System.Exception/ExceptionMessageKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionMessageKind_t3471273742, ___value___2)); }
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
#endif // EXCEPTIONMESSAGEKIND_T3471273742_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T1316790100_H
#define UNAUTHORIZEDACCESSEXCEPTION_T1316790100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t1316790100  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T1316790100_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T2101548523_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T2101548523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t2101548523  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T2101548523_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T2415442086_H
#define NOTIMPLEMENTEDEXCEPTION_T2415442086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t2415442086  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T2415442086_H
#ifndef NOTSUPPORTEDEXCEPTION_T3387454877_H
#define NOTSUPPORTEDEXCEPTION_T3387454877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t3387454877  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T3387454877_H
#ifndef NULLREFERENCEEXCEPTION_T4173606571_H
#define NULLREFERENCEEXCEPTION_T4173606571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t4173606571  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T4173606571_H
#ifndef MEMBERACCESSEXCEPTION_T3169448963_H
#define MEMBERACCESSEXCEPTION_T3169448963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t3169448963  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T3169448963_H
#ifndef OPERATIONCANCELEDEXCEPTION_T3245251749_H
#define OPERATIONCANCELEDEXCEPTION_T3245251749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t3245251749  : public SystemException_t3603334603
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t3154187278  ____cancellationToken_16;

public:
	inline static int32_t get_offset_of__cancellationToken_16() { return static_cast<int32_t>(offsetof(OperationCanceledException_t3245251749, ____cancellationToken_16)); }
	inline CancellationToken_t3154187278  get__cancellationToken_16() const { return ____cancellationToken_16; }
	inline CancellationToken_t3154187278 * get_address_of__cancellationToken_16() { return &____cancellationToken_16; }
	inline void set__cancellationToken_16(CancellationToken_t3154187278  value)
	{
		____cancellationToken_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T3245251749_H
#ifndef OUTOFMEMORYEXCEPTION_T45777938_H
#define OUTOFMEMORYEXCEPTION_T45777938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t45777938  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T45777938_H
#ifndef RANKEXCEPTION_T3899255761_H
#define RANKEXCEPTION_T3899255761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3899255761  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3899255761_H
#ifndef TYPENAMEFORMATFLAGS_T1257343252_H
#define TYPENAMEFORMATFLAGS_T1257343252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_t1257343252 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_t1257343252, ___value___2)); }
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
#endif // TYPENAMEFORMATFLAGS_T1257343252_H
#ifndef STACKOVERFLOWEXCEPTION_T300492412_H
#define STACKOVERFLOWEXCEPTION_T300492412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t300492412  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T300492412_H
#ifndef STRINGSPLITOPTIONS_T4208674242_H
#define STRINGSPLITOPTIONS_T4208674242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t4208674242 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t4208674242, ___value___2)); }
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
#endif // STRINGSPLITOPTIONS_T4208674242_H
#ifndef TYPENAMEKIND_T1079193375_H
#define TYPENAMEKIND_T1079193375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameKind
struct  TypeNameKind_t1079193375 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t1079193375, ___value___2)); }
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
#endif // TYPENAMEKIND_T1079193375_H
#ifndef TIMESPAN_T1816131501_H
#define TIMESPAN_T1816131501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1816131501 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1816131501_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1816131501  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1816131501  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1816131501  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501_StaticFields, ___Zero_0)); }
	inline TimeSpan_t1816131501  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t1816131501 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t1816131501  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t1816131501  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t1816131501 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t1816131501  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t1816131501  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t1816131501 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t1816131501  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t1816131501_StaticFields, ____legacyMode_5)); }
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
#endif // TIMESPAN_T1816131501_H
#ifndef TYPELOADEXCEPTION_T2657178729_H
#define TYPELOADEXCEPTION_T2657178729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t2657178729  : public SystemException_t3603334603
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
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(TypeLoadException_t2657178729, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_AssemblyName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t2657178729, ___AssemblyName_17)); }
	inline String_t* get_AssemblyName_17() const { return ___AssemblyName_17; }
	inline String_t** get_address_of_AssemblyName_17() { return &___AssemblyName_17; }
	inline void set_AssemblyName_17(String_t* value)
	{
		___AssemblyName_17 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_17), value);
	}

	inline static int32_t get_offset_of_MessageArg_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t2657178729, ___MessageArg_18)); }
	inline String_t* get_MessageArg_18() const { return ___MessageArg_18; }
	inline String_t** get_address_of_MessageArg_18() { return &___MessageArg_18; }
	inline void set_MessageArg_18(String_t* value)
	{
		___MessageArg_18 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_18), value);
	}

	inline static int32_t get_offset_of_ResourceId_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t2657178729, ___ResourceId_19)); }
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
#endif // TYPELOADEXCEPTION_T2657178729_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2714787860_H
#define TYPEINITIALIZATIONEXCEPTION_T2714787860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2714787860  : public SystemException_t3603334603
{
public:
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_16;

public:
	inline static int32_t get_offset_of__typeName_16() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2714787860, ____typeName_16)); }
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
#endif // TYPEINITIALIZATIONEXCEPTION_T2714787860_H
#ifndef TIMEOUTEXCEPTION_T1797612340_H
#define TIMEOUTEXCEPTION_T1797612340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t1797612340  : public SystemException_t3603334603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T1797612340_H
#ifndef EXCEPTIONARGUMENT_T77629151_H
#define EXCEPTIONARGUMENT_T77629151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionArgument
struct  ExceptionArgument_t77629151 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t77629151, ___value___2)); }
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
#endif // EXCEPTIONARGUMENT_T77629151_H
#ifndef EXCEPTIONRESOURCE_T434436469_H
#define EXCEPTIONRESOURCE_T434436469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionResource
struct  ExceptionResource_t434436469 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_t434436469, ___value___2)); }
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
#endif // EXCEPTIONRESOURCE_T434436469_H
#ifndef DTSUBSTRING_T4175307896_H
#define DTSUBSTRING_T4175307896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t4175307896 
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
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t4175307896, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t4175307896, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t4175307896, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t4175307896, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t4175307896, ___value_4)); }
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
struct DTSubString_t4175307896_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t4175307896_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T4175307896_H
#ifndef MISSINGMEMBEREXCEPTION_T3634616153_H
#define MISSINGMEMBEREXCEPTION_T3634616153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t3634616153  : public MemberAccessException_t3169448963
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_16;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_17;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t3406352019* ___Signature_18;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(MissingMemberException_t3634616153, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_MemberName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t3634616153, ___MemberName_17)); }
	inline String_t* get_MemberName_17() const { return ___MemberName_17; }
	inline String_t** get_address_of_MemberName_17() { return &___MemberName_17; }
	inline void set_MemberName_17(String_t* value)
	{
		___MemberName_17 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_17), value);
	}

	inline static int32_t get_offset_of_Signature_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t3634616153, ___Signature_18)); }
	inline ByteU5BU5D_t3406352019* get_Signature_18() const { return ___Signature_18; }
	inline ByteU5BU5D_t3406352019** get_address_of_Signature_18() { return &___Signature_18; }
	inline void set_Signature_18(ByteU5BU5D_t3406352019* value)
	{
		___Signature_18 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T3634616153_H
#ifndef DATETIMERAWINFO_T1145403356_H
#define DATETIMERAWINFO_T1145403356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeRawInfo
struct  DateTimeRawInfo_t1145403356 
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
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___num_0)); }
	inline int32_t* get_num_0() const { return ___num_0; }
	inline int32_t** get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t* value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_numCount_1() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___numCount_1)); }
	inline int32_t get_numCount_1() const { return ___numCount_1; }
	inline int32_t* get_address_of_numCount_1() { return &___numCount_1; }
	inline void set_numCount_1(int32_t value)
	{
		___numCount_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_year_3() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___year_3)); }
	inline int32_t get_year_3() const { return ___year_3; }
	inline int32_t* get_address_of_year_3() { return &___year_3; }
	inline void set_year_3(int32_t value)
	{
		___year_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_era_5() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___era_5)); }
	inline int32_t get_era_5() const { return ___era_5; }
	inline int32_t* get_address_of_era_5() { return &___era_5; }
	inline void set_era_5(int32_t value)
	{
		___era_5 = value;
	}

	inline static int32_t get_offset_of_timeMark_6() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___timeMark_6)); }
	inline int32_t get_timeMark_6() const { return ___timeMark_6; }
	inline int32_t* get_address_of_timeMark_6() { return &___timeMark_6; }
	inline void set_timeMark_6(int32_t value)
	{
		___timeMark_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___fraction_7)); }
	inline double get_fraction_7() const { return ___fraction_7; }
	inline double* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(double value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_hasSameDateAndTimeSeparators_8() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___hasSameDateAndTimeSeparators_8)); }
	inline bool get_hasSameDateAndTimeSeparators_8() const { return ___hasSameDateAndTimeSeparators_8; }
	inline bool* get_address_of_hasSameDateAndTimeSeparators_8() { return &___hasSameDateAndTimeSeparators_8; }
	inline void set_hasSameDateAndTimeSeparators_8(bool value)
	{
		___hasSameDateAndTimeSeparators_8 = value;
	}

	inline static int32_t get_offset_of_timeZone_9() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1145403356, ___timeZone_9)); }
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
struct DateTimeRawInfo_t1145403356_marshaled_pinvoke
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
struct DateTimeRawInfo_t1145403356_marshaled_com
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
#endif // DATETIMERAWINFO_T1145403356_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T1474197083_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T1474197083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t1474197083  : public NotSupportedException_t3387454877
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T1474197083_H
#ifndef OVERFLOWEXCEPTION_T4170909314_H
#define OVERFLOWEXCEPTION_T4170909314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t4170909314  : public ArithmeticException_t3339753440
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T4170909314_H
#ifndef FIELDACCESSEXCEPTION_T2310339480_H
#define FIELDACCESSEXCEPTION_T2310339480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t2310339480  : public MemberAccessException_t3169448963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T2310339480_H
#ifndef DATETIMEFORMAT_T3411794490_H
#define DATETIMEFORMAT_T3411794490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeFormat
struct  DateTimeFormat_t3411794490  : public RuntimeObject
{
public:

public:
};

struct DateTimeFormat_t3411794490_StaticFields
{
public:
	// System.TimeSpan System.DateTimeFormat::NullOffset
	TimeSpan_t1816131501  ___NullOffset_0;
	// System.Char[] System.DateTimeFormat::allStandardFormats
	CharU5BU5D_t1699394265* ___allStandardFormats_1;
	// System.String[] System.DateTimeFormat::fixedNumberFormats
	StringU5BU5D_t2926391647* ___fixedNumberFormats_2;

public:
	inline static int32_t get_offset_of_NullOffset_0() { return static_cast<int32_t>(offsetof(DateTimeFormat_t3411794490_StaticFields, ___NullOffset_0)); }
	inline TimeSpan_t1816131501  get_NullOffset_0() const { return ___NullOffset_0; }
	inline TimeSpan_t1816131501 * get_address_of_NullOffset_0() { return &___NullOffset_0; }
	inline void set_NullOffset_0(TimeSpan_t1816131501  value)
	{
		___NullOffset_0 = value;
	}

	inline static int32_t get_offset_of_allStandardFormats_1() { return static_cast<int32_t>(offsetof(DateTimeFormat_t3411794490_StaticFields, ___allStandardFormats_1)); }
	inline CharU5BU5D_t1699394265* get_allStandardFormats_1() const { return ___allStandardFormats_1; }
	inline CharU5BU5D_t1699394265** get_address_of_allStandardFormats_1() { return &___allStandardFormats_1; }
	inline void set_allStandardFormats_1(CharU5BU5D_t1699394265* value)
	{
		___allStandardFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___allStandardFormats_1), value);
	}

	inline static int32_t get_offset_of_fixedNumberFormats_2() { return static_cast<int32_t>(offsetof(DateTimeFormat_t3411794490_StaticFields, ___fixedNumberFormats_2)); }
	inline StringU5BU5D_t2926391647* get_fixedNumberFormats_2() const { return ___fixedNumberFormats_2; }
	inline StringU5BU5D_t2926391647** get_address_of_fixedNumberFormats_2() { return &___fixedNumberFormats_2; }
	inline void set_fixedNumberFormats_2(StringU5BU5D_t2926391647* value)
	{
		___fixedNumberFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___fixedNumberFormats_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMAT_T3411794490_H
#ifndef DATETIMETOKEN_T401697896_H
#define DATETIMETOKEN_T401697896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeToken
struct  DateTimeToken_t401697896 
{
public:
	// System.DateTimeParse/DTT System.DateTimeToken::dtt
	int32_t ___dtt_0;
	// System.TokenType System.DateTimeToken::suffix
	int32_t ___suffix_1;
	// System.Int32 System.DateTimeToken::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_dtt_0() { return static_cast<int32_t>(offsetof(DateTimeToken_t401697896, ___dtt_0)); }
	inline int32_t get_dtt_0() const { return ___dtt_0; }
	inline int32_t* get_address_of_dtt_0() { return &___dtt_0; }
	inline void set_dtt_0(int32_t value)
	{
		___dtt_0 = value;
	}

	inline static int32_t get_offset_of_suffix_1() { return static_cast<int32_t>(offsetof(DateTimeToken_t401697896, ___suffix_1)); }
	inline int32_t get_suffix_1() const { return ___suffix_1; }
	inline int32_t* get_address_of_suffix_1() { return &___suffix_1; }
	inline void set_suffix_1(int32_t value)
	{
		___suffix_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(DateTimeToken_t401697896, ___num_2)); }
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
#endif // DATETIMETOKEN_T401697896_H
#ifndef OBJECTDISPOSEDEXCEPTION_T2304743332_H
#define OBJECTDISPOSEDEXCEPTION_T2304743332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t2304743332  : public InvalidOperationException_t2097409113
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_16;

public:
	inline static int32_t get_offset_of_objectName_16() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2304743332, ___objectName_16)); }
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
#endif // OBJECTDISPOSEDEXCEPTION_T2304743332_H
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
	RuntimeTypeHandle_t3864910978  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3864910978  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3864910978 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3864910978  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3823077846 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3823077846 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3823077846 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t2478201611* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2921483979 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t3823077846 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t3823077846 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t3823077846 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t3823077846 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t3823077846 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t3823077846 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t3823077846 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t3823077846 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t3823077846 * value)
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
	inline TypeU5BU5D_t2478201611* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t2478201611** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t2478201611* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t2921483979 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t2921483979 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t2921483979 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TYPEDREFERENCE_T2139177083_H
#define TYPEDREFERENCE_T2139177083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t2139177083 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t3864910978  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t2139177083, ___type_0)); }
	inline RuntimeTypeHandle_t3864910978  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t3864910978 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t3864910978  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t2139177083, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t2139177083, ___Type_2)); }
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
#endif // TYPEDREFERENCE_T2139177083_H
#ifndef MULTICASTDELEGATE_T2778163795_H
#define MULTICASTDELEGATE_T2778163795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2778163795  : public Delegate_t3403533457
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t2295054860* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2778163795, ___delegates_11)); }
	inline DelegateU5BU5D_t2295054860* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t2295054860** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t2295054860* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2778163795_marshaled_pinvoke : public Delegate_t3403533457_marshaled_pinvoke
{
	DelegateU5BU5D_t2295054860* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2778163795_marshaled_com : public Delegate_t3403533457_marshaled_com
{
	DelegateU5BU5D_t2295054860* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2778163795_H
#ifndef VERSIONRESULT_T2653485100_H
#define VERSIONRESULT_T2653485100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/VersionResult
struct  VersionResult_t2653485100 
{
public:
	// System.Version System.Version/VersionResult::m_parsedVersion
	Version_t850475422 * ___m_parsedVersion_0;
	// System.Version/ParseFailureKind System.Version/VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version/VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version/VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version/VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_t2653485100, ___m_parsedVersion_0)); }
	inline Version_t850475422 * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_t850475422 ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_t850475422 * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parsedVersion_0), value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_t2653485100, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_t2653485100, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionArgument_2), value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_t2653485100, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_argumentName_3), value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_t2653485100, ___m_canThrow_4)); }
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
struct VersionResult_t2653485100_marshaled_pinvoke
{
	Version_t850475422 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_t2653485100_marshaled_com
{
	Version_t850475422 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
#endif // VERSIONRESULT_T2653485100_H
#ifndef METHODACCESSEXCEPTION_T3702545339_H
#define METHODACCESSEXCEPTION_T3702545339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t3702545339  : public MemberAccessException_t3169448963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T3702545339_H
#ifndef MISSINGMETHODEXCEPTION_T2959946371_H
#define MISSINGMETHODEXCEPTION_T2959946371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t2959946371  : public MissingMemberException_t3634616153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T2959946371_H
#ifndef TYPEINFO_T1305246620_H
#define TYPEINFO_T1305246620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1305246620  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1305246620_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T1265447453_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T1265447453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1265447453  : public MulticastDelegate_t2778163795
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T1265447453_H
#ifndef MATCHNUMBERDELEGATE_T829181835_H
#define MATCHNUMBERDELEGATE_T829181835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/MatchNumberDelegate
struct  MatchNumberDelegate_t829181835  : public MulticastDelegate_t2778163795
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHNUMBERDELEGATE_T829181835_H
#ifndef MISSINGFIELDEXCEPTION_T3121997738_H
#define MISSINGFIELDEXCEPTION_T3121997738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t3121997738  : public MissingMemberException_t3634616153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T3121997738_H
#ifndef RUNTIMETYPE_T1390123212_H
#define RUNTIMETYPE_T1390123212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t1390123212  : public TypeInfo_t1305246620
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3553873356 * ___type_info_10;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_11;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1907711032 * ___m_serializationCtor_12;

public:
	inline static int32_t get_offset_of_type_info_10() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212, ___type_info_10)); }
	inline MonoTypeInfo_t3553873356 * get_type_info_10() const { return ___type_info_10; }
	inline MonoTypeInfo_t3553873356 ** get_address_of_type_info_10() { return &___type_info_10; }
	inline void set_type_info_10(MonoTypeInfo_t3553873356 * value)
	{
		___type_info_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_10), value);
	}

	inline static int32_t get_offset_of_GenericCache_11() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212, ___GenericCache_11)); }
	inline RuntimeObject * get_GenericCache_11() const { return ___GenericCache_11; }
	inline RuntimeObject ** get_address_of_GenericCache_11() { return &___GenericCache_11; }
	inline void set_GenericCache_11(RuntimeObject * value)
	{
		___GenericCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_11), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_12() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212, ___m_serializationCtor_12)); }
	inline RuntimeConstructorInfo_t1907711032 * get_m_serializationCtor_12() const { return ___m_serializationCtor_12; }
	inline RuntimeConstructorInfo_t1907711032 ** get_address_of_m_serializationCtor_12() { return &___m_serializationCtor_12; }
	inline void set_m_serializationCtor_12(RuntimeConstructorInfo_t1907711032 * value)
	{
		___m_serializationCtor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_12), value);
	}
};

struct RuntimeType_t1390123212_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t3742941199 * ___clsid_types_13;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t713001379 * ___clsid_assemblybuilder_14;
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t1390123212 * ___ValueType_15;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t1390123212 * ___EnumType_16;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t1390123212 * ___ObjectType_17;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t1390123212 * ___StringType_18;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t1390123212 * ___DelegateType_19;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t2478201611* ___s_SICtorParamTypes_20;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t1390123212 * ___s_typedRef_30;

public:
	inline static int32_t get_offset_of_clsid_types_13() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___clsid_types_13)); }
	inline Dictionary_2_t3742941199 * get_clsid_types_13() const { return ___clsid_types_13; }
	inline Dictionary_2_t3742941199 ** get_address_of_clsid_types_13() { return &___clsid_types_13; }
	inline void set_clsid_types_13(Dictionary_2_t3742941199 * value)
	{
		___clsid_types_13 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_13), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_14() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___clsid_assemblybuilder_14)); }
	inline AssemblyBuilder_t713001379 * get_clsid_assemblybuilder_14() const { return ___clsid_assemblybuilder_14; }
	inline AssemblyBuilder_t713001379 ** get_address_of_clsid_assemblybuilder_14() { return &___clsid_assemblybuilder_14; }
	inline void set_clsid_assemblybuilder_14(AssemblyBuilder_t713001379 * value)
	{
		___clsid_assemblybuilder_14 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_14), value);
	}

	inline static int32_t get_offset_of_ValueType_15() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___ValueType_15)); }
	inline RuntimeType_t1390123212 * get_ValueType_15() const { return ___ValueType_15; }
	inline RuntimeType_t1390123212 ** get_address_of_ValueType_15() { return &___ValueType_15; }
	inline void set_ValueType_15(RuntimeType_t1390123212 * value)
	{
		___ValueType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_15), value);
	}

	inline static int32_t get_offset_of_EnumType_16() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___EnumType_16)); }
	inline RuntimeType_t1390123212 * get_EnumType_16() const { return ___EnumType_16; }
	inline RuntimeType_t1390123212 ** get_address_of_EnumType_16() { return &___EnumType_16; }
	inline void set_EnumType_16(RuntimeType_t1390123212 * value)
	{
		___EnumType_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_16), value);
	}

	inline static int32_t get_offset_of_ObjectType_17() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___ObjectType_17)); }
	inline RuntimeType_t1390123212 * get_ObjectType_17() const { return ___ObjectType_17; }
	inline RuntimeType_t1390123212 ** get_address_of_ObjectType_17() { return &___ObjectType_17; }
	inline void set_ObjectType_17(RuntimeType_t1390123212 * value)
	{
		___ObjectType_17 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_17), value);
	}

	inline static int32_t get_offset_of_StringType_18() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___StringType_18)); }
	inline RuntimeType_t1390123212 * get_StringType_18() const { return ___StringType_18; }
	inline RuntimeType_t1390123212 ** get_address_of_StringType_18() { return &___StringType_18; }
	inline void set_StringType_18(RuntimeType_t1390123212 * value)
	{
		___StringType_18 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_18), value);
	}

	inline static int32_t get_offset_of_DelegateType_19() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___DelegateType_19)); }
	inline RuntimeType_t1390123212 * get_DelegateType_19() const { return ___DelegateType_19; }
	inline RuntimeType_t1390123212 ** get_address_of_DelegateType_19() { return &___DelegateType_19; }
	inline void set_DelegateType_19(RuntimeType_t1390123212 * value)
	{
		___DelegateType_19 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_19), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_20() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___s_SICtorParamTypes_20)); }
	inline TypeU5BU5D_t2478201611* get_s_SICtorParamTypes_20() const { return ___s_SICtorParamTypes_20; }
	inline TypeU5BU5D_t2478201611** get_address_of_s_SICtorParamTypes_20() { return &___s_SICtorParamTypes_20; }
	inline void set_s_SICtorParamTypes_20(TypeU5BU5D_t2478201611* value)
	{
		___s_SICtorParamTypes_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_20), value);
	}

	inline static int32_t get_offset_of_s_typedRef_30() { return static_cast<int32_t>(offsetof(RuntimeType_t1390123212_StaticFields, ___s_typedRef_30)); }
	inline RuntimeType_t1390123212 * get_s_typedRef_30() const { return ___s_typedRef_30; }
	inline RuntimeType_t1390123212 ** get_address_of_s_typedRef_30() { return &___s_typedRef_30; }
	inline void set_s_typedRef_30(RuntimeType_t1390123212 * value)
	{
		___s_typedRef_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T1390123212_H
#ifndef REFLECTIONONLYTYPE_T3554398804_H
#define REFLECTIONONLYTYPE_T3554398804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ReflectionOnlyType
struct  ReflectionOnlyType_t3554398804  : public RuntimeType_t1390123212
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONONLYTYPE_T3554398804_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (ExceptionMessageKind_t3471273742)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable200[4] = 
{
	ExceptionMessageKind_t3471273742::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (ExecutionEngineException_t3859758636), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (FieldAccessException_t2310339480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (FlagsAttribute_t126271280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (FormatException_t1772878609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (GC_t3603327376), -1, sizeof(GC_t3603327376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable205[1] = 
{
	GC_t3603327376_StaticFields::get_offset_of_EPHEMERON_TOMBSTONE_0(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (InvalidCastException_t1873147580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (IndexOutOfRangeException_t2056095785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (InvalidOperationException_t2097409113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (InvalidProgramException_t1878216546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (Int16_t2112327974)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable222[1] = 
{
	Int16_t2112327974::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (Int32_t3220237365)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable223[3] = 
{
	Int32_t3220237365::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (Int64_t615160929)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable224[1] = 
{
	Int64_t615160929::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (InvalidTimeZoneException_t1450113872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (Math_t3905586499), -1, sizeof(Math_t3905586499_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable227[2] = 
{
	Math_t3905586499_StaticFields::get_offset_of_doubleRoundLimit_0(),
	Math_t3905586499_StaticFields::get_offset_of_roundPower10Double_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (MemberAccessException_t3169448963), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (MethodAccessException_t3702545339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (MissingFieldException_t3121997738), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (MissingMemberException_t3634616153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable231[3] = 
{
	MissingMemberException_t3634616153::get_offset_of_ClassName_16(),
	MissingMemberException_t3634616153::get_offset_of_MemberName_17(),
	MissingMemberException_t3634616153::get_offset_of_Signature_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (MissingMethodException_t2959946371), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { sizeof (MulticastNotSupportedException_t2101548523), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (NonSerializedAttribute_t3948633045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (NotImplementedException_t2415442086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (NotSupportedException_t3387454877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (NullReferenceException_t4173606571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (Number_t4150180962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (NumberBuffer_t2555433079)+ sizeof (RuntimeObject), sizeof(NumberBuffer_t2555433079_marshaled_pinvoke), sizeof(NumberBuffer_t2555433079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable239[6] = 
{
	NumberBuffer_t2555433079_StaticFields::get_offset_of_NumberBufferBytes_0(),
	NumberBuffer_t2555433079::get_offset_of_baseAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2555433079::get_offset_of_digits_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2555433079::get_offset_of_precision_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2555433079::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2555433079::get_offset_of_sign_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (ObjectDisposedException_t2304743332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable240[1] = 
{
	ObjectDisposedException_t2304743332::get_offset_of_objectName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (ObsoleteAttribute_t44980568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable241[2] = 
{
	ObsoleteAttribute_t44980568::get_offset_of__message_0(),
	ObsoleteAttribute_t44980568::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (OperationCanceledException_t3245251749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable242[1] = 
{
	OperationCanceledException_t3245251749::get_offset_of__cancellationToken_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (OutOfMemoryException_t45777938), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (OverflowException_t4170909314), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (ParamArrayAttribute_t515356620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (ParamsArray_t1740815304)+ sizeof (RuntimeObject), -1, sizeof(ParamsArray_t1740815304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable246[7] = 
{
	ParamsArray_t1740815304_StaticFields::get_offset_of_oneArgArray_0(),
	ParamsArray_t1740815304_StaticFields::get_offset_of_twoArgArray_1(),
	ParamsArray_t1740815304_StaticFields::get_offset_of_threeArgArray_2(),
	ParamsArray_t1740815304::get_offset_of_arg0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t1740815304::get_offset_of_arg1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t1740815304::get_offset_of_arg2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t1740815304::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (PlatformNotSupportedException_t1474197083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (Random_t1052122836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable248[3] = 
{
	Random_t1052122836::get_offset_of_inext_0(),
	Random_t1052122836::get_offset_of_inextp_1(),
	Random_t1052122836::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (RankException_t3899255761), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (TypeNameFormatFlags_t1257343252)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable250[11] = 
{
	TypeNameFormatFlags_t1257343252::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (TypeNameKind_t1079193375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable251[5] = 
{
	TypeNameKind_t1079193375::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (ReflectionOnlyType_t3554398804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (SByte_t2415696944)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable253[1] = 
{
	SByte_t2415696944::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (SerializableAttribute_t1188283944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (SharedStatics_t3999767229), -1, sizeof(SharedStatics_t3999767229_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable255[2] = 
{
	SharedStatics_t3999767229_StaticFields::get_offset_of__sharedStatics_0(),
	SharedStatics_t3999767229::get_offset_of__maker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (StackOverflowException_t300492412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (Single_t2789257130)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable257[7] = 
{
	Single_t2789257130::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (StringSplitOptions_t4208674242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable258[3] = 
{
	StringSplitOptions_t4208674242::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (StringComparer_t3238039843), -1, sizeof(StringComparer_t3238039843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable259[4] = 
{
	StringComparer_t3238039843_StaticFields::get_offset_of__invariantCulture_0(),
	StringComparer_t3238039843_StaticFields::get_offset_of__invariantCultureIgnoreCase_1(),
	StringComparer_t3238039843_StaticFields::get_offset_of__ordinal_2(),
	StringComparer_t3238039843_StaticFields::get_offset_of__ordinalIgnoreCase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (CultureAwareComparer_t1049649571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable260[2] = 
{
	CultureAwareComparer_t1049649571::get_offset_of__compareInfo_4(),
	CultureAwareComparer_t1049649571::get_offset_of__ignoreCase_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (OrdinalComparer_t2074275312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable261[1] = 
{
	OrdinalComparer_t2074275312::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (SystemException_t3603334603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (TimeoutException_t1797612340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (TimeSpan_t1816131501)+ sizeof (RuntimeObject), sizeof(TimeSpan_t1816131501 ), sizeof(TimeSpan_t1816131501_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable264[6] = 
{
	TimeSpan_t1816131501_StaticFields::get_offset_of_Zero_0(),
	TimeSpan_t1816131501_StaticFields::get_offset_of_MaxValue_1(),
	TimeSpan_t1816131501_StaticFields::get_offset_of_MinValue_2(),
	TimeSpan_t1816131501::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpan_t1816131501_StaticFields::get_offset_of__legacyConfigChecked_4(),
	TimeSpan_t1816131501_StaticFields::get_offset_of__legacyMode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (ThreadStaticAttribute_t657745144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (ThrowHelper_t880539173), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (ExceptionArgument_t77629151)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable267[25] = 
{
	ExceptionArgument_t77629151::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (ExceptionResource_t434436469)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable268[47] = 
{
	ExceptionResource_t434436469::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (TypeInitializationException_t2714787860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable269[1] = 
{
	TypeInitializationException_t2714787860::get_offset_of__typeName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (TypeLoadException_t2657178729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable270[4] = 
{
	TypeLoadException_t2657178729::get_offset_of_ClassName_16(),
	TypeLoadException_t2657178729::get_offset_of_AssemblyName_17(),
	TypeLoadException_t2657178729::get_offset_of_MessageArg_18(),
	TypeLoadException_t2657178729::get_offset_of_ResourceId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (TypedReference_t2139177083)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable271[3] = 
{
	TypedReference_t2139177083::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t2139177083::get_offset_of_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t2139177083::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (UInt16_t963878603)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable272[1] = 
{
	UInt16_t963878603::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (UInt32_t2673469311)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable273[3] = 
{
	UInt32_t2673469311::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (UInt64_t3410892325)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable274[1] = 
{
	UInt64_t3410892325::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (UnauthorizedAccessException_t1316790100), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (UnhandledExceptionEventArgs_t219850330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable276[2] = 
{
	UnhandledExceptionEventArgs_t219850330::get_offset_of__Exception_1(),
	UnhandledExceptionEventArgs_t219850330::get_offset_of__IsTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (UnhandledExceptionEventHandler_t1265447453), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (UnitySerializationHolder_t94251793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable278[8] = 
{
	UnitySerializationHolder_t94251793::get_offset_of_m_instantiation_0(),
	UnitySerializationHolder_t94251793::get_offset_of_m_elementTypes_1(),
	UnitySerializationHolder_t94251793::get_offset_of_m_genericParameterPosition_2(),
	UnitySerializationHolder_t94251793::get_offset_of_m_declaringType_3(),
	UnitySerializationHolder_t94251793::get_offset_of_m_declaringMethod_4(),
	UnitySerializationHolder_t94251793::get_offset_of_m_data_5(),
	UnitySerializationHolder_t94251793::get_offset_of_m_assemblyName_6(),
	UnitySerializationHolder_t94251793::get_offset_of_m_unityType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (UnSafeCharBuffer_t814388175)+ sizeof (RuntimeObject), sizeof(UnSafeCharBuffer_t814388175_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable279[3] = 
{
	UnSafeCharBuffer_t814388175::get_offset_of_m_buffer_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t814388175::get_offset_of_m_totalSize_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t814388175::get_offset_of_m_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (Version_t850475422), -1, sizeof(Version_t850475422_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable280[6] = 
{
	Version_t850475422::get_offset_of__Major_0(),
	Version_t850475422::get_offset_of__Minor_1(),
	Version_t850475422::get_offset_of__Build_2(),
	Version_t850475422::get_offset_of__Revision_3(),
	Version_t850475422_StaticFields::get_offset_of_SeparatorsArray_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (ParseFailureKind_t2414417101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable281[5] = 
{
	ParseFailureKind_t2414417101::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (VersionResult_t2653485100)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable282[5] = 
{
	VersionResult_t2653485100::get_offset_of_m_parsedVersion_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t2653485100::get_offset_of_m_failure_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t2653485100::get_offset_of_m_exceptionArgument_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t2653485100::get_offset_of_m_argumentName_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t2653485100::get_offset_of_m_canThrow_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (AppContext_t3837165335), -1, sizeof(AppContext_t3837165335_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	AppContext_t3837165335_StaticFields::get_offset_of_s_switchMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (SwitchValueState_t3948801789)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable284[5] = 
{
	SwitchValueState_t3948801789::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (AppContextSwitches_t2998694100), -1, sizeof(AppContextSwitches_t2998694100_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable285[3] = 
{
	AppContextSwitches_t2998694100_StaticFields::get_offset_of__noAsyncCurrentCulture_0(),
	AppContextSwitches_t2998694100_StaticFields::get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1(),
	AppContextSwitches_t2998694100_StaticFields::get_offset_of_U3CDisableCachingU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (AppContextDefaultValues_t1407290779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (DateTimeFormat_t3411794490), -1, sizeof(DateTimeFormat_t3411794490_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable287[3] = 
{
	DateTimeFormat_t3411794490_StaticFields::get_offset_of_NullOffset_0(),
	DateTimeFormat_t3411794490_StaticFields::get_offset_of_allStandardFormats_1(),
	DateTimeFormat_t3411794490_StaticFields::get_offset_of_fixedNumberFormats_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (DateTimeParse_t142487781), -1, sizeof(DateTimeParse_t142487781_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable288[2] = 
{
	DateTimeParse_t142487781_StaticFields::get_offset_of_m_hebrewNumberParser_0(),
	DateTimeParse_t142487781_StaticFields::get_offset_of_dateParsingStates_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (MatchNumberDelegate_t829181835), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (DTT_t2061685563)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable290[22] = 
{
	DTT_t2061685563::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (TM_t1100125177)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable291[4] = 
{
	TM_t1100125177::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (DS_t2895933748)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable292[40] = 
{
	DS_t2895933748::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (__DTString_t622273961)+ sizeof (RuntimeObject), -1, sizeof(__DTString_t622273961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable293[7] = 
{
	__DTString_t622273961::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961::get_offset_of_len_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961::get_offset_of_m_current_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961::get_offset_of_m_info_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961::get_offset_of_m_checkDigitToken_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t622273961_StaticFields::get_offset_of_WhiteSpaceChecks_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (DTSubStringType_t4090750909)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable294[6] = 
{
	DTSubStringType_t4090750909::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (DTSubString_t4175307896)+ sizeof (RuntimeObject), sizeof(DTSubString_t4175307896_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable295[5] = 
{
	DTSubString_t4175307896::get_offset_of_s_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t4175307896::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t4175307896::get_offset_of_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t4175307896::get_offset_of_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t4175307896::get_offset_of_value_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (DateTimeToken_t401697896)+ sizeof (RuntimeObject), sizeof(DateTimeToken_t401697896 ), 0, 0 };
extern const int32_t g_FieldOffsetTable296[3] = 
{
	DateTimeToken_t401697896::get_offset_of_dtt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t401697896::get_offset_of_suffix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t401697896::get_offset_of_num_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (DateTimeRawInfo_t1145403356)+ sizeof (RuntimeObject), sizeof(DateTimeRawInfo_t1145403356_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable297[10] = 
{
	DateTimeRawInfo_t1145403356::get_offset_of_num_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_numCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_month_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_year_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_era_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_timeMark_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_fraction_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_hasSameDateAndTimeSeparators_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1145403356::get_offset_of_timeZone_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (ParseFailureKind_t1924786925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable298[6] = 
{
	ParseFailureKind_t1924786925::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (ParseFlags_t3987676099)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable299[16] = 
{
	ParseFlags_t3987676099::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
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
