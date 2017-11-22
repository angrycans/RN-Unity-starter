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

// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t1491641283;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t1504147234;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t812232737;
// System.Collections.Hashtable
struct Hashtable_t160128795;
// System.Attribute[]
struct AttributeU5BU5D_t1771144510;
// System.ComponentModel.AttributeCollection/AttributeEntry[]
struct AttributeEntryU5BU5D_t2287840426;
// System.Delegate
struct Delegate_t3403533457;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t2876554387;
// System.ComponentModel.Component
struct Component_t199574091;
// System.ComponentModel.EventDescriptor[]
struct EventDescriptorU5BU5D_t953270816;
// System.String[]
struct StringU5BU5D_t2926391647;
// System.Collections.IComparer
struct IComparer_t4097856733;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3863260141;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t708631874;
// System.Collections.IDictionary
struct IDictionary_t3994973483;
// System.Collections.ArrayList
struct ArrayList_t4009999833;
// System.Configuration.ElementMap
struct ElementMap_t3057736304;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3703620765;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t216361383;
// System.Configuration.ElementInformation
struct ElementInformation_t1414031898;
// System.Configuration.Configuration
struct Configuration_t3945608317;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t1132937339;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3082924596;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3370009028;
// System.Char[]
struct CharU5BU5D_t1699394265;
// System.Net.Cache.RequestCache
struct RequestCache_t2282667500;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t2138206389;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t697907711;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1856654997;
// System.IntPtr[]
struct IntPtrU5BU5D_t4117928909;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3657004228;
// System.Configuration.IConfigurationSystem
struct IConfigurationSystem_t4260244509;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t296531389;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t836555251;
// System.ComponentModel.ISite
struct ISite_t317694804;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2044517792;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4079770889;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t1619168213;
// System.Type
struct Type_t;
// System.Configuration.SectionInformation
struct SectionInformation_t1809373844;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t52034232;
// System.Void
struct Void_t4217116866;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t402359398;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2502878004;
// System.Diagnostics.EventLogImpl
struct EventLogImpl_t1934621413;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3819296180;
// System.Delegate[]
struct DelegateU5BU5D_t2295054860;
// System.Diagnostics.SystemDiagnosticsSection
struct SystemDiagnosticsSection_t1057629538;
// System.Diagnostics.TraceFilter
struct TraceFilter_t1928642482;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1536562482;
// System.IO.TextWriter
struct TextWriter_t414100152;
// System.Xml.XmlNode
struct XmlNode_t1576430963;
// System.IAsyncResult
struct IAsyncResult_t4156225140;
// System.AsyncCallback
struct AsyncCallback_t1302858180;
// System.Diagnostics.EventLog
struct EventLog_t4291673388;
// System.Text.StringBuilder
struct StringBuilder_t3651158979;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2195637803;

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
#ifndef ARRAYSUBSETENUMERATOR_T4276094547_H
#define ARRAYSUBSETENUMERATOR_T4276094547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArraySubsetEnumerator
struct  ArraySubsetEnumerator_t4276094547  : public RuntimeObject
{
public:
	// System.Array System.ComponentModel.ArraySubsetEnumerator::array
	RuntimeArray * ___array_0;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::total
	int32_t ___total_1;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t4276094547, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_total_1() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t4276094547, ___total_1)); }
	inline int32_t get_total_1() const { return ___total_1; }
	inline int32_t* get_address_of_total_1() { return &___total_1; }
	inline void set_total_1(int32_t value)
	{
		___total_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t4276094547, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSUBSETENUMERATOR_T4276094547_H
#ifndef CULTURECOMPARER_T1803325138_H
#define CULTURECOMPARER_T1803325138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureComparer
struct  CultureComparer_t1803325138  : public RuntimeObject
{
public:
	// System.ComponentModel.CultureInfoConverter System.ComponentModel.CultureInfoConverter/CultureComparer::converter
	CultureInfoConverter_t1491641283 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(CultureComparer_t1803325138, ___converter_0)); }
	inline CultureInfoConverter_t1491641283 * get_converter_0() const { return ___converter_0; }
	inline CultureInfoConverter_t1491641283 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(CultureInfoConverter_t1491641283 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURECOMPARER_T1803325138_H
#ifndef EVENTLOGINSTALLER_T3760666334_H
#define EVENTLOGINSTALLER_T3760666334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogInstaller
struct  EventLogInstaller_t3760666334  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGINSTALLER_T3760666334_H
#ifndef EVENTLOGIMPL_T1934621413_H
#define EVENTLOGIMPL_T1934621413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogImpl
struct  EventLogImpl_t1934621413  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGIMPL_T1934621413_H
#ifndef SWITCH_T1581615556_H
#define SWITCH_T1581615556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t1581615556  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_0;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_1;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_2;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_3;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(Switch_t1581615556, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(Switch_t1581615556, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_switchValueString_2() { return static_cast<int32_t>(offsetof(Switch_t1581615556, ___switchValueString_2)); }
	inline String_t* get_switchValueString_2() const { return ___switchValueString_2; }
	inline String_t** get_address_of_switchValueString_2() { return &___switchValueString_2; }
	inline void set_switchValueString_2(String_t* value)
	{
		___switchValueString_2 = value;
		Il2CppCodeGenWriteBarrier((&___switchValueString_2), value);
	}

	inline static int32_t get_offset_of_defaultValue_3() { return static_cast<int32_t>(offsetof(Switch_t1581615556, ___defaultValue_3)); }
	inline String_t* get_defaultValue_3() const { return ___defaultValue_3; }
	inline String_t** get_address_of_defaultValue_3() { return &___defaultValue_3; }
	inline void set_defaultValue_3(String_t* value)
	{
		___defaultValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_3), value);
	}
};

struct Switch_t1581615556_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t1504147234 * ___switches_4;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_5;

public:
	inline static int32_t get_offset_of_switches_4() { return static_cast<int32_t>(offsetof(Switch_t1581615556_StaticFields, ___switches_4)); }
	inline List_1_t1504147234 * get_switches_4() const { return ___switches_4; }
	inline List_1_t1504147234 ** get_address_of_switches_4() { return &___switches_4; }
	inline void set_switches_4(List_1_t1504147234 * value)
	{
		___switches_4 = value;
		Il2CppCodeGenWriteBarrier((&___switches_4), value);
	}

	inline static int32_t get_offset_of_s_LastCollectionCount_5() { return static_cast<int32_t>(offsetof(Switch_t1581615556_StaticFields, ___s_LastCollectionCount_5)); }
	inline int32_t get_s_LastCollectionCount_5() const { return ___s_LastCollectionCount_5; }
	inline int32_t* get_address_of_s_LastCollectionCount_5() { return &___s_LastCollectionCount_5; }
	inline void set_s_LastCollectionCount_5(int32_t value)
	{
		___s_LastCollectionCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T1581615556_H
#ifndef CULTUREINFOMAPPER_T2259522142_H
#define CULTUREINFOMAPPER_T2259522142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoMapper
struct  CultureInfoMapper_t2259522142  : public RuntimeObject
{
public:

public:
};

struct CultureInfoMapper_t2259522142_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CultureInfoConverter/CultureInfoMapper::cultureInfoNameMap
	Dictionary_2_t812232737 * ___cultureInfoNameMap_0;

public:
	inline static int32_t get_offset_of_cultureInfoNameMap_0() { return static_cast<int32_t>(offsetof(CultureInfoMapper_t2259522142_StaticFields, ___cultureInfoNameMap_0)); }
	inline Dictionary_2_t812232737 * get_cultureInfoNameMap_0() const { return ___cultureInfoNameMap_0; }
	inline Dictionary_2_t812232737 ** get_address_of_cultureInfoNameMap_0() { return &___cultureInfoNameMap_0; }
	inline void set_cultureInfoNameMap_0(Dictionary_2_t812232737 * value)
	{
		___cultureInfoNameMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___cultureInfoNameMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOMAPPER_T2259522142_H
#ifndef ATTRIBUTECOLLECTION_T3657004228_H
#define ATTRIBUTECOLLECTION_T3657004228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t3657004228  : public RuntimeObject
{
public:
	// System.Attribute[] System.ComponentModel.AttributeCollection::_attributes
	AttributeU5BU5D_t1771144510* ____attributes_2;
	// System.ComponentModel.AttributeCollection/AttributeEntry[] System.ComponentModel.AttributeCollection::_foundAttributeTypes
	AttributeEntryU5BU5D_t2287840426* ____foundAttributeTypes_4;
	// System.Int32 System.ComponentModel.AttributeCollection::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228, ____attributes_2)); }
	inline AttributeU5BU5D_t1771144510* get__attributes_2() const { return ____attributes_2; }
	inline AttributeU5BU5D_t1771144510** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(AttributeU5BU5D_t1771144510* value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_2), value);
	}

	inline static int32_t get_offset_of__foundAttributeTypes_4() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228, ____foundAttributeTypes_4)); }
	inline AttributeEntryU5BU5D_t2287840426* get__foundAttributeTypes_4() const { return ____foundAttributeTypes_4; }
	inline AttributeEntryU5BU5D_t2287840426** get_address_of__foundAttributeTypes_4() { return &____foundAttributeTypes_4; }
	inline void set__foundAttributeTypes_4(AttributeEntryU5BU5D_t2287840426* value)
	{
		____foundAttributeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____foundAttributeTypes_4), value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct AttributeCollection_t3657004228_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t3657004228 * ___Empty_0;
	// System.Collections.Hashtable System.ComponentModel.AttributeCollection::_defaultAttributes
	Hashtable_t160128795 * ____defaultAttributes_1;
	// System.Object System.ComponentModel.AttributeCollection::internalSyncObject
	RuntimeObject * ___internalSyncObject_3;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228_StaticFields, ___Empty_0)); }
	inline AttributeCollection_t3657004228 * get_Empty_0() const { return ___Empty_0; }
	inline AttributeCollection_t3657004228 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(AttributeCollection_t3657004228 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}

	inline static int32_t get_offset_of__defaultAttributes_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228_StaticFields, ____defaultAttributes_1)); }
	inline Hashtable_t160128795 * get__defaultAttributes_1() const { return ____defaultAttributes_1; }
	inline Hashtable_t160128795 ** get_address_of__defaultAttributes_1() { return &____defaultAttributes_1; }
	inline void set__defaultAttributes_1(Hashtable_t160128795 * value)
	{
		____defaultAttributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultAttributes_1), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_3() { return static_cast<int32_t>(offsetof(AttributeCollection_t3657004228_StaticFields, ___internalSyncObject_3)); }
	inline RuntimeObject * get_internalSyncObject_3() const { return ___internalSyncObject_3; }
	inline RuntimeObject ** get_address_of_internalSyncObject_3() { return &___internalSyncObject_3; }
	inline void set_internalSyncObject_3(RuntimeObject * value)
	{
		___internalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T3657004228_H
#ifndef LISTENTRY_T2876554387_H
#define LISTENTRY_T2876554387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList/ListEntry
struct  ListEntry_t2876554387  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::next
	ListEntry_t2876554387 * ___next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::key
	RuntimeObject * ___key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::handler
	Delegate_t3403533457 * ___handler_2;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(ListEntry_t2876554387, ___next_0)); }
	inline ListEntry_t2876554387 * get_next_0() const { return ___next_0; }
	inline ListEntry_t2876554387 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(ListEntry_t2876554387 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier((&___next_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ListEntry_t2876554387, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(ListEntry_t2876554387, ___handler_2)); }
	inline Delegate_t3403533457 * get_handler_2() const { return ___handler_2; }
	inline Delegate_t3403533457 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Delegate_t3403533457 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T2876554387_H
#ifndef EVENTHANDLERLIST_T2044517792_H
#define EVENTHANDLERLIST_T2044517792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t2044517792  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::head
	ListEntry_t2876554387 * ___head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::parent
	Component_t199574091 * ___parent_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t2044517792, ___head_0)); }
	inline ListEntry_t2876554387 * get_head_0() const { return ___head_0; }
	inline ListEntry_t2876554387 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(ListEntry_t2876554387 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t2044517792, ___parent_1)); }
	inline Component_t199574091 * get_parent_1() const { return ___parent_1; }
	inline Component_t199574091 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Component_t199574091 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T2044517792_H
#ifndef EVENTDESCRIPTORCOLLECTION_T1443644136_H
#define EVENTDESCRIPTORCOLLECTION_T1443644136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t1443644136  : public RuntimeObject
{
public:
	// System.ComponentModel.EventDescriptor[] System.ComponentModel.EventDescriptorCollection::events
	EventDescriptorU5BU5D_t953270816* ___events_0;
	// System.String[] System.ComponentModel.EventDescriptorCollection::namedSort
	StringU5BU5D_t2926391647* ___namedSort_1;
	// System.Collections.IComparer System.ComponentModel.EventDescriptorCollection::comparer
	RuntimeObject* ___comparer_2;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::eventsOwned
	bool ___eventsOwned_3;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::needSort
	bool ___needSort_4;
	// System.Int32 System.ComponentModel.EventDescriptorCollection::eventCount
	int32_t ___eventCount_5;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::readOnly
	bool ___readOnly_6;

public:
	inline static int32_t get_offset_of_events_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___events_0)); }
	inline EventDescriptorU5BU5D_t953270816* get_events_0() const { return ___events_0; }
	inline EventDescriptorU5BU5D_t953270816** get_address_of_events_0() { return &___events_0; }
	inline void set_events_0(EventDescriptorU5BU5D_t953270816* value)
	{
		___events_0 = value;
		Il2CppCodeGenWriteBarrier((&___events_0), value);
	}

	inline static int32_t get_offset_of_namedSort_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___namedSort_1)); }
	inline StringU5BU5D_t2926391647* get_namedSort_1() const { return ___namedSort_1; }
	inline StringU5BU5D_t2926391647** get_address_of_namedSort_1() { return &___namedSort_1; }
	inline void set_namedSort_1(StringU5BU5D_t2926391647* value)
	{
		___namedSort_1 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}

	inline static int32_t get_offset_of_eventsOwned_3() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___eventsOwned_3)); }
	inline bool get_eventsOwned_3() const { return ___eventsOwned_3; }
	inline bool* get_address_of_eventsOwned_3() { return &___eventsOwned_3; }
	inline void set_eventsOwned_3(bool value)
	{
		___eventsOwned_3 = value;
	}

	inline static int32_t get_offset_of_needSort_4() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___needSort_4)); }
	inline bool get_needSort_4() const { return ___needSort_4; }
	inline bool* get_address_of_needSort_4() { return &___needSort_4; }
	inline void set_needSort_4(bool value)
	{
		___needSort_4 = value;
	}

	inline static int32_t get_offset_of_eventCount_5() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___eventCount_5)); }
	inline int32_t get_eventCount_5() const { return ___eventCount_5; }
	inline int32_t* get_address_of_eventCount_5() { return &___eventCount_5; }
	inline void set_eventCount_5(int32_t value)
	{
		___eventCount_5 = value;
	}

	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}
};

