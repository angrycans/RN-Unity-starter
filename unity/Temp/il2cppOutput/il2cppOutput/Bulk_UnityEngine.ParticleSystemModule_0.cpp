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

// UnityEngine.ParticleSystem
struct ParticleSystem_t3847287324;
// UnityEngine.Component
struct Component_t2891509687;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t1615599858;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1304227762;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2696015940;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t2169281426;
// System.Char[]
struct CharU5BU5D_t1860498715;
// System.String
struct String_t;
// System.Void
struct Void_t3395209399;

extern RuntimeClass* Particle_t1535577891_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t59122720_il2cpp_TypeInfo_var;
extern const uint32_t ParticleSystem_Emit_m1289228987_MetadataUsageId;
struct AnimationCurve_t2696015940_marshaled_pinvoke;
struct AnimationCurve_t2696015940;;
struct AnimationCurve_t2696015940_marshaled_pinvoke;;
extern RuntimeClass* AnimationCurve_t2696015940_il2cpp_TypeInfo_var;
extern const uint32_t MinMaxCurve_t2231414430_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct AnimationCurve_t2696015940_marshaled_com;
struct AnimationCurve_t2696015940_marshaled_com;;
extern const uint32_t Particle_set_rotation3D_m3452166828_MetadataUsageId;
extern const uint32_t Particle_set_angularVelocity3D_m551784609_MetadataUsageId;

struct ParticleU5BU5D_t1615599858;


#ifndef U3CMODULEU3E_T3839889247_H
#define U3CMODULEU3E_T3839889247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3839889247 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3839889247_H
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
#ifndef LIST_1_T1304227762_H
#define LIST_1_T1304227762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t1304227762  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t2169281426* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1304227762, ____items_1)); }
	inline Vector4U5BU5D_t2169281426* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t2169281426** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t2169281426* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1304227762, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1304227762, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1304227762, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1304227762_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t2169281426* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1304227762_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t2169281426* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t2169281426** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t2169281426* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1304227762_H
#ifndef SIZEOVERLIFETIMEMODULE_T2642970242_H
#define SIZEOVERLIFETIMEMODULE_T2642970242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct  SizeOverLifetimeModule_t2642970242 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SizeOverLifetimeModule_t2642970242, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t2642970242_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t2642970242_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // SIZEOVERLIFETIMEMODULE_T2642970242_H
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
#ifndef ROTATIONOVERLIFETIMEMODULE_T2127923417_H
#define ROTATIONOVERLIFETIMEMODULE_T2127923417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct  RotationOverLifetimeModule_t2127923417 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(RotationOverLifetimeModule_t2127923417, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_t2127923417_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_t2127923417_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // ROTATIONOVERLIFETIMEMODULE_T2127923417_H
#ifndef ROTATIONBYSPEEDMODULE_T2651092880_H
#define ROTATIONBYSPEEDMODULE_T2651092880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/RotationBySpeedModule
struct  RotationBySpeedModule_t2651092880 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationBySpeedModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(RotationBySpeedModule_t2651092880, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_t2651092880_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_t2651092880_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // ROTATIONBYSPEEDMODULE_T2651092880_H
#ifndef EXTERNALFORCESMODULE_T3652731566_H
#define EXTERNALFORCESMODULE_T3652731566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/ExternalForcesModule
struct  ExternalForcesModule_t3652731566 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ExternalForcesModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ExternalForcesModule_t3652731566, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ExternalForcesModule
struct ExternalForcesModule_t3652731566_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ExternalForcesModule
struct ExternalForcesModule_t3652731566_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // EXTERNALFORCESMODULE_T3652731566_H
#ifndef NOISEMODULE_T4109896089_H
#define NOISEMODULE_T4109896089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/NoiseModule
struct  NoiseModule_t4109896089 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/NoiseModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(NoiseModule_t4109896089, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_t4109896089_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_t4109896089_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // NOISEMODULE_T4109896089_H
#ifndef COLLISIONMODULE_T2928946069_H
#define COLLISIONMODULE_T2928946069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/CollisionModule
struct  CollisionModule_t2928946069 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CollisionModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(CollisionModule_t2928946069, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_t2928946069_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_t2928946069_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // COLLISIONMODULE_T2928946069_H
#ifndef SUBEMITTERSMODULE_T3776200489_H
#define SUBEMITTERSMODULE_T3776200489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/SubEmittersModule
struct  SubEmittersModule_t3776200489 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SubEmittersModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SubEmittersModule_t3776200489, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t3776200489_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t3776200489_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // SUBEMITTERSMODULE_T3776200489_H
#ifndef COLORBYSPEEDMODULE_T1411731932_H
#define COLORBYSPEEDMODULE_T1411731932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/ColorBySpeedModule
struct  ColorBySpeedModule_t1411731932 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorBySpeedModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ColorBySpeedModule_t1411731932, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t1411731932_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t1411731932_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // COLORBYSPEEDMODULE_T1411731932_H
#ifndef TEXTURESHEETANIMATIONMODULE_T2726970690_H
#define TEXTURESHEETANIMATIONMODULE_T2726970690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct  TextureSheetAnimationModule_t2726970690 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TextureSheetAnimationModule_t2726970690, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_t2726970690_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_t2726970690_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // TEXTURESHEETANIMATIONMODULE_T2726970690_H
#ifndef LIGHTSMODULE_T881449982_H
#define LIGHTSMODULE_T881449982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/LightsModule
struct  LightsModule_t881449982 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LightsModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(LightsModule_t881449982, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t881449982_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t881449982_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // LIGHTSMODULE_T881449982_H
#ifndef TRAILMODULE_T2594148295_H
#define TRAILMODULE_T2594148295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/TrailModule
struct  TrailModule_t2594148295 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TrailModule_t2594148295, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t2594148295_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t2594148295_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // TRAILMODULE_T2594148295_H
#ifndef CUSTOMDATAMODULE_T3928223125_H
#define CUSTOMDATAMODULE_T3928223125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/CustomDataModule
struct  CustomDataModule_t3928223125 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CustomDataModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(CustomDataModule_t3928223125, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CustomDataModule
struct CustomDataModule_t3928223125_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CustomDataModule
struct CustomDataModule_t3928223125_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // CUSTOMDATAMODULE_T3928223125_H
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
#ifndef TRIGGERMODULE_T2453641025_H
#define TRIGGERMODULE_T2453641025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/TriggerModule
struct  TriggerModule_t2453641025 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TriggerModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TriggerModule_t2453641025, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_t2453641025_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_t2453641025_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // TRIGGERMODULE_T2453641025_H
#ifndef COLOROVERLIFETIMEMODULE_T3058163430_H
#define COLOROVERLIFETIMEMODULE_T3058163430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct  ColorOverLifetimeModule_t3058163430 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ColorOverLifetimeModule_t3058163430, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t3058163430_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t3058163430_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // COLOROVERLIFETIMEMODULE_T3058163430_H
#ifndef SIZEBYSPEEDMODULE_T453162143_H
#define SIZEBYSPEEDMODULE_T453162143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/SizeBySpeedModule
struct  SizeBySpeedModule_t453162143 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeBySpeedModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SizeBySpeedModule_t453162143, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t453162143_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t453162143_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // SIZEBYSPEEDMODULE_T453162143_H
#ifndef INHERITVELOCITYMODULE_T4236939944_H
#define INHERITVELOCITYMODULE_T4236939944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/InheritVelocityModule
struct  InheritVelocityModule_t4236939944 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/InheritVelocityModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(InheritVelocityModule_t4236939944, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/InheritVelocityModule
struct InheritVelocityModule_t4236939944_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/InheritVelocityModule
struct InheritVelocityModule_t4236939944_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // INHERITVELOCITYMODULE_T4236939944_H
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
#ifndef FORCEOVERLIFETIMEMODULE_T849035595_H
#define FORCEOVERLIFETIMEMODULE_T849035595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/ForceOverLifetimeModule
struct  ForceOverLifetimeModule_t849035595 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ForceOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ForceOverLifetimeModule_t849035595, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ForceOverLifetimeModule
struct ForceOverLifetimeModule_t849035595_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ForceOverLifetimeModule
struct ForceOverLifetimeModule_t849035595_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // FORCEOVERLIFETIMEMODULE_T849035595_H
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
#ifndef EMISSIONMODULE_T3019712910_H
#define EMISSIONMODULE_T3019712910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t3019712910 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t3019712910, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t3019712910_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t3019712910_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // EMISSIONMODULE_T3019712910_H
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
#ifndef MAINMODULE_T3252910686_H
#define MAINMODULE_T3252910686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t3252910686 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t3252910686, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t3252910686_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t3252910686_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // MAINMODULE_T3252910686_H
#ifndef SHAPEMODULE_T3645627290_H
#define SHAPEMODULE_T3645627290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/ShapeModule
struct  ShapeModule_t3645627290 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ShapeModule_t3645627290, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3645627290_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3645627290_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // SHAPEMODULE_T3645627290_H
#ifndef VELOCITYOVERLIFETIMEMODULE_T128895923_H
#define VELOCITYOVERLIFETIMEMODULE_T128895923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct  VelocityOverLifetimeModule_t128895923 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/VelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(VelocityOverLifetimeModule_t128895923, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_t128895923_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/VelocityOverLifetimeModule
struct VelocityOverLifetimeModule_t128895923_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // VELOCITYOVERLIFETIMEMODULE_T128895923_H
#ifndef LIMITVELOCITYOVERLIFETIMEMODULE_T274018710_H
#define LIMITVELOCITYOVERLIFETIMEMODULE_T274018710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct  LimitVelocityOverLifetimeModule_t274018710 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(LimitVelocityOverLifetimeModule_t274018710, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t3847287324 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t3847287324 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t3847287324 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_t274018710_marshaled_pinvoke
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_t274018710_marshaled_com
{
	ParticleSystem_t3847287324 * ___m_ParticleSystem_0;
};
#endif // LIMITVELOCITYOVERLIFETIMEMODULE_T274018710_H
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
#ifndef ANIMATIONCURVE_T2696015940_H
#define ANIMATIONCURVE_T2696015940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2696015940  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2696015940, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2696015940_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2696015940_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T2696015940_H
#ifndef PARTICLESYSTEMCURVEMODE_T3168534575_H
#define PARTICLESYSTEMCURVEMODE_T3168534575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t3168534575 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t3168534575, ___value___2)); }
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
#endif // PARTICLESYSTEMCURVEMODE_T3168534575_H
#ifndef PARTICLESYSTEMSCALINGMODE_T2426601838_H
#define PARTICLESYSTEMSCALINGMODE_T2426601838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemScalingMode
struct  ParticleSystemScalingMode_t2426601838 
{
public:
	// System.Int32 UnityEngine.ParticleSystemScalingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemScalingMode_t2426601838, ___value___2)); }
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
#endif // PARTICLESYSTEMSCALINGMODE_T2426601838_H
#ifndef PARTICLESYSTEMSIMULATIONSPACE_T843845315_H
#define PARTICLESYSTEMSIMULATIONSPACE_T843845315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemSimulationSpace
struct  ParticleSystemSimulationSpace_t843845315 
{
public:
	// System.Int32 UnityEngine.ParticleSystemSimulationSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemSimulationSpace_t843845315, ___value___2)); }
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
#endif // PARTICLESYSTEMSIMULATIONSPACE_T843845315_H
#ifndef PARTICLESYSTEMCUSTOMDATA_T514230366_H
#define PARTICLESYSTEMCUSTOMDATA_T514230366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemCustomData
struct  ParticleSystemCustomData_t514230366 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCustomData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCustomData_t514230366, ___value___2)); }
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
#endif // PARTICLESYSTEMCUSTOMDATA_T514230366_H
#ifndef PARTICLE_T1535577891_H
#define PARTICLE_T1535577891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t1535577891 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t59122720  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t59122720  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t59122720  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t59122720  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t59122720  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t59122720  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t59122720  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t59122720  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t3321179363  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_Position_0)); }
	inline Vector3_t59122720  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t59122720 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t59122720  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_Velocity_1)); }
	inline Vector3_t59122720  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t59122720 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t59122720  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_AnimatedVelocity_2)); }
	inline Vector3_t59122720  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t59122720 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t59122720  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_InitialVelocity_3)); }
	inline Vector3_t59122720  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t59122720 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t59122720  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_AxisOfRotation_4)); }
	inline Vector3_t59122720  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t59122720 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t59122720  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_Rotation_5)); }
	inline Vector3_t59122720  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t59122720 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t59122720  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_AngularVelocity_6)); }
	inline Vector3_t59122720  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t59122720 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t59122720  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_StartSize_7)); }
	inline Vector3_t59122720  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t59122720 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t59122720  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_StartColor_8)); }
	inline Color32_t3321179363  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t3321179363 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t3321179363  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t1535577891, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T1535577891_H
