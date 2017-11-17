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

// System.ComponentModel.Design.ITypeDescriptorFilterService
struct ITypeDescriptorFilterService_t1923358601;
// System.Collections.ICollection
struct ICollection_t2469102831;
// System.Collections.ArrayList
struct ArrayList_t1796983146;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1297077272;
// System.Collections.Hashtable
struct Hashtable_t3088047563;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t325250587;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2173975955;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1160274461;
// System.StringComparer
struct StringComparer_t338674654;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3141880339;
// System.Collections.IComparer
struct IComparer_t3186072147;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2420558321;
// System.Collections.IEnumerator
struct IEnumerator_t2211990549;
// System.Collections.IDictionary
struct IDictionary_t2369680111;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2592104723;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t745537828;
// System.IntPtr[]
struct IntPtrU5BU5D_t68393292;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3309317612;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2516982721;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t632963552;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t662779343;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t2816301386;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1140226047;
// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t1485118795;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t2739800559;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t39958789;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2038347594;
// System.Void
struct Void_t237477608;
// System.String[]
struct StringU5BU5D_t4166740166;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t748566284;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3567841730;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t2184761911;
// System.IO.Stream
struct Stream_t607203561;
// System.Byte[]
struct ByteU5BU5D_t3069277512;
// System.IO.Compression.DeflateStream
struct DeflateStream_t1253230877;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2786982091;
// System.Delegate[]
struct DelegateU5BU5D_t3672592440;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t242961465;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3583906858;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2284404197;
// System.IAsyncResult
struct IAsyncResult_t870988552;
// System.AsyncCallback
struct AsyncCallback_t4006376396;
// System.UInt32[]
struct UInt32U5BU5D_t1117984333;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2320775986;

struct Exception_t1895951012_marshaled_pinvoke;
struct Exception_t1895951012_marshaled_com;



#ifndef U3CMODULEU3E_T2633295036_H
#define U3CMODULEU3E_T2633295036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2633295036 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2633295036_H
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
#ifndef FILTERCACHEITEM_T1610282465_H
#define FILTERCACHEITEM_T1610282465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct  FilterCacheItem_t1610282465  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.ITypeDescriptorFilterService System.ComponentModel.TypeDescriptor/FilterCacheItem::_filterService
	RuntimeObject* ____filterService_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/FilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;

public:
	inline static int32_t get_offset_of__filterService_0() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1610282465, ____filterService_0)); }
	inline RuntimeObject* get__filterService_0() const { return ____filterService_0; }
	inline RuntimeObject** get_address_of__filterService_0() { return &____filterService_0; }
	inline void set__filterService_0(RuntimeObject* value)
	{
		____filterService_0 = value;
		Il2CppCodeGenWriteBarrier((&____filterService_0), value);
	}

	inline static int32_t get_offset_of_FilteredMembers_1() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1610282465, ___FilteredMembers_1)); }
	inline RuntimeObject* get_FilteredMembers_1() const { return ___FilteredMembers_1; }
	inline RuntimeObject** get_address_of_FilteredMembers_1() { return &___FilteredMembers_1; }
	inline void set_FilteredMembers_1(RuntimeObject* value)
	{
		___FilteredMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilteredMembers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERCACHEITEM_T1610282465_H
#ifndef DICTIONARYNODE_T2516982721_H
#define DICTIONARYNODE_T2516982721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2516982721  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2516982721 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2516982721, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2516982721, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2516982721, ___next_2)); }
	inline DictionaryNode_t2516982721 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2516982721 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2516982721 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2516982721_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T3141880339_H
#define NAMEOBJECTCOLLECTIONBASE_T3141880339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t3141880339  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t1796983146 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t3088047563 * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t325250587 * ____nullKeyEntry_4;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t2173975955 * ____keys_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t1160274461 * ____serializationInfo_6;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_7;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_8;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____entriesArray_1)); }
	inline ArrayList_t1796983146 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t1796983146 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t1796983146 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____entriesArray_1), value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyComparer_2), value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____entriesTable_3)); }
	inline Hashtable_t3088047563 * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t3088047563 ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t3088047563 * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____entriesTable_3), value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____nullKeyEntry_4)); }
	inline NameObjectEntry_t325250587 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_t325250587 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_t325250587 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((&____nullKeyEntry_4), value);
	}

	inline static int32_t get_offset_of__keys_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____keys_5)); }
	inline KeysCollection_t2173975955 * get__keys_5() const { return ____keys_5; }
	inline KeysCollection_t2173975955 ** get_address_of__keys_5() { return &____keys_5; }
	inline void set__keys_5(KeysCollection_t2173975955 * value)
	{
		____keys_5 = value;
		Il2CppCodeGenWriteBarrier((&____keys_5), value);
	}

	inline static int32_t get_offset_of__serializationInfo_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____serializationInfo_6)); }
	inline SerializationInfo_t1160274461 * get__serializationInfo_6() const { return ____serializationInfo_6; }
	inline SerializationInfo_t1160274461 ** get_address_of__serializationInfo_6() { return &____serializationInfo_6; }
	inline void set__serializationInfo_6(SerializationInfo_t1160274461 * value)
	{
		____serializationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____serializationInfo_6), value);
	}

	inline static int32_t get_offset_of__version_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____version_7)); }
	inline int32_t get__version_7() const { return ____version_7; }
	inline int32_t* get_address_of__version_7() { return &____version_7; }
	inline void set__version_7(int32_t value)
	{
		____version_7 = value;
	}

	inline static int32_t get_offset_of__syncRoot_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339, ____syncRoot_8)); }
	inline RuntimeObject * get__syncRoot_8() const { return ____syncRoot_8; }
	inline RuntimeObject ** get_address_of__syncRoot_8() { return &____syncRoot_8; }
	inline void set__syncRoot_8(RuntimeObject * value)
	{
		____syncRoot_8 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_8), value);
	}
};

struct NameObjectCollectionBase_t3141880339_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t338674654 * ___defaultComparer_9;