struct EventDescriptorCollection_t1443644136_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t1443644136 * ___Empty_7;

public:
	inline static int32_t get_offset_of_Empty_7() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t1443644136_StaticFields, ___Empty_7)); }
	inline EventDescriptorCollection_t1443644136 * get_Empty_7() const { return ___Empty_7; }
	inline EventDescriptorCollection_t1443644136 ** get_address_of_Empty_7() { return &___Empty_7; }
	inline void set_Empty_7(EventDescriptorCollection_t1443644136 * value)
	{
		___Empty_7 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T1443644136_H
#ifndef TRACEFILTER_T1928642482_H
#define TRACEFILTER_T1928642482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceFilter
struct  TraceFilter_t1928642482  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceFilter::initializeData
	String_t* ___initializeData_0;

public:
	inline static int32_t get_offset_of_initializeData_0() { return static_cast<int32_t>(offsetof(TraceFilter_t1928642482, ___initializeData_0)); }
	inline String_t* get_initializeData_0() const { return ___initializeData_0; }
	inline String_t** get_address_of_initializeData_0() { return &___initializeData_0; }
	inline void set_initializeData_0(String_t* value)
	{
		___initializeData_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEFILTER_T1928642482_H
#ifndef CUSTOMTYPEDESCRIPTOR_T1951842460_H
#define CUSTOMTYPEDESCRIPTOR_T1951842460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t1951842460  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t1951842460, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T1951842460_H
#ifndef DIAGNOSTICSCONFIGURATIONHANDLER_T3636687315_H
#define DIAGNOSTICSCONFIGURATIONHANDLER_T3636687315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler
struct  DiagnosticsConfigurationHandler_t3636687315  : public RuntimeObject
{
public:
	// System.Diagnostics.TraceImplSettings System.Diagnostics.DiagnosticsConfigurationHandler::configValues
	TraceImplSettings_t708631874 * ___configValues_0;
	// System.Collections.IDictionary System.Diagnostics.DiagnosticsConfigurationHandler::elementHandlers
	RuntimeObject* ___elementHandlers_1;

public:
	inline static int32_t get_offset_of_configValues_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t3636687315, ___configValues_0)); }
	inline TraceImplSettings_t708631874 * get_configValues_0() const { return ___configValues_0; }
	inline TraceImplSettings_t708631874 ** get_address_of_configValues_0() { return &___configValues_0; }
	inline void set_configValues_0(TraceImplSettings_t708631874 * value)
	{
		___configValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___configValues_0), value);
	}

	inline static int32_t get_offset_of_elementHandlers_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t3636687315, ___elementHandlers_1)); }
	inline RuntimeObject* get_elementHandlers_1() const { return ___elementHandlers_1; }
	inline RuntimeObject** get_address_of_elementHandlers_1() { return &___elementHandlers_1; }
	inline void set_elementHandlers_1(RuntimeObject* value)
	{
		___elementHandlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementHandlers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATIONHANDLER_T3636687315_H
#ifndef TRACELISTENERCOLLECTION_T3370009028_H
#define TRACELISTENERCOLLECTION_T3370009028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListenerCollection
struct  TraceListenerCollection_t3370009028  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Diagnostics.TraceListenerCollection::list
	ArrayList_t4009999833 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(TraceListenerCollection_t3370009028, ___list_0)); }
	inline ArrayList_t4009999833 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4009999833 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4009999833 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENERCOLLECTION_T3370009028_H
#ifndef INSTANCE_T1903689760_H
#define INSTANCE_T1903689760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory/Instance
struct  Instance_t1903689760  : public RuntimeObject
{
public:

public:
};

struct Instance_t1903689760_StaticFields
{
public:
	// System.Boolean System.Diagnostics.ConfigurationManagerInternalFactory/Instance::SetConfigurationSystemInProgress
	bool ___SetConfigurationSystemInProgress_0;

public:
	inline static int32_t get_offset_of_SetConfigurationSystemInProgress_0() { return static_cast<int32_t>(offsetof(Instance_t1903689760_StaticFields, ___SetConfigurationSystemInProgress_0)); }
	inline bool get_SetConfigurationSystemInProgress_0() const { return ___SetConfigurationSystemInProgress_0; }
	inline bool* get_address_of_SetConfigurationSystemInProgress_0() { return &___SetConfigurationSystemInProgress_0; }
	inline void set_SetConfigurationSystemInProgress_0(bool value)
	{
		___SetConfigurationSystemInProgress_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCE_T1903689760_H
#ifndef CONFIGURATIONELEMENT_T2529492142_H
#define CONFIGURATIONELEMENT_T2529492142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t2529492142  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t3057736304 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t3703620765 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t216361383 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t1414031898 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t3945608317 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t1132937339 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t1132937339 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t1132937339 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t1132937339 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3082924596 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___map_2)); }
	inline ElementMap_t3057736304 * get_map_2() const { return ___map_2; }
	inline ElementMap_t3057736304 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t3057736304 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t3703620765 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t3703620765 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t216361383 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t216361383 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t216361383 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___elementInfo_6)); }
	inline ElementInformation_t1414031898 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t1414031898 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t1414031898 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ____configuration_7)); }
	inline Configuration_t3945608317 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t3945608317 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t3945608317 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t1132937339 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t1132937339 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t1132937339 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t1132937339 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t1132937339 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t1132937339 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t1132937339 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t1132937339 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t1132937339 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___lockElements_12)); }
	inline ConfigurationLockCollection_t1132937339 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t1132937339 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t1132937339 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t2529492142, ___saveContext_14)); }
	inline SaveContext_t3082924596 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3082924596 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3082924596 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T2529492142_H
#ifndef CONFIGURATIONMANAGERINTERNALFACTORY_T787718204_H
#define CONFIGURATIONMANAGERINTERNALFACTORY_T787718204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory
struct  ConfigurationManagerInternalFactory_t787718204  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONMANAGERINTERNALFACTORY_T787718204_H
#ifndef TRACEUTILS_T3707917994_H
#define TRACEUTILS_T3707917994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceUtils
struct  TraceUtils_t3707917994  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEUTILS_T3707917994_H
#ifndef TRACEIMPLSETTINGS_T708631874_H
#define TRACEIMPLSETTINGS_T708631874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t708631874  : public RuntimeObject
{
public:
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_0;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t3370009028 * ___Listeners_2;

public:
	inline static int32_t get_offset_of_AutoFlush_0() { return static_cast<int32_t>(offsetof(TraceImplSettings_t708631874, ___AutoFlush_0)); }
	inline bool get_AutoFlush_0() const { return ___AutoFlush_0; }
	inline bool* get_address_of_AutoFlush_0() { return &___AutoFlush_0; }
	inline void set_AutoFlush_0(bool value)
	{
		___AutoFlush_0 = value;
	}

	inline static int32_t get_offset_of_IndentSize_1() { return static_cast<int32_t>(offsetof(TraceImplSettings_t708631874, ___IndentSize_1)); }
	inline int32_t get_IndentSize_1() const { return ___IndentSize_1; }
	inline int32_t* get_address_of_IndentSize_1() { return &___IndentSize_1; }
	inline void set_IndentSize_1(int32_t value)
	{
		___IndentSize_1 = value;
	}

	inline static int32_t get_offset_of_Listeners_2() { return static_cast<int32_t>(offsetof(TraceImplSettings_t708631874, ___Listeners_2)); }
	inline TraceListenerCollection_t3370009028 * get_Listeners_2() const { return ___Listeners_2; }
	inline TraceListenerCollection_t3370009028 ** get_address_of_Listeners_2() { return &___Listeners_2; }
	inline void set_Listeners_2(TraceListenerCollection_t3370009028 * value)
	{
		___Listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___Listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEIMPLSETTINGS_T708631874_H
#ifndef REQUESTCACHE_T2282667500_H
#define REQUESTCACHE_T2282667500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t2282667500  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t2282667500_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t1699394265* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t2282667500_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t1699394265* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t1699394265** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t1699394265* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T2282667500_H
#ifndef REQUESTCACHEVALIDATOR_T2138206389_H
#define REQUESTCACHEVALIDATOR_T2138206389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t2138206389  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T2138206389_H
#ifndef REQUESTCACHEBINDING_T2019448247_H
#define REQUESTCACHEBINDING_T2019448247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t2019448247  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t2282667500 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t2138206389 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2019448247, ___m_RequestCache_0)); }
	inline RequestCache_t2282667500 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t2282667500 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t2282667500 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2019448247, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t2138206389 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t2138206389 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t2138206389 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T2019448247_H
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
#ifndef MEMBERDESCRIPTOR_T2625648816_H
#define MEMBERDESCRIPTOR_T2625648816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t2625648816  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_t3657004228 * ___attributeCollection_2;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t1771144510* ___attributes_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t1771144510* ___originalAttributes_4;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_6;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_7;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_8;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_9;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_nameHash_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___nameHash_1)); }
	inline int32_t get_nameHash_1() const { return ___nameHash_1; }
	inline int32_t* get_address_of_nameHash_1() { return &___nameHash_1; }
	inline void set_nameHash_1(int32_t value)
	{
		___nameHash_1 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___attributeCollection_2)); }
	inline AttributeCollection_t3657004228 * get_attributeCollection_2() const { return ___attributeCollection_2; }
	inline AttributeCollection_t3657004228 ** get_address_of_attributeCollection_2() { return &___attributeCollection_2; }
	inline void set_attributeCollection_2(AttributeCollection_t3657004228 * value)
	{
		___attributeCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributeCollection_2), value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___attributes_3)); }
	inline AttributeU5BU5D_t1771144510* get_attributes_3() const { return ___attributes_3; }
	inline AttributeU5BU5D_t1771144510** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(AttributeU5BU5D_t1771144510* value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_3), value);
	}

	inline static int32_t get_offset_of_originalAttributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___originalAttributes_4)); }
	inline AttributeU5BU5D_t1771144510* get_originalAttributes_4() const { return ___originalAttributes_4; }
	inline AttributeU5BU5D_t1771144510** get_address_of_originalAttributes_4() { return &___originalAttributes_4; }
	inline void set_originalAttributes_4(AttributeU5BU5D_t1771144510* value)
	{
		___originalAttributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___originalAttributes_4), value);
	}

	inline static int32_t get_offset_of_attributesFiltered_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___attributesFiltered_5)); }
	inline bool get_attributesFiltered_5() const { return ___attributesFiltered_5; }
	inline bool* get_address_of_attributesFiltered_5() { return &___attributesFiltered_5; }
	inline void set_attributesFiltered_5(bool value)
	{
		___attributesFiltered_5 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___attributesFilled_6)); }
	inline bool get_attributesFilled_6() const { return ___attributesFilled_6; }
	inline bool* get_address_of_attributesFilled_6() { return &___attributesFilled_6; }
	inline void set_attributesFilled_6(bool value)
	{
		___attributesFilled_6 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___metadataVersion_7)); }
	inline int32_t get_metadataVersion_7() const { return ___metadataVersion_7; }
	inline int32_t* get_address_of_metadataVersion_7() { return &___metadataVersion_7; }
	inline void set_metadataVersion_7(int32_t value)
	{
		___metadataVersion_7 = value;
	}

	inline static int32_t get_offset_of_category_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___category_8)); }
	inline String_t* get_category_8() const { return ___category_8; }
	inline String_t** get_address_of_category_8() { return &___category_8; }
	inline void set_category_8(String_t* value)
	{
		___category_8 = value;
		Il2CppCodeGenWriteBarrier((&___category_8), value);
	}

	inline static int32_t get_offset_of_description_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___description_9)); }
	inline String_t* get_description_9() const { return ___description_9; }
	inline String_t** get_address_of_description_9() { return &___description_9; }
	inline void set_description_9(String_t* value)
	{
		___description_9 = value;
		Il2CppCodeGenWriteBarrier((&___description_9), value);
	}

	inline static int32_t get_offset_of_lockCookie_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2625648816, ___lockCookie_10)); }
	inline RuntimeObject * get_lockCookie_10() const { return ___lockCookie_10; }
	inline RuntimeObject ** get_address_of_lockCookie_10() { return &___lockCookie_10; }
	inline void set_lockCookie_10(RuntimeObject * value)
	{
		___lockCookie_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockCookie_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T2625648816_H
#ifndef REQUESTCACHEPROTOCOL_T51018548_H
#define REQUESTCACHEPROTOCOL_T51018548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t51018548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T51018548_H
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
#ifndef PRIVILEGEDCONFIGURATIONMANAGER_T3634638223_H
#define PRIVILEGEDCONFIGURATIONMANAGER_T3634638223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PrivilegedConfigurationManager
struct  PrivilegedConfigurationManager_t3634638223  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVILEGEDCONFIGURATIONMANAGER_T3634638223_H
#ifndef CONFIGURATIONSETTINGS_T1168272622_H
#define CONFIGURATIONSETTINGS_T1168272622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSettings
struct  ConfigurationSettings_t1168272622  : public RuntimeObject
{
public:

public:
};

struct ConfigurationSettings_t1168272622_StaticFields
{
public:
	// System.Configuration.IConfigurationSystem System.Configuration.ConfigurationSettings::config
	RuntimeObject* ___config_0;
	// System.Object System.Configuration.ConfigurationSettings::lockobj
	RuntimeObject * ___lockobj_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t1168272622_StaticFields, ___config_0)); }
	inline RuntimeObject* get_config_0() const { return ___config_0; }
	inline RuntimeObject** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(RuntimeObject* value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t1168272622_StaticFields, ___lockobj_1)); }
	inline RuntimeObject * get_lockobj_1() const { return ___lockobj_1; }
	inline RuntimeObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(RuntimeObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSETTINGS_T1168272622_H
#ifndef DEFAULTCONFIG_T2111366707_H
#define DEFAULTCONFIG_T2111366707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DefaultConfig
struct  DefaultConfig_t2111366707  : public RuntimeObject
{
public:

public:
};

struct DefaultConfig_t2111366707_StaticFields
{
public:
	// System.Configuration.DefaultConfig System.Configuration.DefaultConfig::instance
	DefaultConfig_t2111366707 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DefaultConfig_t2111366707_StaticFields, ___instance_0)); }
	inline DefaultConfig_t2111366707 * get_instance_0() const { return ___instance_0; }
	inline DefaultConfig_t2111366707 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DefaultConfig_t2111366707 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCONFIG_T2111366707_H
