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
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.UI.Image
struct Image_t2670269651;
// sparkledestroy
struct sparkledestroy_t1557363358;




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
	// UnityEngine.GameObject finalcinematic::setCaidaFake
	GameObject_t1113636619 * ___setCaidaFake_17;
	// UnityEngine.Transform finalcinematic::puntoSpawnCaida
	Transform_t3600365921 * ___puntoSpawnCaida_18;
	// UnityEngine.Camera finalcinematic::camaraCaidaLateral
	Camera_t4157153871 * ___camaraCaidaLateral_19;
	// UnityEngine.GameObject finalcinematic::canvasInferiorAscenso
	GameObject_t1113636619 * ___canvasInferiorAscenso_20;
	// UnityEngine.CanvasGroup finalcinematic::canvasInferiorGroup
	CanvasGroup_t4083511760 * ___canvasInferiorGroup_21;
	// UnityEngine.GameObject finalcinematic::imagenAvisoLR
	GameObject_t1113636619 * ___imagenAvisoLR_22;
	// UnityEngine.GameObject finalcinematic::imagenAvisoTapa
	GameObject_t1113636619 * ___imagenAvisoTapa_23;
	// System.Single finalcinematic::velocidadParpadeo
	float ___velocidadParpadeo_24;
	// System.Single finalcinematic::alfaMinimo
	float ___alfaMinimo_25;
	// System.Single finalcinematic::alfaMaximo
	float ___alfaMaximo_26;
	// UnityEngine.Coroutine finalcinematic::parpadeoRoutine
	Coroutine_t3829159415 * ___parpadeoRoutine_27;
	// UnityEngine.GameObject finalcinematic::canvasSuperiorFinal
	GameObject_t1113636619 * ___canvasSuperiorFinal_28;
	// UnityEngine.CanvasGroup finalcinematic::canvasSuperiorGroup
	CanvasGroup_t4083511760 * ___canvasSuperiorGroup_29;
	// UnityEngine.UI.Image finalcinematic::botonVolverTitle
	Image_t2670269651 * ___botonVolverTitle_30;
	// System.Single finalcinematic::duracionFadeBoton
	float ___duracionFadeBoton_31;
	// sparkledestroy finalcinematic::sparkleDestroyScript
	sparkledestroy_t1557363358 * ___sparkleDestroyScript_32;
	// System.Boolean finalcinematic::esperandoInput
	bool ___esperandoInput_33;
	// System.Int32 finalcinematic::etapaQTE
	int32_t ___etapaQTE_34;
	// System.Boolean finalcinematic::esperandoCierreTapa
	bool ___esperandoCierreTapa_35;
	// System.Boolean finalcinematic::haCerradoTapa
	bool ___haCerradoTapa_36;

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

	inline static int32_t get_offset_of_setCaidaFake_17() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___setCaidaFake_17)); }
	inline GameObject_t1113636619 * get_setCaidaFake_17() const { return ___setCaidaFake_17; }
	inline GameObject_t1113636619 ** get_address_of_setCaidaFake_17() { return &___setCaidaFake_17; }
	inline void set_setCaidaFake_17(GameObject_t1113636619 * value)
	{
		___setCaidaFake_17 = value;
		Il2CppCodeGenWriteBarrier(&___setCaidaFake_17, value);
	}

	inline static int32_t get_offset_of_puntoSpawnCaida_18() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___puntoSpawnCaida_18)); }
	inline Transform_t3600365921 * get_puntoSpawnCaida_18() const { return ___puntoSpawnCaida_18; }
	inline Transform_t3600365921 ** get_address_of_puntoSpawnCaida_18() { return &___puntoSpawnCaida_18; }
	inline void set_puntoSpawnCaida_18(Transform_t3600365921 * value)
	{
		___puntoSpawnCaida_18 = value;
		Il2CppCodeGenWriteBarrier(&___puntoSpawnCaida_18, value);
	}

	inline static int32_t get_offset_of_camaraCaidaLateral_19() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___camaraCaidaLateral_19)); }
	inline Camera_t4157153871 * get_camaraCaidaLateral_19() const { return ___camaraCaidaLateral_19; }
	inline Camera_t4157153871 ** get_address_of_camaraCaidaLateral_19() { return &___camaraCaidaLateral_19; }
	inline void set_camaraCaidaLateral_19(Camera_t4157153871 * value)
	{
		___camaraCaidaLateral_19 = value;
		Il2CppCodeGenWriteBarrier(&___camaraCaidaLateral_19, value);
	}

	inline static int32_t get_offset_of_canvasInferiorAscenso_20() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___canvasInferiorAscenso_20)); }
	inline GameObject_t1113636619 * get_canvasInferiorAscenso_20() const { return ___canvasInferiorAscenso_20; }
	inline GameObject_t1113636619 ** get_address_of_canvasInferiorAscenso_20() { return &___canvasInferiorAscenso_20; }
	inline void set_canvasInferiorAscenso_20(GameObject_t1113636619 * value)
	{
		___canvasInferiorAscenso_20 = value;
		Il2CppCodeGenWriteBarrier(&___canvasInferiorAscenso_20, value);
	}

	inline static int32_t get_offset_of_canvasInferiorGroup_21() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___canvasInferiorGroup_21)); }
	inline CanvasGroup_t4083511760 * get_canvasInferiorGroup_21() const { return ___canvasInferiorGroup_21; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasInferiorGroup_21() { return &___canvasInferiorGroup_21; }
	inline void set_canvasInferiorGroup_21(CanvasGroup_t4083511760 * value)
	{
		___canvasInferiorGroup_21 = value;
		Il2CppCodeGenWriteBarrier(&___canvasInferiorGroup_21, value);
	}

	inline static int32_t get_offset_of_imagenAvisoLR_22() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___imagenAvisoLR_22)); }
	inline GameObject_t1113636619 * get_imagenAvisoLR_22() const { return ___imagenAvisoLR_22; }
	inline GameObject_t1113636619 ** get_address_of_imagenAvisoLR_22() { return &___imagenAvisoLR_22; }
	inline void set_imagenAvisoLR_22(GameObject_t1113636619 * value)
	{
		___imagenAvisoLR_22 = value;
		Il2CppCodeGenWriteBarrier(&___imagenAvisoLR_22, value);
	}

	inline static int32_t get_offset_of_imagenAvisoTapa_23() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___imagenAvisoTapa_23)); }
	inline GameObject_t1113636619 * get_imagenAvisoTapa_23() const { return ___imagenAvisoTapa_23; }
	inline GameObject_t1113636619 ** get_address_of_imagenAvisoTapa_23() { return &___imagenAvisoTapa_23; }
	inline void set_imagenAvisoTapa_23(GameObject_t1113636619 * value)
	{
		___imagenAvisoTapa_23 = value;
		Il2CppCodeGenWriteBarrier(&___imagenAvisoTapa_23, value);
	}

	inline static int32_t get_offset_of_velocidadParpadeo_24() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___velocidadParpadeo_24)); }
	inline float get_velocidadParpadeo_24() const { return ___velocidadParpadeo_24; }
	inline float* get_address_of_velocidadParpadeo_24() { return &___velocidadParpadeo_24; }
	inline void set_velocidadParpadeo_24(float value)
	{
		___velocidadParpadeo_24 = value;
	}

	inline static int32_t get_offset_of_alfaMinimo_25() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___alfaMinimo_25)); }
	inline float get_alfaMinimo_25() const { return ___alfaMinimo_25; }
	inline float* get_address_of_alfaMinimo_25() { return &___alfaMinimo_25; }
	inline void set_alfaMinimo_25(float value)
	{
		___alfaMinimo_25 = value;
	}

	inline static int32_t get_offset_of_alfaMaximo_26() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___alfaMaximo_26)); }
	inline float get_alfaMaximo_26() const { return ___alfaMaximo_26; }
	inline float* get_address_of_alfaMaximo_26() { return &___alfaMaximo_26; }
	inline void set_alfaMaximo_26(float value)
	{
		___alfaMaximo_26 = value;
	}

	inline static int32_t get_offset_of_parpadeoRoutine_27() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___parpadeoRoutine_27)); }
	inline Coroutine_t3829159415 * get_parpadeoRoutine_27() const { return ___parpadeoRoutine_27; }
	inline Coroutine_t3829159415 ** get_address_of_parpadeoRoutine_27() { return &___parpadeoRoutine_27; }
	inline void set_parpadeoRoutine_27(Coroutine_t3829159415 * value)
	{
		___parpadeoRoutine_27 = value;
		Il2CppCodeGenWriteBarrier(&___parpadeoRoutine_27, value);
	}

	inline static int32_t get_offset_of_canvasSuperiorFinal_28() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___canvasSuperiorFinal_28)); }
	inline GameObject_t1113636619 * get_canvasSuperiorFinal_28() const { return ___canvasSuperiorFinal_28; }
	inline GameObject_t1113636619 ** get_address_of_canvasSuperiorFinal_28() { return &___canvasSuperiorFinal_28; }
	inline void set_canvasSuperiorFinal_28(GameObject_t1113636619 * value)
	{
		___canvasSuperiorFinal_28 = value;
		Il2CppCodeGenWriteBarrier(&___canvasSuperiorFinal_28, value);
	}

	inline static int32_t get_offset_of_canvasSuperiorGroup_29() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___canvasSuperiorGroup_29)); }
	inline CanvasGroup_t4083511760 * get_canvasSuperiorGroup_29() const { return ___canvasSuperiorGroup_29; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasSuperiorGroup_29() { return &___canvasSuperiorGroup_29; }
	inline void set_canvasSuperiorGroup_29(CanvasGroup_t4083511760 * value)
	{
		___canvasSuperiorGroup_29 = value;
		Il2CppCodeGenWriteBarrier(&___canvasSuperiorGroup_29, value);
	}

	inline static int32_t get_offset_of_botonVolverTitle_30() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___botonVolverTitle_30)); }
	inline Image_t2670269651 * get_botonVolverTitle_30() const { return ___botonVolverTitle_30; }
	inline Image_t2670269651 ** get_address_of_botonVolverTitle_30() { return &___botonVolverTitle_30; }
	inline void set_botonVolverTitle_30(Image_t2670269651 * value)
	{
		___botonVolverTitle_30 = value;
		Il2CppCodeGenWriteBarrier(&___botonVolverTitle_30, value);
	}

	inline static int32_t get_offset_of_duracionFadeBoton_31() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___duracionFadeBoton_31)); }
	inline float get_duracionFadeBoton_31() const { return ___duracionFadeBoton_31; }
	inline float* get_address_of_duracionFadeBoton_31() { return &___duracionFadeBoton_31; }
	inline void set_duracionFadeBoton_31(float value)
	{
		___duracionFadeBoton_31 = value;
	}

	inline static int32_t get_offset_of_sparkleDestroyScript_32() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___sparkleDestroyScript_32)); }
	inline sparkledestroy_t1557363358 * get_sparkleDestroyScript_32() const { return ___sparkleDestroyScript_32; }
	inline sparkledestroy_t1557363358 ** get_address_of_sparkleDestroyScript_32() { return &___sparkleDestroyScript_32; }
	inline void set_sparkleDestroyScript_32(sparkledestroy_t1557363358 * value)
	{
		___sparkleDestroyScript_32 = value;
		Il2CppCodeGenWriteBarrier(&___sparkleDestroyScript_32, value);
	}

	inline static int32_t get_offset_of_esperandoInput_33() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___esperandoInput_33)); }
	inline bool get_esperandoInput_33() const { return ___esperandoInput_33; }
	inline bool* get_address_of_esperandoInput_33() { return &___esperandoInput_33; }
	inline void set_esperandoInput_33(bool value)
	{
		___esperandoInput_33 = value;
	}

	inline static int32_t get_offset_of_etapaQTE_34() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___etapaQTE_34)); }
	inline int32_t get_etapaQTE_34() const { return ___etapaQTE_34; }
	inline int32_t* get_address_of_etapaQTE_34() { return &___etapaQTE_34; }
	inline void set_etapaQTE_34(int32_t value)
	{
		___etapaQTE_34 = value;
	}

	inline static int32_t get_offset_of_esperandoCierreTapa_35() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___esperandoCierreTapa_35)); }
	inline bool get_esperandoCierreTapa_35() const { return ___esperandoCierreTapa_35; }
	inline bool* get_address_of_esperandoCierreTapa_35() { return &___esperandoCierreTapa_35; }
	inline void set_esperandoCierreTapa_35(bool value)
	{
		___esperandoCierreTapa_35 = value;
	}

	inline static int32_t get_offset_of_haCerradoTapa_36() { return static_cast<int32_t>(offsetof(finalcinematic_t3664346631, ___haCerradoTapa_36)); }
	inline bool get_haCerradoTapa_36() const { return ___haCerradoTapa_36; }
	inline bool* get_address_of_haCerradoTapa_36() { return &___haCerradoTapa_36; }
	inline void set_haCerradoTapa_36(bool value)
	{
		___haCerradoTapa_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
