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
struct ArrayList_t1796983146;
// System.Security.Principal.IPrincipal
struct IPrincipal_t3773042156;
// System.String
struct String_t;
// System.Threading.Timer
struct Timer_t1643261122;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2467355927;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1574938811;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t2433337300;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t4013899455;
// System.Collections.Hashtable
struct Hashtable_t3088047563;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1446291851;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2034206686;
// System.Collections.IList
struct IList_t1272112212;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t1262568499;
// System.Runtime.Remoting.Messaging.CallContextSecurityData
struct CallContextSecurityData_t3243326656;
// System.Object[]
struct ObjectU5BU5D_t2920941075;
// System.Type[]
struct TypeU5BU5D_t3523730040;
// System.Reflection.MethodBase
struct MethodBase_t3593809665;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3273375026;
// System.Runtime.Remoting.Identity
struct Identity_t103440558;
// System.Collections.IDictionary
struct IDictionary_t2369680111;
// System.Exception
struct Exception_t1895951012;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t4005161239;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t3345290183;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2930578735;
// System.String[]
struct StringU5BU5D_t4166740166;
// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_t4059307531;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1232785176;
// System.MarshalByRefObject
struct MarshalByRefObject_t2548916492;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t4001895705;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t662779343;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t3010410384;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1019828879;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1277445635;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t883637920;
// System.Void
struct Void_t237477608;
// System.Char[]
struct CharU5BU5D_t2739800559;
// System.Int32[]
struct Int32U5BU5D_t401338588;
// System.Collections.Generic.List`1<System.Runtime.Remoting.Contexts.IContextProperty>
struct List_1_t3307918386;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t3156665014;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t2800032447;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3140168617;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t4153199545;
// System.DelegateData
struct DelegateData_t3567841730;
// System.Threading.Mutex
struct Mutex_t3971608387;
// System.Threading.Thread
struct Thread_t187976306;
// System.Collections.Queue
struct Queue_t158882569;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t3250500445;
// System.Delegate[]
struct DelegateU5BU5D_t3672592440;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t3779295108;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Byte[]
struct ByteU5BU5D_t3069277512;
// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t3481933602;
// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_t996934784;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t744153457;
// System.IAsyncResult
struct IAsyncResult_t870988552;
// System.AsyncCallback
struct AsyncCallback_t4006376396;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3947878903;

struct Exception_t1895951012_marshaled_pinvoke;
struct AsyncResult_t3481933602_marshaled_pinvoke;
struct Exception_t1895951012_marshaled_com;
struct AsyncResult_t3481933602_marshaled_com;



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
#ifndef DYNAMICPROPERTYCOLLECTION_T3140168617_H
#define DYNAMICPROPERTYCOLLECTION_T3140168617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t3140168617  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t1796983146 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t3140168617, ____properties_0)); }
	inline ArrayList_t1796983146 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t1796983146 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t1796983146 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T3140168617_H
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
#ifndef CALLCONTEXTSECURITYDATA_T3243326656_H
#define CALLCONTEXTSECURITYDATA_T3243326656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextSecurityData
struct  CallContextSecurityData_t3243326656  : public RuntimeObject
{
public:
	// System.Security.Principal.IPrincipal System.Runtime.Remoting.Messaging.CallContextSecurityData::_principal
	RuntimeObject* ____principal_0;

public:
	inline static int32_t get_offset_of__principal_0() { return static_cast<int32_t>(offsetof(CallContextSecurityData_t3243326656, ____principal_0)); }
	inline RuntimeObject* get__principal_0() const { return ____principal_0; }
	inline RuntimeObject** get_address_of__principal_0() { return &____principal_0; }
	inline void set__principal_0(RuntimeObject* value)
	{
		____principal_0 = value;
		Il2CppCodeGenWriteBarrier((&____principal_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTSECURITYDATA_T3243326656_H
#ifndef CALLCONTEXTREMOTINGDATA_T1262568499_H
#define CALLCONTEXTREMOTINGDATA_T1262568499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t1262568499  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t1262568499, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T1262568499_H
#ifndef LEASEMANAGER_T3779295108_H
#define LEASEMANAGER_T3779295108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t3779295108  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t1796983146 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t1643261122 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t3779295108, ____objects_0)); }
	inline ArrayList_t1796983146 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t1796983146 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t1796983146 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t3779295108, ____timer_1)); }
	inline Timer_t1643261122 * get__timer_1() const { return ____timer_1; }
	inline Timer_t1643261122 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t1643261122 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T3779295108_H
#ifndef LEASESINK_T794738839_H
#define LEASESINK_T794738839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t794738839  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t794738839, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T794738839_H
#ifndef CONTEXTLEVELACTIVATOR_T1520308225_H
#define CONTEXTLEVELACTIVATOR_T1520308225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t1520308225  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t1520308225, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T1520308225_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T83582466_H
#define CONSTRUCTIONLEVELACTIVATOR_T83582466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t83582466  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T83582466_H
#ifndef APPDOMAINLEVELACTIVATOR_T3169001580_H
#define APPDOMAINLEVELACTIVATOR_T3169001580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t3169001580  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3169001580, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3169001580, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T3169001580_H
#ifndef DYNAMICPROPERTYREG_T995699775_H
#define DYNAMICPROPERTYREG_T995699775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t995699775  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t995699775, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t995699775, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T995699775_H
#ifndef ACTIVATIONSERVICES_T2341977231_H
#define ACTIVATIONSERVICES_T2341977231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t2341977231  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t2341977231_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t2341977231_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T2341977231_H
#ifndef CROSSAPPDOMAINSINK_T3283360988_H
#define CROSSAPPDOMAINSINK_T3283360988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t3283360988  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3283360988, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t3283360988_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t3088047563 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3283360988_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t3088047563 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t3088047563 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t3088047563 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3283360988_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T3283360988_H
#ifndef CROSSCONTEXTCHANNEL_T2034206686_H
#define CROSSCONTEXTCHANNEL_T2034206686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t2034206686  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T2034206686_H
#ifndef CROSSAPPDOMAINCHANNEL_T3648429433_H
#define CROSSAPPDOMAINCHANNEL_T3648429433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t3648429433  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t3648429433_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t3648429433_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T3648429433_H
#ifndef CROSSAPPDOMAINDATA_T3846654347_H
#define CROSSAPPDOMAINDATA_T3846654347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t3846654347  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3846654347, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3846654347, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3846654347, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T3846654347_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T1627728891_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T1627728891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t1627728891  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t1446291851 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1627728891, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1627728891, ____att_1)); }
	inline SynchronizationAttribute_t1446291851 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t1446291851 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t1446291851 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T1627728891_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T514687449_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T514687449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t514687449  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t1446291851 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t514687449, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t514687449, ____att_1)); }
	inline SynchronizationAttribute_t1446291851 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t1446291851 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t1446291851 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T514687449_H
#ifndef CHANNELSERVICES_T868359000_H
#define CHANNELSERVICES_T868359000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t868359000  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t868359000_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t1796983146 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t1796983146 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2034206686 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t868359000_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t1796983146 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t1796983146 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t1796983146 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t868359000_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t1796983146 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t1796983146 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t1796983146 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t868359000_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2034206686 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2034206686 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2034206686 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t868359000_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t868359000_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T868359000_H
#ifndef ILLOGICALCALLCONTEXT_T4076350558_H
#define ILLOGICALCALLCONTEXT_T4076350558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct  IllogicalCallContext_t4076350558  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.IllogicalCallContext::m_Datastore
	Hashtable_t3088047563 * ___m_Datastore_0;
	// System.Object System.Runtime.Remoting.Messaging.IllogicalCallContext::m_HostContext
	RuntimeObject * ___m_HostContext_1;