#ifndef READONLYCOLLECTIONBASE_T1134981154_H
#define READONLYCOLLECTIONBASE_T1134981154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1134981154  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4009999833 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1134981154, ___list_0)); }
	inline ArrayList_t4009999833 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4009999833 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4009999833 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1134981154_H
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
#ifndef MARSHALBYREFOBJECT_T2362926069_H
#define MARSHALBYREFOBJECT_T2362926069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2362926069  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t296531389 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2362926069, ____identity_0)); }
	inline ServerIdentity_t296531389 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t296531389 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t296531389 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2362926069_marshaled_pinvoke
{
	ServerIdentity_t296531389 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2362926069_marshaled_com
{
	ServerIdentity_t296531389 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2362926069_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3620640136_H
#define TYPEDESCRIPTIONPROVIDER_T3620640136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3620640136  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t3620640136 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t836555251 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3620640136, ____parent_0)); }
	inline TypeDescriptionProvider_t3620640136 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t3620640136 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t3620640136 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3620640136, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t836555251 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t836555251 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t836555251 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3620640136_H
#ifndef BROWSABLEATTRIBUTE_T2410527788_H
#define BROWSABLEATTRIBUTE_T2410527788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t2410527788  : public Attribute_t2551568327
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_3;

public:
	inline static int32_t get_offset_of_browsable_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2410527788, ___browsable_3)); }
	inline bool get_browsable_3() const { return ___browsable_3; }
	inline bool* get_address_of_browsable_3() { return &___browsable_3; }
	inline void set_browsable_3(bool value)
	{
		___browsable_3 = value;
	}
};

struct BrowsableAttribute_t2410527788_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t2410527788 * ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t2410527788 * ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t2410527788 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2410527788_StaticFields, ___Yes_0)); }
	inline BrowsableAttribute_t2410527788 * get_Yes_0() const { return ___Yes_0; }
	inline BrowsableAttribute_t2410527788 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(BrowsableAttribute_t2410527788 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2410527788_StaticFields, ___No_1)); }
	inline BrowsableAttribute_t2410527788 * get_No_1() const { return ___No_1; }
	inline BrowsableAttribute_t2410527788 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(BrowsableAttribute_t2410527788 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2410527788_StaticFields, ___Default_2)); }
	inline BrowsableAttribute_t2410527788 * get_Default_2() const { return ___Default_2; }
	inline BrowsableAttribute_t2410527788 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(BrowsableAttribute_t2410527788 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T2410527788_H
#ifndef DEFAULTEVENTATTRIBUTE_T3716925660_H
#define DEFAULTEVENTATTRIBUTE_T3716925660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3716925660  : public Attribute_t2551568327
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3716925660, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultEventAttribute_t3716925660_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3716925660 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3716925660_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3716925660 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3716925660 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3716925660 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3716925660_H
#ifndef COMPONENT_T199574091_H
#define COMPONENT_T199574091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t199574091  : public MarshalByRefObject_t2362926069
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t2044517792 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t199574091, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t199574091, ___events_3)); }
	inline EventHandlerList_t2044517792 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t2044517792 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t2044517792 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t199574091_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t199574091_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T199574091_H
#ifndef COMPONENTCOLLECTION_T905588554_H
#define COMPONENTCOLLECTION_T905588554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t905588554  : public ReadOnlyCollectionBase_t1134981154
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T905588554_H
#ifndef EXTENDERPROVIDEDPROPERTYATTRIBUTE_T2180029461_H
#define EXTENDERPROVIDEDPROPERTYATTRIBUTE_T2180029461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t2180029461  : public Attribute_t2551568327
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProperty
	PropertyDescriptor_t4079770889 * ___extenderProperty_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::provider
	RuntimeObject* ___provider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiverType
	Type_t * ___receiverType_2;

public:
	inline static int32_t get_offset_of_extenderProperty_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t2180029461, ___extenderProperty_0)); }
	inline PropertyDescriptor_t4079770889 * get_extenderProperty_0() const { return ___extenderProperty_0; }
	inline PropertyDescriptor_t4079770889 ** get_address_of_extenderProperty_0() { return &___extenderProperty_0; }
	inline void set_extenderProperty_0(PropertyDescriptor_t4079770889 * value)
	{
		___extenderProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___extenderProperty_0), value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t2180029461, ___provider_1)); }
	inline RuntimeObject* get_provider_1() const { return ___provider_1; }
	inline RuntimeObject** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(RuntimeObject* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier((&___provider_1), value);
	}

	inline static int32_t get_offset_of_receiverType_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t2180029461, ___receiverType_2)); }
	inline Type_t * get_receiverType_2() const { return ___receiverType_2; }
	inline Type_t ** get_address_of_receiverType_2() { return &___receiverType_2; }
	inline void set_receiverType_2(Type_t * value)
	{
		___receiverType_2 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERPROVIDEDPROPERTYATTRIBUTE_T2180029461_H
#ifndef DELEGATINGTYPEDESCRIPTIONPROVIDER_T2271330377_H
#define DELEGATINGTYPEDESCRIPTIONPROVIDER_T2271330377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DelegatingTypeDescriptionProvider
struct  DelegatingTypeDescriptionProvider_t2271330377  : public TypeDescriptionProvider_t3620640136
{
public:
	// System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::_type
	Type_t * ____type_2;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(DelegatingTypeDescriptionProvider_t2271330377, ____type_2)); }
	inline Type_t * get__type_2() const { return ____type_2; }
	inline Type_t ** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(Type_t * value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier((&____type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATINGTYPEDESCRIPTIONPROVIDER_T2271330377_H
#ifndef DESCRIPTIONATTRIBUTE_T137529577_H
#define DESCRIPTIONATTRIBUTE_T137529577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t137529577  : public Attribute_t2551568327
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t137529577, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t137529577_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t137529577 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t137529577_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t137529577 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t137529577 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t137529577 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T137529577_H
#ifndef DESIGNERATTRIBUTE_T2648137650_H
#define DESIGNERATTRIBUTE_T2648137650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2648137650  : public Attribute_t2551568327
{
public:
	// System.String System.ComponentModel.DesignerAttribute::designerTypeName
	String_t* ___designerTypeName_0;
	// System.String System.ComponentModel.DesignerAttribute::designerBaseTypeName
	String_t* ___designerBaseTypeName_1;
	// System.String System.ComponentModel.DesignerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_designerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2648137650, ___designerTypeName_0)); }
	inline String_t* get_designerTypeName_0() const { return ___designerTypeName_0; }
	inline String_t** get_address_of_designerTypeName_0() { return &___designerTypeName_0; }
	inline void set_designerTypeName_0(String_t* value)
	{
		___designerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___designerTypeName_0), value);
	}

	inline static int32_t get_offset_of_designerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2648137650, ___designerBaseTypeName_1)); }
	inline String_t* get_designerBaseTypeName_1() const { return ___designerBaseTypeName_1; }
	inline String_t** get_address_of_designerBaseTypeName_1() { return &___designerBaseTypeName_1; }
	inline void set_designerBaseTypeName_1(String_t* value)
	{
		___designerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___designerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2648137650, ___typeId_2)); }
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
#endif // DESIGNERATTRIBUTE_T2648137650_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2666359784_H
#define DESIGNERCATEGORYATTRIBUTE_T2666359784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2666359784  : public Attribute_t2551568327
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;
	// System.String System.ComponentModel.DesignerCategoryAttribute::typeId
	String_t* ___typeId_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_typeId_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784, ___typeId_1)); }
	inline String_t* get_typeId_1() const { return ___typeId_1; }
	inline String_t** get_address_of_typeId_1() { return &___typeId_1; }
	inline void set_typeId_1(String_t* value)
	{
		___typeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_1), value);
	}
};

struct DesignerCategoryAttribute_t2666359784_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2666359784 * ___Component_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2666359784 * ___Default_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2666359784 * ___Form_4;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2666359784 * ___Generic_5;

public:
	inline static int32_t get_offset_of_Component_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784_StaticFields, ___Component_2)); }
	inline DesignerCategoryAttribute_t2666359784 * get_Component_2() const { return ___Component_2; }
	inline DesignerCategoryAttribute_t2666359784 ** get_address_of_Component_2() { return &___Component_2; }
	inline void set_Component_2(DesignerCategoryAttribute_t2666359784 * value)
	{
		___Component_2 = value;
		Il2CppCodeGenWriteBarrier((&___Component_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784_StaticFields, ___Default_3)); }
	inline DesignerCategoryAttribute_t2666359784 * get_Default_3() const { return ___Default_3; }
	inline DesignerCategoryAttribute_t2666359784 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerCategoryAttribute_t2666359784 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}

	inline static int32_t get_offset_of_Form_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784_StaticFields, ___Form_4)); }
	inline DesignerCategoryAttribute_t2666359784 * get_Form_4() const { return ___Form_4; }
	inline DesignerCategoryAttribute_t2666359784 ** get_address_of_Form_4() { return &___Form_4; }
	inline void set_Form_4(DesignerCategoryAttribute_t2666359784 * value)
	{
		___Form_4 = value;
		Il2CppCodeGenWriteBarrier((&___Form_4), value);
	}

	inline static int32_t get_offset_of_Generic_5() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2666359784_StaticFields, ___Generic_5)); }
	inline DesignerCategoryAttribute_t2666359784 * get_Generic_5() const { return ___Generic_5; }
	inline DesignerCategoryAttribute_t2666359784 ** get_address_of_Generic_5() { return &___Generic_5; }
	inline void set_Generic_5(DesignerCategoryAttribute_t2666359784 * value)
	{
		___Generic_5 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2666359784_H
#ifndef EVENTDESCRIPTOR_T4085417741_H
#define EVENTDESCRIPTOR_T4085417741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t4085417741  : public MemberDescriptor_t2625648816
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T4085417741_H
#ifndef INSTALLERTYPEATTRIBUTE_T1618769498_H
#define INSTALLERTYPEATTRIBUTE_T1618769498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t1618769498  : public Attribute_t2551568327
{
public:
	// System.String System.ComponentModel.InstallerTypeAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t1618769498, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T1618769498_H
#ifndef CONFIGURATIONSECTION_T4014044824_H
#define CONFIGURATIONSECTION_T4014044824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t4014044824  : public ConfigurationElement_t2529492142
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t1809373844 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t4014044824, ___sectionInformation_15)); }
	inline SectionInformation_t1809373844 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t1809373844 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t1809373844 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t4014044824, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t4014044824, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t4014044824, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T4014044824_H
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
#ifndef CONFIGURATIONELEMENTCOLLECTION_T216361383_H
#define CONFIGURATIONELEMENTCOLLECTION_T216361383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t216361383  : public ConfigurationElement_t2529492142
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t4009999833 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t4009999833 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t4009999833 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___list_15)); }
	inline ArrayList_t4009999833 * get_list_15() const { return ___list_15; }
	inline ArrayList_t4009999833 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t4009999833 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___removed_16)); }
	inline ArrayList_t4009999833 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t4009999833 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t4009999833 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___inherited_17)); }
	inline ArrayList_t4009999833 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t4009999833 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t4009999833 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t216361383, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T216361383_H
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
#ifndef DEFAULTVALUEATTRIBUTE_T2624835099_H
#define DEFAULTVALUEATTRIBUTE_T2624835099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t2624835099  : public Attribute_t2551568327
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2624835099, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2624835099_H
#ifndef ATTRIBUTEENTRY_T1941400523_H
#define ATTRIBUTEENTRY_T1941400523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection/AttributeEntry
struct  AttributeEntry_t1941400523 
{
public:
	// System.Type System.ComponentModel.AttributeCollection/AttributeEntry::type
	Type_t * ___type_0;
	// System.Int32 System.ComponentModel.AttributeCollection/AttributeEntry::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AttributeEntry_t1941400523, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(AttributeEntry_t1941400523, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1941400523_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1941400523_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
#endif // ATTRIBUTEENTRY_T1941400523_H
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
#ifndef TRACESECTION_T2220029405_H
#define TRACESECTION_T2220029405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSection
struct  TraceSection_t2220029405  : public ConfigurationElement_t2529492142
{
public:

public:
};

struct TraceSection_t2220029405_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TraceSection::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propListeners
	ConfigurationProperty_t402359398 * ____propListeners_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propAutoFlush
	ConfigurationProperty_t402359398 * ____propAutoFlush_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propIndentSize
	ConfigurationProperty_t402359398 * ____propIndentSize_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propUseGlobalLock
	ConfigurationProperty_t402359398 * ____propUseGlobalLock_19;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(TraceSection_t2220029405_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propListeners_16() { return static_cast<int32_t>(offsetof(TraceSection_t2220029405_StaticFields, ____propListeners_16)); }
	inline ConfigurationProperty_t402359398 * get__propListeners_16() const { return ____propListeners_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propListeners_16() { return &____propListeners_16; }
	inline void set__propListeners_16(ConfigurationProperty_t402359398 * value)
	{
		____propListeners_16 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_16), value);
	}