public:
	inline static int32_t get_offset_of_defaultComparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3141880339_StaticFields, ___defaultComparer_9)); }
	inline StringComparer_t338674654 * get_defaultComparer_9() const { return ___defaultComparer_9; }
	inline StringComparer_t338674654 ** get_address_of_defaultComparer_9() { return &___defaultComparer_9; }
	inline void set_defaultComparer_9(StringComparer_t338674654 * value)
	{
		___defaultComparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T3141880339_H
#ifndef NAMEOBJECTENTRY_T325250587_H
#define NAMEOBJECTENTRY_T325250587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct  NameObjectEntry_t325250587  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(NameObjectEntry_t325250587, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(NameObjectEntry_t325250587, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTENTRY_T325250587_H
#ifndef NAMEOBJECTKEYSENUMERATOR_T1819130159_H
#define NAMEOBJECTKEYSENUMERATOR_T1819130159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct  NameObjectKeysEnumerator_t1819130159  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_t3141880339 * ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1819130159, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__coll_1() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1819130159, ____coll_1)); }
	inline NameObjectCollectionBase_t3141880339 * get__coll_1() const { return ____coll_1; }
	inline NameObjectCollectionBase_t3141880339 ** get_address_of__coll_1() { return &____coll_1; }
	inline void set__coll_1(NameObjectCollectionBase_t3141880339 * value)
	{
		____coll_1 = value;
		Il2CppCodeGenWriteBarrier((&____coll_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1819130159, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTKEYSENUMERATOR_T1819130159_H
#ifndef KEYSCOLLECTION_T2173975955_H
#define KEYSCOLLECTION_T2173975955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t2173975955  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_t3141880339 * ____coll_0;

public:
	inline static int32_t get_offset_of__coll_0() { return static_cast<int32_t>(offsetof(KeysCollection_t2173975955, ____coll_0)); }
	inline NameObjectCollectionBase_t3141880339 * get__coll_0() const { return ____coll_0; }
	inline NameObjectCollectionBase_t3141880339 ** get_address_of__coll_0() { return &____coll_0; }
	inline void set__coll_0(NameObjectCollectionBase_t3141880339 * value)
	{
		____coll_0 = value;
		Il2CppCodeGenWriteBarrier((&____coll_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T2173975955_H
#ifndef COMPATIBLECOMPARER_T129053196_H
#define COMPATIBLECOMPARER_T129053196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CompatibleComparer
struct  CompatibleComparer_t129053196  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t129053196, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_2() { return static_cast<int32_t>(offsetof(CompatibleComparer_t129053196, ____hcp_2)); }
	inline RuntimeObject* get__hcp_2() const { return ____hcp_2; }
	inline RuntimeObject** get_address_of__hcp_2() { return &____hcp_2; }
	inline void set__hcp_2(RuntimeObject* value)
	{
		____hcp_2 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_2), value);
	}
};

struct CompatibleComparer_t129053196_StaticFields
{
public:
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;

public:
	inline static int32_t get_offset_of_defaultComparer_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t129053196_StaticFields, ___defaultComparer_1)); }
	inline RuntimeObject* get_defaultComparer_1() const { return ___defaultComparer_1; }
	inline RuntimeObject** get_address_of_defaultComparer_1() { return &___defaultComparer_1; }
	inline void set_defaultComparer_1(RuntimeObject* value)
	{
		___defaultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_1), value);
	}

	inline static int32_t get_offset_of_defaultHashProvider_3() { return static_cast<int32_t>(offsetof(CompatibleComparer_t129053196_StaticFields, ___defaultHashProvider_3)); }
	inline RuntimeObject* get_defaultHashProvider_3() const { return ___defaultHashProvider_3; }
	inline RuntimeObject** get_address_of_defaultHashProvider_3() { return &___defaultHashProvider_3; }
	inline void set_defaultHashProvider_3(RuntimeObject* value)
	{
		___defaultHashProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHashProvider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T129053196_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T3233899553_H
#define ORDEREDDICTIONARYENUMERATOR_T3233899553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t3233899553  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t3233899553, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t3233899553, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T3233899553_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T3406783750_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T3406783750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t3406783750  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t1796983146 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t3406783750, ____objects_0)); }
	inline ArrayList_t1796983146 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t1796983146 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t1796983146 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t3406783750, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T3406783750_H
#ifndef STRINGCOLLECTION_T3779064241_H
#define STRINGCOLLECTION_T3779064241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t3779064241  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t1796983146 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t3779064241, ___data_0)); }
	inline ArrayList_t1796983146 * get_data_0() const { return ___data_0; }
	inline ArrayList_t1796983146 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t1796983146 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T3779064241_H
#ifndef STRINGDICTIONARY_T4214966921_H
#define STRINGDICTIONARY_T4214966921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t4214966921  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t3088047563 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t4214966921, ___contents_0)); }
	inline Hashtable_t3088047563 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t3088047563 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t3088047563 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T4214966921_H
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
#ifndef SR_T1752655589_H
#define SR_T1752655589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SR
struct  SR_t1752655589  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T1752655589_H
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
#ifndef ERROR_T2838806472_H
#define ERROR_T2838806472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Error
struct  Error_t2838806472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T2838806472_H
#ifndef ENUMERABLE_T2523899207_H
#define ENUMERABLE_T2523899207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t2523899207  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T2523899207_H
#ifndef NODEKEYVALUEENUMERATOR_T3370361153_H
#define NODEKEYVALUEENUMERATOR_T3370361153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_t3370361153  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_t3309317612 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t2516982721 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t3370361153, ___list_0)); }
	inline ListDictionary_t3309317612 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3309317612 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3309317612 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t3370361153, ___current_1)); }
	inline DictionaryNode_t2516982721 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t2516982721 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t2516982721 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t3370361153, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t3370361153, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t3370361153, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUEENUMERATOR_T3370361153_H
#ifndef NODEKEYVALUECOLLECTION_T909230979_H
#define NODEKEYVALUECOLLECTION_T909230979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct  NodeKeyValueCollection_t909230979  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_t3309317612 * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t909230979, ___list_0)); }
	inline ListDictionary_t3309317612 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3309317612 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3309317612 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t909230979, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUECOLLECTION_T909230979_H
#ifndef ORDEREDDICTIONARY_T1500340074_H
#define ORDEREDDICTIONARY_T1500340074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t1500340074  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t1796983146 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t3088047563 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t1160274461 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____objectsArray_0)); }
	inline ArrayList_t1796983146 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t1796983146 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t1796983146 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____objectsTable_1)); }
	inline Hashtable_t3088047563 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t3088047563 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t3088047563 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t1500340074, ____siInfo_6)); }
	inline SerializationInfo_t1160274461 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t1160274461 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t1160274461 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T1500340074_H
#ifndef LISTDICTIONARY_T3309317612_H
#define LISTDICTIONARY_T3309317612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t3309317612  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2516982721 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_t3309317612, ___head_0)); }
	inline DictionaryNode_t2516982721 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t2516982721 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t2516982721 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t3309317612, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_t3309317612, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t3309317612, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_t3309317612, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T3309317612_H
#ifndef MEMBERDESCRIPTORCOMPARER_T3292322309_H
#define MEMBERDESCRIPTORCOMPARER_T3292322309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t3292322309  : public RuntimeObject
{
public:

public:
};