public:
	inline static int32_t get_offset_of_m_Datastore_0() { return static_cast<int32_t>(offsetof(IllogicalCallContext_t4076350558, ___m_Datastore_0)); }
	inline Hashtable_t3088047563 * get_m_Datastore_0() const { return ___m_Datastore_0; }
	inline Hashtable_t3088047563 ** get_address_of_m_Datastore_0() { return &___m_Datastore_0; }
	inline void set_m_Datastore_0(Hashtable_t3088047563 * value)
	{
		___m_Datastore_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Datastore_0), value);
	}

	inline static int32_t get_offset_of_m_HostContext_1() { return static_cast<int32_t>(offsetof(IllogicalCallContext_t4076350558, ___m_HostContext_1)); }
	inline RuntimeObject * get_m_HostContext_1() const { return ___m_HostContext_1; }
	inline RuntimeObject ** get_address_of_m_HostContext_1() { return &___m_HostContext_1; }
	inline void set_m_HostContext_1(RuntimeObject * value)
	{
		___m_HostContext_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HostContext_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILLOGICALCALLCONTEXT_T4076350558_H
#ifndef LOGICALCALLCONTEXT_T3273375026_H
#define LOGICALCALLCONTEXT_T3273375026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t3273375026  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::m_Datastore
	Hashtable_t3088047563 * ___m_Datastore_1;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::m_RemotingData
	CallContextRemotingData_t1262568499 * ___m_RemotingData_2;
	// System.Runtime.Remoting.Messaging.CallContextSecurityData System.Runtime.Remoting.Messaging.LogicalCallContext::m_SecurityData
	CallContextSecurityData_t3243326656 * ___m_SecurityData_3;
	// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::m_HostContext
	RuntimeObject * ___m_HostContext_4;
	// System.Boolean System.Runtime.Remoting.Messaging.LogicalCallContext::m_IsCorrelationMgr
	bool ___m_IsCorrelationMgr_5;

public:
	inline static int32_t get_offset_of_m_Datastore_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026, ___m_Datastore_1)); }
	inline Hashtable_t3088047563 * get_m_Datastore_1() const { return ___m_Datastore_1; }
	inline Hashtable_t3088047563 ** get_address_of_m_Datastore_1() { return &___m_Datastore_1; }
	inline void set_m_Datastore_1(Hashtable_t3088047563 * value)
	{
		___m_Datastore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Datastore_1), value);
	}

	inline static int32_t get_offset_of_m_RemotingData_2() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026, ___m_RemotingData_2)); }
	inline CallContextRemotingData_t1262568499 * get_m_RemotingData_2() const { return ___m_RemotingData_2; }
	inline CallContextRemotingData_t1262568499 ** get_address_of_m_RemotingData_2() { return &___m_RemotingData_2; }
	inline void set_m_RemotingData_2(CallContextRemotingData_t1262568499 * value)
	{
		___m_RemotingData_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_RemotingData_2), value);
	}

	inline static int32_t get_offset_of_m_SecurityData_3() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026, ___m_SecurityData_3)); }
	inline CallContextSecurityData_t3243326656 * get_m_SecurityData_3() const { return ___m_SecurityData_3; }
	inline CallContextSecurityData_t3243326656 ** get_address_of_m_SecurityData_3() { return &___m_SecurityData_3; }
	inline void set_m_SecurityData_3(CallContextSecurityData_t3243326656 * value)
	{
		___m_SecurityData_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SecurityData_3), value);
	}

	inline static int32_t get_offset_of_m_HostContext_4() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026, ___m_HostContext_4)); }
	inline RuntimeObject * get_m_HostContext_4() const { return ___m_HostContext_4; }
	inline RuntimeObject ** get_address_of_m_HostContext_4() { return &___m_HostContext_4; }
	inline void set_m_HostContext_4(RuntimeObject * value)
	{
		___m_HostContext_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_HostContext_4), value);
	}

	inline static int32_t get_offset_of_m_IsCorrelationMgr_5() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026, ___m_IsCorrelationMgr_5)); }
	inline bool get_m_IsCorrelationMgr_5() const { return ___m_IsCorrelationMgr_5; }
	inline bool* get_address_of_m_IsCorrelationMgr_5() { return &___m_IsCorrelationMgr_5; }
	inline void set_m_IsCorrelationMgr_5(bool value)
	{
		___m_IsCorrelationMgr_5 = value;
	}
};

struct LogicalCallContext_t3273375026_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.LogicalCallContext::s_callContextType
	Type_t * ___s_callContextType_0;