	inline static int32_t get_offset_of__propAutoFlush_17() { return static_cast<int32_t>(offsetof(TraceSection_t2220029405_StaticFields, ____propAutoFlush_17)); }
	inline ConfigurationProperty_t402359398 * get__propAutoFlush_17() const { return ____propAutoFlush_17; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propAutoFlush_17() { return &____propAutoFlush_17; }
	inline void set__propAutoFlush_17(ConfigurationProperty_t402359398 * value)
	{
		____propAutoFlush_17 = value;
		Il2CppCodeGenWriteBarrier((&____propAutoFlush_17), value);
	}

	inline static int32_t get_offset_of__propIndentSize_18() { return static_cast<int32_t>(offsetof(TraceSection_t2220029405_StaticFields, ____propIndentSize_18)); }
	inline ConfigurationProperty_t402359398 * get__propIndentSize_18() const { return ____propIndentSize_18; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propIndentSize_18() { return &____propIndentSize_18; }
	inline void set__propIndentSize_18(ConfigurationProperty_t402359398 * value)
	{
		____propIndentSize_18 = value;
		Il2CppCodeGenWriteBarrier((&____propIndentSize_18), value);
	}

	inline static int32_t get_offset_of__propUseGlobalLock_19() { return static_cast<int32_t>(offsetof(TraceSection_t2220029405_StaticFields, ____propUseGlobalLock_19)); }
	inline ConfigurationProperty_t402359398 * get__propUseGlobalLock_19() const { return ____propUseGlobalLock_19; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propUseGlobalLock_19() { return &____propUseGlobalLock_19; }
	inline void set__propUseGlobalLock_19(ConfigurationProperty_t402359398 * value)
	{
		____propUseGlobalLock_19 = value;
		Il2CppCodeGenWriteBarrier((&____propUseGlobalLock_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESECTION_T2220029405_H
#ifndef EXCLUDEFROMCODECOVERAGEATTRIBUTE_T496667626_H
#define EXCLUDEFROMCODECOVERAGEATTRIBUTE_T496667626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct  ExcludeFromCodeCoverageAttribute_t496667626  : public Attribute_t2551568327
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMCODECOVERAGEATTRIBUTE_T496667626_H
#ifndef TYPEDELEMENT_T1258704059_H
#define TYPEDELEMENT_T1258704059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TypedElement
struct  TypedElement_t1258704059  : public ConfigurationElement_t2529492142
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TypedElement::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_17;
	// System.Object System.Diagnostics.TypedElement::_runtimeObject
	RuntimeObject * ____runtimeObject_18;
	// System.Type System.Diagnostics.TypedElement::_baseType
	Type_t * ____baseType_19;

public:
	inline static int32_t get_offset_of__properties_17() { return static_cast<int32_t>(offsetof(TypedElement_t1258704059, ____properties_17)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_17() const { return ____properties_17; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_17() { return &____properties_17; }
	inline void set__properties_17(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_17 = value;
		Il2CppCodeGenWriteBarrier((&____properties_17), value);
	}

	inline static int32_t get_offset_of__runtimeObject_18() { return static_cast<int32_t>(offsetof(TypedElement_t1258704059, ____runtimeObject_18)); }
	inline RuntimeObject * get__runtimeObject_18() const { return ____runtimeObject_18; }
	inline RuntimeObject ** get_address_of__runtimeObject_18() { return &____runtimeObject_18; }
	inline void set__runtimeObject_18(RuntimeObject * value)
	{
		____runtimeObject_18 = value;
		Il2CppCodeGenWriteBarrier((&____runtimeObject_18), value);
	}

	inline static int32_t get_offset_of__baseType_19() { return static_cast<int32_t>(offsetof(TypedElement_t1258704059, ____baseType_19)); }
	inline Type_t * get__baseType_19() const { return ____baseType_19; }
	inline Type_t ** get_address_of__baseType_19() { return &____baseType_19; }
	inline void set__baseType_19(Type_t * value)
	{
		____baseType_19 = value;
		Il2CppCodeGenWriteBarrier((&____baseType_19), value);
	}
};

struct TypedElement_t1258704059_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propTypeName
	ConfigurationProperty_t402359398 * ____propTypeName_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propInitData
	ConfigurationProperty_t402359398 * ____propInitData_16;

public:
	inline static int32_t get_offset_of__propTypeName_15() { return static_cast<int32_t>(offsetof(TypedElement_t1258704059_StaticFields, ____propTypeName_15)); }
	inline ConfigurationProperty_t402359398 * get__propTypeName_15() const { return ____propTypeName_15; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propTypeName_15() { return &____propTypeName_15; }
	inline void set__propTypeName_15(ConfigurationProperty_t402359398 * value)
	{
		____propTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____propTypeName_15), value);
	}

	inline static int32_t get_offset_of__propInitData_16() { return static_cast<int32_t>(offsetof(TypedElement_t1258704059_StaticFields, ____propInitData_16)); }
	inline ConfigurationProperty_t402359398 * get__propInitData_16() const { return ____propInitData_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propInitData_16() { return &____propInitData_16; }
	inline void set__propInitData_16(ConfigurationProperty_t402359398 * value)
	{
		____propInitData_16 = value;
		Il2CppCodeGenWriteBarrier((&____propInitData_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEMENT_T1258704059_H
#ifndef ASSERTSECTION_T2690702108_H
#define ASSERTSECTION_T2690702108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.AssertSection
struct  AssertSection_t2690702108  : public ConfigurationElement_t2529492142
{
public:

public:
};

struct AssertSection_t2690702108_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.AssertSection::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propAssertUIEnabled
	ConfigurationProperty_t402359398 * ____propAssertUIEnabled_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propLogFile
	ConfigurationProperty_t402359398 * ____propLogFile_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(AssertSection_t2690702108_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propAssertUIEnabled_16() { return static_cast<int32_t>(offsetof(AssertSection_t2690702108_StaticFields, ____propAssertUIEnabled_16)); }
	inline ConfigurationProperty_t402359398 * get__propAssertUIEnabled_16() const { return ____propAssertUIEnabled_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propAssertUIEnabled_16() { return &____propAssertUIEnabled_16; }
	inline void set__propAssertUIEnabled_16(ConfigurationProperty_t402359398 * value)
	{
		____propAssertUIEnabled_16 = value;
		Il2CppCodeGenWriteBarrier((&____propAssertUIEnabled_16), value);
	}

	inline static int32_t get_offset_of__propLogFile_17() { return static_cast<int32_t>(offsetof(AssertSection_t2690702108_StaticFields, ____propLogFile_17)); }
	inline ConfigurationProperty_t402359398 * get__propLogFile_17() const { return ____propLogFile_17; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propLogFile_17() { return &____propLogFile_17; }
	inline void set__propLogFile_17(ConfigurationProperty_t402359398 * value)
	{
		____propLogFile_17 = value;
		Il2CppCodeGenWriteBarrier((&____propLogFile_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTSECTION_T2690702108_H
#ifndef SWITCHLEVELATTRIBUTE_T2709311896_H
#define SWITCHLEVELATTRIBUTE_T2709311896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchLevelAttribute
struct  SwitchLevelAttribute_t2709311896  : public Attribute_t2551568327
{
public:
	// System.Type System.Diagnostics.SwitchLevelAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SwitchLevelAttribute_t2709311896, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHLEVELATTRIBUTE_T2709311896_H
#ifndef BOOLEANSWITCH_T2415538476_H
#define BOOLEANSWITCH_T2415538476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.BooleanSwitch
struct  BooleanSwitch_t2415538476  : public Switch_t1581615556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANSWITCH_T2415538476_H
#ifndef SWITCHELEMENT_T458884757_H
#define SWITCHELEMENT_T458884757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElement
struct  SwitchElement_t458884757  : public ConfigurationElement_t2529492142
{
public:
	// System.Collections.Hashtable System.Diagnostics.SwitchElement::_attributes
	Hashtable_t160128795 * ____attributes_18;

public:
	inline static int32_t get_offset_of__attributes_18() { return static_cast<int32_t>(offsetof(SwitchElement_t458884757, ____attributes_18)); }
	inline Hashtable_t160128795 * get__attributes_18() const { return ____attributes_18; }
	inline Hashtable_t160128795 ** get_address_of__attributes_18() { return &____attributes_18; }
	inline void set__attributes_18(Hashtable_t160128795 * value)
	{
		____attributes_18 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_18), value);
	}
};

struct SwitchElement_t458884757_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SwitchElement::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propName
	ConfigurationProperty_t402359398 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propValue
	ConfigurationProperty_t402359398 * ____propValue_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SwitchElement_t458884757_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SwitchElement_t458884757_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t402359398 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t402359398 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propValue_17() { return static_cast<int32_t>(offsetof(SwitchElement_t458884757_StaticFields, ____propValue_17)); }
	inline ConfigurationProperty_t402359398 * get__propValue_17() const { return ____propValue_17; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propValue_17() { return &____propValue_17; }
	inline void set__propValue_17(ConfigurationProperty_t402359398 * value)
	{
		____propValue_17 = value;
		Il2CppCodeGenWriteBarrier((&____propValue_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENT_T458884757_H
#ifndef SOURCEELEMENT_T2287286264_H
#define SOURCEELEMENT_T2287286264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElement
struct  SourceElement_t2287286264  : public ConfigurationElement_t2529492142
{
public:
	// System.Collections.Hashtable System.Diagnostics.SourceElement::_attributes
	Hashtable_t160128795 * ____attributes_21;

public:
	inline static int32_t get_offset_of__attributes_21() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264, ____attributes_21)); }
	inline Hashtable_t160128795 * get__attributes_21() const { return ____attributes_21; }
	inline Hashtable_t160128795 ** get_address_of__attributes_21() { return &____attributes_21; }
	inline void set__attributes_21(Hashtable_t160128795 * value)
	{
		____attributes_21 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_21), value);
	}
};

struct SourceElement_t2287286264_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SourceElement::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propName
	ConfigurationProperty_t402359398 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchName
	ConfigurationProperty_t402359398 * ____propSwitchName_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchValue
	ConfigurationProperty_t402359398 * ____propSwitchValue_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchType
	ConfigurationProperty_t402359398 * ____propSwitchType_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propListeners
	ConfigurationProperty_t402359398 * ____propListeners_20;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t402359398 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t402359398 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propSwitchName_17() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____propSwitchName_17)); }
	inline ConfigurationProperty_t402359398 * get__propSwitchName_17() const { return ____propSwitchName_17; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSwitchName_17() { return &____propSwitchName_17; }
	inline void set__propSwitchName_17(ConfigurationProperty_t402359398 * value)
	{
		____propSwitchName_17 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchName_17), value);
	}

	inline static int32_t get_offset_of__propSwitchValue_18() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____propSwitchValue_18)); }
	inline ConfigurationProperty_t402359398 * get__propSwitchValue_18() const { return ____propSwitchValue_18; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSwitchValue_18() { return &____propSwitchValue_18; }
	inline void set__propSwitchValue_18(ConfigurationProperty_t402359398 * value)
	{
		____propSwitchValue_18 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchValue_18), value);
	}

	inline static int32_t get_offset_of__propSwitchType_19() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____propSwitchType_19)); }
	inline ConfigurationProperty_t402359398 * get__propSwitchType_19() const { return ____propSwitchType_19; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSwitchType_19() { return &____propSwitchType_19; }
	inline void set__propSwitchType_19(ConfigurationProperty_t402359398 * value)
	{
		____propSwitchType_19 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchType_19), value);
	}

	inline static int32_t get_offset_of__propListeners_20() { return static_cast<int32_t>(offsetof(SourceElement_t2287286264_StaticFields, ____propListeners_20)); }
	inline ConfigurationProperty_t402359398 * get__propListeners_20() const { return ____propListeners_20; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propListeners_20() { return &____propListeners_20; }
	inline void set__propListeners_20(ConfigurationProperty_t402359398 * value)
	{
		____propListeners_20 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENT_T2287286264_H
#ifndef PERFCOUNTERSECTION_T1584148919_H
#define PERFCOUNTERSECTION_T1584148919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.PerfCounterSection
struct  PerfCounterSection_t1584148919  : public ConfigurationElement_t2529492142
{
public:

public:
};

struct PerfCounterSection_t1584148919_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.PerfCounterSection::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.PerfCounterSection::_propFileMappingSize
	ConfigurationProperty_t402359398 * ____propFileMappingSize_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(PerfCounterSection_t1584148919_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propFileMappingSize_16() { return static_cast<int32_t>(offsetof(PerfCounterSection_t1584148919_StaticFields, ____propFileMappingSize_16)); }
	inline ConfigurationProperty_t402359398 * get__propFileMappingSize_16() const { return ____propFileMappingSize_16; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propFileMappingSize_16() { return &____propFileMappingSize_16; }
	inline void set__propFileMappingSize_16(ConfigurationProperty_t402359398 * value)
	{
		____propFileMappingSize_16 = value;
		Il2CppCodeGenWriteBarrier((&____propFileMappingSize_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFCOUNTERSECTION_T1584148919_H
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
#ifndef SWITCHELEMENTSCOLLECTION_T4271044193_H
#define SWITCHELEMENTSCOLLECTION_T4271044193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElementsCollection
struct  SwitchElementsCollection_t4271044193  : public ConfigurationElementCollection_t216361383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENTSCOLLECTION_T4271044193_H
#ifndef SOURCELEVELS_T1567946020_H
#define SOURCELEVELS_T1567946020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceLevels
struct  SourceLevels_t1567946020 
{
public:
	// System.Int32 System.Diagnostics.SourceLevels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SourceLevels_t1567946020, ___value___2)); }
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
#endif // SOURCELEVELS_T1567946020_H
#ifndef LISTENERELEMENT_T1972787279_H
#define LISTENERELEMENT_T1972787279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElement
struct  ListenerElement_t1972787279  : public TypedElement_t1258704059
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propListenerTypeName
	ConfigurationProperty_t402359398 * ____propListenerTypeName_23;
	// System.Boolean System.Diagnostics.ListenerElement::_allowReferences
	bool ____allowReferences_24;
	// System.Collections.Hashtable System.Diagnostics.ListenerElement::_attributes
	Hashtable_t160128795 * ____attributes_25;
	// System.Boolean System.Diagnostics.ListenerElement::_isAddedByDefault
	bool ____isAddedByDefault_26;

public:
	inline static int32_t get_offset_of__propListenerTypeName_23() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279, ____propListenerTypeName_23)); }
	inline ConfigurationProperty_t402359398 * get__propListenerTypeName_23() const { return ____propListenerTypeName_23; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propListenerTypeName_23() { return &____propListenerTypeName_23; }
	inline void set__propListenerTypeName_23(ConfigurationProperty_t402359398 * value)
	{
		____propListenerTypeName_23 = value;
		Il2CppCodeGenWriteBarrier((&____propListenerTypeName_23), value);
	}

	inline static int32_t get_offset_of__allowReferences_24() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279, ____allowReferences_24)); }
	inline bool get__allowReferences_24() const { return ____allowReferences_24; }
	inline bool* get_address_of__allowReferences_24() { return &____allowReferences_24; }
	inline void set__allowReferences_24(bool value)
	{
		____allowReferences_24 = value;
	}

	inline static int32_t get_offset_of__attributes_25() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279, ____attributes_25)); }
	inline Hashtable_t160128795 * get__attributes_25() const { return ____attributes_25; }
	inline Hashtable_t160128795 ** get_address_of__attributes_25() { return &____attributes_25; }
	inline void set__attributes_25(Hashtable_t160128795 * value)
	{
		____attributes_25 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_25), value);
	}

	inline static int32_t get_offset_of__isAddedByDefault_26() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279, ____isAddedByDefault_26)); }
	inline bool get__isAddedByDefault_26() const { return ____isAddedByDefault_26; }
	inline bool* get_address_of__isAddedByDefault_26() { return &____isAddedByDefault_26; }
	inline void set__isAddedByDefault_26(bool value)
	{
		____isAddedByDefault_26 = value;
	}
};

