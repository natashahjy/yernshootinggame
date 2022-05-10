#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>
struct Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Hellmade.Sound.Audio>
struct KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Hellmade.Sound.Audio>
struct ValueCollection_t93BD3D9A2BFADFA2BE68AD2EEEE7514952FAA2A6;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Hellmade.Sound.Audio>[]
struct EntryU5BU5D_t6AA936D4666EB6476E5F9CA7F92775C9BF4A01BD;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Hellmade.Sound.Audio
struct Audio_t645B7D470099079857386A95B679C828C798D13A;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Hellmade.Sound.EazySoundManager
struct EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D;
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManagerScript
struct GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0;
// GameManagerScriptLevel2
struct GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA;
// HighScore
struct HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// MainMenuScript
struct MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlayerGunShoot
struct PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB;
// PlayerGun_LevelTwo
struct PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// RayViewerComplete
struct RayViewerComplete_tB327E4A1F5D2714E7A3B5455EFE73A7D0562CC63;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShootableTargets
struct ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029;
// ShootableTargets_LevelTwo
struct ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundSliderBehaviour
struct SoundSliderBehaviour_tD5CC994A1D821640B0862EB0F614820B6334CA6A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// WeaponSwitching
struct WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerGunShoot/<ShotEffect>d__16
struct U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764;
// PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d
struct U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04C712CE92B1D3855300090B95F2160F3669998B;
IL2CPP_EXTERN_C String_t* _stringLiteral076997B2BB5A4801F82757376E097FA11FA81067;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0;
IL2CPP_EXTERN_C String_t* _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988;
IL2CPP_EXTERN_C String_t* _stringLiteral3C950DD70CAACD5B71DB42BC4C746E1F78985737;
IL2CPP_EXTERN_C String_t* _stringLiteral6E51A8A7FF68322A7630242FB347EF93637283D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCF50DE65AF07A3A21E10B5DE286AB96354C1DF;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4974398C200A197776883C16EB9BCA14FB36DE;
IL2CPP_EXTERN_C String_t* _stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE;
IL2CPP_EXTERN_C String_t* _stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E99AF0EB1F92137E8B59CA6EED76D238B0480B;
IL2CPP_EXTERN_C String_t* _stringLiteralA746DEC011DFA0648B689BE15434010C83FA8E4D;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD902BB9DCC3C5800301ED9E3B397D29BD4471078;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF68343AA0083C1A8A70EA51BD1BBCBCACAB4D373;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD_m5D3C18CFA7B0A74EF62E8BD20552525E22DDECF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029_mB439B1D509B997A9152111CECBE47884EA61F727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_m7CF7D73399C7A3BC14D3C0971BA007DEFB3D0CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E_m5B101737F789B9418413F68BA7DDEAA78A4B2F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_m07716FA8DEFADD86471B9E18B5C28CA98AD9ED07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C_mEEBEADD742456B0C1CF0243D1403BD8E52F7A675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShotEffectU3Ed__16_System_Collections_IEnumerator_Reset_m78812DDBCC94C6C2075E03A93B90F83CA684A584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_Collections_IEnumerator_Reset_m1EE349E73CDD45545F4A8AA0353A090115FFC54A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>
struct Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6AA936D4666EB6476E5F9CA7F92775C9BF4A01BD* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t93BD3D9A2BFADFA2BE68AD2EEEE7514952FAA2A6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Hellmade.Sound.Audio>
struct KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Hellmade.Sound.Audio
struct Audio_t645B7D470099079857386A95B679C828C798D13A  : public RuntimeObject
{
	// System.Int32 Hellmade.Sound.Audio::<AudioID>k__BackingField
	int32_t ___U3CAudioIDU3Ek__BackingField_0;
	// Hellmade.Sound.Audio/AudioType Hellmade.Sound.Audio::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Boolean Hellmade.Sound.Audio::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_2;
	// System.Boolean Hellmade.Sound.Audio::<Paused>k__BackingField
	bool ___U3CPausedU3Ek__BackingField_3;
	// System.Boolean Hellmade.Sound.Audio::<Stopping>k__BackingField
	bool ___U3CStoppingU3Ek__BackingField_4;
	// System.Boolean Hellmade.Sound.Audio::<Activated>k__BackingField
	bool ___U3CActivatedU3Ek__BackingField_5;
	// System.Boolean Hellmade.Sound.Audio::<Pooled>k__BackingField
	bool ___U3CPooledU3Ek__BackingField_6;
	// System.Single Hellmade.Sound.Audio::<Volume>k__BackingField
	float ___U3CVolumeU3Ek__BackingField_7;
	// UnityEngine.AudioSource Hellmade.Sound.Audio::<AudioSource>k__BackingField
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___U3CAudioSourceU3Ek__BackingField_8;
	// System.Boolean Hellmade.Sound.Audio::<Persist>k__BackingField
	bool ___U3CPersistU3Ek__BackingField_9;
	// System.Single Hellmade.Sound.Audio::<FadeInSeconds>k__BackingField
	float ___U3CFadeInSecondsU3Ek__BackingField_10;
	// System.Single Hellmade.Sound.Audio::<FadeOutSeconds>k__BackingField
	float ___U3CFadeOutSecondsU3Ek__BackingField_11;
	// UnityEngine.AudioClip Hellmade.Sound.Audio::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_13;
	// System.Boolean Hellmade.Sound.Audio::loop
	bool ___loop_14;
	// System.Boolean Hellmade.Sound.Audio::mute
	bool ___mute_15;
	// System.Int32 Hellmade.Sound.Audio::priority
	int32_t ___priority_16;
	// System.Single Hellmade.Sound.Audio::pitch
	float ___pitch_17;
	// System.Single Hellmade.Sound.Audio::stereoPan
	float ___stereoPan_18;
	// System.Single Hellmade.Sound.Audio::spatialBlend
	float ___spatialBlend_19;
	// System.Single Hellmade.Sound.Audio::reverbZoneMix
	float ___reverbZoneMix_20;
	// System.Single Hellmade.Sound.Audio::dopplerLevel
	float ___dopplerLevel_21;
	// System.Single Hellmade.Sound.Audio::spread
	float ___spread_22;
	// UnityEngine.AudioRolloffMode Hellmade.Sound.Audio::rolloffMode
	int32_t ___rolloffMode_23;
	// System.Single Hellmade.Sound.Audio::max3DDistance
	float ___max3DDistance_24;
	// System.Single Hellmade.Sound.Audio::min3DDistance
	float ___min3DDistance_25;
	// System.Single Hellmade.Sound.Audio::targetVolume
	float ___targetVolume_26;
	// System.Single Hellmade.Sound.Audio::initTargetVolume
	float ___initTargetVolume_27;
	// System.Single Hellmade.Sound.Audio::tempFadeSeconds
	float ___tempFadeSeconds_28;
	// System.Single Hellmade.Sound.Audio::fadeInterpolater
	float ___fadeInterpolater_29;
	// System.Single Hellmade.Sound.Audio::onFadeStartVolume
	float ___onFadeStartVolume_30;
	// UnityEngine.Transform Hellmade.Sound.Audio::sourceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform_31;
};

struct Audio_t645B7D470099079857386A95B679C828C798D13A_StaticFields
{
	// System.Int32 Hellmade.Sound.Audio::audioCounter
	int32_t ___audioCounter_12;
};

// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D  : public RuntimeObject
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___IncreaseCurve_5;
};

// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// PlayerGunShoot/<ShotEffect>d__16
struct U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764  : public RuntimeObject
{
	// System.Int32 PlayerGunShoot/<ShotEffect>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerGunShoot/<ShotEffect>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerGunShoot PlayerGunShoot/<ShotEffect>d__16::<>4__this
	PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* ___U3CU3E4__this_2;
};

// PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d
struct U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2  : public RuntimeObject
{
	// System.Int32 PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerGun_LevelTwo PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::<>4__this
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___U3CU3E4__this_2;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::groundCheckDistance
	float ___groundCheckDistance_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::stickToGroundHelperDistance
	float ___stickToGroundHelperDistance_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::slowDownRate
	float ___slowDownRate_2;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::airControl
	bool ___airControl_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::shellOffset
	float ___shellOffset_4;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunMultiplier
	float ___RunMultiplier_3;
	// UnityEngine.KeyCode UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunKey
	int32_t ___RunKey_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___SlopeCurveModifier_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::m_Running
	bool ___m_Running_8;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_4;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_7;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CharacterTargetRot_8;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CameraTargetRot_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Hellmade.Sound.EazySoundManager
struct EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields
{
	// System.Boolean Hellmade.Sound.EazySoundManager::<IgnoreDuplicateMusic>k__BackingField
	bool ___U3CIgnoreDuplicateMusicU3Ek__BackingField_4;
	// System.Boolean Hellmade.Sound.EazySoundManager::<IgnoreDuplicateSounds>k__BackingField
	bool ___U3CIgnoreDuplicateSoundsU3Ek__BackingField_5;
	// System.Boolean Hellmade.Sound.EazySoundManager::<IgnoreDuplicateUISounds>k__BackingField
	bool ___U3CIgnoreDuplicateUISoundsU3Ek__BackingField_6;
	// System.Single Hellmade.Sound.EazySoundManager::<GlobalVolume>k__BackingField
	float ___U3CGlobalVolumeU3Ek__BackingField_7;
	// System.Single Hellmade.Sound.EazySoundManager::<GlobalMusicVolume>k__BackingField
	float ___U3CGlobalMusicVolumeU3Ek__BackingField_8;
	// System.Single Hellmade.Sound.EazySoundManager::<GlobalSoundsVolume>k__BackingField
	float ___U3CGlobalSoundsVolumeU3Ek__BackingField_9;
	// System.Single Hellmade.Sound.EazySoundManager::<GlobalUISoundsVolume>k__BackingField
	float ___U3CGlobalUISoundsVolumeU3Ek__BackingField_10;
	// Hellmade.Sound.EazySoundManager Hellmade.Sound.EazySoundManager::instance
	EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* ___instance_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::musicAudio
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___musicAudio_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::soundsAudio
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___soundsAudio_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::UISoundsAudio
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___UISoundsAudio_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::audioPool
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___audioPool_15;
	// System.Boolean Hellmade.Sound.EazySoundManager::initialized
	bool ___initialized_16;
};

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_IsWalking
	bool ___m_IsWalking_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_WalkSpeed
	float ___m_WalkSpeed_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunSpeed
	float ___m_RunSpeed_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunstepLenghten
	float ___m_RunstepLenghten_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSpeed
	float ___m_JumpSpeed_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StickToGroundForce
	float ___m_StickToGroundForce_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_GravityMultiplier
	float ___m_GravityMultiplier_10;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* ___m_MouseLook_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseFovKick
	bool ___m_UseFovKick_12;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FovKick
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* ___m_FovKick_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseHeadBob
	bool ___m_UseHeadBob_14;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_HeadBob
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* ___m_HeadBob_15;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpBob
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* ___m_JumpBob_16;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_17;
	// UnityEngine.AudioClip[] UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FootstepSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___m_FootstepSounds_18;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_JumpSound_19;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_LandSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_LandSound_20;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_21;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jump
	bool ___m_Jump_22;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_YRotation
	float ___m_YRotation_23;
	// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Input_24;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDir_25;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_26;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_27;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_28;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_29;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepCycle
	float ___m_StepCycle_30;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_NextStep
	float ___m_NextStep_31;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jumping
	bool ___m_Jumping_32;
	// UnityEngine.AudioSource UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_AudioSource_33;
};

// GameManagerScript
struct GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManagerScript::score
	int32_t ___score_4;
	// UnityEngine.UI.Text GameManagerScript::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_5;
	// UnityEngine.UI.Image GameManagerScript::timerImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___timerImage_6;
	// UnityEngine.UI.Image GameManagerScript::startImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___startImage_7;
	// UnityEngine.UI.Text GameManagerScript::gameTimer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gameTimer_8;
	// UnityEngine.UI.Text GameManagerScript::startTimer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___startTimer_9;
	// System.Single GameManagerScript::timeToStart
	float ___timeToStart_10;
	// System.Single GameManagerScript::timeBeforeGameEnd
	float ___timeBeforeGameEnd_11;
	// GameManagerScript/State GameManagerScript::state
	int32_t ___state_12;
	// System.Int32 GameManagerScript::belowScore
	int32_t ___belowScore_13;
	// UnityEngine.Canvas GameManagerScript::setting
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___setting_14;
	// UnityEngine.Canvas GameManagerScript::message
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___message_15;
	// UnityStandardAssets.Characters.FirstPerson.FirstPersonController GameManagerScript::firstPersonController
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* ___firstPersonController_16;
	// PlayerGunShoot GameManagerScript::playerGun
	PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* ___playerGun_17;
	// UnityEngine.UI.InputField GameManagerScript::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_18;
	// UnityEngine.Canvas GameManagerScript::enterName
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___enterName_19;
	// System.String GameManagerScript::belowName
	String_t* ___belowName_20;
	// UnityEngine.GameObject GameManagerScript::Target1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target1_21;
	// System.Int32 GameManagerScript::Target1ToCreate
	int32_t ___Target1ToCreate_22;
	// UnityEngine.GameObject GameManagerScript::Target2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target2_23;
	// System.Int32 GameManagerScript::Target2ToCreate
	int32_t ___Target2ToCreate_24;
	// UnityEngine.GameObject GameManagerScript::Target3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target3_25;
	// System.Int32 GameManagerScript::Target3ToCreate
	int32_t ___Target3ToCreate_26;
	// System.Int32 GameManagerScript::count
	int32_t ___count_27;
	// UnityEngine.AudioClip GameManagerScript::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_28;
	// UnityEngine.UI.Text GameManagerScript::warning
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___warning_29;
	// UnityEngine.AudioSource GameManagerScript::ending
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ending_30;
	// UnityEngine.AudioSource GameManagerScript::start
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___start_31;
	// UnityEngine.Animator GameManagerScript::timeAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___timeAnim_32;
	// UnityEngine.UI.Text GameManagerScript::ammoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ammoText_33;
};

// GameManagerScriptLevel2
struct GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManagerScriptLevel2::score
	int32_t ___score_4;
	// UnityEngine.UI.Text GameManagerScriptLevel2::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_5;
	// UnityEngine.UI.Image GameManagerScriptLevel2::timerImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___timerImage_6;
	// UnityEngine.UI.Image GameManagerScriptLevel2::startImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___startImage_7;
	// UnityEngine.UI.Text GameManagerScriptLevel2::gameTimer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gameTimer_8;
	// UnityEngine.UI.Text GameManagerScriptLevel2::startTimer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___startTimer_9;
	// System.Single GameManagerScriptLevel2::timeToStart
	float ___timeToStart_10;
	// System.Single GameManagerScriptLevel2::timeBeforeGameEnd
	float ___timeBeforeGameEnd_11;
	// GameManagerScriptLevel2/State GameManagerScriptLevel2::state
	int32_t ___state_12;
	// System.Int32 GameManagerScriptLevel2::belowScore
	int32_t ___belowScore_13;
	// UnityEngine.Canvas GameManagerScriptLevel2::setting
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___setting_14;
	// UnityEngine.Canvas GameManagerScriptLevel2::message
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___message_15;
	// UnityStandardAssets.Characters.FirstPerson.FirstPersonController GameManagerScriptLevel2::firstPersonController
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* ___firstPersonController_16;
	// PlayerGun_LevelTwo GameManagerScriptLevel2::playerGunPistol
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___playerGunPistol_17;
	// PlayerGun_LevelTwo GameManagerScriptLevel2::playerGunAK
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___playerGunAK_18;
	// PlayerGun_LevelTwo GameManagerScriptLevel2::playerGunCarbine
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___playerGunCarbine_19;
	// PlayerGun_LevelTwo GameManagerScriptLevel2::playerGunShotgun
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___playerGunShotgun_20;
	// PlayerGun_LevelTwo GameManagerScriptLevel2::playerGunSniperRifle
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* ___playerGunSniperRifle_21;
	// WeaponSwitching GameManagerScriptLevel2::weaponSwitch
	WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* ___weaponSwitch_22;
	// UnityEngine.UI.InputField GameManagerScriptLevel2::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_23;
	// UnityEngine.Canvas GameManagerScriptLevel2::enterName
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___enterName_24;
	// System.String GameManagerScriptLevel2::belowName
	String_t* ___belowName_25;
	// UnityEngine.Rigidbody GameManagerScriptLevel2::player
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___player_26;
	// System.Int32 GameManagerScriptLevel2::count
	int32_t ___count_27;
	// UnityEngine.AudioClip GameManagerScriptLevel2::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_28;
	// UnityEngine.AudioSource GameManagerScriptLevel2::ending
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ending_29;
	// UnityEngine.AudioSource GameManagerScriptLevel2::start
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___start_30;
	// UnityEngine.UI.Text GameManagerScriptLevel2::warning
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___warning_31;
	// UnityEngine.Animator GameManagerScriptLevel2::timeAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___timeAnim_32;
};

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* ___motionBob_5;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* ___jumpAndLandingBob_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* ___rigidbodyFirstPersonController_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_11;
};

// HighScore
struct HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text HighScore::highscoreRankText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___highscoreRankText_4;
	// UnityEngine.UI.Text HighScore::highscoreNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___highscoreNameText_5;
	// UnityEngine.UI.Text HighScore::highscoreAmountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___highscoreAmountText_6;
	// System.String HighScore::highscoreRank
	String_t* ___highscoreRank_7;
	// System.String HighScore::highscorePlayerName
	String_t* ___highscorePlayerName_8;
	// System.String HighScore::highscoreAmount
	String_t* ___highscoreAmount_9;
};

// MainMenuScript
struct MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas MainMenuScript::mainMenuCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___mainMenuCanvas_4;
	// UnityEngine.Canvas MainMenuScript::optionsCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___optionsCanvas_5;
	// UnityEngine.Canvas MainMenuScript::levelSelectCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___levelSelectCanvas_6;
	// UnityEngine.UI.Slider MainMenuScript::musicSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicSlider_7;
	// UnityEngine.UI.Slider MainMenuScript::soundSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___soundSlider_8;
	// UnityEngine.AudioClip MainMenuScript::music
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___music_9;
	// UnityEngine.AudioClip MainMenuScript::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_10;
};

// PlayerGunShoot
struct PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerGunShoot::gunDamage
	int32_t ___gunDamage_4;
	// System.Single PlayerGunShoot::fireRate
	float ___fireRate_5;
	// System.Single PlayerGunShoot::weaponRange
	float ___weaponRange_6;
	// System.Single PlayerGunShoot::hitForce
	float ___hitForce_7;
	// UnityEngine.Transform PlayerGunShoot::playerGunEnd
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerGunEnd_8;
	// UnityEngine.Camera PlayerGunShoot::FPSCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___FPSCamera_9;
	// UnityEngine.WaitForSeconds PlayerGunShoot::shotDuration
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___shotDuration_10;
	// UnityEngine.AudioSource PlayerGunShoot::gunAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gunAudio_11;
	// UnityEngine.LineRenderer PlayerGunShoot::laserLine
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___laserLine_12;
	// System.Single PlayerGunShoot::nextFire
	float ___nextFire_13;
	// System.Int32 PlayerGunShoot::currentAmmo
	int32_t ___currentAmmo_14;
	// System.Int32 PlayerGunShoot::maxAmmo
	int32_t ___maxAmmo_15;
	// System.Int32 PlayerGunShoot::minAmmo
	int32_t ___minAmmo_16;
	// GameManagerScript PlayerGunShoot::gameManagerScript
	GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___gameManagerScript_17;
};

// PlayerGun_LevelTwo
struct PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerGun_LevelTwo::gunDamage
	float ___gunDamage_4;
	// System.Single PlayerGun_LevelTwo::weaponRange
	float ___weaponRange_5;
	// System.Single PlayerGun_LevelTwo::fireRate
	float ___fireRate_6;
	// System.Single PlayerGun_LevelTwo::nextFire
	float ___nextFire_7;
	// System.Single PlayerGun_LevelTwo::hitForce
	float ___hitForce_8;
	// UnityEngine.Camera PlayerGun_LevelTwo::FPSCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___FPSCamera_9;
	// UnityEngine.ParticleSystem PlayerGun_LevelTwo::MuzzleFlash
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___MuzzleFlash_10;
	// UnityEngine.GameObject PlayerGun_LevelTwo::impactEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactEffect_11;
	// System.Int32 PlayerGun_LevelTwo::maxAmmo
	int32_t ___maxAmmo_12;
	// System.Int32 PlayerGun_LevelTwo::currentAmmo
	int32_t ___currentAmmo_13;
	// System.Single PlayerGun_LevelTwo::reloadTime
	float ___reloadTime_14;
	// System.Boolean PlayerGun_LevelTwo::isReloading
	bool ___isReloading_15;
	// UnityEngine.AudioSource PlayerGun_LevelTwo::gunShotAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gunShotAudio_16;
	// UnityEngine.Animator PlayerGun_LevelTwo::weaponHolderAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___weaponHolderAnimator_17;
};

// RayViewerComplete
struct RayViewerComplete_tB327E4A1F5D2714E7A3B5455EFE73A7D0562CC63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RayViewerComplete::weaponRange
	float ___weaponRange_4;
	// UnityEngine.Camera RayViewerComplete::fpsCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___fpsCam_5;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* ___movementSettings_5;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* ___mouseLook_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* ___advancedSettings_7;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_RigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_RigidBody_8;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Capsule_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_YRotation
	float ___m_YRotation_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_GroundContactNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundContactNormal_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jump
	bool ___m_Jump_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jumping
	bool ___m_Jumping_14;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_IsGrounded
	bool ___m_IsGrounded_15;
};

// ShootableTargets
struct ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManagerScript ShootableTargets::score
	GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___score_4;
	// System.Int32 ShootableTargets::health
	int32_t ___health_5;
	// System.Int32 ShootableTargets::maxHealth
	int32_t ___maxHealth_6;
	// UnityEngine.UI.Slider ShootableTargets::healthBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthBar_7;
	// UnityEngine.GameObject ShootableTargets::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_8;
	// UnityEngine.GameObject ShootableTargets::explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explode_9;
	// UnityEngine.GameObject ShootableTargets::hit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hit_10;
	// UnityEngine.GameObject ShootableTargets::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_11;
};

// ShootableTargets_LevelTwo
struct ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ShootableTargets_LevelTwo::maxHealth
	float ___maxHealth_4;
	// UnityEngine.AI.NavMeshAgent ShootableTargets_LevelTwo::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_5;
	// UnityEngine.Transform ShootableTargets_LevelTwo::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_6;
	// UnityEngine.LayerMask ShootableTargets_LevelTwo::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_7;
	// UnityEngine.LayerMask ShootableTargets_LevelTwo::whatIsPlayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsPlayer_8;
	// GameManagerScriptLevel2 ShootableTargets_LevelTwo::score
	GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* ___score_9;
	// UnityEngine.GameObject ShootableTargets_LevelTwo::explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explode_10;
	// UnityEngine.GameObject ShootableTargets_LevelTwo::hit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hit_11;
	// UnityEngine.GameObject ShootableTargets_LevelTwo::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_12;
	// UnityEngine.Vector3 ShootableTargets_LevelTwo::walkPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___walkPoint_13;
	// System.Boolean ShootableTargets_LevelTwo::walkPointSet
	bool ___walkPointSet_14;
	// System.Single ShootableTargets_LevelTwo::walkPointRange
	float ___walkPointRange_15;
	// System.Single ShootableTargets_LevelTwo::timeBetweenAttacks
	float ___timeBetweenAttacks_16;
	// System.Boolean ShootableTargets_LevelTwo::alreadyAttacked
	bool ___alreadyAttacked_17;
	// UnityEngine.GameObject ShootableTargets_LevelTwo::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_18;
	// System.Single ShootableTargets_LevelTwo::sightRange
	float ___sightRange_19;
	// System.Single ShootableTargets_LevelTwo::attackRange
	float ___attackRange_20;
	// System.Boolean ShootableTargets_LevelTwo::playerInSightRange
	bool ___playerInSightRange_21;
	// System.Boolean ShootableTargets_LevelTwo::playerInAttackRange
	bool ___playerInAttackRange_22;
};

// SoundSliderBehaviour
struct SoundSliderBehaviour_tD5CC994A1D821640B0862EB0F614820B6334CA6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MainMenuScript SoundSliderBehaviour::mainMenuScript
	MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* ___mainMenuScript_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WeaponSwitching
struct WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WeaponSwitching::SelectedWeapon
	int32_t ___SelectedWeapon_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_72;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void GameManagerScript::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Pause_m06FF4EBBA646F0F578EA619171F386F608B0C350 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) ;