#ifndef PARTICLESYSTEMSTOPBEHAVIOR_T1891376640_H
#define PARTICLESYSTEMSTOPBEHAVIOR_T1891376640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemStopBehavior
struct  ParticleSystemStopBehavior_t1891376640 
{
public:
	// System.Int32 UnityEngine.ParticleSystemStopBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemStopBehavior_t1891376640, ___value___2)); }
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
#endif // PARTICLESYSTEMSTOPBEHAVIOR_T1891376640_H
#ifndef EMITPARAMS_T477654599_H
#define EMITPARAMS_T477654599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmitParams
struct  EmitParams_t477654599 
{
public:
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_t1535577891  ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_10;

public:
	inline static int32_t get_offset_of_m_Particle_0() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_Particle_0)); }
	inline Particle_t1535577891  get_m_Particle_0() const { return ___m_Particle_0; }
	inline Particle_t1535577891 * get_address_of_m_Particle_0() { return &___m_Particle_0; }
	inline void set_m_Particle_0(Particle_t1535577891  value)
	{
		___m_Particle_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionSet_1() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_PositionSet_1)); }
	inline bool get_m_PositionSet_1() const { return ___m_PositionSet_1; }
	inline bool* get_address_of_m_PositionSet_1() { return &___m_PositionSet_1; }
	inline void set_m_PositionSet_1(bool value)
	{
		___m_PositionSet_1 = value;
	}

	inline static int32_t get_offset_of_m_VelocitySet_2() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_VelocitySet_2)); }
	inline bool get_m_VelocitySet_2() const { return ___m_VelocitySet_2; }
	inline bool* get_address_of_m_VelocitySet_2() { return &___m_VelocitySet_2; }
	inline void set_m_VelocitySet_2(bool value)
	{
		___m_VelocitySet_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotationSet_3() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_AxisOfRotationSet_3)); }
	inline bool get_m_AxisOfRotationSet_3() const { return ___m_AxisOfRotationSet_3; }
	inline bool* get_address_of_m_AxisOfRotationSet_3() { return &___m_AxisOfRotationSet_3; }
	inline void set_m_AxisOfRotationSet_3(bool value)
	{
		___m_AxisOfRotationSet_3 = value;
	}

	inline static int32_t get_offset_of_m_RotationSet_4() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_RotationSet_4)); }
	inline bool get_m_RotationSet_4() const { return ___m_RotationSet_4; }
	inline bool* get_address_of_m_RotationSet_4() { return &___m_RotationSet_4; }
	inline void set_m_RotationSet_4(bool value)
	{
		___m_RotationSet_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocitySet_5() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_AngularVelocitySet_5)); }
	inline bool get_m_AngularVelocitySet_5() const { return ___m_AngularVelocitySet_5; }
	inline bool* get_address_of_m_AngularVelocitySet_5() { return &___m_AngularVelocitySet_5; }
	inline void set_m_AngularVelocitySet_5(bool value)
	{
		___m_AngularVelocitySet_5 = value;
	}

	inline static int32_t get_offset_of_m_StartSizeSet_6() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_StartSizeSet_6)); }
	inline bool get_m_StartSizeSet_6() const { return ___m_StartSizeSet_6; }
	inline bool* get_address_of_m_StartSizeSet_6() { return &___m_StartSizeSet_6; }
	inline void set_m_StartSizeSet_6(bool value)
	{
		___m_StartSizeSet_6 = value;
	}

	inline static int32_t get_offset_of_m_StartColorSet_7() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_StartColorSet_7)); }
	inline bool get_m_StartColorSet_7() const { return ___m_StartColorSet_7; }
	inline bool* get_address_of_m_StartColorSet_7() { return &___m_StartColorSet_7; }
	inline void set_m_StartColorSet_7(bool value)
	{
		___m_StartColorSet_7 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeedSet_8() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_RandomSeedSet_8)); }
	inline bool get_m_RandomSeedSet_8() const { return ___m_RandomSeedSet_8; }
	inline bool* get_address_of_m_RandomSeedSet_8() { return &___m_RandomSeedSet_8; }
	inline void set_m_RandomSeedSet_8(bool value)
	{
		___m_RandomSeedSet_8 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetimeSet_9() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_StartLifetimeSet_9)); }
	inline bool get_m_StartLifetimeSet_9() const { return ___m_StartLifetimeSet_9; }
	inline bool* get_address_of_m_StartLifetimeSet_9() { return &___m_StartLifetimeSet_9; }
	inline void set_m_StartLifetimeSet_9(bool value)
	{
		___m_StartLifetimeSet_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyShapeToPosition_10() { return static_cast<int32_t>(offsetof(EmitParams_t477654599, ___m_ApplyShapeToPosition_10)); }
	inline bool get_m_ApplyShapeToPosition_10() const { return ___m_ApplyShapeToPosition_10; }
	inline bool* get_address_of_m_ApplyShapeToPosition_10() { return &___m_ApplyShapeToPosition_10; }
	inline void set_m_ApplyShapeToPosition_10(bool value)
	{
		___m_ApplyShapeToPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t477654599_marshaled_pinvoke
{
	Particle_t1535577891  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t477654599_marshaled_com
{
	Particle_t1535577891  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
#endif // EMITPARAMS_T477654599_H
#ifndef MINMAXCURVE_T2231414430_H
#define MINMAXCURVE_T2231414430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_t2231414430 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2696015940 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2696015940 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_CurveMin_2)); }
	inline AnimationCurve_t2696015940 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2696015940 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2696015940 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMin_2), value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_CurveMax_3)); }
	inline AnimationCurve_t2696015940 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2696015940 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2696015940 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMax_3), value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_t2231414430, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t2231414430_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t2696015940_marshaled_pinvoke ___m_CurveMin_2;
	AnimationCurve_t2696015940_marshaled_pinvoke ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t2231414430_marshaled_com
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t2696015940_marshaled_com* ___m_CurveMin_2;
	AnimationCurve_t2696015940_marshaled_com* ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
#endif // MINMAXCURVE_T2231414430_H
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
#ifndef PARTICLESYSTEM_T3847287324_H
#define PARTICLESYSTEM_T3847287324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t3847287324  : public Component_t2891509687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T3847287324_H
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t1615599858  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Particle_t1535577891  m_Items[1];

public:
	inline Particle_t1535577891  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_t1535577891 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_t1535577891  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_t1535577891  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_t1535577891 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_t1535577891  value)
	{
		m_Items[index] = value;
	}
};

