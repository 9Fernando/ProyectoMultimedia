#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sparkledestroy
struct  sparkledestroy_t1557363358  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera sparkledestroy::lowerCam
	Camera_t4157153871 * ___lowerCam_2;
	// UnityEngine.Transform sparkledestroy::firePoint
	Transform_t3600365921 * ___firePoint_3;
	// UnityEngine.GameObject sparkledestroy::missilePrefab
	GameObject_t1113636619 * ___missilePrefab_4;
	// System.Single sparkledestroy::missileSpeed
	float ___missileSpeed_5;
	// System.Single sparkledestroy::maxMissileDistance
	float ___maxMissileDistance_6;
	// System.Single sparkledestroy::missileLifetime
	float ___missileLifetime_7;

public:
	inline static int32_t get_offset_of_lowerCam_2() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___lowerCam_2)); }
	inline Camera_t4157153871 * get_lowerCam_2() const { return ___lowerCam_2; }
	inline Camera_t4157153871 ** get_address_of_lowerCam_2() { return &___lowerCam_2; }
	inline void set_lowerCam_2(Camera_t4157153871 * value)
	{
		___lowerCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___lowerCam_2, value);
	}

	inline static int32_t get_offset_of_firePoint_3() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___firePoint_3)); }
	inline Transform_t3600365921 * get_firePoint_3() const { return ___firePoint_3; }
	inline Transform_t3600365921 ** get_address_of_firePoint_3() { return &___firePoint_3; }
	inline void set_firePoint_3(Transform_t3600365921 * value)
	{
		___firePoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___firePoint_3, value);
	}

	inline static int32_t get_offset_of_missilePrefab_4() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___missilePrefab_4)); }
	inline GameObject_t1113636619 * get_missilePrefab_4() const { return ___missilePrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_missilePrefab_4() { return &___missilePrefab_4; }
	inline void set_missilePrefab_4(GameObject_t1113636619 * value)
	{
		___missilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___missilePrefab_4, value);
	}

	inline static int32_t get_offset_of_missileSpeed_5() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___missileSpeed_5)); }
	inline float get_missileSpeed_5() const { return ___missileSpeed_5; }
	inline float* get_address_of_missileSpeed_5() { return &___missileSpeed_5; }
	inline void set_missileSpeed_5(float value)
	{
		___missileSpeed_5 = value;
	}

	inline static int32_t get_offset_of_maxMissileDistance_6() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___maxMissileDistance_6)); }
	inline float get_maxMissileDistance_6() const { return ___maxMissileDistance_6; }
	inline float* get_address_of_maxMissileDistance_6() { return &___maxMissileDistance_6; }
	inline void set_maxMissileDistance_6(float value)
	{
		___maxMissileDistance_6 = value;
	}

	inline static int32_t get_offset_of_missileLifetime_7() { return static_cast<int32_t>(offsetof(sparkledestroy_t1557363358, ___missileLifetime_7)); }
	inline float get_missileLifetime_7() const { return ___missileLifetime_7; }
	inline float* get_address_of_missileLifetime_7() { return &___missileLifetime_7; }
	inline void set_missileLifetime_7(float value)
	{
		___missileLifetime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