// System.Void GameManagerScript::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Resume_m72DA15C1422534E2844E07C8A5D5295F35EB6077 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void GameManagerScript::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_PlaySound_m2AE0C82A9122A380E4FBB84D87D7F18392AFAF7D (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Int32 Hellmade.Sound.EazySoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlaySound_m6978631AC6019CBA2A8EFB217720D7FF73181E6F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void GameManagerScriptLevel2::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Pause_m0D708D89C12807AD2A47C99172E25FCFF15B9DCF (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) ;
// System.Void GameManagerScriptLevel2::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Resume_m35D4572644BCB2E3D2F1EE9AE209AE9D0397BCB4 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) ;
// System.Void GameManagerScriptLevel2::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_PlaySound_m52C0D0E7003C09504A444E3F5EC7CFA0042D3138 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalMusicVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354_inline (const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalSoundsVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalSoundsVolume_m7FC902F282E514D49EF12B921DF8E30D87B436F4_inline (const RuntimeMethod* method) ;
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_mA6FF33371689AB3F6368149B25B6F1EE9866F6DB (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalMusicVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalMusicVolume_m64057054C58A0D5798C500C5042FB6C06EFD44CE_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalSoundsVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalSoundsVolume_m02C4C426E6A58BB1746CB6564F3B92A2830D6F86_inline (float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void GameManagerScript::updateAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_updateAmmo_mC654ED8BD6854429E9A68C8DE900A7EFBD3B9901 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, int32_t ___currentAmmo0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerGunShoot::ShotEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerGunShoot_ShotEffect_m3D3C341B51221B7F949C44068259423F2F26AB8A (PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ShootableTargets>()
inline ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* Component_GetComponent_TisShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029_mB439B1D509B997A9152111CECBE47884EA61F727 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ShootableTargets::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_Damage_mF77E945356FC55DECA9B14DEF2E2CCA8AEFC4446 (ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* __this, int32_t ___damageAmount0, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void PlayerGunShoot/<ShotEffect>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotEffectU3Ed__16__ctor_m3CF6631087C76539EE2816BB82914F1AB19E0C7F (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManagerScript>()
inline GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* Object_FindObjectOfType_TisGameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_m07716FA8DEFADD86471B9E18B5C28CA98AD9ED07 (const RuntimeMethod* method)
{
	return ((  GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void GameManagerScript::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_IncreaseScore_m7B928F61CBC106D70BCA34C8F6C2C64208BFACF7 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerGun_LevelTwo::<Update>g__Reload|16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerGun_LevelTwo_U3CUpdateU3Eg__ReloadU7C16_1_m12DB12E29C4FF6213DFF9A08AF8AF18B0424F564 (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) ;
// System.Void PlayerGun_LevelTwo::<Update>g__Shoot|16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo_U3CUpdateU3Eg__ShootU7C16_0_m79C2DA5827C991410149CD88E4BA78DF7063C61C (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ShootableTargets_LevelTwo>()
inline ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* Component_GetComponent_TisShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD_m5D3C18CFA7B0A74EF62E8BD20552525E22DDECF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ShootableTargets_LevelTwo::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_TakeDamage_m28919984A4530B7F43BF2ECA8E40BD6F15812534 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, float ___amount0, const RuntimeMethod* method) ;
// System.Void PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed__ctor_mCDA00EA7EC0996B7DF2806BF33DAD8254978BCAC (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManagerScriptLevel2>()
inline GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* Object_FindObjectOfType_TisGameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E_m5B101737F789B9418413F68BA7DDEAA78A4B2F70 (const RuntimeMethod* method)
{
	return ((  GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Void ShootableTargets_LevelTwo::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_Patroling_m0738C4134C6124BF42133E4DBA7BC865B0E05ED8 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) ;
// System.Void ShootableTargets_LevelTwo::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_ChasePlayer_m1B5F8A6CF66B9FE36EC010EE020D528D9F3284C5 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) ;
// System.Void ShootableTargets_LevelTwo::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_AttackPlayer_m83C4C2D7EE503CA8A605D33E2739CF632DCCA0D8 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) ;
// System.Void ShootableTargets_LevelTwo::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_SearchWalkPoint_mC8D94E655217732EA690AF0FB83C55A9B2876C86 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void GameManagerScriptLevel2::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_IncreaseScore_mA00803133DBC8AA8FF404D9A3C426676C8F17712 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) ;
// System.Void ShootableTargets_LevelTwo::EnemyDies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_EnemyDies_m7CFB2575EAFEEE3C4D3AA154AFD1A88F4E29D613 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<MainMenuScript>()
inline MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* Object_FindObjectOfType_TisMainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C_mEEBEADD742456B0C1CF0243D1403BD8E52F7A675 (const RuntimeMethod* method)
{
	return ((  MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void MainMenuScript::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_PlaySound_m35F3B3992CEBCE7730C664F91DB3BC78F6DBD8CB (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) ;
// System.Void WeaponSwitching::SelectWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSwitching_SelectWeapon_m9332B0A973028FF0A35B7F2262431DEE1C06F78B (WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_Setup_m4F9584C1610E1B767B6547BAB08E799D9F90F505 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___bobBaseInterval1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m4E62257BA42AC8F34522386BACF7885F91AA95A2 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___speed0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m3A72FD589557D6FBD4898FE2C414887AC9B8EEA8 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_mF7BD01A8C076F8D85D51C419F15EF3DC26F65A73 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick__ctor_mDF56243B3AC3548DDE2A9BDE0B5647D3651FE1DC (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.GameObject Hellmade.Sound.EazySoundManager::get_Gameobject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EazySoundManager_get_Gameobject_m0FBF3A731D2934F24328EF1FCCFE79AE7438D749 (const RuntimeMethod* method) ;
// UnityEngine.AudioSource Hellmade.Sound.Audio::get_AudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_panStereo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_reverbZoneMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_AudioID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_AudioID_m11454443A6057925232250F704A8C1527AD6684C_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Type(Hellmade.Sound.Audio/AudioType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Type_m85BEEB19CCCD190491B99B412BBB38F9B6DB0D39_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Clip_mB6FD3E2485B75E361624D79105985CA06A7B6520 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_SourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_SourceTransform_m48199F21999521B73B127376F280515005925D30 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Loop_mD2026FAFAD3A0522FEF0340BE54315734A1620EE (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Persist(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Persist_m83F8CF4E028A1A43D87E60923AF380A224587047_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_FadeInSeconds(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_FadeInSeconds_m6615BAAE2804CF55334EA8BCB8C32C7FF9019609_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_FadeOutSeconds(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_FadeOutSeconds_m8191CC8562D03BAFC54F12CC0E7123D9E98B1D55_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Volume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Volume_mED0D8FE0074CC4FC38B86E0B6C40FDA83D13A25F_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Pooled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Mute_mC7565500079775D2273E575F1E95649B8A613043 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Priority_mFDE1C52B482F1C35DFF5FCF3B8A070294AA6BB14 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Pitch_mCC3B7683F1F791CF8741C59F01A4A3322DE0A1AE (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_StereoPan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_StereoPan_m4FCA89004B842E4037775781D0C8FD6D3A8D9A5E (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_SpatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_SpatialBlend_m03F110E2A00BA3FF265B8BE3976E96A82C51D4D8 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_ReverbZoneMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_ReverbZoneMix_mEAD49F841A9F36509489C7B85D8F87680DC56447 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_DopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_DopplerLevel_m49BE2A0B6DD46263FEB6DD400E1CCA94FCCF863E (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Spread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Spread_mA437817D4C314897245C688F99F9D9AA9757BDD4 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_RolloffMode(UnityEngine.AudioRolloffMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_RolloffMode_m0FD9C9C3C94A63377FD4E1AB3FB6C91558A25563 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Min3DDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Min3DDistance_m81705865FF699E093DBB3646D143E5790B4C0E78 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Max3DDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Max3DDistance_m84D3699FCEE86BB29454B8C330F71F056DA18C22 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_IsPlaying(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Paused(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Activated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Activated_mDB268898D2B5F4CC847289A32A3EC84F3BEC21C4_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform Hellmade.Sound.Audio::get_SourceTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Audio_get_SourceTransform_m8D3E348298E64E8395EF895BE129E5D38A41C5AD_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Hellmade.Sound.Audio::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_AudioSource_m3EE81DCDFCD4979FADED991F384A333BAEA2C9B3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AudioClip Hellmade.Sound.Audio::get_Clip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Audio_get_Clip_m5818DA9540EE30CCADF7AD97306E31DA996499CD_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Loop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Loop_mA8B1B960CEAD99ACD294DC2F85C589EEB2552980_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Mute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Mute_m5D8381EEB32634313C6F1293DD946F92166663A0_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_Volume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 Hellmade.Sound.Audio::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_Priority_mF6C143E7B806BF0674F9FB09995650260E4B6FDA_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_Pitch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Pitch_mD7BB03B0D7652DB0E7F22D072F6170239E9C7578_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_StereoPan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_StereoPan_m56A9D7147A46E1E87475D6927FB407696F453D48_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_SpatialBlend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_SpatialBlend_m330EB53A6F111E7AC09DF25C546C3B7CD39F14C3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_ReverbZoneMix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_ReverbZoneMix_m5527687F7890F13F33879D40697CB2BD5E26FDF3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_DopplerLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_DopplerLevel_mC426C00AC03046210B5CC079119591335C2DD12B_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_Spread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Spread_mFF420F21BF184FAB106696AB9468FE783B8A7060_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioRolloffMode Hellmade.Sound.Audio::get_RolloffMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_RolloffMode_m6C41DC00552AE7C22E839FBB2192CDBAFA249AF9_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_Max3DDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Max3DDistance_mE54FE7A720532D56D44848A889541B761AE5EBBB_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_Min3DDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Min3DDistance_m57D62FB705E6EB5DB39A830BB6B4A28275DDE7DB_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Play_mCBDDF28FF87E640E0F81198F6694F582E23B1B40 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Pooled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Pooled_mEA01A1B7F5A6899EB260A337E377F34E70CC1EBF_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio/AudioType Hellmade.Sound.Audio::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Int32 Hellmade.Sound.Audio::get_AudioID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.EazySoundManager::RestoreAudioFromPool(Hellmade.Sound.Audio/AudioType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_RestoreAudioFromPool_m56B8005967B6A165ECEB094337E7BBCADF004955 (int32_t ___audioType0, int32_t ___audioID1, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::CreateAudiosource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_CreateAudiosource_mDF833D27BDB0AF23D3C04BD0730F4FCFE7E4056F (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::set_Stopping(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Stopping_m05B42920BEB7F91318DC3091A8E76FCDF4E17965_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_FadeOutSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_FadeOutSeconds_m373D153EB89BDCB8C309775B81E2F553A59326CE_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::SetVolume(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mC8C054481E1756C3C19DE89C2A4BE649B5100671 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, float ___fadeSeconds1, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.Audio::get_FadeInSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_FadeInSeconds_m69DFC297FD33F7AF732028D54EBC135CCADB0745_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::SetVolume(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mE5F88AFE2152B600A652B1ED27DD571A24B4E3C5 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, float ___fadeSeconds1, float ___startVolume2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454_inline (const RuntimeMethod* method) ;
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalUISoundsVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalUISoundsVolume_m80242FFC1EB86BBC65EDE7E5A610777E69504464_inline (const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Stopping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Stopping_m6B95B658E163EB22DE1BC488F1D75749B8A4A04A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_IsPlaying()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_IsPlaying_m4C066AD515ECD573E8DAFF077DE2C618A7BF7E19_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_m5E2835D701463AB393851163788F1F2DF3770E3E (const RuntimeMethod* method) ;
// Hellmade.Sound.EazySoundManager Hellmade.Sound.EazySoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* EazySoundManager_get_Instance_m799D6B91F0422E7240C3C3FC8DC62158AA49B64F (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Hellmade.Sound.EazySoundManager>()
inline EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* GameObject_AddComponent_TisEazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_m7CF7D73399C7A3BC14D3C0971BA007DEFB3D0CEF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Hellmade.Sound.EazySoundManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_Init_mB8EFB7C427B9C7153662494394878F85C9C50156 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::.ctor()
inline void Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalVolume_mCA22728FB5736F0B5AF5A8A638EB51E74EE39029_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalUISoundsVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalUISoundsVolume_m71C0CC9756B2342739CC80AFE56F775C89D0764A_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateMusic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateMusic_m4C3F3385F6B48AEC797E1C08D6C966B7E412287C_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateSounds(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateSounds_m09CCB53F544F509C784175DCEA4FB36BA3B0BF8B_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateUISounds(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateUISounds_m0EEEB586919B53FD314002182A7B23E94F3EB57F_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::RemoveNonPersistAudio(System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_RemoveNonPersistAudio_m8FF77D2FAE0B12FEB0E904B1644A39056A1EC9CA (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___audioDict0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::UpdateAllAudio(System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_UpdateAllAudio_m57507F1F9F8EFAABC66C1AEFBDEAAB7EE8A5AD21 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___audioDict0, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateMusic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateMusic_mB4A5E2A98B04700A2E166211CA9A36C5A7A8335A_inline (const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateSounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateSounds_m7752F4F9C39B61197C5C4C0E6659EA1CA4E8F3A4_inline (const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateUISounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateUISounds_mB1816CB87DFC4085F57E9FD13C6DB7999EDEB7EE_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::get_Keys()
inline KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, const RuntimeMethod*))Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::get_Item(TKey)
inline Audio_t645B7D470099079857386A95B679C828C798D13A* Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Audio_t645B7D470099079857386A95B679C828C798D13A* (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void Hellmade.Sound.Audio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Update_m4C4C5311F47F375F3125A1E95A2A53331166894A (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Paused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Paused_m3BDC28E22CE977F5DBEF3506EF14347FC567CCAA_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::Add(TKey,TValue)
inline void Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, int32_t ___key0, Audio_t645B7D470099079857386A95B679C828C798D13A* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, int32_t, Audio_t645B7D470099079857386A95B679C828C798D13A*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::Remove(TKey)
inline bool Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// System.Boolean Hellmade.Sound.Audio::get_Persist()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Persist_mF928162C5BFB76B4F7310988134AB4DC51FFC49E_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.Audio::get_Activated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Activated_mAD810CBE710752B61B1BBD658C2707859AF7D855_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::GetAudioTypeDictionary(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C (int32_t ___audioType0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetMusicAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetMusicAudio_m171981211587BD5A8B2B50E0F25AD211E8C7B611 (int32_t ___audioID0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetSoundAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetSoundAudio_mC2CBDF9E85C3D1A172F634ECB995C9AC9CF42B49 (int32_t ___audioID0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetUISoundAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetUISoundAudio_mCF5AAF3A17BF814A78E5EBB8BA48374E8FAD6C9F (int32_t ___audioID0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetMusicAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetMusicAudio_m3548262666C4E1DD2ACC51D9C26010680D2C9F0E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetSoundAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetSoundAudio_m581A07048450410EB7723B23C4224DF1B25997E9 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetUISoundAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetUISoundAudio_mD1E42AA944DCA90B5556417029C0D469588DB72F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(Hellmade.Sound.Audio/AudioType,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC (int32_t ___audioType0, bool ___usePool1, int32_t ___audioID2, const RuntimeMethod* method) ;
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(Hellmade.Sound.Audio/AudioType,System.Boolean,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445 (int32_t ___audioType0, bool ___usePool1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419_gshared)(___source0, method);
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareAudio(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C (int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volume2, bool ___loop3, bool ___persist4, float ___fadeInSeconds5, float ___fadeOutSeconds6, float ___currentMusicfadeOutSeconds7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform8, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean Hellmade.Sound.EazySoundManager::GetAudioTypeIgnoreDuplicateSetting(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_GetAudioTypeIgnoreDuplicateSetting_m0C6D81F19CEB263A9C75633546B3A7CE9C423ECE (int32_t ___audioType0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::.ctor(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio__ctor_m98D6789A8FE8426039097D583BCF12E88331669B (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___loop2, bool ___persist3, float ___volume4, float ___fadeInValue5, float ___fadeOutValue6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform7, const RuntimeMethod* method) ;
// System.Int32 Hellmade.Sound.EazySoundManager::PlayAudio(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498 (int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volume2, bool ___loop3, bool ___persist4, float ___fadeInSeconds5, float ___fadeOutSeconds6, float ___currentMusicfadeOutSeconds7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform8, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::StopAllMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllMusic_m36842F8A4E6C57DE9206770BE0B50A79FF7C7556 (float ___fadeOutSeconds0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Play_m508109D28BC17E7824E3320B9321FDADE1AB0BBC (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::StopAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAll_m467B71AB4A7AFD3A2F56AE8FF8E80083D45BC273 (float ___musicFadeOutSeconds0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::StopAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllSounds_mBF2F693C16FA490D1648CC6A0D69001666BE1484 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::StopAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllUISounds_mA50B42B0D8F656CFA1AFDD3EB6025BD1BDE58894 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::StopAllAudio(Hellmade.Sound.Audio/AudioType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C (int32_t ___audioType0, float ___fadeOutSeconds1, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Stop_mB0EDFC4B8FE86E0182668F94816295FF0ACE3770 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::PauseAllMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllMusic_m6BBBB7ACA760D2629899F60BFAF7C230DF101B1D (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::PauseAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllSounds_m2E892464BB5154C25614FDD2C810A82BB4FE536F (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::PauseAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllUISounds_m1ACC7B6FA334107AF21598ED7B98AFD21605FA72 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::PauseAllAudio(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllAudio_mB4AD89EDB1CE4091C7A79C4EEDECE0257534DB4D (int32_t ___audioType0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Pause_m9B2CCF66F33E9F85E7D5A1AD4206D8D2EF0319F6 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllMusic_m3212BB18A22B4513BDEAA4DFF78B9ED638C222B6 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllSounds_m763598A097D1B44F52946EEB6721DEDAEDE505D3 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllUISounds_m75EB6AC93E9414D0B0EAC8BDD6374707360470A3 (const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllAudio(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllAudio_mBF0053BE09E243782F2FD55109F41269B7F43B98 (int32_t ___audioType0, const RuntimeMethod* method) ;
// System.Void Hellmade.Sound.Audio::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Resume_m948F4245560B61967CB21617802A502D5A810588 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Start_mA25E3020DECECA3D3FE1405D943E9CBE204111A3 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FCF50DE65AF07A3A21E10B5DE286AB96354C1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4974398C200A197776883C16EB9BCA14FB36DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA746DEC011DFA0648B689BE15434010C83FA8E4D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// ending.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ending_30;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_0, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// start.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___start_31;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_2, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// timeAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___timeAnim_32 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeAnim_32), (void*)L_4);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_5 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// playerGun.enabled = false;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_6 = __this->___playerGun_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// scoreText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___scoreText_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// startTimer.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___startTimer_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// startImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___startImage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (Target1 == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___Target1_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		// Debug.LogError("No Spheres");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA746DEC011DFA0648B689BE15434010C83FA8E4D, NULL);
		goto IL_00c4;
	}

IL_0089:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		V_0 = 0;
		goto IL_00bb;
	}

IL_008d:
	{
		// Instantiate(Target1, new Vector3(Random.Range(-20, 20), 2, 5), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Target1_21;
		int32_t L_16;
		L_16 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-20), ((int32_t)20), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)L_16), (2.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00bb:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_21 = V_0;
		int32_t L_22 = __this->___Target1ToCreate_22;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_008d;
		}
	}

IL_00c4:
	{
		// if (Target2 == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___Target2_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00de;
		}
	}
	{
		// Debug.LogError("No Cube");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral8D4974398C200A197776883C16EB9BCA14FB36DE, NULL);
		goto IL_0119;
	}

IL_00de:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		V_1 = 0;
		goto IL_0110;
	}

IL_00e2:
	{
		// Instantiate(Target2, new Vector3(Random.Range(-20, 20), 2, 25), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Target2_23;
		int32_t L_26;
		L_26 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-20), ((int32_t)20), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), ((float)L_26), (2.0f), (25.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_25, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0110:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->___Target1ToCreate_22;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_00e2;
		}
	}

IL_0119:
	{
		// if (Target3 == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___Target3_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_0132;
		}
	}
	{
		// Debug.LogError("No Cylinder");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6FCF50DE65AF07A3A21E10B5DE286AB96354C1DF, NULL);
		return;
	}

IL_0132:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		V_2 = 0;
		goto IL_0164;
	}

IL_0136:
	{
		// Instantiate(Target3, new Vector3(Random.Range(-20, 20), 2, 45), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___Target3_25;
		int32_t L_36;
		L_36 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-20), ((int32_t)20), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)L_36), (2.0f), (45.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_35, L_37, L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0164:
	{
		// for (int i = 0; i < Target1ToCreate; i++)
		int32_t L_41 = V_2;
		int32_t L_42 = __this->___Target1ToCreate_22;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0136;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManagerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Update_m8DF89F16AEFD9A27E16B701E1655CD43EE0E5ABB (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04C712CE92B1D3855300090B95F2160F3669998B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (state == State.Start)
		int32_t L_0 = __this->___state_12;
		if (L_0)
		{
			goto IL_0099;
		}
	}
	{
		// timeToStart -= Time.deltaTime;
		float L_1 = __this->___timeToStart_10;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeToStart_10 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// startTimer.text = Mathf.Ceil(timeToStart).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___startTimer_9;
		float L_4 = __this->___timeToStart_10;
		float L_5;
		L_5 = ceilf(L_4);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// startImage.fillAmount = timeToStart % 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___startImage_7;
		float L_8 = __this->___timeToStart_10;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_7, (fmodf(L_8, (1.0f))), NULL);
		// start.gameObject.SetActive(true);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___start_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// if (timeToStart < 0)
		float L_11 = __this->___timeToStart_10;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// state = State.Game;
		__this->___state_12 = 1;
		// startTimer.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___startTimer_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// startImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___startImage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_0099:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_16;
		L_16 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		// if(count == 0)
		int32_t L_17 = __this->___count_27;
		if (L_17)
		{
			goto IL_00b2;
		}
	}
	{
		// Pause();
		GameManagerScript_Pause_m06FF4EBBA646F0F578EA619171F386F608B0C350(__this, NULL);
		goto IL_00c1;
	}

IL_00b2:
	{
		// else if (count == 1)
		int32_t L_18 = __this->___count_27;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_00c1;
		}
	}
	{
		// Resume();
		GameManagerScript_Resume_m72DA15C1422534E2844E07C8A5D5295F35EB6077(__this, NULL);
	}

IL_00c1:
	{
		// if (state == State.Game) {
		int32_t L_19 = __this->___state_12;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_0219;
		}
	}
	{
		// gameTimer.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___gameTimer_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// timerImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___timerImage_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// firstPersonController.enabled = true;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_24 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		// playerGun.enabled = true;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_25 = __this->___playerGun_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)1, NULL);
		// timeBeforeGameEnd -= Time.deltaTime;
		float L_26 = __this->___timeBeforeGameEnd_11;
		float L_27;
		L_27 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeBeforeGameEnd_11 = ((float)il2cpp_codegen_subtract(L_26, L_27));
		// gameTimer.text = Mathf.Ceil(timeBeforeGameEnd).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___gameTimer_8;
		float L_29 = __this->___timeBeforeGameEnd_11;
		float L_30;
		L_30 = ceilf(L_29);
		V_0 = L_30;
		String_t* L_31;
		L_31 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_31);
		// timerImage.fillAmount = timeBeforeGameEnd % 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___timerImage_6;
		float L_33 = __this->___timeBeforeGameEnd_11;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_32, (fmodf(L_33, (1.0f))), NULL);
		// if(timeBeforeGameEnd <= 3)
		float L_34 = __this->___timeBeforeGameEnd_11;
		if ((!(((float)L_34) <= ((float)(3.0f)))))
		{
			goto IL_017c;
		}
	}
	{
		// ending.gameObject.SetActive(true);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___ending_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// timeAnim.SetTrigger("TimeEnding");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___timeAnim_32;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_37, _stringLiteral04C712CE92B1D3855300090B95F2160F3669998B, NULL);
	}

IL_017c:
	{
		// if (timeBeforeGameEnd < 0)
		float L_38 = __this->___timeBeforeGameEnd_11;
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_0219;
		}
	}
	{
		// timeAnim.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->___timeAnim_32;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_39, (bool)0, NULL);
		// gameTimer.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___gameTimer_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// timerImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___timerImage_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_44 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_44, (bool)0, NULL);
		// playerGun.enabled = false;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_45 = __this->___playerGun_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)0, NULL);
		// if (score < PlayerPrefs.GetInt(10.ToString(), 0))
		int32_t L_46 = __this->___score_4;
		V_1 = ((int32_t)10);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_48;
		L_48 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_47, 0, NULL);
		if ((((int32_t)L_46) >= ((int32_t)L_48)))
		{
			goto IL_0208;
		}
	}
	{
		// message.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_49 = __this->___message_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		return;
	}

IL_0208:
	{
		// enterName.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_51 = __this->___enterName_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_51, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
	}

IL_0219:
	{
		// }
		return;
	}
}
// System.Void GameManagerScript::updateAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_updateAmmo_mC654ED8BD6854429E9A68C8DE900A7EFBD3B9901 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, int32_t ___currentAmmo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral076997B2BB5A4801F82757376E097FA11FA81067);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ammoText.text = $"Ammo: {currentAmmo}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ammoText_33;
		int32_t L_1 = ___currentAmmo0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral076997B2BB5A4801F82757376E097FA11FA81067, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void GameManagerScript::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_IncreaseScore_m7B928F61CBC106D70BCA34C8F6C2C64208BFACF7 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 1;
		int32_t L_0 = __this->___score_4;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// scoreText.text = "Score: " + score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_5;
		int32_t* L_2 = (&__this->___score_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManagerScript::OnClickMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_OnClickMenu_m7A317783976B14246B89FCF527B0C676422C0A6A (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::OnClickReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_OnClickReset_mAA8BDF8D0F3079B25E43208774FD5BE90E9BA524 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySound();
		GameManagerScript_PlaySound_m2AE0C82A9122A380E4FBB84D87D7F18392AFAF7D(__this, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Pause_m06FF4EBBA646F0F578EA619171F386F608B0C350 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// count = 1;
		__this->___count_27 = 1;
		// state = State.Pause;
		__this->___state_12 = 2;
		// setting.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___setting_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_2 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// playerGun.enabled = false;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_3 = __this->___playerGun_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// start.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___start_31;
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_4, NULL);
		// ending.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___ending_30;
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_5, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Resume_m72DA15C1422534E2844E07C8A5D5295F35EB6077 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// count = 0;
		__this->___count_27 = 0;
		// state = State.Start;
		__this->___state_12 = 0;
		// setting.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___setting_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// start.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___start_31;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// ending.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___ending_30;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_PlaySound_m2AE0C82A9122A380E4FBB84D87D7F18392AFAF7D (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EazySoundManager.PlaySound(sound);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___sound_28;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlaySound_m6978631AC6019CBA2A8EFB217720D7FF73181E6F(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::SaveNameOfHighScorePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_SaveNameOfHighScorePlayer_mA0F5CC87DE53F51F06F1CFE89A517632A9BFAE2A (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E51A8A7FF68322A7630242FB347EF93637283D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (inputField.text == "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_18;
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// warning.text = " CANNOT BE EMPTY ";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___warning_29;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral6E51A8A7FF68322A7630242FB347EF93637283D9);
		return;
	}

IL_0028:
	{
		// for (int i = 10; i >= 1; i--)
		V_0 = ((int32_t)10);
		goto IL_019f;
	}

IL_0030:
	{
		// if (score >= PlayerPrefs.GetInt(i.ToString(), 0)) //2 1
		int32_t L_4 = __this->___score_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_5, 0, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_00b4;
		}
	}
	{
		// belowScore = PlayerPrefs.GetInt(i.ToString(), 0); //1
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_7, 0, NULL);
		__this->___belowScore_13 = L_8;
		// belowName = PlayerPrefs.GetString("HighScorePlayerName" + i.ToString(), ""); //1
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_9, NULL);
		String_t* L_11;
		L_11 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___belowName_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___belowName_20), (void*)L_11);
		// PlayerPrefs.SetInt((i + 1).ToString(), belowScore); //1
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_14 = __this->___belowScore_13;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_13, L_14, NULL);
		// PlayerPrefs.SetString(("HighScorePlayerName" + (i + 1)).ToString(), belowName); //1
		int32_t L_15 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_16, NULL);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		String_t* L_19 = __this->___belowName_20;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_18, L_19, NULL);
	}

IL_00b4:
	{
		// if (score == PlayerPrefs.GetInt(i.ToString(), 0))
		int32_t L_20 = __this->___score_4;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_22;
		L_22 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_21, 0, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_0101;
		}
	}
	{
		// PlayerPrefs.SetInt(i.ToString(), score);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_24 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_23, L_24, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_25, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_27 = __this->___inputField_18;
		String_t* L_28;
		L_28 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_27, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_26, L_28, NULL);
		// break;
		goto IL_01a6;
	}

IL_0101:
	{
		// if (score < PlayerPrefs.GetInt(i.ToString(), 0))
		int32_t L_29 = __this->___score_4;
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_31;
		L_31 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_30, 0, NULL);
		if ((((int32_t)L_29) >= ((int32_t)L_31)))
		{
			goto IL_0153;
		}
	}
	{
		// PlayerPrefs.SetInt((i + 1).ToString(), score);
		int32_t L_32 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_34 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_33, L_34, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + (i + 1).ToString(), inputField.text);
		int32_t L_35 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_36, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_38 = __this->___inputField_18;
		String_t* L_39;
		L_39 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_38, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_37, L_39, NULL);
		// break;
		goto IL_01a6;
	}

IL_0153:
	{
		// if (i == 1)
		int32_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_019b;
		}
	}
	{
		// PlayerPrefs.SetInt(i.ToString(), score);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_42 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_41, L_42, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_44;
		L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_43, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_45 = __this->___inputField_18;
		String_t* L_46;
		L_46 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_45, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_44, L_46, NULL);
		// enterName.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_47 = __this->___enterName_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
	}

IL_019b:
	{
		// for (int i = 10; i >= 1; i--)
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_019f:
	{
		// for (int i = 10; i >= 1; i--)
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) >= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}

IL_01a6:
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript__ctor_m22519EC82CC55358B36313064899C432DDDA23FC (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagerScriptLevel2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Start_m2727C1B71407DA6F46890F8768F234B5000573BB (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___timeAnim_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeAnim_32), (void*)L_0);
		// ending.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___ending_29;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_1, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// start.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___start_30;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_3, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_5 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// playerGunPistol.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_6 = __this->___playerGunPistol_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// playerGunAK.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_7 = __this->___playerGunAK_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// playerGunCarbine.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_8 = __this->___playerGunCarbine_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// playerGunShotgun.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_9 = __this->___playerGunShotgun_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// playerGunSniperRifle.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_10 = __this->___playerGunSniperRifle_21;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
		// weaponSwitch.enabled = false;
		WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* L_11 = __this->___weaponSwitch_22;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// scoreText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___scoreText_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// startTimer.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___startTimer_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// startImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___startImage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Update_mAA8801921D4FF716EAC9A81676B266786D490596 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68343AA0083C1A8A70EA51BD1BBCBCACAB4D373);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (state == State.Start)
		int32_t L_0 = __this->___state_12;
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		// player.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___player_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// timeToStart -= Time.deltaTime;
		float L_3 = __this->___timeToStart_10;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeToStart_10 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// startTimer.text = Mathf.Ceil(timeToStart).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___startTimer_9;
		float L_6 = __this->___timeToStart_10;
		float L_7;
		L_7 = ceilf(L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// startImage.fillAmount = timeToStart % 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___startImage_7;
		float L_10 = __this->___timeToStart_10;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_9, (fmodf(L_10, (1.0f))), NULL);
		// start.gameObject.SetActive(true);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___start_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (timeToStart < 0)
		float L_13 = __this->___timeToStart_10;
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		// state = State.Game;
		__this->___state_12 = 1;
		// startTimer.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___startTimer_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// startImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___startImage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_00a9:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_18;
		L_18 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_18)
		{
			goto IL_00d1;
		}
	}
	{
		// if(count == 0)
		int32_t L_19 = __this->___count_27;
		if (L_19)
		{
			goto IL_00c2;
		}
	}
	{
		// Pause();
		GameManagerScriptLevel2_Pause_m0D708D89C12807AD2A47C99172E25FCFF15B9DCF(__this, NULL);
		goto IL_00d1;
	}