public:
	inline static int32_t get_offset_of_s_callContextType_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t3273375026_StaticFields, ___s_callContextType_0)); }
	inline Type_t * get_s_callContextType_0() const { return ___s_callContextType_0; }
	inline Type_t ** get_address_of_s_callContextType_0() { return &___s_callContextType_0; }
	inline void set_s_callContextType_0(Type_t * value)
	{
		___s_callContextType_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_callContextType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T3273375026_H
#ifndef SERVEROBJECTTERMINATORSINK_T3709216752_H
#define SERVEROBJECTTERMINATORSINK_T3709216752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t3709216752  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t3709216752, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T3709216752_H
#ifndef ENVOYTERMINATORSINK_T1500060707_H
#define ENVOYTERMINATORSINK_T1500060707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t1500060707  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t1500060707_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t1500060707 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t1500060707_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t1500060707 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t1500060707 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t1500060707 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T1500060707_H
#ifndef HEADER_T171200706_H
#define HEADER_T171200706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t171200706  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T171200706_H
#ifndef METHODCALL_T1509582726_H
#define METHODCALL_T1509582726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t1509582726  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t2920941075* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3523730040* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t3593809665 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t3273375026 * ____callContext_6;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MethodCall::_targetIdentity
	Identity_t103440558 * ____targetIdentity_7;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3523730040* ____genericArguments_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_9;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_10;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____args_3)); }
	inline ObjectU5BU5D_t2920941075* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t2920941075** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t2920941075* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____methodSignature_4)); }
	inline TypeU5BU5D_t3523730040* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3523730040** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3523730040* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____methodBase_5)); }
	inline MethodBase_t3593809665 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t3593809665 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t3593809665 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____callContext_6)); }
	inline LogicalCallContext_t3273375026 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t3273375026 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t3273375026 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__targetIdentity_7() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____targetIdentity_7)); }
	inline Identity_t103440558 * get__targetIdentity_7() const { return ____targetIdentity_7; }
	inline Identity_t103440558 ** get_address_of__targetIdentity_7() { return &____targetIdentity_7; }
	inline void set__targetIdentity_7(Identity_t103440558 * value)
	{
		____targetIdentity_7 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_7), value);
	}

	inline static int32_t get_offset_of__genericArguments_8() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ____genericArguments_8)); }
	inline TypeU5BU5D_t3523730040* get__genericArguments_8() const { return ____genericArguments_8; }
	inline TypeU5BU5D_t3523730040** get_address_of__genericArguments_8() { return &____genericArguments_8; }
	inline void set__genericArguments_8(TypeU5BU5D_t3523730040* value)
	{
		____genericArguments_8 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_8), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ___ExternalProperties_9)); }
	inline RuntimeObject* get_ExternalProperties_9() const { return ___ExternalProperties_9; }
	inline RuntimeObject** get_address_of_ExternalProperties_9() { return &___ExternalProperties_9; }
	inline void set_ExternalProperties_9(RuntimeObject* value)
	{
		___ExternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_9), value);
	}

	inline static int32_t get_offset_of_InternalProperties_10() { return static_cast<int32_t>(offsetof(MethodCall_t1509582726, ___InternalProperties_10)); }
	inline RuntimeObject* get_InternalProperties_10() const { return ___InternalProperties_10; }
	inline RuntimeObject** get_address_of_InternalProperties_10() { return &___InternalProperties_10; }
	inline void set_InternalProperties_10(RuntimeObject* value)
	{
		___InternalProperties_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T1509582726_H
#ifndef METHODRESPONSE_T918915050_H
#define METHODRESPONSE_T918915050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodResponse
struct  MethodResponse_t918915050  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_methodName
	String_t* ____methodName_0;
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_uri
	String_t* ____uri_1;
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_typeName
	String_t* ____typeName_2;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodResponse::_methodBase
	MethodBase_t3593809665 * ____methodBase_3;
	// System.Object System.Runtime.Remoting.Messaging.MethodResponse::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.Exception System.Runtime.Remoting.Messaging.MethodResponse::_exception
	Exception_t1895951012 * ____exception_5;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodResponse::_methodSignature
	TypeU5BU5D_t3523730040* ____methodSignature_6;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.MethodResponse::_inArgInfo
	ArgInfo_t4005161239 * ____inArgInfo_7;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodResponse::_args
	ObjectU5BU5D_t2920941075* ____args_8;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodResponse::_outArgs
	ObjectU5BU5D_t2920941075* ____outArgs_9;
	// System.Runtime.Remoting.Messaging.IMethodCallMessage System.Runtime.Remoting.Messaging.MethodResponse::_callMsg
	RuntimeObject* ____callMsg_10;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodResponse::_callContext
	LogicalCallContext_t3273375026 * ____callContext_11;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MethodResponse::_targetIdentity
	Identity_t103440558 * ____targetIdentity_12;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodResponse::ExternalProperties
	RuntimeObject* ___ExternalProperties_13;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodResponse::InternalProperties
	RuntimeObject* ___InternalProperties_14;

public:
	inline static int32_t get_offset_of__methodName_0() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____methodName_0)); }
	inline String_t* get__methodName_0() const { return ____methodName_0; }
	inline String_t** get_address_of__methodName_0() { return &____methodName_0; }
	inline void set__methodName_0(String_t* value)
	{
		____methodName_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_0), value);
	}

	inline static int32_t get_offset_of__uri_1() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____uri_1)); }
	inline String_t* get__uri_1() const { return ____uri_1; }
	inline String_t** get_address_of__uri_1() { return &____uri_1; }
	inline void set__uri_1(String_t* value)
	{
		____uri_1 = value;
		Il2CppCodeGenWriteBarrier((&____uri_1), value);
	}

	inline static int32_t get_offset_of__typeName_2() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____typeName_2)); }
	inline String_t* get__typeName_2() const { return ____typeName_2; }
	inline String_t** get_address_of__typeName_2() { return &____typeName_2; }
	inline void set__typeName_2(String_t* value)
	{
		____typeName_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_2), value);
	}

	inline static int32_t get_offset_of__methodBase_3() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____methodBase_3)); }
	inline MethodBase_t3593809665 * get__methodBase_3() const { return ____methodBase_3; }
	inline MethodBase_t3593809665 ** get_address_of__methodBase_3() { return &____methodBase_3; }
	inline void set__methodBase_3(MethodBase_t3593809665 * value)
	{
		____methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__exception_5() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____exception_5)); }
	inline Exception_t1895951012 * get__exception_5() const { return ____exception_5; }
	inline Exception_t1895951012 ** get_address_of__exception_5() { return &____exception_5; }
	inline void set__exception_5(Exception_t1895951012 * value)
	{
		____exception_5 = value;
		Il2CppCodeGenWriteBarrier((&____exception_5), value);
	}

	inline static int32_t get_offset_of__methodSignature_6() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____methodSignature_6)); }
	inline TypeU5BU5D_t3523730040* get__methodSignature_6() const { return ____methodSignature_6; }
	inline TypeU5BU5D_t3523730040** get_address_of__methodSignature_6() { return &____methodSignature_6; }
	inline void set__methodSignature_6(TypeU5BU5D_t3523730040* value)
	{
		____methodSignature_6 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_6), value);
	}

	inline static int32_t get_offset_of__inArgInfo_7() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____inArgInfo_7)); }
	inline ArgInfo_t4005161239 * get__inArgInfo_7() const { return ____inArgInfo_7; }
	inline ArgInfo_t4005161239 ** get_address_of__inArgInfo_7() { return &____inArgInfo_7; }
	inline void set__inArgInfo_7(ArgInfo_t4005161239 * value)
	{
		____inArgInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_7), value);
	}

	inline static int32_t get_offset_of__args_8() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____args_8)); }
	inline ObjectU5BU5D_t2920941075* get__args_8() const { return ____args_8; }
	inline ObjectU5BU5D_t2920941075** get_address_of__args_8() { return &____args_8; }
	inline void set__args_8(ObjectU5BU5D_t2920941075* value)
	{
		____args_8 = value;
		Il2CppCodeGenWriteBarrier((&____args_8), value);
	}

	inline static int32_t get_offset_of__outArgs_9() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____outArgs_9)); }
	inline ObjectU5BU5D_t2920941075* get__outArgs_9() const { return ____outArgs_9; }
	inline ObjectU5BU5D_t2920941075** get_address_of__outArgs_9() { return &____outArgs_9; }
	inline void set__outArgs_9(ObjectU5BU5D_t2920941075* value)
	{
		____outArgs_9 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_9), value);
	}

	inline static int32_t get_offset_of__callMsg_10() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____callMsg_10)); }
	inline RuntimeObject* get__callMsg_10() const { return ____callMsg_10; }
	inline RuntimeObject** get_address_of__callMsg_10() { return &____callMsg_10; }
	inline void set__callMsg_10(RuntimeObject* value)
	{
		____callMsg_10 = value;
		Il2CppCodeGenWriteBarrier((&____callMsg_10), value);
	}

	inline static int32_t get_offset_of__callContext_11() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____callContext_11)); }
	inline LogicalCallContext_t3273375026 * get__callContext_11() const { return ____callContext_11; }
	inline LogicalCallContext_t3273375026 ** get_address_of__callContext_11() { return &____callContext_11; }
	inline void set__callContext_11(LogicalCallContext_t3273375026 * value)
	{
		____callContext_11 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_11), value);
	}

	inline static int32_t get_offset_of__targetIdentity_12() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ____targetIdentity_12)); }
	inline Identity_t103440558 * get__targetIdentity_12() const { return ____targetIdentity_12; }
	inline Identity_t103440558 ** get_address_of__targetIdentity_12() { return &____targetIdentity_12; }
	inline void set__targetIdentity_12(Identity_t103440558 * value)
	{
		____targetIdentity_12 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_12), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_13() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ___ExternalProperties_13)); }
	inline RuntimeObject* get_ExternalProperties_13() const { return ___ExternalProperties_13; }
	inline RuntimeObject** get_address_of_ExternalProperties_13() { return &___ExternalProperties_13; }
	inline void set_ExternalProperties_13(RuntimeObject* value)
	{
		___ExternalProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_13), value);
	}

	inline static int32_t get_offset_of_InternalProperties_14() { return static_cast<int32_t>(offsetof(MethodResponse_t918915050, ___InternalProperties_14)); }
	inline RuntimeObject* get_InternalProperties_14() const { return ___InternalProperties_14; }
	inline RuntimeObject** get_address_of_InternalProperties_14() { return &___InternalProperties_14; }
	inline void set_InternalProperties_14(RuntimeObject* value)
	{
		___InternalProperties_14 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRESPONSE_T918915050_H
#ifndef MESSAGEDICTIONARY_T4059307531_H
#define MESSAGEDICTIONARY_T4059307531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MessageDictionary
struct  MessageDictionary_t4059307531  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_t4166740166* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_t4059307531, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_t4059307531, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_t4059307531, ____methodKeys_2)); }
	inline StringU5BU5D_t4166740166* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t4166740166** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t4166740166* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_t4059307531, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEDICTIONARY_T4059307531_H
#ifndef DICTIONARYENUMERATOR_T3758462313_H
#define DICTIONARYENUMERATOR_T3758462313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t3758462313  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MessageDictionary System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_methodDictionary
	MessageDictionary_t4059307531 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3758462313, ____methodDictionary_0)); }
	inline MessageDictionary_t4059307531 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MessageDictionary_t4059307531 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MessageDictionary_t4059307531 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3758462313, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3758462313, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T3758462313_H
