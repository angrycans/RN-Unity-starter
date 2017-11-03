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

// System.Collections.ArrayList
struct ArrayList_t295717187;
// System.Int32[]
struct Int32U5BU5D_t1593056302;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t1966952102;
// System.Object[]
struct ObjectU5BU5D_t3295846574;
// System.Collections.Queue
struct Queue_t3292168983;
// System.Collections.IComparer
struct IComparer_t1164053248;
// System.Collections.SortedList/KeyList
struct KeyList_t4079173070;
// System.Collections.SortedList/ValueList
struct ValueList_t1025225709;
// System.Collections.SortedList
struct SortedList_t3600584927;
// System.Collections.Stack
struct Stack_t808431720;
// System.Collections.Hashtable
struct Hashtable_t1130233839;
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
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1711343214;
// System.Globalization.CompareInfo
struct CompareInfo_t197266613;
// System.Globalization.TextInfo
struct TextInfo_t2558380306;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t3895809087;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t1149942203;
// System.Char[]
struct CharU5BU5D_t1860498715;
// System.Collections.IList
struct IList_t1258252643;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t1472365873;
// System.Collections.ICollection
struct ICollection_t3999548773;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3892604128;
// System.Globalization.Calendar
struct Calendar_t2028660128;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t838865395;

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
#ifndef READONLYCOLLECTIONBASE_T2343043269_H
#define READONLYCOLLECTIONBASE_T2343043269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t2343043269  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t295717187 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t2343043269, ___list_0)); }
	inline ArrayList_t295717187 * get_list_0() const { return ___list_0; }
	inline ArrayList_t295717187 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t295717187 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T2343043269_H
#ifndef HASHHELPERS_T1525234284_H
#define HASHHELPERS_T1525234284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_t1525234284  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t1525234284_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t1593056302* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t1966952102 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_t1525234284_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t1593056302* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t1593056302** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t1593056302* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_t1525234284_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t1966952102 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t1966952102 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t1966952102 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T1525234284_H
#ifndef QUEUE_T3292168983_H
#define QUEUE_T3292168983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t3292168983  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t3295846574* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____array_0)); }
	inline ObjectU5BU5D_t3295846574* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3295846574** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3295846574* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t3292168983, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T3292168983_H
#ifndef QUEUEENUMERATOR_T2486007532_H
#define QUEUEENUMERATOR_T2486007532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t2486007532  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t3292168983 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2486007532, ____q_0)); }
	inline Queue_t3292168983 * get__q_0() const { return ____q_0; }
	inline Queue_t3292168983 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_t3292168983 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2486007532, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2486007532, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2486007532, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T2486007532_H
#ifndef QUEUEDEBUGVIEW_T2452121830_H
#define QUEUEDEBUGVIEW_T2452121830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t2452121830  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T2452121830_H
#ifndef SORTEDLIST_T3600584927_H
#define SORTEDLIST_T3600584927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t3600584927  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t3295846574* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t3295846574* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t4079173070 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t1025225709 * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___keys_0)); }
	inline ObjectU5BU5D_t3295846574* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t3295846574** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t3295846574* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___values_1)); }
	inline ObjectU5BU5D_t3295846574* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t3295846574** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t3295846574* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___keyList_5)); }
	inline KeyList_t4079173070 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t4079173070 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t4079173070 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyList_5), value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ___valueList_6)); }
	inline ValueList_t1025225709 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t1025225709 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t1025225709 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_6), value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t3600584927, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_7), value);
	}
};

struct SortedList_t3600584927_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t3295846574* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t3600584927_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_t3295846574* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_t3295846574** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_t3295846574* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T3600584927_H
#ifndef SORTEDLISTENUMERATOR_T1478989069_H
#define SORTEDLISTENUMERATOR_T1478989069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t1478989069  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t3600584927 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___sortedList_0)); }
	inline SortedList_t3600584927 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3600584927 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3600584927 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t1478989069, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T1478989069_H
#ifndef KEYLIST_T4079173070_H
#define KEYLIST_T4079173070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/KeyList
struct  KeyList_t4079173070  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t3600584927 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t4079173070, ___sortedList_0)); }
	inline SortedList_t3600584927 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3600584927 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3600584927 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYLIST_T4079173070_H
#ifndef VALUELIST_T1025225709_H
#define VALUELIST_T1025225709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t1025225709  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t3600584927 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t1025225709, ___sortedList_0)); }
	inline SortedList_t3600584927 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3600584927 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3600584927 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T1025225709_H