IL_00c2:
	{
		// else if (count == 1)
		int32_t L_20 = __this->___count_27;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00d1;
		}
	}
	{
		// Resume();
		GameManagerScriptLevel2_Resume_m35D4572644BCB2E3D2F1EE9AE209AE9D0397BCB4(__this, NULL);
	}

IL_00d1:
	{
		// if (state == State.Game) {
		int32_t L_21 = __this->___state_12;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_02a1;
		}
	}
	{
		// gameTimer.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___gameTimer_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// timerImage.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___timerImage_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// firstPersonController.enabled = true;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_26 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)1, NULL);
		// playerGunPistol.enabled = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_27 = __this->___playerGunPistol_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
		// playerGunAK.enabled = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_28 = __this->___playerGunAK_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)1, NULL);
		// playerGunCarbine.enabled = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_29 = __this->___playerGunCarbine_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)1, NULL);
		// playerGunShotgun.enabled = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_30 = __this->___playerGunShotgun_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// playerGunSniperRifle.enabled = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_31 = __this->___playerGunSniperRifle_21;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)1, NULL);
		// weaponSwitch.enabled = true;
		WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* L_32 = __this->___weaponSwitch_22;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_32, (bool)1, NULL);
		// timeBeforeGameEnd -= Time.deltaTime;
		float L_33 = __this->___timeBeforeGameEnd_11;
		float L_34;
		L_34 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeBeforeGameEnd_11 = ((float)il2cpp_codegen_subtract(L_33, L_34));
		// gameTimer.text = Mathf.Ceil(timeBeforeGameEnd).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___gameTimer_8;
		float L_36 = __this->___timeBeforeGameEnd_11;
		float L_37;
		L_37 = ceilf(L_36);
		V_0 = L_37;
		String_t* L_38;
		L_38 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_38);
		// timerImage.fillAmount = timeBeforeGameEnd % 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___timerImage_6;
		float L_40 = __this->___timeBeforeGameEnd_11;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_39, (fmodf(L_40, (1.0f))), NULL);
		// if (timeBeforeGameEnd <= 3)
		float L_41 = __this->___timeBeforeGameEnd_11;
		if ((!(((float)L_41) <= ((float)(3.0f)))))
		{
			goto IL_01c8;
		}
	}
	{
		// timeAnim.SetTrigger("TimeEnding2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___timeAnim_32;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_42, _stringLiteralF68343AA0083C1A8A70EA51BD1BBCBCACAB4D373, NULL);
		// ending.gameObject.SetActive(true);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_43 = __this->___ending_29;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
	}

IL_01c8:
	{
		// if (timeBeforeGameEnd < 0)
		float L_45 = __this->___timeBeforeGameEnd_11;
		if ((!(((float)L_45) < ((float)(0.0f)))))
		{
			goto IL_02a1;
		}
	}
	{
		// timeAnim.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->___timeAnim_32;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_46, (bool)0, NULL);
		// gameTimer.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = __this->___gameTimer_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// timerImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = __this->___timerImage_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_51 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_51, (bool)0, NULL);
		// playerGunPistol.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_52 = __this->___playerGunPistol_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_52, (bool)0, NULL);
		// playerGunAK.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_53 = __this->___playerGunAK_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_53, (bool)0, NULL);
		// playerGunCarbine.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_54 = __this->___playerGunCarbine_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_54, (bool)0, NULL);
		// playerGunShotgun.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_55 = __this->___playerGunShotgun_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_55, (bool)0, NULL);
		// playerGunSniperRifle.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_56 = __this->___playerGunSniperRifle_21;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_56, (bool)0, NULL);
		// weaponSwitch.enabled = false;
		WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* L_57 = __this->___weaponSwitch_22;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_57, (bool)0, NULL);
		// if (score < PlayerPrefs.GetInt(10.ToString(), 0))
		int32_t L_58 = __this->___score_4;
		V_1 = ((int32_t)10);
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_60;
		L_60 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_59, 0, NULL);
		if ((((int32_t)L_58) >= ((int32_t)L_60)))
		{
			goto IL_0290;
		}
	}
	{
		// message.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_61 = __this->___message_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)1, NULL);
		return;
	}

IL_0290:
	{
		// enterName.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_63 = __this->___enterName_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)1, NULL);
	}

IL_02a1:
	{
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_IncreaseScore_mA00803133DBC8AA8FF404D9A3C426676C8F17712 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 1;
		int32_t L_0 = __this->___score_4;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// scoreText.text = "Score: " + score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_5;
		int32_t* L_2 = (&__this->___score_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::OnClickMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_OnClickMenu_m2C267F8B44291CFE71D1A071A32A0F4E3D7384E9 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::OnClickReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_OnClickReset_m879A15A3C60507A82740715EC4A675E452599C8B (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySound();
		GameManagerScriptLevel2_PlaySound_m52C0D0E7003C09504A444E3F5EC7CFA0042D3138(__this, NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Pause_m0D708D89C12807AD2A47C99172E25FCFF15B9DCF (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// count = 1;
		__this->___count_27 = 1;
		// state = State.Pause;
		__this->___state_12 = 2;
		// setting.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___setting_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// firstPersonController.enabled = false;
		FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* L_2 = __this->___firstPersonController_16;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// playerGunPistol.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_3 = __this->___playerGunPistol_17;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// playerGunAK.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_4 = __this->___playerGunAK_18;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// playerGunCarbine.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_5 = __this->___playerGunCarbine_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// playerGunShotgun.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_6 = __this->___playerGunShotgun_20;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// playerGunSniperRifle.enabled = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_7 = __this->___playerGunSniperRifle_21;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// weaponSwitch.enabled = false;
		WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* L_8 = __this->___weaponSwitch_22;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// start.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___start_30;
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_9, NULL);
		// ending.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___ending_29;
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_10, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_Resume_m35D4572644BCB2E3D2F1EE9AE209AE9D0397BCB4 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// count = 0;
		__this->___count_27 = 0;
		// state = State.Start;
		__this->___state_12 = 0;
		// setting.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___setting_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// start.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___start_30;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// ending.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___ending_29;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_PlaySound_m52C0D0E7003C09504A444E3F5EC7CFA0042D3138 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EazySoundManager.PlaySound(sound);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___sound_28;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlaySound_m6978631AC6019CBA2A8EFB217720D7FF73181E6F(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::SaveNameOfHighScorePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2_SaveNameOfHighScorePlayer_m273867448B4667DF362992BF6EEC12EBA72FAFB5 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E51A8A7FF68322A7630242FB347EF93637283D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (inputField.text == "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputField_23;
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// warning.text = " CANNOT BE EMPTY ";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___warning_31;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral6E51A8A7FF68322A7630242FB347EF93637283D9);
		return;
	}

IL_0028:
	{
		// for (int i = 10; i >= 1; i--)
		V_0 = ((int32_t)10);
		goto IL_019f;
	}

IL_0030:
	{
		// if (score >= PlayerPrefs.GetInt(i.ToString(), 0)) //2 1
		int32_t L_4 = __this->___score_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_5, 0, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_00b4;
		}
	}
	{
		// belowScore = PlayerPrefs.GetInt(i.ToString(), 0); //1
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_7, 0, NULL);
		__this->___belowScore_13 = L_8;
		// belowName = PlayerPrefs.GetString("HighScorePlayerName" + i.ToString(), ""); //1
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_9, NULL);
		String_t* L_11;
		L_11 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___belowName_25 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___belowName_25), (void*)L_11);
		// PlayerPrefs.SetInt((i + 1).ToString(), belowScore); //1
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_14 = __this->___belowScore_13;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_13, L_14, NULL);
		// PlayerPrefs.SetString(("HighScorePlayerName" + (i + 1)).ToString(), belowName); //1
		int32_t L_15 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_16, NULL);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		String_t* L_19 = __this->___belowName_25;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_18, L_19, NULL);
	}

IL_00b4:
	{
		// if (score == PlayerPrefs.GetInt(i.ToString(), 0))
		int32_t L_20 = __this->___score_4;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_22;
		L_22 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_21, 0, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_0101;
		}
	}
	{
		// PlayerPrefs.SetInt(i.ToString(), score);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_24 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_23, L_24, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_25, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_27 = __this->___inputField_23;
		String_t* L_28;
		L_28 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_27, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_26, L_28, NULL);
		// break;
		goto IL_01a6;
	}

IL_0101:
	{
		// if (score < PlayerPrefs.GetInt(i.ToString(), 0))
		int32_t L_29 = __this->___score_4;
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_31;
		L_31 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_30, 0, NULL);
		if ((((int32_t)L_29) >= ((int32_t)L_31)))
		{
			goto IL_0153;
		}
	}
	{
		// PlayerPrefs.SetInt((i + 1).ToString(), score);
		int32_t L_32 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		int32_t L_34 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_33, L_34, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + (i + 1).ToString(), inputField.text);
		int32_t L_35 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_36, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_38 = __this->___inputField_23;
		String_t* L_39;
		L_39 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_38, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_37, L_39, NULL);
		// break;
		goto IL_01a6;
	}

IL_0153:
	{
		// if (i == 1)
		int32_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_019b;
		}
	}
	{
		// PlayerPrefs.SetInt(i.ToString(), score);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_42 = __this->___score_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_41, L_42, NULL);
		// PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_44;
		L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_43, NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_45 = __this->___inputField_23;
		String_t* L_46;
		L_46 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_45, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_44, L_46, NULL);
		// enterName.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_47 = __this->___enterName_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
	}

IL_019b:
	{
		// for (int i = 10; i >= 1; i--)
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_019f:
	{
		// for (int i = 10; i >= 1; i--)
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) >= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}

IL_01a6:
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScriptLevel2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScriptLevel2__ctor_m66B38B7D621A78F9C2D2664A9C604B0296AB2D97 (GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore_Start_m03530F5F5B51B080EF6A9BADD171DD6278A43950 (HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 1; i <= 10; i++)
		V_0 = 1;
		goto IL_0081;
	}

IL_0004:
	{
		// highscoreRank += i.ToString() + "\n";
		String_t* L_0 = __this->___highscoreRank_7;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___highscoreRank_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highscoreRank_7), (void*)L_2);
		// highscorePlayerName += PlayerPrefs.GetString("HighScorePlayerName" + i.ToString(), "") + "\n";
		String_t* L_3 = __this->___highscorePlayerName_8;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral292AD70CF21552006135C507B3A6AFFA507456B0, L_4, NULL);
		String_t* L_6;
		L_6 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, L_6, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___highscorePlayerName_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highscorePlayerName_8), (void*)L_7);
		// highscoreAmount += PlayerPrefs.GetInt(i.ToString(), 0).ToString() + "\n";
		String_t* L_8 = __this->___highscoreAmount_9;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_9, 0, NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_8, L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___highscoreAmount_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highscoreAmount_9), (void*)L_12);
		// for (int i = 1; i <= 10; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0081:
	{
		// for (int i = 1; i <= 10; i++)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		// highscoreRankText.text = highscoreRank;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___highscoreRankText_4;
		String_t* L_16 = __this->___highscoreRank_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		// highscoreNameText.text = highscorePlayerName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___highscoreNameText_5;
		String_t* L_18 = __this->___highscorePlayerName_8;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// highscoreAmountText.text = highscoreAmount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___highscoreAmountText_6;
		String_t* L_20 = __this->___highscoreAmount_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		// }
		return;
	}
}
// System.Void HighScore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore_Update_mFD83575D1FC1F23217A03BC295AA5084B075A6EA (HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HighScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore__ctor_m94B0B5695A6D597D2E294CC40EC66325A16FB1EB (HighScore_tAB53E25EE211F5AF017E511C8EC1B10EDC12DC7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenuScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_Start_mC1D05E15D183A59D0A7AB8AB22E0AA1BBFD1F78F (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mainMenuCanvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___mainMenuCanvas_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// mainMenuCanvas.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___mainMenuCanvas_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_001f:
	{
		// if (optionsCanvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___optionsCanvas_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// optionsCanvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___optionsCanvas_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_003e:
	{
		// if (levelSelectCanvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8 = __this->___levelSelectCanvas_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// levelSelectCanvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = __this->___levelSelectCanvas_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_005d:
	{
		// if (musicSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___musicSlider_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		// musicSlider.value = EazySoundManager.GlobalMusicVolume;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___musicSlider_7;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354_inline(NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
	}

IL_007b:
	{
		// if (soundSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___soundSlider_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0099;
		}
	}
	{
		// soundSlider.value = EazySoundManager.GlobalSoundsVolume;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___soundSlider_8;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = EazySoundManager_get_GlobalSoundsVolume_m7FC902F282E514D49EF12B921DF8E30D87B436F4_inline(NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
	}

IL_0099:
	{
		// EazySoundManager.PlayMusic(music, EazySoundManager.GlobalMusicVolume, true, false);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20 = __this->___music_9;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_21;
		L_21 = EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354_inline(NULL);
		int32_t L_22;
		L_22 = EazySoundManager_PlayMusic_mA6FF33371689AB3F6368149B25B6F1EE9866F6DB(L_20, L_21, (bool)1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::GoToLevelOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_GoToLevelOne_mC8727B15632896558FE150A471E389EA85C8F8A8 (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::GoToLevelTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_GoToLevelTwo_m4759E69F5AD0CED1839E044C2421225DB718CE6B (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_QuitGame_m4DAACD3D7209F5A28ACC1F64AC119B5D3928A2B5 (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit(); // note: only works when build + run
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_PlaySound_m35F3B3992CEBCE7730C664F91DB3BC78F6DBD8CB (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EazySoundManager.PlaySound(sound);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___sound_10;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlaySound_m6978631AC6019CBA2A8EFB217720D7FF73181E6F(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::ChangeMusicVolume(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_ChangeMusicVolume_m20BCCD7FA5A8E9AC881D119705437B58329BB967 (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EazySoundManager.GlobalMusicVolume = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_set_GlobalMusicVolume_m64057054C58A0D5798C500C5042FB6C06EFD44CE_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::ChangeSoundVolume(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_ChangeSoundVolume_m1047614E44EB060678D5D4DADF5544F2B31F046D (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EazySoundManager.GlobalSoundsVolume = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_set_GlobalSoundsVolume_m02C4C426E6A58BB1746CB6564F3B92A2830D6F86_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript__ctor_m3C51F6D5E8055AD49954985F1F0D54DDB8A2FEBB (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerGunShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGunShoot_Start_m4F60DC751EEC6CBA742C9C7314010553D2FDE698 (PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C950DD70CAACD5B71DB42BC4C746E1F78985737);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserLine = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___laserLine_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___laserLine_12), (void*)L_0);
		// gunAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___gunAudio_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gunAudio_11), (void*)L_1);
		// if (gunAudio == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___gunAudio_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("No gun shot audio found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C950DD70CAACD5B71DB42BC4C746E1F78985737, NULL);
	}

IL_0030:
	{
		// FPSCamera = GetComponentInParent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE(__this, Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		__this->___FPSCamera_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FPSCamera_9), (void*)L_4);
		// currentAmmo = maxAmmo;
		int32_t L_5 = __this->___maxAmmo_15;
		__this->___currentAmmo_14 = L_5;
		// gameManagerScript.updateAmmo(currentAmmo);
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_6 = __this->___gameManagerScript_17;
		int32_t L_7 = __this->___currentAmmo_14;
		GameManagerScript_updateAmmo_mC654ED8BD6854429E9A68C8DE900A7EFBD3B9901(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerGunShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGunShoot_Update_m80484C2AD8A82244B1E340D8DE1BB4B09C80BC5D (PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029_mB439B1D509B997A9152111CECBE47884EA61F727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* V_3 = NULL;
	{
		// if (Input.GetButtonDown("Fire1") && Time.time > nextFire)
		bool L_0;
		L_0 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_0)
		{
			goto IL_017a;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___nextFire_13;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_017a;
		}
	}
	{
		// if (currentAmmo > minAmmo)
		int32_t L_3 = __this->___currentAmmo_14;
		int32_t L_4 = __this->___minAmmo_16;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_013c;
		}
	}
	{
		// nextFire = Time.time + fireRate;
		float L_5;
		L_5 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_6 = __this->___fireRate_5;
		__this->___nextFire_13 = ((float)il2cpp_codegen_add(L_5, L_6));
		// StartCoroutine(ShotEffect());
		RuntimeObject* L_7;
		L_7 = PlayerGunShoot_ShotEffect_m3D3C341B51221B7F949C44068259423F2F26AB8A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// Vector3 rayOrigin = FPSCamera.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, 0.0f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___FPSCamera_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_9, L_10, NULL);
		V_1 = L_11;
		// laserLine.SetPosition(0, playerGunEnd.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = __this->___laserLine_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerGunEnd_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_12, 0, L_14, NULL);
		// if (Physics.Raycast(rayOrigin, FPSCamera.transform.forward, out hit, weaponRange))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___FPSCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		float L_19 = __this->___weaponRange_6;
		bool L_20;
		L_20 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_15, L_18, (&V_2), L_19, NULL);
		if (!L_20)
		{
			goto IL_010f;
		}
	}
	{
		// laserLine.SetPosition(1, hit.point);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->___laserLine_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_2), NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_21, 1, L_22, NULL);
		// ShootableTargets health = hit.collider.GetComponent<ShootableTargets>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* L_24;
		L_24 = Component_GetComponent_TisShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029_mB439B1D509B997A9152111CECBE47884EA61F727(L_23, Component_GetComponent_TisShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029_mB439B1D509B997A9152111CECBE47884EA61F727_RuntimeMethod_var);
		V_3 = L_24;
		// if (health != null)
		ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00db;
		}
	}
	{
		// health.Damage(gunDamage);
		ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* L_27 = V_3;
		int32_t L_28 = __this->___gunDamage_4;
		ShootableTargets_Damage_mF77E945356FC55DECA9B14DEF2E2CCA8AEFC4446(L_27, L_28, NULL);
	}

IL_00db:
	{
		// if (hit.rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29;
		L_29 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_013c;
		}
	}
	{
		// hit.rigidbody.AddForce(-hit.normal * hitForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31;
		L_31 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_32, NULL);
		float L_34 = __this->___hitForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, L_34, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_31, L_35, NULL);
		goto IL_013c;
	}

IL_010f:
	{
		// laserLine.SetPosition(1, rayOrigin + (FPSCamera.transform.forward * weaponRange));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_36 = __this->___laserLine_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = __this->___FPSCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_39, NULL);
		float L_41 = __this->___weaponRange_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_42, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_36, 1, L_43, NULL);
	}

IL_013c:
	{
		// currentAmmo--;
		int32_t L_44 = __this->___currentAmmo_14;
		__this->___currentAmmo_14 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		// int ammoClamp = Mathf.Clamp(currentAmmo, minAmmo, maxAmmo);
		int32_t L_45 = __this->___currentAmmo_14;
		int32_t L_46 = __this->___minAmmo_16;
		int32_t L_47 = __this->___maxAmmo_15;
		int32_t L_48;
		L_48 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_45, L_46, L_47, NULL);
		V_0 = L_48;
		// currentAmmo = ammoClamp;
		int32_t L_49 = V_0;
		__this->___currentAmmo_14 = L_49;
		// gameManagerScript.updateAmmo(currentAmmo);
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_50 = __this->___gameManagerScript_17;
		int32_t L_51 = __this->___currentAmmo_14;
		GameManagerScript_updateAmmo_mC654ED8BD6854429E9A68C8DE900A7EFBD3B9901(L_50, L_51, NULL);
	}

IL_017a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerGunShoot::ShotEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerGunShoot_ShotEffect_m3D3C341B51221B7F949C44068259423F2F26AB8A (PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* L_0 = (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764*)il2cpp_codegen_object_new(U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764_il2cpp_TypeInfo_var);
		U3CShotEffectU3Ed__16__ctor_m3CF6631087C76539EE2816BB82914F1AB19E0C7F(L_0, 0, NULL);
		U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerGunShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGunShoot__ctor_mFC3A7D37D08B7A5F626FBB076852CA0DF6A50847 (PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int gunDamage = 1;
		__this->___gunDamage_4 = 1;
		// public float fireRate = 0.25f;
		__this->___fireRate_5 = (0.25f);
		// public float weaponRange = 50f;
		__this->___weaponRange_6 = (50.0f);
		// public float hitForce = 100f;
		__this->___hitForce_7 = (100.0f);
		// private WaitForSeconds shotDuration = new WaitForSeconds(0.07f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_0, (0.0700000003f), NULL);
		__this->___shotDuration_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shotDuration_10), (void*)L_0);
		// private int maxAmmo = 15;
		__this->___maxAmmo_15 = ((int32_t)15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerGunShoot/<ShotEffect>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotEffectU3Ed__16__ctor_m3CF6631087C76539EE2816BB82914F1AB19E0C7F (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerGunShoot/<ShotEffect>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotEffectU3Ed__16_System_IDisposable_Dispose_m0DB9E53BBDFCF007BEFBFE53702CDA268D129998 (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerGunShoot/<ShotEffect>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShotEffectU3Ed__16_MoveNext_m1AD3B64FEB978AF42E76BED41ACB7253B65ECCCF (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gunAudio.Play();
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_4 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___gunAudio_11;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// laserLine.enabled = true;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_6 = V_1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = L_6->___laserLine_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
		// yield return shotDuration;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_8 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = L_8->___shotDuration_10;
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// laserLine.enabled = false;
		PlayerGunShoot_t26CD1842E2BFB5DA2A3BC30543E0342AB3B321FB* L_10 = V_1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = L_10->___laserLine_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_11, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerGunShoot/<ShotEffect>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShotEffectU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1386F8381681F16FF39F731D2FC09643BDE2759F (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerGunShoot/<ShotEffect>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotEffectU3Ed__16_System_Collections_IEnumerator_Reset_m78812DDBCC94C6C2075E03A93B90F83CA684A584 (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShotEffectU3Ed__16_System_Collections_IEnumerator_Reset_m78812DDBCC94C6C2075E03A93B90F83CA684A584_RuntimeMethod_var)));
	}
}
// System.Object PlayerGunShoot/<ShotEffect>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShotEffectU3Ed__16_System_Collections_IEnumerator_get_Current_m2BE1C2812C7731A34067E5FFB5D8771A5B42FE97 (U3CShotEffectU3Ed__16_tC92FC3EF26BFC0445C86B6A571ED280651893764* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RayViewerComplete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayViewerComplete_Start_m415B18669E0614F5586EADA6E67356233AC55C2E (RayViewerComplete_tB327E4A1F5D2714E7A3B5455EFE73A7D0562CC63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fpsCam = GetComponentInParent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE(__this, Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		__this->___fpsCam_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpsCam_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void RayViewerComplete::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayViewerComplete_Update_m3BEB28791B6E0A6076487304ACB8E248D8C3A052 (RayViewerComplete_tB327E4A1F5D2714E7A3B5455EFE73A7D0562CC63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 lineOrigin = fpsCam.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, 0.0f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___fpsCam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_0, L_1, NULL);
		// Debug.DrawRay(lineOrigin, fpsCam.transform.forward * weaponRange, Color.green);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___fpsCam_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = __this->___weaponRange_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_2, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void RayViewerComplete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayViewerComplete__ctor_m02069B22DA602D35457DBB94A6CC21FAB317CB4C (RayViewerComplete_tB327E4A1F5D2714E7A3B5455EFE73A7D0562CC63* __this, const RuntimeMethod* method) 
{
	{
		// public float weaponRange = 50f;                       // Distance in Unity units over which the Debug.DrawRay will be drawn
		__this->___weaponRange_4 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShootableTargets::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_Start_mC091E9A9BB86A5C519F87C8A4D2405A098E53AD8 (ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_m07716FA8DEFADD86471B9E18B5C28CA98AD9ED07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = GameObject.FindObjectOfType<GameManagerScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0;
		L_0 = Object_FindObjectOfType_TisGameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_m07716FA8DEFADD86471B9E18B5C28CA98AD9ED07(Object_FindObjectOfType_TisGameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_m07716FA8DEFADD86471B9E18B5C28CA98AD9ED07_RuntimeMethod_var);
		__this->___score_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_4), (void*)L_0);
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_8), (void*)L_1);
		// health = maxHealth;
		int32_t L_2 = __this->___maxHealth_6;
		__this->___health_5 = L_2;
		// if (healthBar != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___healthBar_7;
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// healthBar.value = 3;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___healthBar_7;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, (3.0f));
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_Damage_mF77E945356FC55DECA9B14DEF2E2CCA8AEFC4446 (ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* __this, int32_t ___damageAmount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// health -= damageAmount;
		int32_t L_0 = __this->___health_5;
		int32_t L_1 = ___damageAmount0;
		__this->___health_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// healthBar.value = (float)health / (float)maxHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___healthBar_7;
		int32_t L_3 = __this->___health_5;
		int32_t L_4 = __this->___maxHealth_6;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)(((float)L_3)/((float)L_4))));
		// Instantiate(hit, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___hit_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (health <= 0)
		int32_t L_10 = __this->___health_5;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		// gameObject.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// score.IncreaseScore();
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_12 = __this->___score_4;
		GameManagerScript_IncreaseScore_m7B928F61CBC106D70BCA34C8F6C2C64208BFACF7(L_12, NULL);
		// GameObject explosionGo = Instantiate(explosion, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___explosion_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_17;
		// GameObject explodeGo = Instantiate(explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___explode_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(explosionGo, 1.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_0;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_23, (1.5f), NULL);
		// Destroy(explodeGo, 1.5f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_22, (1.5f), NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_Update_mE61E9BB4681E8BC7ADE0E4F260F99AD4D132794F (ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthBar.transform.parent.rotation = Quaternion.LookRotation(transform.position - Camera.main.transform.position);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthBar_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_8, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_9, NULL);
		// if (health < 1)
		int32_t L_10 = __this->___health_5;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets__ctor_m82945F11541ECCAB967ED03DAC9F57246419EDBB (ShootableTargets_tE21B469FC2881D527EA1E7B1C0B46C35C4AC3029* __this, const RuntimeMethod* method) 
{
	{
		// public int maxHealth = 3;
		__this->___maxHealth_6 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerGun_LevelTwo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo_Start_mBBD972B493E7A6F3C45493CDB1FC49C80D3ED8C3 (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C950DD70CAACD5B71DB42BC4C746E1F78985737);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentAmmo = maxAmmo;
		int32_t L_0 = __this->___maxAmmo_12;
		__this->___currentAmmo_13 = L_0;
		// gunShotAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___gunShotAudio_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gunShotAudio_16), (void*)L_1);
		// if (gunShotAudio == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___gunShotAudio_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("No gun shot audio found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C950DD70CAACD5B71DB42BC4C746E1F78985737, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void PlayerGun_LevelTwo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo_OnEnable_mAF352BD133F1408BD886D67E4FB02BE867608BB6 (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isReloading = false;
		__this->___isReloading_15 = (bool)0;
		// weaponHolderAnimator.SetBool("isReloading", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___weaponHolderAnimator_17;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerGun_LevelTwo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo_Update_mC12457C1557D0CBCFE812D0688C7EABFF5241D7A (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isReloading)
		bool L_0 = __this->___isReloading_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (currentAmmo == 0)
		int32_t L_1 = __this->___currentAmmo_13;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// StartCoroutine(Reload());
		RuntimeObject* L_2;
		L_2 = PlayerGun_LevelTwo_U3CUpdateU3Eg__ReloadU7C16_1_m12DB12E29C4FF6213DFF9A08AF8AF18B0424F564(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// if (Input.GetButtonDown("Fire1") && Time.time >= nextFire)
		bool L_4;
		L_4 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		float L_5;
		L_5 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_6 = __this->___nextFire_7;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_005b;
		}
	}
	{
		// nextFire = Time.time + fireRate;
		float L_7;
		L_7 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_8 = __this->___fireRate_6;
		__this->___nextFire_7 = ((float)il2cpp_codegen_add(L_7, L_8));
		// Shoot();
		PlayerGun_LevelTwo_U3CUpdateU3Eg__ShootU7C16_0_m79C2DA5827C991410149CD88E4BA78DF7063C61C(__this, NULL);
		// gunShotAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___gunShotAudio_16;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void PlayerGun_LevelTwo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo__ctor_mFEDE44B25237642E5F49D016FCD030C1A880D356 (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	{
		// public float gunDamage = 15f;
		__this->___gunDamage_4 = (15.0f);
		// public float weaponRange = 100f;
		__this->___weaponRange_5 = (100.0f);
		// public float fireRate = 0.25f;
		__this->___fireRate_6 = (0.25f);
		// public float hitForce = 30f;
		__this->___hitForce_8 = (30.0f);
		// public int maxAmmo = 15;
		__this->___maxAmmo_12 = ((int32_t)15);
		// public float reloadTime = 1f;
		__this->___reloadTime_14 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlayerGun_LevelTwo::<Update>g__Shoot|16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGun_LevelTwo_U3CUpdateU3Eg__ShootU7C16_0_m79C2DA5827C991410149CD88E4BA78DF7063C61C (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD_m5D3C18CFA7B0A74EF62E8BD20552525E22DDECF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* V_1 = NULL;
	{
		// MuzzleFlash.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___MuzzleFlash_10;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// currentAmmo--;
		int32_t L_1 = __this->___currentAmmo_13;
		__this->___currentAmmo_13 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (Physics.Raycast(FPSCamera.transform.position, FPSCamera.transform.forward, out hit, weaponRange))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___FPSCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___FPSCamera_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = __this->___weaponRange_5;
		bool L_9;
		L_9 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_4, L_7, (&V_0), L_8, NULL);
		if (!L_9)
		{
			goto IL_00d8;
		}
	}
	{
		// Debug.Log(hit.transform.name);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// ShootableTargets_LevelTwo ShootableTarget = hit.transform.GetComponent<ShootableTargets_LevelTwo>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* L_13;
		L_13 = Component_GetComponent_TisShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD_m5D3C18CFA7B0A74EF62E8BD20552525E22DDECF4(L_12, Component_GetComponent_TisShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD_m5D3C18CFA7B0A74EF62E8BD20552525E22DDECF4_RuntimeMethod_var);
		V_1 = L_13;
		// if (ShootableTarget != null)
		ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// ShootableTarget.TakeDamage(gunDamage);
		ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* L_16 = V_1;
		float L_17 = __this->___gunDamage_4;
		ShootableTargets_LevelTwo_TakeDamage_m28919984A4530B7F43BF2ECA8E40BD6F15812534(L_16, L_17, NULL);
	}

IL_007e:
	{
		// if (hit.rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00b0;
		}
	}
	{
		// hit.rigidbody.AddForce(-hit.normal * hitForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20;
		L_20 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_21, NULL);
		float L_23 = __this->___hitForce_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_20, L_24, NULL);
	}

IL_00b0:
	{
		// GameObject impactGo = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___impactEffect_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_25, L_26, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(impactGo, 1.0f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_29, (1.0f), NULL);
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerGun_LevelTwo::<Update>g__Reload|16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerGun_LevelTwo_U3CUpdateU3Eg__ReloadU7C16_1_m12DB12E29C4FF6213DFF9A08AF8AF18B0424F564 (PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* L_0 = (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2*)il2cpp_codegen_object_new(U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2_il2cpp_TypeInfo_var);
		U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed__ctor_mCDA00EA7EC0996B7DF2806BF33DAD8254978BCAC(L_0, 0, NULL);
		U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed__ctor_mCDA00EA7EC0996B7DF2806BF33DAD8254978BCAC (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_IDisposable_Dispose_m6C3ED2EF299278633B09F6E8BF58740035BC85A0 (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_MoveNext_m0EB8BD038264B51F1364463B3FA0B08A61B1738B (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_0092;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isReloading = true;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_3 = V_1;
		L_3->___isReloading_15 = (bool)1;
		// weaponHolderAnimator.SetBool("isReloading", true);
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___weaponHolderAnimator_17;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE, (bool)1, NULL);
		// yield return new WaitForSeconds(reloadTime - 0.25f);
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_6 = V_1;
		float L_7 = L_6->___reloadTime_14;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, ((float)il2cpp_codegen_subtract(L_7, (0.25f))), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// weaponHolderAnimator.SetBool("isReloading", false);
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_9 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___weaponHolderAnimator_17;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral99F4B5C64D7DCBE7059649E7DAB959FDC760FBDE, (bool)0, NULL);
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0092:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentAmmo = maxAmmo;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_12 = V_1;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_13 = V_1;
		int32_t L_14 = L_13->___maxAmmo_12;
		L_12->___currentAmmo_13 = L_14;
		// isReloading = false;
		PlayerGun_LevelTwo_tD649705C2E4AD30C2B131FC1D4A4F8EF3866FE8F* L_15 = V_1;
		L_15->___isReloading_15 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA3FB81749F5438258CA8A596702508CDE342806A (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_Collections_IEnumerator_Reset_m1EE349E73CDD45545F4A8AA0353A090115FFC54A (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_Collections_IEnumerator_Reset_m1EE349E73CDD45545F4A8AA0353A090115FFC54A_RuntimeMethod_var)));
	}
}
// System.Object PlayerGun_LevelTwo/<<Update>g__Reload|16_1>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_System_Collections_IEnumerator_get_Current_mF8DAA236585736064A263FA61FA4FA6BBCA5E847 (U3CU3CUpdateU3Eg__ReloadU7C16_1U3Ed_t1E29A5F9DCBAF3311BC3FA6DFCEA600F60EE10B2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShootableTargets_LevelTwo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_Awake_m923C5CBEE18BB6D9A5FF3E08C313639B7B720CEC (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E_m5B101737F789B9418413F68BA7DDEAA78A4B2F70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = GameObject.FindObjectOfType<GameManagerScriptLevel2>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* L_0;
		L_0 = Object_FindObjectOfType_TisGameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E_m5B101737F789B9418413F68BA7DDEAA78A4B2F70(Object_FindObjectOfType_TisGameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E_m5B101737F789B9418413F68BA7DDEAA78A4B2F70_RuntimeMethod_var);
		__this->___score_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_9), (void*)L_0);
		// player = GameObject.Find("PlayerController").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___player_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_2);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3;
		L_3 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_Update_m4FA59C799164FFDBD1467E4FB3E756857A8638E1 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	{
		// playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___sightRange_19;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___whatIsPlayer_8;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_1, L_2, L_4, NULL);
		__this->___playerInSightRange_21 = L_5;
		// playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___attackRange_20;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___whatIsPlayer_8;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_9, NULL);
		bool L_11;
		L_11 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_7, L_8, L_10, NULL);
		__this->___playerInAttackRange_22 = L_11;
		// if (!playerInSightRange && !playerInAttackRange) Patroling();
		bool L_12 = __this->___playerInSightRange_21;
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		bool L_13 = __this->___playerInAttackRange_22;
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		// if (!playerInSightRange && !playerInAttackRange) Patroling();
		ShootableTargets_LevelTwo_Patroling_m0738C4134C6124BF42133E4DBA7BC865B0E05ED8(__this, NULL);
	}