#ifndef STACKBUILDERSINK_T1003323427_H
#define STACKBUILDERSINK_T1003323427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t1003323427  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t2548916492 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t4001895705 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t1003323427, ____target_0)); }
	inline MarshalByRefObject_t2548916492 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t2548916492 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t2548916492 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t1003323427, ____rp_1)); }
	inline RealProxy_t4001895705 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t4001895705 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t4001895705 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T1003323427_H
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
#ifndef SINKPROVIDERDATA_T1175672818_H
#define SINKPROVIDERDATA_T1175672818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t1175672818  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t1796983146 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t3088047563 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t1175672818, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t1175672818, ___children_1)); }
	inline ArrayList_t1796983146 * get_children_1() const { return ___children_1; }
	inline ArrayList_t1796983146 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t1796983146 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t1175672818, ___properties_2)); }
	inline Hashtable_t3088047563 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t3088047563 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t3088047563 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T1175672818_H
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
#ifndef REMOTINGSURROGATESELECTOR_T2088696328_H
#define REMOTINGSURROGATESELECTOR_T2088696328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t2088696328  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2088696328, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t2088696328_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t3010410384 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t1019828879 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2088696328_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2088696328_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t3010410384 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t3010410384 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t3010410384 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2088696328_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t1019828879 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t1019828879 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t1019828879 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T2088696328_H
#ifndef REMOTINGSURROGATE_T1019828879_H
#define REMOTINGSURROGATE_T1019828879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t1019828879  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T1019828879_H
#ifndef OBJREFSURROGATE_T3010410384_H
#define OBJREFSURROGATE_T3010410384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t3010410384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T3010410384_H
#ifndef RETURNMESSAGE_T379977173_H
#define RETURNMESSAGE_T379977173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t379977173  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t2920941075* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t2920941075* ____args_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t3273375026 * ____callCtx_2;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_3;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_4;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t1895951012 * ____exception_5;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t3593809665 * ____methodBase_6;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_7;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t3523730040* ____methodSignature_8;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_9;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t883637920 * ____properties_10;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.ReturnMessage::_targetIdentity
	Identity_t103440558 * ____targetIdentity_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t4005161239 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____outArgs_0)); }
	inline ObjectU5BU5D_t2920941075* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t2920941075** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t2920941075* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____args_1)); }
	inline ObjectU5BU5D_t2920941075* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t2920941075** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t2920941075* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__callCtx_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____callCtx_2)); }
	inline LogicalCallContext_t3273375026 * get__callCtx_2() const { return ____callCtx_2; }
	inline LogicalCallContext_t3273375026 ** get_address_of__callCtx_2() { return &____callCtx_2; }
	inline void set__callCtx_2(LogicalCallContext_t3273375026 * value)
	{
		____callCtx_2 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_2), value);
	}

	inline static int32_t get_offset_of__returnValue_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____returnValue_3)); }
	inline RuntimeObject * get__returnValue_3() const { return ____returnValue_3; }
	inline RuntimeObject ** get_address_of__returnValue_3() { return &____returnValue_3; }
	inline void set__returnValue_3(RuntimeObject * value)
	{
		____returnValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_3), value);
	}

	inline static int32_t get_offset_of__uri_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____uri_4)); }
	inline String_t* get__uri_4() const { return ____uri_4; }
	inline String_t** get_address_of__uri_4() { return &____uri_4; }
	inline void set__uri_4(String_t* value)
	{
		____uri_4 = value;
		Il2CppCodeGenWriteBarrier((&____uri_4), value);
	}

	inline static int32_t get_offset_of__exception_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____exception_5)); }
	inline Exception_t1895951012 * get__exception_5() const { return ____exception_5; }
	inline Exception_t1895951012 ** get_address_of__exception_5() { return &____exception_5; }
	inline void set__exception_5(Exception_t1895951012 * value)
	{
		____exception_5 = value;
		Il2CppCodeGenWriteBarrier((&____exception_5), value);
	}

	inline static int32_t get_offset_of__methodBase_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____methodBase_6)); }
	inline MethodBase_t3593809665 * get__methodBase_6() const { return ____methodBase_6; }
	inline MethodBase_t3593809665 ** get_address_of__methodBase_6() { return &____methodBase_6; }
	inline void set__methodBase_6(MethodBase_t3593809665 * value)
	{
		____methodBase_6 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_6), value);
	}

	inline static int32_t get_offset_of__methodName_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____methodName_7)); }
	inline String_t* get__methodName_7() const { return ____methodName_7; }
	inline String_t** get_address_of__methodName_7() { return &____methodName_7; }
	inline void set__methodName_7(String_t* value)
	{
		____methodName_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_7), value);
	}

	inline static int32_t get_offset_of__methodSignature_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____methodSignature_8)); }
	inline TypeU5BU5D_t3523730040* get__methodSignature_8() const { return ____methodSignature_8; }
	inline TypeU5BU5D_t3523730040** get_address_of__methodSignature_8() { return &____methodSignature_8; }
	inline void set__methodSignature_8(TypeU5BU5D_t3523730040* value)
	{
		____methodSignature_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_8), value);
	}

	inline static int32_t get_offset_of__typeName_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____typeName_9)); }
	inline String_t* get__typeName_9() const { return ____typeName_9; }
	inline String_t** get_address_of__typeName_9() { return &____typeName_9; }
	inline void set__typeName_9(String_t* value)
	{
		____typeName_9 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_9), value);
	}

	inline static int32_t get_offset_of__properties_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____properties_10)); }
	inline MethodReturnDictionary_t883637920 * get__properties_10() const { return ____properties_10; }
	inline MethodReturnDictionary_t883637920 ** get_address_of__properties_10() { return &____properties_10; }
	inline void set__properties_10(MethodReturnDictionary_t883637920 * value)
	{
		____properties_10 = value;
		Il2CppCodeGenWriteBarrier((&____properties_10), value);
	}

	inline static int32_t get_offset_of__targetIdentity_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____targetIdentity_11)); }
	inline Identity_t103440558 * get__targetIdentity_11() const { return ____targetIdentity_11; }
	inline Identity_t103440558 ** get_address_of__targetIdentity_11() { return &____targetIdentity_11; }
	inline void set__targetIdentity_11(Identity_t103440558 * value)
	{
		____targetIdentity_11 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t379977173, ____inArgInfo_12)); }
	inline ArgInfo_t4005161239 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t4005161239 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t4005161239 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T379977173_H
#ifndef SERVERCONTEXTTERMINATORSINK_T3012469822_H
#define SERVERCONTEXTTERMINATORSINK_T3012469822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t3012469822  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T3012469822_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef CONTEXTBOUNDOBJECT_T2767086877_H
#define CONTEXTBOUNDOBJECT_T2767086877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t2767086877  : public MarshalByRefObject_t2548916492
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T2767086877_H
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
#ifndef REMOTEACTIVATOR_T184612732_H
#define REMOTEACTIVATOR_T184612732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t184612732  : public MarshalByRefObject_t2548916492
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T184612732_H
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
#ifndef CONSTRUCTIONCALLDICTIONARY_T181815299_H
#define CONSTRUCTIONCALLDICTIONARY_T181815299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t181815299  : public MessageDictionary_t4059307531
{
public:

public:
};

struct ConstructionCallDictionary_t181815299_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t4166740166* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t181815299_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_t4166740166* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_t4166740166** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_t4166740166* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T181815299_H
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
#ifndef CONTEXTATTRIBUTE_T998651826_H
#define CONTEXTATTRIBUTE_T998651826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t998651826  : public Attribute_t2236125943
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t998651826, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T998651826_H
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
#ifndef MCMDICTIONARY_T996934784_H
#define MCMDICTIONARY_T996934784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MCMDictionary
struct  MCMDictionary_t996934784  : public MessageDictionary_t4059307531
{
public:

public:
};

struct MCMDictionary_t996934784_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_t4166740166* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_t996934784_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_t4166740166* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_t4166740166** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_t4166740166* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MCMDICTIONARY_T996934784_H
#ifndef METHODRETURNDICTIONARY_T883637920_H
#define METHODRETURNDICTIONARY_T883637920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t883637920  : public MessageDictionary_t4059307531
{
public:

public:
};

