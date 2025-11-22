#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// followbehind
struct  followbehind_t897630349  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform followbehind::player
	Transform_t3600365921 * ___player_2;
	// UnityEngine.Transform followbehind::villain
	Transform_t3600365921 * ___villain_3;
	// System.Single followbehind::distanceBack
	float ___distanceBack_4;
	// System.Single followbehind::heightOffset
	float ___heightOffset_5;
	// System.Single followbehind::smoothSpeed
	float ___smoothSpeed_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(followbehind_t897630349, ___player_2)); }
	inline Transform_t3600365921 * get_player_2() const { return ___player_2; }
	inline Transform_t3600365921 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3600365921 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_villain_3() { return static_cast<int32_t>(offsetof(followbehind_t897630349, ___villain_3)); }
	inline Transform_t3600365921 * get_villain_3() const { return ___villain_3; }
	inline Transform_t3600365921 ** get_address_of_villain_3() { return &___villain_3; }
	inline void set_villain_3(Transform_t3600365921 * value)
	{
		___villain_3 = value;
		Il2CppCodeGenWriteBarrier(&___villain_3, value);
	}

	inline static int32_t get_offset_of_distanceBack_4() { return static_cast<int32_t>(offsetof(followbehind_t897630349, ___distanceBack_4)); }
	inline float get_distanceBack_4() const { return ___distanceBack_4; }
	inline float* get_address_of_distanceBack_4() { return &___distanceBack_4; }
	inline void set_distanceBack_4(float value)
	{
		___distanceBack_4 = value;
	}

	inline static int32_t get_offset_of_heightOffset_5() { return static_cast<int32_t>(offsetof(followbehind_t897630349, ___heightOffset_5)); }
	inline float get_heightOffset_5() const { return ___heightOffset_5; }
	inline float* get_address_of_heightOffset_5() { return &___heightOffset_5; }
	inline void set_heightOffset_5(float value)
	{
		___heightOffset_5 = value;
	}

	inline static int32_t get_offset_of_smoothSpeed_6() { return static_cast<int32_t>(offsetof(followbehind_t897630349, ___smoothSpeed_6)); }
	inline float get_smoothSpeed_6() const { return ___smoothSpeed_6; }
	inline float* get_address_of_smoothSpeed_6() { return &___smoothSpeed_6; }
	inline void set_smoothSpeed_6(float value)
	{
		___smoothSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