struct MemberDescriptorComparer_t3292322309_StaticFields
{
public:
	// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Instance
	MemberDescriptorComparer_t3292322309 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(MemberDescriptorComparer_t3292322309_StaticFields, ___Instance_0)); }
	inline MemberDescriptorComparer_t3292322309 * get_Instance_0() const { return ___Instance_0; }
	inline MemberDescriptorComparer_t3292322309 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(MemberDescriptorComparer_t3292322309 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T3292322309_H
#ifndef MERGEDTYPEDESCRIPTOR_T29853774_H
#define MERGEDTYPEDESCRIPTOR_T29853774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct  MergedTypeDescriptor_t29853774  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_primary
	RuntimeObject* ____primary_0;
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_secondary
	RuntimeObject* ____secondary_1;

public:
	inline static int32_t get_offset_of__primary_0() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t29853774, ____primary_0)); }
	inline RuntimeObject* get__primary_0() const { return ____primary_0; }
	inline RuntimeObject** get_address_of__primary_0() { return &____primary_0; }
	inline void set__primary_0(RuntimeObject* value)
	{
		____primary_0 = value;
		Il2CppCodeGenWriteBarrier((&____primary_0), value);
	}

	inline static int32_t get_offset_of__secondary_1() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t29853774, ____secondary_1)); }
	inline RuntimeObject* get__secondary_1() const { return ____secondary_1; }
	inline RuntimeObject** get_address_of__secondary_1() { return &____secondary_1; }
	inline void set__secondary_1(RuntimeObject* value)
	{
		____secondary_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEDTYPEDESCRIPTOR_T29853774_H
#ifndef NODEENUMERATOR_T4067266706_H
#define NODEENUMERATOR_T4067266706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct  NodeEnumerator_t4067266706  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::list
	ListDictionary_t3309317612 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::current
	DictionaryNode_t2516982721 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::start
	bool ___start_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t4067266706, ___list_0)); }
	inline ListDictionary_t3309317612 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3309317612 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3309317612 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t4067266706, ___current_1)); }
	inline DictionaryNode_t2516982721 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t2516982721 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t2516982721 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t4067266706, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(NodeEnumerator_t4067266706, ___start_3)); }
	inline bool get_start_3() const { return ___start_3; }
	inline bool* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(bool value)
	{
		___start_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEENUMERATOR_T4067266706_H
#ifndef TYPEDESCRIPTORINTERFACE_T1351250010_H
#define TYPEDESCRIPTORINTERFACE_T1351250010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
struct  TypeDescriptorInterface_t1351250010  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORINTERFACE_T1351250010_H
#ifndef MARSHALBYREFOBJECT_T2548916492_H
#define MARSHALBYREFOBJECT_T2548916492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2548916492  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t662779343 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2548916492, ____identity_0)); }
	inline ServerIdentity_t662779343 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t662779343 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t662779343 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2548916492_marshaled_pinvoke
{
	ServerIdentity_t662779343 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2548916492_marshaled_com
{
	ServerIdentity_t662779343 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2548916492_H
#ifndef TYPEDESCRIPTORCOMOBJECT_T1767052560_H
#define TYPEDESCRIPTORCOMOBJECT_T1767052560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
struct  TypeDescriptorComObject_t1767052560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORCOMOBJECT_T1767052560_H
#ifndef TYPEDESCRIPTIONPROVIDER_T1140226047_H
#define TYPEDESCRIPTIONPROVIDER_T1140226047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t1140226047  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t1140226047 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t2816301386 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t1140226047, ____parent_0)); }
	inline TypeDescriptionProvider_t1140226047 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t1140226047 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t1140226047 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t1140226047, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t2816301386 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t2816301386 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t2816301386 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T1140226047_H
#ifndef HYBRIDDICTIONARY_T432867925_H
#define HYBRIDDICTIONARY_T432867925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t432867925  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t3309317612 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t3088047563 * ___hashtable_1;
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t432867925, ___list_0)); }
	inline ListDictionary_t3309317612 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3309317612 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3309317612 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t432867925, ___hashtable_1)); }
	inline Hashtable_t3088047563 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t3088047563 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t3088047563 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_caseInsensitive_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t432867925, ___caseInsensitive_2)); }
	inline bool get_caseInsensitive_2() const { return ___caseInsensitive_2; }
	inline bool* get_address_of_caseInsensitive_2() { return &___caseInsensitive_2; }
	inline void set_caseInsensitive_2(bool value)
	{
		___caseInsensitive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T432867925_H
#ifndef WEAKKEYCOMPARER_T2516798015_H
#define WEAKKEYCOMPARER_T2516798015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct  WeakKeyComparer_t2516798015  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKKEYCOMPARER_T2516798015_H
#ifndef INSTANCEDESCRIPTOR_T1537975623_H
#define INSTANCEDESCRIPTOR_T1537975623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t1537975623  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1537975623, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1537975623, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1537975623, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T1537975623_H
#ifndef ROOTDESIGNERSERIALIZERATTRIBUTE_T3159412001_H
#define ROOTDESIGNERSERIALIZERATTRIBUTE_T3159412001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t3159412001  : public Attribute_t2236125943
{
public:
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reloadable
	bool ___reloadable_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_2;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::typeId
	String_t* ___typeId_3;

public:
	inline static int32_t get_offset_of_reloadable_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3159412001, ___reloadable_0)); }
	inline bool get_reloadable_0() const { return ___reloadable_0; }
	inline bool* get_address_of_reloadable_0() { return &___reloadable_0; }
	inline void set_reloadable_0(bool value)
	{
		___reloadable_0 = value;
	}

	inline static int32_t get_offset_of_serializerTypeName_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3159412001, ___serializerTypeName_1)); }
	inline String_t* get_serializerTypeName_1() const { return ___serializerTypeName_1; }
	inline String_t** get_address_of_serializerTypeName_1() { return &___serializerTypeName_1; }
	inline void set_serializerTypeName_1(String_t* value)
	{
		___serializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_1), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3159412001, ___serializerBaseTypeName_2)); }
	inline String_t* get_serializerBaseTypeName_2() const { return ___serializerBaseTypeName_2; }
	inline String_t** get_address_of_serializerBaseTypeName_2() { return &___serializerBaseTypeName_2; }
	inline void set_serializerBaseTypeName_2(String_t* value)
	{
		___serializerBaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_2), value);
	}

	inline static int32_t get_offset_of_typeId_3() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3159412001, ___typeId_3)); }
	inline String_t* get_typeId_3() const { return ___typeId_3; }
	inline String_t** get_address_of_typeId_3() { return &___typeId_3; }
	inline void set_typeId_3(String_t* value)
	{
		___typeId_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOTDESIGNERSERIALIZERATTRIBUTE_T3159412001_H
#ifndef TYPEDESCRIPTIONNODE_T1485118795_H
#define TYPEDESCRIPTIONNODE_T1485118795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct  TypeDescriptionNode_t1485118795  : public TypeDescriptionProvider_t1140226047
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Next
	TypeDescriptionNode_t1485118795 * ___Next_2;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Provider
	TypeDescriptionProvider_t1140226047 * ___Provider_3;

public:
	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t1485118795, ___Next_2)); }
	inline TypeDescriptionNode_t1485118795 * get_Next_2() const { return ___Next_2; }
	inline TypeDescriptionNode_t1485118795 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(TypeDescriptionNode_t1485118795 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}

	inline static int32_t get_offset_of_Provider_3() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t1485118795, ___Provider_3)); }
	inline TypeDescriptionProvider_t1140226047 * get_Provider_3() const { return ___Provider_3; }
	inline TypeDescriptionProvider_t1140226047 ** get_address_of_Provider_3() { return &___Provider_3; }
	inline void set_Provider_3(TypeDescriptionProvider_t1140226047 * value)
	{
		___Provider_3 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONNODE_T1485118795_H
#ifndef DEFAULTEXTENDEDTYPEDESCRIPTOR_T524325710_H
#define DEFAULTEXTENDEDTYPEDESCRIPTOR_T524325710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct  DefaultExtendedTypeDescriptor_t524325710 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_node
	TypeDescriptionNode_t1485118795 * ____node_0;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_instance
	RuntimeObject * ____instance_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t524325710, ____node_0)); }
	inline TypeDescriptionNode_t1485118795 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t1485118795 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t1485118795 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t524325710, ____instance_1)); }
	inline RuntimeObject * get__instance_1() const { return ____instance_1; }
	inline RuntimeObject ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(RuntimeObject * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t524325710_marshaled_pinvoke
{
	TypeDescriptionNode_t1485118795 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t524325710_marshaled_com
{
	TypeDescriptionNode_t1485118795 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
#endif // DEFAULTEXTENDEDTYPEDESCRIPTOR_T524325710_H
#ifndef DEFAULTTYPEDESCRIPTOR_T3735680717_H
#define DEFAULTTYPEDESCRIPTOR_T3735680717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t3735680717 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_node
	TypeDescriptionNode_t1485118795 * ____node_0;
	// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_objectType
	Type_t * ____objectType_1;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_instance
	RuntimeObject * ____instance_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3735680717, ____node_0)); }
	inline TypeDescriptionNode_t1485118795 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t1485118795 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t1485118795 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__objectType_1() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3735680717, ____objectType_1)); }
	inline Type_t * get__objectType_1() const { return ____objectType_1; }
	inline Type_t ** get_address_of__objectType_1() { return &____objectType_1; }
	inline void set__objectType_1(Type_t * value)
	{
		____objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_1), value);
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3735680717, ____instance_2)); }
	inline RuntimeObject * get__instance_2() const { return ____instance_2; }
	inline RuntimeObject ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(RuntimeObject * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3735680717_marshaled_pinvoke
{
	TypeDescriptionNode_t1485118795 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3735680717_marshaled_com
{
	TypeDescriptionNode_t1485118795 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
#endif // DEFAULTTYPEDESCRIPTOR_T3735680717_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T3696452585_H
#define __STATICARRAYINITTYPESIZEU3D256_T3696452585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t3696452585 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t3696452585__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T3696452585_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T1473527292_H
#define __STATICARRAYINITTYPESIZEU3D128_T1473527292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t1473527292 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t1473527292__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T1473527292_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3062022913_H
#define __STATICARRAYINITTYPESIZEU3D44_T3062022913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3062022913 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3062022913__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3062022913_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T1837109050_H
#define __STATICARRAYINITTYPESIZEU3D32_T1837109050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t1837109050 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1837109050__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T1837109050_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T1082503568_H
#define __STATICARRAYINITTYPESIZEU3D14_T1082503568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t1082503568 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t1082503568__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T1082503568_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T1635289869_H
#define __STATICARRAYINITTYPESIZEU3D12_T1635289869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t1635289869 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1635289869__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T1635289869_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T267502592_H
#define __STATICARRAYINITTYPESIZEU3D9_T267502592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t267502592 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t267502592__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T267502592_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T1433797198_H
#define __STATICARRAYINITTYPESIZEU3D6_T1433797198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t1433797198 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t1433797198__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T1433797198_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T1007198365_H
#define __STATICARRAYINITTYPESIZEU3D3_T1007198365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t1007198365 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t1007198365__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T1007198365_H
#ifndef DESIGNERSERIALIZERATTRIBUTE_T3766319734_H
#define DESIGNERSERIALIZERATTRIBUTE_T3766319734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
struct  DesignerSerializerAttribute_t3766319734  : public Attribute_t2236125943
{
public:
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_0;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_serializerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t3766319734, ___serializerTypeName_0)); }
	inline String_t* get_serializerTypeName_0() const { return ___serializerTypeName_0; }
	inline String_t** get_address_of_serializerTypeName_0() { return &___serializerTypeName_0; }
	inline void set_serializerTypeName_0(String_t* value)
	{
		___serializerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_0), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t3766319734, ___serializerBaseTypeName_1)); }
	inline String_t* get_serializerBaseTypeName_1() const { return ___serializerBaseTypeName_1; }
	inline String_t** get_address_of_serializerBaseTypeName_1() { return &___serializerBaseTypeName_1; }
	inline void set_serializerBaseTypeName_1(String_t* value)
	{
		___serializerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t3766319734, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZERATTRIBUTE_T3766319734_H
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
#ifndef STREAM_T607203561_H
#define STREAM_T607203561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t607203561  : public MarshalByRefObject_t2548916492
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t39958789 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2038347594 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t607203561, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t39958789 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t39958789 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t39958789 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t607203561, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2038347594 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2038347594 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2038347594 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t607203561_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t607203561 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t607203561_StaticFields, ___Null_1)); }
	inline Stream_t607203561 * get_Null_1() const { return ___Null_1; }
	inline Stream_t607203561 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t607203561 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T607203561_H