IL_0064:
	{
		// if (playerInSightRange && !playerInAttackRange) ChasePlayer();
		bool L_14 = __this->___playerInSightRange_21;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		bool L_15 = __this->___playerInAttackRange_22;
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		// if (playerInSightRange && !playerInAttackRange) ChasePlayer();
		ShootableTargets_LevelTwo_ChasePlayer_m1B5F8A6CF66B9FE36EC010EE020D528D9F3284C5(__this, NULL);
	}

IL_007a:
	{
		// if (playerInSightRange && playerInAttackRange) AttackPlayer();
		bool L_16 = __this->___playerInSightRange_21;
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17 = __this->___playerInAttackRange_22;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// if (playerInSightRange && playerInAttackRange) AttackPlayer();
		ShootableTargets_LevelTwo_AttackPlayer_m83C4C2D7EE503CA8A605D33E2739CF632DCCA0D8(__this, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_Patroling_m0738C4134C6124BF42133E4DBA7BC865B0E05ED8 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!walkPointSet) SearchWalkPoint();
		bool L_0 = __this->___walkPointSet_14;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (!walkPointSet) SearchWalkPoint();
		ShootableTargets_LevelTwo_SearchWalkPoint_mC8D94E655217732EA690AF0FB83C55A9B2876C86(__this, NULL);
	}

IL_000e:
	{
		// if (walkPointSet)
		bool L_1 = __this->___walkPointSet_14;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// agent.SetDestination(walkPoint);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___walkPoint_13;
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_2, L_3, NULL);
	}

IL_0028:
	{
		// Vector3 distanceToWalkPoint = transform.position - walkPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___walkPoint_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// if (distanceToWalkPoint.magnitude < 1f)
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// walkPointSet = false;
		__this->___walkPointSet_14 = (bool)0;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_SearchWalkPoint_mC8D94E655217732EA690AF0FB83C55A9B2876C86 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float randomZ = Random.Range(-walkPointRange, walkPointRange);
		float L_0 = __this->___walkPointRange_15;
		float L_1 = __this->___walkPointRange_15;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_0)), L_1, NULL);
		V_0 = L_2;
		// float randomX = Random.Range(-walkPointRange, walkPointRange);
		float L_3 = __this->___walkPointRange_15;
		float L_4 = __this->___walkPointRange_15;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_3)), L_4, NULL);
		V_1 = L_5;
		// walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_8, L_9)), L_12, ((float)il2cpp_codegen_add(L_15, L_16)), /*hidden argument*/NULL);
		__this->___walkPoint_13 = L_17;
		// if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___walkPoint_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_20, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_22 = __this->___whatIsGround_7;
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_22, NULL);
		bool L_24;
		L_24 = Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7(L_18, L_21, (2.0f), L_23, NULL);
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		// walkPointSet = true;
		__this->___walkPointSet_14 = (bool)1;
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_ChasePlayer_m1B5F8A6CF66B9FE36EC010EE020D528D9F3284C5 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	{
		// agent.SetDestination(player.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___player_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_AttackPlayer_m83C4C2D7EE503CA8A605D33E2739CF632DCCA0D8 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.SetDestination(transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// transform.LookAt(player);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___player_6;
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_4, L_5, NULL);
		// if (!alreadyAttacked)
		bool L_6 = __this->___alreadyAttacked_17;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		// Rigidbody rb = Instantiate(projectile, transform.position, Quaternion.identity).GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___projectile_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_11, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rb.AddForce(transform.forward * 32f, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = L_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, (32.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_13, L_16, 1, NULL);
		// rb.AddForce(transform.up * 8f, ForceMode.Impulse);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (8.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_13, L_19, 1, NULL);
		// alreadyAttacked = true;
		__this->___alreadyAttacked_17 = (bool)1;
		// Invoke(nameof(ResetAttack), timeBetweenAttacks);
		float L_20 = __this->___timeBetweenAttacks_16;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988, L_20, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::ResetAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_ResetAttack_mA87EA207CE71F58B5E516D11FE0F1D730E7BC5AB (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	{
		// alreadyAttacked = false;
		__this->___alreadyAttacked_17 = (bool)0;
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_TakeDamage_m28919984A4530B7F43BF2ECA8E40BD6F15812534 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, float ___amount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// maxHealth -= amount;
		float L_0 = __this->___maxHealth_4;
		float L_1 = ___amount0;
		__this->___maxHealth_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (maxHealth <= 0f)
		float L_2 = __this->___maxHealth_4;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// score.IncreaseScore();
		GameManagerScriptLevel2_t552E5FBF78782DCB3D8722C3E52DDA06A112950E* L_3 = __this->___score_9;
		GameManagerScriptLevel2_IncreaseScore_mA00803133DBC8AA8FF404D9A3C426676C8F17712(L_3, NULL);
		// GameObject explosionGo = Instantiate(explosion, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___explosion_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_8;
		// GameObject explodeGo = Instantiate(explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___explode_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// EnemyDies();
		ShootableTargets_LevelTwo_EnemyDies_m7CFB2575EAFEEE3C4D3AA154AFD1A88F4E29D613(__this, NULL);
		// Destroy(explosionGo, 1.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_14, (1.5f), NULL);
		// Destroy(explodeGo, 1.5f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_13, (1.5f), NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::EnemyDies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo_EnemyDies_m7CFB2575EAFEEE3C4D3AA154AFD1A88F4E29D613 (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void ShootableTargets_LevelTwo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootableTargets_LevelTwo__ctor_m6A8524E05EFD157B1968EFE7DF83C56399DAD49F (ShootableTargets_LevelTwo_tED37A04F3230AE5BA704E7322C2BA78491A379DD* __this, const RuntimeMethod* method) 
{
	{
		// public float maxHealth = 30f;
		__this->___maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundSliderBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSliderBehaviour_Start_m568F28CB13F878CD918C94AB980F64DD9B4BFD2F (SoundSliderBehaviour_tD5CC994A1D821640B0862EB0F614820B6334CA6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C_mEEBEADD742456B0C1CF0243D1403BD8E52F7A675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainMenuScript = GameObject.FindObjectOfType<MainMenuScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* L_0;
		L_0 = Object_FindObjectOfType_TisMainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C_mEEBEADD742456B0C1CF0243D1403BD8E52F7A675(Object_FindObjectOfType_TisMainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C_mEEBEADD742456B0C1CF0243D1403BD8E52F7A675_RuntimeMethod_var);
		__this->___mainMenuScript_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainMenuScript_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SoundSliderBehaviour::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSliderBehaviour_OnEndDrag_mEA41DB529CC38BD68B502DE9CB6662AF3BD8158C (SoundSliderBehaviour_tD5CC994A1D821640B0862EB0F614820B6334CA6A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// mainMenuScript.PlaySound();
		MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* L_0 = __this->___mainMenuScript_4;
		MainMenuScript_PlaySound_m35F3B3992CEBCE7730C664F91DB3BC78F6DBD8CB(L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundSliderBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundSliderBehaviour__ctor_m916642F2BFE2BAC196B60C332211C182BBF9DC07 (SoundSliderBehaviour_tD5CC994A1D821640B0862EB0F614820B6334CA6A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponSwitching::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSwitching_Start_m5FA9119F29F97DCA0644AE26AD49BFE742058541 (WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* __this, const RuntimeMethod* method) 
{
	{
		// SelectWeapon();
		WeaponSwitching_SelectWeapon_m9332B0A973028FF0A35B7F2262431DEE1C06F78B(__this, NULL);
		// }
		return;
	}
}
// System.Void WeaponSwitching::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSwitching_Update_mD85B0F80D4E8EE0AF8ADB82C53779D742B024652 (WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// int previousSelectedWeapon = SelectedWeapon;
		int32_t L_0 = __this->___SelectedWeapon_4;
		// if (Input.GetAxis("Mouse ScrollWheel") > 0f)
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		G_B1_0 = L_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			G_B4_0 = L_0;
			goto IL_0043;
		}
	}
	{
		// if (SelectedWeapon >= transform.childCount - 1)
		int32_t L_2 = __this->___SelectedWeapon_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0035;
		}
	}
	{
		// SelectedWeapon = 0;
		__this->___SelectedWeapon_4 = 0;
		G_B4_0 = G_B2_0;
		goto IL_0043;
	}

IL_0035:
	{
		// SelectedWeapon++;
		int32_t L_5 = __this->___SelectedWeapon_4;
		__this->___SelectedWeapon_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		G_B4_0 = G_B3_0;
	}

IL_0043:
	{
		// if (Input.GetAxis("Mouse ScrollWheel") < 0f)
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		G_B5_0 = G_B4_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			G_B8_0 = G_B4_0;
			goto IL_0080;
		}
	}
	{
		// if (SelectedWeapon <= 0)
		int32_t L_7 = __this->___SelectedWeapon_4;
		G_B6_0 = G_B5_0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			G_B7_0 = G_B5_0;
			goto IL_0072;
		}
	}
	{
		// SelectedWeapon = transform.childCount - 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		__this->___SelectedWeapon_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		G_B8_0 = G_B6_0;
		goto IL_0080;
	}

IL_0072:
	{
		// SelectedWeapon--;
		int32_t L_10 = __this->___SelectedWeapon_4;
		__this->___SelectedWeapon_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		G_B8_0 = G_B7_0;
	}

IL_0080:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_11;
		L_11 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)49), NULL);
		G_B9_0 = G_B8_0;
		if (!L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0090;
		}
	}
	{
		// SelectedWeapon = 0;
		__this->___SelectedWeapon_4 = 0;
		G_B10_0 = G_B9_0;
	}

IL_0090:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2) && transform.childCount >= 2)
		bool L_12;
		L_12 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)50), NULL);
		G_B11_0 = G_B10_0;
		if (!L_12)
		{
			G_B13_0 = G_B10_0;
			goto IL_00ae;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_14;
		L_14 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_13, NULL);
		G_B12_0 = G_B11_0;
		if ((((int32_t)L_14) < ((int32_t)2)))
		{
			G_B13_0 = G_B11_0;
			goto IL_00ae;
		}
	}
	{
		// SelectedWeapon = 1;
		__this->___SelectedWeapon_4 = 1;
		G_B13_0 = G_B12_0;
	}

IL_00ae:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3) && transform.childCount >= 3)
		bool L_15;
		L_15 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)51), NULL);
		G_B14_0 = G_B13_0;
		if (!L_15)
		{
			G_B16_0 = G_B13_0;
			goto IL_00cc;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_17;
		L_17 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_16, NULL);
		G_B15_0 = G_B14_0;
		if ((((int32_t)L_17) < ((int32_t)3)))
		{
			G_B16_0 = G_B14_0;
			goto IL_00cc;
		}
	}
	{
		// SelectedWeapon = 2;
		__this->___SelectedWeapon_4 = 2;
		G_B16_0 = G_B15_0;
	}

IL_00cc:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4) && transform.childCount >= 4)
		bool L_18;
		L_18 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)52), NULL);
		G_B17_0 = G_B16_0;
		if (!L_18)
		{
			G_B19_0 = G_B16_0;
			goto IL_00ea;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		G_B18_0 = G_B17_0;
		if ((((int32_t)L_20) < ((int32_t)4)))
		{
			G_B19_0 = G_B17_0;
			goto IL_00ea;
		}
	}
	{
		// SelectedWeapon = 3;
		__this->___SelectedWeapon_4 = 3;
		G_B19_0 = G_B18_0;
	}

IL_00ea:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5) && transform.childCount >= 5)
		bool L_21;
		L_21 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)53), NULL);
		G_B20_0 = G_B19_0;
		if (!L_21)
		{
			G_B22_0 = G_B19_0;
			goto IL_0108;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_23;
		L_23 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_22, NULL);
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			G_B22_0 = G_B20_0;
			goto IL_0108;
		}
	}
	{
		// SelectedWeapon = 4;
		__this->___SelectedWeapon_4 = 4;
		G_B22_0 = G_B21_0;
	}

IL_0108:
	{
		// if (previousSelectedWeapon != SelectedWeapon)
		int32_t L_24 = __this->___SelectedWeapon_4;
		if ((((int32_t)G_B22_0) == ((int32_t)L_24)))
		{
			goto IL_0116;
		}
	}
	{
		// SelectWeapon();
		WeaponSwitching_SelectWeapon_m9332B0A973028FF0A35B7F2262431DEE1C06F78B(__this, NULL);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void WeaponSwitching::SelectWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSwitching_SelectWeapon_m9332B0A973028FF0A35B7F2262431DEE1C06F78B (WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// int currentWeapon = 0;
		V_0 = 0;
		// foreach (Transform weapon in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0010_1:
			{
				// foreach (Transform weapon in transform)
				RuntimeObject* L_5 = V_1;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (currentWeapon == SelectedWeapon)
				int32_t L_7 = V_0;
				int32_t L_8 = __this->___SelectedWeapon_4;
				if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
				{
					goto IL_0033_1;
				}
			}
			{
				// weapon.gameObject.SetActive(true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
				goto IL_003f_1;
			}

IL_0033_1:
			{
				// weapon.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
			}

IL_003f_1:
			{
				// currentWeapon++;
				int32_t L_13 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0043_1:
			{
				// foreach (Transform weapon in transform)
				RuntimeObject* L_14 = V_1;
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void WeaponSwitching::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSwitching__ctor_mF1540EAF1D16147CD69CB3C09F33227604ED3382 (WeaponSwitching_t86985585630D59001C6DB0BFB9129F446B13E70F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m4F55349288CAEA1EE6BC9809DEE275A02451589F (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CharacterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_CharacterController_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterController_26), (void*)L_0);
		// m_Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___m_Camera_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_21), (void*)L_1);
		// m_OriginalCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		__this->___m_OriginalCameraPosition_29 = L_4;
		// m_FovKick.Setup(m_Camera);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_5 = __this->___m_FovKick_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		FOVKick_Setup_m4F9584C1610E1B767B6547BAB08E799D9F90F505(L_5, L_6, NULL);
		// m_HeadBob.Setup(m_Camera, m_StepInterval);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_7 = __this->___m_HeadBob_15;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___m_Camera_21;
		float L_9 = __this->___m_StepInterval_17;
		CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3(L_7, L_8, L_9, NULL);
		// m_StepCycle = 0f;
		__this->___m_StepCycle_30 = (0.0f);
		// m_NextStep = m_StepCycle/2f;
		float L_10 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)(L_10/(2.0f)));
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
		// m_AudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_AudioSource_33 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_33), (void*)L_11);
		// m_MouseLook.Init(transform , m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_12 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6(L_12, L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_m91E31D9AFC61FB6B5F66FC10E8F15B660725013D (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD(__this, NULL);
		// if (!m_Jump)
		bool L_0 = __this->___m_Jump_22;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_GetButtonDown_m4E62257BA42AC8F34522386BACF7885F91AA95A2(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___m_Jump_22 = L_1;
	}

IL_001e:
	{
		// if (!m_PreviouslyGrounded && m_CharacterController.isGrounded)
		bool L_2 = __this->___m_PreviouslyGrounded_28;
		if (L_2)
		{
			goto IL_0062;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3 = __this->___m_CharacterController_26;
		bool L_4;
		L_4 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_3, NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// StartCoroutine(m_JumpBob.DoBobCycle());
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_5 = __this->___m_JumpBob_16;
		RuntimeObject* L_6;
		L_6 = LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65(L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// PlayLandingSound();
		FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191(__this, NULL);
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___m_MoveDir_25);
		L_8->___y_3 = (0.0f);
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
	}

IL_0062:
	{
		// if (!m_CharacterController.isGrounded && !m_Jumping && m_PreviouslyGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		bool L_10;
		L_10 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_9, NULL);
		if (L_10)
		{
			goto IL_008f;
		}
	}
	{
		bool L_11 = __this->___m_Jumping_32;
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		bool L_12 = __this->___m_PreviouslyGrounded_28;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_MoveDir_25);
		L_13->___y_3 = (0.0f);
	}

IL_008f:
	{
		// m_PreviouslyGrounded = m_CharacterController.isGrounded;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_14 = __this->___m_CharacterController_26;
		bool L_15;
		L_15 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_14, NULL);
		__this->___m_PreviouslyGrounded_28 = L_15;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_LandSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_LandSound_20;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// m_NextStep = m_StepCycle + .5f;
		float L_3 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_3, (0.5f)));
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_FixedUpdate_m9AA7D2F59F8416796AACB7F4AC5270CA20B55CA5 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GetInput(out speed);
		FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26(__this, (&V_0), NULL);
		// Vector3 desiredMove = transform.forward*m_Input.y + transform.right*m_Input.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_Input_24);
		float L_3 = L_2->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___m_Input_24);
		float L_8 = L_7->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_9, NULL);
		V_1 = L_10;
		// Physics.SphereCast(transform.position, m_CharacterController.radius, Vector3.down, out hitInfo,
		//                    m_CharacterController.height/2f, Physics.AllLayers, QueryTriggerInteraction.Ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->___m_CharacterController_26;
		float L_14;
		L_14 = CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___m_CharacterController_26;
		float L_17;
		L_17 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_16, NULL);
		bool L_18;
		L_18 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_12, L_14, L_15, (&V_2), ((float)(L_17/(2.0f))), (-1), 1, NULL);
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, hitInfo.normal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_19, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_22;
		// m_MoveDir.x = desiredMove.x*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		float L_26 = V_0;
		L_23->___x_2 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// m_MoveDir.z = desiredMove.z*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = L_28.___z_4;
		float L_30 = V_0;
		L_27->___z_4 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_31 = __this->___m_CharacterController_26;
		bool L_32;
		L_32 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_31, NULL);
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		// m_MoveDir.y = -m_StickToGroundForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___m_MoveDir_25);
		float L_34 = __this->___m_StickToGroundForce_9;
		L_33->___y_3 = ((-L_34));
		// if (m_Jump)
		bool L_35 = __this->___m_Jump_22;
		if (!L_35)
		{
			goto IL_012f;
		}
	}
	{
		// m_MoveDir.y = m_JumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___m_MoveDir_25);
		float L_37 = __this->___m_JumpSpeed_8;
		L_36->___y_3 = L_37;
		// PlayJumpSound();
		FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162(__this, NULL);
		// m_Jump = false;
		__this->___m_Jump_22 = (bool)0;
		// m_Jumping = true;
		__this->___m_Jumping_32 = (bool)1;
		goto IL_012f;
	}

IL_0104:
	{
		// m_MoveDir += Physics.gravity*m_GravityMultiplier*Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___m_MoveDir_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_40 = __this->___m_GravityMultiplier_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, L_40, NULL);
		float L_42;
		L_42 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_38, L_43, NULL);
		__this->___m_MoveDir_25 = L_44;
	}

IL_012f:
	{
		// m_CollisionFlags = m_CharacterController.Move(m_MoveDir*Time.fixedDeltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_45 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___m_MoveDir_25;
		float L_47;
		L_47 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_46, L_47, NULL);
		int32_t L_49;
		L_49 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_45, L_48, NULL);
		__this->___m_CollisionFlags_27 = L_49;
		// ProgressStepCycle(speed);
		float L_50 = V_0;
		FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7(__this, L_50, NULL);
		// UpdateCameraPosition(speed);
		float L_51 = V_0;
		FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E(__this, L_51, NULL);
		// m_MouseLook.UpdateCursorLock();
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_52 = __this->___m_MouseLook_11;
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(L_52, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_JumpSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_JumpSound_19;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B5_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B4_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B6_4 = NULL;
	{
		// if (m_CharacterController.velocity.sqrMagnitude > 0 && (m_Input.x != 0 || m_Input.y != 0))
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_Input_24);
		float L_4 = L_3->___x_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___m_Input_24);
		float L_6 = L_5->___y_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}

IL_003e:
	{
		// m_StepCycle += (m_CharacterController.velocity.magnitude + (speed*(m_IsWalking ? 1f : m_RunstepLenghten)))*
		//              Time.fixedDeltaTime;
		float L_7 = __this->___m_StepCycle_30;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_11 = ___speed0;
		bool L_12 = __this->___m_IsWalking_4;
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		G_B4_2 = L_7;
		G_B4_3 = __this;
		if (L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			G_B5_2 = L_7;
			G_B5_3 = __this;
			goto IL_0069;
		}
	}
	{
		float L_13 = __this->___m_RunstepLenghten_7;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006e;
	}

