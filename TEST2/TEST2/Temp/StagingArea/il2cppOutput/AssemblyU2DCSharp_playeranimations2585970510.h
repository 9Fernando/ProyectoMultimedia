#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// finalcinematic
struct finalcinematic_t3664346631;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playeranimations
struct  playeranimations_t2585970510  : public MonoBehaviour_t3962482529
{
public:
	// finalcinematic playeranimations::cinematicManager
	finalcinematic_t3664346631 * ___cinematicManager_2;

public:
	inline static int32_t get_offset_of_cinematicManager_2() { return static_cast<int32_t>(offsetof(playeranimations_t2585970510, ___cinematicManager_2)); }
	inline finalcinematic_t3664346631 * get_cinematicManager_2() const { return ___cinematicManager_2; }
	inline finalcinematic_t3664346631 ** get_address_of_cinematicManager_2() { return &___cinematicManager_2; }
	inline void set_cinematicManager_2(finalcinematic_t3664346631 * value)
	{
		___cinematicManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___cinematicManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