#ifndef SORTEDLISTDEBUGVIEW_T2286593630_H
#define SORTEDLISTDEBUGVIEW_T2286593630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t2286593630  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T2286593630_H
#ifndef STACK_T808431720_H
#define STACK_T808431720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t808431720  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3295846574* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t808431720, ____array_0)); }
	inline ObjectU5BU5D_t3295846574* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3295846574** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3295846574* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t808431720, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t808431720, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t808431720, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T808431720_H
#ifndef STACKENUMERATOR_T2726577425_H
#define STACKENUMERATOR_T2726577425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_t2726577425  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t808431720 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_t2726577425, ____stack_0)); }
	inline Stack_t808431720 * get__stack_0() const { return ____stack_0; }
	inline Stack_t808431720 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t808431720 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_t2726577425, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_t2726577425, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_t2726577425, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_T2726577425_H
#ifndef STACKDEBUGVIEW_T103015581_H
#define STACKDEBUGVIEW_T103015581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_t103015581  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_T103015581_H
#ifndef LOWLEVELCOMPARER_T368086769_H
#define LOWLEVELCOMPARER_T368086769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t368086769  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t368086769_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t368086769 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t368086769_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t368086769 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t368086769 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t368086769 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T368086769_H
#ifndef OBJECTEQUALITYCOMPARER_T334739859_H
#define OBJECTEQUALITYCOMPARER_T334739859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t334739859  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t334739859_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t334739859 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t334739859_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t334739859 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t334739859 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t334739859 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T334739859_H
#ifndef HASHHELPERS_T1737228773_H
#define HASHHELPERS_T1737228773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.HashHelpers
struct  HashHelpers_t1737228773  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T1737228773_H
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
#ifndef EQUALITYCOMPARER_1_T2235216051_H
#define EQUALITYCOMPARER_1_T2235216051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t2235216051  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t2235216051_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t2235216051 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t2235216051_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t2235216051 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t2235216051 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t2235216051 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T2235216051_H
#ifndef HASHTABLEDEBUGVIEW_T2196239213_H
#define HASHTABLEDEBUGVIEW_T2196239213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_t2196239213  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_T2196239213_H
#ifndef HASHTABLEENUMERATOR_T1587521188_H
#define HASHTABLEENUMERATOR_T1587521188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_t1587521188  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t1130233839 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___hashtable_0)); }
	inline Hashtable_t1130233839 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1130233839 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1130233839 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1587521188, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_T1587521188_H
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
#ifndef VALUECOLLECTION_T1347947265_H
#define VALUECOLLECTION_T1347947265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_t1347947265  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t1130233839 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1347947265, ____hashtable_0)); }
	inline Hashtable_t1130233839 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1130233839 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1130233839 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T1347947265_H
#ifndef KEYCOLLECTION_T1818679054_H
#define KEYCOLLECTION_T1818679054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_t1818679054  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t1130233839 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1818679054, ____hashtable_0)); }
	inline Hashtable_t1130233839 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1130233839 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1130233839 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T1818679054_H
#ifndef COMPATIBLECOMPARER_T2294841157_H
#define COMPATIBLECOMPARER_T2294841157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_t2294841157  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2294841157, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2294841157, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T2294841157_H
#ifndef TUPLE_T4190566261_H
#define TUPLE_T4190566261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple
struct  Tuple_t4190566261  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T4190566261_H
#ifndef COMPARER_T2456661936_H
#define COMPARER_T2456661936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t2456661936  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t197266613 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t2456661936, ___m_compareInfo_0)); }
	inline CompareInfo_t197266613 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t197266613 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t197266613 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t2456661936_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t2456661936 * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t2456661936 * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t2456661936_StaticFields, ___Default_1)); }
	inline Comparer_t2456661936 * get_Default_1() const { return ___Default_1; }
	inline Comparer_t2456661936 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t2456661936 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t2456661936_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t2456661936 * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t2456661936 ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t2456661936 * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T2456661936_H
#ifndef COLLECTIONBASE_T3790669973_H
#define COLLECTIONBASE_T3790669973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t3790669973  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t295717187 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t3790669973, ___list_0)); }
	inline ArrayList_t295717187 * get_list_0() const { return ___list_0; }
	inline ArrayList_t295717187 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t295717187 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T3790669973_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T3895809087_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T3895809087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t3895809087  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t2558380306 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t3895809087, ___m_text_0)); }
	inline TextInfo_t2558380306 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t2558380306 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t2558380306 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t3895809087_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t3895809087 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t3895809087_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t3895809087 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t3895809087 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t3895809087 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T3895809087_H
