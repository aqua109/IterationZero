﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.IDictionary`2<System.Int32,System.Single>
struct IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>
struct IDictionary_2_tA359427016452362582134A8C14496A1241B840D;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>
struct IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Single>
struct IReadOnlyDictionary_2_t22770914929B91E35349ACABE9A37FA137982FCC;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Int32>
struct IReadOnlyDictionary_2_t1C4123878E32982834A2A09112662B26EFEB6F76;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>[]
struct KeyValuePair_2U5BU5D_t45DDB1A919CBFE7CE71B03DC9006116067B9C523;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t68DC2D955495C2B4B4365198D4FAF3EF23A46AA8;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Single>
struct KeyCollection_t3AD7D52EDD451623102B446084F412525ED6D11A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Boolean>
struct KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t9CCE8E45378B67DF35484B9C932F5CE90705AAA0;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Single>
struct ValueCollection_t672017E89E9C4B9F76031F0DB85E50323C6F86D2;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Boolean>
struct ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_t5F985DA769EEE3F55CEF89134D703F99503BC0EB;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Single>
struct ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Int32>
struct ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Single>
struct KeyValuePairComparer_tA31B4659387FCA285FC8C74289415A4588F68E12;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Boolean>
struct KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Int32>
struct KeyValuePairComparer_tD3CA4F29E6034654C1E8EEC808DC2F41ED95BADC;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>
struct ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>
struct ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;

extern RuntimeClass* ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t66D7AFE267702A10D6A1ACDAE99431248455CC03_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_tC4341EA022F3778DA6E0CB04E21603111212D6E8_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tCE76FAABEEC4D30606A1670A1462A87EC5ACE275_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tE50245A875503F6D2A922040575FE253AFE460F8_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t1C4123878E32982834A2A09112662B26EFEB6F76_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t22770914929B91E35349ACABE9A37FA137982FCC_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m579011688C0503B49AA7C4740513CB89507A7627_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m92969230EBA2006ED7AFEE3F6F0FD51CF97A3264_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m143CFA686C95C909AF7A4C96D088B322A217DD0A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m9012E749EEDB5212E7CD8EC9C8882CB5558AD544_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3B80568E394F76AAD21D134CC7D0AEB558C1CEA6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_mA06A5ED8AD560A907EABD87768094C7B1963BF83_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m6E5ABB38E5632CA205E88A7FBE36A5CBFF63AA37_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_mE79C9335F27290B9A6424B41D492E1DE2F8AF056_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mD325EBEDD9602A4026BBADEFF6A0A788C50729BA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mFE8BD324E91A1DD48726171723B6F970E99700D3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m1AF55489864E24A56CC661CEC39CCEFBDFB07B2B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mC694DED9C78CBADFE5628FA3913D40CC0597C925_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m42550120192AFA6BEEBA0910195193CA1869022F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mA315E316A28EEDA5AF2A1022785D95D066C11338_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m17F9F8798AA09BDFE298905B344BA137F8433768_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m6E97FC7A335FD200D617EE783A5666743F43CA3E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mD30F065452D4BD59697A9CD55B819E607BF080DF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mE58314D3FD84E0B75954DC7D092D7F4BB25ACF39_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mBAF564336856DDB99A8C406BFBBA6943207AECCD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mD1B9B51FD91756AE9F1302369503B0D0160A3441_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m66B1986CDDF2FBF393322C2A18456DE2B20D6A2B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mCCE23592E3F40DDD69D1FD2CA6C0E86A3AE98F52_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mAC7E21EB53A10B27FD227B9F5E0952518D27591B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mFAC0A8EE2149A4DB53D03A56A582EAB5A9654CBA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m5553C3F1C9CF24406C742765DDC2D6AAF9F4DCAF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mB5E91DFC3F16C088FE051F5BE792A9840DDA22FF_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328;
struct IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7;
struct IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Single>
struct NOVTABLE IKeyValuePair_2_t05AE6C2452CB4ADAE9E7ACAAA15F9DB3F9E5708F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m92969230EBA2006ED7AFEE3F6F0FD51CF97A3264(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m143CFA686C95C909AF7A4C96D088B322A217DD0A(float* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Int32>
struct NOVTABLE IKeyValuePair_2_t482240A103839CB39C730F64ECD18461071184A2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m579011688C0503B49AA7C4740513CB89507A7627(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m9012E749EEDB5212E7CD8EC9C8882CB5558AD544(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Single>
struct NOVTABLE IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m6E5ABB38E5632CA205E88A7FBE36A5CBFF63AA37(int32_t ___key0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1AF55489864E24A56CC661CEC39CCEFBDFB07B2B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mA06A5ED8AD560A907EABD87768094C7B1963BF83(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mFE8BD324E91A1DD48726171723B6F970E99700D3(IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** ___first0, IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>
struct NOVTABLE IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Int32>
struct NOVTABLE IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mE79C9335F27290B9A6424B41D492E1DE2F8AF056(uint32_t ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mC694DED9C78CBADFE5628FA3913D40CC0597C925(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3B80568E394F76AAD21D134CC7D0AEB558C1CEA6(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD325EBEDD9602A4026BBADEFF6A0A788C50729BA(IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** ___first0, IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>
struct NOVTABLE IMap_2_t956D55455A450CD1E2F84646A23E5ECFAF0C2C33 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mCCE23592E3F40DDD69D1FD2CA6C0E86A3AE98F52(int32_t ___key0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m5553C3F1C9CF24406C742765DDC2D6AAF9F4DCAF(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mE58314D3FD84E0B75954DC7D092D7F4BB25ACF39(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m17F9F8798AA09BDFE298905B344BA137F8433768(IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mD1B9B51FD91756AE9F1302369503B0D0160A3441(int32_t ___key0, float ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mAC7E21EB53A10B27FD227B9F5E0952518D27591B(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m42550120192AFA6BEEBA0910195193CA1869022F() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>
struct NOVTABLE IMap_2_t36C9AB5B1AB38FC142C2FA92750C4250666E8DBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B(uint32_t ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>
struct NOVTABLE IMap_2_t69BD234A0328DF49E3BBED3ECDEDBA09BD42C5FB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m66B1986CDDF2FBF393322C2A18456DE2B20D6A2B(uint32_t ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB5E91DFC3F16C088FE051F5BE792A9840DDA22FF(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD30F065452D4BD59697A9CD55B819E607BF080DF(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6E97FC7A335FD200D617EE783A5666743F43CA3E(IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mBAF564336856DDB99A8C406BFBBA6943207AECCD(uint32_t ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mFAC0A8EE2149A4DB53D03A56A582EAB5A9654CBA(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mA315E316A28EEDA5AF2A1022785D95D066C11338() = 0;
};
#ifndef READONLYDICTIONARY_2_T0C22BE4C37DADBC41702061BAA929227B0609293_H
#define READONLYDICTIONARY_2_T0C22BE4C37DADBC41702061BAA929227B0609293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Single>
struct  ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3AD7D52EDD451623102B446084F412525ED6D11A * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t672017E89E9C4B9F76031F0DB85E50323C6F86D2 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293, ___m_keys_2)); }
	inline KeyCollection_t3AD7D52EDD451623102B446084F412525ED6D11A * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3AD7D52EDD451623102B446084F412525ED6D11A ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3AD7D52EDD451623102B446084F412525ED6D11A * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293, ___m_values_3)); }
	inline ValueCollection_t672017E89E9C4B9F76031F0DB85E50323C6F86D2 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t672017E89E9C4B9F76031F0DB85E50323C6F86D2 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t672017E89E9C4B9F76031F0DB85E50323C6F86D2 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T0C22BE4C37DADBC41702061BAA929227B0609293_H
#ifndef READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#define READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct  ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_keys_2)); }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_values_3)); }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#ifndef READONLYDICTIONARY_2_T27BEFF827D231FD52E48F1A040DBD12F9A3771F3_H
#define READONLYDICTIONARY_2_T27BEFF827D231FD52E48F1A040DBD12F9A3771F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Int32>
struct  ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t9CCE8E45378B67DF35484B9C932F5CE90705AAA0 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t5F985DA769EEE3F55CEF89134D703F99503BC0EB * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3, ___m_keys_2)); }
	inline KeyCollection_t9CCE8E45378B67DF35484B9C932F5CE90705AAA0 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t9CCE8E45378B67DF35484B9C932F5CE90705AAA0 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t9CCE8E45378B67DF35484B9C932F5CE90705AAA0 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3, ___m_values_3)); }
	inline ValueCollection_t5F985DA769EEE3F55CEF89134D703F99503BC0EB * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t5F985DA769EEE3F55CEF89134D703F99503BC0EB ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t5F985DA769EEE3F55CEF89134D703F99503BC0EB * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T27BEFF827D231FD52E48F1A040DBD12F9A3771F3_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CONSTANTSPLITTABLEMAP_2_TF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_H
#define CONSTANTSPLITTABLEMAP_2_TF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>
struct  ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t45DDB1A919CBFE7CE71B03DC9006116067B9C523* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t45DDB1A919CBFE7CE71B03DC9006116067B9C523* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t45DDB1A919CBFE7CE71B03DC9006116067B9C523** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t45DDB1A919CBFE7CE71B03DC9006116067B9C523* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tA31B4659387FCA285FC8C74289415A4588F68E12 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tA31B4659387FCA285FC8C74289415A4588F68E12 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tA31B4659387FCA285FC8C74289415A4588F68E12 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tA31B4659387FCA285FC8C74289415A4588F68E12 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_H
#ifndef CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#define CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct  ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_H
#define CONSTANTSPLITTABLEMAP_2_T3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>
struct  ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t68DC2D955495C2B4B4365198D4FAF3EF23A46AA8* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t68DC2D955495C2B4B4365198D4FAF3EF23A46AA8* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t68DC2D955495C2B4B4365198D4FAF3EF23A46AA8** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t68DC2D955495C2B4B4365198D4FAF3EF23A46AA8* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tD3CA4F29E6034654C1E8EEC808DC2F41ED95BADC * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tD3CA4F29E6034654C1E8EEC808DC2F41ED95BADC * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tD3CA4F29E6034654C1E8EEC808DC2F41ED95BADC ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tD3CA4F29E6034654C1E8EEC808DC2F41ED95BADC * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef KEYVALUEPAIR_2_TB450BC421D008ED09DC37EC09D41ABF07669603D_H
#define KEYVALUEPAIR_2_TB450BC421D008ED09DC37EC09D41ABF07669603D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>
struct  KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TB450BC421D008ED09DC37EC09D41ABF07669603D_H
#ifndef KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#define KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>
struct  KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#ifndef KEYVALUEPAIR_2_TE6C1358EE7D1267190A395EAC9AEA64A81377D2C_H
#define KEYVALUEPAIR_2_TE6C1358EE7D1267190A395EAC9AEA64A81377D2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct  KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TE6C1358EE7D1267190A395EAC9AEA64A81377D2C_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#define KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H


// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D_gshared (ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C_gshared (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D_gshared (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642_gshared (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567_gshared (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961_gshared (ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A_gshared (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE_gshared (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B_gshared (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF_gshared (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D (ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642 (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C *, const RuntimeMethod*))KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567 (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C *, const RuntimeMethod*))KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24 (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3 (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6 (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961 (ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Single>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D * __this, const RuntimeMethod* method)
{
	return ((  float (*) (KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF_gshared)(__this, method);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m66B1986CDDF2FBF393322C2A18456DE2B20D6A2B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m66B1986CDDF2FBF393322C2A18456DE2B20D6A2B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mB5E91DFC3F16C088FE051F5BE792A9840DDA22FF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mB5E91DFC3F16C088FE051F5BE792A9840DDA22FF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::get_Count() */, ICollection_1_tC4341EA022F3778DA6E0CB04E21603111212D6E8_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mD30F065452D4BD59697A9CD55B819E607BF080DF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mD30F065452D4BD59697A9CD55B819E607BF080DF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>::ContainsKey(TKey) */, IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m6E97FC7A335FD200D617EE783A5666743F43CA3E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m6E97FC7A335FD200D617EE783A5666743F43CA3E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1C4123878E32982834A2A09112662B26EFEB6F76_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3 * readOnlyDictionary = (ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t27BEFF827D231FD52E48F1A040DBD12F9A3771F3_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m9965E50182A85C56F6AE16E74A72FAF81AAE4B9D_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mBAF564336856DDB99A8C406BFBBA6943207AECCD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mBAF564336856DDB99A8C406BFBBA6943207AECCD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>::ContainsKey(TKey) */, IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mFAC0A8EE2149A4DB53D03A56A582EAB5A9654CBA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mFAC0A8EE2149A4DB53D03A56A582EAB5A9654CBA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Int32>::Remove(TKey) */, IDictionary_2_tB481DFC67AD024B3715EC4795EC034ED2D744C56_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_mA315E316A28EEDA5AF2A1022785D95D066C11338_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mA315E316A28EEDA5AF2A1022785D95D066C11338_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::Clear() */, ICollection_1_tC4341EA022F3778DA6E0CB04E21603111212D6E8_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_mE79C9335F27290B9A6424B41D492E1DE2F8AF056_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_mE79C9335F27290B9A6424B41D492E1DE2F8AF056_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1C4123878E32982834A2A09112662B26EFEB6F76_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mC694DED9C78CBADFE5628FA3913D40CC0597C925_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mC694DED9C78CBADFE5628FA3913D40CC0597C925_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::get_Count() */, IReadOnlyCollection_1_tCE76FAABEEC4D30606A1670A1462A87EC5ACE275_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3B80568E394F76AAD21D134CC7D0AEB558C1CEA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3B80568E394F76AAD21D134CC7D0AEB558C1CEA6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1C4123878E32982834A2A09112662B26EFEB6F76_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mD325EBEDD9602A4026BBADEFF6A0A788C50729BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** ___first0, IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mD325EBEDD9602A4026BBADEFF6A0A788C50729BA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::get_Count() */, IReadOnlyCollection_1_tCE76FAABEEC4D30606A1670A1462A87EC5ACE275_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB * splittableMap = (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB *)IsInstSealed(__this, ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3900A029C1BA4A8A3CDBEB037DBC13C1DEC661FB_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C(splittableMap, __this, ConstantSplittableMap_2__ctor_m9288BC748B4D2E2CC92966BCA04EE9E40973AE9C_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mEA3758B739D99ED1370BE4DDE3EF009D0AB8B57D_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t56C17081317EDFB90E3B9A49CE2E88D951026328>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m579011688C0503B49AA7C4740513CB89507A7627_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m579011688C0503B49AA7C4740513CB89507A7627_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642((KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C*)UnBox(__thisValue, KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mED683B16388A45A5FFC2F1030D110EDA71CDB642_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m9012E749EEDB5212E7CD8EC9C8882CB5558AD544_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m9012E749EEDB5212E7CD8EC9C8882CB5558AD544_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567((KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C*)UnBox(__thisValue, KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mA9CBC0514BC978806AE58FF1BE4571D710096567_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * readOnlyDictionary = (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::Remove(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::Clear() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *)IsInstSealed(__this, ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3(splittableMap, __this, ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mCCE23592E3F40DDD69D1FD2CA6C0E86A3AE98F52_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, float* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mCCE23592E3F40DDD69D1FD2CA6C0E86A3AE98F52_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	float returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, float* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Single>::TryGetValue(TKey,TValue&) */, IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m5553C3F1C9CF24406C742765DDC2D6AAF9F4DCAF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m5553C3F1C9CF24406C742765DDC2D6AAF9F4DCAF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>>::get_Count() */, ICollection_1_t66D7AFE267702A10D6A1ACDAE99431248455CC03_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mE58314D3FD84E0B75954DC7D092D7F4BB25ACF39_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mE58314D3FD84E0B75954DC7D092D7F4BB25ACF39_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Single>::ContainsKey(TKey) */, IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::GetView()
il2cpp_hresult_t IMap_2_GetView_m17F9F8798AA09BDFE298905B344BA137F8433768_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m17F9F8798AA09BDFE298905B344BA137F8433768_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t22770914929B91E35349ACABE9A37FA137982FCC_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293 * readOnlyDictionary = (ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t0C22BE4C37DADBC41702061BAA929227B0609293_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mA4F9DB09F6555CE94DF0D0E3CAE0AAC28F58F961_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mD1B9B51FD91756AE9F1302369503B0D0160A3441_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, float ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mD1B9B51FD91756AE9F1302369503B0D0160A3441_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Single>::ContainsKey(TKey) */, IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, float >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Single>::set_Item(TKey,TValue) */, IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mAC7E21EB53A10B27FD227B9F5E0952518D27591B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mAC7E21EB53A10B27FD227B9F5E0952518D27591B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Single>::Remove(TKey) */, IDictionary_2_t78CF47F16EEDC72D056535D69E9EFE0FB2E9FED8_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Single>::Clear()
il2cpp_hresult_t IMap_2_Clear_m42550120192AFA6BEEBA0910195193CA1869022F_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m42550120192AFA6BEEBA0910195193CA1869022F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>>::Clear() */, ICollection_1_t66D7AFE267702A10D6A1ACDAE99431248455CC03_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Single>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m6E5ABB38E5632CA205E88A7FBE36A5CBFF63AA37_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, float* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m6E5ABB38E5632CA205E88A7FBE36A5CBFF63AA37_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	float returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, float* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Single>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t22770914929B91E35349ACABE9A37FA137982FCC_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Single>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1AF55489864E24A56CC661CEC39CCEFBDFB07B2B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1AF55489864E24A56CC661CEC39CCEFBDFB07B2B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>>::get_Count() */, IReadOnlyCollection_1_tE50245A875503F6D2A922040575FE253AFE460F8_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Single>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mA06A5ED8AD560A907EABD87768094C7B1963BF83_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mA06A5ED8AD560A907EABD87768094C7B1963BF83_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Single>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t22770914929B91E35349ACABE9A37FA137982FCC_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Single>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mFE8BD324E91A1DD48726171723B6F970E99700D3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** ___first0, IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mFE8BD324E91A1DD48726171723B6F970E99700D3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>>::get_Count() */, IReadOnlyCollection_1_tE50245A875503F6D2A922040575FE253AFE460F8_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 * splittableMap = (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95 *)IsInstSealed(__this, ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tF11A6F8519ACEC01A77A8F165EEAFFD0B4D99F95_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A(splittableMap, __this, ConstantSplittableMap_2__ctor_m1D00D9EEFEC6F6D7B8AA63E3F639CC0A08422B8A_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m426E6AF1554B17EC506E63A5C29D11D7B2CE86CE_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tC916C2C62A78B6C8BD4418EC9E55B06592697E8D>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Single>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m92969230EBA2006ED7AFEE3F6F0FD51CF97A3264_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m92969230EBA2006ED7AFEE3F6F0FD51CF97A3264_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B((KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D*)UnBox(__thisValue, KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m9B0B6CBDA917A951496C63F998DE4FC12FB5163B_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Single>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m143CFA686C95C909AF7A4C96D088B322A217DD0A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, float* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m143CFA686C95C909AF7A4C96D088B322A217DD0A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	float returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF((KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D*)UnBox(__thisValue, KeyValuePair_2_tB450BC421D008ED09DC37EC09D41ABF07669603D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m022632A991BD61CF59DC6E829B40DA35E06552DF_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
