#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// orbitauto
struct  orbitauto_t885203431  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform orbitauto::villain
	Transform_t3600365921 * ___villain_2;
	// System.Single orbitauto::orbitRadius
	float ___orbitRadius_3;
	// System.Single orbitauto::autoOrbitSpeed
	float ___autoOrbitSpeed_4;
	// System.Single orbitauto::localMoveRadius
	float ___localMoveRadius_5;
	// System.Single orbitauto::localMoveSpeed
	float ___localMoveSpeed_6;
	// System.Single orbitauto::minHeight
	float ___minHeight_7;
	// System.Single orbitauto::maxHeight
	float ___maxHeight_8;
	// System.Single orbitauto::angleLerpSpeed
	float ___angleLerpSpeed_9;
	// System.Single orbitauto::positionLerpSpeed
	float ___positionLerpSpeed_10;
	// System.Single orbitauto::baseAngle
	float ___baseAngle_11;
	// System.Single orbitauto::currentAngle
	float ___currentAngle_12;
	// UnityEngine.Vector2 orbitauto::localOffset
	Vector2_t2156229523  ___localOffset_13;
	// UnityEngine.Vector2 orbitauto::targetLocalOffset
	Vector2_t2156229523  ___targetLocalOffset_14;

public:
	inline static int32_t get_offset_of_villain_2() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___villain_2)); }
	inline Transform_t3600365921 * get_villain_2() const { return ___villain_2; }
	inline Transform_t3600365921 ** get_address_of_villain_2() { return &___villain_2; }
	inline void set_villain_2(Transform_t3600365921 * value)
	{
		___villain_2 = value;
		Il2CppCodeGenWriteBarrier(&___villain_2, value);
	}

	inline static int32_t get_offset_of_orbitRadius_3() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___orbitRadius_3)); }
	inline float get_orbitRadius_3() const { return ___orbitRadius_3; }
	inline float* get_address_of_orbitRadius_3() { return &___orbitRadius_3; }
	inline void set_orbitRadius_3(float value)
	{
		___orbitRadius_3 = value;
	}

	inline static int32_t get_offset_of_autoOrbitSpeed_4() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___autoOrbitSpeed_4)); }
	inline float get_autoOrbitSpeed_4() const { return ___autoOrbitSpeed_4; }
	inline float* get_address_of_autoOrbitSpeed_4() { return &___autoOrbitSpeed_4; }
	inline void set_autoOrbitSpeed_4(float value)
	{
		___autoOrbitSpeed_4 = value;
	}

	inline static int32_t get_offset_of_localMoveRadius_5() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___localMoveRadius_5)); }
	inline float get_localMoveRadius_5() const { return ___localMoveRadius_5; }
	inline float* get_address_of_localMoveRadius_5() { return &___localMoveRadius_5; }
	inline void set_localMoveRadius_5(float value)
	{
		___localMoveRadius_5 = value;
	}

	inline static int32_t get_offset_of_localMoveSpeed_6() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___localMoveSpeed_6)); }
	inline float get_localMoveSpeed_6() const { return ___localMoveSpeed_6; }
	inline float* get_address_of_localMoveSpeed_6() { return &___localMoveSpeed_6; }
	inline void set_localMoveSpeed_6(float value)
	{
		___localMoveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_minHeight_7() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___minHeight_7)); }
	inline float get_minHeight_7() const { return ___minHeight_7; }
	inline float* get_address_of_minHeight_7() { return &___minHeight_7; }
	inline void set_minHeight_7(float value)
	{
		___minHeight_7 = value;
	}

	inline static int32_t get_offset_of_maxHeight_8() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___maxHeight_8)); }
	inline float get_maxHeight_8() const { return ___maxHeight_8; }
	inline float* get_address_of_maxHeight_8() { return &___maxHeight_8; }
	inline void set_maxHeight_8(float value)
	{
		___maxHeight_8 = value;
	}

	inline static int32_t get_offset_of_angleLerpSpeed_9() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___angleLerpSpeed_9)); }
	inline float get_angleLerpSpeed_9() const { return ___angleLerpSpeed_9; }
	inline float* get_address_of_angleLerpSpeed_9() { return &___angleLerpSpeed_9; }
	inline void set_angleLerpSpeed_9(float value)
	{
		___angleLerpSpeed_9 = value;
	}

	inline static int32_t get_offset_of_positionLerpSpeed_10() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___positionLerpSpeed_10)); }
	inline float get_positionLerpSpeed_10() const { return ___positionLerpSpeed_10; }
	inline float* get_address_of_positionLerpSpeed_10() { return &___positionLerpSpeed_10; }
	inline void set_positionLerpSpeed_10(float value)
	{
		___positionLerpSpeed_10 = value;
	}

	inline static int32_t get_offset_of_baseAngle_11() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___baseAngle_11)); }
	inline float get_baseAngle_11() const { return ___baseAngle_11; }
	inline float* get_address_of_baseAngle_11() { return &___baseAngle_11; }
	inline void set_baseAngle_11(float value)
	{
		___baseAngle_11 = value;
	}

	inline static int32_t get_offset_of_currentAngle_12() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___currentAngle_12)); }
	inline float get_currentAngle_12() const { return ___currentAngle_12; }
	inline float* get_address_of_currentAngle_12() { return &___currentAngle_12; }
	inline void set_currentAngle_12(float value)
	{
		___currentAngle_12 = value;
	}

	inline static int32_t get_offset_of_localOffset_13() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___localOffset_13)); }
	inline Vector2_t2156229523  get_localOffset_13() const { return ___localOffset_13; }
	inline Vector2_t2156229523 * get_address_of_localOffset_13() { return &___localOffset_13; }
	inline void set_localOffset_13(Vector2_t2156229523  value)
	{
		___localOffset_13 = value;
	}

	inline static int32_t get_offset_of_targetLocalOffset_14() { return static_cast<int32_t>(offsetof(orbitauto_t885203431, ___targetLocalOffset_14)); }
	inline Vector2_t2156229523  get_targetLocalOffset_14() const { return ___targetLocalOffset_14; }
	inline Vector2_t2156229523 * get_address_of_targetLocalOffset_14() { return &___targetLocalOffset_14; }
	inline void set_targetLocalOffset_14(Vector2_t2156229523  value)
	{
		___targetLocalOffset_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
