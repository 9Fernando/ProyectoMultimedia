#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_introcontroller_EstadoSonidoRell3119897086.h"

// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// introcontroller
struct  introcontroller_t2101425947  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text introcontroller::textoDialogo
	Text_t1901882714 * ___textoDialogo_2;
	// UnityEngine.UI.Image introcontroller::imagenTransmision
	Image_t2670269651 * ___imagenTransmision_3;
	// UnityEngine.RectTransform introcontroller::formularioTransform
	RectTransform_t3704657025 * ___formularioTransform_4;
	// UnityEngine.RectTransform introcontroller::rellenoTransform
	RectTransform_t3704657025 * ___rellenoTransform_5;
	// System.Single introcontroller::velocidadRelleno
	float ___velocidadRelleno_6;
	// System.String[] introcontroller::frasesParte1
	StringU5BU5D_t1281789340* ___frasesParte1_7;
	// System.String[] introcontroller::frasesParte2
	StringU5BU5D_t1281789340* ___frasesParte2_8;
	// UnityEngine.UI.Image introcontroller::displayTransmision
	Image_t2670269651 * ___displayTransmision_9;
	// UnityEngine.Sprite[] introcontroller::galeriaSprites
	SpriteU5BU5D_t2581906349* ___galeriaSprites_10;
	// System.Single introcontroller::velocidadCaracter
	float ___velocidadCaracter_11;
	// UnityEngine.GameObject introcontroller::iconoContinuar
	GameObject_t1113636619 * ___iconoContinuar_12;
	// UnityEngine.AudioSource introcontroller::audioSourceIntro
	AudioSource_t3935305588 * ___audioSourceIntro_13;
	// UnityEngine.AudioClip introcontroller::sfxLetra
	AudioClip_t3680889665 * ___sfxLetra_14;
	// UnityEngine.AudioClip introcontroller::sfxCambioLinea
	AudioClip_t3680889665 * ___sfxCambioLinea_15;
	// UnityEngine.AudioClip introcontroller::sfxMostrarFormulario
	AudioClip_t3680889665 * ___sfxMostrarFormulario_16;
	// UnityEngine.AudioClip introcontroller::sfxRellenoSubiendo
	AudioClip_t3680889665 * ___sfxRellenoSubiendo_17;
	// UnityEngine.AudioClip introcontroller::sfxRellenoBajando
	AudioClip_t3680889665 * ___sfxRellenoBajando_18;
	// UnityEngine.AudioClip introcontroller::sfxFormularioOK
	AudioClip_t3680889665 * ___sfxFormularioOK_19;
	// UnityEngine.AudioSource introcontroller::musicaIntro
	AudioSource_t3935305588 * ___musicaIntro_20;
	// introcontroller/EstadoSonidoRelleno introcontroller::estadoSonido
	int32_t ___estadoSonido_21;
	// System.Boolean introcontroller::escribiendo
	bool ___escribiendo_22;
	// System.String introcontroller::fraseActualCompleta
	String_t* ___fraseActualCompleta_23;
	// System.Int32 introcontroller::indiceFrase
	int32_t ___indiceFrase_24;
	// System.Boolean introcontroller::esperandoFormulario
	bool ___esperandoFormulario_25;
	// System.Boolean introcontroller::formularioCompletado
	bool ___formularioCompletado_26;
	// System.Boolean introcontroller::enParte2
	bool ___enParte2_27;
	// System.Single introcontroller::alturaRellenoActual
	float ___alturaRellenoActual_28;