#ifndef INT32_T3673836033_H
#define INT32_T3673836033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3673836033 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t3673836033, ___m_value_0)); }
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
#endif // INT32_T3673836033_H
#ifndef VOID_T237477608_H
#define VOID_T237477608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t237477608 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t237477608__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T237477608_H
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
#ifndef BOOLEAN_T1236014920_H
#define BOOLEAN_T1236014920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1236014920 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t1236014920, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t1236014920_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t1236014920_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t1236014920_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T1236014920_H
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
#ifndef NAMEVALUECOLLECTION_T2836524438_H
#define NAMEVALUECOLLECTION_T2836524438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2836524438  : public NameObjectCollectionBase_t3141880339
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t4166740166* ____all_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t4166740166* ____allKeys_11;

public:
	inline static int32_t get_offset_of__all_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2836524438, ____all_10)); }
	inline StringU5BU5D_t4166740166* get__all_10() const { return ____all_10; }
	inline StringU5BU5D_t4166740166** get_address_of__all_10() { return &____all_10; }
	inline void set__all_10(StringU5BU5D_t4166740166* value)
	{
		____all_10 = value;
		Il2CppCodeGenWriteBarrier((&____all_10), value);
	}

	inline static int32_t get_offset_of__allKeys_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2836524438, ____allKeys_11)); }
	inline StringU5BU5D_t4166740166* get__allKeys_11() const { return ____allKeys_11; }
	inline StringU5BU5D_t4166740166** get_address_of__allKeys_11() { return &____allKeys_11; }
	inline void set__allKeys_11(StringU5BU5D_t4166740166* value)
	{
		____allKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____allKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2836524438_H
#ifndef HASHTABLE_T3088047563_H
#define HASHTABLE_T3088047563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t3088047563  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t748566284* ___buckets_10;
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
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___buckets_10)); }
	inline bucketU5BU5D_t748566284* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_t748566284** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_t748566284* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_10), value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((&___keys_17), value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((&___values_18), value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_19), value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t3088047563, ____syncRoot_20)); }
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
#endif // HASHTABLE_T3088047563_H
#ifndef PADDINGMODE_T3061797440_H
#define PADDINGMODE_T3061797440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3061797440 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t3061797440, ___value___2)); }
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
#endif // PADDINGMODE_T3061797440_H
#ifndef TYPECONVERTER_T731738332_H
#define TYPECONVERTER_T731738332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t731738332  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t731738332_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t731738332_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T731738332_H
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
#ifndef DELEGATE_T2361028821_H
#define DELEGATE_T2361028821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2361028821  : public RuntimeObject
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
	DelegateData_t3567841730 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___data_9)); }
	inline DelegateData_t3567841730 * get_data_9() const { return ___data_9; }
	inline DelegateData_t3567841730 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t3567841730 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t2361028821, ___method_is_virtual_10)); }
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
struct Delegate_t2361028821_marshaled_pinvoke
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
	DelegateData_t3567841730 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t2361028821_marshaled_com
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
	DelegateData_t3567841730 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T2361028821_H
#ifndef CIPHERMODE_T2189387910_H
#define CIPHERMODE_T2189387910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2189387910 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t2189387910, ___value___2)); }
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
#endif // CIPHERMODE_T2189387910_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T630898323_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T630898323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t630898323  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t630898323_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::0283A6AF88802AB45989B29549915BEA0F6CD515
	__StaticArrayInitTypeSizeU3D14_t1082503568  ___0283A6AF88802AB45989B29549915BEA0F6CD515_0;
	// System.Int64 <PrivateImplementationDetails>::03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	int64_t ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::1A39764B112685485A5BA7B2880D878B858C1A7A
	__StaticArrayInitTypeSizeU3D9_t267502592  ___1A39764B112685485A5BA7B2880D878B858C1A7A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t1007198365  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC
	__StaticArrayInitTypeSizeU3D12_t1635289869  ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t1837109050  ___59F5BD34B6C013DEACC784F69C67E95150033A84_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C
	__StaticArrayInitTypeSizeU3D6_t1433797198  ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t267502592  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E
	__StaticArrayInitTypeSizeU3D128_t1473527292  ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3
	__StaticArrayInitTypeSizeU3D44_t3062022913  ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9;
	// System.Int64 <PrivateImplementationDetails>::98A44A6F8606AE6F23FE230286C1D6FBCC407226
	int64_t ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t1837109050  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t1473527292  ___CCEEADA43268372341F81AE0C9208C6856441C04_12;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC5842B3154E1AF94500B57220EB9F684BCCC42A
	__StaticArrayInitTypeSizeU3D32_t1837109050  ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EEAFE8C6E1AB017237567305EE925C976CDB6458
	__StaticArrayInitTypeSizeU3D256_t3696452585  ___EEAFE8C6E1AB017237567305EE925C976CDB6458_15;