#ifndef CASEINSENSITIVECOMPARER_T1149942203_H
#define CASEINSENSITIVECOMPARER_T1149942203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t1149942203  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t197266613 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t1149942203, ___m_compareInfo_0)); }
	inline CompareInfo_t197266613 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t197266613 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t197266613 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t1149942203_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t1149942203 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t1149942203_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t1149942203 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t1149942203 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t1149942203 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T1149942203_H
#ifndef ARRAYLISTDEBUGVIEW_T3655900687_H
#define ARRAYLISTDEBUGVIEW_T3655900687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_t3655900687  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_T3655900687_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T274626315_H
#define ARRAYLISTENUMERATORSIMPLE_T274626315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t274626315  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t295717187 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315, ___list_0)); }
	inline ArrayList_t295717187 * get_list_0() const { return ___list_0; }
	inline ArrayList_t295717187 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t295717187 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t274626315_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t274626315_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T274626315_H
#ifndef ARRAYLIST_T295717187_H
#define ARRAYLIST_T295717187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t295717187  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3295846574* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t295717187, ____items_0)); }
	inline ObjectU5BU5D_t3295846574* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3295846574** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3295846574* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t295717187, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t295717187, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t295717187, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t295717187_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3295846574* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t295717187_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t3295846574* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t3295846574** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t3295846574* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T295717187_H
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
#ifndef DATETIME_T1334245555_H
#define DATETIME_T1334245555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1334245555 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t1334245555, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t1334245555_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t1593056302* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t1593056302* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1334245555  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1334245555  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t1334245555_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t1593056302* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t1593056302** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t1593056302* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t1334245555_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t1593056302* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t1593056302** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t1593056302* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1334245555_StaticFields, ___MinValue_2)); }
	inline DateTime_t1334245555  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t1334245555 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t1334245555  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1334245555_StaticFields, ___MaxValue_3)); }
	inline DateTime_t1334245555  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t1334245555 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t1334245555  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1334245555_H
#ifndef ILISTWRAPPER_T1633679512_H
#define ILISTWRAPPER_T1633679512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/IListWrapper
struct  IListWrapper_t1633679512  : public ArrayList_t295717187
{
public:
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(IListWrapper_t1633679512, ____list_6)); }
	inline RuntimeObject* get__list_6() const { return ____list_6; }
	inline RuntimeObject** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(RuntimeObject* value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILISTWRAPPER_T1633679512_H
#ifndef BYTEEQUALITYCOMPARER_T2042734471_H
#define BYTEEQUALITYCOMPARER_T2042734471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t2042734471  : public EqualityComparer_1_t2235216051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T2042734471_H
#ifndef SYNCARRAYLIST_T377696399_H
#define SYNCARRAYLIST_T377696399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SyncArrayList
struct  SyncArrayList_t377696399  : public ArrayList_t295717187
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SyncArrayList::_list
	ArrayList_t295717187 * ____list_6;
	// System.Object System.Collections.ArrayList/SyncArrayList::_root
	RuntimeObject * ____root_7;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(SyncArrayList_t377696399, ____list_6)); }
	inline ArrayList_t295717187 * get__list_6() const { return ____list_6; }
	inline ArrayList_t295717187 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t295717187 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}

	inline static int32_t get_offset_of__root_7() { return static_cast<int32_t>(offsetof(SyncArrayList_t377696399, ____root_7)); }
	inline RuntimeObject * get__root_7() const { return ____root_7; }
	inline RuntimeObject ** get_address_of__root_7() { return &____root_7; }
	inline void set__root_7(RuntimeObject * value)
	{
		____root_7 = value;
		Il2CppCodeGenWriteBarrier((&____root_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCARRAYLIST_T377696399_H
#ifndef READONLYARRAYLIST_T2613222677_H
#define READONLYARRAYLIST_T2613222677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t2613222677  : public ArrayList_t295717187
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t295717187 * ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t2613222677, ____list_6)); }
	inline ArrayList_t295717187 * get__list_6() const { return ____list_6; }
	inline ArrayList_t295717187 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t295717187 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T2613222677_H
