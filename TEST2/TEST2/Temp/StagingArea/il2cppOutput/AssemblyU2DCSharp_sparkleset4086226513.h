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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sparkleset
struct  sparkleset_t4086226513  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] sparkleset::sparkleSets
	GameObjectU5BU5D_t3328599146* ___sparkleSets_2;
	// System.Int32 sparkleset::currentSetIndex
	int32_t ___currentSetIndex_3;

public:
	inline static int32_t get_offset_of_sparkleSets_2() { return static_cast<int32_t>(offsetof(sparkleset_t4086226513, ___sparkleSets_2)); }
	inline GameObjectU5BU5D_t3328599146* get_sparkleSets_2() const { return ___sparkleSets_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_sparkleSets_2() { return &___sparkleSets_2; }
	inline void set_sparkleSets_2(GameObjectU5BU5D_t3328599146* value)
	{
		___sparkleSets_2 = value;
		Il2CppCodeGenWriteBarrier(&___sparkleSets_2, value);
	}

	inline static int32_t get_offset_of_currentSetIndex_3() { return static_cast<int32_t>(offsetof(sparkleset_t4086226513, ___currentSetIndex_3)); }
	inline int32_t get_currentSetIndex_3() const { return ___currentSetIndex_3; }
	inline int32_t* get_address_of_currentSetIndex_3() { return &___currentSetIndex_3; }
	inline void set_currentSetIndex_3(int32_t value)
	{
		___currentSetIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