IL_0069:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006e:
	{
		float L_14;
		L_14 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		G_B6_4->___m_StepCycle_30 = ((float)il2cpp_codegen_add(G_B6_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, G_B6_0)))), L_14))));
	}

IL_007c:
	{
		// if (!(m_StepCycle > m_NextStep))
		float L_15 = __this->___m_StepCycle_30;
		float L_16 = __this->___m_NextStep_31;
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_008b;
		}
	}
	{
		// return;
		return;
	}

IL_008b:
	{
		// m_NextStep = m_StepCycle + m_StepInterval;
		float L_17 = __this->___m_StepCycle_30;
		float L_18 = __this->___m_StepInterval_17;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_17, L_18));
		// PlayFootStepAudio();
		FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// int n = Random.Range(1, m_FootstepSounds.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___m_FootstepSounds_18;
		int32_t L_3;
		L_3 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		// m_AudioSource.clip = m_FootstepSounds[n];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___m_AudioSource_33;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___m_FootstepSounds_18;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_8, NULL);
		// m_AudioSource.PlayOneShot(m_AudioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___m_AudioSource_33;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11;
		L_11 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_10, NULL);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_9, L_11, NULL);
		// m_FootstepSounds[n] = m_FootstepSounds[0];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_12 = __this->___m_FootstepSounds_18;
		int32_t L_13 = V_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_14 = __this->___m_FootstepSounds_18;
		int32_t L_15 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_16);
		// m_FootstepSounds[0] = m_AudioSource.clip;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_17 = __this->___m_FootstepSounds_18;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19;
		L_19 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_18, NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_19);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B6_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B7_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_4 = NULL;
	{
		// if (!m_UseHeadBob)
		bool L_0 = __this->___m_UseHeadBob_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CharacterController.velocity.magnitude > 0 && m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___m_CharacterController_26;
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		// m_Camera.transform.localPosition =
		//     m_HeadBob.DoHeadBob(m_CharacterController.velocity.magnitude +
		//                       (speed*(m_IsWalking ? 1f : m_RunstepLenghten)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_8 = __this->___m_HeadBob_15;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_12 = ___speed0;
		bool L_13 = __this->___m_IsWalking_4;
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		G_B5_2 = L_8;
		G_B5_3 = L_7;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			G_B6_2 = L_8;
			G_B6_3 = L_7;
			goto IL_006b;
		}
	}
	{
		float L_14 = __this->___m_RunstepLenghten_7;
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0070;
	}

IL_006b:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0070:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789(G_B7_3, ((float)il2cpp_codegen_add(G_B7_2, ((float)il2cpp_codegen_multiply(G_B7_1, G_B7_0)))), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B7_4, L_15, NULL);
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// newCameraPosition.y = m_Camera.transform.localPosition.y - m_JumpBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_23 = __this->___m_JumpBob_16;
		float L_24;
		L_24 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_23, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		goto IL_00e6;
	}

IL_00b7:
	{
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		V_0 = L_27;
		// newCameraPosition.y = m_OriginalCameraPosition.y - m_JumpBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_OriginalCameraPosition_29);
		float L_29 = L_28->___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_30 = __this->___m_JumpBob_16;
		float L_31;
		L_31 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_30, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_29, L_31));
	}

IL_00e6:
	{
		// m_Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___speed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	float* G_B3_1 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B10_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B11_1 = NULL;
	{
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// bool waswalking = m_IsWalking;
		bool L_2 = __this->___m_IsWalking_4;
		V_2 = L_2;
		// m_IsWalking = !Input.GetKey(KeyCode.LeftShift);
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		__this->___m_IsWalking_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// speed = m_IsWalking ? m_WalkSpeed : m_RunSpeed;
		float* L_4 = ___speed0;
		bool L_5 = __this->___m_IsWalking_4;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0041;
		}
	}
	{
		float L_6 = __this->___m_RunSpeed_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0047;
	}

IL_0041:
	{
		float L_7 = __this->___m_WalkSpeed_5;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0047:
	{
		*((float*)G_B3_1) = (float)G_B3_0;
		// m_Input = new Vector2(horizontal, vertical);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___m_Input_24 = L_10;
		// if (m_Input.sqrMagnitude > 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___m_Input_24);
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_11, NULL);
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// m_Input.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___m_Input_24);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_13, NULL);
	}

IL_0072:
	{
		// if (m_IsWalking != waswalking && m_UseFovKick && m_CharacterController.velocity.sqrMagnitude > 0)
		bool L_14 = __this->___m_IsWalking_4;
		bool L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_16 = __this->___m_UseFovKick_12;
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_17, NULL);
		V_3 = L_18;
		float L_19;
		L_19 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(!m_IsWalking ? m_FovKick.FOVKickUp() : m_FovKick.FOVKickDown());
		bool L_20 = __this->___m_IsWalking_4;
		G_B9_0 = __this;
		if (!L_20)
		{
			G_B10_0 = __this;
			goto IL_00b9;
		}
	}
	{
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_21 = __this->___m_FovKick_13;
		RuntimeObject* L_22;
		L_22 = FOVKick_FOVKickDown_m3A72FD589557D6FBD4898FE2C414887AC9B8EEA8(L_21, NULL);
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00c4;
	}

IL_00b9:
	{
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_23 = __this->___m_FovKick_13;
		RuntimeObject* L_24;
		L_24 = FOVKick_FOVKickUp_mF7BD01A8C076F8D85D51C419F15EF3DC26F65A73(L_23, NULL);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00c4:
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B11_1, G_B11_0, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_MouseLook.LookRotation (transform, m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_0 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnControllerColliderHit_m55E1A25E5BE9BF1B3C3A3553BB5FF5531B0E88C0 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (m_CollisionFlags == CollisionFlags.Below)
		int32_t L_3 = __this->___m_CollisionFlags_27;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (body == null || body.isKinematic)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		bool L_7;
		L_7 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// body.AddForceAtPosition(m_CharacterController.velocity*0.1f, hit.point, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = V_0;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, (0.100000001f), NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915(L_12, NULL);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_8, L_11, L_13, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mA7F22D3CB33C824C402A75A023030DD0A12B022A (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private FOVKick m_FovKick = new FOVKick();
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_0 = (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D*)il2cpp_codegen_object_new(FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var);
		FOVKick__ctor_mDF56243B3AC3548DDE2A9BDE0B5647D3651FE1DC(L_0, NULL);
		__this->___m_FovKick_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FovKick_13), (void*)L_0);
		// [SerializeField] private CurveControlledBob m_HeadBob = new CurveControlledBob();
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_1 = (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200*)il2cpp_codegen_object_new(CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463(L_1, NULL);
		__this->___m_HeadBob_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadBob_15), (void*)L_1);
		// [SerializeField] private LerpControlledBob m_JumpBob = new LerpControlledBob();
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_2 = (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B*)il2cpp_codegen_object_new(LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79(L_2, NULL);
		__this->___m_JumpBob_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JumpBob_16), (void*)L_2);
		// private Vector3 m_MoveDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_MoveDir_25 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Start_mBDE27B6B8606C0BF3830C9B849BDEE22381B589F (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	{
		// motionBob.Setup(Camera, StrideInterval);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_0 = __this->___motionBob_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___Camera_4;
		float L_2 = __this->___StrideInterval_8;
		CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3(L_0, L_1, L_2, NULL);
		// m_OriginalCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		__this->___m_OriginalCameraPosition_11 = L_5;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Update_m3490200F7D82145E059C2081C033CF4B0C025D8D (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B4_0 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B4_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_2 = NULL;
	float G_B3_0 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	{
		// if (rigidbodyFirstPersonController.Velocity.magnitude > 0 && rigidbodyFirstPersonController.Grounded)
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_0 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5(L_0, NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_3 = __this->___rigidbodyFirstPersonController_7;
		bool L_4;
		L_4 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// Camera.transform.localPosition = motionBob.DoHeadBob(rigidbodyFirstPersonController.Velocity.magnitude*(rigidbodyFirstPersonController.Running ? RunningStrideLengthen : 1f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_7 = __this->___motionBob_5;
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_8 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5(L_8, NULL);
		V_1 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_11 = __this->___rigidbodyFirstPersonController_7;
		bool L_12;
		L_12 = RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1(L_11, NULL);
		G_B3_0 = L_10;
		G_B3_1 = L_7;
		G_B3_2 = L_6;
		if (L_12)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			G_B4_2 = L_6;
			goto IL_0065;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_006b;
	}

IL_0065:
	{
		float L_13 = __this->___RunningStrideLengthen_9;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_006b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789(G_B5_2, ((float)il2cpp_codegen_multiply(G_B5_1, G_B5_0)), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B5_3, L_14, NULL);
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		V_0 = L_17;
		// newCameraPosition.y = Camera.transform.localPosition.y - jumpAndLandingBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_22 = __this->___jumpAndLandingBob_6;
		float L_23;
		L_23 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_22, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_21, L_23));
		goto IL_00e0;
	}

IL_00b1:
	{
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_25, NULL);
		V_0 = L_26;
		// newCameraPosition.y = m_OriginalCameraPosition.y - jumpAndLandingBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_OriginalCameraPosition_11);
		float L_28 = L_27->___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_29 = __this->___jumpAndLandingBob_6;
		float L_30;
		L_30 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_29, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_28, L_30));
	}

IL_00e0:
	{
		// Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_32, L_33, NULL);
		// if (!m_PreviouslyGrounded && rigidbodyFirstPersonController.Grounded)
		bool L_34 = __this->___m_PreviouslyGrounded_10;
		if (L_34)
		{
			goto IL_0118;
		}
	}
	{
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_35 = __this->___rigidbodyFirstPersonController_7;
		bool L_36;
		L_36 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_35, NULL);
		if (!L_36)
		{
			goto IL_0118;
		}
	}
	{
		// StartCoroutine(jumpAndLandingBob.DoBobCycle());
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_37 = __this->___jumpAndLandingBob_6;
		RuntimeObject* L_38;
		L_38 = LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65(L_37, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_38, NULL);
	}

IL_0118:
	{
		// m_PreviouslyGrounded = rigidbodyFirstPersonController.Grounded;
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_40 = __this->___rigidbodyFirstPersonController_7;
		bool L_41;
		L_41 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_40, NULL);
		__this->___m_PreviouslyGrounded_10 = L_41;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob__ctor_m662E8262E25B4868C8BE7D458C281DF9EB23FE8E (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CurveControlledBob motionBob = new CurveControlledBob();
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_0 = (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200*)il2cpp_codegen_object_new(CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463(L_0, NULL);
		__this->___motionBob_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___motionBob_5), (void*)L_0);
		// public LerpControlledBob jumpAndLandingBob = new LerpControlledBob();
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_1 = (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B*)il2cpp_codegen_object_new(LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79(L_1, NULL);
		__this->___jumpAndLandingBob_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpAndLandingBob_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_RigidBody.velocity; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Jumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Jumping_m877A9B503E7EF9FF6C61EEC3C254F31BC81BF2BF (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Jumping; }
		bool L_0 = __this->___m_Jumping_14;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// return movementSettings.Running;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_0 = __this->___movementSettings_5;
		bool L_1;
		L_1 = MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Start_m5D965CC389E4574C533F144138C9AEB348B640C0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_RigidBody_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RigidBody_8), (void*)L_0);
		// m_Capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___m_Capsule_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capsule_9), (void*)L_1);
		// mouseLook.Init (transform, cam.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_2 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6(L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Update_m81D80C47EB3FA8FC15601281EFF535855D906402 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A(__this, NULL);
		// if (CrossPlatformInputManager.GetButtonDown("Jump") && !m_Jump)
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrossPlatformInputManager_GetButtonDown_m4E62257BA42AC8F34522386BACF7885F91AA95A2(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->___m_Jump_12;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Jump = true;
		__this->___m_Jump_12 = (bool)1;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_FixedUpdate_m1EED682C035DA5B150A864920BE4FED6ACF78F70 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GroundCheck();
		RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D(__this, NULL);
		// Vector2 input = GetInput();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15(__this, NULL);
		V_0 = L_0;
		// if ((Mathf.Abs(input.x) > float.Epsilon || Mathf.Abs(input.y) > float.Epsilon) && (advancedSettings.airControl || m_IsGrounded))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((((float)L_3) > ((float)(1.40129846E-45f))))
		{
			goto IL_0034;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = fabsf(L_5);
		if ((!(((float)L_6) > ((float)(1.40129846E-45f)))))
		{
			goto IL_012c;
		}
	}

IL_0034:
	{
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_7 = __this->___advancedSettings_7;
		bool L_8 = L_7->___airControl_3;
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		bool L_9 = __this->___m_IsGrounded_15;
		if (!L_9)
		{
			goto IL_012c;
		}
	}

IL_004c:
	{
		// Vector3 desiredMove = cam.transform.forward*input.y + cam.transform.right*input.x;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_21, NULL);
		V_1 = L_22;
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, m_GroundContactNormal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_23, L_24, NULL);
		V_2 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_26;
		// desiredMove.x = desiredMove.x*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___x_2;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_29 = __this->___movementSettings_5;
		float L_30 = L_29->___CurrentTargetSpeed_7;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// desiredMove.z = desiredMove.z*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___z_4;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_33 = __this->___movementSettings_5;
		float L_34 = L_33->___CurrentTargetSpeed_7;
		(&V_1)->___z_4 = ((float)il2cpp_codegen_multiply(L_32, L_34));
		// desiredMove.y = desiredMove.y*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___y_3;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_37 = __this->___movementSettings_5;
		float L_38 = L_37->___CurrentTargetSpeed_7;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_multiply(L_36, L_38));
		// if (m_RigidBody.velocity.sqrMagnitude <
		//     (movementSettings.CurrentTargetSpeed*movementSettings.CurrentTargetSpeed))
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_39, NULL);
		V_2 = L_40;
		float L_41;
		L_41 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_42 = __this->___movementSettings_5;
		float L_43 = L_42->___CurrentTargetSpeed_7;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_44 = __this->___movementSettings_5;
		float L_45 = L_44->___CurrentTargetSpeed_7;
		if ((!(((float)L_41) < ((float)((float)il2cpp_codegen_multiply(L_43, L_45))))))
		{
			goto IL_012c;
		}
	}
	{
		// m_RigidBody.AddForce(desiredMove*SlopeMultiplier(), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48;
		L_48 = RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_47, L_48, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_46, L_49, 1, NULL);
	}

IL_012c:
	{
		// if (m_IsGrounded)
		bool L_50 = __this->___m_IsGrounded_15;
		if (!L_50)
		{
			goto IL_0214;
		}
	}
	{
		// m_RigidBody.drag = 5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_51, (5.0f), NULL);
		// if (m_Jump)
		bool L_52 = __this->___m_Jump_12;
		if (!L_52)
		{
			goto IL_01c1;
		}
	}
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_53, (0.0f), NULL);
		// m_RigidBody.velocity = new Vector3(m_RigidBody.velocity.x, 0f, m_RigidBody.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_55, NULL);
		float L_57 = L_56.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_58 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_58, NULL);
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_57, (0.0f), L_60, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_54, L_61, NULL);
		// m_RigidBody.AddForce(new Vector3(0f, movementSettings.JumpForce, 0f), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_62 = __this->___m_RigidBody_8;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_63 = __this->___movementSettings_5;
		float L_64 = L_63->___JumpForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), (0.0f), L_64, (0.0f), /*hidden argument*/NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_62, L_65, 1, NULL);
		// m_Jumping = true;
		__this->___m_Jumping_14 = (bool)1;
	}

IL_01c1:
	{
		// if (!m_Jumping && Mathf.Abs(input.x) < float.Epsilon && Mathf.Abs(input.y) < float.Epsilon && m_RigidBody.velocity.magnitude < 1f)
		bool L_66 = __this->___m_Jumping_14;
		if (L_66)
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_0;
		float L_68 = L_67.___x_0;
		float L_69;
		L_69 = fabsf(L_68);
		if ((!(((float)L_69) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_0;
		float L_71 = L_70.___y_1;
		float L_72;
		L_72 = fabsf(L_71);
		if ((!(((float)L_72) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_73 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_73, NULL);
		V_2 = L_74;
		float L_75;
		L_75 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		if ((!(((float)L_75) < ((float)(1.0f)))))
		{
			goto IL_023a;
		}
	}
	{
		// m_RigidBody.Sleep();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_76 = __this->___m_RigidBody_8;
		Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA(L_76, NULL);
		goto IL_023a;
	}

IL_0214:
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_77 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_77, (0.0f), NULL);
		// if (m_PreviouslyGrounded && !m_Jumping)
		bool L_78 = __this->___m_PreviouslyGrounded_13;
		if (!L_78)
		{
			goto IL_023a;
		}
	}
	{
		bool L_79 = __this->___m_Jumping_14;
		if (L_79)
		{
			goto IL_023a;
		}
	}
	{
		// StickToGroundHelper();
		RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0(__this, NULL);
	}

IL_023a:
	{
		// m_Jump = false;
		__this->___m_Jump_12 = (bool)0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = Vector3.Angle(m_GroundContactNormal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_2;
		L_2 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return movementSettings.SlopeCurveModifier.Evaluate(angle);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_3 = __this->___movementSettings_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___SlopeCurveModifier_6;
		float L_5 = V_0;
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) +
		//                        advancedSettings.stickToGroundHelperDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___m_Capsule_9;
		float L_3;
		L_3 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_2, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_4 = __this->___advancedSettings_7;
		float L_5 = L_4->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_9;
		float L_8;
		L_8 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_7, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_9 = __this->___m_Capsule_9;
		float L_10;
		L_10 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_9, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_11 = __this->___advancedSettings_7;
		float L_12 = L_11->___stickToGroundHelperDistance_1;
		bool L_13;
		L_13 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_1, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_5)))), L_6, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_8/(2.0f))), L_10)), L_12)), (-1), 1, NULL);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		// if (Mathf.Abs(Vector3.Angle(hitInfo.normal, Vector3.up)) < 85f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_16;
		L_16 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_17) < ((float)(85.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// m_RigidBody.velocity = Vector3.ProjectOnPlane(m_RigidBody.velocity, hitInfo.normal);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_20, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 input = new Vector2
		//     {
		//         x = CrossPlatformInputManager.GetAxis("Horizontal"),
		//         y = CrossPlatformInputManager.GetAxis("Vertical")
		//     };
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		(&V_1)->___x_0 = L_0;
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		(&V_1)->___y_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_1;
		V_0 = L_2;
		// movementSettings.UpdateDesiredTargetSpeed(input);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_3 = __this->___movementSettings_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539(L_3, L_4, NULL);
		// return input;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0012;
		}
	}
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		return;
	}

IL_0012:
	{
		// float oldYRotation = transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// mouseLook.LookRotation (transform, cam.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_5 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374(L_5, L_6, L_8, NULL);
		// if (m_IsGrounded || advancedSettings.airControl)
		bool L_9 = __this->___m_IsGrounded_15;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_10 = __this->___advancedSettings_7;
		bool L_11 = L_10->___airControl_3;
		if (!L_11)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		// Quaternion velRotation = Quaternion.AngleAxis(transform.eulerAngles.y - oldYRotation, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___y_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_subtract(L_14, L_15)), L_16, NULL);
		V_1 = L_17;
		// m_RigidBody.velocity = velRotation*m_RigidBody.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_PreviouslyGrounded = m_IsGrounded;
		bool L_0 = __this->___m_IsGrounded_15;
		__this->___m_PreviouslyGrounded_13 = L_0;
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) + advancedSettings.groundCheckDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_9;
		float L_4;
		L_4 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_3, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_5 = __this->___advancedSettings_7;
		float L_6 = L_5->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->___m_Capsule_9;
		float L_9;
		L_9 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_8, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = __this->___m_Capsule_9;
		float L_11;
		L_11 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_10, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_12 = __this->___advancedSettings_7;
		float L_13 = L_12->___groundCheckDistance_0;
		bool L_14;
		L_14 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_2, ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), L_7, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_9/(2.0f))), L_11)), L_13)), (-1), 1, NULL);
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// m_IsGrounded = true;
		__this->___m_IsGrounded_15 = (bool)1;
		// m_GroundContactNormal = hitInfo.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_GroundContactNormal_11 = L_15;
		goto IL_0095;
	}

IL_0083:
	{
		// m_IsGrounded = false;
		__this->___m_IsGrounded_15 = (bool)0;
		// m_GroundContactNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___m_GroundContactNormal_11 = L_16;
	}

IL_0095:
	{
		// if (!m_PreviouslyGrounded && m_IsGrounded && m_Jumping)
		bool L_17 = __this->___m_PreviouslyGrounded_13;
		if (L_17)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_18 = __this->___m_IsGrounded_15;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_19 = __this->___m_Jumping_14;
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// m_Jumping = false;
		__this->___m_Jumping_14 = (bool)0;
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController__ctor_m697B9281793A7098177F741CBF47EA18A69B6561 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MovementSettings movementSettings = new MovementSettings();
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_0 = (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF*)il2cpp_codegen_object_new(MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var);
		MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8(L_0, NULL);
		__this->___movementSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movementSettings_5), (void*)L_0);
		// public MouseLook mouseLook = new MouseLook();
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_1 = (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894*)il2cpp_codegen_object_new(MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var);
		MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363(L_1, NULL);
		__this->___mouseLook_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseLook_6), (void*)L_1);
		// public AdvancedSettings advancedSettings = new AdvancedSettings();
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_2 = (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9*)il2cpp_codegen_object_new(AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var);
		AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B(L_2, NULL);
		__this->___advancedSettings_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___advancedSettings_7), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	{
		// if (input == Vector2.zero) return;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// if (input == Vector2.zero) return;
		return;
	}

IL_000e:
	{
		// if (input.x > 0 || input.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___input0;
		float L_4 = L_3.___x_0;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___input0;
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		// CurrentTargetSpeed = StrafeSpeed;
		float L_7 = __this->___StrafeSpeed_2;
		__this->___CurrentTargetSpeed_7 = L_7;
	}

IL_0034:
	{
		// if (input.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___input0;
		float L_9 = L_8.___y_1;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// CurrentTargetSpeed = BackwardSpeed;
		float L_10 = __this->___BackwardSpeed_1;
		__this->___CurrentTargetSpeed_7 = L_10;
	}

IL_004d:
	{
		// if (input.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___input0;
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// CurrentTargetSpeed = ForwardSpeed;
		float L_13 = __this->___ForwardSpeed_0;
		__this->___CurrentTargetSpeed_7 = L_13;
	}

IL_0066:
	{
		// if (Input.GetKey(RunKey))
		int32_t L_14 = __this->___RunKey_4;
		bool L_15;
		L_15 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_14, NULL);
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// CurrentTargetSpeed *= RunMultiplier;
		float L_16 = __this->___CurrentTargetSpeed_7;
		float L_17 = __this->___RunMultiplier_3;
		__this->___CurrentTargetSpeed_7 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// m_Running = true;
		__this->___m_Running_8 = (bool)1;
		return;
	}

IL_008e:
	{
		// m_Running = false;
		__this->___m_Running_8 = (bool)0;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float ForwardSpeed = 8.0f;   // Speed when walking forward
		__this->___ForwardSpeed_0 = (8.0f);
		// public float BackwardSpeed = 4.0f;  // Speed when walking backwards
		__this->___BackwardSpeed_1 = (4.0f);
		// public float StrafeSpeed = 4.0f;    // Speed when walking sideways
		__this->___StrafeSpeed_2 = (4.0f);
		// public float RunMultiplier = 2.0f;   // Speed when sprinting
		__this->___RunMultiplier_3 = (2.0f);
		// public KeyCode RunKey = KeyCode.LeftShift;
		__this->___RunKey_4 = ((int32_t)304);
		// public float JumpForce = 30f;
		__this->___JumpForce_5 = (30.0f);
		// public AnimationCurve SlopeCurveModifier = new AnimationCurve(new Keyframe(-90.0f, 1.0f), new Keyframe(0.0f, 1.0f), new Keyframe(90.0f, 0.0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (-90.0f), (1.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (90.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___SlopeCurveModifier_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SlopeCurveModifier_6), (void*)L_7);
		// [HideInInspector] public float CurrentTargetSpeed = 8f;
		__this->___CurrentTargetSpeed_7 = (8.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* __this, const RuntimeMethod* method) 
{
	{
		// public float groundCheckDistance = 0.01f; // distance for checking if the controller is grounded ( 0.01f seems to work best for this )
		__this->___groundCheckDistance_0 = (0.00999999978f);
		// public float stickToGroundHelperDistance = 0.5f; // stops the character
		__this->___stickToGroundHelperDistance_1 = (0.5f);
		// public float slowDownRate = 20f; // rate at which the controller comes to a stop when there is no input
		__this->___slowDownRate_2 = (20.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	{
		// m_CharacterTargetRot = character.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_CharacterTargetRot_8 = L_1;
		// m_CameraTargetRot = camera.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___m_CameraTargetRot_9 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float yRot = CrossPlatformInputManager.GetAxis("Mouse X") * XSensitivity;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___XSensitivity_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float xRot = CrossPlatformInputManager.GetAxis("Mouse Y") * YSensitivity;
		float L_2;
		L_2 = CrossPlatformInputManager_GetAxis_m56637A96AB414A6F3848926AE06716EC6BA01B73(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_3 = __this->___YSensitivity_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// m_CharacterTargetRot *= Quaternion.Euler (0f, yRot, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___m_CharacterTargetRot_8;
		float L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_5, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_4, L_6, NULL);
		__this->___m_CharacterTargetRot_8 = L_7;
		// m_CameraTargetRot *= Quaternion.Euler (-xRot, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___m_CameraTargetRot_9;
		float L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_9)), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_10, NULL);
		__this->___m_CameraTargetRot_9 = L_11;
		// if(clampVerticalRotation)
		bool L_12 = __this->___clampVerticalRotation_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// m_CameraTargetRot = ClampRotationAroundXAxis (m_CameraTargetRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___m_CameraTargetRot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F(__this, L_13, NULL);
		__this->___m_CameraTargetRot_9 = L_14;
	}

IL_0081:
	{
		// if(smooth)
		bool L_15 = __this->___smooth_5;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		// character.localRotation = Quaternion.Slerp (character.localRotation, m_CharacterTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___character0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___m_CharacterTargetRot_8;
		float L_20 = __this->___smoothTime_6;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_22, NULL);
		// camera.localRotation = Quaternion.Slerp (camera.localRotation, m_CameraTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___camera1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___m_CameraTargetRot_9;
		float L_27 = __this->___smoothTime_6;
		float L_28;
		L_28 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_23, L_29, NULL);
		goto IL_00e9;
	}

IL_00d1:
	{
		// character.localRotation = m_CharacterTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = __this->___m_CharacterTargetRot_8;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// camera.localRotation = m_CameraTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_CameraTargetRot_9;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_32, L_33, NULL);
	}

