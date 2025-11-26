#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// orbitauto
struct orbitauto_t885203431;
// followbehind
struct followbehind_t897630349;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// finalcinematic
struct  finalcinematic_t3664346631  : public MonoBehaviour_t3962482529
{
public:
	// orbitauto finalcinematic::playerOrbitScript
	orbitauto_t885203431 * ___playerOrbitScript_2;
	// followbehind finalcinematic::cameraFollowScript
	followbehind_t897630349 * ___cameraFollowScript_3;
	// UnityEngine.Camera finalcinematic::upperCamGameplay
	Camera_t4157153871 * ___upperCamGameplay_4;
	// UnityEngine.Camera finalcinematic::upperCamCinematic
	Camera_t4157153871 * ___upperCamCinematic_5;
	// UnityEngine.Animator finalcinematic::playerAnimator
	Animator_t434523843 * ___playerAnimator_6;
	// System.Single finalcinematic::alturaFinalAscenso
	float ___alturaFinalAscenso_7;
	// System.Single finalcinematic::velocidadAscenso
	float ___velocidadAscenso_8;
	// UnityEngine.Transform finalcinematic::puntoFijoCamaraAscenso
	Transform_t3600365921 * ___puntoFijoCamaraAscenso_9;
	// UnityEngine.Transform finalcinematic::puntoMitadTorre
	Transform_t3600365921 * ___puntoMitadTorre_10;
	// UnityEngine.Transform finalcinematic::puntoSueloFinal
	Transform_t3600365921 * ___puntoSueloFinal_11;
	// UnityEngine.GameObject finalcinematic::torreEntera
	GameObject_t1113636619 * ___torreEntera_12;
	// UnityEngine.AudioSource finalcinematic::audioSource
	AudioSource_t3935305588 * ___audioSource_13;
	// UnityEngine.AudioClip finalcinematic::sonidoFinal
	AudioClip_t3680889665 * ___sonidoFinal_14;
	// UnityEngine.GameObject finalcinematic::imagenPantallaSuperior
	GameObject_t1113636619 * ___imagenPantallaSuperior_15;
	// UnityEngine.GameObject finalcinematic::imagenPantallaInferior
	GameObject_t1113636619 * ___imagenPantallaInferior_16;
	// System.Boolean finalcinematic::esperandoInput
	bool ___esperandoInput_17;
	// System.Int32 finalcinematic::etapaQTE
	int32_t ___etapaQTE_18;
	// System.Boolean finalcinematic::esperandoCierreTapa
	bool ___esperandoCierreTapa_19;
	// System.Boolean finalcinematic::haCerradoTapa
	bool ___haCerradoTapa_20;

public:
	inline static int32_t get_offset_of_playerOrbitScript_2() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___playerOrbitScript_2)); }
	inline orbitauto_t885203431 * get_playerOrbitScript_2() const { return ___playerOrbitScript_2; }
	inline orbitauto_t885203431 ** get_address_of_playerOrbitScript_2() { return &___playerOrbitScript_2; }
	inline void set_playerOrbitScript_2(orbitauto_t885203431 * value)
	{
		___playerOrbitScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerOrbitScript_2, value);
	}

	inline static int32_t get_offset_of_cameraFollowScript_3() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___cameraFollowScript_3)); }
	inline followbehind_t897630349 * get_cameraFollowScript_3() const { return ___cameraFollowScript_3; }
	inline followbehind_t897630349 ** get_address_of_cameraFollowScript_3() { return &___cameraFollowScript_3; }
	inline void set_cameraFollowScript_3(followbehind_t897630349 * value)
	{
		___cameraFollowScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraFollowScript_3, value);
	}

	inline static int32_t get_offset_of_upperCamGameplay_4() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___upperCamGameplay_4)); }
	inline Camera_t4157153871 * get_upperCamGameplay_4() const { return ___upperCamGameplay_4; }
	inline Camera_t4157153871 ** get_address_of_upperCamGameplay_4() { return &___upperCamGameplay_4; }
	inline void set_upperCamGameplay_4(Camera_t4157153871 * value)
	{
		___upperCamGameplay_4 = value;
		Il2CppCodeGenWriteBarrier(&___upperCamGameplay_4, value);
	}

	inline static int32_t get_offset_of_upperCamCinematic_5() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___upperCamCinematic_5)); }
	inline Camera_t4157153871 * get_upperCamCinematic_5() const { return ___upperCamCinematic_5; }
	inline Camera_t4157153871 ** get_address_of_upperCamCinematic_5() { return &___upperCamCinematic_5; }
	inline void set_upperCamCinematic_5(Camera_t4157153871 * value)
	{
		___upperCamCinematic_5 = value;
		Il2CppCodeGenWriteBarrier(&___upperCamCinematic_5, value);
	}

	inline static int32_t get_offset_of_playerAnimator_6() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___playerAnimator_6)); }
	inline Animator_t434523843 * get_playerAnimator_6() const { return ___playerAnimator_6; }
	inline Animator_t434523843 ** get_address_of_playerAnimator_6() { return &___playerAnimator_6; }
	inline void set_playerAnimator_6(Animator_t434523843 * value)
	{
		___playerAnimator_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnimator_6, value);
	}

	inline static int32_t get_offset_of_alturaFinalAscenso_7() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___alturaFinalAscenso_7)); }
	inline float get_alturaFinalAscenso_7() const { return ___alturaFinalAscenso_7; }
	inline float* get_address_of_alturaFinalAscenso_7() { return &___alturaFinalAscenso_7; }
	inline void set_alturaFinalAscenso_7(float value)
	{
		___alturaFinalAscenso_7 = value;
	}

	inline static int32_t get_offset_of_velocidadAscenso_8() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___velocidadAscenso_8)); }
	inline float get_velocidadAscenso_8() const { return ___velocidadAscenso_8; }
	inline float* get_address_of_velocidadAscenso_8() { return &___velocidadAscenso_8; }
	inline void set_velocidadAscenso_8(float value)
	{
		___velocidadAscenso_8 = value;
	}

	inline static int32_t get_offset_of_puntoFijoCamaraAscenso_9() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___puntoFijoCamaraAscenso_9)); }
	inline Transform_t3600365921 * get_puntoFijoCamaraAscenso_9() const { return ___puntoFijoCamaraAscenso_9; }
	inline Transform_t3600365921 ** get_address_of_puntoFijoCamaraAscenso_9() { return &___puntoFijoCamaraAscenso_9; }
	inline void set_puntoFijoCamaraAscenso_9(Transform_t3600365921 * value)
	{
		___puntoFijoCamaraAscenso_9 = value;
		Il2CppCodeGenWriteBarrier(&___puntoFijoCamaraAscenso_9, value);
	}

	inline static int32_t get_offset_of_puntoMitadTorre_10() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___puntoMitadTorre_10)); }
	inline Transform_t3600365921 * get_puntoMitadTorre_10() const { return ___puntoMitadTorre_10; }
	inline Transform_t3600365921 ** get_address_of_puntoMitadTorre_10() { return &___puntoMitadTorre_10; }
	inline void set_puntoMitadTorre_10(Transform_t3600365921 * value)
	{
		___puntoMitadTorre_10 = value;
		Il2CppCodeGenWriteBarrier(&___puntoMitadTorre_10, value);
	}

	inline static int32_t get_offset_of_puntoSueloFinal_11() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___puntoSueloFinal_11)); }
	inline Transform_t3600365921 * get_puntoSueloFinal_11() const { return ___puntoSueloFinal_11; }
	inline Transform_t3600365921 ** get_address_of_puntoSueloFinal_11() { return &___puntoSueloFinal_11; }
	inline void set_puntoSueloFinal_11(Transform_t3600365921 * value)
	{
		___puntoSueloFinal_11 = value;
		Il2CppCodeGenWriteBarrier(&___puntoSueloFinal_11, value);
	}

	inline static int32_t get_offset_of_torreEntera_12() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___torreEntera_12)); }
	inline GameObject_t1113636619 * get_torreEntera_12() const { return ___torreEntera_12; }
	inline GameObject_t1113636619 ** get_address_of_torreEntera_12() { return &___torreEntera_12; }
	inline void set_torreEntera_12(GameObject_t1113636619 * value)
	{
		___torreEntera_12 = value;
		Il2CppCodeGenWriteBarrier(&___torreEntera_12, value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___audioSource_13)); }
	inline AudioSource_t3935305588 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t3935305588 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_13, value);
	}

	inline static int32_t get_offset_of_sonidoFinal_14() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___sonidoFinal_14)); }
	inline AudioClip_t3680889665 * get_sonidoFinal_14() const { return ___sonidoFinal_14; }
	inline AudioClip_t3680889665 ** get_address_of_sonidoFinal_14() { return &___sonidoFinal_14; }
	inline void set_sonidoFinal_14(AudioClip_t3680889665 * value)
	{
		___sonidoFinal_14 = value;
		Il2CppCodeGenWriteBarrier(&___sonidoFinal_14, value);
	}

	inline static int32_t get_offset_of_imagenPantallaSuperior_15() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___imagenPantallaSuperior_15)); }
	inline GameObject_t1113636619 * get_imagenPantallaSuperior_15() const { return ___imagenPantallaSuperior_15; }
	inline GameObject_t1113636619 ** get_address_of_imagenPantallaSuperior_15() { return &___imagenPantallaSuperior_15; }
	inline void set_imagenPantallaSuperior_15(GameObject_t1113636619 * value)
	{
		___imagenPantallaSuperior_15 = value;
		Il2CppCodeGenWriteBarrier(&___imagenPantallaSuperior_15, value);
	}

	inline static int32_t get_offset_of_imagenPantallaInferior_16() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___imagenPantallaInferior_16)); }
	inline GameObject_t1113636619 * get_imagenPantallaInferior_16() const { return ___imagenPantallaInferior_16; }
	inline GameObject_t1113636619 ** get_address_of_imagenPantallaInferior_16() { return &___imagenPantallaInferior_16; }
	inline void set_imagenPantallaInferior_16(GameObject_t1113636619 * value)
	{
		___imagenPantallaInferior_16 = value;
		Il2CppCodeGenWriteBarrier(&___imagenPantallaInferior_16, value);
	}

	inline static int32_t get_offset_of_esperandoInput_17() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___esperandoInput_17)); }
	inline bool get_esperandoInput_17() const { return ___esperandoInput_17; }
	inline bool* get_address_of_esperandoInput_17() { return &___esperandoInput_17; }
	inline void set_esperandoInput_17(bool value)
	{
		___esperandoInput_17 = value;
	}

	inline static int32_t get_offset_of_etapaQTE_18() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___etapaQTE_18)); }
	inline int32_t get_etapaQTE_18() const { return ___etapaQTE_18; }
	inline int32_t* get_address_of_etapaQTE_18() { return &___etapaQTE_18; }
	inline void set_etapaQTE_18(int32_t value)
	{
		___etapaQTE_18 = value;
	}

	inline static int32_t get_offset_of_esperandoCierreTapa_19() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___esperandoCierreTapa_19)); }
	inline bool get_esperandoCierreTapa_19() const { return ___esperandoCierreTapa_19; }
	inline bool* get_address_of_esperandoCierreTapa_19() { return &___esperandoCierreTapa_19; }
	inline void set_esperandoCierreTapa_19(bool value)
	{
		___esperandoCierreTapa_19 = value;
	}

	inline static int32_t get_offset_of_haCerradoTapa_20() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___haCerradoTapa_20)); }
	inline bool get_haCerradoTapa_20() const { return ___haCerradoTapa_20; }
	inline bool* get_address_of_haCerradoTapa_20() { return &___haCerradoTapa_20; }
	inline void set_haCerradoTapa_20(bool value)
	{
		___haCerradoTapa_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
