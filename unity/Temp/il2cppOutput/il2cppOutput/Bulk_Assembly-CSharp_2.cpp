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

// XLuaTest.Vector3Param
struct Vector3Param_t416455584;
// System.Delegate
struct Delegate_t486270610;
// System.IAsyncResult
struct IAsyncResult_t2683198007;
// System.AsyncCallback
struct AsyncCallback_t350718677;
// System.Void
struct Void_t3395209399;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3551330611;
// System.Delegate[]
struct DelegateU5BU5D_t1442489063;

extern RuntimeClass* Vector3_t59122720_il2cpp_TypeInfo_var;
extern const uint32_t Vector3Param_BeginInvoke_m3105337810_MetadataUsageId;

struct DelegateU5BU5D_t1442489063;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef VECTOR3PARAM_T416455584_H
#define VECTOR3PARAM_T416455584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLuaTest.Vector3Param
struct  Vector3Param_t416455584  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3PARAM_T416455584_H
#ifndef ASYNCCALLBACK_T350718677_H
#define ASYNCCALLBACK_T350718677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t350718677  : public MulticastDelegate_t2563738156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T350718677_H
// System.Delegate[]
struct DelegateU5BU5D_t1442489063  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t486270610 * m_Items[1];

public:
	inline Delegate_t486270610 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t486270610 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t486270610 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t486270610 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t486270610 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t486270610 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  Vector3_t59122720  DelegatePInvokeWrapper_Vector3Param_t416455584 (Vector3Param_t416455584 * __this, Vector3_t59122720  ___p0, const RuntimeMethod* method)
{
	typedef Vector3_t59122720  (STDCALL *PInvokeFunc)(Vector3_t59122720 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	Vector3_t59122720  returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Void XLuaTest.Vector3Param::.ctor(System.Object,System.IntPtr)
extern "C"  void Vector3Param__ctor_m167862213 (Vector3Param_t416455584 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Vector3 XLuaTest.Vector3Param::Invoke(UnityEngine.Vector3)
extern "C"  Vector3_t59122720  Vector3Param_Invoke_m1891708410 (Vector3Param_t416455584 * __this, Vector3_t59122720  ___p0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	Vector3_t59122720  result;
	memset(&result, 0, sizeof(result));
	DelegateU5BU5D_t1442489063* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t486270610* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef Vector3_t59122720  (*FunctionPointerType) (RuntimeObject *, void* __this, Vector3_t59122720  ___p0, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___p0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef Vector3_t59122720  (*FunctionPointerType) (void* __this, Vector3_t59122720  ___p0, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___p0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef Vector3_t59122720  (*FunctionPointerType) (RuntimeObject *, void* __this, Vector3_t59122720  ___p0, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___p0,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef Vector3_t59122720  (*FunctionPointerType) (void* __this, Vector3_t59122720  ___p0, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___p0,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult XLuaTest.Vector3Param::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Vector3Param_BeginInvoke_m3105337810 (Vector3Param_t416455584 * __this, Vector3_t59122720  ___p0, AsyncCallback_t350718677 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Param_BeginInvoke_m3105337810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t59122720_il2cpp_TypeInfo_var, &___p0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// UnityEngine.Vector3 XLuaTest.Vector3Param::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t59122720  Vector3Param_EndInvoke_m3058820932 (Vector3Param_t416455584 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Vector3_t59122720 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
