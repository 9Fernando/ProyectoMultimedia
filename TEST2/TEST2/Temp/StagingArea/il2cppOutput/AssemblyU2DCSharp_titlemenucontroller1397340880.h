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
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// titlemenucontroller
struct  titlemenucontroller_t1397340880  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image titlemenucontroller::imagenTextoStart
	Image_t2670269651 * ___imagenTextoStart_2;
	// System.Single titlemenucontroller::velocidadParpadeo
	float ___velocidadParpadeo_3;
	// System.Single titlemenucontroller::alfaMinimo
	float ___alfaMinimo_4;
	// System.Single titlemenucontroller::alfaMaximo
	float ___alfaMaximo_5;
	// System.Single titlemenucontroller::velocidadEscala
	float ___velocidadEscala_6;
	// System.Single titlemenucontroller::escalaMaxima
	float ___escalaMaxima_7;
	// UnityEngine.AudioSource titlemenucontroller::audioSource
	AudioSource_t3935305588 * ___audioSource_8;
	// UnityEngine.AudioClip titlemenucontroller::sfxStart
	AudioClip_t3680889665 * ___sfxStart_9;
	// System.Boolean titlemenucontroller::haPresionadoStart
	bool ___haPresionadoStart_10;

public:
	inline static int32_t get_offset_of_imagenTextoStart_2() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___imagenTextoStart_2)); }
	inline Image_t2670269651 * get_imagenTextoStart_2() const { return ___imagenTextoStart_2; }
	inline Image_t2670269651 ** get_address_of_imagenTextoStart_2() { return &___imagenTextoStart_2; }
	inline void set_imagenTextoStart_2(Image_t2670269651 * value)
	{
		___imagenTextoStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___imagenTextoStart_2, value);
	}

	inline static int32_t get_offset_of_velocidadParpadeo_3() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___velocidadParpadeo_3)); }
	inline float get_velocidadParpadeo_3() const { return ___velocidadParpadeo_3; }
	inline float* get_address_of_velocidadParpadeo_3() { return &___velocidadParpadeo_3; }
	inline void set_velocidadParpadeo_3(float value)
	{
		___velocidadParpadeo_3 = value;
	}

	inline static int32_t get_offset_of_alfaMinimo_4() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___alfaMinimo_4)); }
	inline float get_alfaMinimo_4() const { return ___alfaMinimo_4; }
	inline float* get_address_of_alfaMinimo_4() { return &___alfaMinimo_4; }
	inline void set_alfaMinimo_4(float value)
	{
		___alfaMinimo_4 = value;
	}

	inline static int32_t get_offset_of_alfaMaximo_5() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___alfaMaximo_5)); }
	inline float get_alfaMaximo_5() const { return ___alfaMaximo_5; }
	inline float* get_address_of_alfaMaximo_5() { return &___alfaMaximo_5; }
	inline void set_alfaMaximo_5(float value)
	{
		___alfaMaximo_5 = value;
	}

	inline static int32_t get_offset_of_velocidadEscala_6() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___velocidadEscala_6)); }
	inline float get_velocidadEscala_6() const { return ___velocidadEscala_6; }
	inline float* get_address_of_velocidadEscala_6() { return &___velocidadEscala_6; }
	inline void set_velocidadEscala_6(float value)
	{
		___velocidadEscala_6 = value;
	}

	inline static int32_t get_offset_of_escalaMaxima_7() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___escalaMaxima_7)); }
	inline float get_escalaMaxima_7() const { return ___escalaMaxima_7; }
	inline float* get_address_of_escalaMaxima_7() { return &___escalaMaxima_7; }
	inline void set_escalaMaxima_7(float value)
	{
		___escalaMaxima_7 = value;
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___audioSource_8)); }
	inline AudioSource_t3935305588 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t3935305588 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_sfxStart_9() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___sfxStart_9)); }
	inline AudioClip_t3680889665 * get_sfxStart_9() const { return ___sfxStart_9; }
	inline AudioClip_t3680889665 ** get_address_of_sfxStart_9() { return &___sfxStart_9; }
	inline void set_sfxStart_9(AudioClip_t3680889665 * value)
	{
		___sfxStart_9 = value;
		Il2CppCodeGenWriteBarrier(&___sfxStart_9, value);
	}

	inline static int32_t get_offset_of_haPresionadoStart_10() { return static_cast<int32_t>(offsetof(titlemenucontroller_t1397340880, ___haPresionadoStart_10)); }
	inline bool get_haPresionadoStart_10() const { return ___haPresionadoStart_10; }
	inline bool* get_address_of_haPresionadoStart_10() { return &___haPresionadoStart_10; }
	inline void set_haPresionadoStart_10(bool value)
	{
		___haPresionadoStart_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