struct ListenerElement_t1972787279_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propFilter
	ConfigurationProperty_t402359398 * ____propFilter_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propName
	ConfigurationProperty_t402359398 * ____propName_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propOutputOpts
	ConfigurationProperty_t402359398 * ____propOutputOpts_22;

public:
	inline static int32_t get_offset_of__propFilter_20() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279_StaticFields, ____propFilter_20)); }
	inline ConfigurationProperty_t402359398 * get__propFilter_20() const { return ____propFilter_20; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propFilter_20() { return &____propFilter_20; }
	inline void set__propFilter_20(ConfigurationProperty_t402359398 * value)
	{
		____propFilter_20 = value;
		Il2CppCodeGenWriteBarrier((&____propFilter_20), value);
	}

	inline static int32_t get_offset_of__propName_21() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279_StaticFields, ____propName_21)); }
	inline ConfigurationProperty_t402359398 * get__propName_21() const { return ____propName_21; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propName_21() { return &____propName_21; }
	inline void set__propName_21(ConfigurationProperty_t402359398 * value)
	{
		____propName_21 = value;
		Il2CppCodeGenWriteBarrier((&____propName_21), value);
	}

	inline static int32_t get_offset_of__propOutputOpts_22() { return static_cast<int32_t>(offsetof(ListenerElement_t1972787279_StaticFields, ____propOutputOpts_22)); }
	inline ConfigurationProperty_t402359398 * get__propOutputOpts_22() const { return ____propOutputOpts_22; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propOutputOpts_22() { return &____propOutputOpts_22; }
	inline void set__propOutputOpts_22(ConfigurationProperty_t402359398 * value)
	{
		____propOutputOpts_22 = value;
		Il2CppCodeGenWriteBarrier((&____propOutputOpts_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENT_T1972787279_H
#ifndef SYSTEMDIAGNOSTICSSECTION_T1057629538_H
#define SYSTEMDIAGNOSTICSSECTION_T1057629538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SystemDiagnosticsSection
struct  SystemDiagnosticsSection_t1057629538  : public ConfigurationSection_t4014044824
{
public:

public:
};

struct SystemDiagnosticsSection_t1057629538_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SystemDiagnosticsSection::_properties
	ConfigurationPropertyCollection_t3703620765 * ____properties_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propAssert
	ConfigurationProperty_t402359398 * ____propAssert_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propPerfCounters
	ConfigurationProperty_t402359398 * ____propPerfCounters_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSources
	ConfigurationProperty_t402359398 * ____propSources_22;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSharedListeners
	ConfigurationProperty_t402359398 * ____propSharedListeners_23;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSwitches
	ConfigurationProperty_t402359398 * ____propSwitches_24;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propTrace
	ConfigurationProperty_t402359398 * ____propTrace_25;

public:
	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____properties_19)); }
	inline ConfigurationPropertyCollection_t3703620765 * get__properties_19() const { return ____properties_19; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(ConfigurationPropertyCollection_t3703620765 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier((&____properties_19), value);
	}

	inline static int32_t get_offset_of__propAssert_20() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propAssert_20)); }
	inline ConfigurationProperty_t402359398 * get__propAssert_20() const { return ____propAssert_20; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propAssert_20() { return &____propAssert_20; }
	inline void set__propAssert_20(ConfigurationProperty_t402359398 * value)
	{
		____propAssert_20 = value;
		Il2CppCodeGenWriteBarrier((&____propAssert_20), value);
	}

	inline static int32_t get_offset_of__propPerfCounters_21() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propPerfCounters_21)); }
	inline ConfigurationProperty_t402359398 * get__propPerfCounters_21() const { return ____propPerfCounters_21; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propPerfCounters_21() { return &____propPerfCounters_21; }
	inline void set__propPerfCounters_21(ConfigurationProperty_t402359398 * value)
	{
		____propPerfCounters_21 = value;
		Il2CppCodeGenWriteBarrier((&____propPerfCounters_21), value);
	}

	inline static int32_t get_offset_of__propSources_22() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propSources_22)); }
	inline ConfigurationProperty_t402359398 * get__propSources_22() const { return ____propSources_22; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSources_22() { return &____propSources_22; }
	inline void set__propSources_22(ConfigurationProperty_t402359398 * value)
	{
		____propSources_22 = value;
		Il2CppCodeGenWriteBarrier((&____propSources_22), value);
	}

	inline static int32_t get_offset_of__propSharedListeners_23() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propSharedListeners_23)); }
	inline ConfigurationProperty_t402359398 * get__propSharedListeners_23() const { return ____propSharedListeners_23; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSharedListeners_23() { return &____propSharedListeners_23; }
	inline void set__propSharedListeners_23(ConfigurationProperty_t402359398 * value)
	{
		____propSharedListeners_23 = value;
		Il2CppCodeGenWriteBarrier((&____propSharedListeners_23), value);
	}

	inline static int32_t get_offset_of__propSwitches_24() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propSwitches_24)); }
	inline ConfigurationProperty_t402359398 * get__propSwitches_24() const { return ____propSwitches_24; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propSwitches_24() { return &____propSwitches_24; }
	inline void set__propSwitches_24(ConfigurationProperty_t402359398 * value)
	{
		____propSwitches_24 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitches_24), value);
	}

	inline static int32_t get_offset_of__propTrace_25() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t1057629538_StaticFields, ____propTrace_25)); }
	inline ConfigurationProperty_t402359398 * get__propTrace_25() const { return ____propTrace_25; }
	inline ConfigurationProperty_t402359398 ** get_address_of__propTrace_25() { return &____propTrace_25; }
	inline void set__propTrace_25(ConfigurationProperty_t402359398 * value)
	{
		____propTrace_25 = value;
		Il2CppCodeGenWriteBarrier((&____propTrace_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMDIAGNOSTICSSECTION_T1057629538_H
#ifndef LISTENERELEMENTSCOLLECTION_T2915207783_H
#define LISTENERELEMENTSCOLLECTION_T2915207783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElementsCollection
struct  ListenerElementsCollection_t2915207783  : public ConfigurationElementCollection_t216361383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENTSCOLLECTION_T2915207783_H
#ifndef FILTERELEMENT_T392172920_H
#define FILTERELEMENT_T392172920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.FilterElement
struct  FilterElement_t392172920  : public TypedElement_t1258704059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERELEMENT_T392172920_H
#ifndef INITSTATE_T2450290077_H
#define INITSTATE_T2450290077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.InitState
struct  InitState_t2450290077 
{
public:
	// System.Int32 System.Diagnostics.InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t2450290077, ___value___2)); }
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
#endif // INITSTATE_T2450290077_H
#ifndef TYPECONVERTER_T2715326707_H
#define TYPECONVERTER_T2715326707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2715326707  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2715326707_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2715326707_StaticFields, ___useCompatibleTypeConversion_1)); }
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
#endif // TYPECONVERTER_T2715326707_H
#ifndef CONFIGURATIONEXCEPTION_T2379543389_H
#define CONFIGURATIONEXCEPTION_T2379543389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationException
struct  ConfigurationException_t2379543389  : public SystemException_t3603334603
{
public:
	// System.String System.Configuration.ConfigurationException::filename
	String_t* ___filename_16;
	// System.Int32 System.Configuration.ConfigurationException::line
	int32_t ___line_17;

public:
	inline static int32_t get_offset_of_filename_16() { return static_cast<int32_t>(offsetof(ConfigurationException_t2379543389, ___filename_16)); }
	inline String_t* get_filename_16() const { return ___filename_16; }
	inline String_t** get_address_of_filename_16() { return &___filename_16; }
	inline void set_filename_16(String_t* value)
	{
		___filename_16 = value;
		Il2CppCodeGenWriteBarrier((&___filename_16), value);
	}

	inline static int32_t get_offset_of_line_17() { return static_cast<int32_t>(offsetof(ConfigurationException_t2379543389, ___line_17)); }
	inline int32_t get_line_17() const { return ___line_17; }
	inline int32_t* get_address_of_line_17() { return &___line_17; }
	inline void set_line_17(int32_t value)
	{
		___line_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONEXCEPTION_T2379543389_H
#ifndef REQUESTCACHELEVEL_T4054208444_H
#define REQUESTCACHELEVEL_T4054208444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t4054208444 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t4054208444, ___value___2)); }
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
#endif // REQUESTCACHELEVEL_T4054208444_H
#ifndef SOURCEELEMENTSCOLLECTION_T1220389111_H
#define SOURCEELEMENTSCOLLECTION_T1220389111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElementsCollection
struct  SourceElementsCollection_t1220389111  : public ConfigurationElementCollection_t216361383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENTSCOLLECTION_T1220389111_H
#ifndef EDITORBROWSABLESTATE_T3312690462_H
#define EDITORBROWSABLESTATE_T3312690462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t3312690462 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t3312690462, ___value___2)); }
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
#endif // EDITORBROWSABLESTATE_T3312690462_H
#ifndef TRACEINTERNAL_T1753942204_H
#define TRACEINTERNAL_T1753942204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceInternal
struct  TraceInternal_t1753942204  : public RuntimeObject
{
public:

public:
};

struct TraceInternal_t1753942204_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::appName
	String_t* ___appName_0;
	// System.Diagnostics.TraceListenerCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::listeners
	TraceListenerCollection_t3370009028 * ___listeners_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::autoFlush
	bool ___autoFlush_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::useGlobalLock
	bool ___useGlobalLock_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::indentSize
	int32_t ___indentSize_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::settingsInitialized
	bool ___settingsInitialized_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::defaultInitialized
	bool ___defaultInitialized_7;
	// System.Object System.Diagnostics.TraceInternal::critSec
	RuntimeObject * ___critSec_8;

public:
	inline static int32_t get_offset_of_appName_0() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___appName_0)); }
	inline String_t* get_appName_0() const { return ___appName_0; }
	inline String_t** get_address_of_appName_0() { return &___appName_0; }
	inline void set_appName_0(String_t* value)
	{
		___appName_0 = value;
		Il2CppCodeGenWriteBarrier((&___appName_0), value);
	}

	inline static int32_t get_offset_of_listeners_1() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___listeners_1)); }
	inline TraceListenerCollection_t3370009028 * get_listeners_1() const { return ___listeners_1; }
	inline TraceListenerCollection_t3370009028 ** get_address_of_listeners_1() { return &___listeners_1; }
	inline void set_listeners_1(TraceListenerCollection_t3370009028 * value)
	{
		___listeners_1 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_1), value);
	}

	inline static int32_t get_offset_of_autoFlush_2() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___autoFlush_2)); }
	inline bool get_autoFlush_2() const { return ___autoFlush_2; }
	inline bool* get_address_of_autoFlush_2() { return &___autoFlush_2; }
	inline void set_autoFlush_2(bool value)
	{
		___autoFlush_2 = value;
	}

	inline static int32_t get_offset_of_useGlobalLock_3() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___useGlobalLock_3)); }
	inline bool get_useGlobalLock_3() const { return ___useGlobalLock_3; }
	inline bool* get_address_of_useGlobalLock_3() { return &___useGlobalLock_3; }
	inline void set_useGlobalLock_3(bool value)
	{
		___useGlobalLock_3 = value;
	}

	inline static int32_t get_offset_of_indentSize_5() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___indentSize_5)); }
	inline int32_t get_indentSize_5() const { return ___indentSize_5; }
	inline int32_t* get_address_of_indentSize_5() { return &___indentSize_5; }
	inline void set_indentSize_5(int32_t value)
	{
		___indentSize_5 = value;
	}

	inline static int32_t get_offset_of_settingsInitialized_6() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___settingsInitialized_6)); }
	inline bool get_settingsInitialized_6() const { return ___settingsInitialized_6; }
	inline bool* get_address_of_settingsInitialized_6() { return &___settingsInitialized_6; }
	inline void set_settingsInitialized_6(bool value)
	{
		___settingsInitialized_6 = value;
	}

	inline static int32_t get_offset_of_defaultInitialized_7() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___defaultInitialized_7)); }
	inline bool get_defaultInitialized_7() const { return ___defaultInitialized_7; }
	inline bool* get_address_of_defaultInitialized_7() { return &___defaultInitialized_7; }
	inline void set_defaultInitialized_7(bool value)
	{
		___defaultInitialized_7 = value;
	}

	inline static int32_t get_offset_of_critSec_8() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_StaticFields, ___critSec_8)); }
	inline RuntimeObject * get_critSec_8() const { return ___critSec_8; }
	inline RuntimeObject ** get_address_of_critSec_8() { return &___critSec_8; }
	inline void set_critSec_8(RuntimeObject * value)
	{
		___critSec_8 = value;
		Il2CppCodeGenWriteBarrier((&___critSec_8), value);
	}
};