#ifndef SYNCSORTEDLIST_T3604729574_H
#define SYNCSORTEDLIST_T3604729574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_t3604729574  : public SortedList_t3600584927
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t3600584927 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t3604729574, ____list_9)); }
	inline SortedList_t3600584927 * get__list_9() const { return ____list_9; }
	inline SortedList_t3600584927 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t3600584927 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((&____list_9), value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t3604729574, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((&____root_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_T3604729574_H
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
#ifndef DICTIONARYENTRY_T2294757551_H
#define DICTIONARYENTRY_T2294757551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t2294757551 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2294757551, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2294757551, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2294757551_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2294757551_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T2294757551_H
#ifndef BUCKET_T95936144_H
#define BUCKET_T95936144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t95936144 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t95936144, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t95936144, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t95936144, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t95936144_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t95936144_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T95936144_H
#ifndef KEYNOTFOUNDEXCEPTION_T2262570828_H
#define KEYNOTFOUNDEXCEPTION_T2262570828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2262570828  : public SystemException_t3911392464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2262570828_H
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
#ifndef HASHTABLE_T1130233839_H
#define HASHTABLE_T1130233839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1130233839  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t1472365873* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___buckets_10)); }
	inline bucketU5BU5D_t1472365873* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_t1472365873** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_t1472365873* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_10), value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((&___keys_17), value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((&___values_18), value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_19), value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t1130233839, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1130233839_H
#ifndef PARSINGINFO_T3425741688_H
#define PARSINGINFO_T3425741688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParsingInfo
struct  ParsingInfo_t3425741688 
{
public:
	// System.Globalization.Calendar System.ParsingInfo::calendar
	Calendar_t2028660128 * ___calendar_0;
	// System.Int32 System.ParsingInfo::dayOfWeek
	int32_t ___dayOfWeek_1;
	// System.DateTimeParse/TM System.ParsingInfo::timeMark
	int32_t ___timeMark_2;
	// System.Boolean System.ParsingInfo::fUseHour12
	bool ___fUseHour12_3;
	// System.Boolean System.ParsingInfo::fUseTwoDigitYear
	bool ___fUseTwoDigitYear_4;
	// System.Boolean System.ParsingInfo::fAllowInnerWhite
	bool ___fAllowInnerWhite_5;
	// System.Boolean System.ParsingInfo::fAllowTrailingWhite
	bool ___fAllowTrailingWhite_6;
	// System.Boolean System.ParsingInfo::fCustomNumberParser
	bool ___fCustomNumberParser_7;
	// System.DateTimeParse/MatchNumberDelegate System.ParsingInfo::parseNumberDelegate
	MatchNumberDelegate_t838865395 * ___parseNumberDelegate_8;

public:
	inline static int32_t get_offset_of_calendar_0() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___calendar_0)); }
	inline Calendar_t2028660128 * get_calendar_0() const { return ___calendar_0; }
	inline Calendar_t2028660128 ** get_address_of_calendar_0() { return &___calendar_0; }
	inline void set_calendar_0(Calendar_t2028660128 * value)
	{
		___calendar_0 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_0), value);
	}

	inline static int32_t get_offset_of_dayOfWeek_1() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___dayOfWeek_1)); }
	inline int32_t get_dayOfWeek_1() const { return ___dayOfWeek_1; }
	inline int32_t* get_address_of_dayOfWeek_1() { return &___dayOfWeek_1; }
	inline void set_dayOfWeek_1(int32_t value)
	{
		___dayOfWeek_1 = value;
	}

	inline static int32_t get_offset_of_timeMark_2() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___timeMark_2)); }
	inline int32_t get_timeMark_2() const { return ___timeMark_2; }
	inline int32_t* get_address_of_timeMark_2() { return &___timeMark_2; }
	inline void set_timeMark_2(int32_t value)
	{
		___timeMark_2 = value;
	}

	inline static int32_t get_offset_of_fUseHour12_3() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___fUseHour12_3)); }
	inline bool get_fUseHour12_3() const { return ___fUseHour12_3; }
	inline bool* get_address_of_fUseHour12_3() { return &___fUseHour12_3; }
	inline void set_fUseHour12_3(bool value)
	{
		___fUseHour12_3 = value;
	}

	inline static int32_t get_offset_of_fUseTwoDigitYear_4() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___fUseTwoDigitYear_4)); }
	inline bool get_fUseTwoDigitYear_4() const { return ___fUseTwoDigitYear_4; }
	inline bool* get_address_of_fUseTwoDigitYear_4() { return &___fUseTwoDigitYear_4; }
	inline void set_fUseTwoDigitYear_4(bool value)
	{
		___fUseTwoDigitYear_4 = value;
	}

	inline static int32_t get_offset_of_fAllowInnerWhite_5() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___fAllowInnerWhite_5)); }
	inline bool get_fAllowInnerWhite_5() const { return ___fAllowInnerWhite_5; }
	inline bool* get_address_of_fAllowInnerWhite_5() { return &___fAllowInnerWhite_5; }
	inline void set_fAllowInnerWhite_5(bool value)
	{
		___fAllowInnerWhite_5 = value;
	}

	inline static int32_t get_offset_of_fAllowTrailingWhite_6() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___fAllowTrailingWhite_6)); }
	inline bool get_fAllowTrailingWhite_6() const { return ___fAllowTrailingWhite_6; }
	inline bool* get_address_of_fAllowTrailingWhite_6() { return &___fAllowTrailingWhite_6; }
	inline void set_fAllowTrailingWhite_6(bool value)
	{
		___fAllowTrailingWhite_6 = value;
	}

	inline static int32_t get_offset_of_fCustomNumberParser_7() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___fCustomNumberParser_7)); }
	inline bool get_fCustomNumberParser_7() const { return ___fCustomNumberParser_7; }
	inline bool* get_address_of_fCustomNumberParser_7() { return &___fCustomNumberParser_7; }
	inline void set_fCustomNumberParser_7(bool value)
	{
		___fCustomNumberParser_7 = value;
	}

	inline static int32_t get_offset_of_parseNumberDelegate_8() { return static_cast<int32_t>(offsetof(ParsingInfo_t3425741688, ___parseNumberDelegate_8)); }
	inline MatchNumberDelegate_t838865395 * get_parseNumberDelegate_8() const { return ___parseNumberDelegate_8; }
	inline MatchNumberDelegate_t838865395 ** get_address_of_parseNumberDelegate_8() { return &___parseNumberDelegate_8; }
	inline void set_parseNumberDelegate_8(MatchNumberDelegate_t838865395 * value)
	{
		___parseNumberDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___parseNumberDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParsingInfo
struct ParsingInfo_t3425741688_marshaled_pinvoke
{
	Calendar_t2028660128 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
// Native definition for COM marshalling of System.ParsingInfo
struct ParsingInfo_t3425741688_marshaled_com
{
	Calendar_t2028660128 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
#endif // PARSINGINFO_T3425741688_H
#ifndef SYNCHASHTABLE_T2188920360_H
#define SYNCHASHTABLE_T2188920360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t2188920360  : public Hashtable_t1130233839
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t1130233839 * ____table_21;

public:
	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(SyncHashtable_t2188920360, ____table_21)); }
	inline Hashtable_t1130233839 * get__table_21() const { return ____table_21; }
	inline Hashtable_t1130233839 ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(Hashtable_t1130233839 * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((&____table_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T2188920360_H
#ifndef DATETIMERESULT_T2999380037_H
#define DATETIMERESULT_T2999380037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeResult
struct  DateTimeResult_t2999380037 
{
public:
	// System.Int32 System.DateTimeResult::Year
	int32_t ___Year_0;
	// System.Int32 System.DateTimeResult::Month
	int32_t ___Month_1;
	// System.Int32 System.DateTimeResult::Day
	int32_t ___Day_2;
	// System.Int32 System.DateTimeResult::Hour
	int32_t ___Hour_3;
	// System.Int32 System.DateTimeResult::Minute
	int32_t ___Minute_4;
	// System.Int32 System.DateTimeResult::Second
	int32_t ___Second_5;
	// System.Double System.DateTimeResult::fraction
	double ___fraction_6;
	// System.Int32 System.DateTimeResult::era
	int32_t ___era_7;
	// System.ParseFlags System.DateTimeResult::flags
	int32_t ___flags_8;
	// System.TimeSpan System.DateTimeResult::timeZoneOffset
	TimeSpan_t1921238100  ___timeZoneOffset_9;
	// System.Globalization.Calendar System.DateTimeResult::calendar
	Calendar_t2028660128 * ___calendar_10;
	// System.DateTime System.DateTimeResult::parsedDate
	DateTime_t1334245555  ___parsedDate_11;
	// System.ParseFailureKind System.DateTimeResult::failure
	int32_t ___failure_12;
	// System.String System.DateTimeResult::failureMessageID
	String_t* ___failureMessageID_13;
	// System.Object System.DateTimeResult::failureMessageFormatArgument
	RuntimeObject * ___failureMessageFormatArgument_14;
	// System.String System.DateTimeResult::failureArgumentName
	String_t* ___failureArgumentName_15;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_fraction_6() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___fraction_6)); }
	inline double get_fraction_6() const { return ___fraction_6; }
	inline double* get_address_of_fraction_6() { return &___fraction_6; }
	inline void set_fraction_6(double value)
	{
		___fraction_6 = value;
	}

	inline static int32_t get_offset_of_era_7() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___era_7)); }
	inline int32_t get_era_7() const { return ___era_7; }
	inline int32_t* get_address_of_era_7() { return &___era_7; }
	inline void set_era_7(int32_t value)
	{
		___era_7 = value;
	}

	inline static int32_t get_offset_of_flags_8() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___flags_8)); }
	inline int32_t get_flags_8() const { return ___flags_8; }
	inline int32_t* get_address_of_flags_8() { return &___flags_8; }
	inline void set_flags_8(int32_t value)
	{
		___flags_8 = value;
	}

	inline static int32_t get_offset_of_timeZoneOffset_9() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___timeZoneOffset_9)); }
	inline TimeSpan_t1921238100  get_timeZoneOffset_9() const { return ___timeZoneOffset_9; }
	inline TimeSpan_t1921238100 * get_address_of_timeZoneOffset_9() { return &___timeZoneOffset_9; }
	inline void set_timeZoneOffset_9(TimeSpan_t1921238100  value)
	{
		___timeZoneOffset_9 = value;
	}

	inline static int32_t get_offset_of_calendar_10() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___calendar_10)); }
	inline Calendar_t2028660128 * get_calendar_10() const { return ___calendar_10; }
	inline Calendar_t2028660128 ** get_address_of_calendar_10() { return &___calendar_10; }
	inline void set_calendar_10(Calendar_t2028660128 * value)
	{
		___calendar_10 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_10), value);
	}

	inline static int32_t get_offset_of_parsedDate_11() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___parsedDate_11)); }
	inline DateTime_t1334245555  get_parsedDate_11() const { return ___parsedDate_11; }
	inline DateTime_t1334245555 * get_address_of_parsedDate_11() { return &___parsedDate_11; }
	inline void set_parsedDate_11(DateTime_t1334245555  value)
	{
		___parsedDate_11 = value;
	}

	inline static int32_t get_offset_of_failure_12() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___failure_12)); }
	inline int32_t get_failure_12() const { return ___failure_12; }
	inline int32_t* get_address_of_failure_12() { return &___failure_12; }
	inline void set_failure_12(int32_t value)
	{
		___failure_12 = value;
	}

	inline static int32_t get_offset_of_failureMessageID_13() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___failureMessageID_13)); }
	inline String_t* get_failureMessageID_13() const { return ___failureMessageID_13; }
	inline String_t** get_address_of_failureMessageID_13() { return &___failureMessageID_13; }
	inline void set_failureMessageID_13(String_t* value)
	{
		___failureMessageID_13 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageID_13), value);
	}

	inline static int32_t get_offset_of_failureMessageFormatArgument_14() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___failureMessageFormatArgument_14)); }
	inline RuntimeObject * get_failureMessageFormatArgument_14() const { return ___failureMessageFormatArgument_14; }
	inline RuntimeObject ** get_address_of_failureMessageFormatArgument_14() { return &___failureMessageFormatArgument_14; }
	inline void set_failureMessageFormatArgument_14(RuntimeObject * value)
	{
		___failureMessageFormatArgument_14 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageFormatArgument_14), value);
	}

	inline static int32_t get_offset_of_failureArgumentName_15() { return static_cast<int32_t>(offsetof(DateTimeResult_t2999380037, ___failureArgumentName_15)); }
	inline String_t* get_failureArgumentName_15() const { return ___failureArgumentName_15; }
	inline String_t** get_address_of_failureArgumentName_15() { return &___failureArgumentName_15; }
	inline void set_failureArgumentName_15(String_t* value)
	{
		___failureArgumentName_15 = value;
		Il2CppCodeGenWriteBarrier((&___failureArgumentName_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeResult
struct DateTimeResult_t2999380037_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t1921238100  ___timeZoneOffset_9;
	Calendar_t2028660128 * ___calendar_10;
	DateTime_t1334245555  ___parsedDate_11;
	int32_t ___failure_12;
	char* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	char* ___failureArgumentName_15;
};
// Native definition for COM marshalling of System.DateTimeResult
struct DateTimeResult_t2999380037_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t1921238100  ___timeZoneOffset_9;
	Calendar_t2028660128 * ___calendar_10;
	DateTime_t1334245555  ___parsedDate_11;
	int32_t ___failure_12;
	Il2CppChar* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	Il2CppChar* ___failureArgumentName_15;
};
#endif // DATETIMERESULT_T2999380037_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (DateTimeResult_t2999380037)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[16] = 
{
	DateTimeResult_t2999380037::get_offset_of_Year_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_Month_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_Day_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_Hour_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_Minute_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_Second_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_fraction_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_era_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_flags_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_timeZoneOffset_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_calendar_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_parsedDate_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_failure_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_failureMessageID_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_failureMessageFormatArgument_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2999380037::get_offset_of_failureArgumentName_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ParsingInfo_t3425741688)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable301[9] = 
{
	ParsingInfo_t3425741688::get_offset_of_calendar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_dayOfWeek_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_timeMark_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_fUseHour12_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_fUseTwoDigitYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_fAllowInnerWhite_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_fAllowTrailingWhite_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_fCustomNumberParser_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3425741688::get_offset_of_parseNumberDelegate_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (TokenType_t2121812130)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable302[33] = 
{
	TokenType_t2121812130::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (Tuple_t4190566261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable305[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable306[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable307[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (ArrayList_t295717187), -1, sizeof(ArrayList_t295717187_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable308[6] = 
{
	ArrayList_t295717187::get_offset_of__items_0(),
	ArrayList_t295717187::get_offset_of__size_1(),
	ArrayList_t295717187::get_offset_of__version_2(),
	ArrayList_t295717187::get_offset_of__syncRoot_3(),
	0,
	ArrayList_t295717187_StaticFields::get_offset_of_emptyArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (IListWrapper_t1633679512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	IListWrapper_t1633679512::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (SyncArrayList_t377696399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable310[2] = 
{
	SyncArrayList_t377696399::get_offset_of__list_6(),
	SyncArrayList_t377696399::get_offset_of__root_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (ReadOnlyArrayList_t2613222677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	ReadOnlyArrayList_t2613222677::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (ArrayListEnumeratorSimple_t274626315), -1, sizeof(ArrayListEnumeratorSimple_t274626315_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable312[6] = 
{
	ArrayListEnumeratorSimple_t274626315::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t274626315::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t274626315::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t274626315::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t274626315::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t274626315_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (ArrayListDebugView_t3655900687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (CaseInsensitiveComparer_t1149942203), -1, sizeof(CaseInsensitiveComparer_t1149942203_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable314[2] = 
{
	CaseInsensitiveComparer_t1149942203::get_offset_of_m_compareInfo_0(),
	CaseInsensitiveComparer_t1149942203_StaticFields::get_offset_of_m_InvariantCaseInsensitiveComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (CaseInsensitiveHashCodeProvider_t3895809087), -1, sizeof(CaseInsensitiveHashCodeProvider_t3895809087_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable315[2] = 
{
	CaseInsensitiveHashCodeProvider_t3895809087::get_offset_of_m_text_0(),
	CaseInsensitiveHashCodeProvider_t3895809087_StaticFields::get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (CollectionBase_t3790669973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	CollectionBase_t3790669973::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (Comparer_t2456661936), -1, sizeof(Comparer_t2456661936_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable317[3] = 
{
	Comparer_t2456661936::get_offset_of_m_compareInfo_0(),
	Comparer_t2456661936_StaticFields::get_offset_of_Default_1(),
	Comparer_t2456661936_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (CompatibleComparer_t2294841157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[2] = 
{
	CompatibleComparer_t2294841157::get_offset_of__comparer_0(),
	CompatibleComparer_t2294841157::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (DictionaryEntry_t2294757551)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t2294757551_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable319[2] = 
{
	DictionaryEntry_t2294757551::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t2294757551::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (Hashtable_t1130233839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[21] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Hashtable_t1130233839::get_offset_of_buckets_10(),
	Hashtable_t1130233839::get_offset_of_count_11(),
	Hashtable_t1130233839::get_offset_of_occupancy_12(),
	Hashtable_t1130233839::get_offset_of_loadsize_13(),
	Hashtable_t1130233839::get_offset_of_loadFactor_14(),
	Hashtable_t1130233839::get_offset_of_version_15(),
	Hashtable_t1130233839::get_offset_of_isWriterInProgress_16(),
	Hashtable_t1130233839::get_offset_of_keys_17(),
	Hashtable_t1130233839::get_offset_of_values_18(),
	Hashtable_t1130233839::get_offset_of__keycomparer_19(),
	Hashtable_t1130233839::get_offset_of__syncRoot_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (bucket_t95936144)+ sizeof (RuntimeObject), sizeof(bucket_t95936144_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable321[3] = 
{
	bucket_t95936144::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t95936144::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t95936144::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (KeyCollection_t1818679054), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	KeyCollection_t1818679054::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ValueCollection_t1347947265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[1] = 
{
	ValueCollection_t1347947265::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (SyncHashtable_t2188920360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[1] = 
{
	SyncHashtable_t2188920360::get_offset_of__table_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (HashtableEnumerator_t1587521188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[7] = 
{
	HashtableEnumerator_t1587521188::get_offset_of_hashtable_0(),
	HashtableEnumerator_t1587521188::get_offset_of_bucket_1(),
	HashtableEnumerator_t1587521188::get_offset_of_version_2(),
	HashtableEnumerator_t1587521188::get_offset_of_current_3(),
	HashtableEnumerator_t1587521188::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_t1587521188::get_offset_of_currentKey_5(),
	HashtableEnumerator_t1587521188::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (HashtableDebugView_t2196239213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (HashHelpers_t1525234284), -1, sizeof(HashHelpers_t1525234284_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable327[2] = 
{
	HashHelpers_t1525234284_StaticFields::get_offset_of_primes_0(),
	HashHelpers_t1525234284_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (Queue_t3292168983), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[7] = 
{
	Queue_t3292168983::get_offset_of__array_0(),
	Queue_t3292168983::get_offset_of__head_1(),
	Queue_t3292168983::get_offset_of__tail_2(),
	Queue_t3292168983::get_offset_of__size_3(),
	Queue_t3292168983::get_offset_of__growFactor_4(),
	Queue_t3292168983::get_offset_of__version_5(),
	Queue_t3292168983::get_offset_of__syncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (QueueEnumerator_t2486007532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[4] = 
{
	QueueEnumerator_t2486007532::get_offset_of__q_0(),
	QueueEnumerator_t2486007532::get_offset_of__index_1(),
	QueueEnumerator_t2486007532::get_offset_of__version_2(),
	QueueEnumerator_t2486007532::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (QueueDebugView_t2452121830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (ReadOnlyCollectionBase_t2343043269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[1] = 
{
	ReadOnlyCollectionBase_t2343043269::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (SortedList_t3600584927), -1, sizeof(SortedList_t3600584927_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable343[9] = 
{
	SortedList_t3600584927::get_offset_of_keys_0(),
	SortedList_t3600584927::get_offset_of_values_1(),
	SortedList_t3600584927::get_offset_of__size_2(),
	SortedList_t3600584927::get_offset_of_version_3(),
	SortedList_t3600584927::get_offset_of_comparer_4(),
	SortedList_t3600584927::get_offset_of_keyList_5(),
	SortedList_t3600584927::get_offset_of_valueList_6(),
	SortedList_t3600584927::get_offset_of__syncRoot_7(),
	SortedList_t3600584927_StaticFields::get_offset_of_emptyArray_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (SyncSortedList_t3604729574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[2] = 
{
	SyncSortedList_t3604729574::get_offset_of__list_9(),
	SyncSortedList_t3604729574::get_offset_of__root_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (SortedListEnumerator_t1478989069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[9] = 
{
	SortedListEnumerator_t1478989069::get_offset_of_sortedList_0(),
	SortedListEnumerator_t1478989069::get_offset_of_key_1(),
	SortedListEnumerator_t1478989069::get_offset_of_value_2(),
	SortedListEnumerator_t1478989069::get_offset_of_index_3(),
	SortedListEnumerator_t1478989069::get_offset_of_startIndex_4(),
	SortedListEnumerator_t1478989069::get_offset_of_endIndex_5(),
	SortedListEnumerator_t1478989069::get_offset_of_version_6(),
	SortedListEnumerator_t1478989069::get_offset_of_current_7(),
	SortedListEnumerator_t1478989069::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (KeyList_t4079173070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[1] = 
{
	KeyList_t4079173070::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (ValueList_t1025225709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[1] = 
{
	ValueList_t1025225709::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (SortedListDebugView_t2286593630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (Stack_t808431720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable349[4] = 
{
	Stack_t808431720::get_offset_of__array_0(),
	Stack_t808431720::get_offset_of__size_1(),
	Stack_t808431720::get_offset_of__version_2(),
	Stack_t808431720::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (StackEnumerator_t2726577425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable350[4] = 
{
	StackEnumerator_t2726577425::get_offset_of__stack_0(),
	StackEnumerator_t2726577425::get_offset_of__index_1(),
	StackEnumerator_t2726577425::get_offset_of__version_2(),
	StackEnumerator_t2726577425::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (StackDebugView_t103015581), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (LowLevelComparer_t368086769), -1, sizeof(LowLevelComparer_t368086769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable352[1] = 
{
	LowLevelComparer_t368086769_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable353[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable361[14] = 
{
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable362[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable363[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable365[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable366[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable367[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable368[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (ByteEqualityComparer_t2042734471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (KeyNotFoundException_t2262570828), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable388[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable389[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable390[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ObjectEqualityComparer_t334739859), -1, sizeof(ObjectEqualityComparer_t334739859_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable391[1] = 
{
	ObjectEqualityComparer_t334739859_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable392[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable393[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (HashHelpers_t1737228773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable395[9] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable396[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable397[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable398[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable399[6] = 
{
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
