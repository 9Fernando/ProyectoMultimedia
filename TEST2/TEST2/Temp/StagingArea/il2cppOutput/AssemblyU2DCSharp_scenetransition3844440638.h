#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// scenetransition
struct scenetransition_t3844440638;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// scenetransition
struct  scenetransition_t3844440638  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.CanvasGroup scenetransition::canvasUpper
	CanvasGroup_t4083511760 * ___canvasUpper_3;
	// UnityEngine.CanvasGroup scenetransition::canvasLower
	CanvasGroup_t4083511760 * ___canvasLower_4;
	// System.Single scenetransition::duracionFade
	float ___duracionFade_5;

public:
	inline static int32_t get_offset_of_canvasUpper_3() { return static_cast<int32_t>(offsetof(scenetransition_t3844440638, ___canvasUpper_3)); }
	inline CanvasGroup_t4083511760 * get_canvasUpper_3() const { return ___canvasUpper_3; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasUpper_3() { return &___canvasUpper_3; }
	inline void set_canvasUpper_3(CanvasGroup_t4083511760 * value)
	{
		___canvasUpper_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvasUpper_3, value);
	}

	inline static int32_t get_offset_of_canvasLower_4() { return static_cast<int32_t>(offsetof(scenetransition_t3844440638, ___canvasLower_4)); }
	inline CanvasGroup_t4083511760 * get_canvasLower_4() const { return ___canvasLower_4; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasLower_4() { return &___canvasLower_4; }
	inline void set_canvasLower_4(CanvasGroup_t4083511760 * value)
	{
		___canvasLower_4 = value;
		Il2CppCodeGenWriteBarrier(&___canvasLower_4, value);
	}

	inline static int32_t get_offset_of_duracionFade_5() { return static_cast<int32_t>(offsetof(scenetransition_t3844440638, ___duracionFade_5)); }
	inline float get_duracionFade_5() const { return ___duracionFade_5; }
	inline float* get_address_of_duracionFade_5() { return &___duracionFade_5; }
	inline void set_duracionFade_5(float value)
	{
		___duracionFade_5 = value;
	}
};

struct scenetransition_t3844440638_StaticFields
{
public:
	// scenetransition scenetransition::instancia
	scenetransition_t3844440638 * ___instancia_2;

public:
	inline static int32_t get_offset_of_instancia_2() { return static_cast<int32_t>(offsetof(scenetransition_t3844440638_StaticFields, ___instancia_2)); }
	inline scenetransition_t3844440638 * get_instancia_2() const { return ___instancia_2; }
	inline scenetransition_t3844440638 ** get_address_of_instancia_2() { return &___instancia_2; }
	inline void set_instancia_2(scenetransition_t3844440638 * value)
	{
		___instancia_2 = value;
		Il2CppCodeGenWriteBarrier(&___instancia_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