struct TraceInternal_t1753942204_ThreadStaticFields
{
public:
	// System.Int32 System.Diagnostics.TraceInternal::indentLevel
	int32_t ___indentLevel_4;

public:
	inline static int32_t get_offset_of_indentLevel_4() { return static_cast<int32_t>(offsetof(TraceInternal_t1753942204_ThreadStaticFields, ___indentLevel_4)); }
	inline int32_t get_indentLevel_4() const { return ___indentLevel_4; }
	inline int32_t* get_address_of_indentLevel_4() { return &___indentLevel_4; }
	inline void set_indentLevel_4(int32_t value)
	{
		___indentLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEINTERNAL_T1753942204_H
#ifndef WEBREQUESTMODULESSECTION_T736935085_H
#define WEBREQUESTMODULESSECTION_T736935085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t736935085  : public ConfigurationSection_t4014044824
{
public:

public:
};

struct WebRequestModulesSection_t736935085_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t3703620765 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t402359398 * ___webRequestModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t736935085_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3703620765 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3703620765 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3703620765 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_20() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t736935085_StaticFields, ___webRequestModulesProp_20)); }
	inline ConfigurationProperty_t402359398 * get_webRequestModulesProp_20() const { return ___webRequestModulesProp_20; }
	inline ConfigurationProperty_t402359398 ** get_address_of_webRequestModulesProp_20() { return &___webRequestModulesProp_20; }
	inline void set_webRequestModulesProp_20(ConfigurationProperty_t402359398 * value)
	{
		___webRequestModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T736935085_H
#ifndef TRACEOPTIONS_T2556099788_H
#define TRACEOPTIONS_T2556099788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceOptions
struct  TraceOptions_t2556099788 
{
public:
	// System.Int32 System.Diagnostics.TraceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceOptions_t2556099788, ___value___2)); }
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
#endif // TRACEOPTIONS_T2556099788_H
#ifndef MONITORINGDESCRIPTIONATTRIBUTE_T1602953455_H
#define MONITORINGDESCRIPTIONATTRIBUTE_T1602953455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.MonitoringDescriptionAttribute
struct  MonitoringDescriptionAttribute_t1602953455  : public DescriptionAttribute_t137529577
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITORINGDESCRIPTIONATTRIBUTE_T1602953455_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3970740405_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3970740405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3970740405 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3970740405, ___value___2)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3970740405_H
#ifndef EVENTLOG_T4291673388_H
#define EVENTLOG_T4291673388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLog
struct  EventLog_t4291673388  : public Component_t199574091
{
public:
	// System.String System.Diagnostics.EventLog::source
	String_t* ___source_4;
	// System.Boolean System.Diagnostics.EventLog::doRaiseEvents
	bool ___doRaiseEvents_5;
	// System.Diagnostics.EventLogImpl System.Diagnostics.EventLog::Impl
	EventLogImpl_t1934621413 * ___Impl_6;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(EventLog_t4291673388, ___source_4)); }
	inline String_t* get_source_4() const { return ___source_4; }
	inline String_t** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(String_t* value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_doRaiseEvents_5() { return static_cast<int32_t>(offsetof(EventLog_t4291673388, ___doRaiseEvents_5)); }
	inline bool get_doRaiseEvents_5() const { return ___doRaiseEvents_5; }
	inline bool* get_address_of_doRaiseEvents_5() { return &___doRaiseEvents_5; }
	inline void set_doRaiseEvents_5(bool value)
	{
		___doRaiseEvents_5 = value;
	}

	inline static int32_t get_offset_of_Impl_6() { return static_cast<int32_t>(offsetof(EventLog_t4291673388, ___Impl_6)); }
	inline EventLogImpl_t1934621413 * get_Impl_6() const { return ___Impl_6; }
	inline EventLogImpl_t1934621413 ** get_address_of_Impl_6() { return &___Impl_6; }
	inline void set_Impl_6(EventLogImpl_t1934621413 * value)
	{
		___Impl_6 = value;
		Il2CppCodeGenWriteBarrier((&___Impl_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOG_T4291673388_H
#ifndef BOOLEANCONVERTER_T2912443493_H
#define BOOLEANCONVERTER_T2912443493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t2912443493  : public TypeConverter_t2715326707
{
public:

public:
};

struct BooleanConverter_t2912443493_StaticFields
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::values
	StandardValuesCollection_t3819296180 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(BooleanConverter_t2912443493_StaticFields, ___values_2)); }
	inline StandardValuesCollection_t3819296180 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t3819296180 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t3819296180 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T2912443493_H
#ifndef REQUESTCACHEPOLICY_T4266926323_H
#define REQUESTCACHEPOLICY_T4266926323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t4266926323  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t4266926323, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T4266926323_H
#ifndef REFERENCECONVERTER_T3416699622_H
#define REFERENCECONVERTER_T3416699622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3416699622  : public TypeConverter_t2715326707
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3416699622, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t3416699622_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3416699622_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T3416699622_H
#ifndef CHARCONVERTER_T428312543_H
#define CHARCONVERTER_T428312543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t428312543  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T428312543_H
#ifndef BASENUMBERCONVERTER_T3913994568_H
#define BASENUMBERCONVERTER_T3913994568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t3913994568  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T3913994568_H
#ifndef COLLECTIONCONVERTER_T688279975_H
#define COLLECTIONCONVERTER_T688279975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t688279975  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T688279975_H
#ifndef TRACESOURCEINFO_T215197497_H
#define TRACESOURCEINFO_T215197497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t215197497  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t3370009028 * ___listeners_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t215197497, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_levels_1() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t215197497, ___levels_1)); }
	inline int32_t get_levels_1() const { return ___levels_1; }
	inline int32_t* get_address_of_levels_1() { return &___levels_1; }
	inline void set_levels_1(int32_t value)
	{
		___levels_1 = value;
	}

	inline static int32_t get_offset_of_listeners_2() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t215197497, ___listeners_2)); }
	inline TraceListenerCollection_t3370009028 * get_listeners_2() const { return ___listeners_2; }
	inline TraceListenerCollection_t3370009028 ** get_address_of_listeners_2() { return &___listeners_2; }
	inline void set_listeners_2(TraceListenerCollection_t3370009028 * value)
	{
		___listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESOURCEINFO_T215197497_H
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
#ifndef DIAGNOSTICSCONFIGURATION_T3886888075_H
#define DIAGNOSTICSCONFIGURATION_T3886888075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfiguration
struct  DiagnosticsConfiguration_t3886888075  : public RuntimeObject
{
public:

public:
};

struct DiagnosticsConfiguration_t3886888075_StaticFields
{
public:
	// System.Diagnostics.SystemDiagnosticsSection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::configSection
	SystemDiagnosticsSection_t1057629538 * ___configSection_0;
	// System.Diagnostics.InitState modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::initState
	int32_t ___initState_1;

public:
	inline static int32_t get_offset_of_configSection_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t3886888075_StaticFields, ___configSection_0)); }
	inline SystemDiagnosticsSection_t1057629538 * get_configSection_0() const { return ___configSection_0; }
	inline SystemDiagnosticsSection_t1057629538 ** get_address_of_configSection_0() { return &___configSection_0; }
	inline void set_configSection_0(SystemDiagnosticsSection_t1057629538 * value)
	{
		___configSection_0 = value;
		Il2CppCodeGenWriteBarrier((&___configSection_0), value);
	}

	inline static int32_t get_offset_of_initState_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t3886888075_StaticFields, ___initState_1)); }
	inline int32_t get_initState_1() const { return ___initState_1; }
	inline int32_t* get_address_of_initState_1() { return &___initState_1; }
	inline void set_initState_1(int32_t value)
	{
		___initState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATION_T3886888075_H
#ifndef CULTUREINFOCONVERTER_T1491641283_H
#define CULTUREINFOCONVERTER_T1491641283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t1491641283  : public TypeConverter_t2715326707
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::values
	StandardValuesCollection_t3819296180 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t1491641283, ___values_2)); }
	inline StandardValuesCollection_t3819296180 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t3819296180 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t3819296180 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T1491641283_H
#ifndef SHAREDLISTENERELEMENTSCOLLECTION_T3784298392_H
#define SHAREDLISTENERELEMENTSCOLLECTION_T3784298392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SharedListenerElementsCollection
struct  SharedListenerElementsCollection_t3784298392  : public ListenerElementsCollection_t2915207783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDLISTENERELEMENTSCOLLECTION_T3784298392_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1762642015_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1762642015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t1762642015  : public Attribute_t2551568327
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_4;

public:
	inline static int32_t get_offset_of_visibility_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1762642015, ___visibility_4)); }
	inline int32_t get_visibility_4() const { return ___visibility_4; }
	inline int32_t* get_address_of_visibility_4() { return &___visibility_4; }
	inline void set_visibility_4(int32_t value)
	{
		___visibility_4 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t1762642015_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t1762642015 * ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t1762642015 * ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t1762642015 * ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t1762642015 * ___Default_3;

public:
	inline static int32_t get_offset_of_Content_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1762642015_StaticFields, ___Content_0)); }
	inline DesignerSerializationVisibilityAttribute_t1762642015 * get_Content_0() const { return ___Content_0; }
	inline DesignerSerializationVisibilityAttribute_t1762642015 ** get_address_of_Content_0() { return &___Content_0; }
	inline void set_Content_0(DesignerSerializationVisibilityAttribute_t1762642015 * value)
	{
		___Content_0 = value;
		Il2CppCodeGenWriteBarrier((&___Content_0), value);
	}

	inline static int32_t get_offset_of_Hidden_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1762642015_StaticFields, ___Hidden_1)); }
	inline DesignerSerializationVisibilityAttribute_t1762642015 * get_Hidden_1() const { return ___Hidden_1; }
	inline DesignerSerializationVisibilityAttribute_t1762642015 ** get_address_of_Hidden_1() { return &___Hidden_1; }
	inline void set_Hidden_1(DesignerSerializationVisibilityAttribute_t1762642015 * value)
	{
		___Hidden_1 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_1), value);
	}

	inline static int32_t get_offset_of_Visible_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1762642015_StaticFields, ___Visible_2)); }
	inline DesignerSerializationVisibilityAttribute_t1762642015 * get_Visible_2() const { return ___Visible_2; }
	inline DesignerSerializationVisibilityAttribute_t1762642015 ** get_address_of_Visible_2() { return &___Visible_2; }
	inline void set_Visible_2(DesignerSerializationVisibilityAttribute_t1762642015 * value)
	{
		___Visible_2 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1762642015_StaticFields, ___Default_3)); }
	inline DesignerSerializationVisibilityAttribute_t1762642015 * get_Default_3() const { return ___Default_3; }
	inline DesignerSerializationVisibilityAttribute_t1762642015 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerSerializationVisibilityAttribute_t1762642015 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1762642015_H
#ifndef DATETIMECONVERTER_T3929601263_H
#define DATETIMECONVERTER_T3929601263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t3929601263  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T3929601263_H
#ifndef DATETIMEOFFSETCONVERTER_T1404966537_H
#define DATETIMEOFFSETCONVERTER_T1404966537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeOffsetConverter
struct  DateTimeOffsetConverter_t1404966537  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSETCONVERTER_T1404966537_H
#ifndef EDITORBROWSABLEATTRIBUTE_T2476059148_H
#define EDITORBROWSABLEATTRIBUTE_T2476059148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t2476059148  : public Attribute_t2551568327
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;

public:
	inline static int32_t get_offset_of_browsableState_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t2476059148, ___browsableState_0)); }
	inline int32_t get_browsableState_0() const { return ___browsableState_0; }
	inline int32_t* get_address_of_browsableState_0() { return &___browsableState_0; }
	inline void set_browsableState_0(int32_t value)
	{
		___browsableState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T2476059148_H
#ifndef GUIDCONVERTER_T1328118411_H
#define GUIDCONVERTER_T1328118411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1328118411  : public TypeConverter_t2715326707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1328118411_H
#ifndef TRACELISTENER_T2590016882_H
#define TRACELISTENER_T2590016882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListener
struct  TraceListener_t2590016882  : public MarshalByRefObject_t2362926069
{
public:
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::traceOptions
	int32_t ___traceOptions_3;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_4;
	// System.String System.Diagnostics.TraceListener::listenerName
	String_t* ___listenerName_5;
	// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::filter
	TraceFilter_t1928642482 * ___filter_6;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t1536562482 * ___attributes_7;
	// System.String System.Diagnostics.TraceListener::initializeData
	String_t* ___initializeData_8;

public:
	inline static int32_t get_offset_of_indentLevel_1() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___indentLevel_1)); }
	inline int32_t get_indentLevel_1() const { return ___indentLevel_1; }
	inline int32_t* get_address_of_indentLevel_1() { return &___indentLevel_1; }
	inline void set_indentLevel_1(int32_t value)
	{
		___indentLevel_1 = value;
	}

	inline static int32_t get_offset_of_indentSize_2() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___indentSize_2)); }
	inline int32_t get_indentSize_2() const { return ___indentSize_2; }
	inline int32_t* get_address_of_indentSize_2() { return &___indentSize_2; }
	inline void set_indentSize_2(int32_t value)
	{
		___indentSize_2 = value;
	}

	inline static int32_t get_offset_of_traceOptions_3() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___traceOptions_3)); }
	inline int32_t get_traceOptions_3() const { return ___traceOptions_3; }
	inline int32_t* get_address_of_traceOptions_3() { return &___traceOptions_3; }
	inline void set_traceOptions_3(int32_t value)
	{
		___traceOptions_3 = value;
	}

	inline static int32_t get_offset_of_needIndent_4() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___needIndent_4)); }
	inline bool get_needIndent_4() const { return ___needIndent_4; }
	inline bool* get_address_of_needIndent_4() { return &___needIndent_4; }
	inline void set_needIndent_4(bool value)
	{
		___needIndent_4 = value;
	}

	inline static int32_t get_offset_of_listenerName_5() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___listenerName_5)); }
	inline String_t* get_listenerName_5() const { return ___listenerName_5; }
	inline String_t** get_address_of_listenerName_5() { return &___listenerName_5; }
	inline void set_listenerName_5(String_t* value)
	{
		___listenerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___listenerName_5), value);
	}

	inline static int32_t get_offset_of_filter_6() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___filter_6)); }
	inline TraceFilter_t1928642482 * get_filter_6() const { return ___filter_6; }
	inline TraceFilter_t1928642482 ** get_address_of_filter_6() { return &___filter_6; }
	inline void set_filter_6(TraceFilter_t1928642482 * value)
	{
		___filter_6 = value;
		Il2CppCodeGenWriteBarrier((&___filter_6), value);
	}

	inline static int32_t get_offset_of_attributes_7() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___attributes_7)); }
	inline StringDictionary_t1536562482 * get_attributes_7() const { return ___attributes_7; }
	inline StringDictionary_t1536562482 ** get_address_of_attributes_7() { return &___attributes_7; }
	inline void set_attributes_7(StringDictionary_t1536562482 * value)
	{
		___attributes_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_7), value);
	}

	inline static int32_t get_offset_of_initializeData_8() { return static_cast<int32_t>(offsetof(TraceListener_t2590016882, ___initializeData_8)); }
	inline String_t* get_initializeData_8() const { return ___initializeData_8; }
	inline String_t** get_address_of_initializeData_8() { return &___initializeData_8; }
	inline void set_initializeData_8(String_t* value)
	{
		___initializeData_8 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENER_T2590016882_H
#ifndef ENUMCONVERTER_T3333842933_H
#define ENUMCONVERTER_T3333842933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t3333842933  : public TypeConverter_t2715326707
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_t3819296180 * ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(EnumConverter_t3333842933, ___values_2)); }
	inline StandardValuesCollection_t3819296180 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t3819296180 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t3819296180 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(EnumConverter_t3333842933, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T3333842933_H
#ifndef DOUBLECONVERTER_T940057155_H
#define DOUBLECONVERTER_T940057155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t940057155  : public BaseNumberConverter_t3913994568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T940057155_H
#ifndef BYTECONVERTER_T1260530750_H
#define BYTECONVERTER_T1260530750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1260530750  : public BaseNumberConverter_t3913994568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1260530750_H
#ifndef ARRAYCONVERTER_T1528325343_H
#define ARRAYCONVERTER_T1528325343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1528325343  : public CollectionConverter_t688279975
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1528325343_H
#ifndef TEXTWRITERTRACELISTENER_T1465197692_H
#define TEXTWRITERTRACELISTENER_T1465197692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TextWriterTraceListener
struct  TextWriterTraceListener_t1465197692  : public TraceListener_t2590016882
{
public:
	// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::writer
	TextWriter_t414100152 * ___writer_9;

public:
	inline static int32_t get_offset_of_writer_9() { return static_cast<int32_t>(offsetof(TextWriterTraceListener_t1465197692, ___writer_9)); }
	inline TextWriter_t414100152 * get_writer_9() const { return ___writer_9; }
	inline TextWriter_t414100152 ** get_address_of_writer_9() { return &___writer_9; }
	inline void set_writer_9(TextWriter_t414100152 * value)
	{
		___writer_9 = value;
		Il2CppCodeGenWriteBarrier((&___writer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITERTRACELISTENER_T1465197692_H
#ifndef DEFAULTTRACELISTENER_T2526454670_H
#define DEFAULTTRACELISTENER_T2526454670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t2526454670  : public TraceListener_t2590016882
{
public:
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_12;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_13;

public:
	inline static int32_t get_offset_of_logFileName_12() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2526454670, ___logFileName_12)); }
	inline String_t* get_logFileName_12() const { return ___logFileName_12; }
	inline String_t** get_address_of_logFileName_12() { return &___logFileName_12; }
	inline void set_logFileName_12(String_t* value)
	{
		___logFileName_12 = value;
		Il2CppCodeGenWriteBarrier((&___logFileName_12), value);
	}

	inline static int32_t get_offset_of_assertUiEnabled_13() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2526454670, ___assertUiEnabled_13)); }
	inline bool get_assertUiEnabled_13() const { return ___assertUiEnabled_13; }
	inline bool* get_address_of_assertUiEnabled_13() { return &___assertUiEnabled_13; }
	inline void set_assertUiEnabled_13(bool value)
	{
		___assertUiEnabled_13 = value;
	}
};