struct MethodReturnDictionary_t883637920_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t4166740166* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t4166740166* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t883637920_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_t4166740166* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_t4166740166** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_t4166740166* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_4), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t883637920_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_t4166740166* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_t4166740166** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_t4166740166* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T883637920_H
#ifndef READER_T1261912615_H
#define READER_T1261912615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
struct  Reader_t1261912615 
{
public:
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.LogicalCallContext/Reader::m_ctx
	LogicalCallContext_t3273375026 * ___m_ctx_0;

public:
	inline static int32_t get_offset_of_m_ctx_0() { return static_cast<int32_t>(offsetof(Reader_t1261912615, ___m_ctx_0)); }
	inline LogicalCallContext_t3273375026 * get_m_ctx_0() const { return ___m_ctx_0; }
	inline LogicalCallContext_t3273375026 ** get_address_of_m_ctx_0() { return &___m_ctx_0; }
	inline void set_m_ctx_0(LogicalCallContext_t3273375026 * value)
	{
		___m_ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ctx_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
struct Reader_t1261912615_marshaled_pinvoke
{
	LogicalCallContext_t3273375026 * ___m_ctx_0;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
struct Reader_t1261912615_marshaled_com
{
	LogicalCallContext_t3273375026 * ___m_ctx_0;
};
#endif // READER_T1261912615_H
#ifndef ONEWAYATTRIBUTE_T3888769629_H
#define ONEWAYATTRIBUTE_T3888769629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.OneWayAttribute
struct  OneWayAttribute_t3888769629  : public Attribute_t2236125943
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEWAYATTRIBUTE_T3888769629_H
#ifndef CONTEXTCALLBACKOBJECT_T4153199545_H
#define CONTEXTCALLBACKOBJECT_T4153199545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t4153199545  : public ContextBoundObject_t2767086877
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T4153199545_H
#ifndef CONTEXT_T4062614105_H
#define CONTEXT_T4062614105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t4062614105  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	uintptr_t ___static_data_2;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::data
	uintptr_t ___data_3;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_6;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_7;
	// System.Collections.Generic.List`1<System.Runtime.Remoting.Contexts.IContextProperty> System.Runtime.Remoting.Contexts.Context::context_properties
	List_1_t3307918386 * ___context_properties_8;
	// System.LocalDataStoreHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.Remoting.Contexts.Context::_localDataStore
	LocalDataStoreHolder_t3156665014 * ____localDataStore_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t3140168617 * ___context_dynamic_properties_13;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t4153199545 * ___callback_object_14;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___static_data_2)); }
	inline uintptr_t get_static_data_2() const { return ___static_data_2; }
	inline uintptr_t* get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(uintptr_t value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___data_3)); }
	inline uintptr_t get_data_3() const { return ___data_3; }
	inline uintptr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(uintptr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_6() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___server_context_sink_chain_6)); }
	inline RuntimeObject* get_server_context_sink_chain_6() const { return ___server_context_sink_chain_6; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_6() { return &___server_context_sink_chain_6; }
	inline void set_server_context_sink_chain_6(RuntimeObject* value)
	{
		___server_context_sink_chain_6 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_6), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_7() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___client_context_sink_chain_7)); }
	inline RuntimeObject* get_client_context_sink_chain_7() const { return ___client_context_sink_chain_7; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_7() { return &___client_context_sink_chain_7; }
	inline void set_client_context_sink_chain_7(RuntimeObject* value)
	{
		___client_context_sink_chain_7 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_7), value);
	}

	inline static int32_t get_offset_of_context_properties_8() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___context_properties_8)); }
	inline List_1_t3307918386 * get_context_properties_8() const { return ___context_properties_8; }
	inline List_1_t3307918386 ** get_address_of_context_properties_8() { return &___context_properties_8; }
	inline void set_context_properties_8(List_1_t3307918386 * value)
	{
		___context_properties_8 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_8), value);
	}

	inline static int32_t get_offset_of__localDataStore_10() { return static_cast<int32_t>(offsetof(Context_t4062614105, ____localDataStore_10)); }
	inline LocalDataStoreHolder_t3156665014 * get__localDataStore_10() const { return ____localDataStore_10; }
	inline LocalDataStoreHolder_t3156665014 ** get_address_of__localDataStore_10() { return &____localDataStore_10; }
	inline void set__localDataStore_10(LocalDataStoreHolder_t3156665014 * value)
	{
		____localDataStore_10 = value;
		Il2CppCodeGenWriteBarrier((&____localDataStore_10), value);
	}

	inline static int32_t get_offset_of_context_dynamic_properties_13() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___context_dynamic_properties_13)); }
	inline DynamicPropertyCollection_t3140168617 * get_context_dynamic_properties_13() const { return ___context_dynamic_properties_13; }
	inline DynamicPropertyCollection_t3140168617 ** get_address_of_context_dynamic_properties_13() { return &___context_dynamic_properties_13; }
	inline void set_context_dynamic_properties_13(DynamicPropertyCollection_t3140168617 * value)
	{
		___context_dynamic_properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_13), value);
	}

	inline static int32_t get_offset_of_callback_object_14() { return static_cast<int32_t>(offsetof(Context_t4062614105, ___callback_object_14)); }
	inline ContextCallbackObject_t4153199545 * get_callback_object_14() const { return ___callback_object_14; }
	inline ContextCallbackObject_t4153199545 ** get_address_of_callback_object_14() { return &___callback_object_14; }
	inline void set_callback_object_14(ContextCallbackObject_t4153199545 * value)
	{
		___callback_object_14 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_14), value);
	}
};

struct Context_t4062614105_StaticFields
{
public:
	// System.Object[] System.Runtime.Remoting.Contexts.Context::local_slots
	ObjectU5BU5D_t2920941075* ___local_slots_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_5;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.LocalDataStoreMgr System.Runtime.Remoting.Contexts.Context::_localDataStoreMgr
	LocalDataStoreMgr_t2800032447 * ____localDataStoreMgr_11;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t3140168617 * ___global_dynamic_properties_12;

public:
	inline static int32_t get_offset_of_local_slots_4() { return static_cast<int32_t>(offsetof(Context_t4062614105_StaticFields, ___local_slots_4)); }
	inline ObjectU5BU5D_t2920941075* get_local_slots_4() const { return ___local_slots_4; }
	inline ObjectU5BU5D_t2920941075** get_address_of_local_slots_4() { return &___local_slots_4; }
	inline void set_local_slots_4(ObjectU5BU5D_t2920941075* value)
	{
		___local_slots_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_4), value);
	}

	inline static int32_t get_offset_of_default_server_context_sink_5() { return static_cast<int32_t>(offsetof(Context_t4062614105_StaticFields, ___default_server_context_sink_5)); }
	inline RuntimeObject* get_default_server_context_sink_5() const { return ___default_server_context_sink_5; }
	inline RuntimeObject** get_address_of_default_server_context_sink_5() { return &___default_server_context_sink_5; }
	inline void set_default_server_context_sink_5(RuntimeObject* value)
	{
		___default_server_context_sink_5 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_5), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t4062614105_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of__localDataStoreMgr_11() { return static_cast<int32_t>(offsetof(Context_t4062614105_StaticFields, ____localDataStoreMgr_11)); }
	inline LocalDataStoreMgr_t2800032447 * get__localDataStoreMgr_11() const { return ____localDataStoreMgr_11; }
	inline LocalDataStoreMgr_t2800032447 ** get_address_of__localDataStoreMgr_11() { return &____localDataStoreMgr_11; }
	inline void set__localDataStoreMgr_11(LocalDataStoreMgr_t2800032447 * value)
	{
		____localDataStoreMgr_11 = value;
		Il2CppCodeGenWriteBarrier((&____localDataStoreMgr_11), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t4062614105_StaticFields, ___global_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t3140168617 * get_global_dynamic_properties_12() const { return ___global_dynamic_properties_12; }
	inline DynamicPropertyCollection_t3140168617 ** get_address_of_global_dynamic_properties_12() { return &___global_dynamic_properties_12; }
	inline void set_global_dynamic_properties_12(DynamicPropertyCollection_t3140168617 * value)
	{
		___global_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Contexts.Context
struct Context_t4062614105_marshaled_pinvoke
{
	int32_t ___domain_id_0;
	int32_t ___context_id_1;
	uintptr_t ___static_data_2;
	uintptr_t ___data_3;
	RuntimeObject* ___server_context_sink_chain_6;
	RuntimeObject* ___client_context_sink_chain_7;
	List_1_t3307918386 * ___context_properties_8;
	LocalDataStoreHolder_t3156665014 * ____localDataStore_10;
	DynamicPropertyCollection_t3140168617 * ___context_dynamic_properties_13;
	ContextCallbackObject_t4153199545 * ___callback_object_14;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Contexts.Context
struct Context_t4062614105_marshaled_com
{
	int32_t ___domain_id_0;
	int32_t ___context_id_1;
	uintptr_t ___static_data_2;
	uintptr_t ___data_3;
	RuntimeObject* ___server_context_sink_chain_6;
	RuntimeObject* ___client_context_sink_chain_7;
	List_1_t3307918386 * ___context_properties_8;
	LocalDataStoreHolder_t3156665014 * ____localDataStore_10;
	DynamicPropertyCollection_t3140168617 * ___context_dynamic_properties_13;
	ContextCallbackObject_t4153199545 * ___callback_object_14;
};
#endif // CONTEXT_T4062614105_H
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
#ifndef LEASESTATE_T4103392951_H
#define LEASESTATE_T4103392951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseState
struct  LeaseState_t4103392951 
{
public:
	// System.Int32 System.Runtime.Remoting.Lifetime.LeaseState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaseState_t4103392951, ___value___2)); }
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
#endif // LEASESTATE_T4103392951_H
#ifndef URLATTRIBUTE_T2405879457_H
#define URLATTRIBUTE_T2405879457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t2405879457  : public ContextAttribute_t998651826
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t2405879457, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T2405879457_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T1446291851_H
#define SYNCHRONIZATIONATTRIBUTE_T1446291851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t1446291851  : public ContextAttribute_t998651826
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t3971608387 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t187976306 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t1446291851, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t1446291851, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t1446291851, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t1446291851, ____mutex_4)); }
	inline Mutex_t3971608387 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t3971608387 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t3971608387 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t1446291851, ____ownerThread_5)); }
	inline Thread_t187976306 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t187976306 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t187976306 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T1446291851_H