public:
	inline static int32_t get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___0283A6AF88802AB45989B29549915BEA0F6CD515_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t1082503568  get_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() const { return ___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline __StaticArrayInitTypeSizeU3D14_t1082503568 * get_address_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return &___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline void set_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(__StaticArrayInitTypeSizeU3D14_t1082503568  value)
	{
		___0283A6AF88802AB45989B29549915BEA0F6CD515_0 = value;
	}

	inline static int32_t get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1)); }
	inline int64_t get_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() const { return ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline int64_t* get_address_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return &___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline void set_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(int64_t value)
	{
		___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1 = value;
	}

	inline static int32_t get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___1A39764B112685485A5BA7B2880D878B858C1A7A_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t267502592  get_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() const { return ___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline __StaticArrayInitTypeSizeU3D9_t267502592 * get_address_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return &___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline void set_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(__StaticArrayInitTypeSizeU3D9_t267502592  value)
	{
		___1A39764B112685485A5BA7B2880D878B858C1A7A_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t1007198365  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t1007198365 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t1007198365  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t1635289869  get_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() const { return ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline __StaticArrayInitTypeSizeU3D12_t1635289869 * get_address_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return &___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline void set_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(__StaticArrayInitTypeSizeU3D12_t1635289869  value)
	{
		___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4 = value;
	}

	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_5)); }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(__StaticArrayInitTypeSizeU3D32_t1837109050  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_5 = value;
	}

	inline static int32_t get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6)); }
	inline __StaticArrayInitTypeSizeU3D6_t1433797198  get_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() const { return ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline __StaticArrayInitTypeSizeU3D6_t1433797198 * get_address_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return &___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline void set_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(__StaticArrayInitTypeSizeU3D6_t1433797198  value)
	{
		___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7)); }
	inline __StaticArrayInitTypeSizeU3D9_t267502592  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline __StaticArrayInitTypeSizeU3D9_t267502592 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(__StaticArrayInitTypeSizeU3D9_t267502592  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7 = value;
	}

	inline static int32_t get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8)); }
	inline __StaticArrayInitTypeSizeU3D128_t1473527292  get_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() const { return ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline __StaticArrayInitTypeSizeU3D128_t1473527292 * get_address_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return &___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline void set_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(__StaticArrayInitTypeSizeU3D128_t1473527292  value)
	{
		___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8 = value;
	}

	inline static int32_t get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9)); }
	inline __StaticArrayInitTypeSizeU3D44_t3062022913  get_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() const { return ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline __StaticArrayInitTypeSizeU3D44_t3062022913 * get_address_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return &___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline void set_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(__StaticArrayInitTypeSizeU3D44_t3062022913  value)
	{
		___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9 = value;
	}

	inline static int32_t get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10)); }
	inline int64_t get_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() const { return ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline int64_t* get_address_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return &___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline void set_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(int64_t value)
	{
		___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11)); }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11; }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050 * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11(__StaticArrayInitTypeSizeU3D32_t1837109050  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_12)); }
	inline __StaticArrayInitTypeSizeU3D128_t1473527292  get_CCEEADA43268372341F81AE0C9208C6856441C04_12() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_12; }
	inline __StaticArrayInitTypeSizeU3D128_t1473527292 * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_12() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_12; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_12(__StaticArrayInitTypeSizeU3D128_t1473527292  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_12 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13 = value;
	}

	inline static int32_t get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_14)); }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050  get_EC5842B3154E1AF94500B57220EB9F684BCCC42A_14() const { return ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_14; }
	inline __StaticArrayInitTypeSizeU3D32_t1837109050 * get_address_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_14() { return &___EC5842B3154E1AF94500B57220EB9F684BCCC42A_14; }
	inline void set_EC5842B3154E1AF94500B57220EB9F684BCCC42A_14(__StaticArrayInitTypeSizeU3D32_t1837109050  value)
	{
		___EC5842B3154E1AF94500B57220EB9F684BCCC42A_14 = value;
	}

	inline static int32_t get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields, ___EEAFE8C6E1AB017237567305EE925C976CDB6458_15)); }
	inline __StaticArrayInitTypeSizeU3D256_t3696452585  get_EEAFE8C6E1AB017237567305EE925C976CDB6458_15() const { return ___EEAFE8C6E1AB017237567305EE925C976CDB6458_15; }
	inline __StaticArrayInitTypeSizeU3D256_t3696452585 * get_address_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_15() { return &___EEAFE8C6E1AB017237567305EE925C976CDB6458_15; }
	inline void set_EEAFE8C6E1AB017237567305EE925C976CDB6458_15(__StaticArrayInitTypeSizeU3D256_t3696452585  value)
	{
		___EEAFE8C6E1AB017237567305EE925C976CDB6458_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T630898323_H
#ifndef DEFLATESTREAMNATIVE_T242961465_H
#define DEFLATESTREAMNATIVE_T242961465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStreamNative
struct  DeflateStreamNative_t242961465  : public RuntimeObject
{
public:
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t2184761911 * ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_t607203561 * ___base_stream_1;
	// System.IntPtr System.IO.Compression.DeflateStreamNative::z_stream
	intptr_t ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_t3413823742  ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_t3069277512* ___io_buffer_5;

public:
	inline static int32_t get_offset_of_feeder_0() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___feeder_0)); }
	inline UnmanagedReadOrWrite_t2184761911 * get_feeder_0() const { return ___feeder_0; }
	inline UnmanagedReadOrWrite_t2184761911 ** get_address_of_feeder_0() { return &___feeder_0; }
	inline void set_feeder_0(UnmanagedReadOrWrite_t2184761911 * value)
	{
		___feeder_0 = value;
		Il2CppCodeGenWriteBarrier((&___feeder_0), value);
	}

	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___base_stream_1)); }
	inline Stream_t607203561 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t607203561 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t607203561 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_1), value);
	}

	inline static int32_t get_offset_of_z_stream_2() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___z_stream_2)); }
	inline intptr_t get_z_stream_2() const { return ___z_stream_2; }
	inline intptr_t* get_address_of_z_stream_2() { return &___z_stream_2; }
	inline void set_z_stream_2(intptr_t value)
	{
		___z_stream_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___data_3)); }
	inline GCHandle_t3413823742  get_data_3() const { return ___data_3; }
	inline GCHandle_t3413823742 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(GCHandle_t3413823742  value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_io_buffer_5() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t242961465, ___io_buffer_5)); }
	inline ByteU5BU5D_t3069277512* get_io_buffer_5() const { return ___io_buffer_5; }
	inline ByteU5BU5D_t3069277512** get_address_of_io_buffer_5() { return &___io_buffer_5; }
	inline void set_io_buffer_5(ByteU5BU5D_t3069277512* value)
	{
		___io_buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___io_buffer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAMNATIVE_T242961465_H
#ifndef GZIPSTREAM_T2746418027_H
#define GZIPSTREAM_T2746418027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t2746418027  : public Stream_t607203561
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_t1253230877 * ____deflateStream_4;

public:
	inline static int32_t get_offset_of__deflateStream_4() { return static_cast<int32_t>(offsetof(GZipStream_t2746418027, ____deflateStream_4)); }
	inline DeflateStream_t1253230877 * get__deflateStream_4() const { return ____deflateStream_4; }
	inline DeflateStream_t1253230877 ** get_address_of__deflateStream_4() { return &____deflateStream_4; }
	inline void set__deflateStream_4(DeflateStream_t1253230877 * value)
	{
		____deflateStream_4 = value;
		Il2CppCodeGenWriteBarrier((&____deflateStream_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T2746418027_H
#ifndef COMPRESSIONMODE_T880770216_H
#define COMPRESSIONMODE_T880770216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.CompressionMode
struct  CompressionMode_t880770216 
{
public:
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t880770216, ___value___2)); }
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
#endif // COMPRESSIONMODE_T880770216_H
#ifndef WEAKHASHTABLE_T3936097050_H
#define WEAKHASHTABLE_T3936097050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable
struct  WeakHashtable_t3936097050  : public Hashtable_t3088047563
{
public:

public:
};

struct WeakHashtable_t3936097050_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_21;

public:
	inline static int32_t get_offset_of__comparer_21() { return static_cast<int32_t>(offsetof(WeakHashtable_t3936097050_StaticFields, ____comparer_21)); }
	inline RuntimeObject* get__comparer_21() const { return ____comparer_21; }
	inline RuntimeObject** get_address_of__comparer_21() { return &____comparer_21; }
	inline void set__comparer_21(RuntimeObject* value)
	{
		____comparer_21 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKHASHTABLE_T3936097050_H
#ifndef SYMMETRICALGORITHM_T3583906858_H
#define SYMMETRICALGORITHM_T3583906858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t3583906858  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3069277512* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3069277512* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2786982091* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2786982091* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___IVValue_2)); }
	inline ByteU5BU5D_t3069277512* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t3069277512** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t3069277512* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___KeyValue_3)); }
	inline ByteU5BU5D_t3069277512* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3069277512** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3069277512* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2786982091* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2786982091** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2786982091* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2786982091* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2786982091** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2786982091* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3583906858, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T3583906858_H