struct DefaultTraceListener_t2526454670_StaticFields
{
public:
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_9;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_10;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_11;

public:
	inline static int32_t get_offset_of_OnWin32_9() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2526454670_StaticFields, ___OnWin32_9)); }
	inline bool get_OnWin32_9() const { return ___OnWin32_9; }
	inline bool* get_address_of_OnWin32_9() { return &___OnWin32_9; }
	inline void set_OnWin32_9(bool value)
	{
		___OnWin32_9 = value;
	}

	inline static int32_t get_offset_of_MonoTracePrefix_10() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2526454670_StaticFields, ___MonoTracePrefix_10)); }
	inline String_t* get_MonoTracePrefix_10() const { return ___MonoTracePrefix_10; }
	inline String_t** get_address_of_MonoTracePrefix_10() { return &___MonoTracePrefix_10; }
	inline void set_MonoTracePrefix_10(String_t* value)
	{
		___MonoTracePrefix_10 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTracePrefix_10), value);
	}

	inline static int32_t get_offset_of_MonoTraceFile_11() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t2526454670_StaticFields, ___MonoTraceFile_11)); }
	inline String_t* get_MonoTraceFile_11() const { return ___MonoTraceFile_11; }
	inline String_t** get_address_of_MonoTraceFile_11() { return &___MonoTraceFile_11; }
	inline void set_MonoTraceFile_11(String_t* value)
	{
		___MonoTraceFile_11 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTraceFile_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACELISTENER_T2526454670_H
#ifndef DECIMALCONVERTER_T2004335812_H
#define DECIMALCONVERTER_T2004335812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t2004335812  : public BaseNumberConverter_t3913994568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T2004335812_H
#ifndef COMPONENTCONVERTER_T3800479349_H
#define COMPONENTCONVERTER_T3800479349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t3800479349  : public ReferenceConverter_t3416699622
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T3800479349_H
#ifndef ELEMENTHANDLER_T3241751216_H
#define ELEMENTHANDLER_T3241751216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct  ElementHandler_t3241751216  : public MulticastDelegate_t2778163795
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTHANDLER_T3241751216_H
#ifndef EVENTLOGTRACELISTENER_T1420763276_H
#define EVENTLOGTRACELISTENER_T1420763276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogTraceListener
struct  EventLogTraceListener_t1420763276  : public TraceListener_t2590016882
{
public:
	// System.Diagnostics.EventLog System.Diagnostics.EventLogTraceListener::event_log
	EventLog_t4291673388 * ___event_log_9;
	// System.String System.Diagnostics.EventLogTraceListener::name
	String_t* ___name_10;

public:
	inline static int32_t get_offset_of_event_log_9() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t1420763276, ___event_log_9)); }
	inline EventLog_t4291673388 * get_event_log_9() const { return ___event_log_9; }
	inline EventLog_t4291673388 ** get_address_of_event_log_9() { return &___event_log_9; }
	inline void set_event_log_9(EventLog_t4291673388 * value)
	{
		___event_log_9 = value;
		Il2CppCodeGenWriteBarrier((&___event_log_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t1420763276, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGTRACELISTENER_T1420763276_H
#ifndef XMLWRITERTRACELISTENER_T854306211_H
#define XMLWRITERTRACELISTENER_T854306211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.XmlWriterTraceListener
struct  XmlWriterTraceListener_t854306211  : public TextWriterTraceListener_t1465197692
{
public:
	// System.Text.StringBuilder System.Diagnostics.XmlWriterTraceListener::strBldr
	StringBuilder_t3651158979 * ___strBldr_10;
	// System.Xml.XmlTextWriter System.Diagnostics.XmlWriterTraceListener::xmlBlobWriter
	XmlTextWriter_t2195637803 * ___xmlBlobWriter_11;
	// System.Boolean System.Diagnostics.XmlWriterTraceListener::shouldRespectFilterOnTraceTransfer
	bool ___shouldRespectFilterOnTraceTransfer_12;

public:
	inline static int32_t get_offset_of_strBldr_10() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t854306211, ___strBldr_10)); }
	inline StringBuilder_t3651158979 * get_strBldr_10() const { return ___strBldr_10; }
	inline StringBuilder_t3651158979 ** get_address_of_strBldr_10() { return &___strBldr_10; }
	inline void set_strBldr_10(StringBuilder_t3651158979 * value)
	{
		___strBldr_10 = value;
		Il2CppCodeGenWriteBarrier((&___strBldr_10), value);
	}

	inline static int32_t get_offset_of_xmlBlobWriter_11() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t854306211, ___xmlBlobWriter_11)); }
	inline XmlTextWriter_t2195637803 * get_xmlBlobWriter_11() const { return ___xmlBlobWriter_11; }
	inline XmlTextWriter_t2195637803 ** get_address_of_xmlBlobWriter_11() { return &___xmlBlobWriter_11; }
	inline void set_xmlBlobWriter_11(XmlTextWriter_t2195637803 * value)
	{
		___xmlBlobWriter_11 = value;
		Il2CppCodeGenWriteBarrier((&___xmlBlobWriter_11), value);
	}

	inline static int32_t get_offset_of_shouldRespectFilterOnTraceTransfer_12() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t854306211, ___shouldRespectFilterOnTraceTransfer_12)); }
	inline bool get_shouldRespectFilterOnTraceTransfer_12() const { return ___shouldRespectFilterOnTraceTransfer_12; }
	inline bool* get_address_of_shouldRespectFilterOnTraceTransfer_12() { return &___shouldRespectFilterOnTraceTransfer_12; }
	inline void set_shouldRespectFilterOnTraceTransfer_12(bool value)
	{
		___shouldRespectFilterOnTraceTransfer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERTRACELISTENER_T854306211_H
#ifndef DELIMITEDLISTTRACELISTENER_T2211361749_H
#define DELIMITEDLISTTRACELISTENER_T2211361749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DelimitedListTraceListener
struct  DelimitedListTraceListener_t2211361749  : public TextWriterTraceListener_t1465197692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELIMITEDLISTTRACELISTENER_T2211361749_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2700 = { sizeof (WebRequestModulesSection_t736935085), -1, sizeof(WebRequestModulesSection_t736935085_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2700[2] = 
{
	WebRequestModulesSection_t736935085_StaticFields::get_offset_of_properties_19(),
	WebRequestModulesSection_t736935085_StaticFields::get_offset_of_webRequestModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2701 = { sizeof (RequestCache_t2282667500), -1, sizeof(RequestCache_t2282667500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2701[1] = 
{
	RequestCache_t2282667500_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2702 = { sizeof (RequestCacheValidator_t2138206389), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2703 = { sizeof (RequestCacheBinding_t2019448247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2703[2] = 
{
	RequestCacheBinding_t2019448247::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t2019448247::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2704 = { sizeof (RequestCacheLevel_t4054208444)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2704[8] = 
{
	RequestCacheLevel_t4054208444::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2705 = { sizeof (RequestCachePolicy_t4266926323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2705[1] = 
{
	RequestCachePolicy_t4266926323::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2706 = { sizeof (RequestCacheProtocol_t51018548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2707 = { sizeof (PrivilegedConfigurationManager_t3634638223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2708 = { sizeof (ConfigurationException_t2379543389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2708[2] = 
{
	ConfigurationException_t2379543389::get_offset_of_filename_16(),
	ConfigurationException_t2379543389::get_offset_of_line_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2709 = { sizeof (ConfigurationSettings_t1168272622), -1, sizeof(ConfigurationSettings_t1168272622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2709[2] = 
{
	ConfigurationSettings_t1168272622_StaticFields::get_offset_of_config_0(),
	ConfigurationSettings_t1168272622_StaticFields::get_offset_of_lockobj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2710 = { sizeof (DefaultConfig_t2111366707), -1, sizeof(DefaultConfig_t2111366707_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2710[1] = 
{
	DefaultConfig_t2111366707_StaticFields::get_offset_of_instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2711 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2712 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2713 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2714 = { sizeof (AssertSection_t2690702108), -1, sizeof(AssertSection_t2690702108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2714[3] = 
{
	AssertSection_t2690702108_StaticFields::get_offset_of__properties_15(),
	AssertSection_t2690702108_StaticFields::get_offset_of__propAssertUIEnabled_16(),
	AssertSection_t2690702108_StaticFields::get_offset_of__propLogFile_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2715 = { sizeof (BooleanSwitch_t2415538476), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2716 = { sizeof (DelimitedListTraceListener_t2211361749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2717 = { sizeof (InitState_t2450290077)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2717[4] = 
{
	InitState_t2450290077::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2718 = { sizeof (DiagnosticsConfiguration_t3886888075), -1, sizeof(DiagnosticsConfiguration_t3886888075_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2718[2] = 
{
	DiagnosticsConfiguration_t3886888075_StaticFields::get_offset_of_configSection_0(),
	DiagnosticsConfiguration_t3886888075_StaticFields::get_offset_of_initState_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2719 = { sizeof (FilterElement_t392172920), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2720 = { sizeof (ListenerElementsCollection_t2915207783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2721 = { sizeof (SharedListenerElementsCollection_t3784298392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2722 = { sizeof (ListenerElement_t1972787279), -1, sizeof(ListenerElement_t1972787279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2722[7] = 
{
	ListenerElement_t1972787279_StaticFields::get_offset_of__propFilter_20(),
	ListenerElement_t1972787279_StaticFields::get_offset_of__propName_21(),
	ListenerElement_t1972787279_StaticFields::get_offset_of__propOutputOpts_22(),
	ListenerElement_t1972787279::get_offset_of__propListenerTypeName_23(),
	ListenerElement_t1972787279::get_offset_of__allowReferences_24(),
	ListenerElement_t1972787279::get_offset_of__attributes_25(),
	ListenerElement_t1972787279::get_offset_of__isAddedByDefault_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2723 = { sizeof (PerfCounterSection_t1584148919), -1, sizeof(PerfCounterSection_t1584148919_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2723[2] = 
{
	PerfCounterSection_t1584148919_StaticFields::get_offset_of__properties_15(),
	PerfCounterSection_t1584148919_StaticFields::get_offset_of__propFileMappingSize_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2724 = { sizeof (SourceElementsCollection_t1220389111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2725 = { sizeof (SourceElement_t2287286264), -1, sizeof(SourceElement_t2287286264_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2725[7] = 
{
	SourceElement_t2287286264_StaticFields::get_offset_of__properties_15(),
	SourceElement_t2287286264_StaticFields::get_offset_of__propName_16(),
	SourceElement_t2287286264_StaticFields::get_offset_of__propSwitchName_17(),
	SourceElement_t2287286264_StaticFields::get_offset_of__propSwitchValue_18(),
	SourceElement_t2287286264_StaticFields::get_offset_of__propSwitchType_19(),
	SourceElement_t2287286264_StaticFields::get_offset_of__propListeners_20(),
	SourceElement_t2287286264::get_offset_of__attributes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2726 = { sizeof (SourceLevels_t1567946020)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2726[9] = 
{
	SourceLevels_t1567946020::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2727 = { sizeof (Switch_t1581615556), -1, sizeof(Switch_t1581615556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2727[6] = 
{
	Switch_t1581615556::get_offset_of_description_0(),
	Switch_t1581615556::get_offset_of_displayName_1(),
	Switch_t1581615556::get_offset_of_switchValueString_2(),
	Switch_t1581615556::get_offset_of_defaultValue_3(),
	Switch_t1581615556_StaticFields::get_offset_of_switches_4(),
	Switch_t1581615556_StaticFields::get_offset_of_s_LastCollectionCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2728 = { sizeof (SwitchElementsCollection_t4271044193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2729 = { sizeof (SwitchElement_t458884757), -1, sizeof(SwitchElement_t458884757_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2729[4] = 
{
	SwitchElement_t458884757_StaticFields::get_offset_of__properties_15(),
	SwitchElement_t458884757_StaticFields::get_offset_of__propName_16(),
	SwitchElement_t458884757_StaticFields::get_offset_of__propValue_17(),
	SwitchElement_t458884757::get_offset_of__attributes_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2730 = { sizeof (SwitchLevelAttribute_t2709311896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2730[1] = 
{
	SwitchLevelAttribute_t2709311896::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2731 = { sizeof (SystemDiagnosticsSection_t1057629538), -1, sizeof(SystemDiagnosticsSection_t1057629538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2731[7] = 
{
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__properties_19(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propAssert_20(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propPerfCounters_21(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propSources_22(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propSharedListeners_23(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propSwitches_24(),
	SystemDiagnosticsSection_t1057629538_StaticFields::get_offset_of__propTrace_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2732 = { sizeof (TextWriterTraceListener_t1465197692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2732[1] = 
{
	TextWriterTraceListener_t1465197692::get_offset_of_writer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2733 = { sizeof (TraceFilter_t1928642482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2733[1] = 
{
	TraceFilter_t1928642482::get_offset_of_initializeData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2734 = { sizeof (TraceInternal_t1753942204), -1, sizeof(TraceInternal_t1753942204_StaticFields), sizeof(TraceInternal_t1753942204_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2734[9] = 
{
	TraceInternal_t1753942204_StaticFields::get_offset_of_appName_0(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_listeners_1(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_autoFlush_2(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_useGlobalLock_3(),
	THREAD_STATIC_FIELD_OFFSET,
	TraceInternal_t1753942204_StaticFields::get_offset_of_indentSize_5(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_settingsInitialized_6(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_defaultInitialized_7(),
	TraceInternal_t1753942204_StaticFields::get_offset_of_critSec_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2735 = { sizeof (TraceListener_t2590016882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2735[8] = 
{
	TraceListener_t2590016882::get_offset_of_indentLevel_1(),
	TraceListener_t2590016882::get_offset_of_indentSize_2(),
	TraceListener_t2590016882::get_offset_of_traceOptions_3(),
	TraceListener_t2590016882::get_offset_of_needIndent_4(),
	TraceListener_t2590016882::get_offset_of_listenerName_5(),
	TraceListener_t2590016882::get_offset_of_filter_6(),
	TraceListener_t2590016882::get_offset_of_attributes_7(),
	TraceListener_t2590016882::get_offset_of_initializeData_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2736 = { sizeof (TraceListenerCollection_t3370009028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2736[1] = 
{
	TraceListenerCollection_t3370009028::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2737 = { sizeof (TraceOptions_t2556099788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2737[8] = 
{
	TraceOptions_t2556099788::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2738 = { sizeof (TraceSection_t2220029405), -1, sizeof(TraceSection_t2220029405_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2738[5] = 
{
	TraceSection_t2220029405_StaticFields::get_offset_of__properties_15(),
	TraceSection_t2220029405_StaticFields::get_offset_of__propListeners_16(),
	TraceSection_t2220029405_StaticFields::get_offset_of__propAutoFlush_17(),
	TraceSection_t2220029405_StaticFields::get_offset_of__propIndentSize_18(),
	TraceSection_t2220029405_StaticFields::get_offset_of__propUseGlobalLock_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2739 = { sizeof (TypedElement_t1258704059), -1, sizeof(TypedElement_t1258704059_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2739[5] = 
{
	TypedElement_t1258704059_StaticFields::get_offset_of__propTypeName_15(),
	TypedElement_t1258704059_StaticFields::get_offset_of__propInitData_16(),
	TypedElement_t1258704059::get_offset_of__properties_17(),
	TypedElement_t1258704059::get_offset_of__runtimeObject_18(),
	TypedElement_t1258704059::get_offset_of__baseType_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2740 = { sizeof (XmlWriterTraceListener_t854306211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2740[3] = 
{
	XmlWriterTraceListener_t854306211::get_offset_of_strBldr_10(),
	XmlWriterTraceListener_t854306211::get_offset_of_xmlBlobWriter_11(),
	XmlWriterTraceListener_t854306211::get_offset_of_shouldRespectFilterOnTraceTransfer_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2741 = { sizeof (TraceUtils_t3707917994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2742 = { sizeof (ConfigurationManagerInternalFactory_t787718204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2743 = { sizeof (Instance_t1903689760), -1, sizeof(Instance_t1903689760_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2743[1] = 
{
	Instance_t1903689760_StaticFields::get_offset_of_SetConfigurationSystemInProgress_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2744 = { sizeof (DefaultTraceListener_t2526454670), -1, sizeof(DefaultTraceListener_t2526454670_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2744[5] = 
{
	DefaultTraceListener_t2526454670_StaticFields::get_offset_of_OnWin32_9(),
	DefaultTraceListener_t2526454670_StaticFields::get_offset_of_MonoTracePrefix_10(),
	DefaultTraceListener_t2526454670_StaticFields::get_offset_of_MonoTraceFile_11(),
	DefaultTraceListener_t2526454670::get_offset_of_logFileName_12(),
	DefaultTraceListener_t2526454670::get_offset_of_assertUiEnabled_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2745 = { sizeof (DiagnosticsConfigurationHandler_t3636687315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2745[2] = 
{
	DiagnosticsConfigurationHandler_t3636687315::get_offset_of_configValues_0(),
	DiagnosticsConfigurationHandler_t3636687315::get_offset_of_elementHandlers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2746 = { sizeof (ElementHandler_t3241751216), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2747 = { sizeof (EventLog_t4291673388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2747[3] = 
{
	EventLog_t4291673388::get_offset_of_source_4(),
	EventLog_t4291673388::get_offset_of_doRaiseEvents_5(),
	EventLog_t4291673388::get_offset_of_Impl_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2748 = { sizeof (EventLogImpl_t1934621413), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2749 = { sizeof (EventLogInstaller_t3760666334), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2750 = { sizeof (EventLogTraceListener_t1420763276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2750[2] = 
{
	EventLogTraceListener_t1420763276::get_offset_of_event_log_9(),
	EventLogTraceListener_t1420763276::get_offset_of_name_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2751 = { sizeof (MonitoringDescriptionAttribute_t1602953455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2752 = { sizeof (TraceImplSettings_t708631874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2752[3] = 
{
	TraceImplSettings_t708631874::get_offset_of_AutoFlush_0(),
	TraceImplSettings_t708631874::get_offset_of_IndentSize_1(),
	TraceImplSettings_t708631874::get_offset_of_Listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2753 = { sizeof (TraceSourceInfo_t215197497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2753[3] = 
{
	TraceSourceInfo_t215197497::get_offset_of_name_0(),
	TraceSourceInfo_t215197497::get_offset_of_levels_1(),
	TraceSourceInfo_t215197497::get_offset_of_listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2754 = { sizeof (ExcludeFromCodeCoverageAttribute_t496667626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2755 = { sizeof (ArrayConverter_t1528325343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2756 = { sizeof (ArraySubsetEnumerator_t4276094547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2756[3] = 
{
	ArraySubsetEnumerator_t4276094547::get_offset_of_array_0(),
	ArraySubsetEnumerator_t4276094547::get_offset_of_total_1(),
	ArraySubsetEnumerator_t4276094547::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2757 = { sizeof (AttributeCollection_t3657004228), -1, sizeof(AttributeCollection_t3657004228_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2757[6] = 
{
	AttributeCollection_t3657004228_StaticFields::get_offset_of_Empty_0(),
	AttributeCollection_t3657004228_StaticFields::get_offset_of__defaultAttributes_1(),
	AttributeCollection_t3657004228::get_offset_of__attributes_2(),
	AttributeCollection_t3657004228_StaticFields::get_offset_of_internalSyncObject_3(),
	AttributeCollection_t3657004228::get_offset_of__foundAttributeTypes_4(),
	AttributeCollection_t3657004228::get_offset_of__index_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2758 = { sizeof (AttributeEntry_t1941400523)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2758[2] = 
{
	AttributeEntry_t1941400523::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AttributeEntry_t1941400523::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2759 = { sizeof (BooleanConverter_t2912443493), -1, sizeof(BooleanConverter_t2912443493_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2759[1] = 
{
	BooleanConverter_t2912443493_StaticFields::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2760 = { sizeof (BrowsableAttribute_t2410527788), -1, sizeof(BrowsableAttribute_t2410527788_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2760[4] = 
{
	BrowsableAttribute_t2410527788_StaticFields::get_offset_of_Yes_0(),
	BrowsableAttribute_t2410527788_StaticFields::get_offset_of_No_1(),
	BrowsableAttribute_t2410527788_StaticFields::get_offset_of_Default_2(),
	BrowsableAttribute_t2410527788::get_offset_of_browsable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2761 = { sizeof (ByteConverter_t1260530750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2762 = { sizeof (CharConverter_t428312543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2763 = { sizeof (CollectionConverter_t688279975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2764 = { sizeof (Component_t199574091), -1, sizeof(Component_t199574091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2764[3] = 
{
	Component_t199574091_StaticFields::get_offset_of_EventDisposed_1(),
	Component_t199574091::get_offset_of_site_2(),
	Component_t199574091::get_offset_of_events_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2765 = { sizeof (ComponentCollection_t905588554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2766 = { sizeof (ComponentConverter_t3800479349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2767 = { sizeof (CultureInfoConverter_t1491641283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2767[1] = 
{
	CultureInfoConverter_t1491641283::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2768 = { sizeof (CultureComparer_t1803325138), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2768[1] = 
{
	CultureComparer_t1803325138::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2769 = { sizeof (CultureInfoMapper_t2259522142), -1, sizeof(CultureInfoMapper_t2259522142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2769[1] = 
{
	CultureInfoMapper_t2259522142_StaticFields::get_offset_of_cultureInfoNameMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2770 = { sizeof (CustomTypeDescriptor_t1951842460), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2770[1] = 
{
	CustomTypeDescriptor_t1951842460::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2771 = { sizeof (DateTimeConverter_t3929601263), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2772 = { sizeof (DateTimeOffsetConverter_t1404966537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2773 = { sizeof (DecimalConverter_t2004335812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2774 = { sizeof (DefaultEventAttribute_t3716925660), -1, sizeof(DefaultEventAttribute_t3716925660_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2774[2] = 
{
	DefaultEventAttribute_t3716925660::get_offset_of_name_0(),
	DefaultEventAttribute_t3716925660_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2775 = { sizeof (DefaultValueAttribute_t2624835099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2775[1] = 
{
	DefaultValueAttribute_t2624835099::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2776 = { sizeof (DelegatingTypeDescriptionProvider_t2271330377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2776[1] = 
{
	DelegatingTypeDescriptionProvider_t2271330377::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2777 = { sizeof (DescriptionAttribute_t137529577), -1, sizeof(DescriptionAttribute_t137529577_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2777[2] = 
{
	DescriptionAttribute_t137529577_StaticFields::get_offset_of_Default_0(),
	DescriptionAttribute_t137529577::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2778 = { sizeof (DesignerAttribute_t2648137650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2778[3] = 
{
	DesignerAttribute_t2648137650::get_offset_of_designerTypeName_0(),
	DesignerAttribute_t2648137650::get_offset_of_designerBaseTypeName_1(),
	DesignerAttribute_t2648137650::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2779 = { sizeof (DesignerCategoryAttribute_t2666359784), -1, sizeof(DesignerCategoryAttribute_t2666359784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2779[6] = 
{
	DesignerCategoryAttribute_t2666359784::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2666359784::get_offset_of_typeId_1(),
	DesignerCategoryAttribute_t2666359784_StaticFields::get_offset_of_Component_2(),
	DesignerCategoryAttribute_t2666359784_StaticFields::get_offset_of_Default_3(),
	DesignerCategoryAttribute_t2666359784_StaticFields::get_offset_of_Form_4(),
	DesignerCategoryAttribute_t2666359784_StaticFields::get_offset_of_Generic_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2780 = { sizeof (DesignerSerializationVisibility_t3970740405)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2780[4] = 
{
	DesignerSerializationVisibility_t3970740405::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2781 = { sizeof (DesignerSerializationVisibilityAttribute_t1762642015), -1, sizeof(DesignerSerializationVisibilityAttribute_t1762642015_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2781[5] = 
{
	DesignerSerializationVisibilityAttribute_t1762642015_StaticFields::get_offset_of_Content_0(),
	DesignerSerializationVisibilityAttribute_t1762642015_StaticFields::get_offset_of_Hidden_1(),
	DesignerSerializationVisibilityAttribute_t1762642015_StaticFields::get_offset_of_Visible_2(),
	DesignerSerializationVisibilityAttribute_t1762642015_StaticFields::get_offset_of_Default_3(),
	DesignerSerializationVisibilityAttribute_t1762642015::get_offset_of_visibility_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2782 = { sizeof (DoubleConverter_t940057155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2783 = { sizeof (EditorBrowsableAttribute_t2476059148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2783[1] = 
{
	EditorBrowsableAttribute_t2476059148::get_offset_of_browsableState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2784 = { sizeof (EditorBrowsableState_t3312690462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2784[4] = 
{
	EditorBrowsableState_t3312690462::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2785 = { sizeof (EnumConverter_t3333842933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2785[2] = 
{
	EnumConverter_t3333842933::get_offset_of_values_2(),
	EnumConverter_t3333842933::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2786 = { sizeof (EventDescriptor_t4085417741), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2787 = { sizeof (EventDescriptorCollection_t1443644136), -1, sizeof(EventDescriptorCollection_t1443644136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2787[8] = 
{
	EventDescriptorCollection_t1443644136::get_offset_of_events_0(),
	EventDescriptorCollection_t1443644136::get_offset_of_namedSort_1(),
	EventDescriptorCollection_t1443644136::get_offset_of_comparer_2(),
	EventDescriptorCollection_t1443644136::get_offset_of_eventsOwned_3(),
	EventDescriptorCollection_t1443644136::get_offset_of_needSort_4(),
	EventDescriptorCollection_t1443644136::get_offset_of_eventCount_5(),
	EventDescriptorCollection_t1443644136::get_offset_of_readOnly_6(),
	EventDescriptorCollection_t1443644136_StaticFields::get_offset_of_Empty_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2788 = { sizeof (EventHandlerList_t2044517792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2788[2] = 
{
	EventHandlerList_t2044517792::get_offset_of_head_0(),
	EventHandlerList_t2044517792::get_offset_of_parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2789 = { sizeof (ListEntry_t2876554387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2789[3] = 
{
	ListEntry_t2876554387::get_offset_of_next_0(),
	ListEntry_t2876554387::get_offset_of_key_1(),
	ListEntry_t2876554387::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2790 = { sizeof (ExtenderProvidedPropertyAttribute_t2180029461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2790[3] = 
{
	ExtenderProvidedPropertyAttribute_t2180029461::get_offset_of_extenderProperty_0(),
	ExtenderProvidedPropertyAttribute_t2180029461::get_offset_of_provider_1(),
	ExtenderProvidedPropertyAttribute_t2180029461::get_offset_of_receiverType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2791 = { sizeof (GuidConverter_t1328118411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2792 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2793 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2794 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2795 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2796 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2797 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2798 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2799 = { sizeof (InstallerTypeAttribute_t1618769498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2799[1] = 
{
	InstallerTypeAttribute_t1618769498::get_offset_of__typeName_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