#ifndef CALLTYPE_T2397109214_H
#define CALLTYPE_T2397109214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallType
struct  CallType_t2397109214 
{
public:
	// System.Int32 System.Runtime.Remoting.Messaging.CallType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallType_t2397109214, ___value___2)); }
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
#endif // CALLTYPE_T2397109214_H
#ifndef TIMESPAN_T597886667_H
#define TIMESPAN_T597886667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t597886667 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t597886667_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t597886667  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t597886667  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t597886667  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667_StaticFields, ___Zero_0)); }
	inline TimeSpan_t597886667  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t597886667 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t597886667  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t597886667  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t597886667 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t597886667  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t597886667  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t597886667 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t597886667  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t597886667_StaticFields, ____legacyMode_5)); }
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
#endif // TIMESPAN_T597886667_H
#ifndef LEASE_T2163542704_H
#define LEASE_T2163542704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t2163542704  : public MarshalByRefObject_t2548916492
{
public:
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t683409619  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t597886667  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t597886667  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t597886667  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t1796983146 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t158882569 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t3250500445 * ____renewalDelegate_8;

public:
	inline static int32_t get_offset_of__leaseExpireTime_1() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____leaseExpireTime_1)); }
	inline DateTime_t683409619  get__leaseExpireTime_1() const { return ____leaseExpireTime_1; }
	inline DateTime_t683409619 * get_address_of__leaseExpireTime_1() { return &____leaseExpireTime_1; }
	inline void set__leaseExpireTime_1(DateTime_t683409619  value)
	{
		____leaseExpireTime_1 = value;
	}

	inline static int32_t get_offset_of__currentState_2() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____currentState_2)); }
	inline int32_t get__currentState_2() const { return ____currentState_2; }
	inline int32_t* get_address_of__currentState_2() { return &____currentState_2; }
	inline void set__currentState_2(int32_t value)
	{
		____currentState_2 = value;
	}

	inline static int32_t get_offset_of__initialLeaseTime_3() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____initialLeaseTime_3)); }
	inline TimeSpan_t597886667  get__initialLeaseTime_3() const { return ____initialLeaseTime_3; }
	inline TimeSpan_t597886667 * get_address_of__initialLeaseTime_3() { return &____initialLeaseTime_3; }
	inline void set__initialLeaseTime_3(TimeSpan_t597886667  value)
	{
		____initialLeaseTime_3 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_4() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____renewOnCallTime_4)); }
	inline TimeSpan_t597886667  get__renewOnCallTime_4() const { return ____renewOnCallTime_4; }
	inline TimeSpan_t597886667 * get_address_of__renewOnCallTime_4() { return &____renewOnCallTime_4; }
	inline void set__renewOnCallTime_4(TimeSpan_t597886667  value)
	{
		____renewOnCallTime_4 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_5() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____sponsorshipTimeout_5)); }
	inline TimeSpan_t597886667  get__sponsorshipTimeout_5() const { return ____sponsorshipTimeout_5; }
	inline TimeSpan_t597886667 * get_address_of__sponsorshipTimeout_5() { return &____sponsorshipTimeout_5; }
	inline void set__sponsorshipTimeout_5(TimeSpan_t597886667  value)
	{
		____sponsorshipTimeout_5 = value;
	}

	inline static int32_t get_offset_of__sponsors_6() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____sponsors_6)); }
	inline ArrayList_t1796983146 * get__sponsors_6() const { return ____sponsors_6; }
	inline ArrayList_t1796983146 ** get_address_of__sponsors_6() { return &____sponsors_6; }
	inline void set__sponsors_6(ArrayList_t1796983146 * value)
	{
		____sponsors_6 = value;
		Il2CppCodeGenWriteBarrier((&____sponsors_6), value);
	}

	inline static int32_t get_offset_of__renewingSponsors_7() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____renewingSponsors_7)); }
	inline Queue_t158882569 * get__renewingSponsors_7() const { return ____renewingSponsors_7; }
	inline Queue_t158882569 ** get_address_of__renewingSponsors_7() { return &____renewingSponsors_7; }
	inline void set__renewingSponsors_7(Queue_t158882569 * value)
	{
		____renewingSponsors_7 = value;
		Il2CppCodeGenWriteBarrier((&____renewingSponsors_7), value);
	}

	inline static int32_t get_offset_of__renewalDelegate_8() { return static_cast<int32_t>(offsetof(Lease_t2163542704, ____renewalDelegate_8)); }
	inline RenewalDelegate_t3250500445 * get__renewalDelegate_8() const { return ____renewalDelegate_8; }
	inline RenewalDelegate_t3250500445 ** get_address_of__renewalDelegate_8() { return &____renewalDelegate_8; }
	inline void set__renewalDelegate_8(RenewalDelegate_t3250500445 * value)
	{
		____renewalDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____renewalDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASE_T2163542704_H
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
#ifndef LIFETIMESERVICES_T3062659946_H
#define LIFETIMESERVICES_T3062659946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t3062659946  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t3062659946_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t597886667  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t597886667  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t597886667  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t597886667  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t3779295108 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t3062659946_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t597886667  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t597886667 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t597886667  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t3062659946_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t597886667  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t597886667 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t597886667  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t3062659946_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t597886667  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t597886667 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t597886667  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t3062659946_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t597886667  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t597886667 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t597886667  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t3062659946_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t3779295108 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t3779295108 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t3779295108 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T3062659946_H
#ifndef MONOMETHODMESSAGE_T2878820760_H
#define MONOMETHODMESSAGE_T2878820760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t2878820760  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t2920941075* ___args_1;
	// System.String[] System.Runtime.Remoting.Messaging.MonoMethodMessage::names
	StringU5BU5D_t4166740166* ___names_2;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t3069277512* ___arg_types_3;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t3273375026 * ___ctx_4;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_5;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t1895951012 * ___exc_6;
	// System.Runtime.Remoting.Messaging.AsyncResult System.Runtime.Remoting.Messaging.MonoMethodMessage::asyncResult
	AsyncResult_t3481933602 * ___asyncResult_7;
	// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::call_type
	int32_t ___call_type_8;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_9;
	// System.Runtime.Remoting.Messaging.MCMDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::properties
	MCMDictionary_t996934784 * ___properties_10;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t3523730040* ___methodSignature_11;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MonoMethodMessage::identity
	Identity_t103440558 * ___identity_12;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___args_1)); }
	inline ObjectU5BU5D_t2920941075* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t2920941075** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t2920941075* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___names_2)); }
	inline StringU5BU5D_t4166740166* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t4166740166** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t4166740166* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_arg_types_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___arg_types_3)); }
	inline ByteU5BU5D_t3069277512* get_arg_types_3() const { return ___arg_types_3; }
	inline ByteU5BU5D_t3069277512** get_address_of_arg_types_3() { return &___arg_types_3; }
	inline void set_arg_types_3(ByteU5BU5D_t3069277512* value)
	{
		___arg_types_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_3), value);
	}

	inline static int32_t get_offset_of_ctx_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___ctx_4)); }
	inline LogicalCallContext_t3273375026 * get_ctx_4() const { return ___ctx_4; }
	inline LogicalCallContext_t3273375026 ** get_address_of_ctx_4() { return &___ctx_4; }
	inline void set_ctx_4(LogicalCallContext_t3273375026 * value)
	{
		___ctx_4 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_4), value);
	}

	inline static int32_t get_offset_of_rval_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___rval_5)); }
	inline RuntimeObject * get_rval_5() const { return ___rval_5; }
	inline RuntimeObject ** get_address_of_rval_5() { return &___rval_5; }
	inline void set_rval_5(RuntimeObject * value)
	{
		___rval_5 = value;
		Il2CppCodeGenWriteBarrier((&___rval_5), value);
	}

	inline static int32_t get_offset_of_exc_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___exc_6)); }
	inline Exception_t1895951012 * get_exc_6() const { return ___exc_6; }
	inline Exception_t1895951012 ** get_address_of_exc_6() { return &___exc_6; }
	inline void set_exc_6(Exception_t1895951012 * value)
	{
		___exc_6 = value;
		Il2CppCodeGenWriteBarrier((&___exc_6), value);
	}

	inline static int32_t get_offset_of_asyncResult_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___asyncResult_7)); }
	inline AsyncResult_t3481933602 * get_asyncResult_7() const { return ___asyncResult_7; }
	inline AsyncResult_t3481933602 ** get_address_of_asyncResult_7() { return &___asyncResult_7; }
	inline void set_asyncResult_7(AsyncResult_t3481933602 * value)
	{
		___asyncResult_7 = value;
		Il2CppCodeGenWriteBarrier((&___asyncResult_7), value);
	}

	inline static int32_t get_offset_of_call_type_8() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___call_type_8)); }
	inline int32_t get_call_type_8() const { return ___call_type_8; }
	inline int32_t* get_address_of_call_type_8() { return &___call_type_8; }
	inline void set_call_type_8(int32_t value)
	{
		___call_type_8 = value;
	}

	inline static int32_t get_offset_of_uri_9() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___uri_9)); }
	inline String_t* get_uri_9() const { return ___uri_9; }
	inline String_t** get_address_of_uri_9() { return &___uri_9; }
	inline void set_uri_9(String_t* value)
	{
		___uri_9 = value;
		Il2CppCodeGenWriteBarrier((&___uri_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___properties_10)); }
	inline MCMDictionary_t996934784 * get_properties_10() const { return ___properties_10; }
	inline MCMDictionary_t996934784 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(MCMDictionary_t996934784 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_methodSignature_11() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___methodSignature_11)); }
	inline TypeU5BU5D_t3523730040* get_methodSignature_11() const { return ___methodSignature_11; }
	inline TypeU5BU5D_t3523730040** get_address_of_methodSignature_11() { return &___methodSignature_11; }
	inline void set_methodSignature_11(TypeU5BU5D_t3523730040* value)
	{
		___methodSignature_11 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_11), value);
	}

	inline static int32_t get_offset_of_identity_12() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760, ___identity_12)); }
	inline Identity_t103440558 * get_identity_12() const { return ___identity_12; }
	inline Identity_t103440558 ** get_address_of_identity_12() { return &___identity_12; }
	inline void set_identity_12(Identity_t103440558 * value)
	{
		___identity_12 = value;
		Il2CppCodeGenWriteBarrier((&___identity_12), value);
	}
};

