#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// orbitauto
struct orbitauto_t885203431;
// finalcinematic
struct finalcinematic_t3664346631;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// floorscript
struct  floorscript_t673188283  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] floorscript::apoyos
	GameObjectU5BU5D_t3328599146* ___apoyos_2;
	// UnityEngine.GameObject floorscript::baseDelPiso
	GameObject_t1113636619 * ___baseDelPiso_3;
	// orbitauto floorscript::playerOrbitScript
	orbitauto_t885203431 * ___playerOrbitScript_4;
	// finalcinematic floorscript::cinematicController
	finalcinematic_t3664346631 * ___cinematicController_5;
	// System.Single floorscript::newMinHeight
	float ___newMinHeight_6;
	// System.Single floorscript::newMaxHeight
	float ___newMaxHeight_7;
	// System.Boolean floorscript::baseDestruida
	bool ___baseDestruida_8;

public:
	inline static int32_t get_offset_of_apoyos_2() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___apoyos_2)); }
	inline GameObjectU5BU5D_t3328599146* get_apoyos_2() const { return ___apoyos_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_apoyos_2() { return &___apoyos_2; }
	inline void set_apoyos_2(GameObjectU5BU5D_t3328599146* value)
	{
		___apoyos_2 = value;
		Il2CppCodeGenWriteBarrier(&___apoyos_2, value);
	}

	inline static int32_t get_offset_of_baseDelPiso_3() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___baseDelPiso_3)); }
	inline GameObject_t1113636619 * get_baseDelPiso_3() const { return ___baseDelPiso_3; }
	inline GameObject_t1113636619 ** get_address_of_baseDelPiso_3() { return &___baseDelPiso_3; }
	inline void set_baseDelPiso_3(GameObject_t1113636619 * value)
	{
		___baseDelPiso_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseDelPiso_3, value);
	}

	inline static int32_t get_offset_of_playerOrbitScript_4() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___playerOrbitScript_4)); }
	inline orbitauto_t885203431 * get_playerOrbitScript_4() const { return ___playerOrbitScript_4; }
	inline orbitauto_t885203431 ** get_address_of_playerOrbitScript_4() { return &___playerOrbitScript_4; }
	inline void set_playerOrbitScript_4(orbitauto_t885203431 * value)
	{
		___playerOrbitScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerOrbitScript_4, value);
	}

	inline static int32_t get_offset_of_cinematicController_5() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___cinematicController_5)); }
	inline finalcinematic_t3664346631 * get_cinematicController_5() const { return ___cinematicController_5; }
	inline finalcinematic_t3664346631 ** get_address_of_cinematicController_5() { return &___cinematicController_5; }
	inline void set_cinematicController_5(finalcinematic_t3664346631 * value)
	{
		___cinematicController_5 = value;
		Il2CppCodeGenWriteBarrier(&___cinematicController_5, value);
	}

	inline static int32_t get_offset_of_newMinHeight_6() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___newMinHeight_6)); }
	inline float get_newMinHeight_6() const { return ___newMinHeight_6; }
	inline float* get_address_of_newMinHeight_6() { return &___newMinHeight_6; }
	inline void set_newMinHeight_6(float value)
	{
		___newMinHeight_6 = value;
	}

	inline static int32_t get_offset_of_newMaxHeight_7() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___newMaxHeight_7)); }
	inline float get_newMaxHeight_7() const { return ___newMaxHeight_7; }
	inline float* get_address_of_newMaxHeight_7() { return &___newMaxHeight_7; }
	inline void set_newMaxHeight_7(float value)
	{
		___newMaxHeight_7 = value;
	}

	inline static int32_t get_offset_of_baseDestruida_8() { return static_cast<int32_t>(offsetof(floorscript_t673188283, ___baseDestruida_8)); }
	inline bool get_baseDestruida_8() const { return ___baseDestruida_8; }
	inline bool* get_address_of_baseDestruida_8() { return &___baseDestruida_8; }
	inline void set_baseDestruida_8(bool value)
	{
		___baseDestruida_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