#ifndef MULTICASTDELEGATE_T2881581021_H
#define MULTICASTDELEGATE_T2881581021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2881581021  : public Delegate_t2361028821
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t3672592440* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2881581021, ___delegates_11)); }
	inline DelegateU5BU5D_t3672592440* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t3672592440** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t3672592440* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2881581021_marshaled_pinvoke : public Delegate_t2361028821_marshaled_pinvoke
{
	DelegateU5BU5D_t3672592440* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2881581021_marshaled_com : public Delegate_t2361028821_marshaled_com
{
	DelegateU5BU5D_t3672592440* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2881581021_H
#ifndef DEFLATESTREAM_T1253230877_H
#define DEFLATESTREAM_T1253230877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t1253230877  : public Stream_t607203561
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t607203561 * ___base_stream_4;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_7;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t242961465 * ___native_8;

public:
	inline static int32_t get_offset_of_base_stream_4() { return static_cast<int32_t>(offsetof(DeflateStream_t1253230877, ___base_stream_4)); }
	inline Stream_t607203561 * get_base_stream_4() const { return ___base_stream_4; }
	inline Stream_t607203561 ** get_address_of_base_stream_4() { return &___base_stream_4; }
	inline void set_base_stream_4(Stream_t607203561 * value)
	{
		___base_stream_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_4), value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(DeflateStream_t1253230877, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_6() { return static_cast<int32_t>(offsetof(DeflateStream_t1253230877, ___leaveOpen_6)); }
	inline bool get_leaveOpen_6() const { return ___leaveOpen_6; }
	inline bool* get_address_of_leaveOpen_6() { return &___leaveOpen_6; }
	inline void set_leaveOpen_6(bool value)
	{
		___leaveOpen_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(DeflateStream_t1253230877, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_native_8() { return static_cast<int32_t>(offsetof(DeflateStream_t1253230877, ___native_8)); }
	inline DeflateStreamNative_t242961465 * get_native_8() const { return ___native_8; }
	inline DeflateStreamNative_t242961465 ** get_address_of_native_8() { return &___native_8; }
	inline void set_native_8(DeflateStreamNative_t242961465 * value)
	{
		___native_8 = value;
		Il2CppCodeGenWriteBarrier((&___native_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T1253230877_H
#ifndef WIN32EXCEPTION_T2026859853_H
#define WIN32EXCEPTION_T2026859853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t2026859853  : public ExternalException_t873590537
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_16;

public:
	inline static int32_t get_offset_of_nativeErrorCode_16() { return static_cast<int32_t>(offsetof(Win32Exception_t2026859853, ___nativeErrorCode_16)); }
	inline int32_t get_nativeErrorCode_16() const { return ___nativeErrorCode_16; }
	inline int32_t* get_address_of_nativeErrorCode_16() { return &___nativeErrorCode_16; }
	inline void set_nativeErrorCode_16(int32_t value)
	{
		___nativeErrorCode_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T2026859853_H
#ifndef SYMMETRICTRANSFORM_T2646397925_H
#define SYMMETRICTRANSFORM_T2646397925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2646397925  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3583906858 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3069277512* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3069277512* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3069277512* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3069277512* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2284404197 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___algo_0)); }
	inline SymmetricAlgorithm_t3583906858 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3583906858 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3583906858 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___temp_3)); }
	inline ByteU5BU5D_t3069277512* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3069277512** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3069277512* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___temp2_4)); }
	inline ByteU5BU5D_t3069277512* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3069277512** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3069277512* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___workBuff_5)); }
	inline ByteU5BU5D_t3069277512* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3069277512** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3069277512* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___workout_6)); }
	inline ByteU5BU5D_t3069277512* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3069277512** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3069277512* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2646397925, ____rng_11)); }
	inline RandomNumberGenerator_t2284404197 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2284404197 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2284404197 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2646397925_H
#ifndef BASENUMBERCONVERTER_T3318274044_H
#define BASENUMBERCONVERTER_T3318274044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t3318274044  : public TypeConverter_t731738332
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T3318274044_H
#ifndef UINT16CONVERTER_T1095873976_H
#define UINT16CONVERTER_T1095873976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t1095873976  : public BaseNumberConverter_t3318274044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T1095873976_H
#ifndef UINT32CONVERTER_T735790568_H
#define UINT32CONVERTER_T735790568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t735790568  : public BaseNumberConverter_t3318274044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T735790568_H
#ifndef UINT64CONVERTER_T3679709204_H
#define UINT64CONVERTER_T3679709204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t3679709204  : public BaseNumberConverter_t3318274044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T3679709204_H
#ifndef UNMANAGEDREADORWRITE_T2184761911_H
#define UNMANAGEDREADORWRITE_T2184761911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct  UnmanagedReadOrWrite_t2184761911  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDREADORWRITE_T2184761911_H
#ifndef AESTRANSFORM_T3727591620_H
#define AESTRANSFORM_T3727591620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t3727591620  : public SymmetricTransform_t2646397925
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t1117984333* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1117984333* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1117984333** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1117984333* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t3727591620_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t1117984333* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t3069277512* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t3069277512* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t1117984333* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t1117984333* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t1117984333* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t1117984333* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t1117984333* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t1117984333* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t1117984333* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t1117984333* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t1117984333* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t1117984333** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t1117984333* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t3069277512* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t3069277512** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t3069277512* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t3069277512* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t3069277512** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t3069277512* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t1117984333* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t1117984333** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t1117984333* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t1117984333* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t1117984333** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t1117984333* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t1117984333* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t1117984333** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t1117984333* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t1117984333* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t1117984333** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t1117984333* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t1117984333* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t1117984333** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t1117984333* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t1117984333* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t1117984333** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t1117984333* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t1117984333* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t1117984333** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t1117984333* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t3727591620_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t1117984333* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t1117984333** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t1117984333* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T3727591620_H
#ifndef READMETHOD_T1794547172_H
#define READMETHOD_T1794547172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/ReadMethod
struct  ReadMethod_t1794547172  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READMETHOD_T1794547172_H
#ifndef WRITEMETHOD_T238150240_H
#define WRITEMETHOD_T238150240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/WriteMethod
struct  WriteMethod_t238150240  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEMETHOD_T238150240_H
#ifndef AES_T887328172_H
#define AES_T887328172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t887328172  : public SymmetricAlgorithm_t3583906858
{
public:

public:
};