public:
	inline static int32_t get_offset_of_textoDialogo_2() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___textoDialogo_2)); }
	inline Text_t1901882714 * get_textoDialogo_2() const { return ___textoDialogo_2; }
	inline Text_t1901882714 ** get_address_of_textoDialogo_2() { return &___textoDialogo_2; }
	inline void set_textoDialogo_2(Text_t1901882714 * value)
	{
		___textoDialogo_2 = value;
		Il2CppCodeGenWriteBarrier(&___textoDialogo_2, value);
	}

	inline static int32_t get_offset_of_imagenTransmision_3() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___imagenTransmision_3)); }
	inline Image_t2670269651 * get_imagenTransmision_3() const { return ___imagenTransmision_3; }
	inline Image_t2670269651 ** get_address_of_imagenTransmision_3() { return &___imagenTransmision_3; }
	inline void set_imagenTransmision_3(Image_t2670269651 * value)
	{
		___imagenTransmision_3 = value;
		Il2CppCodeGenWriteBarrier(&___imagenTransmision_3, value);
	}

	inline static int32_t get_offset_of_formularioTransform_4() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___formularioTransform_4)); }
	inline RectTransform_t3704657025 * get_formularioTransform_4() const { return ___formularioTransform_4; }
	inline RectTransform_t3704657025 ** get_address_of_formularioTransform_4() { return &___formularioTransform_4; }
	inline void set_formularioTransform_4(RectTransform_t3704657025 * value)
	{
		___formularioTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___formularioTransform_4, value);
	}

	inline static int32_t get_offset_of_rellenoTransform_5() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___rellenoTransform_5)); }
	inline RectTransform_t3704657025 * get_rellenoTransform_5() const { return ___rellenoTransform_5; }
	inline RectTransform_t3704657025 ** get_address_of_rellenoTransform_5() { return &___rellenoTransform_5; }
	inline void set_rellenoTransform_5(RectTransform_t3704657025 * value)
	{
		___rellenoTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___rellenoTransform_5, value);
	}

	inline static int32_t get_offset_of_velocidadRelleno_6() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___velocidadRelleno_6)); }
	inline float get_velocidadRelleno_6() const { return ___velocidadRelleno_6; }
	inline float* get_address_of_velocidadRelleno_6() { return &___velocidadRelleno_6; }
	inline void set_velocidadRelleno_6(float value)
	{
		___velocidadRelleno_6 = value;
	}

	inline static int32_t get_offset_of_frasesParte1_7() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___frasesParte1_7)); }
	inline StringU5BU5D_t1281789340* get_frasesParte1_7() const { return ___frasesParte1_7; }
	inline StringU5BU5D_t1281789340** get_address_of_frasesParte1_7() { return &___frasesParte1_7; }
	inline void set_frasesParte1_7(StringU5BU5D_t1281789340* value)
	{
		___frasesParte1_7 = value;
		Il2CppCodeGenWriteBarrier(&___frasesParte1_7, value);
	}

	inline static int32_t get_offset_of_frasesParte2_8() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___frasesParte2_8)); }
	inline StringU5BU5D_t1281789340* get_frasesParte2_8() const { return ___frasesParte2_8; }
	inline StringU5BU5D_t1281789340** get_address_of_frasesParte2_8() { return &___frasesParte2_8; }
	inline void set_frasesParte2_8(StringU5BU5D_t1281789340* value)
	{
		___frasesParte2_8 = value;
		Il2CppCodeGenWriteBarrier(&___frasesParte2_8, value);
	}

	inline static int32_t get_offset_of_displayTransmision_9() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___displayTransmision_9)); }
	inline Image_t2670269651 * get_displayTransmision_9() const { return ___displayTransmision_9; }
	inline Image_t2670269651 ** get_address_of_displayTransmision_9() { return &___displayTransmision_9; }
	inline void set_displayTransmision_9(Image_t2670269651 * value)
	{
		___displayTransmision_9 = value;
		Il2CppCodeGenWriteBarrier(&___displayTransmision_9, value);
	}

	inline static int32_t get_offset_of_galeriaSprites_10() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___galeriaSprites_10)); }
	inline SpriteU5BU5D_t2581906349* get_galeriaSprites_10() const { return ___galeriaSprites_10; }
	inline SpriteU5BU5D_t2581906349** get_address_of_galeriaSprites_10() { return &___galeriaSprites_10; }
	inline void set_galeriaSprites_10(SpriteU5BU5D_t2581906349* value)
	{
		___galeriaSprites_10 = value;
		Il2CppCodeGenWriteBarrier(&___galeriaSprites_10, value);
	}

	inline static int32_t get_offset_of_velocidadCaracter_11() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___velocidadCaracter_11)); }
	inline float get_velocidadCaracter_11() const { return ___velocidadCaracter_11; }
	inline float* get_address_of_velocidadCaracter_11() { return &___velocidadCaracter_11; }
	inline void set_velocidadCaracter_11(float value)
	{
		___velocidadCaracter_11 = value;
	}

	inline static int32_t get_offset_of_iconoContinuar_12() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___iconoContinuar_12)); }
	inline GameObject_t1113636619 * get_iconoContinuar_12() const { return ___iconoContinuar_12; }
	inline GameObject_t1113636619 ** get_address_of_iconoContinuar_12() { return &___iconoContinuar_12; }
	inline void set_iconoContinuar_12(GameObject_t1113636619 * value)
	{
		___iconoContinuar_12 = value;
		Il2CppCodeGenWriteBarrier(&___iconoContinuar_12, value);
	}

	inline static int32_t get_offset_of_audioSourceIntro_13() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___audioSourceIntro_13)); }
	inline AudioSource_t3935305588 * get_audioSourceIntro_13() const { return ___audioSourceIntro_13; }
	inline AudioSource_t3935305588 ** get_address_of_audioSourceIntro_13() { return &___audioSourceIntro_13; }
	inline void set_audioSourceIntro_13(AudioSource_t3935305588 * value)
	{
		___audioSourceIntro_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceIntro_13, value);
	}

	inline static int32_t get_offset_of_sfxLetra_14() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxLetra_14)); }
	inline AudioClip_t3680889665 * get_sfxLetra_14() const { return ___sfxLetra_14; }
	inline AudioClip_t3680889665 ** get_address_of_sfxLetra_14() { return &___sfxLetra_14; }
	inline void set_sfxLetra_14(AudioClip_t3680889665 * value)
	{
		___sfxLetra_14 = value;
		Il2CppCodeGenWriteBarrier(&___sfxLetra_14, value);
	}

	inline static int32_t get_offset_of_sfxCambioLinea_15() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxCambioLinea_15)); }
	inline AudioClip_t3680889665 * get_sfxCambioLinea_15() const { return ___sfxCambioLinea_15; }
	inline AudioClip_t3680889665 ** get_address_of_sfxCambioLinea_15() { return &___sfxCambioLinea_15; }
	inline void set_sfxCambioLinea_15(AudioClip_t3680889665 * value)
	{
		___sfxCambioLinea_15 = value;
		Il2CppCodeGenWriteBarrier(&___sfxCambioLinea_15, value);
	}

	inline static int32_t get_offset_of_sfxMostrarFormulario_16() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxMostrarFormulario_16)); }
	inline AudioClip_t3680889665 * get_sfxMostrarFormulario_16() const { return ___sfxMostrarFormulario_16; }
	inline AudioClip_t3680889665 ** get_address_of_sfxMostrarFormulario_16() { return &___sfxMostrarFormulario_16; }
	inline void set_sfxMostrarFormulario_16(AudioClip_t3680889665 * value)
	{
		___sfxMostrarFormulario_16 = value;
		Il2CppCodeGenWriteBarrier(&___sfxMostrarFormulario_16, value);
	}

	inline static int32_t get_offset_of_sfxRellenoSubiendo_17() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxRellenoSubiendo_17)); }
	inline AudioClip_t3680889665 * get_sfxRellenoSubiendo_17() const { return ___sfxRellenoSubiendo_17; }
	inline AudioClip_t3680889665 ** get_address_of_sfxRellenoSubiendo_17() { return &___sfxRellenoSubiendo_17; }
	inline void set_sfxRellenoSubiendo_17(AudioClip_t3680889665 * value)
	{
		___sfxRellenoSubiendo_17 = value;
		Il2CppCodeGenWriteBarrier(&___sfxRellenoSubiendo_17, value);
	}

	inline static int32_t get_offset_of_sfxRellenoBajando_18() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxRellenoBajando_18)); }
	inline AudioClip_t3680889665 * get_sfxRellenoBajando_18() const { return ___sfxRellenoBajando_18; }
	inline AudioClip_t3680889665 ** get_address_of_sfxRellenoBajando_18() { return &___sfxRellenoBajando_18; }
	inline void set_sfxRellenoBajando_18(AudioClip_t3680889665 * value)
	{
		___sfxRellenoBajando_18 = value;
		Il2CppCodeGenWriteBarrier(&___sfxRellenoBajando_18, value);
	}

	inline static int32_t get_offset_of_sfxFormularioOK_19() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___sfxFormularioOK_19)); }
	inline AudioClip_t3680889665 * get_sfxFormularioOK_19() const { return ___sfxFormularioOK_19; }
	inline AudioClip_t3680889665 ** get_address_of_sfxFormularioOK_19() { return &___sfxFormularioOK_19; }
	inline void set_sfxFormularioOK_19(AudioClip_t3680889665 * value)
	{
		___sfxFormularioOK_19 = value;
		Il2CppCodeGenWriteBarrier(&___sfxFormularioOK_19, value);
	}

	inline static int32_t get_offset_of_musicaIntro_20() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___musicaIntro_20)); }
	inline AudioSource_t3935305588 * get_musicaIntro_20() const { return ___musicaIntro_20; }
	inline AudioSource_t3935305588 ** get_address_of_musicaIntro_20() { return &___musicaIntro_20; }
	inline void set_musicaIntro_20(AudioSource_t3935305588 * value)
	{
		___musicaIntro_20 = value;
		Il2CppCodeGenWriteBarrier(&___musicaIntro_20, value);
	}

	inline static int32_t get_offset_of_estadoSonido_21() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___estadoSonido_21)); }
	inline int32_t get_estadoSonido_21() const { return ___estadoSonido_21; }
	inline int32_t* get_address_of_estadoSonido_21() { return &___estadoSonido_21; }
	inline void set_estadoSonido_21(int32_t value)
	{
		___estadoSonido_21 = value;
	}

	inline static int32_t get_offset_of_escribiendo_22() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___escribiendo_22)); }
	inline bool get_escribiendo_22() const { return ___escribiendo_22; }
	inline bool* get_address_of_escribiendo_22() { return &___escribiendo_22; }
	inline void set_escribiendo_22(bool value)
	{
		___escribiendo_22 = value;
	}

	inline static int32_t get_offset_of_fraseActualCompleta_23() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___fraseActualCompleta_23)); }
	inline String_t* get_fraseActualCompleta_23() const { return ___fraseActualCompleta_23; }
	inline String_t** get_address_of_fraseActualCompleta_23() { return &___fraseActualCompleta_23; }
	inline void set_fraseActualCompleta_23(String_t* value)
	{
		___fraseActualCompleta_23 = value;
		Il2CppCodeGenWriteBarrier(&___fraseActualCompleta_23, value);
	}

	inline static int32_t get_offset_of_indiceFrase_24() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___indiceFrase_24)); }
	inline int32_t get_indiceFrase_24() const { return ___indiceFrase_24; }
	inline int32_t* get_address_of_indiceFrase_24() { return &___indiceFrase_24; }
	inline void set_indiceFrase_24(int32_t value)
	{
		___indiceFrase_24 = value;
	}

	inline static int32_t get_offset_of_esperandoFormulario_25() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___esperandoFormulario_25)); }
	inline bool get_esperandoFormulario_25() const { return ___esperandoFormulario_25; }
	inline bool* get_address_of_esperandoFormulario_25() { return &___esperandoFormulario_25; }
	inline void set_esperandoFormulario_25(bool value)
	{
		___esperandoFormulario_25 = value;
	}

	inline static int32_t get_offset_of_formularioCompletado_26() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___formularioCompletado_26)); }
	inline bool get_formularioCompletado_26() const { return ___formularioCompletado_26; }
	inline bool* get_address_of_formularioCompletado_26() { return &___formularioCompletado_26; }
	inline void set_formularioCompletado_26(bool value)
	{
		___formularioCompletado_26 = value;
	}

	inline static int32_t get_offset_of_enParte2_27() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___enParte2_27)); }
	inline bool get_enParte2_27() const { return ___enParte2_27; }
	inline bool* get_address_of_enParte2_27() { return &___enParte2_27; }
	inline void set_enParte2_27(bool value)
	{
		___enParte2_27 = value;
	}

	inline static int32_t get_offset_of_alturaRellenoActual_28() { return static_cast<int32_t>(offsetof(introcontroller_t2101425947, ___alturaRellenoActual_28)); }
	inline float get_alturaRellenoActual_28() const { return ___alturaRellenoActual_28; }
	inline float* get_address_of_alturaRellenoActual_28() { return &___alturaRellenoActual_28; }
	inline void set_alturaRellenoActual_28(float value)
	{
		___alturaRellenoActual_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