struct MonoMethodMessage_t2878820760_StaticFields
{
public:
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::CallContextKey
	String_t* ___CallContextKey_13;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::UriKey
	String_t* ___UriKey_14;

public:
	inline static int32_t get_offset_of_CallContextKey_13() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760_StaticFields, ___CallContextKey_13)); }
	inline String_t* get_CallContextKey_13() const { return ___CallContextKey_13; }
	inline String_t** get_address_of_CallContextKey_13() { return &___CallContextKey_13; }
	inline void set_CallContextKey_13(String_t* value)
	{
		___CallContextKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___CallContextKey_13), value);
	}

	inline static int32_t get_offset_of_UriKey_14() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2878820760_StaticFields, ___UriKey_14)); }
	inline String_t* get_UriKey_14() const { return ___UriKey_14; }
	inline String_t** get_address_of_UriKey_14() { return &___UriKey_14; }
	inline void set_UriKey_14(String_t* value)
	{
		___UriKey_14 = value;
		Il2CppCodeGenWriteBarrier((&___UriKey_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2878820760_marshaled_pinvoke
{
	MonoMethod_t * ___method_0;
	ObjectU5BU5D_t2920941075* ___args_1;
	char** ___names_2;
	uint8_t* ___arg_types_3;
	LogicalCallContext_t3273375026 * ___ctx_4;
	Il2CppIUnknown* ___rval_5;
	Exception_t1895951012_marshaled_pinvoke* ___exc_6;
	AsyncResult_t3481933602_marshaled_pinvoke* ___asyncResult_7;
	int32_t ___call_type_8;
	char* ___uri_9;
	MCMDictionary_t996934784 * ___properties_10;
	TypeU5BU5D_t3523730040* ___methodSignature_11;
	Identity_t103440558 * ___identity_12;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2878820760_marshaled_com
{
	MonoMethod_t * ___method_0;
	ObjectU5BU5D_t2920941075* ___args_1;
	Il2CppChar** ___names_2;
	uint8_t* ___arg_types_3;
	LogicalCallContext_t3273375026 * ___ctx_4;
	Il2CppIUnknown* ___rval_5;
	Exception_t1895951012_marshaled_com* ___exc_6;
	AsyncResult_t3481933602_marshaled_com* ___asyncResult_7;
	int32_t ___call_type_8;
	Il2CppChar* ___uri_9;
	MCMDictionary_t996934784 * ___properties_10;
	TypeU5BU5D_t3523730040* ___methodSignature_11;
	Identity_t103440558 * ___identity_12;
};
#endif // MONOMETHODMESSAGE_T2878820760_H
#ifndef RENEWALDELEGATE_T3250500445_H
#define RENEWALDELEGATE_T3250500445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct  RenewalDelegate_t3250500445  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENEWALDELEGATE_T3250500445_H
#ifndef HEADERHANDLER_T2989433424_H
#define HEADERHANDLER_T2989433424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2989433424  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2989433424_H
#ifndef CROSSCONTEXTDELEGATE_T1149974192_H
#define CROSSCONTEXTDELEGATE_T1149974192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t1149974192  : public MulticastDelegate_t2881581021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T1149974192_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (ConstructionCallDictionary_t181815299), -1, sizeof(ConstructionCallDictionary_t181815299_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable900[1] = 
{
	ConstructionCallDictionary_t181815299_StaticFields::get_offset_of_InternalKeys_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (EnvoyTerminatorSink_t1500060707), -1, sizeof(EnvoyTerminatorSink_t1500060707_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable901[1] = 
{
	EnvoyTerminatorSink_t1500060707_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (Header_t171200706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (HeaderHandler_t2989433424), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (MethodCall_t1509582726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable913[11] = 
{
	MethodCall_t1509582726::get_offset_of__uri_0(),
	MethodCall_t1509582726::get_offset_of__typeName_1(),
	MethodCall_t1509582726::get_offset_of__methodName_2(),
	MethodCall_t1509582726::get_offset_of__args_3(),
	MethodCall_t1509582726::get_offset_of__methodSignature_4(),
	MethodCall_t1509582726::get_offset_of__methodBase_5(),
	MethodCall_t1509582726::get_offset_of__callContext_6(),
	MethodCall_t1509582726::get_offset_of__targetIdentity_7(),
	MethodCall_t1509582726::get_offset_of__genericArguments_8(),
	MethodCall_t1509582726::get_offset_of_ExternalProperties_9(),
	MethodCall_t1509582726::get_offset_of_InternalProperties_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (MethodResponse_t918915050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable914[15] = 
{
	MethodResponse_t918915050::get_offset_of__methodName_0(),
	MethodResponse_t918915050::get_offset_of__uri_1(),
	MethodResponse_t918915050::get_offset_of__typeName_2(),
	MethodResponse_t918915050::get_offset_of__methodBase_3(),
	MethodResponse_t918915050::get_offset_of__returnValue_4(),
	MethodResponse_t918915050::get_offset_of__exception_5(),
	MethodResponse_t918915050::get_offset_of__methodSignature_6(),
	MethodResponse_t918915050::get_offset_of__inArgInfo_7(),
	MethodResponse_t918915050::get_offset_of__args_8(),
	MethodResponse_t918915050::get_offset_of__outArgs_9(),
	MethodResponse_t918915050::get_offset_of__callMsg_10(),
	MethodResponse_t918915050::get_offset_of__callContext_11(),
	MethodResponse_t918915050::get_offset_of__targetIdentity_12(),
	MethodResponse_t918915050::get_offset_of_ExternalProperties_13(),
	MethodResponse_t918915050::get_offset_of_InternalProperties_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (MCMDictionary_t996934784), -1, sizeof(MCMDictionary_t996934784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable915[1] = 
{
	MCMDictionary_t996934784_StaticFields::get_offset_of_InternalKeys_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (MessageDictionary_t4059307531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable916[4] = 
{
	MessageDictionary_t4059307531::get_offset_of__internalProperties_0(),
	MessageDictionary_t4059307531::get_offset_of__message_1(),
	MessageDictionary_t4059307531::get_offset_of__methodKeys_2(),
	MessageDictionary_t4059307531::get_offset_of__ownProperties_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (DictionaryEnumerator_t3758462313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable917[3] = 
{
	DictionaryEnumerator_t3758462313::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t3758462313::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t3758462313::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (MethodReturnDictionary_t883637920), -1, sizeof(MethodReturnDictionary_t883637920_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable918[2] = 
{
	MethodReturnDictionary_t883637920_StaticFields::get_offset_of_InternalReturnKeys_4(),
	MethodReturnDictionary_t883637920_StaticFields::get_offset_of_InternalExceptionKeys_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (MonoMethodMessage_t2878820760), -1, sizeof(MonoMethodMessage_t2878820760_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable919[15] = 
{
	MonoMethodMessage_t2878820760::get_offset_of_method_0(),
	MonoMethodMessage_t2878820760::get_offset_of_args_1(),
	MonoMethodMessage_t2878820760::get_offset_of_names_2(),
	MonoMethodMessage_t2878820760::get_offset_of_arg_types_3(),
	MonoMethodMessage_t2878820760::get_offset_of_ctx_4(),
	MonoMethodMessage_t2878820760::get_offset_of_rval_5(),
	MonoMethodMessage_t2878820760::get_offset_of_exc_6(),
	MonoMethodMessage_t2878820760::get_offset_of_asyncResult_7(),
	MonoMethodMessage_t2878820760::get_offset_of_call_type_8(),
	MonoMethodMessage_t2878820760::get_offset_of_uri_9(),
	MonoMethodMessage_t2878820760::get_offset_of_properties_10(),
	MonoMethodMessage_t2878820760::get_offset_of_methodSignature_11(),
	MonoMethodMessage_t2878820760::get_offset_of_identity_12(),
	MonoMethodMessage_t2878820760_StaticFields::get_offset_of_CallContextKey_13(),
	MonoMethodMessage_t2878820760_StaticFields::get_offset_of_UriKey_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (CallType_t2397109214)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable920[5] = 
{
	CallType_t2397109214::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (OneWayAttribute_t3888769629), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (RemotingSurrogateSelector_t2088696328), -1, sizeof(RemotingSurrogateSelector_t2088696328_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable922[4] = 
{
	RemotingSurrogateSelector_t2088696328_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t2088696328_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t2088696328_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t2088696328::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (RemotingSurrogate_t1019828879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (ObjRefSurrogate_t3010410384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (ReturnMessage_t379977173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[13] = 
{
	ReturnMessage_t379977173::get_offset_of__outArgs_0(),
	ReturnMessage_t379977173::get_offset_of__args_1(),
	ReturnMessage_t379977173::get_offset_of__callCtx_2(),
	ReturnMessage_t379977173::get_offset_of__returnValue_3(),
	ReturnMessage_t379977173::get_offset_of__uri_4(),
	ReturnMessage_t379977173::get_offset_of__exception_5(),
	ReturnMessage_t379977173::get_offset_of__methodBase_6(),
	ReturnMessage_t379977173::get_offset_of__methodName_7(),
	ReturnMessage_t379977173::get_offset_of__methodSignature_8(),
	ReturnMessage_t379977173::get_offset_of__typeName_9(),
	ReturnMessage_t379977173::get_offset_of__properties_10(),
	ReturnMessage_t379977173::get_offset_of__targetIdentity_11(),
	ReturnMessage_t379977173::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (ServerContextTerminatorSink_t3012469822), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ServerObjectTerminatorSink_t3709216752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable927[1] = 
{
	ServerObjectTerminatorSink_t3709216752::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (StackBuilderSink_t1003323427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[2] = 
{
	StackBuilderSink_t1003323427::get_offset_of__target_0(),
	StackBuilderSink_t1003323427::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (IllogicalCallContext_t4076350558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[2] = 
{
	IllogicalCallContext_t4076350558::get_offset_of_m_Datastore_0(),
	IllogicalCallContext_t4076350558::get_offset_of_m_HostContext_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (LogicalCallContext_t3273375026), -1, sizeof(LogicalCallContext_t3273375026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable930[6] = 
{
	LogicalCallContext_t3273375026_StaticFields::get_offset_of_s_callContextType_0(),
	LogicalCallContext_t3273375026::get_offset_of_m_Datastore_1(),
	LogicalCallContext_t3273375026::get_offset_of_m_RemotingData_2(),
	LogicalCallContext_t3273375026::get_offset_of_m_SecurityData_3(),
	LogicalCallContext_t3273375026::get_offset_of_m_HostContext_4(),
	LogicalCallContext_t3273375026::get_offset_of_m_IsCorrelationMgr_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (Reader_t1261912615)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[1] = 
{
	Reader_t1261912615::get_offset_of_m_ctx_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (CallContextSecurityData_t3243326656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[1] = 
{
	CallContextSecurityData_t3243326656::get_offset_of__principal_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CallContextRemotingData_t1262568499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[1] = 
{
	CallContextRemotingData_t1262568499::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (Lease_t2163542704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable936[8] = 
{
	Lease_t2163542704::get_offset_of__leaseExpireTime_1(),
	Lease_t2163542704::get_offset_of__currentState_2(),
	Lease_t2163542704::get_offset_of__initialLeaseTime_3(),
	Lease_t2163542704::get_offset_of__renewOnCallTime_4(),
	Lease_t2163542704::get_offset_of__sponsorshipTimeout_5(),
	Lease_t2163542704::get_offset_of__sponsors_6(),
	Lease_t2163542704::get_offset_of__renewingSponsors_7(),
	Lease_t2163542704::get_offset_of__renewalDelegate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (RenewalDelegate_t3250500445), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (LeaseManager_t3779295108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[2] = 
{
	LeaseManager_t3779295108::get_offset_of__objects_0(),
	LeaseManager_t3779295108::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (LeaseSink_t794738839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable939[1] = 
{
	LeaseSink_t794738839::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (LeaseState_t4103392951)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable940[6] = 
{
	LeaseState_t4103392951::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (LifetimeServices_t3062659946), -1, sizeof(LifetimeServices_t3062659946_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable941[5] = 
{
	LifetimeServices_t3062659946_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t3062659946_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t3062659946_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t3062659946_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t3062659946_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (Context_t4062614105), -1, sizeof(Context_t4062614105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable942[15] = 
{
	Context_t4062614105::get_offset_of_domain_id_0(),
	Context_t4062614105::get_offset_of_context_id_1(),
	Context_t4062614105::get_offset_of_static_data_2(),
	Context_t4062614105::get_offset_of_data_3(),
	Context_t4062614105_StaticFields::get_offset_of_local_slots_4(),
	Context_t4062614105_StaticFields::get_offset_of_default_server_context_sink_5(),
	Context_t4062614105::get_offset_of_server_context_sink_chain_6(),
	Context_t4062614105::get_offset_of_client_context_sink_chain_7(),
	Context_t4062614105::get_offset_of_context_properties_8(),
	Context_t4062614105_StaticFields::get_offset_of_global_count_9(),
	Context_t4062614105::get_offset_of__localDataStore_10(),
	Context_t4062614105_StaticFields::get_offset_of__localDataStoreMgr_11(),
	Context_t4062614105_StaticFields::get_offset_of_global_dynamic_properties_12(),
	Context_t4062614105::get_offset_of_context_dynamic_properties_13(),
	Context_t4062614105::get_offset_of_callback_object_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (DynamicPropertyCollection_t3140168617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable943[1] = 
{
	DynamicPropertyCollection_t3140168617::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (DynamicPropertyReg_t995699775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[2] = 
{
	DynamicPropertyReg_t995699775::get_offset_of_Property_0(),
	DynamicPropertyReg_t995699775::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (ContextCallbackObject_t4153199545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (ContextAttribute_t998651826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[1] = 
{
	ContextAttribute_t998651826::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (CrossContextChannel_t2034206686), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (CrossContextDelegate_t1149974192), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (SynchronizationAttribute_t1446291851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[5] = 
{
	SynchronizationAttribute_t1446291851::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t1446291851::get_offset_of__flavor_2(),
	SynchronizationAttribute_t1446291851::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t1446291851::get_offset_of__mutex_4(),
	SynchronizationAttribute_t1446291851::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (SynchronizedClientContextSink_t1627728891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable959[2] = 
{
	SynchronizedClientContextSink_t1627728891::get_offset_of__next_0(),
	SynchronizedClientContextSink_t1627728891::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (SynchronizedServerContextSink_t514687449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable960[2] = 
{
	SynchronizedServerContextSink_t514687449::get_offset_of__next_0(),
	SynchronizedServerContextSink_t514687449::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (ChannelServices_t868359000), -1, sizeof(ChannelServices_t868359000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable961[5] = 
{
	ChannelServices_t868359000_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t868359000_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t868359000_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t868359000_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t868359000_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (SinkProviderData_t1175672818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable969[3] = 
{
	SinkProviderData_t1175672818::get_offset_of_sinkName_0(),
	SinkProviderData_t1175672818::get_offset_of_children_1(),
	SinkProviderData_t1175672818::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (CrossAppDomainData_t3846654347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable970[3] = 
{
	CrossAppDomainData_t3846654347::get_offset_of__ContextID_0(),
	CrossAppDomainData_t3846654347::get_offset_of__DomainID_1(),
	CrossAppDomainData_t3846654347::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (CrossAppDomainChannel_t3648429433), -1, sizeof(CrossAppDomainChannel_t3648429433_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable971[1] = 
{
	CrossAppDomainChannel_t3648429433_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (CrossAppDomainSink_t3283360988), -1, sizeof(CrossAppDomainSink_t3283360988_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable972[3] = 
{
	CrossAppDomainSink_t3283360988_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t3283360988_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t3283360988::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (ActivationServices_t2341977231), -1, sizeof(ActivationServices_t2341977231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable973[1] = 
{
	ActivationServices_t2341977231_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (AppDomainLevelActivator_t3169001580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable974[2] = 
{
	AppDomainLevelActivator_t3169001580::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t3169001580::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (ConstructionLevelActivator_t83582466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (ContextLevelActivator_t1520308225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable976[1] = 
{
	ContextLevelActivator_t1520308225::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (RemoteActivator_t184612732), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (UrlAttribute_t2405879457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[1] = 
{
	UrlAttribute_t2405879457::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