struct Aes_t887328172_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t2786982091* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t2786982091* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t887328172_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t2786982091* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t2786982091** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t2786982091* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t887328172_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t2786982091* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t2786982091** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t2786982091* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T887328172_H
#ifndef AESMANAGED_T2896894250_H
#define AESMANAGED_T2896894250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t2896894250  : public Aes_t887328172
{
public:
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t2320775986 * ___m_rijndael_11;

public:
	inline static int32_t get_offset_of_m_rijndael_11() { return static_cast<int32_t>(offsetof(AesManaged_t2896894250, ___m_rijndael_11)); }
	inline RijndaelManaged_t2320775986 * get_m_rijndael_11() const { return ___m_rijndael_11; }
	inline RijndaelManaged_t2320775986 ** get_address_of_m_rijndael_11() { return &___m_rijndael_11; }
	inline void set_m_rijndael_11(RijndaelManaged_t2320775986 * value)
	{
		___m_rijndael_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_rijndael_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T2896894250_H
#ifndef AESCRYPTOSERVICEPROVIDER_T3759820957_H
#define AESCRYPTOSERVICEPROVIDER_T3759820957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t3759820957  : public Aes_t887328172
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESCRYPTOSERVICEPROVIDER_T3759820957_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (FilterCacheItem_t1610282465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2900[2] = 
{
	FilterCacheItem_t1610282465::get_offset_of__filterService_0(),
	FilterCacheItem_t1610282465::get_offset_of_FilteredMembers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (MemberDescriptorComparer_t3292322309), -1, sizeof(MemberDescriptorComparer_t3292322309_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2902[1] = 
{
	MemberDescriptorComparer_t3292322309_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (MergedTypeDescriptor_t29853774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2903[2] = 
{
	MergedTypeDescriptor_t29853774::get_offset_of__primary_0(),
	MergedTypeDescriptor_t29853774::get_offset_of__secondary_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (TypeDescriptionNode_t1485118795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2904[2] = 
{
	TypeDescriptionNode_t1485118795::get_offset_of_Next_2(),
	TypeDescriptionNode_t1485118795::get_offset_of_Provider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (DefaultExtendedTypeDescriptor_t524325710)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2905[2] = 
{
	DefaultExtendedTypeDescriptor_t524325710::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultExtendedTypeDescriptor_t524325710::get_offset_of__instance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (DefaultTypeDescriptor_t3735680717)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2906[3] = 
{
	DefaultTypeDescriptor_t3735680717::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t3735680717::get_offset_of__objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t3735680717::get_offset_of__instance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (TypeDescriptorComObject_t1767052560), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (TypeDescriptorInterface_t1351250010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (UInt16Converter_t1095873976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (UInt32Converter_t735790568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (UInt64Converter_t3679709204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (Win32Exception_t2026859853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2912[1] = 
{
	Win32Exception_t2026859853::get_offset_of_nativeErrorCode_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (BaseNumberConverter_t3318274044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (WeakHashtable_t3936097050), -1, sizeof(WeakHashtable_t3936097050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2914[1] = 
{
	WeakHashtable_t3936097050_StaticFields::get_offset_of__comparer_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (WeakKeyComparer_t2516798015), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2917 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2918 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2919 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2920 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2921 = { sizeof (DesignerSerializerAttribute_t3766319734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2921[3] = 
{
	DesignerSerializerAttribute_t3766319734::get_offset_of_serializerTypeName_0(),
	DesignerSerializerAttribute_t3766319734::get_offset_of_serializerBaseTypeName_1(),
	DesignerSerializerAttribute_t3766319734::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2922 = { sizeof (InstanceDescriptor_t1537975623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2922[3] = 
{
	InstanceDescriptor_t1537975623::get_offset_of_member_0(),
	InstanceDescriptor_t1537975623::get_offset_of_arguments_1(),
	InstanceDescriptor_t1537975623::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2923 = { sizeof (RootDesignerSerializerAttribute_t3159412001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2923[4] = 
{
	RootDesignerSerializerAttribute_t3159412001::get_offset_of_reloadable_0(),
	RootDesignerSerializerAttribute_t3159412001::get_offset_of_serializerTypeName_1(),
	RootDesignerSerializerAttribute_t3159412001::get_offset_of_serializerBaseTypeName_2(),
	RootDesignerSerializerAttribute_t3159412001::get_offset_of_typeId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2924 = { sizeof (HybridDictionary_t432867925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2924[3] = 
{
	HybridDictionary_t432867925::get_offset_of_list_0(),
	HybridDictionary_t432867925::get_offset_of_hashtable_1(),
	HybridDictionary_t432867925::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2925 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2926 = { sizeof (ListDictionary_t3309317612), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2926[5] = 
{
	ListDictionary_t3309317612::get_offset_of_head_0(),
	ListDictionary_t3309317612::get_offset_of_version_1(),
	ListDictionary_t3309317612::get_offset_of_count_2(),
	ListDictionary_t3309317612::get_offset_of_comparer_3(),
	ListDictionary_t3309317612::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2927 = { sizeof (NodeEnumerator_t4067266706), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2927[4] = 
{
	NodeEnumerator_t4067266706::get_offset_of_list_0(),
	NodeEnumerator_t4067266706::get_offset_of_current_1(),
	NodeEnumerator_t4067266706::get_offset_of_version_2(),
	NodeEnumerator_t4067266706::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2928 = { sizeof (NodeKeyValueCollection_t909230979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2928[2] = 
{
	NodeKeyValueCollection_t909230979::get_offset_of_list_0(),
	NodeKeyValueCollection_t909230979::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2929 = { sizeof (NodeKeyValueEnumerator_t3370361153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2929[5] = 
{
	NodeKeyValueEnumerator_t3370361153::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t3370361153::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t3370361153::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t3370361153::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t3370361153::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2930 = { sizeof (DictionaryNode_t2516982721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2930[3] = 
{
	DictionaryNode_t2516982721::get_offset_of_key_0(),
	DictionaryNode_t2516982721::get_offset_of_value_1(),
	DictionaryNode_t2516982721::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2931 = { sizeof (NameObjectCollectionBase_t3141880339), -1, sizeof(NameObjectCollectionBase_t3141880339_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2931[10] = 
{
	NameObjectCollectionBase_t3141880339::get_offset_of__readOnly_0(),
	NameObjectCollectionBase_t3141880339::get_offset_of__entriesArray_1(),
	NameObjectCollectionBase_t3141880339::get_offset_of__keyComparer_2(),
	NameObjectCollectionBase_t3141880339::get_offset_of__entriesTable_3(),
	NameObjectCollectionBase_t3141880339::get_offset_of__nullKeyEntry_4(),
	NameObjectCollectionBase_t3141880339::get_offset_of__keys_5(),
	NameObjectCollectionBase_t3141880339::get_offset_of__serializationInfo_6(),
	NameObjectCollectionBase_t3141880339::get_offset_of__version_7(),
	NameObjectCollectionBase_t3141880339::get_offset_of__syncRoot_8(),
	NameObjectCollectionBase_t3141880339_StaticFields::get_offset_of_defaultComparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2932 = { sizeof (NameObjectEntry_t325250587), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2932[2] = 
{
	NameObjectEntry_t325250587::get_offset_of_Key_0(),
	NameObjectEntry_t325250587::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2933 = { sizeof (NameObjectKeysEnumerator_t1819130159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2933[3] = 
{
	NameObjectKeysEnumerator_t1819130159::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t1819130159::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t1819130159::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2934 = { sizeof (KeysCollection_t2173975955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2934[1] = 
{
	KeysCollection_t2173975955::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2935 = { sizeof (CompatibleComparer_t129053196), -1, sizeof(CompatibleComparer_t129053196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2935[4] = 
{
	CompatibleComparer_t129053196::get_offset_of__comparer_0(),
	CompatibleComparer_t129053196_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t129053196::get_offset_of__hcp_2(),
	CompatibleComparer_t129053196_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2936 = { sizeof (NameValueCollection_t2836524438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2936[2] = 
{
	NameValueCollection_t2836524438::get_offset_of__all_10(),
	NameValueCollection_t2836524438::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2937 = { sizeof (OrderedDictionary_t1500340074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2937[7] = 
{
	OrderedDictionary_t1500340074::get_offset_of__objectsArray_0(),
	OrderedDictionary_t1500340074::get_offset_of__objectsTable_1(),
	OrderedDictionary_t1500340074::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t1500340074::get_offset_of__comparer_3(),
	OrderedDictionary_t1500340074::get_offset_of__readOnly_4(),
	OrderedDictionary_t1500340074::get_offset_of__syncRoot_5(),
	OrderedDictionary_t1500340074::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2938 = { sizeof (OrderedDictionaryEnumerator_t3233899553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2938[2] = 
{
	OrderedDictionaryEnumerator_t3233899553::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t3233899553::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2939 = { sizeof (OrderedDictionaryKeyValueCollection_t3406783750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2939[2] = 
{
	OrderedDictionaryKeyValueCollection_t3406783750::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t3406783750::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2940 = { sizeof (StringCollection_t3779064241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2940[1] = 
{
	StringCollection_t3779064241::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2941 = { sizeof (StringDictionary_t4214966921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2941[1] = 
{
	StringDictionary_t4214966921::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2942 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2943 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2944 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2945 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2946 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2946[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2947 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2947[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2948 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2948[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2949 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2949[11] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2950 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2950[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2951 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2951[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2952 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2952[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2953 = { sizeof (CompressionMode_t880770216)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2953[3] = 
{
	CompressionMode_t880770216::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2954 = { sizeof (GZipStream_t2746418027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2954[1] = 
{
	GZipStream_t2746418027::get_offset_of__deflateStream_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2955 = { sizeof (DeflateStream_t1253230877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2955[5] = 
{
	DeflateStream_t1253230877::get_offset_of_base_stream_4(),
	DeflateStream_t1253230877::get_offset_of_mode_5(),
	DeflateStream_t1253230877::get_offset_of_leaveOpen_6(),
	DeflateStream_t1253230877::get_offset_of_disposed_7(),
	DeflateStream_t1253230877::get_offset_of_native_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2956 = { sizeof (ReadMethod_t1794547172), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2957 = { sizeof (WriteMethod_t238150240), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2958 = { sizeof (DeflateStreamNative_t242961465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2958[6] = 
{
	DeflateStreamNative_t242961465::get_offset_of_feeder_0(),
	DeflateStreamNative_t242961465::get_offset_of_base_stream_1(),
	DeflateStreamNative_t242961465::get_offset_of_z_stream_2(),
	DeflateStreamNative_t242961465::get_offset_of_data_3(),
	DeflateStreamNative_t242961465::get_offset_of_disposed_4(),
	DeflateStreamNative_t242961465::get_offset_of_io_buffer_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2959 = { sizeof (UnmanagedReadOrWrite_t2184761911), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2960 = { sizeof (U3CPrivateImplementationDetailsU3E_t630898323), -1, sizeof(U3CPrivateImplementationDetailsU3E_t630898323_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2960[16] = 
{
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_11(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_12(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_13(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_14(),
	U3CPrivateImplementationDetailsU3E_t630898323_StaticFields::get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2961 = { sizeof (__StaticArrayInitTypeSizeU3D3_t1007198365)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t1007198365 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2962 = { sizeof (__StaticArrayInitTypeSizeU3D6_t1433797198)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t1433797198 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2963 = { sizeof (__StaticArrayInitTypeSizeU3D9_t267502592)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t267502592 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2964 = { sizeof (__StaticArrayInitTypeSizeU3D12_t1635289869)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t1635289869 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2965 = { sizeof (__StaticArrayInitTypeSizeU3D14_t1082503568)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t1082503568 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2966 = { sizeof (__StaticArrayInitTypeSizeU3D32_t1837109050)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t1837109050 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2967 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3062022913)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3062022913 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2968 = { sizeof (__StaticArrayInitTypeSizeU3D128_t1473527292)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t1473527292 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2969 = { sizeof (__StaticArrayInitTypeSizeU3D256_t3696452585)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t3696452585 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2970 = { sizeof (U3CModuleU3E_t2633295036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2971 = { sizeof (SR_t1752655589), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2972 = { sizeof (AesManaged_t2896894250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2972[1] = 
{
	AesManaged_t2896894250::get_offset_of_m_rijndael_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2973 = { sizeof (AesCryptoServiceProvider_t3759820957), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2974 = { sizeof (AesTransform_t3727591620), -1, sizeof(AesTransform_t3727591620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2974[14] = 
{
	AesTransform_t3727591620::get_offset_of_expandedKey_12(),
	AesTransform_t3727591620::get_offset_of_Nk_13(),
	AesTransform_t3727591620::get_offset_of_Nr_14(),
	AesTransform_t3727591620_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t3727591620_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t3727591620_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t3727591620_StaticFields::get_offset_of_T0_18(),
	AesTransform_t3727591620_StaticFields::get_offset_of_T1_19(),
	AesTransform_t3727591620_StaticFields::get_offset_of_T2_20(),
	AesTransform_t3727591620_StaticFields::get_offset_of_T3_21(),
	AesTransform_t3727591620_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t3727591620_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t3727591620_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t3727591620_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2975 = { sizeof (Error_t2838806472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2976 = { sizeof (Enumerable_t2523899207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2977 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2977[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2978 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2978[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2979 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2979[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2980 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2980[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2981 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2981[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2982 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2982[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2983 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2983[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2984 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2984[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2985 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2985[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2986 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2986[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2987 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2987[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2988 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2988[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2989 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2989[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2990 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2990[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2991 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2991[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2992 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2992[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2993 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2993[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2994 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2994[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2995 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2995[12] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2996 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2996[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2997 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2998 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2998[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2999 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2999[4] = 
{
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