extern "C" void AnimationCurve_t2696015940_marshal_pinvoke(const AnimationCurve_t2696015940& unmarshaled, AnimationCurve_t2696015940_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t2696015940_marshal_pinvoke_back(const AnimationCurve_t2696015940_marshaled_pinvoke& marshaled, AnimationCurve_t2696015940& unmarshaled);
extern "C" void AnimationCurve_t2696015940_marshal_pinvoke_cleanup(AnimationCurve_t2696015940_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t2696015940_marshal_com(const AnimationCurve_t2696015940& unmarshaled, AnimationCurve_t2696015940_marshaled_com& marshaled);
extern "C" void AnimationCurve_t2696015940_marshal_com_back(const AnimationCurve_t2696015940_marshaled_com& marshaled, AnimationCurve_t2696015940& unmarshaled);
extern "C" void AnimationCurve_t2696015940_marshal_com_cleanup(AnimationCurve_t2696015940_marshaled_com& marshaled);


// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m4003913160 (Component_t2891509687 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t3019712910  ParticleSystem_get_emission_m1872453267 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::get_enabled()
extern "C"  bool EmissionModule_get_enabled_m2481248755 (EmissionModule_t3019712910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C"  void EmissionModule_set_enabled_m1033135267 (EmissionModule_t3019712910 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverTimeMultiplier()
extern "C"  float EmissionModule_get_rateOverTimeMultiplier_m4047324932 (EmissionModule_t3019712910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
extern "C"  MinMaxCurve_t2231414430  MinMaxCurve_op_Implicit_m451636697 (RuntimeObject * __this /* static, unused */, float ___constant0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
extern "C"  void EmissionModule_set_rateOverTime_m318733085 (EmissionModule_t3019712910 * __this, MinMaxCurve_t2231414430  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)
extern "C"  void ParticleSystem_INTERNAL_get_startColor_m3859262316 (ParticleSystem_t3847287324 * __this, Color_t3988933665 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C"  void ParticleSystem_INTERNAL_set_startColor_m3528184682 (ParticleSystem_t3847287324 * __this, Color_t3988933665 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startRotation3D(UnityEngine.Vector3&)
extern "C"  void ParticleSystem_INTERNAL_get_startRotation3D_m4091413636 (ParticleSystem_t3847287324 * __this, Vector3_t59122720 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startRotation3D(UnityEngine.Vector3&)
extern "C"  void ParticleSystem_INTERNAL_set_startRotation3D_m2208656234 (ParticleSystem_t3847287324 * __this, Vector3_t59122720 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void MainModule__ctor_m1405829029 (MainModule_t3252910686 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void EmissionModule__ctor_m3827080463 (EmissionModule_t3019712910 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ShapeModule__ctor_m1730568006 (ShapeModule_t3645627290 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void VelocityOverLifetimeModule__ctor_m922784064 (VelocityOverLifetimeModule_t128895923 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void LimitVelocityOverLifetimeModule__ctor_m1230928511 (LimitVelocityOverLifetimeModule_t274018710 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/InheritVelocityModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void InheritVelocityModule__ctor_m2252868730 (InheritVelocityModule_t4236939944 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/ForceOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ForceOverLifetimeModule__ctor_m2444887397 (ForceOverLifetimeModule_t849035595 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ColorOverLifetimeModule__ctor_m1033669071 (ColorOverLifetimeModule_t3058163430 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ColorBySpeedModule__ctor_m179931955 (ColorBySpeedModule_t1411731932 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SizeOverLifetimeModule__ctor_m2931597205 (SizeOverLifetimeModule_t2642970242 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SizeBySpeedModule__ctor_m1973047952 (SizeBySpeedModule_t453162143 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void RotationOverLifetimeModule__ctor_m2605365092 (RotationOverLifetimeModule_t2127923417 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void RotationBySpeedModule__ctor_m3462398667 (RotationBySpeedModule_t2651092880 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/ExternalForcesModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ExternalForcesModule__ctor_m3981540048 (ExternalForcesModule_t3652731566 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void NoiseModule__ctor_m4266985437 (NoiseModule_t4109896089 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/CollisionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void CollisionModule__ctor_m2107515601 (CollisionModule_t2928946069 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/TriggerModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TriggerModule__ctor_m3031864590 (TriggerModule_t2453641025 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/SubEmittersModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SubEmittersModule__ctor_m1727957668 (SubEmittersModule_t3776200489 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TextureSheetAnimationModule__ctor_m1894673426 (TextureSheetAnimationModule_t2726970690 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/LightsModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void LightsModule__ctor_m1108558810 (LightsModule_t881449982 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/TrailModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TrailModule__ctor_m1521426893 (TrailModule_t2594148295 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/CustomDataModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void CustomDataModule__ctor_m1611781310 (CustomDataModule_t3928223125 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetCustomParticleDataInternal(System.Object,System.Int32)
extern "C"  void ParticleSystem_SetCustomParticleDataInternal_m2725413198 (ParticleSystem_t3847287324 * __this, RuntimeObject * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetCustomParticleDataInternal(System.Object,System.Int32)
extern "C"  int32_t ParticleSystem_GetCustomParticleDataInternal_m112742821 (ParticleSystem_t3847287324 * __this, RuntimeObject * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m1221220579 (ParticleSystem_t3847287324 * __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m3980253936 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Pause(System.Boolean)
extern "C"  void ParticleSystem_Pause_m3320486486 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
extern "C"  void ParticleSystem_Stop_m461804911 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, int32_t ___stopBehavior1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C"  void ParticleSystem_Clear_m2560854447 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m1216665663 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m3363143552 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___self0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m3000218851 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C"  void Particle_set_velocity_m3705016268 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C"  void Particle_set_lifetime_m4124450215 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C"  void Particle_set_startLifetime_m1194624670 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
extern "C"  void Particle_set_startSize_m1377500590 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t59122720  Vector3_get_zero_m1114295826 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
extern "C"  void Particle_set_rotation3D_m3452166828 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
extern "C"  void Particle_set_angularVelocity3D_m551784609 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m2949519564 (Particle_t1535577891 * __this, Color32_t3321179363  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
extern "C"  void Particle_set_randomSeed_m573897843 (Particle_t1535577891 * __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_EmitOld(UnityEngine.ParticleSystem/Particle&)
extern "C"  void ParticleSystem_Internal_EmitOld_m2636990130 (ParticleSystem_t3847287324 * __this, Particle_t1535577891 * ___particle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Emit(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
extern "C"  void ParticleSystem_Internal_Emit_m469605496 (ParticleSystem_t3847287324 * __this, EmitParams_t477654599 * ___emitParams0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void EmissionModule_SetEnabled_m520335713 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::GetEnabled(UnityEngine.ParticleSystem)
extern "C"  bool EmissionModule_GetEnabled_m955617669 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetRateOverTime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
extern "C"  void EmissionModule_SetRateOverTime_m2862096936 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, MinMaxCurve_t2231414430 * ___curve1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/EmissionModule::GetRateOverTimeMultiplier(UnityEngine.ParticleSystem)
extern "C"  float EmissionModule_GetRateOverTimeMultiplier_m3652004491 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m537880254 (AnimationCurve_t2696015940 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
extern "C"  void MinMaxCurve__ctor_m2917263778 (MinMaxCurve_t2231414430 * __this, float ___constant0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3511729877 (Vector3_t59122720 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t59122720  Vector3_op_Multiply_m1395260876 (RuntimeObject * __this /* static, unused */, Vector3_t59122720  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem::.ctor()
extern "C"  void ParticleSystem__ctor_m1554090278 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m4003913160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.ParticleSystem::get_startDelay()
extern "C"  float ParticleSystem_get_startDelay_m1872663512 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startDelay_m1872663512_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_startDelay_m1872663512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startDelay_m1872663512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startDelay()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startDelay(System.Single)
extern "C"  void ParticleSystem_set_startDelay_m3078341640 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startDelay_m3078341640_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_startDelay_m3078341640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startDelay_m3078341640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startDelay(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m2377473406 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isPlaying_m2377473406_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_isPlaying_m2377473406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPlaying_m2377473406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_isEmitting()
extern "C"  bool ParticleSystem_get_isEmitting_m1264152088 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isEmitting_m1264152088_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_isEmitting_m1264152088_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isEmitting_m1264152088_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isEmitting()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
extern "C"  bool ParticleSystem_get_isStopped_m3494565969 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isStopped_m3494565969_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_isStopped_m3494565969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isStopped_m3494565969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isStopped()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_isPaused()
extern "C"  bool ParticleSystem_get_isPaused_m1803880737 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isPaused_m1803880737_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_isPaused_m1803880737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPaused_m1803880737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPaused()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_loop()
extern "C"  bool ParticleSystem_get_loop_m3377985658 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_loop_m3377985658_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_loop_m3377985658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_loop_m3377985658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_loop()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_loop(System.Boolean)
extern "C"  void ParticleSystem_set_loop_m3844143178 (ParticleSystem_t3847287324 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_loop_m3844143178_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_set_loop_m3844143178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_loop_m3844143178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.ParticleSystem::get_playOnAwake()
extern "C"  bool ParticleSystem_get_playOnAwake_m3832266309 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_playOnAwake_m3832266309_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_playOnAwake_m3832266309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_playOnAwake_m3832266309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_playOnAwake()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_playOnAwake(System.Boolean)
extern "C"  void ParticleSystem_set_playOnAwake_m1716787999 (ParticleSystem_t3847287324 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_playOnAwake_m1716787999_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_set_playOnAwake_m1716787999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_playOnAwake_m1716787999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_time()
extern "C"  float ParticleSystem_get_time_m3206309208 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_time_m3206309208_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_time_m3206309208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_time_m3206309208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_time()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_time(System.Single)
extern "C"  void ParticleSystem_set_time_m2427254790 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_time_m2427254790_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_time_m2427254790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_time_m2427254790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_duration()
extern "C"  float ParticleSystem_get_duration_m514663841 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_duration_m514663841_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_duration_m514663841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_duration_m514663841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_duration()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.ParticleSystem::get_playbackSpeed()
extern "C"  float ParticleSystem_get_playbackSpeed_m79969314 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_playbackSpeed_m79969314_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_playbackSpeed_m79969314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_playbackSpeed_m79969314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_playbackSpeed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_playbackSpeed(System.Single)
extern "C"  void ParticleSystem_set_playbackSpeed_m1520628137 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_playbackSpeed_m1520628137_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_playbackSpeed_m1520628137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_playbackSpeed_m1520628137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_playbackSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
extern "C"  int32_t ParticleSystem_get_particleCount_m369897445 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_get_particleCount_m369897445_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_particleCount_m369897445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_particleCount_m369897445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_particleCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::get_enableEmission()
extern "C"  bool ParticleSystem_get_enableEmission_m4139243184 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	EmissionModule_t3019712910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		EmissionModule_t3019712910  L_0 = ParticleSystem_get_emission_m1872453267(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = EmissionModule_get_enabled_m2481248755((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C"  void ParticleSystem_set_enableEmission_m2262060082 (ParticleSystem_t3847287324 * __this, bool ___value0, const RuntimeMethod* method)
{
	EmissionModule_t3019712910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		EmissionModule_t3019712910  L_0 = ParticleSystem_get_emission_m1872453267(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___value0;
		EmissionModule_set_enabled_m1033135267((&V_0), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.ParticleSystem::get_emissionRate()
extern "C"  float ParticleSystem_get_emissionRate_m3793225570 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	EmissionModule_t3019712910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		EmissionModule_t3019712910  L_0 = ParticleSystem_get_emission_m1872453267(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = EmissionModule_get_rateOverTimeMultiplier_m4047324932((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		float L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.ParticleSystem::set_emissionRate(System.Single)
extern "C"  void ParticleSystem_set_emissionRate_m698404217 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	EmissionModule_t3019712910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		EmissionModule_t3019712910  L_0 = ParticleSystem_get_emission_m1872453267(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___value0;
		MinMaxCurve_t2231414430  L_2 = MinMaxCurve_op_Implicit_m451636697(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		EmissionModule_set_rateOverTime_m318733085((&V_0), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C"  float ParticleSystem_get_startSpeed_m2990785409 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startSpeed_m2990785409_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_startSpeed_m2990785409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startSpeed_m2990785409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startSpeed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C"  void ParticleSystem_set_startSpeed_m2239311592 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startSpeed_m2239311592_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_startSpeed_m2239311592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSpeed_m2239311592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C"  float ParticleSystem_get_startSize_m669573889 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startSize_m669573889_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_startSize_m669573889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startSize_m669573889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startSize()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C"  void ParticleSystem_set_startSize_m2508536409 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startSize_m2508536409_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_startSize_m2508536409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSize_m2508536409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSize(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Color UnityEngine.ParticleSystem::get_startColor()
extern "C"  Color_t3988933665  ParticleSystem_get_startColor_m1049770840 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	Color_t3988933665  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t3988933665  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ParticleSystem_INTERNAL_get_startColor_m3859262316(__this, (&V_0), /*hidden argument*/NULL);
		Color_t3988933665  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Color_t3988933665  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::set_startColor(UnityEngine.Color)
extern "C"  void ParticleSystem_set_startColor_m2611804724 (ParticleSystem_t3847287324 * __this, Color_t3988933665  ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_INTERNAL_set_startColor_m3528184682(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)
extern "C"  void ParticleSystem_INTERNAL_get_startColor_m3859262316 (ParticleSystem_t3847287324 * __this, Color_t3988933665 * ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_INTERNAL_get_startColor_m3859262316_ftn) (ParticleSystem_t3847287324 *, Color_t3988933665 *);
	static ParticleSystem_INTERNAL_get_startColor_m3859262316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_get_startColor_m3859262316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_get_startColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)
extern "C"  void ParticleSystem_INTERNAL_set_startColor_m3528184682 (ParticleSystem_t3847287324 * __this, Color_t3988933665 * ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_INTERNAL_set_startColor_m3528184682_ftn) (ParticleSystem_t3847287324 *, Color_t3988933665 *);
	static ParticleSystem_INTERNAL_set_startColor_m3528184682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_set_startColor_m3528184682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_set_startColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_startRotation()
extern "C"  float ParticleSystem_get_startRotation_m2201920788 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startRotation_m2201920788_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_startRotation_m2201920788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startRotation_m2201920788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startRotation()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startRotation(System.Single)
extern "C"  void ParticleSystem_set_startRotation_m3279606030 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startRotation_m3279606030_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_startRotation_m3279606030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startRotation_m3279606030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startRotation(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.ParticleSystem::get_startRotation3D()
extern "C"  Vector3_t59122720  ParticleSystem_get_startRotation3D_m2034252684 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	Vector3_t59122720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t59122720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ParticleSystem_INTERNAL_get_startRotation3D_m4091413636(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t59122720  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t59122720  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::set_startRotation3D(UnityEngine.Vector3)
extern "C"  void ParticleSystem_set_startRotation3D_m745329969 (ParticleSystem_t3847287324 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_INTERNAL_set_startRotation3D_m2208656234(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_get_startRotation3D(UnityEngine.Vector3&)
extern "C"  void ParticleSystem_INTERNAL_get_startRotation3D_m4091413636 (ParticleSystem_t3847287324 * __this, Vector3_t59122720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_INTERNAL_get_startRotation3D_m4091413636_ftn) (ParticleSystem_t3847287324 *, Vector3_t59122720 *);
	static ParticleSystem_INTERNAL_get_startRotation3D_m4091413636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_get_startRotation3D_m4091413636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_get_startRotation3D(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_set_startRotation3D(UnityEngine.Vector3&)
extern "C"  void ParticleSystem_INTERNAL_set_startRotation3D_m2208656234 (ParticleSystem_t3847287324 * __this, Vector3_t59122720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_INTERNAL_set_startRotation3D_m2208656234_ftn) (ParticleSystem_t3847287324 *, Vector3_t59122720 *);
	static ParticleSystem_INTERNAL_set_startRotation3D_m2208656234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_set_startRotation3D_m2208656234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_set_startRotation3D(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C"  float ParticleSystem_get_startLifetime_m3266920325 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m3266920325_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_startLifetime_m3266920325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m3266920325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C"  void ParticleSystem_set_startLifetime_m3698818866 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startLifetime_m3698818866_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_startLifetime_m3698818866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startLifetime_m3698818866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startLifetime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_gravityModifier()
extern "C"  float ParticleSystem_get_gravityModifier_m3765002706 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_gravityModifier_m3765002706_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_gravityModifier_m3765002706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_gravityModifier_m3765002706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_gravityModifier()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_gravityModifier(System.Single)
extern "C"  void ParticleSystem_set_gravityModifier_m3555585027 (ParticleSystem_t3847287324 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_gravityModifier_m3555585027_ftn) (ParticleSystem_t3847287324 *, float);
	static ParticleSystem_set_gravityModifier_m3555585027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_gravityModifier_m3555585027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_gravityModifier(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.ParticleSystem::get_maxParticles()
extern "C"  int32_t ParticleSystem_get_maxParticles_m3666131128 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_get_maxParticles_m3666131128_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_maxParticles_m3666131128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_maxParticles_m3666131128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_maxParticles()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_maxParticles(System.Int32)
extern "C"  void ParticleSystem_set_maxParticles_m4155281203 (ParticleSystem_t3847287324 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_maxParticles_m4155281203_ftn) (ParticleSystem_t3847287324 *, int32_t);
	static ParticleSystem_set_maxParticles_m4155281203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_maxParticles_m4155281203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_maxParticles(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem::get_simulationSpace()
extern "C"  int32_t ParticleSystem_get_simulationSpace_m2576465460 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_get_simulationSpace_m2576465460_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_simulationSpace_m2576465460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_simulationSpace_m2576465460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_simulationSpace()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
extern "C"  void ParticleSystem_set_simulationSpace_m3217433754 (ParticleSystem_t3847287324 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_simulationSpace_m3217433754_ftn) (ParticleSystem_t3847287324 *, int32_t);
	static ParticleSystem_set_simulationSpace_m3217433754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_simulationSpace_m3217433754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem::get_scalingMode()
extern "C"  int32_t ParticleSystem_get_scalingMode_m4137175482 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_get_scalingMode_m4137175482_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_scalingMode_m4137175482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_scalingMode_m4137175482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_scalingMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
extern "C"  void ParticleSystem_set_scalingMode_m3077878062 (ParticleSystem_t3847287324 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_scalingMode_m3077878062_ftn) (ParticleSystem_t3847287324 *, int32_t);
	static ParticleSystem_set_scalingMode_m3077878062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_scalingMode_m3077878062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_scalingMode(UnityEngine.ParticleSystemScalingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.UInt32 UnityEngine.ParticleSystem::get_randomSeed()
extern "C"  uint32_t ParticleSystem_get_randomSeed_m3140500982 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*ParticleSystem_get_randomSeed_m3140500982_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_randomSeed_m3140500982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_randomSeed_m3140500982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_randomSeed()");
	uint32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_randomSeed(System.UInt32)
extern "C"  void ParticleSystem_set_randomSeed_m2496683538 (ParticleSystem_t3847287324 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_randomSeed_m2496683538_ftn) (ParticleSystem_t3847287324 *, uint32_t);
	static ParticleSystem_set_randomSeed_m2496683538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_randomSeed_m2496683538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_randomSeed(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.ParticleSystem::get_useAutoRandomSeed()
extern "C"  bool ParticleSystem_get_useAutoRandomSeed_m4223027529 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_useAutoRandomSeed_m4223027529_ftn) (ParticleSystem_t3847287324 *);
	static ParticleSystem_get_useAutoRandomSeed_m4223027529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_useAutoRandomSeed_m4223027529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_useAutoRandomSeed()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_useAutoRandomSeed(System.Boolean)
extern "C"  void ParticleSystem_set_useAutoRandomSeed_m853157030 (ParticleSystem_t3847287324 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_useAutoRandomSeed_m853157030_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_set_useAutoRandomSeed_m853157030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_useAutoRandomSeed_m853157030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_useAutoRandomSeed(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
extern "C"  MainModule_t3252910686  ParticleSystem_get_main_m475575326 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	MainModule_t3252910686  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		MainModule_t3252910686  L_0;
		memset(&L_0, 0, sizeof(L_0));
		MainModule__ctor_m1405829029((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		MainModule_t3252910686  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t3019712910  ParticleSystem_get_emission_m1872453267 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	EmissionModule_t3019712910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		EmissionModule_t3019712910  L_0;
		memset(&L_0, 0, sizeof(L_0));
		EmissionModule__ctor_m3827080463((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		EmissionModule_t3019712910  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape()
extern "C"  ShapeModule_t3645627290  ParticleSystem_get_shape_m1584746478 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	ShapeModule_t3645627290  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ShapeModule_t3645627290  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ShapeModule__ctor_m1730568006((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ShapeModule_t3645627290  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/VelocityOverLifetimeModule UnityEngine.ParticleSystem::get_velocityOverLifetime()
extern "C"  VelocityOverLifetimeModule_t128895923  ParticleSystem_get_velocityOverLifetime_m2281645277 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_t128895923  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		VelocityOverLifetimeModule_t128895923  L_0;
		memset(&L_0, 0, sizeof(L_0));
		VelocityOverLifetimeModule__ctor_m922784064((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		VelocityOverLifetimeModule_t128895923  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule UnityEngine.ParticleSystem::get_limitVelocityOverLifetime()
extern "C"  LimitVelocityOverLifetimeModule_t274018710  ParticleSystem_get_limitVelocityOverLifetime_m2370912826 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	LimitVelocityOverLifetimeModule_t274018710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		LimitVelocityOverLifetimeModule_t274018710  L_0;
		memset(&L_0, 0, sizeof(L_0));
		LimitVelocityOverLifetimeModule__ctor_m1230928511((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		LimitVelocityOverLifetimeModule_t274018710  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/InheritVelocityModule UnityEngine.ParticleSystem::get_inheritVelocity()
extern "C"  InheritVelocityModule_t4236939944  ParticleSystem_get_inheritVelocity_m3320330780 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	InheritVelocityModule_t4236939944  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		InheritVelocityModule_t4236939944  L_0;
		memset(&L_0, 0, sizeof(L_0));
		InheritVelocityModule__ctor_m2252868730((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InheritVelocityModule_t4236939944  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ForceOverLifetimeModule UnityEngine.ParticleSystem::get_forceOverLifetime()
extern "C"  ForceOverLifetimeModule_t849035595  ParticleSystem_get_forceOverLifetime_m3877532808 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	ForceOverLifetimeModule_t849035595  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ForceOverLifetimeModule_t849035595  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ForceOverLifetimeModule__ctor_m2444887397((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ForceOverLifetimeModule_t849035595  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ColorOverLifetimeModule UnityEngine.ParticleSystem::get_colorOverLifetime()
extern "C"  ColorOverLifetimeModule_t3058163430  ParticleSystem_get_colorOverLifetime_m2755509337 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t3058163430  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ColorOverLifetimeModule_t3058163430  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ColorOverLifetimeModule__ctor_m1033669071((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ColorOverLifetimeModule_t3058163430  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ColorBySpeedModule UnityEngine.ParticleSystem::get_colorBySpeed()
extern "C"  ColorBySpeedModule_t1411731932  ParticleSystem_get_colorBySpeed_m1298295542 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	ColorBySpeedModule_t1411731932  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ColorBySpeedModule_t1411731932  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ColorBySpeedModule__ctor_m179931955((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ColorBySpeedModule_t1411731932  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/SizeOverLifetimeModule UnityEngine.ParticleSystem::get_sizeOverLifetime()
extern "C"  SizeOverLifetimeModule_t2642970242  ParticleSystem_get_sizeOverLifetime_m457426969 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	SizeOverLifetimeModule_t2642970242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SizeOverLifetimeModule_t2642970242  L_0;
		memset(&L_0, 0, sizeof(L_0));
		SizeOverLifetimeModule__ctor_m2931597205((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		SizeOverLifetimeModule_t2642970242  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/SizeBySpeedModule UnityEngine.ParticleSystem::get_sizeBySpeed()
extern "C"  SizeBySpeedModule_t453162143  ParticleSystem_get_sizeBySpeed_m1906417379 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	SizeBySpeedModule_t453162143  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SizeBySpeedModule_t453162143  L_0;
		memset(&L_0, 0, sizeof(L_0));
		SizeBySpeedModule__ctor_m1973047952((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		SizeBySpeedModule_t453162143  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/RotationOverLifetimeModule UnityEngine.ParticleSystem::get_rotationOverLifetime()
extern "C"  RotationOverLifetimeModule_t2127923417  ParticleSystem_get_rotationOverLifetime_m3201353349 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	RotationOverLifetimeModule_t2127923417  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RotationOverLifetimeModule_t2127923417  L_0;
		memset(&L_0, 0, sizeof(L_0));
		RotationOverLifetimeModule__ctor_m2605365092((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RotationOverLifetimeModule_t2127923417  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/RotationBySpeedModule UnityEngine.ParticleSystem::get_rotationBySpeed()
extern "C"  RotationBySpeedModule_t2651092880  ParticleSystem_get_rotationBySpeed_m2878818888 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	RotationBySpeedModule_t2651092880  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RotationBySpeedModule_t2651092880  L_0;
		memset(&L_0, 0, sizeof(L_0));
		RotationBySpeedModule__ctor_m3462398667((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RotationBySpeedModule_t2651092880  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ExternalForcesModule UnityEngine.ParticleSystem::get_externalForces()
extern "C"  ExternalForcesModule_t3652731566  ParticleSystem_get_externalForces_m3504831989 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	ExternalForcesModule_t3652731566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ExternalForcesModule_t3652731566  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ExternalForcesModule__ctor_m3981540048((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ExternalForcesModule_t3652731566  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/NoiseModule UnityEngine.ParticleSystem::get_noise()
extern "C"  NoiseModule_t4109896089  ParticleSystem_get_noise_m3042096335 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	NoiseModule_t4109896089  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NoiseModule_t4109896089  L_0;
		memset(&L_0, 0, sizeof(L_0));
		NoiseModule__ctor_m4266985437((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		NoiseModule_t4109896089  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/CollisionModule UnityEngine.ParticleSystem::get_collision()
extern "C"  CollisionModule_t2928946069  ParticleSystem_get_collision_m2415734513 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	CollisionModule_t2928946069  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CollisionModule_t2928946069  L_0;
		memset(&L_0, 0, sizeof(L_0));
		CollisionModule__ctor_m2107515601((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CollisionModule_t2928946069  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/TriggerModule UnityEngine.ParticleSystem::get_trigger()
extern "C"  TriggerModule_t2453641025  ParticleSystem_get_trigger_m3297492034 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	TriggerModule_t2453641025  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TriggerModule_t2453641025  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TriggerModule__ctor_m3031864590((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TriggerModule_t2453641025  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/SubEmittersModule UnityEngine.ParticleSystem::get_subEmitters()
extern "C"  SubEmittersModule_t3776200489  ParticleSystem_get_subEmitters_m175903372 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	SubEmittersModule_t3776200489  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SubEmittersModule_t3776200489  L_0;
		memset(&L_0, 0, sizeof(L_0));
		SubEmittersModule__ctor_m1727957668((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		SubEmittersModule_t3776200489  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
extern "C"  TextureSheetAnimationModule_t2726970690  ParticleSystem_get_textureSheetAnimation_m1810807027 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_t2726970690  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TextureSheetAnimationModule_t2726970690  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TextureSheetAnimationModule__ctor_m1894673426((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TextureSheetAnimationModule_t2726970690  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/LightsModule UnityEngine.ParticleSystem::get_lights()
extern "C"  LightsModule_t881449982  ParticleSystem_get_lights_m3748520118 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	LightsModule_t881449982  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		LightsModule_t881449982  L_0;
		memset(&L_0, 0, sizeof(L_0));
		LightsModule__ctor_m1108558810((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		LightsModule_t881449982  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
extern "C"  TrailModule_t2594148295  ParticleSystem_get_trails_m3472558856 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	TrailModule_t2594148295  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TrailModule_t2594148295  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TrailModule__ctor_m1521426893((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TrailModule_t2594148295  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/CustomDataModule UnityEngine.ParticleSystem::get_customData()
extern "C"  CustomDataModule_t3928223125  ParticleSystem_get_customData_m1324007849 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	CustomDataModule_t3928223125  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CustomDataModule_t3928223125  L_0;
		memset(&L_0, 0, sizeof(L_0));
		CustomDataModule__ctor_m1611781310((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CustomDataModule_t3928223125  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C"  void ParticleSystem_SetParticles_m284574413 (ParticleSystem_t3847287324 * __this, ParticleU5BU5D_t1615599858* ___particles0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_SetParticles_m284574413_ftn) (ParticleSystem_t3847287324 *, ParticleU5BU5D_t1615599858*, int32_t);
	static ParticleSystem_SetParticles_m284574413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_SetParticles_m284574413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)");
	_il2cpp_icall_func(__this, ___particles0, ___size1);
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m3760007996 (ParticleSystem_t3847287324 * __this, ParticleU5BU5D_t1615599858* ___particles0, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_GetParticles_m3760007996_ftn) (ParticleSystem_t3847287324 *, ParticleU5BU5D_t1615599858*);
	static ParticleSystem_GetParticles_m3760007996_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticles_m3760007996_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])");
	int32_t retVal = _il2cpp_icall_func(__this, ___particles0);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::SetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
extern "C"  void ParticleSystem_SetCustomParticleData_m3933113412 (ParticleSystem_t3847287324 * __this, List_1_t1304227762 * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method)
{
	{
		List_1_t1304227762 * L_0 = ___customData0;
		int32_t L_1 = ___streamIndex1;
		ParticleSystem_SetCustomParticleDataInternal_m2725413198(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.ParticleSystem::GetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
extern "C"  int32_t ParticleSystem_GetCustomParticleData_m1568472008 (ParticleSystem_t3847287324 * __this, List_1_t1304227762 * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		List_1_t1304227762 * L_0 = ___customData0;
		int32_t L_1 = ___streamIndex1;
		int32_t L_2 = ParticleSystem_GetCustomParticleDataInternal_m112742821(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.ParticleSystem::SetCustomParticleDataInternal(System.Object,System.Int32)
extern "C"  void ParticleSystem_SetCustomParticleDataInternal_m2725413198 (ParticleSystem_t3847287324 * __this, RuntimeObject * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_SetCustomParticleDataInternal_m2725413198_ftn) (ParticleSystem_t3847287324 *, RuntimeObject *, int32_t);
	static ParticleSystem_SetCustomParticleDataInternal_m2725413198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_SetCustomParticleDataInternal_m2725413198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::SetCustomParticleDataInternal(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, ___customData0, ___streamIndex1);
}
// System.Int32 UnityEngine.ParticleSystem::GetCustomParticleDataInternal(System.Object,System.Int32)
extern "C"  int32_t ParticleSystem_GetCustomParticleDataInternal_m112742821 (ParticleSystem_t3847287324 * __this, RuntimeObject * ___customData0, int32_t ___streamIndex1, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_GetCustomParticleDataInternal_m112742821_ftn) (ParticleSystem_t3847287324 *, RuntimeObject *, int32_t);
	static ParticleSystem_GetCustomParticleDataInternal_m112742821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetCustomParticleDataInternal_m112742821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetCustomParticleDataInternal(System.Object,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customData0, ___streamIndex1);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m1221220579 (ParticleSystem_t3847287324 * __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Simulate_m1221220579_ftn) (ParticleSystem_t3847287324 *, float, bool, bool, bool);
	static ParticleSystem_Simulate_m1221220579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Simulate_m1221220579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___t0, ___withChildren1, ___restart2, ___fixedTimeStep3);
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m725368484 (ParticleSystem_t3847287324 * __this, float ___t0, bool ___withChildren1, bool ___restart2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		float L_0 = ___t0;
		bool L_1 = ___withChildren1;
		bool L_2 = ___restart2;
		bool L_3 = V_0;
		ParticleSystem_Simulate_m1221220579(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean)
extern "C"  void ParticleSystem_Simulate_m203814791 (ParticleSystem_t3847287324 * __this, float ___t0, bool ___withChildren1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)1;
		V_1 = (bool)1;
		float L_0 = ___t0;
		bool L_1 = ___withChildren1;
		bool L_2 = V_1;
		bool L_3 = V_0;
		ParticleSystem_Simulate_m1221220579(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single)
extern "C"  void ParticleSystem_Simulate_m2169287399 (ParticleSystem_t3847287324 * __this, float ___t0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (bool)1;
		V_1 = (bool)1;
		V_2 = (bool)1;
		float L_0 = ___t0;
		bool L_1 = V_2;
		bool L_2 = V_1;
		bool L_3 = V_0;
		ParticleSystem_Simulate_m1221220579(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m3980253936 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Play_m3980253936_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_Play_m3980253936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Play_m3980253936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Play(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m2105777848 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Play_m3980253936(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Pause(System.Boolean)
extern "C"  void ParticleSystem_Pause_m3320486486 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Pause_m3320486486_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_Pause_m3320486486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Pause_m3320486486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Pause(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Pause()
extern "C"  void ParticleSystem_Pause_m285848326 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Pause_m3320486486(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
extern "C"  void ParticleSystem_Stop_m461804911 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, int32_t ___stopBehavior1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Stop_m461804911_ftn) (ParticleSystem_t3847287324 *, bool, int32_t);
	static ParticleSystem_Stop_m461804911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Stop_m461804911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)");
	_il2cpp_icall_func(__this, ___withChildren0, ___stopBehavior1);
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C"  void ParticleSystem_Stop_m1700579336 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		bool L_0 = ___withChildren0;
		int32_t L_1 = V_0;
		ParticleSystem_Stop_m461804911(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m1003904827 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 1;
		V_1 = (bool)1;
		bool L_0 = V_1;
		int32_t L_1 = V_0;
		ParticleSystem_Stop_m461804911(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C"  void ParticleSystem_Clear_m2560854447 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Clear_m2560854447_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_Clear_m2560854447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Clear_m2560854447_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C"  void ParticleSystem_Clear_m266416079 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Clear_m2560854447(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m1216665663 (ParticleSystem_t3847287324 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_IsAlive_m1216665663_ftn) (ParticleSystem_t3847287324 *, bool);
	static ParticleSystem_IsAlive_m1216665663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_IsAlive_m1216665663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::IsAlive(System.Boolean)");
	bool retVal = _il2cpp_icall_func(__this, ___withChildren0);
	return retVal;
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
extern "C"  bool ParticleSystem_IsAlive_m2491629701 (ParticleSystem_t3847287324 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		bool L_1 = ParticleSystem_IsAlive_m1216665663(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C"  void ParticleSystem_Emit_m70170671 (ParticleSystem_t3847287324 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count0;
		ParticleSystem_INTERNAL_CALL_Emit_m3363143552(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m3363143552 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___self0, int32_t ___count1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_INTERNAL_CALL_Emit_m3363143552_ftn) (ParticleSystem_t3847287324 *, int32_t);
	static ParticleSystem_INTERNAL_CALL_Emit_m3363143552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_INTERNAL_CALL_Emit_m3363143552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)");
	_il2cpp_icall_func(___self0, ___count1);
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32)
extern "C"  void ParticleSystem_Emit_m1289228987 (ParticleSystem_t3847287324 * __this, Vector3_t59122720  ___position0, Vector3_t59122720  ___velocity1, float ___size2, float ___lifetime3, Color32_t3321179363  ___color4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleSystem_Emit_m1289228987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Particle_t1535577891  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Initobj (Particle_t1535577891_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t59122720  L_0 = ___position0;
		Particle_set_position_m3000218851((&V_0), L_0, /*hidden argument*/NULL);
		Vector3_t59122720  L_1 = ___velocity1;
		Particle_set_velocity_m3705016268((&V_0), L_1, /*hidden argument*/NULL);
		float L_2 = ___lifetime3;
		Particle_set_lifetime_m4124450215((&V_0), L_2, /*hidden argument*/NULL);
		float L_3 = ___lifetime3;
		Particle_set_startLifetime_m1194624670((&V_0), L_3, /*hidden argument*/NULL);
		float L_4 = ___size2;
		Particle_set_startSize_m1377500590((&V_0), L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t59122720_il2cpp_TypeInfo_var);
		Vector3_t59122720  L_5 = Vector3_get_zero_m1114295826(NULL /*static, unused*/, /*hidden argument*/NULL);
		Particle_set_rotation3D_m3452166828((&V_0), L_5, /*hidden argument*/NULL);
		Vector3_t59122720  L_6 = Vector3_get_zero_m1114295826(NULL /*static, unused*/, /*hidden argument*/NULL);
		Particle_set_angularVelocity3D_m551784609((&V_0), L_6, /*hidden argument*/NULL);
		Color32_t3321179363  L_7 = ___color4;
		Particle_set_startColor_m2949519564((&V_0), L_7, /*hidden argument*/NULL);
		Particle_set_randomSeed_m573897843((&V_0), 5, /*hidden argument*/NULL);
		ParticleSystem_Internal_EmitOld_m2636990130(__this, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle)
extern "C"  void ParticleSystem_Emit_m2447452756 (ParticleSystem_t3847287324 * __this, Particle_t1535577891  ___particle0, const RuntimeMethod* method)
{
	{
		ParticleSystem_Internal_EmitOld_m2636990130(__this, (&___particle0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Internal_EmitOld(UnityEngine.ParticleSystem/Particle&)
extern "C"  void ParticleSystem_Internal_EmitOld_m2636990130 (ParticleSystem_t3847287324 * __this, Particle_t1535577891 * ___particle0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Internal_EmitOld_m2636990130_ftn) (ParticleSystem_t3847287324 *, Particle_t1535577891 *);
	static ParticleSystem_Internal_EmitOld_m2636990130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_EmitOld_m2636990130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_EmitOld(UnityEngine.ParticleSystem/Particle&)");
	_il2cpp_icall_func(__this, ___particle0);
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
extern "C"  void ParticleSystem_Emit_m1573747503 (ParticleSystem_t3847287324 * __this, EmitParams_t477654599  ___emitParams0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count1;
		ParticleSystem_Internal_Emit_m469605496(__this, (&___emitParams0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Internal_Emit(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
extern "C"  void ParticleSystem_Internal_Emit_m469605496 (ParticleSystem_t3847287324 * __this, EmitParams_t477654599 * ___emitParams0, int32_t ___count1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Internal_Emit_m469605496_ftn) (ParticleSystem_t3847287324 *, EmitParams_t477654599 *, int32_t);
	static ParticleSystem_Internal_Emit_m469605496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Internal_Emit_m469605496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Internal_Emit(UnityEngine.ParticleSystem/EmitParams&,System.Int32)");
	_il2cpp_icall_func(__this, ___emitParams0, ___count1);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CollisionModule
extern "C" void CollisionModule_t2928946069_marshal_pinvoke(const CollisionModule_t2928946069& unmarshaled, CollisionModule_t2928946069_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CollisionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void CollisionModule_t2928946069_marshal_pinvoke_back(const CollisionModule_t2928946069_marshaled_pinvoke& marshaled, CollisionModule_t2928946069& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CollisionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CollisionModule
extern "C" void CollisionModule_t2928946069_marshal_pinvoke_cleanup(CollisionModule_t2928946069_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CollisionModule
extern "C" void CollisionModule_t2928946069_marshal_com(const CollisionModule_t2928946069& unmarshaled, CollisionModule_t2928946069_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CollisionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void CollisionModule_t2928946069_marshal_com_back(const CollisionModule_t2928946069_marshaled_com& marshaled, CollisionModule_t2928946069& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CollisionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CollisionModule
extern "C" void CollisionModule_t2928946069_marshal_com_cleanup(CollisionModule_t2928946069_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/CollisionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void CollisionModule__ctor_m2107515601 (CollisionModule_t2928946069 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void CollisionModule__ctor_m2107515601_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	CollisionModule_t2928946069 * _thisAdjusted = reinterpret_cast<CollisionModule_t2928946069 *>(__this + 1);
	CollisionModule__ctor_m2107515601(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorBySpeedModule
extern "C" void ColorBySpeedModule_t1411731932_marshal_pinvoke(const ColorBySpeedModule_t1411731932& unmarshaled, ColorBySpeedModule_t1411731932_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ColorBySpeedModule_t1411731932_marshal_pinvoke_back(const ColorBySpeedModule_t1411731932_marshaled_pinvoke& marshaled, ColorBySpeedModule_t1411731932& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorBySpeedModule
extern "C" void ColorBySpeedModule_t1411731932_marshal_pinvoke_cleanup(ColorBySpeedModule_t1411731932_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorBySpeedModule
extern "C" void ColorBySpeedModule_t1411731932_marshal_com(const ColorBySpeedModule_t1411731932& unmarshaled, ColorBySpeedModule_t1411731932_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ColorBySpeedModule_t1411731932_marshal_com_back(const ColorBySpeedModule_t1411731932_marshaled_com& marshaled, ColorBySpeedModule_t1411731932& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorBySpeedModule
extern "C" void ColorBySpeedModule_t1411731932_marshal_com_cleanup(ColorBySpeedModule_t1411731932_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ColorBySpeedModule__ctor_m179931955 (ColorBySpeedModule_t1411731932 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void ColorBySpeedModule__ctor_m179931955_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	ColorBySpeedModule_t1411731932 * _thisAdjusted = reinterpret_cast<ColorBySpeedModule_t1411731932 *>(__this + 1);
	ColorBySpeedModule__ctor_m179931955(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_pinvoke(const ColorOverLifetimeModule_t3058163430& unmarshaled, ColorOverLifetimeModule_t3058163430_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_pinvoke_back(const ColorOverLifetimeModule_t3058163430_marshaled_pinvoke& marshaled, ColorOverLifetimeModule_t3058163430& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_pinvoke_cleanup(ColorOverLifetimeModule_t3058163430_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_com(const ColorOverLifetimeModule_t3058163430& unmarshaled, ColorOverLifetimeModule_t3058163430_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_com_back(const ColorOverLifetimeModule_t3058163430_marshaled_com& marshaled, ColorOverLifetimeModule_t3058163430& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ColorOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ColorOverLifetimeModule
extern "C" void ColorOverLifetimeModule_t3058163430_marshal_com_cleanup(ColorOverLifetimeModule_t3058163430_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ColorOverLifetimeModule__ctor_m1033669071 (ColorOverLifetimeModule_t3058163430 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void ColorOverLifetimeModule__ctor_m1033669071_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	ColorOverLifetimeModule_t3058163430 * _thisAdjusted = reinterpret_cast<ColorOverLifetimeModule_t3058163430 *>(__this + 1);
	ColorOverLifetimeModule__ctor_m1033669071(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CustomDataModule
extern "C" void CustomDataModule_t3928223125_marshal_pinvoke(const CustomDataModule_t3928223125& unmarshaled, CustomDataModule_t3928223125_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void CustomDataModule_t3928223125_marshal_pinvoke_back(const CustomDataModule_t3928223125_marshaled_pinvoke& marshaled, CustomDataModule_t3928223125& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CustomDataModule
extern "C" void CustomDataModule_t3928223125_marshal_pinvoke_cleanup(CustomDataModule_t3928223125_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/CustomDataModule
extern "C" void CustomDataModule_t3928223125_marshal_com(const CustomDataModule_t3928223125& unmarshaled, CustomDataModule_t3928223125_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void CustomDataModule_t3928223125_marshal_com_back(const CustomDataModule_t3928223125_marshaled_com& marshaled, CustomDataModule_t3928223125& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'CustomDataModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/CustomDataModule
extern "C" void CustomDataModule_t3928223125_marshal_com_cleanup(CustomDataModule_t3928223125_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/CustomDataModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void CustomDataModule__ctor_m1611781310 (CustomDataModule_t3928223125 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void CustomDataModule__ctor_m1611781310_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	CustomDataModule_t3928223125 * _thisAdjusted = reinterpret_cast<CustomDataModule_t3928223125 *>(__this + 1);
	CustomDataModule__ctor_m1611781310(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t3019712910_marshal_pinvoke(const EmissionModule_t3019712910& unmarshaled, EmissionModule_t3019712910_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void EmissionModule_t3019712910_marshal_pinvoke_back(const EmissionModule_t3019712910_marshaled_pinvoke& marshaled, EmissionModule_t3019712910& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t3019712910_marshal_pinvoke_cleanup(EmissionModule_t3019712910_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t3019712910_marshal_com(const EmissionModule_t3019712910& unmarshaled, EmissionModule_t3019712910_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void EmissionModule_t3019712910_marshal_com_back(const EmissionModule_t3019712910_marshaled_com& marshaled, EmissionModule_t3019712910& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t3019712910_marshal_com_cleanup(EmissionModule_t3019712910_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void EmissionModule__ctor_m3827080463 (EmissionModule_t3019712910 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void EmissionModule__ctor_m3827080463_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	EmissionModule_t3019712910 * _thisAdjusted = reinterpret_cast<EmissionModule_t3019712910 *>(__this + 1);
	EmissionModule__ctor_m3827080463(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C"  void EmissionModule_set_enabled_m1033135267 (EmissionModule_t3019712910 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = __this->get_m_ParticleSystem_0();
		bool L_1 = ___value0;
		EmissionModule_SetEnabled_m520335713(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void EmissionModule_set_enabled_m1033135267_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	EmissionModule_t3019712910 * _thisAdjusted = reinterpret_cast<EmissionModule_t3019712910 *>(__this + 1);
	EmissionModule_set_enabled_m1033135267(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::get_enabled()
extern "C"  bool EmissionModule_get_enabled_m2481248755 (EmissionModule_t3019712910 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ParticleSystem_t3847287324 * L_0 = __this->get_m_ParticleSystem_0();
		bool L_1 = EmissionModule_GetEnabled_m955617669(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool EmissionModule_get_enabled_m2481248755_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EmissionModule_t3019712910 * _thisAdjusted = reinterpret_cast<EmissionModule_t3019712910 *>(__this + 1);
	return EmissionModule_get_enabled_m2481248755(_thisAdjusted, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
extern "C"  void EmissionModule_set_rateOverTime_m318733085 (EmissionModule_t3019712910 * __this, MinMaxCurve_t2231414430  ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = __this->get_m_ParticleSystem_0();
		EmissionModule_SetRateOverTime_m2862096936(NULL /*static, unused*/, L_0, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void EmissionModule_set_rateOverTime_m318733085_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_t2231414430  ___value0, const RuntimeMethod* method)
{
	EmissionModule_t3019712910 * _thisAdjusted = reinterpret_cast<EmissionModule_t3019712910 *>(__this + 1);
	EmissionModule_set_rateOverTime_m318733085(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverTimeMultiplier()
extern "C"  float EmissionModule_get_rateOverTimeMultiplier_m4047324932 (EmissionModule_t3019712910 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		ParticleSystem_t3847287324 * L_0 = __this->get_m_ParticleSystem_0();
		float L_1 = EmissionModule_GetRateOverTimeMultiplier_m3652004491(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
extern "C"  float EmissionModule_get_rateOverTimeMultiplier_m4047324932_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EmissionModule_t3019712910 * _thisAdjusted = reinterpret_cast<EmissionModule_t3019712910 *>(__this + 1);
	return EmissionModule_get_rateOverTimeMultiplier_m4047324932(_thisAdjusted, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void EmissionModule_SetEnabled_m520335713 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_SetEnabled_m520335713_ftn) (ParticleSystem_t3847287324 *, bool);
	static EmissionModule_SetEnabled_m520335713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_SetEnabled_m520335713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)");
	_il2cpp_icall_func(___system0, ___value1);
}
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::GetEnabled(UnityEngine.ParticleSystem)
extern "C"  bool EmissionModule_GetEnabled_m955617669 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, const RuntimeMethod* method)
{
	typedef bool (*EmissionModule_GetEnabled_m955617669_ftn) (ParticleSystem_t3847287324 *);
	static EmissionModule_GetEnabled_m955617669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_GetEnabled_m955617669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::GetEnabled(UnityEngine.ParticleSystem)");
	bool retVal = _il2cpp_icall_func(___system0);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetRateOverTime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
extern "C"  void EmissionModule_SetRateOverTime_m2862096936 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, MinMaxCurve_t2231414430 * ___curve1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_SetRateOverTime_m2862096936_ftn) (ParticleSystem_t3847287324 *, MinMaxCurve_t2231414430 *);
	static EmissionModule_SetRateOverTime_m2862096936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_SetRateOverTime_m2862096936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::SetRateOverTime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(___system0, ___curve1);
}
// System.Single UnityEngine.ParticleSystem/EmissionModule::GetRateOverTimeMultiplier(UnityEngine.ParticleSystem)
extern "C"  float EmissionModule_GetRateOverTimeMultiplier_m3652004491 (RuntimeObject * __this /* static, unused */, ParticleSystem_t3847287324 * ___system0, const RuntimeMethod* method)
{
	typedef float (*EmissionModule_GetRateOverTimeMultiplier_m3652004491_ftn) (ParticleSystem_t3847287324 *);
	static EmissionModule_GetRateOverTimeMultiplier_m3652004491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_GetRateOverTimeMultiplier_m3652004491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::GetRateOverTimeMultiplier(UnityEngine.ParticleSystem)");
	float retVal = _il2cpp_icall_func(___system0);
	return retVal;
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t477654599_marshal_pinvoke(const EmitParams_t477654599& unmarshaled, EmitParams_t477654599_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_ApplyShapeToPosition_10 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_10());
}
extern "C" void EmitParams_t477654599_marshal_pinvoke_back(const EmitParams_t477654599_marshaled_pinvoke& marshaled, EmitParams_t477654599& unmarshaled)
{
	Particle_t1535577891  unmarshaled_m_Particle_temp_0;
	memset(&unmarshaled_m_Particle_temp_0, 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_ApplyShapeToPosition_temp_10 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_10 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_10);
	unmarshaled.set_m_ApplyShapeToPosition_10(unmarshaled_m_ApplyShapeToPosition_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t477654599_marshal_pinvoke_cleanup(EmitParams_t477654599_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t477654599_marshal_com(const EmitParams_t477654599& unmarshaled, EmitParams_t477654599_marshaled_com& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_ApplyShapeToPosition_10 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_10());
}
extern "C" void EmitParams_t477654599_marshal_com_back(const EmitParams_t477654599_marshaled_com& marshaled, EmitParams_t477654599& unmarshaled)
{
	Particle_t1535577891  unmarshaled_m_Particle_temp_0;
	memset(&unmarshaled_m_Particle_temp_0, 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_ApplyShapeToPosition_temp_10 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_10 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_10);
	unmarshaled.set_m_ApplyShapeToPosition_10(unmarshaled_m_ApplyShapeToPosition_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t477654599_marshal_com_cleanup(EmitParams_t477654599_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ExternalForcesModule
extern "C" void ExternalForcesModule_t3652731566_marshal_pinvoke(const ExternalForcesModule_t3652731566& unmarshaled, ExternalForcesModule_t3652731566_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ExternalForcesModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ExternalForcesModule_t3652731566_marshal_pinvoke_back(const ExternalForcesModule_t3652731566_marshaled_pinvoke& marshaled, ExternalForcesModule_t3652731566& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ExternalForcesModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ExternalForcesModule
extern "C" void ExternalForcesModule_t3652731566_marshal_pinvoke_cleanup(ExternalForcesModule_t3652731566_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ExternalForcesModule
extern "C" void ExternalForcesModule_t3652731566_marshal_com(const ExternalForcesModule_t3652731566& unmarshaled, ExternalForcesModule_t3652731566_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ExternalForcesModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ExternalForcesModule_t3652731566_marshal_com_back(const ExternalForcesModule_t3652731566_marshaled_com& marshaled, ExternalForcesModule_t3652731566& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ExternalForcesModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ExternalForcesModule
extern "C" void ExternalForcesModule_t3652731566_marshal_com_cleanup(ExternalForcesModule_t3652731566_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ExternalForcesModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ExternalForcesModule__ctor_m3981540048 (ExternalForcesModule_t3652731566 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void ExternalForcesModule__ctor_m3981540048_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	ExternalForcesModule_t3652731566 * _thisAdjusted = reinterpret_cast<ExternalForcesModule_t3652731566 *>(__this + 1);
	ExternalForcesModule__ctor_m3981540048(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ForceOverLifetimeModule
extern "C" void ForceOverLifetimeModule_t849035595_marshal_pinvoke(const ForceOverLifetimeModule_t849035595& unmarshaled, ForceOverLifetimeModule_t849035595_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ForceOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ForceOverLifetimeModule_t849035595_marshal_pinvoke_back(const ForceOverLifetimeModule_t849035595_marshaled_pinvoke& marshaled, ForceOverLifetimeModule_t849035595& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ForceOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ForceOverLifetimeModule
extern "C" void ForceOverLifetimeModule_t849035595_marshal_pinvoke_cleanup(ForceOverLifetimeModule_t849035595_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ForceOverLifetimeModule
extern "C" void ForceOverLifetimeModule_t849035595_marshal_com(const ForceOverLifetimeModule_t849035595& unmarshaled, ForceOverLifetimeModule_t849035595_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ForceOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ForceOverLifetimeModule_t849035595_marshal_com_back(const ForceOverLifetimeModule_t849035595_marshaled_com& marshaled, ForceOverLifetimeModule_t849035595& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ForceOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ForceOverLifetimeModule
extern "C" void ForceOverLifetimeModule_t849035595_marshal_com_cleanup(ForceOverLifetimeModule_t849035595_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ForceOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ForceOverLifetimeModule__ctor_m2444887397 (ForceOverLifetimeModule_t849035595 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void ForceOverLifetimeModule__ctor_m2444887397_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	ForceOverLifetimeModule_t849035595 * _thisAdjusted = reinterpret_cast<ForceOverLifetimeModule_t849035595 *>(__this + 1);
	ForceOverLifetimeModule__ctor_m2444887397(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/InheritVelocityModule
extern "C" void InheritVelocityModule_t4236939944_marshal_pinvoke(const InheritVelocityModule_t4236939944& unmarshaled, InheritVelocityModule_t4236939944_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'InheritVelocityModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void InheritVelocityModule_t4236939944_marshal_pinvoke_back(const InheritVelocityModule_t4236939944_marshaled_pinvoke& marshaled, InheritVelocityModule_t4236939944& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'InheritVelocityModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/InheritVelocityModule
extern "C" void InheritVelocityModule_t4236939944_marshal_pinvoke_cleanup(InheritVelocityModule_t4236939944_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/InheritVelocityModule
extern "C" void InheritVelocityModule_t4236939944_marshal_com(const InheritVelocityModule_t4236939944& unmarshaled, InheritVelocityModule_t4236939944_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'InheritVelocityModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void InheritVelocityModule_t4236939944_marshal_com_back(const InheritVelocityModule_t4236939944_marshaled_com& marshaled, InheritVelocityModule_t4236939944& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'InheritVelocityModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/InheritVelocityModule
extern "C" void InheritVelocityModule_t4236939944_marshal_com_cleanup(InheritVelocityModule_t4236939944_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/InheritVelocityModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void InheritVelocityModule__ctor_m2252868730 (InheritVelocityModule_t4236939944 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void InheritVelocityModule__ctor_m2252868730_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	InheritVelocityModule_t4236939944 * _thisAdjusted = reinterpret_cast<InheritVelocityModule_t4236939944 *>(__this + 1);
	InheritVelocityModule__ctor_m2252868730(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LightsModule
extern "C" void LightsModule_t881449982_marshal_pinvoke(const LightsModule_t881449982& unmarshaled, LightsModule_t881449982_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void LightsModule_t881449982_marshal_pinvoke_back(const LightsModule_t881449982_marshaled_pinvoke& marshaled, LightsModule_t881449982& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LightsModule
extern "C" void LightsModule_t881449982_marshal_pinvoke_cleanup(LightsModule_t881449982_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LightsModule
extern "C" void LightsModule_t881449982_marshal_com(const LightsModule_t881449982& unmarshaled, LightsModule_t881449982_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void LightsModule_t881449982_marshal_com_back(const LightsModule_t881449982_marshaled_com& marshaled, LightsModule_t881449982& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LightsModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LightsModule
extern "C" void LightsModule_t881449982_marshal_com_cleanup(LightsModule_t881449982_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/LightsModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void LightsModule__ctor_m1108558810 (LightsModule_t881449982 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void LightsModule__ctor_m1108558810_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	LightsModule_t881449982 * _thisAdjusted = reinterpret_cast<LightsModule_t881449982 *>(__this + 1);
	LightsModule__ctor_m1108558810(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_pinvoke(const LimitVelocityOverLifetimeModule_t274018710& unmarshaled, LimitVelocityOverLifetimeModule_t274018710_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LimitVelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_pinvoke_back(const LimitVelocityOverLifetimeModule_t274018710_marshaled_pinvoke& marshaled, LimitVelocityOverLifetimeModule_t274018710& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LimitVelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_pinvoke_cleanup(LimitVelocityOverLifetimeModule_t274018710_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_com(const LimitVelocityOverLifetimeModule_t274018710& unmarshaled, LimitVelocityOverLifetimeModule_t274018710_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LimitVelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_com_back(const LimitVelocityOverLifetimeModule_t274018710_marshaled_com& marshaled, LimitVelocityOverLifetimeModule_t274018710& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'LimitVelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
extern "C" void LimitVelocityOverLifetimeModule_t274018710_marshal_com_cleanup(LimitVelocityOverLifetimeModule_t274018710_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void LimitVelocityOverLifetimeModule__ctor_m1230928511 (LimitVelocityOverLifetimeModule_t274018710 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void LimitVelocityOverLifetimeModule__ctor_m1230928511_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	LimitVelocityOverLifetimeModule_t274018710 * _thisAdjusted = reinterpret_cast<LimitVelocityOverLifetimeModule_t274018710 *>(__this + 1);
	LimitVelocityOverLifetimeModule__ctor_m1230928511(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t3252910686_marshal_pinvoke(const MainModule_t3252910686& unmarshaled, MainModule_t3252910686_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void MainModule_t3252910686_marshal_pinvoke_back(const MainModule_t3252910686_marshaled_pinvoke& marshaled, MainModule_t3252910686& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t3252910686_marshal_pinvoke_cleanup(MainModule_t3252910686_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t3252910686_marshal_com(const MainModule_t3252910686& unmarshaled, MainModule_t3252910686_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void MainModule_t3252910686_marshal_com_back(const MainModule_t3252910686_marshaled_com& marshaled, MainModule_t3252910686& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t3252910686_marshal_com_cleanup(MainModule_t3252910686_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void MainModule__ctor_m1405829029 (MainModule_t3252910686 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void MainModule__ctor_m1405829029_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	MainModule_t3252910686 * _thisAdjusted = reinterpret_cast<MainModule_t3252910686 *>(__this + 1);
	MainModule__ctor_m1405829029(_thisAdjusted, ___particleSystem0, method);
}




// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MinMaxCurve
extern "C" void MinMaxCurve_t2231414430_marshal_pinvoke(const MinMaxCurve_t2231414430& unmarshaled, MinMaxCurve_t2231414430_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Mode_0 = unmarshaled.get_m_Mode_0();
	marshaled.___m_CurveMultiplier_1 = unmarshaled.get_m_CurveMultiplier_1();
	if (unmarshaled.get_m_CurveMin_2() != NULL) AnimationCurve_t2696015940_marshal_pinvoke(*unmarshaled.get_m_CurveMin_2(), marshaled.___m_CurveMin_2);
	if (unmarshaled.get_m_CurveMax_3() != NULL) AnimationCurve_t2696015940_marshal_pinvoke(*unmarshaled.get_m_CurveMax_3(), marshaled.___m_CurveMax_3);
	marshaled.___m_ConstantMin_4 = unmarshaled.get_m_ConstantMin_4();
	marshaled.___m_ConstantMax_5 = unmarshaled.get_m_ConstantMax_5();
}
extern "C" void MinMaxCurve_t2231414430_marshal_pinvoke_back(const MinMaxCurve_t2231414430_marshaled_pinvoke& marshaled, MinMaxCurve_t2231414430& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MinMaxCurve_t2231414430_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_m_Mode_temp_0 = 0;
	unmarshaled_m_Mode_temp_0 = marshaled.___m_Mode_0;
	unmarshaled.set_m_Mode_0(unmarshaled_m_Mode_temp_0);
	float unmarshaled_m_CurveMultiplier_temp_1 = 0.0f;
	unmarshaled_m_CurveMultiplier_temp_1 = marshaled.___m_CurveMultiplier_1;
	unmarshaled.set_m_CurveMultiplier_1(unmarshaled_m_CurveMultiplier_temp_1);
	unmarshaled.set_m_CurveMin_2((AnimationCurve_t2696015940 *)il2cpp_codegen_object_new(AnimationCurve_t2696015940_il2cpp_TypeInfo_var));
	AnimationCurve__ctor_m537880254(unmarshaled.get_m_CurveMin_2(), NULL);
	AnimationCurve_t2696015940_marshal_pinvoke_back(marshaled.___m_CurveMin_2, *unmarshaled.get_m_CurveMin_2());
	unmarshaled.set_m_CurveMax_3((AnimationCurve_t2696015940 *)il2cpp_codegen_object_new(AnimationCurve_t2696015940_il2cpp_TypeInfo_var));
	AnimationCurve__ctor_m537880254(unmarshaled.get_m_CurveMax_3(), NULL);
	AnimationCurve_t2696015940_marshal_pinvoke_back(marshaled.___m_CurveMax_3, *unmarshaled.get_m_CurveMax_3());
	float unmarshaled_m_ConstantMin_temp_4 = 0.0f;
	unmarshaled_m_ConstantMin_temp_4 = marshaled.___m_ConstantMin_4;
	unmarshaled.set_m_ConstantMin_4(unmarshaled_m_ConstantMin_temp_4);
	float unmarshaled_m_ConstantMax_temp_5 = 0.0f;
	unmarshaled_m_ConstantMax_temp_5 = marshaled.___m_ConstantMax_5;
	unmarshaled.set_m_ConstantMax_5(unmarshaled_m_ConstantMax_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MinMaxCurve
extern "C" void MinMaxCurve_t2231414430_marshal_pinvoke_cleanup(MinMaxCurve_t2231414430_marshaled_pinvoke& marshaled)
{
	AnimationCurve_t2696015940_marshal_pinvoke_cleanup(marshaled.___m_CurveMin_2);
	AnimationCurve_t2696015940_marshal_pinvoke_cleanup(marshaled.___m_CurveMax_3);
}




// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MinMaxCurve
extern "C" void MinMaxCurve_t2231414430_marshal_com(const MinMaxCurve_t2231414430& unmarshaled, MinMaxCurve_t2231414430_marshaled_com& marshaled)
{
	marshaled.___m_Mode_0 = unmarshaled.get_m_Mode_0();
	marshaled.___m_CurveMultiplier_1 = unmarshaled.get_m_CurveMultiplier_1();
	if (unmarshaled.get_m_CurveMin_2() != NULL) AnimationCurve_t2696015940_marshal_com(*unmarshaled.get_m_CurveMin_2(), *marshaled.___m_CurveMin_2);
	if (unmarshaled.get_m_CurveMax_3() != NULL) AnimationCurve_t2696015940_marshal_com(*unmarshaled.get_m_CurveMax_3(), *marshaled.___m_CurveMax_3);
	marshaled.___m_ConstantMin_4 = unmarshaled.get_m_ConstantMin_4();
	marshaled.___m_ConstantMax_5 = unmarshaled.get_m_ConstantMax_5();
}
extern "C" void MinMaxCurve_t2231414430_marshal_com_back(const MinMaxCurve_t2231414430_marshaled_com& marshaled, MinMaxCurve_t2231414430& unmarshaled)
{
	int32_t unmarshaled_m_Mode_temp_0 = 0;
	unmarshaled_m_Mode_temp_0 = marshaled.___m_Mode_0;
	unmarshaled.set_m_Mode_0(unmarshaled_m_Mode_temp_0);
	float unmarshaled_m_CurveMultiplier_temp_1 = 0.0f;
	unmarshaled_m_CurveMultiplier_temp_1 = marshaled.___m_CurveMultiplier_1;
	unmarshaled.set_m_CurveMultiplier_1(unmarshaled_m_CurveMultiplier_temp_1);
	if (unmarshaled.get_m_CurveMin_2() != NULL)
	{
		AnimationCurve__ctor_m537880254(unmarshaled.get_m_CurveMin_2(), NULL);
		AnimationCurve_t2696015940_marshal_com_back(*marshaled.___m_CurveMin_2, *unmarshaled.get_m_CurveMin_2());
	}
	if (unmarshaled.get_m_CurveMax_3() != NULL)
	{
		AnimationCurve__ctor_m537880254(unmarshaled.get_m_CurveMax_3(), NULL);
		AnimationCurve_t2696015940_marshal_com_back(*marshaled.___m_CurveMax_3, *unmarshaled.get_m_CurveMax_3());
	}
	float unmarshaled_m_ConstantMin_temp_4 = 0.0f;
	unmarshaled_m_ConstantMin_temp_4 = marshaled.___m_ConstantMin_4;
	unmarshaled.set_m_ConstantMin_4(unmarshaled_m_ConstantMin_temp_4);
	float unmarshaled_m_ConstantMax_temp_5 = 0.0f;
	unmarshaled_m_ConstantMax_temp_5 = marshaled.___m_ConstantMax_5;
	unmarshaled.set_m_ConstantMax_5(unmarshaled_m_ConstantMax_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MinMaxCurve
extern "C" void MinMaxCurve_t2231414430_marshal_com_cleanup(MinMaxCurve_t2231414430_marshaled_com& marshaled)
{
	if (&(*marshaled.___m_CurveMin_2) != NULL) AnimationCurve_t2696015940_marshal_com_cleanup(*marshaled.___m_CurveMin_2);
	if (&(*marshaled.___m_CurveMax_3) != NULL) AnimationCurve_t2696015940_marshal_com_cleanup(*marshaled.___m_CurveMax_3);
}
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
extern "C"  void MinMaxCurve__ctor_m2917263778 (MinMaxCurve_t2231414430 * __this, float ___constant0, const RuntimeMethod* method)
{
	{
		__this->set_m_Mode_0(0);
		__this->set_m_CurveMultiplier_1((0.0f));
		__this->set_m_CurveMin_2((AnimationCurve_t2696015940 *)NULL);
		__this->set_m_CurveMax_3((AnimationCurve_t2696015940 *)NULL);
		__this->set_m_ConstantMin_4((0.0f));
		float L_0 = ___constant0;
		__this->set_m_ConstantMax_5(L_0);
		return;
	}
}
extern "C"  void MinMaxCurve__ctor_m2917263778_AdjustorThunk (RuntimeObject * __this, float ___constant0, const RuntimeMethod* method)
{
	MinMaxCurve_t2231414430 * _thisAdjusted = reinterpret_cast<MinMaxCurve_t2231414430 *>(__this + 1);
	MinMaxCurve__ctor_m2917263778(_thisAdjusted, ___constant0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
extern "C"  MinMaxCurve_t2231414430  MinMaxCurve_op_Implicit_m451636697 (RuntimeObject * __this /* static, unused */, float ___constant0, const RuntimeMethod* method)
{
	MinMaxCurve_t2231414430  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___constant0;
		MinMaxCurve_t2231414430  L_1;
		memset(&L_1, 0, sizeof(L_1));
		MinMaxCurve__ctor_m2917263778((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MinMaxCurve_t2231414430  L_2 = V_0;
		return L_2;
	}
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/NoiseModule
extern "C" void NoiseModule_t4109896089_marshal_pinvoke(const NoiseModule_t4109896089& unmarshaled, NoiseModule_t4109896089_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void NoiseModule_t4109896089_marshal_pinvoke_back(const NoiseModule_t4109896089_marshaled_pinvoke& marshaled, NoiseModule_t4109896089& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/NoiseModule
extern "C" void NoiseModule_t4109896089_marshal_pinvoke_cleanup(NoiseModule_t4109896089_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/NoiseModule
extern "C" void NoiseModule_t4109896089_marshal_com(const NoiseModule_t4109896089& unmarshaled, NoiseModule_t4109896089_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void NoiseModule_t4109896089_marshal_com_back(const NoiseModule_t4109896089_marshaled_com& marshaled, NoiseModule_t4109896089& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/NoiseModule
extern "C" void NoiseModule_t4109896089_marshal_com_cleanup(NoiseModule_t4109896089_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void NoiseModule__ctor_m4266985437 (NoiseModule_t4109896089 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void NoiseModule__ctor_m4266985437_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	NoiseModule_t4109896089 * _thisAdjusted = reinterpret_cast<NoiseModule_t4109896089 *>(__this + 1);
	NoiseModule__ctor_m4266985437(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m3000218851 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t59122720  L_0 = ___value0;
		__this->set_m_Position_0(L_0);
		return;
	}
}
extern "C"  void Particle_set_position_m3000218851_AdjustorThunk (RuntimeObject * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_position_m3000218851(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C"  void Particle_set_velocity_m3705016268 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t59122720  L_0 = ___value0;
		__this->set_m_Velocity_1(L_0);
		return;
	}
}
extern "C"  void Particle_set_velocity_m3705016268_AdjustorThunk (RuntimeObject * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_velocity_m3705016268(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C"  void Particle_set_lifetime_m4124450215 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Lifetime_10(L_0);
		return;
	}
}
extern "C"  void Particle_set_lifetime_m4124450215_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_lifetime_m4124450215(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
extern "C"  void Particle_set_startLifetime_m1194624670 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_StartLifetime_11(L_0);
		return;
	}
}
extern "C"  void Particle_set_startLifetime_m1194624670_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_startLifetime_m1194624670(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
extern "C"  void Particle_set_startSize_m1377500590 (Particle_t1535577891 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3_t59122720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3511729877((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_StartSize_7(L_3);
		return;
	}
}
extern "C"  void Particle_set_startSize_m1377500590_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_startSize_m1377500590(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
extern "C"  void Particle_set_rotation3D_m3452166828 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Particle_set_rotation3D_m3452166828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t59122720  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t59122720_il2cpp_TypeInfo_var);
		Vector3_t59122720  L_1 = Vector3_op_Multiply_m1395260876(NULL /*static, unused*/, L_0, (0.0174532924f), /*hidden argument*/NULL);
		__this->set_m_Rotation_5(L_1);
		return;
	}
}
extern "C"  void Particle_set_rotation3D_m3452166828_AdjustorThunk (RuntimeObject * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_rotation3D_m3452166828(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
extern "C"  void Particle_set_angularVelocity3D_m551784609 (Particle_t1535577891 * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Particle_set_angularVelocity3D_m551784609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t59122720  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t59122720_il2cpp_TypeInfo_var);
		Vector3_t59122720  L_1 = Vector3_op_Multiply_m1395260876(NULL /*static, unused*/, L_0, (0.0174532924f), /*hidden argument*/NULL);
		__this->set_m_AngularVelocity_6(L_1);
		return;
	}
}
extern "C"  void Particle_set_angularVelocity3D_m551784609_AdjustorThunk (RuntimeObject * __this, Vector3_t59122720  ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_angularVelocity3D_m551784609(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m2949519564 (Particle_t1535577891 * __this, Color32_t3321179363  ___value0, const RuntimeMethod* method)
{
	{
		Color32_t3321179363  L_0 = ___value0;
		__this->set_m_StartColor_8(L_0);
		return;
	}
}
extern "C"  void Particle_set_startColor_m2949519564_AdjustorThunk (RuntimeObject * __this, Color32_t3321179363  ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_startColor_m2949519564(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
extern "C"  void Particle_set_randomSeed_m573897843 (Particle_t1535577891 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_RandomSeed_9(L_0);
		return;
	}
}
extern "C"  void Particle_set_randomSeed_m573897843_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	Particle_t1535577891 * _thisAdjusted = reinterpret_cast<Particle_t1535577891 *>(__this + 1);
	Particle_set_randomSeed_m573897843(_thisAdjusted, ___value0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/RotationBySpeedModule
extern "C" void RotationBySpeedModule_t2651092880_marshal_pinvoke(const RotationBySpeedModule_t2651092880& unmarshaled, RotationBySpeedModule_t2651092880_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void RotationBySpeedModule_t2651092880_marshal_pinvoke_back(const RotationBySpeedModule_t2651092880_marshaled_pinvoke& marshaled, RotationBySpeedModule_t2651092880& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/RotationBySpeedModule
extern "C" void RotationBySpeedModule_t2651092880_marshal_pinvoke_cleanup(RotationBySpeedModule_t2651092880_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/RotationBySpeedModule
extern "C" void RotationBySpeedModule_t2651092880_marshal_com(const RotationBySpeedModule_t2651092880& unmarshaled, RotationBySpeedModule_t2651092880_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void RotationBySpeedModule_t2651092880_marshal_com_back(const RotationBySpeedModule_t2651092880_marshaled_com& marshaled, RotationBySpeedModule_t2651092880& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/RotationBySpeedModule
extern "C" void RotationBySpeedModule_t2651092880_marshal_com_cleanup(RotationBySpeedModule_t2651092880_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void RotationBySpeedModule__ctor_m3462398667 (RotationBySpeedModule_t2651092880 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void RotationBySpeedModule__ctor_m3462398667_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	RotationBySpeedModule_t2651092880 * _thisAdjusted = reinterpret_cast<RotationBySpeedModule_t2651092880 *>(__this + 1);
	RotationBySpeedModule__ctor_m3462398667(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/RotationOverLifetimeModule
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_pinvoke(const RotationOverLifetimeModule_t2127923417& unmarshaled, RotationOverLifetimeModule_t2127923417_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_pinvoke_back(const RotationOverLifetimeModule_t2127923417_marshaled_pinvoke& marshaled, RotationOverLifetimeModule_t2127923417& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/RotationOverLifetimeModule
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_pinvoke_cleanup(RotationOverLifetimeModule_t2127923417_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/RotationOverLifetimeModule
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_com(const RotationOverLifetimeModule_t2127923417& unmarshaled, RotationOverLifetimeModule_t2127923417_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_com_back(const RotationOverLifetimeModule_t2127923417_marshaled_com& marshaled, RotationOverLifetimeModule_t2127923417& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'RotationOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/RotationOverLifetimeModule
extern "C" void RotationOverLifetimeModule_t2127923417_marshal_com_cleanup(RotationOverLifetimeModule_t2127923417_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void RotationOverLifetimeModule__ctor_m2605365092 (RotationOverLifetimeModule_t2127923417 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void RotationOverLifetimeModule__ctor_m2605365092_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	RotationOverLifetimeModule_t2127923417 * _thisAdjusted = reinterpret_cast<RotationOverLifetimeModule_t2127923417 *>(__this + 1);
	RotationOverLifetimeModule__ctor_m2605365092(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
extern "C" void ShapeModule_t3645627290_marshal_pinvoke(const ShapeModule_t3645627290& unmarshaled, ShapeModule_t3645627290_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ShapeModule_t3645627290_marshal_pinvoke_back(const ShapeModule_t3645627290_marshaled_pinvoke& marshaled, ShapeModule_t3645627290& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
extern "C" void ShapeModule_t3645627290_marshal_pinvoke_cleanup(ShapeModule_t3645627290_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
extern "C" void ShapeModule_t3645627290_marshal_com(const ShapeModule_t3645627290& unmarshaled, ShapeModule_t3645627290_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void ShapeModule_t3645627290_marshal_com_back(const ShapeModule_t3645627290_marshaled_com& marshaled, ShapeModule_t3645627290& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
extern "C" void ShapeModule_t3645627290_marshal_com_cleanup(ShapeModule_t3645627290_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void ShapeModule__ctor_m1730568006 (ShapeModule_t3645627290 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void ShapeModule__ctor_m1730568006_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	ShapeModule_t3645627290 * _thisAdjusted = reinterpret_cast<ShapeModule_t3645627290 *>(__this + 1);
	ShapeModule__ctor_m1730568006(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SizeBySpeedModule
extern "C" void SizeBySpeedModule_t453162143_marshal_pinvoke(const SizeBySpeedModule_t453162143& unmarshaled, SizeBySpeedModule_t453162143_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SizeBySpeedModule_t453162143_marshal_pinvoke_back(const SizeBySpeedModule_t453162143_marshaled_pinvoke& marshaled, SizeBySpeedModule_t453162143& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SizeBySpeedModule
extern "C" void SizeBySpeedModule_t453162143_marshal_pinvoke_cleanup(SizeBySpeedModule_t453162143_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SizeBySpeedModule
extern "C" void SizeBySpeedModule_t453162143_marshal_com(const SizeBySpeedModule_t453162143& unmarshaled, SizeBySpeedModule_t453162143_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SizeBySpeedModule_t453162143_marshal_com_back(const SizeBySpeedModule_t453162143_marshaled_com& marshaled, SizeBySpeedModule_t453162143& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeBySpeedModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SizeBySpeedModule
extern "C" void SizeBySpeedModule_t453162143_marshal_com_cleanup(SizeBySpeedModule_t453162143_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SizeBySpeedModule__ctor_m1973047952 (SizeBySpeedModule_t453162143 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void SizeBySpeedModule__ctor_m1973047952_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	SizeBySpeedModule_t453162143 * _thisAdjusted = reinterpret_cast<SizeBySpeedModule_t453162143 *>(__this + 1);
	SizeBySpeedModule__ctor_m1973047952(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SizeOverLifetimeModule
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_pinvoke(const SizeOverLifetimeModule_t2642970242& unmarshaled, SizeOverLifetimeModule_t2642970242_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_pinvoke_back(const SizeOverLifetimeModule_t2642970242_marshaled_pinvoke& marshaled, SizeOverLifetimeModule_t2642970242& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SizeOverLifetimeModule
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_pinvoke_cleanup(SizeOverLifetimeModule_t2642970242_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SizeOverLifetimeModule
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_com(const SizeOverLifetimeModule_t2642970242& unmarshaled, SizeOverLifetimeModule_t2642970242_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_com_back(const SizeOverLifetimeModule_t2642970242_marshaled_com& marshaled, SizeOverLifetimeModule_t2642970242& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SizeOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SizeOverLifetimeModule
extern "C" void SizeOverLifetimeModule_t2642970242_marshal_com_cleanup(SizeOverLifetimeModule_t2642970242_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SizeOverLifetimeModule__ctor_m2931597205 (SizeOverLifetimeModule_t2642970242 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void SizeOverLifetimeModule__ctor_m2931597205_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	SizeOverLifetimeModule_t2642970242 * _thisAdjusted = reinterpret_cast<SizeOverLifetimeModule_t2642970242 *>(__this + 1);
	SizeOverLifetimeModule__ctor_m2931597205(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SubEmittersModule
extern "C" void SubEmittersModule_t3776200489_marshal_pinvoke(const SubEmittersModule_t3776200489& unmarshaled, SubEmittersModule_t3776200489_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SubEmittersModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SubEmittersModule_t3776200489_marshal_pinvoke_back(const SubEmittersModule_t3776200489_marshaled_pinvoke& marshaled, SubEmittersModule_t3776200489& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SubEmittersModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SubEmittersModule
extern "C" void SubEmittersModule_t3776200489_marshal_pinvoke_cleanup(SubEmittersModule_t3776200489_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/SubEmittersModule
extern "C" void SubEmittersModule_t3776200489_marshal_com(const SubEmittersModule_t3776200489& unmarshaled, SubEmittersModule_t3776200489_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SubEmittersModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void SubEmittersModule_t3776200489_marshal_com_back(const SubEmittersModule_t3776200489_marshaled_com& marshaled, SubEmittersModule_t3776200489& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'SubEmittersModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/SubEmittersModule
extern "C" void SubEmittersModule_t3776200489_marshal_com_cleanup(SubEmittersModule_t3776200489_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/SubEmittersModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void SubEmittersModule__ctor_m1727957668 (SubEmittersModule_t3776200489 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void SubEmittersModule__ctor_m1727957668_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	SubEmittersModule_t3776200489 * _thisAdjusted = reinterpret_cast<SubEmittersModule_t3776200489 *>(__this + 1);
	SubEmittersModule__ctor_m1727957668(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_pinvoke(const TextureSheetAnimationModule_t2726970690& unmarshaled, TextureSheetAnimationModule_t2726970690_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_pinvoke_back(const TextureSheetAnimationModule_t2726970690_marshaled_pinvoke& marshaled, TextureSheetAnimationModule_t2726970690& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_pinvoke_cleanup(TextureSheetAnimationModule_t2726970690_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_com(const TextureSheetAnimationModule_t2726970690& unmarshaled, TextureSheetAnimationModule_t2726970690_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_com_back(const TextureSheetAnimationModule_t2726970690_marshaled_com& marshaled, TextureSheetAnimationModule_t2726970690& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TextureSheetAnimationModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TextureSheetAnimationModule
extern "C" void TextureSheetAnimationModule_t2726970690_marshal_com_cleanup(TextureSheetAnimationModule_t2726970690_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TextureSheetAnimationModule__ctor_m1894673426 (TextureSheetAnimationModule_t2726970690 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void TextureSheetAnimationModule__ctor_m1894673426_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	TextureSheetAnimationModule_t2726970690 * _thisAdjusted = reinterpret_cast<TextureSheetAnimationModule_t2726970690 *>(__this + 1);
	TextureSheetAnimationModule__ctor_m1894673426(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TrailModule
extern "C" void TrailModule_t2594148295_marshal_pinvoke(const TrailModule_t2594148295& unmarshaled, TrailModule_t2594148295_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TrailModule_t2594148295_marshal_pinvoke_back(const TrailModule_t2594148295_marshaled_pinvoke& marshaled, TrailModule_t2594148295& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TrailModule
extern "C" void TrailModule_t2594148295_marshal_pinvoke_cleanup(TrailModule_t2594148295_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TrailModule
extern "C" void TrailModule_t2594148295_marshal_com(const TrailModule_t2594148295& unmarshaled, TrailModule_t2594148295_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TrailModule_t2594148295_marshal_com_back(const TrailModule_t2594148295_marshaled_com& marshaled, TrailModule_t2594148295& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TrailModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TrailModule
extern "C" void TrailModule_t2594148295_marshal_com_cleanup(TrailModule_t2594148295_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/TrailModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TrailModule__ctor_m1521426893 (TrailModule_t2594148295 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void TrailModule__ctor_m1521426893_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	TrailModule_t2594148295 * _thisAdjusted = reinterpret_cast<TrailModule_t2594148295 *>(__this + 1);
	TrailModule__ctor_m1521426893(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TriggerModule
extern "C" void TriggerModule_t2453641025_marshal_pinvoke(const TriggerModule_t2453641025& unmarshaled, TriggerModule_t2453641025_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TriggerModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TriggerModule_t2453641025_marshal_pinvoke_back(const TriggerModule_t2453641025_marshaled_pinvoke& marshaled, TriggerModule_t2453641025& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TriggerModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TriggerModule
extern "C" void TriggerModule_t2453641025_marshal_pinvoke_cleanup(TriggerModule_t2453641025_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/TriggerModule
extern "C" void TriggerModule_t2453641025_marshal_com(const TriggerModule_t2453641025& unmarshaled, TriggerModule_t2453641025_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TriggerModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void TriggerModule_t2453641025_marshal_com_back(const TriggerModule_t2453641025_marshaled_com& marshaled, TriggerModule_t2453641025& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'TriggerModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/TriggerModule
extern "C" void TriggerModule_t2453641025_marshal_com_cleanup(TriggerModule_t2453641025_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/TriggerModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void TriggerModule__ctor_m3031864590 (TriggerModule_t2453641025 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void TriggerModule__ctor_m3031864590_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	TriggerModule_t2453641025 * _thisAdjusted = reinterpret_cast<TriggerModule_t2453641025 *>(__this + 1);
	TriggerModule__ctor_m3031864590(_thisAdjusted, ___particleSystem0, method);
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_pinvoke(const VelocityOverLifetimeModule_t128895923& unmarshaled, VelocityOverLifetimeModule_t128895923_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_pinvoke_back(const VelocityOverLifetimeModule_t128895923_marshaled_pinvoke& marshaled, VelocityOverLifetimeModule_t128895923& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_pinvoke_cleanup(VelocityOverLifetimeModule_t128895923_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_com(const VelocityOverLifetimeModule_t128895923& unmarshaled, VelocityOverLifetimeModule_t128895923_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_com_back(const VelocityOverLifetimeModule_t128895923_marshaled_com& marshaled, VelocityOverLifetimeModule_t128895923& unmarshaled)
{
	Il2CppCodeGenException* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'VelocityOverLifetimeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/VelocityOverLifetimeModule
extern "C" void VelocityOverLifetimeModule_t128895923_marshal_com_cleanup(VelocityOverLifetimeModule_t128895923_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/VelocityOverLifetimeModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void VelocityOverLifetimeModule__ctor_m922784064 (VelocityOverLifetimeModule_t128895923 * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t3847287324 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void VelocityOverLifetimeModule__ctor_m922784064_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t3847287324 * ___particleSystem0, const RuntimeMethod* method)
{
	VelocityOverLifetimeModule_t128895923 * _thisAdjusted = reinterpret_cast<VelocityOverLifetimeModule_t128895923 *>(__this + 1);
	VelocityOverLifetimeModule__ctor_m922784064(_thisAdjusted, ___particleSystem0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
