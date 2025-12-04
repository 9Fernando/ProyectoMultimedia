#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Image
struct Image_t2670269651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// trianguloanim
struct  trianguloanim_t358379104  : public MonoBehaviour_t3962482529
{
public:
	// System.Single trianguloanim::velocidad
	float ___velocidad_2;
	// UnityEngine.UI.Image trianguloanim::img
	Image_t2670269651 * ___img_3;

public:
	inline static int32_t get_offset_of_velocidad_2() { return static_cast<int32_t>(offsetof(trianguloanim_t358379104, ___velocidad_2)); }
	inline float get_velocidad_2() const { return ___velocidad_2; }
	inline float* get_address_of_velocidad_2() { return &___velocidad_2; }
	inline void set_velocidad_2(float value)
	{
		___velocidad_2 = value;
	}

	inline static int32_t get_offset_of_img_3() { return static_cast<int32_t>(offsetof(trianguloanim_t358379104, ___img_3)); }
	inline Image_t2670269651 * get_img_3() const { return ___img_3; }
	inline Image_t2670269651 ** get_address_of_img_3() { return &___img_3; }
	inline void set_img_3(Image_t2670269651 * value)
	{
		___img_3 = value;
		Il2CppCodeGenWriteBarrier(&___img_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