IL_00e9:
	{
		// UpdateCursorLock();
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_SetCursorLock_m22DD708E0CE7BD5BD6E517EF199C6A24309F985A (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// lockCursor = value;
		bool L_0 = ___value0;
		__this->___lockCursor_7 = L_0;
		// if(!lockCursor)
		bool L_1 = __this->___lockCursor_7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if (lockCursor)
		bool L_0 = __this->___lockCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InternalLockUpdate();
		MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_cursorIsLocked = false;
		__this->___m_cursorIsLocked_10 = (bool)0;
		goto IL_0021;
	}

IL_0012:
	{
		// else if(Input.GetMouseButtonUp(0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
	}

IL_0021:
	{
		// if (m_cursorIsLocked)
		bool L_2 = __this->___m_cursorIsLocked_10;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		return;
	}

IL_0036:
	{
		// else if (!m_cursorIsLocked)
		bool L_3 = __this->___m_cursorIsLocked_10;
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// q.x /= q.w;
		float* L_0 = (&(&___q0)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___q0;
		float L_4 = L_3.___w_3;
		*((float*)L_1) = (float)((float)(L_2/L_4));
		// q.y /= q.w;
		float* L_5 = (&(&___q0)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___w_3;
		*((float*)L_6) = (float)((float)(L_7/L_9));
		// q.z /= q.w;
		float* L_10 = (&(&___q0)->___z_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___q0;
		float L_14 = L_13.___w_3;
		*((float*)L_11) = (float)((float)(L_12/L_14));
		// q.w = 1.0f;
		(&___q0)->___w_3 = (1.0f);
		// float angleX = 2.0f * Mathf.Rad2Deg * Mathf.Atan (q.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___q0;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = atanf(L_16);
		V_0 = ((float)il2cpp_codegen_multiply((114.59156f), L_17));
		// angleX = Mathf.Clamp (angleX, MinimumX, MaximumX);
		float L_18 = V_0;
		float L_19 = __this->___MinimumX_3;
		float L_20 = __this->___MaximumX_4;
		float L_21;
		L_21 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// q.x = Mathf.Tan (0.5f * Mathf.Deg2Rad * angleX);
		float L_22 = V_0;
		float L_23;
		L_23 = tanf(((float)il2cpp_codegen_multiply((0.00872664619f), L_22)));
		(&___q0)->___x_0 = L_23;
		// return q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___q0;
		return L_24;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// public float XSensitivity = 2f;
		__this->___XSensitivity_0 = (2.0f);
		// public float YSensitivity = 2f;
		__this->___YSensitivity_1 = (2.0f);
		// public bool clampVerticalRotation = true;
		__this->___clampVerticalRotation_2 = (bool)1;
		// public float MinimumX = -90F;
		__this->___MinimumX_3 = (-90.0f);
		// public float MaximumX = 90F;
		__this->___MaximumX_4 = (90.0f);
		// public float smoothTime = 5f;
		__this->___smoothTime_6 = (5.0f);
		// public bool lockCursor = true;
		__this->___lockCursor_7 = (bool)1;
		// private bool m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Hellmade.Sound.Audio::get_AudioID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public int AudioID { get; private set; }
		int32_t L_0 = __this->___U3CAudioIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_AudioID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_AudioID_m11454443A6057925232250F704A8C1527AD6684C (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AudioID { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CAudioIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Hellmade.Sound.Audio/AudioType Hellmade.Sound.Audio::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public AudioType Type { get; private set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Type(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Type_m85BEEB19CCCD190491B99B412BBB38F9B6DB0D39 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_IsPlaying_m4C066AD515ECD573E8DAFF077DE2C618A7BF7E19 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get; private set; }
		bool L_0 = __this->___U3CIsPlayingU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_IsPlaying(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPlayingU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Paused_m3BDC28E22CE977F5DBEF3506EF14347FC567CCAA (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Paused { get; private set; }
		bool L_0 = __this->___U3CPausedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Paused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Paused { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPausedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Stopping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Stopping_m6B95B658E163EB22DE1BC488F1D75749B8A4A04A (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopping { get; private set; }
		bool L_0 = __this->___U3CStoppingU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Stopping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Stopping_m05B42920BEB7F91318DC3091A8E76FCDF4E17965 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Stopping { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CStoppingU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Activated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Activated_mAD810CBE710752B61B1BBD658C2707859AF7D855 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Activated { get; private set; }
		bool L_0 = __this->___U3CActivatedU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Activated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Activated_mDB268898D2B5F4CC847289A32A3EC84F3BEC21C4 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Activated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CActivatedU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Pooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Pooled_mEA01A1B7F5A6899EB260A337E377F34E70CC1EBF (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Pooled { get; set; }
		bool L_0 = __this->___U3CPooledU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Pooled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Pooled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CPooledU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float Volume { get; private set; }
		float L_0 = __this->___U3CVolumeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Volume_mED0D8FE0074CC4FC38B86E0B6C40FDA83D13A25F (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Volume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CVolumeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.AudioSource Hellmade.Sound.Audio::get_AudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_AudioSource_m3EE81DCDFCD4979FADED991F384A333BAEA2C9B3 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Hellmade.Sound.Audio::get_SourceTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Audio_get_SourceTransform_m8D3E348298E64E8395EF895BE129E5D38A41C5AD (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return sourceTransform; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___sourceTransform_31;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_SourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_SourceTransform_m48199F21999521B73B127376F280515005925D30 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(value == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// sourceTransform = EazySoundManager.Gameobject.transform;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = EazySoundManager_get_Gameobject_m0FBF3A731D2934F24328EF1FCCFE79AE7438D749(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___sourceTransform_31 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceTransform_31), (void*)L_3);
		return;
	}

IL_001a:
	{
		// sourceTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___value0;
		__this->___sourceTransform_31 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceTransform_31), (void*)L_4);
		// }
		return;
	}
}
// UnityEngine.AudioClip Hellmade.Sound.Audio::get_Clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Audio_get_Clip_m5818DA9540EE30CCADF7AD97306E31DA996499CD (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return clip; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___clip_13;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Clip_mB6FD3E2485B75E361624D79105985CA06A7B6520 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clip = value;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___value0;
		__this->___clip_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clip_13), (void*)L_0);
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// AudioSource.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___clip_13;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_3, L_4, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Loop_mA8B1B960CEAD99ACD294DC2F85C589EEB2552980 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return loop; }
		bool L_0 = __this->___loop_14;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Loop_mD2026FAFAD3A0522FEF0340BE54315734A1620EE (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loop = value;
		bool L_0 = ___value0;
		__this->___loop_14 = L_0;
		// if(AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// AudioSource.loop = loop;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_4 = __this->___loop_14;
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_3, L_4, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Mute_m5D8381EEB32634313C6F1293DD946F92166663A0 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return mute; }
		bool L_0 = __this->___mute_15;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Mute_mC7565500079775D2273E575F1E95649B8A613043 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mute = value;
		bool L_0 = ___value0;
		__this->___mute_15 = L_0;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// AudioSource.mute = mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_4 = __this->___mute_15;
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_3, L_4, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Int32 Hellmade.Sound.Audio::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Audio_get_Priority_mF6C143E7B806BF0674F9FB09995650260E4B6FDA (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return priority; }
		int32_t L_0 = __this->___priority_16;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Priority_mFDE1C52B482F1C35DFF5FCF3B8A070294AA6BB14 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// priority = Mathf.Clamp(value, 0, 256);
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_0, 0, ((int32_t)256), NULL);
		__this->___priority_16 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// AudioSource.priority = priority;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		int32_t L_5 = __this->___priority_16;
		AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40(L_4, L_5, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_Pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_Pitch_mD7BB03B0D7652DB0E7F22D072F6170239E9C7578 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return pitch; }
		float L_0 = __this->___pitch_17;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Pitch_mCC3B7683F1F791CF8741C59F01A4A3322DE0A1AE (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pitch = Mathf.Clamp(value, -3, 3);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (-3.0f), (3.0f), NULL);
		__this->___pitch_17 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// AudioSource.pitch = pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___pitch_17;
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_4, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_StereoPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_StereoPan_m56A9D7147A46E1E87475D6927FB407696F453D48 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return stereoPan; }
		float L_0 = __this->___stereoPan_18;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_StereoPan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_StereoPan_m4FCA89004B842E4037775781D0C8FD6D3A8D9A5E (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stereoPan = Mathf.Clamp(value, -1, 1);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (-1.0f), (1.0f), NULL);
		__this->___stereoPan_18 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// AudioSource.panStereo = stereoPan;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___stereoPan_18;
		AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF(L_4, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_SpatialBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_SpatialBlend_m330EB53A6F111E7AC09DF25C546C3B7CD39F14C3 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return spatialBlend; }
		float L_0 = __this->___spatialBlend_19;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_SpatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_SpatialBlend_m03F110E2A00BA3FF265B8BE3976E96A82C51D4D8 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spatialBlend = Mathf.Clamp01(value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		__this->___spatialBlend_19 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// AudioSource.spatialBlend = spatialBlend;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___spatialBlend_19;
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_4, L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_ReverbZoneMix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_ReverbZoneMix_m5527687F7890F13F33879D40697CB2BD5E26FDF3 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return reverbZoneMix; }
		float L_0 = __this->___reverbZoneMix_20;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_ReverbZoneMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_ReverbZoneMix_mEAD49F841A9F36509489C7B85D8F87680DC56447 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reverbZoneMix = Mathf.Clamp(value, 0, 1.1f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.0f), (1.10000002f), NULL);
		__this->___reverbZoneMix_20 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// AudioSource.reverbZoneMix = reverbZoneMix;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___reverbZoneMix_20;
		AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E(L_4, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_DopplerLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_DopplerLevel_mC426C00AC03046210B5CC079119591335C2DD12B (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return dopplerLevel; }
		float L_0 = __this->___dopplerLevel_21;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_DopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_DopplerLevel_m49BE2A0B6DD46263FEB6DD400E1CCA94FCCF863E (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dopplerLevel = Mathf.Clamp(value, 0, 5);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.0f), (5.0f), NULL);
		__this->___dopplerLevel_21 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// AudioSource.dopplerLevel = dopplerLevel;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___dopplerLevel_21;
		AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6(L_4, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_Spread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_Spread_mFF420F21BF184FAB106696AB9468FE783B8A7060 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return spread; }
		float L_0 = __this->___spread_22;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Spread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Spread_mA437817D4C314897245C688F99F9D9AA9757BDD4 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spread = Mathf.Clamp(value, 0, 360);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.0f), (360.0f), NULL);
		__this->___spread_22 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// AudioSource.spread = spread;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___spread_22;
		AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F(L_4, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// UnityEngine.AudioRolloffMode Hellmade.Sound.Audio::get_RolloffMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Audio_get_RolloffMode_m6C41DC00552AE7C22E839FBB2192CDBAFA249AF9 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return rolloffMode; }
		int32_t L_0 = __this->___rolloffMode_23;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_RolloffMode(UnityEngine.AudioRolloffMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_RolloffMode_m0FD9C9C3C94A63377FD4E1AB3FB6C91558A25563 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rolloffMode = value;
		int32_t L_0 = ___value0;
		__this->___rolloffMode_23 = L_0;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// AudioSource.rolloffMode = rolloffMode;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		int32_t L_4 = __this->___rolloffMode_23;
		AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4(L_3, L_4, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_Max3DDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_Max3DDistance_mE54FE7A720532D56D44848A889541B761AE5EBBB (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return max3DDistance; }
		float L_0 = __this->___max3DDistance_24;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Max3DDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Max3DDistance_m84D3699FCEE86BB29454B8C330F71F056DA18C22 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// max3DDistance = Mathf.Max(value, 0.01f);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (0.00999999978f), NULL);
		__this->___max3DDistance_24 = L_1;
		// if(AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// AudioSource.maxDistance = max3DDistance;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___max3DDistance_24;
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_4, L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_Min3DDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_Min3DDistance_m57D62FB705E6EB5DB39A830BB6B4A28275DDE7DB (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return min3DDistance; }
		float L_0 = __this->___min3DDistance_25;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Min3DDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Min3DDistance_m81705865FF699E093DBB3646D143E5790B4C0E78 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// min3DDistance = Mathf.Max(value, 0);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (0.0f), NULL);
		__this->___min3DDistance_25 = L_1;
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// AudioSource.minDistance = min3DDistance;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_5 = __this->___min3DDistance_25;
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_4, L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Boolean Hellmade.Sound.Audio::get_Persist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Audio_get_Persist_mF928162C5BFB76B4F7310988134AB4DC51FFC49E (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Persist { get; set; }
		bool L_0 = __this->___U3CPersistU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_Persist(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_Persist_m83F8CF4E028A1A43D87E60923AF380A224587047 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Persist { get; set; }
		bool L_0 = ___value0;
		__this->___U3CPersistU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_FadeInSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_FadeInSeconds_m69DFC297FD33F7AF732028D54EBC135CCADB0745 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float FadeInSeconds { get; set; }
		float L_0 = __this->___U3CFadeInSecondsU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_FadeInSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_FadeInSeconds_m6615BAAE2804CF55334EA8BCB8C32C7FF9019609 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FadeInSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CFadeInSecondsU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.Audio::get_FadeOutSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Audio_get_FadeOutSeconds_m373D153EB89BDCB8C309775B81E2F553A59326CE (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float FadeOutSeconds { get; set; }
		float L_0 = __this->___U3CFadeOutSecondsU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Hellmade.Sound.Audio::set_FadeOutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_set_FadeOutSeconds_m8191CC8562D03BAFC54F12CC0E7123D9E98B1D55 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FadeOutSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CFadeOutSecondsU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Hellmade.Sound.Audio::.ctor(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio__ctor_m98D6789A8FE8426039097D583BCF12E88331669B (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___loop2, bool ___persist3, float ___volume4, float ___fadeInValue5, float ___fadeOutValue6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Audio(AudioType audioType, AudioClip clip, bool loop, bool persist, float volume, float fadeInValue, float fadeOutValue, Transform sourceTransform)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudioID = audioCounter;
		int32_t L_0 = ((Audio_t645B7D470099079857386A95B679C828C798D13A_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var))->___audioCounter_12;
		Audio_set_AudioID_m11454443A6057925232250F704A8C1527AD6684C_inline(__this, L_0, NULL);
		// audioCounter++;
		int32_t L_1 = ((Audio_t645B7D470099079857386A95B679C828C798D13A_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var))->___audioCounter_12;
		((Audio_t645B7D470099079857386A95B679C828C798D13A_StaticFields*)il2cpp_codegen_static_fields_for(Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var))->___audioCounter_12 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// this.Type = audioType;
		int32_t L_2 = ___audioType0;
		Audio_set_Type_m85BEEB19CCCD190491B99B412BBB38F9B6DB0D39_inline(__this, L_2, NULL);
		// this.Clip = clip;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip1;
		Audio_set_Clip_mB6FD3E2485B75E361624D79105985CA06A7B6520(__this, L_3, NULL);
		// this.SourceTransform = sourceTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___sourceTransform7;
		Audio_set_SourceTransform_m48199F21999521B73B127376F280515005925D30(__this, L_4, NULL);
		// this.Loop = loop;
		bool L_5 = ___loop2;
		Audio_set_Loop_mD2026FAFAD3A0522FEF0340BE54315734A1620EE(__this, L_5, NULL);
		// this.Persist = persist;
		bool L_6 = ___persist3;
		Audio_set_Persist_m83F8CF4E028A1A43D87E60923AF380A224587047_inline(__this, L_6, NULL);
		// this.targetVolume = volume;
		float L_7 = ___volume4;
		__this->___targetVolume_26 = L_7;
		// this.initTargetVolume = volume;
		float L_8 = ___volume4;
		__this->___initTargetVolume_27 = L_8;
		// this.tempFadeSeconds = -1;
		__this->___tempFadeSeconds_28 = (-1.0f);
		// this.FadeInSeconds = fadeInValue;
		float L_9 = ___fadeInValue5;
		Audio_set_FadeInSeconds_m6615BAAE2804CF55334EA8BCB8C32C7FF9019609_inline(__this, L_9, NULL);
		// this.FadeOutSeconds = fadeOutValue;
		float L_10 = ___fadeOutValue6;
		Audio_set_FadeOutSeconds_m8191CC8562D03BAFC54F12CC0E7123D9E98B1D55_inline(__this, L_10, NULL);
		// Volume = 0f;
		Audio_set_Volume_mED0D8FE0074CC4FC38B86E0B6C40FDA83D13A25F_inline(__this, (0.0f), NULL);
		// Pooled = false;
		Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B_inline(__this, (bool)0, NULL);
		// Mute = false;
		Audio_set_Mute_mC7565500079775D2273E575F1E95649B8A613043(__this, (bool)0, NULL);
		// Priority = 128;
		Audio_set_Priority_mFDE1C52B482F1C35DFF5FCF3B8A070294AA6BB14(__this, ((int32_t)128), NULL);
		// Pitch = 1;
		Audio_set_Pitch_mCC3B7683F1F791CF8741C59F01A4A3322DE0A1AE(__this, (1.0f), NULL);
		// StereoPan = 0;
		Audio_set_StereoPan_m4FCA89004B842E4037775781D0C8FD6D3A8D9A5E(__this, (0.0f), NULL);
		// if (sourceTransform != null && sourceTransform != EazySoundManager.Gameobject.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___sourceTransform7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00cf;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___sourceTransform7;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = EazySoundManager_get_Gameobject_m0FBF3A731D2934F24328EF1FCCFE79AE7438D749(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		// SpatialBlend = 1;
		Audio_set_SpatialBlend_m03F110E2A00BA3FF265B8BE3976E96A82C51D4D8(__this, (1.0f), NULL);
	}

IL_00cf:
	{
		// ReverbZoneMix = 1;
		Audio_set_ReverbZoneMix_mEAD49F841A9F36509489C7B85D8F87680DC56447(__this, (1.0f), NULL);
		// DopplerLevel = 1;
		Audio_set_DopplerLevel_m49BE2A0B6DD46263FEB6DD400E1CCA94FCCF863E(__this, (1.0f), NULL);
		// Spread = 0;
		Audio_set_Spread_mA437817D4C314897245C688F99F9D9AA9757BDD4(__this, (0.0f), NULL);
		// RolloffMode = AudioRolloffMode.Logarithmic;
		Audio_set_RolloffMode_m0FD9C9C3C94A63377FD4E1AB3FB6C91558A25563(__this, 0, NULL);
		// Min3DDistance = 1;
		Audio_set_Min3DDistance_m81705865FF699E093DBB3646D143E5790B4C0E78(__this, (1.0f), NULL);
		// Max3DDistance = 500;
		Audio_set_Max3DDistance_m84D3699FCEE86BB29454B8C330F71F056DA18C22(__this, (500.0f), NULL);
		// IsPlaying = false;
		Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline(__this, (bool)0, NULL);
		// Paused = false;
		Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline(__this, (bool)0, NULL);
		// Activated = false;
		Audio_set_Activated_mDB268898D2B5F4CC847289A32A3EC84F3BEC21C4_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::CreateAudiosource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_CreateAudiosource_mDF833D27BDB0AF23D3C04BD0730F4FCFE7E4056F (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource = SourceTransform.gameObject.AddComponent<AudioSource>() as AudioSource;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Audio_get_SourceTransform_m8D3E348298E64E8395EF895BE129E5D38A41C5AD_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_1, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		Audio_set_AudioSource_m3EE81DCDFCD4979FADED991F384A333BAEA2C9B3_inline(__this, L_2, NULL);
		// AudioSource.clip = Clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Audio_get_Clip_m5818DA9540EE30CCADF7AD97306E31DA996499CD_inline(__this, NULL);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_3, L_4, NULL);
		// AudioSource.loop = Loop;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_6;
		L_6 = Audio_get_Loop_mA8B1B960CEAD99ACD294DC2F85C589EEB2552980_inline(__this, NULL);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_5, L_6, NULL);
		// AudioSource.mute = Mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_8;
		L_8 = Audio_get_Mute_m5D8381EEB32634313C6F1293DD946F92166663A0_inline(__this, NULL);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_7, L_8, NULL);
		// AudioSource.volume = Volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_10;
		L_10 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, L_10, NULL);
		// AudioSource.priority = Priority;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		int32_t L_12;
		L_12 = Audio_get_Priority_mF6C143E7B806BF0674F9FB09995650260E4B6FDA_inline(__this, NULL);
		AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40(L_11, L_12, NULL);
		// AudioSource.pitch = Pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13;
		L_13 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_14;
		L_14 = Audio_get_Pitch_mD7BB03B0D7652DB0E7F22D072F6170239E9C7578_inline(__this, NULL);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_13, L_14, NULL);
		// AudioSource.panStereo = StereoPan;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15;
		L_15 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_16;
		L_16 = Audio_get_StereoPan_m56A9D7147A46E1E87475D6927FB407696F453D48_inline(__this, NULL);
		AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF(L_15, L_16, NULL);
		// AudioSource.spatialBlend = SpatialBlend;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17;
		L_17 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_18;
		L_18 = Audio_get_SpatialBlend_m330EB53A6F111E7AC09DF25C546C3B7CD39F14C3_inline(__this, NULL);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_17, L_18, NULL);
		// AudioSource.reverbZoneMix = ReverbZoneMix;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19;
		L_19 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_20;
		L_20 = Audio_get_ReverbZoneMix_m5527687F7890F13F33879D40697CB2BD5E26FDF3_inline(__this, NULL);
		AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E(L_19, L_20, NULL);
		// AudioSource.dopplerLevel = DopplerLevel;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21;
		L_21 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_22;
		L_22 = Audio_get_DopplerLevel_mC426C00AC03046210B5CC079119591335C2DD12B_inline(__this, NULL);
		AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6(L_21, L_22, NULL);
		// AudioSource.spread = Spread;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_24;
		L_24 = Audio_get_Spread_mFF420F21BF184FAB106696AB9468FE783B8A7060_inline(__this, NULL);
		AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F(L_23, L_24, NULL);
		// AudioSource.rolloffMode = RolloffMode;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25;
		L_25 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		int32_t L_26;
		L_26 = Audio_get_RolloffMode_m6C41DC00552AE7C22E839FBB2192CDBAFA249AF9_inline(__this, NULL);
		AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4(L_25, L_26, NULL);
		// AudioSource.maxDistance = Max3DDistance;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27;
		L_27 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_28;
		L_28 = Audio_get_Max3DDistance_mE54FE7A720532D56D44848A889541B761AE5EBBB_inline(__this, NULL);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_27, L_28, NULL);
		// AudioSource.minDistance = Min3DDistance;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29;
		L_29 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_30;
		L_30 = Audio_get_Min3DDistance_m57D62FB705E6EB5DB39A830BB6B4A28275DDE7DB_inline(__this, NULL);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Play_m508109D28BC17E7824E3320B9321FDADE1AB0BBC (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// Play(initTargetVolume);
		float L_0 = __this->___initTargetVolume_27;
		Audio_Play_mCBDDF28FF87E640E0F81198F6694F582E23B1B40(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Play_mCBDDF28FF87E640E0F81198F6694F582E23B1B40 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Pooled)
		bool L_0;
		L_0 = Audio_get_Pooled_mEA01A1B7F5A6899EB260A337E377F34E70CC1EBF_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// bool restoredFromPool = EazySoundManager.RestoreAudioFromPool(Type, AudioID);
		int32_t L_1;
		L_1 = Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline(__this, NULL);
		int32_t L_2;
		L_2 = Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = EazySoundManager_RestoreAudioFromPool_m56B8005967B6A165ECEB094337E7BBCADF004955(L_1, L_2, NULL);
		// if (!restoredFromPool)
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// Pooled = true;
		Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B_inline(__this, (bool)1, NULL);
	}

IL_0023:
	{
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// CreateAudiosource();
		Audio_CreateAudiosource_mDF833D27BDB0AF23D3C04BD0730F4FCFE7E4056F(__this, NULL);
	}

IL_0037:
	{
		// AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// IsPlaying = true;
		Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline(__this, (bool)1, NULL);
		// fadeInterpolater = 0f;
		__this->___fadeInterpolater_29 = (0.0f);
		// onFadeStartVolume = this.Volume;
		float L_7;
		L_7 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		__this->___onFadeStartVolume_30 = L_7;
		// targetVolume = volume;
		float L_8 = ___volume0;
		__this->___targetVolume_26 = L_8;
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Stop_mB0EDFC4B8FE86E0182668F94816295FF0ACE3770 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// fadeInterpolater = 0f;
		__this->___fadeInterpolater_29 = (0.0f);
		// onFadeStartVolume = Volume;
		float L_0;
		L_0 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		__this->___onFadeStartVolume_30 = L_0;
		// targetVolume = 0f;
		__this->___targetVolume_26 = (0.0f);
		// Stopping = true;
		Audio_set_Stopping_m05B42920BEB7F91318DC3091A8E76FCDF4E17965_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Pause_m9B2CCF66F33E9F85E7D5A1AD4206D8D2EF0319F6 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// AudioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_0, NULL);
		// Paused = true;
		Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_UnPause_m5020A72CB542EDEB95960F9FF5F72DB1597490C3 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// AudioSource.UnPause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9(L_0, NULL);
		// Paused = false;
		Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Resume_m948F4245560B61967CB21617802A502D5A810588 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// AudioSource.UnPause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9(L_0, NULL);
		// Paused = false;
		Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mD7B95BFEAA36836B956DC3569A6B6D3BE6395782 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, const RuntimeMethod* method) 
{
	{
		// if (volume > targetVolume)
		float L_0 = ___volume0;
		float L_1 = __this->___targetVolume_26;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		// SetVolume(volume, FadeOutSeconds);
		float L_2 = ___volume0;
		float L_3;
		L_3 = Audio_get_FadeOutSeconds_m373D153EB89BDCB8C309775B81E2F553A59326CE_inline(__this, NULL);
		Audio_SetVolume_mC8C054481E1756C3C19DE89C2A4BE649B5100671(__this, L_2, L_3, NULL);
		return;
	}

IL_0017:
	{
		// SetVolume(volume, FadeInSeconds);
		float L_4 = ___volume0;
		float L_5;
		L_5 = Audio_get_FadeInSeconds_m69DFC297FD33F7AF732028D54EBC135CCADB0745_inline(__this, NULL);
		Audio_SetVolume_mC8C054481E1756C3C19DE89C2A4BE649B5100671(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::SetVolume(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mC8C054481E1756C3C19DE89C2A4BE649B5100671 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, float ___fadeSeconds1, const RuntimeMethod* method) 
{
	{
		// SetVolume(volume, fadeSeconds, this.Volume);
		float L_0 = ___volume0;
		float L_1 = ___fadeSeconds1;
		float L_2;
		L_2 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		Audio_SetVolume_mE5F88AFE2152B600A652B1ED27DD571A24B4E3C5(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::SetVolume(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_SetVolume_mE5F88AFE2152B600A652B1ED27DD571A24B4E3C5 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___volume0, float ___fadeSeconds1, float ___startVolume2, const RuntimeMethod* method) 
{
	{
		// targetVolume = Mathf.Clamp01(volume);
		float L_0 = ___volume0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		__this->___targetVolume_26 = L_1;
		// fadeInterpolater = 0;
		__this->___fadeInterpolater_29 = (0.0f);
		// onFadeStartVolume = startVolume;
		float L_2 = ___startVolume2;
		__this->___onFadeStartVolume_30 = L_2;
		// tempFadeSeconds = fadeSeconds;
		float L_3 = ___fadeSeconds1;
		__this->___tempFadeSeconds_28 = L_3;
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Set3DDistances(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Set3DDistances_mDAA55EAA7BB581F7005675078BBE12A20D9BB408 (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___min0, float ___max1, const RuntimeMethod* method) 
{
	{
		// Min3DDistance = min;
		float L_0 = ___min0;
		Audio_set_Min3DDistance_m81705865FF699E093DBB3646D143E5790B4C0E78(__this, L_0, NULL);
		// Max3DDistance = max;
		float L_1 = ___max1;
		Audio_set_Max3DDistance_m84D3699FCEE86BB29454B8C330F71F056DA18C22(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.Audio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Update_m4C4C5311F47F375F3125A1E95A2A53331166894A (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float G_B7_0 = 0.0f;
	float G_B11_0 = 0.0f;
	{
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Activated = true;
		Audio_set_Activated_mDB268898D2B5F4CC847289A32A3EC84F3BEC21C4_inline(__this, (bool)1, NULL);
		// if (Volume != targetVolume)
		float L_2;
		L_2 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		float L_3 = __this->___targetVolume_26;
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_009f;
		}
	}
	{
		// fadeInterpolater += Time.unscaledDeltaTime;
		float L_4 = __this->___fadeInterpolater_29;
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___fadeInterpolater_29 = ((float)il2cpp_codegen_add(L_4, L_5));
		// if (Volume > targetVolume)
		float L_6;
		L_6 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		float L_7 = __this->___targetVolume_26;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0062;
		}
	}
	{
		// fadeValue = tempFadeSeconds != -1 ? tempFadeSeconds : FadeOutSeconds;
		float L_8 = __this->___tempFadeSeconds_28;
		if ((!(((float)L_8) == ((float)(-1.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		float L_9;
		L_9 = Audio_get_FadeOutSeconds_m373D153EB89BDCB8C309775B81E2F553A59326CE_inline(__this, NULL);
		G_B7_0 = L_9;
		goto IL_005f;
	}

IL_0059:
	{
		float L_10 = __this->___tempFadeSeconds_28;
		G_B7_0 = L_10;
	}

IL_005f:
	{
		V_0 = G_B7_0;
		goto IL_007e;
	}

IL_0062:
	{
		// fadeValue = tempFadeSeconds != -1 ? tempFadeSeconds : FadeInSeconds;
		float L_11 = __this->___tempFadeSeconds_28;
		if ((!(((float)L_11) == ((float)(-1.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		float L_12;
		L_12 = Audio_get_FadeInSeconds_m69DFC297FD33F7AF732028D54EBC135CCADB0745_inline(__this, NULL);
		G_B11_0 = L_12;
		goto IL_007d;
	}

IL_0077:
	{
		float L_13 = __this->___tempFadeSeconds_28;
		G_B11_0 = L_13;
	}

IL_007d:
	{
		V_0 = G_B11_0;
	}

IL_007e:
	{
		// Volume = Mathf.Lerp(onFadeStartVolume, targetVolume, fadeInterpolater / fadeValue);
		float L_14 = __this->___onFadeStartVolume_30;
		float L_15 = __this->___targetVolume_26;
		float L_16 = __this->___fadeInterpolater_29;
		float L_17 = V_0;
		float L_18;
		L_18 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_14, L_15, ((float)(L_16/L_17)), NULL);
		Audio_set_Volume_mED0D8FE0074CC4FC38B86E0B6C40FDA83D13A25F_inline(__this, L_18, NULL);
		goto IL_00b7;
	}

IL_009f:
	{
		// else if (tempFadeSeconds != -1)
		float L_19 = __this->___tempFadeSeconds_28;
		if ((((float)L_19) == ((float)(-1.0f))))
		{
			goto IL_00b7;
		}
	}
	{
		// tempFadeSeconds = -1;
		__this->___tempFadeSeconds_28 = (-1.0f);
	}

IL_00b7:
	{
		// switch (Type)
		int32_t L_20;
		L_20 = Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline(__this, NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_0110;
			}
		}
	}
	{
		goto IL_012d;
	}

IL_00d2:
	{
		// AudioSource.volume = Volume * EazySoundManager.GlobalMusicVolume * EazySoundManager.GlobalVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22;
		L_22 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_23;
		L_23 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354_inline(NULL);
		float L_25;
		L_25 = EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454_inline(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), NULL);
		// break;
		goto IL_012d;
	}

IL_00f1:
	{
		// AudioSource.volume = Volume * EazySoundManager.GlobalSoundsVolume * EazySoundManager.GlobalVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26;
		L_26 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_27;
		L_27 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_28;
		L_28 = EazySoundManager_get_GlobalSoundsVolume_m7FC902F282E514D49EF12B921DF8E30D87B436F4_inline(NULL);
		float L_29;
		L_29 = EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454_inline(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_26, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_27, L_28)), L_29)), NULL);
		// break;
		goto IL_012d;
	}

IL_0110:
	{
		// AudioSource.volume = Volume * EazySoundManager.GlobalUISoundsVolume * EazySoundManager.GlobalVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30;
		L_30 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		float L_31;
		L_31 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_32;
		L_32 = EazySoundManager_get_GlobalUISoundsVolume_m80242FFC1EB86BBC65EDE7E5A610777E69504464_inline(NULL);
		float L_33;
		L_33 = EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454_inline(NULL);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_30, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, L_32)), L_33)), NULL);
	}

IL_012d:
	{
		// if (Volume == 0f && Stopping)
		float L_34;
		L_34 = Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline(__this, NULL);
		if ((!(((float)L_34) == ((float)(0.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		bool L_35;
		L_35 = Audio_get_Stopping_m6B95B658E163EB22DE1BC488F1D75749B8A4A04A_inline(__this, NULL);
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_36;
		L_36 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_36, NULL);
		// Stopping = false;
		Audio_set_Stopping_m05B42920BEB7F91318DC3091A8E76FCDF4E17965_inline(__this, (bool)0, NULL);
		// IsPlaying = false;
		Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline(__this, (bool)0, NULL);
		// Paused = false;
		Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline(__this, (bool)0, NULL);
	}

IL_0162:
	{
		// if (AudioSource.isPlaying != IsPlaying && Application.isFocused)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37;
		L_37 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_38;
		L_38 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_37, NULL);
		bool L_39;
		L_39 = Audio_get_IsPlaying_m4C066AD515ECD573E8DAFF077DE2C618A7BF7E19_inline(__this, NULL);
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_018d;
		}
	}
	{
		bool L_40;
		L_40 = Application_get_isFocused_m5E2835D701463AB393851163788F1F2DF3770E3E(NULL);
		if (!L_40)
		{
			goto IL_018d;
		}
	}
	{
		// IsPlaying = AudioSource.isPlaying;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41;
		L_41 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(__this, NULL);
		bool L_42;
		L_42 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_41, NULL);
		Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline(__this, L_42, NULL);
	}

IL_018d:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Hellmade.Sound.EazySoundManager::get_Gameobject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EazySoundManager_get_Gameobject_m0FBF3A731D2934F24328EF1FCCFE79AE7438D749 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameObject Gameobject { get { return Instance.gameObject; } }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_0;
		L_0 = EazySoundManager_get_Instance_m799D6B91F0422E7240C3C3FC8DC62158AA49B64F(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateMusic_mB4A5E2A98B04700A2E166211CA9A36C5A7A8335A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateMusic { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateMusicU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateMusic_m4C3F3385F6B48AEC797E1C08D6C966B7E412287C (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateMusic { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateMusicU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateSounds_m7752F4F9C39B61197C5C4C0E6659EA1CA4E8F3A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateSounds { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateSoundsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateSounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateSounds_m09CCB53F544F509C784175DCEA4FB36BA3B0BF8B (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateSounds { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateSoundsU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean Hellmade.Sound.EazySoundManager::get_IgnoreDuplicateUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateUISounds_mB1816CB87DFC4085F57E9FD13C6DB7999EDEB7EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateUISounds { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateUISoundsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_IgnoreDuplicateUISounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateUISounds_m0EEEB586919B53FD314002182A7B23E94F3EB57F (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateUISounds { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateUISoundsU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalVolumeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalVolume_mCA22728FB5736F0B5AF5A8A638EB51E74EE39029 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalVolumeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalMusicVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalMusicVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalMusicVolumeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalMusicVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalMusicVolume_m64057054C58A0D5798C500C5042FB6C06EFD44CE (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalMusicVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalMusicVolumeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalSoundsVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalSoundsVolume_m7FC902F282E514D49EF12B921DF8E30D87B436F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalSoundsVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalSoundsVolumeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalSoundsVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalSoundsVolume_m02C4C426E6A58BB1746CB6564F3B92A2830D6F86 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalSoundsVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalSoundsVolumeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Single Hellmade.Sound.EazySoundManager::get_GlobalUISoundsVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalUISoundsVolume_m80242FFC1EB86BBC65EDE7E5A610777E69504464 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalUISoundsVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalUISoundsVolumeU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::set_GlobalUISoundsVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalUISoundsVolume_m71C0CC9756B2342739CC80AFE56F775C89D0764A (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalUISoundsVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalUISoundsVolumeU3Ek__BackingField_10 = L_0;
		return;
	}
}
// Hellmade.Sound.EazySoundManager Hellmade.Sound.EazySoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* EazySoundManager_get_Instance_m799D6B91F0422E7240C3C3FC8DC62158AA49B64F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_m7CF7D73399C7A3BC14D3C0971BA007DEFB3D0CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E99AF0EB1F92137E8B59CA6EED76D238B0480B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// instance = (EazySoundManager)FindObjectOfType(typeof(EazySoundManager));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C*)CastclassClass((RuntimeObject*)L_4, EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11), (void*)((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C*)CastclassClass((RuntimeObject*)L_4, EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var)));
		// if (instance == null)
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_5 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11;
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// instance = (new GameObject("EazySoundManager")).AddComponent<EazySoundManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_7, _stringLiteralA3E99AF0EB1F92137E8B59CA6EED76D238B0480B, NULL);
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_8;
		L_8 = GameObject_AddComponent_TisEazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_m7CF7D73399C7A3BC14D3C0971BA007DEFB3D0CEF(L_7, GameObject_AddComponent_TisEazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_m7CF7D73399C7A3BC14D3C0971BA007DEFB3D0CEF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11), (void*)L_8);
	}

IL_0047:
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_9 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___instance_11;
		return L_9;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager__cctor_m86302E95A7B3C033BE46D5ACE6F4A86B2C8015CF (const RuntimeMethod* method) 
{
	{
		// Instance.Init();
		EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* L_0;
		L_0 = EazySoundManager_get_Instance_m799D6B91F0422E7240C3C3FC8DC62158AA49B64F(NULL);
		EazySoundManager_Init_mB8EFB7C427B9C7153662494394878F85C9C50156(L_0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_Init_mB8EFB7C427B9C7153662494394878F85C9C50156 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!initialized)
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___initialized_16;
		if (L_0)
		{
			goto IL_0075;
		}
	}
	{
		// musicAudio = new Dictionary<int, Audio>();
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1 = (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*)il2cpp_codegen_object_new(Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4(L_1, Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___musicAudio_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___musicAudio_12), (void*)L_1);
		// soundsAudio = new Dictionary<int, Audio>();
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*)il2cpp_codegen_object_new(Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4(L_2, Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___soundsAudio_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___soundsAudio_13), (void*)L_2);
		// UISoundsAudio = new Dictionary<int, Audio>();
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_3 = (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*)il2cpp_codegen_object_new(Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4(L_3, Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___UISoundsAudio_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___UISoundsAudio_14), (void*)L_3);
		// audioPool = new Dictionary<int, Audio>();
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_4 = (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*)il2cpp_codegen_object_new(Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4(L_4, Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15), (void*)L_4);
		// GlobalVolume = 1;
		EazySoundManager_set_GlobalVolume_mCA22728FB5736F0B5AF5A8A638EB51E74EE39029_inline((1.0f), NULL);
		// GlobalMusicVolume = 1;
		EazySoundManager_set_GlobalMusicVolume_m64057054C58A0D5798C500C5042FB6C06EFD44CE_inline((1.0f), NULL);
		// GlobalSoundsVolume = 1;
		EazySoundManager_set_GlobalSoundsVolume_m02C4C426E6A58BB1746CB6564F3B92A2830D6F86_inline((1.0f), NULL);
		// GlobalUISoundsVolume = 1;
		EazySoundManager_set_GlobalUISoundsVolume_m71C0CC9756B2342739CC80AFE56F775C89D0764A_inline((1.0f), NULL);
		// IgnoreDuplicateMusic = false;
		EazySoundManager_set_IgnoreDuplicateMusic_m4C3F3385F6B48AEC797E1C08D6C966B7E412287C_inline((bool)0, NULL);
		// IgnoreDuplicateSounds = false;
		EazySoundManager_set_IgnoreDuplicateSounds_m09CCB53F544F509C784175DCEA4FB36BA3B0BF8B_inline((bool)0, NULL);
		// IgnoreDuplicateUISounds = false;
		EazySoundManager_set_IgnoreDuplicateUISounds_m0EEEB586919B53FD314002182A7B23E94F3EB57F_inline((bool)0, NULL);
		// initialized = true;
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___initialized_16 = (bool)1;
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_OnEnable_m126D1C098677523098667B80B5237633F343B3B0 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_OnDisable_m10C57858474B5602D79DDAE4592512F80FCBB6B7 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155(L_0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_OnSceneLoaded_mB16DAD807E83CCCFA0FA9E87D64295CAF0415117 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoveNonPersistAudio(musicAudio);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___musicAudio_12;
		EazySoundManager_RemoveNonPersistAudio_m8FF77D2FAE0B12FEB0E904B1644A39056A1EC9CA(L_0, NULL);
		// RemoveNonPersistAudio(soundsAudio);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___soundsAudio_13;
		EazySoundManager_RemoveNonPersistAudio_m8FF77D2FAE0B12FEB0E904B1644A39056A1EC9CA(L_1, NULL);
		// RemoveNonPersistAudio(UISoundsAudio);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___UISoundsAudio_14;
		EazySoundManager_RemoveNonPersistAudio_m8FF77D2FAE0B12FEB0E904B1644A39056A1EC9CA(L_2, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_Update_m50A0A2DAECBBAD142E53AAB81DE9B956AA8B7356 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateAllAudio(musicAudio);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___musicAudio_12;
		EazySoundManager_UpdateAllAudio_m57507F1F9F8EFAABC66C1AEFBDEAAB7EE8A5AD21(L_0, NULL);
		// UpdateAllAudio(soundsAudio);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___soundsAudio_13;
		EazySoundManager_UpdateAllAudio_m57507F1F9F8EFAABC66C1AEFBDEAAB7EE8A5AD21(L_1, NULL);
		// UpdateAllAudio(UISoundsAudio);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___UISoundsAudio_14;
		EazySoundManager_UpdateAllAudio_m57507F1F9F8EFAABC66C1AEFBDEAAB7EE8A5AD21(L_2, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio> Hellmade.Sound.EazySoundManager::GetAudioTypeDictionary(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C (int32_t ___audioType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	{
		// Dictionary<int, Audio> audioDict = new Dictionary<int, Audio>();
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C*)il2cpp_codegen_object_new(Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4(L_0, Dictionary_2__ctor_mA2247016DDF6A50C3CB0230CC4003EE7377794A4_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = ___audioType0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_001a:
	{
		// audioDict = musicAudio;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___musicAudio_12;
		V_0 = L_2;
		// break;
		goto IL_0030;
	}

IL_0022:
	{
		// audioDict = soundsAudio;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_3 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___soundsAudio_13;
		V_0 = L_3;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// audioDict = UISoundsAudio;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_4 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___UISoundsAudio_14;
		V_0 = L_4;
	}

IL_0030:
	{
		// return audioDict;
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Hellmade.Sound.EazySoundManager::GetAudioTypeIgnoreDuplicateSetting(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_GetAudioTypeIgnoreDuplicateSetting_m0C6D81F19CEB263A9C75633546B3A7CE9C423ECE (int32_t ___audioType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___audioType0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_0026;
	}

IL_0014:
	{
		// return IgnoreDuplicateMusic;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EazySoundManager_get_IgnoreDuplicateMusic_mB4A5E2A98B04700A2E166211CA9A36C5A7A8335A_inline(NULL);
		return L_1;
	}

IL_001a:
	{
		// return IgnoreDuplicateSounds;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = EazySoundManager_get_IgnoreDuplicateSounds_m7752F4F9C39B61197C5C4C0E6659EA1CA4E8F3A4_inline(NULL);
		return L_2;
	}

IL_0020:
	{
		// return IgnoreDuplicateUISounds;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = EazySoundManager_get_IgnoreDuplicateUISounds_mB1816CB87DFC4085F57E9FD13C6DB7999EDEB7EE_inline(NULL);
		return L_3;
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::UpdateAllAudio(System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_UpdateAllAudio_m57507F1F9F8EFAABC66C1AEFBDEAAB7EE8A5AD21 (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___audioDict0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_2 = NULL;
	{
		// List<int> keys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = ___audioDict0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_1;
		L_1 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_0, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_2, L_1, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_3;
		L_3 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_2, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_0), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_0013_1:
			{
				// foreach (int key in keys)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_0), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_1 = L_4;
				// Audio audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_5 = ___audioDict0;
				int32_t L_6 = V_1;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_7;
				L_7 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_5, L_6, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_2 = L_7;
				// audio.Update();
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_8 = V_2;
				Audio_Update_m4C4C5311F47F375F3125A1E95A2A53331166894A(L_8, NULL);
				// if (!audio.IsPlaying && !audio.Paused)
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_9 = V_2;
				bool L_10;
				L_10 = Audio_get_IsPlaying_m4C066AD515ECD573E8DAFF077DE2C618A7BF7E19_inline(L_9, NULL);
				if (L_10)
				{
					goto IL_005f_1;
				}
			}
			{
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_11 = V_2;
				bool L_12;
				L_12 = Audio_get_Paused_m3BDC28E22CE977F5DBEF3506EF14347FC567CCAA_inline(L_11, NULL);
				if (L_12)
				{
					goto IL_005f_1;
				}
			}
			{
				// Destroy(audio.AudioSource);
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_13 = V_2;
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14;
				L_14 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
				// audioPool.Add(key, audio);
				il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_15 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
				int32_t L_16 = V_1;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_17 = V_2;
				Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256(L_15, L_16, L_17, Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
				// audio.Pooled = true;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_18 = V_2;
				Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B_inline(L_18, (bool)1, NULL);
				// audioDict.Remove(key);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_19 = ___audioDict0;
				int32_t L_20 = V_1;
				bool L_21;
				L_21 = Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5(L_19, L_20, Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
			}

IL_005f_1:
			{
				// foreach (int key in keys)
				bool L_22;
				L_22 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_0), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::RemoveNonPersistAudio(System.Collections.Generic.Dictionary`2<System.Int32,Hellmade.Sound.Audio>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_RemoveNonPersistAudio_m8FF77D2FAE0B12FEB0E904B1644A39056A1EC9CA (Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* ___audioDict0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_2 = NULL;
	int32_t V_3 = 0;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_4 = NULL;
	{
		// List<int> keys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = ___audioDict0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_1;
		L_1 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_0, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_2, L_1, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_3;
		L_3 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_2, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_0), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_0013_1:
			{
				// foreach (int key in keys)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_0), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_1 = L_4;
				// Audio audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_5 = ___audioDict0;
				int32_t L_6 = V_1;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_7;
				L_7 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_5, L_6, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_2 = L_7;
				// if (!audio.Persist && audio.Activated)
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_8 = V_2;
				bool L_9;
				L_9 = Audio_get_Persist_mF928162C5BFB76B4F7310988134AB4DC51FFC49E_inline(L_8, NULL);
				if (L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_10 = V_2;
				bool L_11;
				L_11 = Audio_get_Activated_mAD810CBE710752B61B1BBD658C2707859AF7D855_inline(L_10, NULL);
				if (!L_11)
				{
					goto IL_0046_1;
				}
			}
			{
				// Destroy(audio.AudioSource);
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_12 = V_2;
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13;
				L_13 = Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
				// audioDict.Remove(key);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_14 = ___audioDict0;
				int32_t L_15 = V_1;
				bool L_16;
				L_16 = Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5(L_14, L_15, Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
			}

IL_0046_1:
			{
				// foreach (int key in keys)
				bool L_17;
				L_17 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_0), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// keys = new List<int>(audioPool.Keys);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_18 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_19;
		L_19 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_18, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_20, L_19, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_21;
		L_21 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_20, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_0 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_0), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a9_1;
			}

IL_0076_1:
			{
				// foreach (int key in keys)
				int32_t L_22;
				L_22 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_0), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_3 = L_22;
				// Audio audio = audioPool[key];
				il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_23 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
				int32_t L_24 = V_3;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_25;
				L_25 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_23, L_24, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_4 = L_25;
				// if (!audio.Persist && audio.Activated)
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_26 = V_4;
				bool L_27;
				L_27 = Audio_get_Persist_mF928162C5BFB76B4F7310988134AB4DC51FFC49E_inline(L_26, NULL);
				if (L_27)
				{
					goto IL_00a9_1;
				}
			}
			{
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_28 = V_4;
				bool L_29;
				L_29 = Audio_get_Activated_mAD810CBE710752B61B1BBD658C2707859AF7D855_inline(L_28, NULL);
				if (!L_29)
				{
					goto IL_00a9_1;
				}
			}
			{
				// audioPool.Remove(key);
				il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_30 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
				int32_t L_31 = V_3;
				bool L_32;
				L_32 = Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5(L_30, L_31, Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
			}

IL_00a9_1:
			{
				// foreach (int key in keys)
				bool L_33;
				L_33 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_0), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0076_1;
				}
			}
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Boolean Hellmade.Sound.EazySoundManager::RestoreAudioFromPool(Hellmade.Sound.Audio/AudioType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EazySoundManager_RestoreAudioFromPool_m56B8005967B6A165ECEB094337E7BBCADF004955 (int32_t ___audioType0, int32_t ___audioID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(audioPool.ContainsKey(audioID))
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_1 = ___audioID1;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC(L_0, L_1, Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_3 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_4;
		L_4 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_3, NULL);
		// audioDict.Add(audioID, audioPool[audioID]);
		int32_t L_5 = ___audioID1;
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_6 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_7 = ___audioID1;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_8;
		L_8 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_6, L_7, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256(L_4, L_5, L_8, Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
		// audioPool.Remove(audioID);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_9 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_10 = ___audioID1;
		bool L_11;
		L_11 = Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5(L_9, L_10, Dictionary_2_Remove_m3370B7A323320C12C787C6B28C8148B2D20CC1D5_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0032:
	{
		// return false;
		return (bool)0;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_m61FFA9C490020B4C640DB9F3E84CBF6C2EE58BF2 (int32_t ___audioID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_0 = NULL;
	{
		// audio = GetMusicAudio(audioID);
		int32_t L_0 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetMusicAudio_m171981211587BD5A8B2B50E0F25AD211E8C7B611(L_0, NULL);
		V_0 = L_1;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// audio = GetSoundAudio(audioID);
		int32_t L_4 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_5;
		L_5 = EazySoundManager_GetSoundAudio_mC2CBDF9E85C3D1A172F634ECB995C9AC9CF42B49(L_4, NULL);
		V_0 = L_5;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_7 = V_0;
		return L_7;
	}

IL_0018:
	{
		// audio = GetUISoundAudio(audioID);
		int32_t L_8 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
		L_9 = EazySoundManager_GetUISoundAudio_mCF5AAF3A17BF814A78E5EBB8BA48374E8FAD6C9F(L_8, NULL);
		V_0 = L_9;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0024;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_11 = V_0;
		return L_11;
	}

IL_0024:
	{
		// return null;
		return (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_m7365851F4A6D32D30DF29BC28B0AAC8AA4455FC2 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_0 = NULL;
	{
		// Audio audio = GetMusicAudio(audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetMusicAudio_m3548262666C4E1DD2ACC51D9C26010680D2C9F0E(L_0, NULL);
		V_0 = L_1;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// audio = GetSoundAudio(audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_5;
		L_5 = EazySoundManager_GetSoundAudio_m581A07048450410EB7723B23C4224DF1B25997E9(L_4, NULL);
		V_0 = L_5;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_7 = V_0;
		return L_7;
	}

IL_0018:
	{
		// audio = GetUISoundAudio(audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
		L_9 = EazySoundManager_GetUISoundAudio_mD1E42AA944DCA90B5556417029C0D469588DB72F(L_8, NULL);
		V_0 = L_9;
		// if (audio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0024;
		}
	}
	{
		// return audio;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_11 = V_0;
		return L_11;
	}

IL_0024:
	{
		// return null;
		return (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetMusicAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetMusicAudio_m171981211587BD5A8B2B50E0F25AD211E8C7B611 (int32_t ___audioID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.Music, true, audioID);
		int32_t L_0 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC(0, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetMusicAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetMusicAudio_m3548262666C4E1DD2ACC51D9C26010680D2C9F0E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.Music, true, audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445(0, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetSoundAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetSoundAudio_mC2CBDF9E85C3D1A172F634ECB995C9AC9CF42B49 (int32_t ___audioID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.Sound, true, audioID);
		int32_t L_0 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC(1, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetSoundAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetSoundAudio_m581A07048450410EB7723B23C4224DF1B25997E9 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.Sound, true, audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445(1, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetUISoundAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetUISoundAudio_mCF5AAF3A17BF814A78E5EBB8BA48374E8FAD6C9F (int32_t ___audioID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.UISound, true, audioID);
		int32_t L_0 = ___audioID0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC(2, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetUISoundAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetUISoundAudio_mD1E42AA944DCA90B5556417029C0D469588DB72F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAudio(Audio.AudioType.UISound, true, audioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_1;
		L_1 = EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445(2, (bool)1, L_0, NULL);
		return L_1;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(Hellmade.Sound.Audio/AudioType,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC (int32_t ___audioType0, bool ___usePool1, int32_t ___audioID2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_0 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1;
		L_1 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_0, NULL);
		V_0 = L_1;
		// if (audioDict.ContainsKey(audioID))
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = V_0;
		int32_t L_3 = ___audioID2;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC(L_2, L_3, Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return audioDict[audioID];
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_5 = V_0;
		int32_t L_6 = ___audioID2;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_7;
		L_7 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_5, L_6, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		return L_7;
	}

IL_0018:
	{
		// if (usePool && audioPool.ContainsKey(audioID) && audioPool[audioID].Type == audioType)
		bool L_8 = ___usePool1;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_9 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_10 = ___audioID2;
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC(L_9, L_10, Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_12 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_13 = ___audioID2;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_14;
		L_14 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_12, L_13, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline(L_14, NULL);
		int32_t L_16 = ___audioType0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0047;
		}
	}
	{
		// return audioPool[audioID];
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_17 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		int32_t L_18 = ___audioID2;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_19;
		L_19 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_17, L_18, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		return L_19;
	}

IL_0047:
	{
		// return null;
		return (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
	}
}
// Hellmade.Sound.Audio Hellmade.Sound.EazySoundManager::GetAudio(Hellmade.Sound.Audio/AudioType,System.Boolean,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Audio_t645B7D470099079857386A95B679C828C798D13A* EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445 (int32_t ___audioType0, bool ___usePool1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_5 = NULL;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_6 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B3_0 = NULL;
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_0 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1;
		L_1 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_0, NULL);
		V_0 = L_1;
		// List<int> audioTypeKeys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = V_0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_3;
		L_3 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_2, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_4, L_3, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		V_1 = L_4;
		// List<int> poolKeys = new List<int>(audioPool.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_5 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_6;
		L_6 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_5, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_7, L_6, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		V_2 = L_7;
		// List<int> keys = usePool ? audioTypeKeys.Concat(poolKeys).ToList() : audioTypeKeys;
		bool L_8 = ___usePool1;
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = V_1;
		G_B3_0 = L_9;
		goto IL_0035;
	}

IL_0029:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = V_2;
		RuntimeObject* L_12;
		L_12 = Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328(L_10, L_11, Enumerable_Concat_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA7FF4C91962A91184C9B0F64BB0C414F1401C328_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13;
		L_13 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419(L_12, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5B5E5EC930C4D504B672EC353CF5936D1EB8D419_RuntimeMethod_var);
		G_B3_0 = L_13;
	}

IL_0035:
	{
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_14;
		L_14 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(G_B3_0, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_3), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a3_1;
			}

IL_003d_1:
			{
				// foreach (int key in keys)
				int32_t L_15;
				L_15 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_3), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_4 = L_15;
				// Audio audio = null;
				V_5 = (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
				// if (audioDict.ContainsKey(key))
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_16 = V_0;
				int32_t L_17 = V_4;
				bool L_18;
				L_18 = Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC(L_16, L_17, Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
				if (!L_18)
				{
					goto IL_005f_1;
				}
			}
			{
				// audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_19 = V_0;
				int32_t L_20 = V_4;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_21;
				L_21 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_19, L_20, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_5 = L_21;
				goto IL_007b_1;
			}

IL_005f_1:
			{
				// else if(audioPool.ContainsKey(key))
				il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_22 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
				int32_t L_23 = V_4;
				bool L_24;
				L_24 = Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC(L_22, L_23, Dictionary_2_ContainsKey_mE56B3141631E3CCE400D71D2842A97F7067AB2FC_RuntimeMethod_var);
				if (!L_24)
				{
					goto IL_007b_1;
				}
			}
			{
				// audio = audioPool[key];
				il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_25 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___audioPool_15;
				int32_t L_26 = V_4;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_27;
				L_27 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_25, L_26, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_5 = L_27;
			}

IL_007b_1:
			{
				// if (audio == null)
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_28 = V_5;
				if (L_28)
				{
					goto IL_0084_1;
				}
			}
			{
				// return null;
				V_6 = (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
				goto IL_00be;
			}

IL_0084_1:
			{
				// if (audio.Clip == audioClip && audio.Type == audioType)
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_29 = V_5;
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_30;
				L_30 = Audio_get_Clip_m5818DA9540EE30CCADF7AD97306E31DA996499CD_inline(L_29, NULL);
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31 = ___audioClip2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_32;
				L_32 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_30, L_31, NULL);
				if (!L_32)
				{
					goto IL_00a3_1;
				}
			}
			{
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_33 = V_5;
				int32_t L_34;
				L_34 = Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline(L_33, NULL);
				int32_t L_35 = ___audioType0;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_00a3_1;
				}
			}
			{
				// return audio;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_36 = V_5;
				V_6 = L_36;
				goto IL_00be;
			}

IL_00a3_1:
			{
				// foreach (int key in keys)
				bool L_37;
				L_37 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_3), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// return null;
		return (Audio_t645B7D470099079857386A95B679C828C798D13A*)NULL;
	}

IL_00be:
	{
		// }
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_38 = V_6;
		return L_38;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareMusic_m4E05646C755ED85D8E7419BF3E428AC0D199468F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Music, clip, 1f, false, false, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(0, L_0, (1.0f), (bool)0, (bool)0, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareMusic(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareMusic_mB6EACA97364DF6D1EAAA11E9A562CBDDA5AD0E85 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Music, clip, volume, false, false, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(0, L_0, L_1, (bool)0, (bool)0, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareMusic_m3A610C992105F2C068E544CB78E5F4BE6168A4F6 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Music, clip, volume, loop, persist, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(0, L_0, L_1, L_2, L_3, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_4;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareMusic_m44B70CF9D8FC0EA5ACEC2592D5C567677D9982BE (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, float ___fadeInSeconds4, float ___fadeOutSeconds5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Music, clip, volume, loop, persist, fadeInSeconds, fadeOutSeconds, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		float L_4 = ___fadeInSeconds4;
		float L_5 = ___fadeOutSeconds5;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(0, L_0, L_1, L_2, L_3, L_4, L_5, (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_6;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareMusic_mE217D84E30F2FA3DCD7DB1D623B3D569740E3321 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, float ___fadeInSeconds4, float ___fadeOutSeconds5, float ___currentMusicfadeOutSeconds6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Music, clip, volume, loop, persist, fadeInSeconds, fadeOutSeconds, currentMusicfadeOutSeconds, sourceTransform);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		float L_4 = ___fadeInSeconds4;
		float L_5 = ___fadeOutSeconds5;
		float L_6 = ___currentMusicfadeOutSeconds6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___sourceTransform7;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(0, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareSound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareSound_mF25A3335D3DF4EBEA7556D83DC8C4CA77D8B7269 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Sound, clip, 1f, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(1, L_0, (1.0f), (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareSound(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareSound_m1AD01250B810AADFD164EFC710C4FA1A3A0E71D0 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Sound, clip, volume, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(1, L_0, L_1, (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareSound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareSound_mAF9B813649D97DB343F49A5E3CA411CA20A0D7BA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, bool ___loop1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Sound, clip, 1f, loop, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		bool L_1 = ___loop1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(1, L_0, (1.0f), L_1, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareSound(UnityEngine.AudioClip,System.Single,System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareSound_m47444EEDA5F14D51054A8146493CF3E331B240AF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.Sound, clip, volume, loop, false, 0f, 0f, -1f, sourceTransform);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___sourceTransform3;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(1, L_0, L_1, L_2, (bool)0, (0.0f), (0.0f), (-1.0f), L_3, NULL);
		return L_4;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareUISound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareUISound_m8DA74D2F460BF50653336A44DBD416411D4EA950 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.UISound, clip, 1f, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(2, L_0, (1.0f), (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareUISound(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareUISound_mE53E02522FA3AEF6B1004CAA2116A567C64B5360 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PrepareAudio(Audio.AudioType.UISound, clip, volume, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(2, L_0, L_1, (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PrepareAudio(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C (int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volume2, bool ___loop3, bool ___persist4, float ___fadeInSeconds5, float ___fadeOutSeconds6, float ___currentMusicfadeOutSeconds7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD902BB9DCC3C5800301ED9E3B397D29BD4471078);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_1 = NULL;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_2 = NULL;
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("[Eazy Sound Manager] Audio clip is null", clip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___clip1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteralD902BB9DCC3C5800301ED9E3B397D29BD4471078, L_2, NULL);
	}

IL_0014:
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_3 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_4;
		L_4 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_3, NULL);
		V_0 = L_4;
		// bool ignoreDuplicateAudio = GetAudioTypeIgnoreDuplicateSetting(audioType);
		int32_t L_5 = ___audioType0;
		bool L_6;
		L_6 = EazySoundManager_GetAudioTypeIgnoreDuplicateSetting_m0C6D81F19CEB263A9C75633546B3A7CE9C423ECE(L_5, NULL);
		// if (ignoreDuplicateAudio)
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// Audio duplicateAudio = GetAudio(audioType, true, clip);
		int32_t L_7 = ___audioType0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___clip1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
		L_9 = EazySoundManager_GetAudio_mA0F435A333A33C5CAFBD3EB5777AF55635FA3445(L_7, (bool)1, L_8, NULL);
		V_2 = L_9;
		// if(duplicateAudio != null)
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// return duplicateAudio.AudioID;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_11 = V_2;
		int32_t L_12;
		L_12 = Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline(L_11, NULL);
		return L_12;
	}

IL_0036:
	{
		// Audio audio = new Audio(audioType, clip, loop, persist, volume, fadeInSeconds, fadeOutSeconds, sourceTransform);
		int32_t L_13 = ___audioType0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = ___clip1;
		bool L_15 = ___loop3;
		bool L_16 = ___persist4;
		float L_17 = ___volume2;
		float L_18 = ___fadeInSeconds5;
		float L_19 = ___fadeOutSeconds6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ___sourceTransform8;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_21 = (Audio_t645B7D470099079857386A95B679C828C798D13A*)il2cpp_codegen_object_new(Audio_t645B7D470099079857386A95B679C828C798D13A_il2cpp_TypeInfo_var);
		Audio__ctor_m98D6789A8FE8426039097D583BCF12E88331669B(L_21, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		V_1 = L_21;
		// audioDict.Add(audio.AudioID, audio);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_22 = V_0;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_23 = V_1;
		int32_t L_24;
		L_24 = Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline(L_23, NULL);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_25 = V_1;
		Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256(L_22, L_24, L_25, Dictionary_2_Add_m20897AFED958865212049C8F415337DF43A7A256_RuntimeMethod_var);
		// return audio.AudioID;
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_26 = V_1;
		int32_t L_27;
		L_27 = Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline(L_26, NULL);
		return L_27;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_m0CE268E4215D7EAA848E45ACE4AD37CEBA78908E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Music, clip, 1f, false, false, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(0, L_0, (1.0f), (bool)0, (bool)0, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_mFDE05958D3EA0751D6C3751C55FF04BF1208DE90 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Music, clip, volume, false, false, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(0, L_0, L_1, (bool)0, (bool)0, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_mA6FF33371689AB3F6368149B25B6F1EE9866F6DB (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Music, clip, volume, loop, persist, 1f, 1f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(0, L_0, L_1, L_2, L_3, (1.0f), (1.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_4;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_m9789BE6DC55E93933A9D8F60F1262EEA0B0CA01C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, float ___fadeInSeconds4, float ___fadeOutSeconds5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Music, clip, volume, loop, persist, fadeInSeconds, fadeOutSeconds, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		float L_4 = ___fadeInSeconds4;
		float L_5 = ___fadeOutSeconds5;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(0, L_0, L_1, L_2, L_3, L_4, L_5, (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_6;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayMusic(UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayMusic_m908A6B55DF5620635DDA3A535834FBE9D6DC1524 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, bool ___persist3, float ___fadeInSeconds4, float ___fadeOutSeconds5, float ___currentMusicfadeOutSeconds6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Music, clip, volume, loop, persist, fadeInSeconds, fadeOutSeconds, currentMusicfadeOutSeconds, sourceTransform);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		bool L_3 = ___persist3;
		float L_4 = ___fadeInSeconds4;
		float L_5 = ___fadeOutSeconds5;
		float L_6 = ___currentMusicfadeOutSeconds6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___sourceTransform7;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(0, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlaySound_m6978631AC6019CBA2A8EFB217720D7FF73181E6F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Sound, clip, 1f, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(1, L_0, (1.0f), (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlaySound(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlaySound_mF77EF92CAA26EDDF48A05C773805123E8952327B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Sound, clip, volume, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(1, L_0, L_1, (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlaySound(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlaySound_mE4C34D4C671C47A76B6EAEC03965C467866A2DDA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, bool ___loop1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Sound, clip, 1f, loop, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		bool L_1 = ___loop1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(1, L_0, (1.0f), L_1, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlaySound(UnityEngine.AudioClip,System.Single,System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlaySound_m66E0614A1ECC2C0BF7AC77C1FC25F3C35FAE4366 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, bool ___loop2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.Sound, clip, volume, loop, false, 0f, 0f, -1f, sourceTransform);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		bool L_2 = ___loop2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___sourceTransform3;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(1, L_0, L_1, L_2, (bool)0, (0.0f), (0.0f), (-1.0f), L_3, NULL);
		return L_4;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayUISound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayUISound_m0C7F47F53C5DB7A71DDB84AB5653CDB8DABD3640 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.UISound, clip, 1f, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(2, L_0, (1.0f), (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayUISound(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayUISound_m055ACE757D28358F5DF272E803E174123926B48B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayAudio(Audio.AudioType.UISound, clip, volume, false, false, 0f, 0f, -1f, null);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		float L_1 = ___volume1;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498(2, L_0, L_1, (bool)0, (bool)0, (0.0f), (0.0f), (-1.0f), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		return L_2;
	}
}
// System.Int32 Hellmade.Sound.EazySoundManager::PlayAudio(Hellmade.Sound.Audio/AudioType,UnityEngine.AudioClip,System.Single,System.Boolean,System.Boolean,System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EazySoundManager_PlayAudio_mA7CED4C00D927CF875F375479ED4F5E059930498 (int32_t ___audioType0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volume2, bool ___loop3, bool ___persist4, float ___fadeInSeconds5, float ___fadeOutSeconds6, float ___currentMusicfadeOutSeconds7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sourceTransform8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int audioID = PrepareAudio(audioType, clip, volume, loop, persist, fadeInSeconds, fadeOutSeconds, currentMusicfadeOutSeconds, sourceTransform);
		int32_t L_0 = ___audioType0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip1;
		float L_2 = ___volume2;
		bool L_3 = ___loop3;
		bool L_4 = ___persist4;
		float L_5 = ___fadeInSeconds5;
		float L_6 = ___fadeOutSeconds6;
		float L_7 = ___currentMusicfadeOutSeconds7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___sourceTransform8;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = EazySoundManager_PrepareAudio_mBB9615D38D4541426CC80CD08142E7132F2CF70C(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// if (audioType == Audio.AudioType.Music)
		int32_t L_10 = ___audioType0;
		if (L_10)
		{
			goto IL_001e;
		}
	}
	{
		// StopAllMusic(currentMusicfadeOutSeconds);
		float L_11 = ___currentMusicfadeOutSeconds7;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllMusic_m36842F8A4E6C57DE9206770BE0B50A79FF7C7556(L_11, NULL);
	}

IL_001e:
	{
		// GetAudio(audioType, false, audioID).Play();
		int32_t L_12 = ___audioType0;
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Audio_t645B7D470099079857386A95B679C828C798D13A* L_14;
		L_14 = EazySoundManager_GetAudio_m49AE963A9847A1BEB9E40B0733A3E163FCA01BDC(L_12, (bool)0, L_13, NULL);
		Audio_Play_m508109D28BC17E7824E3320B9321FDADE1AB0BBC(L_14, NULL);
		// return audioID;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAll_m01D8877B48261BA313BC9DDFE2A9450D353D8881 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAll(-1f);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAll_m467B71AB4A7AFD3A2F56AE8FF8E80083D45BC273((-1.0f), NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAll_m467B71AB4A7AFD3A2F56AE8FF8E80083D45BC273 (float ___musicFadeOutSeconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllMusic(musicFadeOutSeconds);
		float L_0 = ___musicFadeOutSeconds0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllMusic_m36842F8A4E6C57DE9206770BE0B50A79FF7C7556(L_0, NULL);
		// StopAllSounds();
		EazySoundManager_StopAllSounds_mBF2F693C16FA490D1648CC6A0D69001666BE1484(NULL);
		// StopAllUISounds();
		EazySoundManager_StopAllUISounds_mA50B42B0D8F656CFA1AFDD3EB6025BD1BDE58894(NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAllMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllMusic_mFF6DD97DC61FB902E6694E4EED324F6C4D2A2E50 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllAudio(Audio.AudioType.Music, -1f);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C(0, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAllMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllMusic_m36842F8A4E6C57DE9206770BE0B50A79FF7C7556 (float ___fadeOutSeconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllAudio(Audio.AudioType.Music, fadeOutSeconds);
		float L_0 = ___fadeOutSeconds0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C(0, L_0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllSounds_mBF2F693C16FA490D1648CC6A0D69001666BE1484 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllAudio(Audio.AudioType.Sound, -1f);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C(1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllUISounds_mA50B42B0D8F656CFA1AFDD3EB6025BD1BDE58894 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllAudio(Audio.AudioType.UISound, -1f);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C(2, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::StopAllAudio(Hellmade.Sound.Audio/AudioType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_StopAllAudio_mAA4EB85146A4C51799F603B0421DE1DCD59DB01C (int32_t ___audioType0, float ___fadeOutSeconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Audio_t645B7D470099079857386A95B679C828C798D13A* V_3 = NULL;
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_0 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1;
		L_1 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_0, NULL);
		V_0 = L_1;
		// List<int> keys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = V_0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_3;
		L_3 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_2, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_4, L_3, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_5;
		L_5 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_4, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_1), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_001a_1:
			{
				// foreach (int key in keys)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_1), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_2 = L_6;
				// Audio audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_7 = V_0;
				int32_t L_8 = V_2;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
				L_9 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_7, L_8, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				V_3 = L_9;
				// if (fadeOutSeconds > 0)
				float L_10 = ___fadeOutSeconds1;
				if ((!(((float)L_10) > ((float)(0.0f)))))
				{
					goto IL_0039_1;
				}
			}
			{
				// audio.FadeOutSeconds = fadeOutSeconds;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_11 = V_3;
				float L_12 = ___fadeOutSeconds1;
				Audio_set_FadeOutSeconds_m8191CC8562D03BAFC54F12CC0E7123D9E98B1D55_inline(L_11, L_12, NULL);
			}

IL_0039_1:
			{
				// audio.Stop();
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_13 = V_3;
				Audio_Stop_mB0EDFC4B8FE86E0182668F94816295FF0ACE3770(L_13, NULL);
			}

IL_003f_1:
			{
				// foreach (int key in keys)
				bool L_14;
				L_14 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_1), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::PauseAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAll_m6497D2FD45417640BBE27393205A0189940E5BA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseAllMusic();
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_PauseAllMusic_m6BBBB7ACA760D2629899F60BFAF7C230DF101B1D(NULL);
		// PauseAllSounds();
		EazySoundManager_PauseAllSounds_m2E892464BB5154C25614FDD2C810A82BB4FE536F(NULL);
		// PauseAllUISounds();
		EazySoundManager_PauseAllUISounds_m1ACC7B6FA334107AF21598ED7B98AFD21605FA72(NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::PauseAllMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllMusic_m6BBBB7ACA760D2629899F60BFAF7C230DF101B1D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseAllAudio(Audio.AudioType.Music);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_PauseAllAudio_mB4AD89EDB1CE4091C7A79C4EEDECE0257534DB4D(0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::PauseAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllSounds_m2E892464BB5154C25614FDD2C810A82BB4FE536F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseAllAudio(Audio.AudioType.Sound);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_PauseAllAudio_mB4AD89EDB1CE4091C7A79C4EEDECE0257534DB4D(1, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::PauseAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllUISounds_m1ACC7B6FA334107AF21598ED7B98AFD21605FA72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseAllAudio(Audio.AudioType.UISound);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_PauseAllAudio_mB4AD89EDB1CE4091C7A79C4EEDECE0257534DB4D(2, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::PauseAllAudio(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_PauseAllAudio_mB4AD89EDB1CE4091C7A79C4EEDECE0257534DB4D (int32_t ___audioType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_0 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1;
		L_1 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_0, NULL);
		V_0 = L_1;
		// List<int> keys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = V_0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_3;
		L_3 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_2, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_4, L_3, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_5;
		L_5 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_4, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_1), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_001a_1:
			{
				// foreach (int key in keys)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_1), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_2 = L_6;
				// Audio audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_7 = V_0;
				int32_t L_8 = V_2;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
				L_9 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_7, L_8, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				// audio.Pause();
				Audio_Pause_m9B2CCF66F33E9F85E7D5A1AD4206D8D2EF0319F6(L_9, NULL);
			}

IL_002e_1:
			{
				// foreach (int key in keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_1), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::ResumeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAll_m5938D96D01380BBCB53F3B6CB3F68EAF54A663AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResumeAllMusic();
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_ResumeAllMusic_m3212BB18A22B4513BDEAA4DFF78B9ED638C222B6(NULL);
		// ResumeAllSounds();
		EazySoundManager_ResumeAllSounds_m763598A097D1B44F52946EEB6721DEDAEDE505D3(NULL);
		// ResumeAllUISounds();
		EazySoundManager_ResumeAllUISounds_m75EB6AC93E9414D0B0EAC8BDD6374707360470A3(NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllMusic_m3212BB18A22B4513BDEAA4DFF78B9ED638C222B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResumeAllAudio(Audio.AudioType.Music);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_ResumeAllAudio_mBF0053BE09E243782F2FD55109F41269B7F43B98(0, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllSounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllSounds_m763598A097D1B44F52946EEB6721DEDAEDE505D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResumeAllAudio(Audio.AudioType.Sound);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_ResumeAllAudio_mBF0053BE09E243782F2FD55109F41269B7F43B98(1, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllUISounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllUISounds_m75EB6AC93E9414D0B0EAC8BDD6374707360470A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResumeAllAudio(Audio.AudioType.UISound);
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		EazySoundManager_ResumeAllAudio_mBF0053BE09E243782F2FD55109F41269B7F43B98(2, NULL);
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::ResumeAllAudio(Hellmade.Sound.Audio/AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager_ResumeAllAudio_mBF0053BE09E243782F2FD55109F41269B7F43B98 (int32_t ___audioType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* V_0 = NULL;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Dictionary<int, Audio> audioDict = GetAudioTypeDictionary(audioType);
		int32_t L_0 = ___audioType0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_1;
		L_1 = EazySoundManager_GetAudioTypeDictionary_m810CE9B46BF121A8129D7F2C4D994894DCA0DA0C(L_0, NULL);
		V_0 = L_1;
		// List<int> keys = new List<int>(audioDict.Keys);
		Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_2 = V_0;
		KeyCollection_t317AC05BDD028251E54AD8573BFE1DB5A02AF82C* L_3;
		L_3 = Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06(L_2, Dictionary_2_get_Keys_mED1B1ED9823E4FCA8F9CFE1F674782DBCD98AD06_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_4, L_3, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		// foreach (int key in keys)
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_5;
		L_5 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_4, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_1), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_001a_1:
			{
				// foreach (int key in keys)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_1), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_2 = L_6;
				// Audio audio = audioDict[key];
				Dictionary_2_t378B58EC0F024E88ED5FD99656B93B6D11C8E49C* L_7 = V_0;
				int32_t L_8 = V_2;
				Audio_t645B7D470099079857386A95B679C828C798D13A* L_9;
				L_9 = Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B(L_7, L_8, Dictionary_2_get_Item_m8D8A9B2124D5D39DCB5B26B81F2F2E6ADAE4CA8B_RuntimeMethod_var);
				// audio.Resume();
				Audio_Resume_m948F4245560B61967CB21617802A502D5A810588(L_9, NULL);
			}

IL_002e_1:
			{
				// foreach (int key in keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_1), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Hellmade.Sound.EazySoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EazySoundManager__ctor_m6934B45527B605EFDA0828354A4D5301CEBF3B97 (EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalMusicVolume_mDCB981B187F5256424B037A3AD1D1625A18B8354_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalMusicVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalMusicVolumeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalSoundsVolume_m7FC902F282E514D49EF12B921DF8E30D87B436F4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalSoundsVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalSoundsVolumeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalMusicVolume_m64057054C58A0D5798C500C5042FB6C06EFD44CE_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalMusicVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalMusicVolumeU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalSoundsVolume_m02C4C426E6A58BB1746CB6564F3B92A2830D6F86_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalSoundsVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalSoundsVolumeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) 
{
	{
		// return m_Offset;
		float L_0 = __this->___m_Offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Audio_get_AudioSource_m2A357E1126AD62357831F5AC3AE9BCA49B7F082D_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_AudioID_m11454443A6057925232250F704A8C1527AD6684C_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AudioID { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CAudioIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Type_m85BEEB19CCCD190491B99B412BBB38F9B6DB0D39_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Persist_m83F8CF4E028A1A43D87E60923AF380A224587047_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Persist { get; set; }
		bool L_0 = ___value0;
		__this->___U3CPersistU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_FadeInSeconds_m6615BAAE2804CF55334EA8BCB8C32C7FF9019609_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FadeInSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CFadeInSecondsU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_FadeOutSeconds_m8191CC8562D03BAFC54F12CC0E7123D9E98B1D55_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FadeOutSeconds { get; set; }
		float L_0 = ___value0;
		__this->___U3CFadeOutSecondsU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Volume_mED0D8FE0074CC4FC38B86E0B6C40FDA83D13A25F_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Volume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CVolumeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Pooled_m556D14B54232DB50641556047640A0CDAB728D4B_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Pooled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CPooledU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_IsPlaying_m25915E96CB6B38556DDB06F2EA3530CA810EFD4F_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPlayingU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Paused_m86A08D2FE5F1AB6BD9C973A5F18A5A4DA795238A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Paused { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CPausedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Activated_mDB268898D2B5F4CC847289A32A3EC84F3BEC21C4_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Activated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CActivatedU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Audio_get_SourceTransform_m8D3E348298E64E8395EF895BE129E5D38A41C5AD_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return sourceTransform; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___sourceTransform_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_AudioSource_m3EE81DCDFCD4979FADED991F384A333BAEA2C9B3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Audio_get_Clip_m5818DA9540EE30CCADF7AD97306E31DA996499CD_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return clip; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___clip_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Loop_mA8B1B960CEAD99ACD294DC2F85C589EEB2552980_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return loop; }
		bool L_0 = __this->___loop_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Mute_m5D8381EEB32634313C6F1293DD946F92166663A0_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return mute; }
		bool L_0 = __this->___mute_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Volume_m8F43FF28F923B3A052E6E85D411EF0EB3CA6B8C7_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float Volume { get; private set; }
		float L_0 = __this->___U3CVolumeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_Priority_mF6C143E7B806BF0674F9FB09995650260E4B6FDA_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return priority; }
		int32_t L_0 = __this->___priority_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Pitch_mD7BB03B0D7652DB0E7F22D072F6170239E9C7578_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return pitch; }
		float L_0 = __this->___pitch_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_StereoPan_m56A9D7147A46E1E87475D6927FB407696F453D48_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return stereoPan; }
		float L_0 = __this->___stereoPan_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_SpatialBlend_m330EB53A6F111E7AC09DF25C546C3B7CD39F14C3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return spatialBlend; }
		float L_0 = __this->___spatialBlend_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_ReverbZoneMix_m5527687F7890F13F33879D40697CB2BD5E26FDF3_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return reverbZoneMix; }
		float L_0 = __this->___reverbZoneMix_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_DopplerLevel_mC426C00AC03046210B5CC079119591335C2DD12B_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return dopplerLevel; }
		float L_0 = __this->___dopplerLevel_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Spread_mFF420F21BF184FAB106696AB9468FE783B8A7060_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return spread; }
		float L_0 = __this->___spread_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_RolloffMode_m6C41DC00552AE7C22E839FBB2192CDBAFA249AF9_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return rolloffMode; }
		int32_t L_0 = __this->___rolloffMode_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Max3DDistance_mE54FE7A720532D56D44848A889541B761AE5EBBB_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return max3DDistance; }
		float L_0 = __this->___max3DDistance_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_Min3DDistance_m57D62FB705E6EB5DB39A830BB6B4A28275DDE7DB_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// get { return min3DDistance; }
		float L_0 = __this->___min3DDistance_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Pooled_mEA01A1B7F5A6899EB260A337E377F34E70CC1EBF_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Pooled { get; set; }
		bool L_0 = __this->___U3CPooledU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_Type_mE329FB5F665C9EF1081C201AFA20098A34CF86A6_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public AudioType Type { get; private set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Audio_get_AudioID_m458B98555E8CABD0227BAB0ED09A394EBB52A25A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public int AudioID { get; private set; }
		int32_t L_0 = __this->___U3CAudioIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Audio_set_Stopping_m05B42920BEB7F91318DC3091A8E76FCDF4E17965_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Stopping { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CStoppingU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_FadeOutSeconds_m373D153EB89BDCB8C309775B81E2F553A59326CE_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float FadeOutSeconds { get; set; }
		float L_0 = __this->___U3CFadeOutSecondsU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Audio_get_FadeInSeconds_m69DFC297FD33F7AF732028D54EBC135CCADB0745_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public float FadeInSeconds { get; set; }
		float L_0 = __this->___U3CFadeInSecondsU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalVolume_mDD81CC07D3789A3A600D97C87C85792821D5C454_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalVolumeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EazySoundManager_get_GlobalUISoundsVolume_m80242FFC1EB86BBC65EDE7E5A610777E69504464_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalUISoundsVolume { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		float L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalUISoundsVolumeU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Stopping_m6B95B658E163EB22DE1BC488F1D75749B8A4A04A_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopping { get; private set; }
		bool L_0 = __this->___U3CStoppingU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_IsPlaying_m4C066AD515ECD573E8DAFF077DE2C618A7BF7E19_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get; private set; }
		bool L_0 = __this->___U3CIsPlayingU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalVolume_mCA22728FB5736F0B5AF5A8A638EB51E74EE39029_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalVolumeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_GlobalUISoundsVolume_m71C0CC9756B2342739CC80AFE56F775C89D0764A_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float GlobalUISoundsVolume { get; set; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CGlobalUISoundsVolumeU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateMusic_m4C3F3385F6B48AEC797E1C08D6C966B7E412287C_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateMusic { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateMusicU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateSounds_m09CCB53F544F509C784175DCEA4FB36BA3B0BF8B_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateSounds { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateSoundsU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EazySoundManager_set_IgnoreDuplicateUISounds_m0EEEB586919B53FD314002182A7B23E94F3EB57F_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateUISounds { get; set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateUISoundsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateMusic_mB4A5E2A98B04700A2E166211CA9A36C5A7A8335A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateMusic { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateMusicU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateSounds_m7752F4F9C39B61197C5C4C0E6659EA1CA4E8F3A4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateSounds { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateSoundsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EazySoundManager_get_IgnoreDuplicateUISounds_mB1816CB87DFC4085F57E9FD13C6DB7999EDEB7EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IgnoreDuplicateUISounds { get; set; }
		il2cpp_codegen_runtime_class_init_inline(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var);
		bool L_0 = ((EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_StaticFields*)il2cpp_codegen_static_fields_for(EazySoundManager_t5779687D9B05ECE4BED073AB4726B30FEF36336C_il2cpp_TypeInfo_var))->___U3CIgnoreDuplicateUISoundsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Paused_m3BDC28E22CE977F5DBEF3506EF14347FC567CCAA_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Paused { get; private set; }
		bool L_0 = __this->___U3CPausedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Persist_mF928162C5BFB76B4F7310988134AB4DC51FFC49E_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Persist { get; set; }
		bool L_0 = __this->___U3CPersistU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Audio_get_Activated_mAD810CBE710752B61B1BBD658C2707859AF7D855_inline (Audio_t645B7D470099079857386A95B679C828C798D13A* __this, const RuntimeMethod* method) 
{
	{
		// public bool Activated { get; private set; }
		bool L_0 = __this->___U3CActivatedU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
