#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Type_t;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF3FFCBA3F60AB742C0475B6563F3792C842DA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44247D7E4ABA1E7C513713F50F94F136BCD6E20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8586FC824BFC2831E5694A3E40BFB0C7C5520B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E81413E6D3803FF61CCF7254021C14A4F405E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m776BD57FE5E923C6FDA3CA1640A021E2551B82E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92E3AECB318D1C3C767A7CD2CCF6DB1C5D31C399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8D8CF46982FAEDDC0EFB173C06C0EBD04BE618ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
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
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr;
	int32_t ___Size;
	int32_t ___Offset;
};
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct AsyncConversionStatus_tB9035BBA640774DAFF34FEEE5DF141A2F24E1236 
{
	int32_t ___value__;
};
struct Transformation_t26ED8CF20E035506740A8504E00ECD67AF5FD137 
{
	int32_t ___value__;
};
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions;
	int32_t ___m_Format;
	int32_t ___m_Transformation;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_ForeachIndex;
	int32_t ___m_ElementCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock;
	int32_t ___m_FirstOffset;
	int32_t ___m_NumberOfBlocks;
	int32_t ___m_ThreadIndex;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m856D276A33760D3F9B6FDC631F337372BC41037E_gshared (bool* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mFD12A694611E03895F4458912B9FE341B07D690C_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m691506CA4682A3878264EEB52FA188912614F238_gshared (Il2CppChar* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mCC237A07CD7A39540520FE43C66A49204AD02060_gshared (double* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m262B2BBB933FB2B1DBDA65D418FD3A0EA166B4AF_gshared (int16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m0E14C5AEDCB7F8A75EEE6D4D476E00E0DD7A5531_gshared (int32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m3BFB7BDCFA2447B375F048512E95569635B8D4E4_gshared (int64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m1967E1AEC5A0D9648CA206B187F6DA76F7865322_gshared (int8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6F7761D5CA3434775F5725B70793B2676B5BB50A_gshared (float* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mB352A8132547464344E6835AF40F1C7DA0FC6179_gshared (String_t** ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6A1DA3430E328697B3C1E053374FAEACF0C77F95_gshared (uint16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m62DAACE3E3F12517F13F380BE744A38D69E12156_gshared (uint32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m855CA8553E43D1238E78F509DF06C0671DB8A242_gshared (uint64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline (bool* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (bool*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (uint8_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline (Il2CppChar* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Il2CppChar*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline (double* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (double*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline (int16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (int16_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline (int32_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (int32_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline (int64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (int64_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline (int8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (int8_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline (float* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (float*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m3F9787FE9A306FE63F388635DEE2733F91588A86 (uint8_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline (String_t** ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (String_t**, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline (uint16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (uint16_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline (uint32_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (uint32_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8 (Il2CppChar* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_m7A3097301539CDD2229B5569431B43FBD88F94F3 (int16_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SByte_ToString_m49CC610EC3B380C06F59C71D999DC46B89632B6E (int8_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, bool*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, uint8_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___0_s, int16_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B (double* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, int16_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF3FFCBA3F60AB742C0475B6563F3792C842DA87 (double* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, int32_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44247D7E4ABA1E7C513713F50F94F136BCD6E20A (double* ___0_source, int64_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, int64_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6 (String_t* ___0_s, int8_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8586FC824BFC2831E5694A3E40BFB0C7C5520B10 (double* ___0_source, int8_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, int8_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E81413E6D3803FF61CCF7254021C14A4F405E63 (double* ___0_source, float* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, float*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6 (String_t* ___0_s, uint16_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m776BD57FE5E923C6FDA3CA1640A021E2551B82E2 (double* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, uint16_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9 (String_t* ___0_s, uint32_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92E3AECB318D1C3C767A7CD2CCF6DB1C5D31C399 (double* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, uint32_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_mF3AF0976C95B83F09039AA0205FCB76B1CFD6D84 (String_t* ___0_s, uint64_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8D8CF46982FAEDDC0EFB173C06C0EBD04BE618ED (double* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, uint64_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mCFE0EB73F03E7230D7F2694140FF9CECE793184D (uint16_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m5A3136A9B92E1A5285D56349AD71B4075BD254AC (uint32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m442ECCC3108A0DA30933490DE73A749856262150_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m856D276A33760D3F9B6FDC631F337372BC41037E (bool* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (bool*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m856D276A33760D3F9B6FDC631F337372BC41037E_gshared)(___0_source, il2cppRetVal, method);
}
inline uint8_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAAB228FFADB76FA6BB6686BBDB9479779E20A7C6_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mFD12A694611E03895F4458912B9FE341B07D690C (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mFD12A694611E03895F4458912B9FE341B07D690C_gshared)(___0_source, il2cppRetVal, method);
}
inline Il2CppChar* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE5405089F0731E1FEDDBDC485048456549B8F81A_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m691506CA4682A3878264EEB52FA188912614F238 (Il2CppChar* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m691506CA4682A3878264EEB52FA188912614F238_gshared)(___0_source, il2cppRetVal, method);
}
inline double* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBB444EE29C3C196347A1EE7E44C9F299B396D5E_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  double* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mCC237A07CD7A39540520FE43C66A49204AD02060 (double* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (double*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mCC237A07CD7A39540520FE43C66A49204AD02060_gshared)(___0_source, il2cppRetVal, method);
}
inline int16_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7F3D38918DD7AAB2206B1C5D2F95935F1A78141_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  int16_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m262B2BBB933FB2B1DBDA65D418FD3A0EA166B4AF (int16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (int16_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m262B2BBB933FB2B1DBDA65D418FD3A0EA166B4AF_gshared)(___0_source, il2cppRetVal, method);
}
inline int32_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5E4D05CB0C699ABEB044C09A5C38EA0E714D013B_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m0E14C5AEDCB7F8A75EEE6D4D476E00E0DD7A5531 (int32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m0E14C5AEDCB7F8A75EEE6D4D476E00E0DD7A5531_gshared)(___0_source, il2cppRetVal, method);
}
inline int64_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDE435009462C7C302356109B64DAD634148B4099_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  int64_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m3BFB7BDCFA2447B375F048512E95569635B8D4E4 (int64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (int64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m3BFB7BDCFA2447B375F048512E95569635B8D4E4_gshared)(___0_source, il2cppRetVal, method);
}
inline int8_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4310668E52FB7067987D6E9321559DDF3A2FA60A_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  int8_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m1967E1AEC5A0D9648CA206B187F6DA76F7865322 (int8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (int8_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m1967E1AEC5A0D9648CA206B187F6DA76F7865322_gshared)(___0_source, il2cppRetVal, method);
}
inline float* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9E826A3FF880E1787077B6E79CA0C8C363A54997_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  float* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6F7761D5CA3434775F5725B70793B2676B5BB50A (float* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (float*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6F7761D5CA3434775F5725B70793B2676B5BB50A_gshared)(___0_source, il2cppRetVal, method);
}
inline String_t** UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisString_t_m9BC71B961562D33981F3D2A518280ACCCC720714_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  String_t** (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mB352A8132547464344E6835AF40F1C7DA0FC6179 (String_t** ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (String_t**, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mB352A8132547464344E6835AF40F1C7DA0FC6179_gshared)(___0_source, il2cppRetVal, method);
}
inline uint16_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m33A571A8A920313DC399CF856BA643AEFFEE4840_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  uint16_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6A1DA3430E328697B3C1E053374FAEACF0C77F95 (uint16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6A1DA3430E328697B3C1E053374FAEACF0C77F95_gshared)(___0_source, il2cppRetVal, method);
}
inline uint32_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8FE2798F42657FD77E43F73BE64B9A2ECAD370A_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m62DAACE3E3F12517F13F380BE744A38D69E12156 (uint32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m62DAACE3E3F12517F13F380BE744A38D69E12156_gshared)(___0_source, il2cppRetVal, method);
}
inline uint64_t* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0D05B6202B7FECB3D9612396E65FA72BCBD2671A_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline)(___0_from, method);
}
inline void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m855CA8553E43D1238E78F509DF06C0671DB8A242 (uint64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m855CA8553E43D1238E78F509DF06C0671DB8A242_gshared)(___0_source, il2cppRetVal, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9 (uint64_t ___0_offset, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline)(___0_ptr, ___1_output, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___0_value, method);
}
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared)(___0_nativeArray, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___0_value, ___1_allocator, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___0_length, method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline)(___0_ptr, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
inline EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204 (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared)(___0_ptr, ___1_max, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline)(__this, method);
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
inline Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared)(___0_ptr, ___1_output, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline)(___0_thing, method);
}
// Method Definition Index: 85098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mFD12A694611E03895F4458912B9FE341B07D690C_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
	const Il2CppFullySharedGenericAny L_18 = L_9;
	const Il2CppFullySharedGenericAny L_28 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_48 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_68 = L_9;
	const Il2CppFullySharedGenericAny L_78 = L_9;
	const Il2CppFullySharedGenericAny L_88 = L_9;
	const Il2CppFullySharedGenericAny L_99 = L_9;
	const Il2CppFullySharedGenericAny L_109 = L_9;
	const Il2CppFullySharedGenericAny L_119 = L_9;
	const Il2CppFullySharedGenericAny L_129 = L_9;
	const Il2CppFullySharedGenericAny L_131 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
	memset(V_2, 0, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	double V_7 = 0.0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int64_t V_13 = 0;
	bool V_14 = false;
	int8_t V_15 = 0x0;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	String_t* V_19 = NULL;
	bool V_20 = false;
	uint16_t V_21 = 0;
	bool V_22 = false;
	uint32_t V_23 = 0;
	bool V_24 = false;
	uint64_t V_25 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:635>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:637>
		uint8_t* L_6 = ___0_source;
		int32_t L_7 = *((uint8_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:638>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:641>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:643>
		uint8_t* L_16 = ___0_source;
		Il2CppFullySharedGenericAny* L_17;
		L_17 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_18, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0066:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:646>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_009c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:648>
		uint8_t* L_25 = ___0_source;
		int32_t L_26 = *((uint8_t*)L_25);
		V_5 = (Il2CppChar)L_26;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:649>
		Il2CppFullySharedGenericAny* L_27;
		L_27 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_5), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_28, L_27, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_009c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:652>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00d3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:654>
		uint8_t* L_35 = ___0_source;
		int32_t L_36 = *((uint8_t*)L_35);
		V_7 = ((double)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:655>
		Il2CppFullySharedGenericAny* L_37;
		L_37 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_7), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_38, L_37, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_38, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_00d3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:658>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:660>
		uint8_t* L_45 = ___0_source;
		int32_t L_46 = *((uint8_t*)L_45);
		V_9 = (int16_t)L_46;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:661>
		Il2CppFullySharedGenericAny* L_47;
		L_47 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_9), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_48, L_47, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_48, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0109:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:664>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_013f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:666>
		uint8_t* L_55 = ___0_source;
		int32_t L_56 = *((uint8_t*)L_55);
		V_11 = L_56;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:667>
		Il2CppFullySharedGenericAny* L_57;
		L_57 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_11), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_58, L_57, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_58, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_013f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:670>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_12 = L_63;
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_0176;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:672>
		uint8_t* L_65 = ___0_source;
		int32_t L_66 = *((uint8_t*)L_65);
		V_13 = ((int64_t)(uint64_t)((uint32_t)L_66));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:673>
		Il2CppFullySharedGenericAny* L_67;
		L_67 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_13), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_68, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0176:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:676>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		V_14 = L_73;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_01ad;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:678>
		uint8_t* L_75 = ___0_source;
		int32_t L_76 = *((uint8_t*)L_75);
		V_15 = ((int8_t)L_76);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:679>
		Il2CppFullySharedGenericAny* L_77;
		L_77 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_78, L_77, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_78, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_01ad:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:682>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		V_16 = L_83;
		bool L_84 = V_16;
		if (!L_84)
		{
			goto IL_01e4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:684>
		uint8_t* L_85 = ___0_source;
		int32_t L_86 = *((uint8_t*)L_85);
		V_17 = ((float)L_86);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:685>
		Il2CppFullySharedGenericAny* L_87;
		L_87 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_17), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_88, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_01e4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:688>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		bool L_93;
		L_93 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_90, L_92, NULL);
		V_18 = L_93;
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_0223;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:690>
		uint8_t* L_95 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_96;
		L_96 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_97;
		L_97 = Byte_ToString_m3F9787FE9A306FE63F388635DEE2733F91588A86(L_95, (RuntimeObject*)L_96, NULL);
		V_19 = L_97;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:691>
		Il2CppFullySharedGenericAny* L_98;
		L_98 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_19), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_99, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0223:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:694>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_20 = L_104;
		bool L_105 = V_20;
		if (!L_105)
		{
			goto IL_0256;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:696>
		uint8_t* L_106 = ___0_source;
		int32_t L_107 = *((uint8_t*)L_106);
		V_21 = (uint16_t)L_107;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:697>
		Il2CppFullySharedGenericAny* L_108;
		L_108 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_21), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_109, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0256:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:700>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		bool L_114;
		L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
		V_22 = L_114;
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_0289;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:702>
		uint8_t* L_116 = ___0_source;
		int32_t L_117 = *((uint8_t*)L_116);
		V_23 = (uint32_t)L_117;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:703>
		Il2CppFullySharedGenericAny* L_118;
		L_118 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_23), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_119, L_118, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_119, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_0289:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:706>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		V_24 = L_124;
		bool L_125 = V_24;
		if (!L_125)
		{
			goto IL_02bd;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:708>
		uint8_t* L_126 = ___0_source;
		int32_t L_127 = *((uint8_t*)L_126);
		V_25 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_127));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:709>
		Il2CppFullySharedGenericAny* L_128;
		L_128 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_25), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_129, L_128, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(V_2, L_129, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		goto IL_02c3;
	}

IL_02bd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:712>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_130 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_130, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, method);
	}

IL_02c3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:713>
		il2cpp_codegen_memcpy(L_131, V_2, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_131, SizeOf_TDestination_t9E48B00E09D15D4A91CD1E845573F7DCA5FAE09C);
		return;
	}
}
// Method Definition Index: 85099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m691506CA4682A3878264EEB52FA188912614F238_gshared (Il2CppChar* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_28 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_48 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_68 = L_9;
	const Il2CppFullySharedGenericAny L_78 = L_9;
	const Il2CppFullySharedGenericAny L_88 = L_9;
	const Il2CppFullySharedGenericAny L_99 = L_9;
	const Il2CppFullySharedGenericAny L_109 = L_9;
	const Il2CppFullySharedGenericAny L_119 = L_9;
	const Il2CppFullySharedGenericAny L_129 = L_9;
	const Il2CppFullySharedGenericAny L_131 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
	memset(V_2, 0, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	double V_7 = 0.0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int64_t V_13 = 0;
	bool V_14 = false;
	int8_t V_15 = 0x0;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	String_t* V_19 = NULL;
	bool V_20 = false;
	uint16_t V_21 = 0;
	bool V_22 = false;
	uint32_t V_23 = 0;
	bool V_24 = false;
	uint64_t V_25 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:718>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:720>
		Il2CppChar* L_6 = ___0_source;
		int32_t L_7 = *((uint16_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:721>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:724>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:726>
		Il2CppChar* L_16 = ___0_source;
		int32_t L_17 = *((uint16_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:727>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:730>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:732>
		Il2CppChar* L_26 = ___0_source;
		Il2CppFullySharedGenericAny* L_27;
		L_27 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline(L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_28, L_27, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_009d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:735>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00d4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:737>
		Il2CppChar* L_35 = ___0_source;
		int32_t L_36 = *((uint16_t*)L_35);
		V_7 = ((double)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:738>
		Il2CppFullySharedGenericAny* L_37;
		L_37 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_7), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_38, L_37, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_38, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_00d4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:741>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_010b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:743>
		Il2CppChar* L_45 = ___0_source;
		int32_t L_46 = *((uint16_t*)L_45);
		V_9 = ((int16_t)L_46);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:744>
		Il2CppFullySharedGenericAny* L_47;
		L_47 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_9), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_48, L_47, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_48, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_010b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:747>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_0141;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:749>
		Il2CppChar* L_55 = ___0_source;
		int32_t L_56 = *((uint16_t*)L_55);
		V_11 = L_56;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:750>
		Il2CppFullySharedGenericAny* L_57;
		L_57 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_11), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_58, L_57, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_58, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:753>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_12 = L_63;
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_0178;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:755>
		Il2CppChar* L_65 = ___0_source;
		int32_t L_66 = *((uint16_t*)L_65);
		V_13 = ((int64_t)(uint64_t)((uint32_t)L_66));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:756>
		Il2CppFullySharedGenericAny* L_67;
		L_67 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_13), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_68, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_0178:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:759>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		V_14 = L_73;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_01af;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:761>
		Il2CppChar* L_75 = ___0_source;
		int32_t L_76 = *((uint16_t*)L_75);
		V_15 = ((int8_t)L_76);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:762>
		Il2CppFullySharedGenericAny* L_77;
		L_77 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_78, L_77, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_78, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_01af:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:765>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		V_16 = L_83;
		bool L_84 = V_16;
		if (!L_84)
		{
			goto IL_01e6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:767>
		Il2CppChar* L_85 = ___0_source;
		int32_t L_86 = *((uint16_t*)L_85);
		V_17 = ((float)L_86);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:768>
		Il2CppFullySharedGenericAny* L_87;
		L_87 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_17), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_88, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_01e6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:771>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		bool L_93;
		L_93 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_90, L_92, NULL);
		V_18 = L_93;
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_0225;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:773>
		Il2CppChar* L_95 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_96;
		L_96 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		String_t* L_97;
		L_97 = Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8(L_95, (RuntimeObject*)L_96, NULL);
		V_19 = L_97;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:774>
		Il2CppFullySharedGenericAny* L_98;
		L_98 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_19), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_99, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_0225:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:777>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_20 = L_104;
		bool L_105 = V_20;
		if (!L_105)
		{
			goto IL_0258;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:779>
		Il2CppChar* L_106 = ___0_source;
		int32_t L_107 = *((uint16_t*)L_106);
		V_21 = (uint16_t)L_107;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:780>
		Il2CppFullySharedGenericAny* L_108;
		L_108 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_21), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_109, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_0258:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:783>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		bool L_114;
		L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
		V_22 = L_114;
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:785>
		Il2CppChar* L_116 = ___0_source;
		int32_t L_117 = *((uint16_t*)L_116);
		V_23 = (uint32_t)L_117;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:786>
		Il2CppFullySharedGenericAny* L_118;
		L_118 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_23), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_119, L_118, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_119, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_028b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:789>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		V_24 = L_124;
		bool L_125 = V_24;
		if (!L_125)
		{
			goto IL_02bf;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:791>
		Il2CppChar* L_126 = ___0_source;
		int32_t L_127 = *((uint16_t*)L_126);
		V_25 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_127));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:792>
		Il2CppFullySharedGenericAny* L_128;
		L_128 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_25), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_129, L_128, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(V_2, L_129, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		goto IL_02c5;
	}

IL_02bf:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:795>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_130 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_130, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, method);
	}

IL_02c5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:796>
		il2cpp_codegen_memcpy(L_131, V_2, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		il2cpp_codegen_memcpy(il2cppRetVal, L_131, SizeOf_TDestination_tB78E27633407D8C5F71DA1AD70360A2C3D72AF03);
		return;
	}
}
// Method Definition Index: 85100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mCC237A07CD7A39540520FE43C66A49204AD02060_gshared (double* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_48 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_68 = L_9;
	const Il2CppFullySharedGenericAny L_78 = L_9;
	const Il2CppFullySharedGenericAny L_88 = L_9;
	const Il2CppFullySharedGenericAny L_99 = L_9;
	const Il2CppFullySharedGenericAny L_109 = L_9;
	const Il2CppFullySharedGenericAny L_119 = L_9;
	const Il2CppFullySharedGenericAny L_129 = L_9;
	const Il2CppFullySharedGenericAny L_131 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
	memset(V_2, 0, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int64_t V_13 = 0;
	bool V_14 = false;
	int8_t V_15 = 0x0;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	String_t* V_19 = NULL;
	bool V_20 = false;
	uint16_t V_21 = 0;
	bool V_22 = false;
	uint32_t V_23 = 0;
	bool V_24 = false;
	uint64_t V_25 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:801>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:803>
		double* L_6 = ___0_source;
		double L_7 = *((double*)L_6);
		V_1 = (bool)((((int32_t)((((double)L_7) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:804>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0042:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:807>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:809>
		double* L_16 = ___0_source;
		double L_17 = *((double*)L_16);
		V_4 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:810>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0077:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:813>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:815>
		double* L_26 = ___0_source;
		double L_27 = *((double*)L_26);
		V_6 = (Il2CppChar)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, double>(L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:816>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_00ae:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:819>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00df;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:821>
		double* L_36 = ___0_source;
		Il2CppFullySharedGenericAny* L_37;
		L_37 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline(L_36, il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_38, L_37, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_38, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_00df:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:824>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0116;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:826>
		double* L_45 = ___0_source;
		double L_46 = *((double*)L_45);
		V_9 = il2cpp_codegen_cast_double_to_int<int16_t>(L_46);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:827>
		Il2CppFullySharedGenericAny* L_47;
		L_47 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_9), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_48, L_47, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_48, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0116:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:830>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_014d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:832>
		double* L_55 = ___0_source;
		double L_56 = *((double*)L_55);
		V_11 = il2cpp_codegen_cast_double_to_int<int32_t>(L_56);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:833>
		Il2CppFullySharedGenericAny* L_57;
		L_57 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_11), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_58, L_57, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_58, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_014d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:836>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_12 = L_63;
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:838>
		double* L_65 = ___0_source;
		double L_66 = *((double*)L_65);
		V_13 = il2cpp_codegen_cast_double_to_int<int64_t>(L_66);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:839>
		Il2CppFullySharedGenericAny* L_67;
		L_67 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_13), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_68, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0184:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:842>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		V_14 = L_73;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_01bb;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:844>
		double* L_75 = ___0_source;
		double L_76 = *((double*)L_75);
		V_15 = il2cpp_codegen_cast_double_to_int<int8_t>(L_76);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:845>
		Il2CppFullySharedGenericAny* L_77;
		L_77 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_78, L_77, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_78, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_01bb:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:848>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		V_16 = L_83;
		bool L_84 = V_16;
		if (!L_84)
		{
			goto IL_01f2;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:850>
		double* L_85 = ___0_source;
		double L_86 = *((double*)L_85);
		V_17 = ((float)L_86);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:851>
		Il2CppFullySharedGenericAny* L_87;
		L_87 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_17), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_88, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_01f2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:854>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		bool L_93;
		L_93 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_90, L_92, NULL);
		V_18 = L_93;
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_0231;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:856>
		double* L_95 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_96;
		L_96 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_97;
		L_97 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357(L_95, (RuntimeObject*)L_96, NULL);
		V_19 = L_97;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:857>
		Il2CppFullySharedGenericAny* L_98;
		L_98 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_19), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_99, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0231:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:860>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_20 = L_104;
		bool L_105 = V_20;
		if (!L_105)
		{
			goto IL_0265;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:862>
		double* L_106 = ___0_source;
		double L_107 = *((double*)L_106);
		V_21 = (uint16_t)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, double>(L_107);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:863>
		Il2CppFullySharedGenericAny* L_108;
		L_108 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_21), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_109, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0265:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:866>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		bool L_114;
		L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
		V_22 = L_114;
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_0299;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:868>
		double* L_116 = ___0_source;
		double L_117 = *((double*)L_116);
		V_23 = (uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(L_117);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:869>
		Il2CppFullySharedGenericAny* L_118;
		L_118 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_23), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_119, L_118, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_119, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_0299:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:872>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		V_24 = L_124;
		bool L_125 = V_24;
		if (!L_125)
		{
			goto IL_02cd;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:874>
		double* L_126 = ___0_source;
		double L_127 = *((double*)L_126);
		V_25 = (uint64_t)il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_127);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:875>
		Il2CppFullySharedGenericAny* L_128;
		L_128 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_25), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_129, L_128, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(V_2, L_129, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		goto IL_02d3;
	}

IL_02cd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:878>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_130 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_130, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, method);
	}

IL_02d3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:879>
		il2cpp_codegen_memcpy(L_131, V_2, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_131, SizeOf_TDestination_t0458B86E0ADEBD6D36F52B02DCA374EDD0D9664D);
		return;
	}
}
// Method Definition Index: 85101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m262B2BBB933FB2B1DBDA65D418FD3A0EA166B4AF_gshared (int16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_48 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_68 = L_9;
	const Il2CppFullySharedGenericAny L_78 = L_9;
	const Il2CppFullySharedGenericAny L_88 = L_9;
	const Il2CppFullySharedGenericAny L_99 = L_9;
	const Il2CppFullySharedGenericAny L_109 = L_9;
	const Il2CppFullySharedGenericAny L_119 = L_9;
	const Il2CppFullySharedGenericAny L_129 = L_9;
	const Il2CppFullySharedGenericAny L_131 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
	memset(V_2, 0, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int64_t V_13 = 0;
	bool V_14 = false;
	int8_t V_15 = 0x0;
	bool V_16 = false;
	float V_17 = 0.0f;
	bool V_18 = false;
	String_t* V_19 = NULL;
	bool V_20 = false;
	uint16_t V_21 = 0;
	bool V_22 = false;
	uint32_t V_23 = 0;
	bool V_24 = false;
	uint64_t V_25 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:884>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:886>
		int16_t* L_6 = ___0_source;
		int32_t L_7 = *((int16_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:887>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:890>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:892>
		int16_t* L_16 = ___0_source;
		int32_t L_17 = *((int16_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:893>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:896>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:898>
		int16_t* L_26 = ___0_source;
		int32_t L_27 = *((int16_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:899>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_00a3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:902>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:904>
		int16_t* L_36 = ___0_source;
		int32_t L_37 = *((int16_t*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:905>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_00da:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:908>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_010b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:910>
		int16_t* L_46 = ___0_source;
		Il2CppFullySharedGenericAny* L_47;
		L_47 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_48, L_47, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_48, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_010b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:913>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_0141;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:915>
		int16_t* L_55 = ___0_source;
		int32_t L_56 = *((int16_t*)L_55);
		V_11 = L_56;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:916>
		Il2CppFullySharedGenericAny* L_57;
		L_57 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_11), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_58, L_57, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_58, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:919>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		V_12 = L_63;
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_0178;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:921>
		int16_t* L_65 = ___0_source;
		int32_t L_66 = *((int16_t*)L_65);
		V_13 = ((int64_t)L_66);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:922>
		Il2CppFullySharedGenericAny* L_67;
		L_67 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_13), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_68, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_0178:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:925>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		V_14 = L_73;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_01af;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:927>
		int16_t* L_75 = ___0_source;
		int32_t L_76 = *((int16_t*)L_75);
		V_15 = ((int8_t)L_76);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:928>
		Il2CppFullySharedGenericAny* L_77;
		L_77 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_78, L_77, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_78, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_01af:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:931>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		V_16 = L_83;
		bool L_84 = V_16;
		if (!L_84)
		{
			goto IL_01e6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:933>
		int16_t* L_85 = ___0_source;
		int32_t L_86 = *((int16_t*)L_85);
		V_17 = ((float)L_86);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:934>
		Il2CppFullySharedGenericAny* L_87;
		L_87 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_17), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_88, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_01e6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:937>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_89 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_90;
		L_90 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_89, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		bool L_93;
		L_93 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_90, L_92, NULL);
		V_18 = L_93;
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_0225;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:939>
		int16_t* L_95 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_96;
		L_96 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_97;
		L_97 = Int16_ToString_m7A3097301539CDD2229B5569431B43FBD88F94F3(L_95, (RuntimeObject*)L_96, NULL);
		V_19 = L_97;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:940>
		Il2CppFullySharedGenericAny* L_98;
		L_98 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_19), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_99, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_0225:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:943>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		bool L_104;
		L_104 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_103, NULL);
		V_20 = L_104;
		bool L_105 = V_20;
		if (!L_105)
		{
			goto IL_0259;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:945>
		int16_t* L_106 = ___0_source;
		int32_t L_107 = *((int16_t*)L_106);
		V_21 = (uint16_t)((int32_t)(uint16_t)L_107);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:946>
		Il2CppFullySharedGenericAny* L_108;
		L_108 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_21), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_109, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_0259:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:949>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		bool L_114;
		L_114 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_111, L_113, NULL);
		V_22 = L_114;
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_028c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:951>
		int16_t* L_116 = ___0_source;
		int32_t L_117 = *((int16_t*)L_116);
		V_23 = (uint32_t)L_117;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:952>
		Il2CppFullySharedGenericAny* L_118;
		L_118 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_23), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_119, L_118, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_119, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_028c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:955>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		V_24 = L_124;
		bool L_125 = V_24;
		if (!L_125)
		{
			goto IL_02c0;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:957>
		int16_t* L_126 = ___0_source;
		int32_t L_127 = *((int16_t*)L_126);
		V_25 = (uint64_t)((int64_t)L_127);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:958>
		Il2CppFullySharedGenericAny* L_128;
		L_128 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_25), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_129, L_128, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(V_2, L_129, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		goto IL_02c6;
	}

IL_02c0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:961>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_130 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_130, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, method);
	}

IL_02c6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:962>
		il2cpp_codegen_memcpy(L_131, V_2, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_131, SizeOf_TDestination_t3791439D616D0A6730711980198EE495591B22D4);
		return;
	}
}
// Method Definition Index: 85102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m0E14C5AEDCB7F8A75EEE6D4D476E00E0DD7A5531_gshared (int32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
	memset(V_2, 0, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:967>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:969>
		int32_t* L_6 = ___0_source;
		int32_t L_7 = *((int32_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:970>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:973>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:975>
		int32_t* L_16 = ___0_source;
		int32_t L_17 = *((int32_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:976>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:979>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:981>
		int32_t* L_26 = ___0_source;
		int32_t L_27 = *((int32_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:982>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_00a3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:985>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:987>
		int32_t* L_36 = ___0_source;
		int32_t L_37 = *((int32_t*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:988>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_00da:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:991>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0111;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:993>
		int32_t* L_46 = ___0_source;
		int32_t L_47 = *((int32_t*)L_46);
		V_10 = ((int16_t)L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:994>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_0111:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:997>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0147;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:999>
		int32_t* L_56 = ___0_source;
		int32_t L_57 = *((int32_t*)L_56);
		V_12 = L_57;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1000>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_0147:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1003>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_017e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1005>
		int32_t* L_66 = ___0_source;
		int32_t L_67 = *((int32_t*)L_66);
		V_14 = ((int64_t)L_67);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1006>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_017e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1009>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b5;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1011>
		int32_t* L_76 = ___0_source;
		int32_t L_77 = *((int32_t*)L_76);
		V_16 = ((int8_t)L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1012>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_01b5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1015>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01ec;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1017>
		int32_t* L_86 = ___0_source;
		int32_t L_87 = *((int32_t*)L_86);
		V_18 = ((float)L_87);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1018>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_01ec:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1021>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_022b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1023>
		int32_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1024>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_022b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1027>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_025f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1029>
		int32_t* L_107 = ___0_source;
		int32_t L_108 = *((int32_t*)L_107);
		V_22 = (uint16_t)((int32_t)(uint16_t)L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1030>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_025f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1033>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0292;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1035>
		int32_t* L_117 = ___0_source;
		int32_t L_118 = *((int32_t*)L_117);
		V_24 = (uint32_t)L_118;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1036>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_0292:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1039>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1041>
		int32_t* L_127 = ___0_source;
		int32_t L_128 = *((int32_t*)L_127);
		V_26 = (uint64_t)((int64_t)L_128);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1042>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		goto IL_02cc;
	}

IL_02c6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1045>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02cc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1046>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_t23900F037E1410AE00FBD56FC3A6B6008081CFA2);
		return;
	}
}
// Method Definition Index: 85103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m3BFB7BDCFA2447B375F048512E95569635B8D4E4_gshared (int64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
	memset(V_2, 0, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1051>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1053>
		int64_t* L_6 = ___0_source;
		int64_t L_7 = *((int64_t*)L_6);
		V_1 = (bool)((!(((uint64_t)L_7) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1054>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_0038:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1057>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1059>
		int64_t* L_16 = ___0_source;
		int64_t L_17 = *((int64_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1060>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_006d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1063>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1065>
		int64_t* L_26 = ___0_source;
		int64_t L_27 = *((int64_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1066>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_00a4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1069>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00db;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1071>
		int64_t* L_36 = ___0_source;
		int64_t L_37 = *((int64_t*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1072>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_00db:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1075>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0112;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1077>
		int64_t* L_46 = ___0_source;
		int64_t L_47 = *((int64_t*)L_46);
		V_10 = ((int16_t)L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1078>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_0112:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1081>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0149;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1083>
		int64_t* L_56 = ___0_source;
		int64_t L_57 = *((int64_t*)L_56);
		V_12 = ((int32_t)L_57);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1084>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_0149:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1087>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_017f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1089>
		int64_t* L_66 = ___0_source;
		int64_t L_67 = *((int64_t*)L_66);
		V_14 = L_67;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1090>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_017f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1093>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1095>
		int64_t* L_76 = ___0_source;
		int64_t L_77 = *((int64_t*)L_76);
		V_16 = ((int8_t)L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1096>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_01b6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1099>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01ed;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1101>
		int64_t* L_86 = ___0_source;
		int64_t L_87 = *((int64_t*)L_86);
		V_18 = ((float)L_87);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1102>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_01ed:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1105>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_022c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1107>
		int64_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1108>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_022c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1111>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_0260;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1113>
		int64_t* L_107 = ___0_source;
		int64_t L_108 = *((int64_t*)L_107);
		V_22 = (uint16_t)((int32_t)(uint16_t)L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1114>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_0260:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1117>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0294;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1119>
		int64_t* L_117 = ___0_source;
		int64_t L_118 = *((int64_t*)L_117);
		V_24 = (uint32_t)((int32_t)(uint32_t)L_118);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1120>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_0294:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1123>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c7;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1125>
		int64_t* L_127 = ___0_source;
		int64_t L_128 = *((int64_t*)L_127);
		V_26 = (uint64_t)L_128;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1126>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		goto IL_02cd;
	}

IL_02c7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1129>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02cd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1130>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_tE7F7A6A42185E0DFE18CAB89A8C3F8DA39820ECE);
		return;
	}
}
// Method Definition Index: 85104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m1967E1AEC5A0D9648CA206B187F6DA76F7865322_gshared (int8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
	memset(V_2, 0, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1135>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1137>
		int8_t* L_6 = ___0_source;
		int32_t L_7 = *((int8_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1138>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1141>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1143>
		int8_t* L_16 = ___0_source;
		int32_t L_17 = *((int8_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1144>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1147>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1149>
		int8_t* L_26 = ___0_source;
		int32_t L_27 = *((int8_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1150>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_00a3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1153>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1155>
		int8_t* L_36 = ___0_source;
		int32_t L_37 = *((int8_t*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1156>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_00da:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1159>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0110;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1161>
		int8_t* L_46 = ___0_source;
		int32_t L_47 = *((int8_t*)L_46);
		V_10 = (int16_t)L_47;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1162>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_0110:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1165>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0146;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1167>
		int8_t* L_56 = ___0_source;
		int32_t L_57 = *((int8_t*)L_56);
		V_12 = L_57;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1168>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_0146:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1171>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_017d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1173>
		int8_t* L_66 = ___0_source;
		int32_t L_67 = *((int8_t*)L_66);
		V_14 = ((int64_t)L_67);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1174>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_017d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1177>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1179>
		int8_t* L_76 = ___0_source;
		int32_t L_77 = *((int8_t*)L_76);
		V_16 = (int8_t)L_77;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1180>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_01b3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1183>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01ea;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1185>
		int8_t* L_86 = ___0_source;
		int32_t L_87 = *((int8_t*)L_86);
		V_18 = ((float)L_87);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1186>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_01ea:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1189>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_0229;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1191>
		int8_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = SByte_ToString_m49CC610EC3B380C06F59C71D999DC46B89632B6E(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1192>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_0229:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1195>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_025d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1197>
		int8_t* L_107 = ___0_source;
		int32_t L_108 = *((int8_t*)L_107);
		V_22 = (uint16_t)((int32_t)(uint16_t)L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1198>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_025d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1201>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0290;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1203>
		int8_t* L_117 = ___0_source;
		int32_t L_118 = *((int8_t*)L_117);
		V_24 = (uint32_t)L_118;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1204>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_0290:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1207>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1209>
		int8_t* L_127 = ___0_source;
		int32_t L_128 = *((int8_t*)L_127);
		V_26 = (uint64_t)((int64_t)L_128);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1210>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		goto IL_02ca;
	}

IL_02c4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1213>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02ca:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1214>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_tF92516759D9A03A4BA4A1091E632F859C16CC71C);
		return;
	}
}
// Method Definition Index: 85105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6F7761D5CA3434775F5725B70793B2676B5BB50A_gshared (float* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
	memset(V_2, 0, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1219>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1221>
		float* L_6 = ___0_source;
		float L_7 = *((float*)L_6);
		V_1 = (bool)((((int32_t)((((float)L_7) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1222>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_003e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1225>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1227>
		float* L_16 = ___0_source;
		float L_17 = *((float*)L_16);
		V_4 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1228>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_0073:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1231>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1233>
		float* L_26 = ___0_source;
		float L_27 = *((float*)L_26);
		V_6 = (Il2CppChar)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1234>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_00aa:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1237>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00e1;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1239>
		float* L_36 = ___0_source;
		float L_37 = *((float*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1240>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_00e1:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1243>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0118;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1245>
		float* L_46 = ___0_source;
		float L_47 = *((float*)L_46);
		V_10 = il2cpp_codegen_cast_double_to_int<int16_t>(L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1246>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_0118:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1249>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_014f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1251>
		float* L_56 = ___0_source;
		float L_57 = *((float*)L_56);
		V_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_57);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1252>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_014f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1255>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_0186;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1257>
		float* L_66 = ___0_source;
		float L_67 = *((float*)L_66);
		V_14 = il2cpp_codegen_cast_double_to_int<int64_t>(L_67);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1258>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_0186:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1261>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01bd;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1263>
		float* L_76 = ___0_source;
		float L_77 = *((float*)L_76);
		V_16 = il2cpp_codegen_cast_double_to_int<int8_t>(L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1264>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_01bd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1267>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01f3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1269>
		float* L_86 = ___0_source;
		float L_87 = *((float*)L_86);
		V_18 = L_87;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1270>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_01f3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1273>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_0232;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1275>
		float* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1276>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_0232:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1279>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_0266;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1281>
		float* L_107 = ___0_source;
		float L_108 = *((float*)L_107);
		V_22 = (uint16_t)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1282>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_0266:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1285>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_029a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1287>
		float* L_117 = ___0_source;
		float L_118 = *((float*)L_117);
		V_24 = (uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(L_118);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1288>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_029a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1291>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02ce;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1293>
		float* L_127 = ___0_source;
		float L_128 = *((float*)L_127);
		V_26 = (uint64_t)il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(L_128);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1294>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		goto IL_02d4;
	}

IL_02ce:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1297>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02d4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1298>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_t66991CFC2D167E1B9D8EB5CD6104A817541FF96C);
		return;
	}
}
// Method Definition Index: 85106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mB352A8132547464344E6835AF40F1C7DA0FC6179_gshared (String_t** ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF3FFCBA3F60AB742C0475B6563F3792C842DA87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44247D7E4ABA1E7C513713F50F94F136BCD6E20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8586FC824BFC2831E5694A3E40BFB0C7C5520B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E81413E6D3803FF61CCF7254021C14A4F405E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m776BD57FE5E923C6FDA3CA1640A021E2551B82E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92E3AECB318D1C3C767A7CD2CCF6DB1C5D31C399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8D8CF46982FAEDDC0EFB173C06C0EBD04BE618ED_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	const Il2CppFullySharedGenericAny L_16 = L_11;
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_30 = L_11;
	const Il2CppFullySharedGenericAny L_35 = L_11;
	const Il2CppFullySharedGenericAny L_37 = L_11;
	const Il2CppFullySharedGenericAny L_51 = L_11;
	const Il2CppFullySharedGenericAny L_61 = L_11;
	const Il2CppFullySharedGenericAny L_63 = L_11;
	const Il2CppFullySharedGenericAny L_75 = L_11;
	const Il2CppFullySharedGenericAny L_80 = L_11;
	const Il2CppFullySharedGenericAny L_82 = L_11;
	const Il2CppFullySharedGenericAny L_94 = L_11;
	const Il2CppFullySharedGenericAny L_99 = L_11;
	const Il2CppFullySharedGenericAny L_101 = L_11;
	const Il2CppFullySharedGenericAny L_113 = L_11;
	const Il2CppFullySharedGenericAny L_118 = L_11;
	const Il2CppFullySharedGenericAny L_120 = L_11;
	const Il2CppFullySharedGenericAny L_132 = L_11;
	const Il2CppFullySharedGenericAny L_137 = L_11;
	const Il2CppFullySharedGenericAny L_139 = L_11;
	const Il2CppFullySharedGenericAny L_151 = L_11;
	const Il2CppFullySharedGenericAny L_156 = L_11;
	const Il2CppFullySharedGenericAny L_158 = L_11;
	const Il2CppFullySharedGenericAny L_167 = L_11;
	const Il2CppFullySharedGenericAny L_179 = L_11;
	const Il2CppFullySharedGenericAny L_184 = L_11;
	const Il2CppFullySharedGenericAny L_186 = L_11;
	const Il2CppFullySharedGenericAny L_198 = L_11;
	const Il2CppFullySharedGenericAny L_203 = L_11;
	const Il2CppFullySharedGenericAny L_205 = L_11;
	const Il2CppFullySharedGenericAny L_217 = L_11;
	const Il2CppFullySharedGenericAny L_222 = L_11;
	const Il2CppFullySharedGenericAny L_224 = L_11;
	const Il2CppFullySharedGenericAny L_226 = L_11;
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(V_5, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(V_6, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	bool V_7 = false;
	uint8_t V_8 = 0x0;
	double V_9 = 0.0;
	uint8_t V_10 = 0x0;
	bool V_11 = false;
	bool V_12 = false;
	Il2CppChar V_13 = 0x0;
	bool V_14 = false;
	double V_15 = 0.0;
	bool V_16 = false;
	int16_t V_17 = 0;
	double V_18 = 0.0;
	int16_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t V_22 = 0;
	double V_23 = 0.0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	int64_t V_27 = 0;
	double V_28 = 0.0;
	int64_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	int8_t V_32 = 0x0;
	double V_33 = 0.0;
	int8_t V_34 = 0x0;
	bool V_35 = false;
	bool V_36 = false;
	float V_37 = 0.0f;
	double V_38 = 0.0;
	float V_39 = 0.0f;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint16_t V_43 = 0;
	double V_44 = 0.0;
	uint16_t V_45 = 0;
	bool V_46 = false;
	bool V_47 = false;
	uint32_t V_48 = 0;
	double V_49 = 0.0;
	uint32_t V_50 = 0;
	bool V_51 = false;
	bool V_52 = false;
	uint64_t V_53 = 0;
	double V_54 = 0.0;
	uint64_t V_55 = 0;
	bool V_56 = false;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B7_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B15_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B15_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	int32_t G_B20_0 = 0;
	Il2CppFullySharedGenericAny G_B25_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B25_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B33_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B33_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B41_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B41_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B49_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B49_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B57_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B57_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B65_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B65_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B75_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B75_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B83_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B83_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	Il2CppFullySharedGenericAny G_B91_0 = alloca(SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	memset(G_B91_0, 0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1303>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1305>
		String_t** L_6 = ___0_source;
		String_t* L_7 = *((String_t**)L_6);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_8;
		L_8 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_7, (&V_1), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1306>
		Il2CppFullySharedGenericAny* L_10;
		L_10 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_11, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0041:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1308>
		String_t** L_12 = ___0_source;
		String_t* L_13 = *((String_t**)L_12);
		bool L_14;
		L_14 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_13, (&V_2), NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		bool L_15;
		L_15 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A((&V_2), (&V_3), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0063;
		}
	}

IL_0057:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_16, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B7_0, L_16, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_006f;
	}

IL_0063:
	{
		Il2CppFullySharedGenericAny* L_17;
		L_17 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B7_0, L_18, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_006f:
	{
		il2cpp_codegen_memcpy(V_5, G_B7_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0076:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1314>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1316>
		String_t** L_25 = ___0_source;
		String_t* L_26 = *((String_t**)L_25);
		bool L_27;
		L_27 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_26, (&V_8), NULL);
		V_11 = L_27;
		bool L_28 = V_11;
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1317>
		Il2CppFullySharedGenericAny* L_29;
		L_29 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_30, L_29, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_30, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_00b8:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1319>
		String_t** L_31 = ___0_source;
		String_t* L_32 = *((String_t**)L_31);
		bool L_33;
		L_33 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_32, (&V_9), NULL);
		if (!L_33)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_34;
		L_34 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC((&V_9), (&V_10), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00da;
		}
	}

IL_00ce:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_35, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B15_0, L_35, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_00e6;
	}

IL_00da:
	{
		Il2CppFullySharedGenericAny* L_36;
		L_36 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_37, L_36, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B15_0, L_37, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_00e6:
	{
		il2cpp_codegen_memcpy(V_5, G_B15_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_00ed:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1325>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		V_12 = L_42;
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_0136;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1327>
		String_t** L_44 = ___0_source;
		String_t* L_45 = *((String_t**)L_44);
		bool L_46;
		L_46 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_45, NULL);
		if (!L_46)
		{
			goto IL_0119;
		}
	}
	{
		G_B20_0 = 0;
		goto IL_0121;
	}

IL_0119:
	{
		String_t** L_47 = ___0_source;
		String_t* L_48 = *((String_t**)L_47);
		NullCheck(L_48);
		Il2CppChar L_49;
		L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_48, 0, NULL);
		G_B20_0 = ((int32_t)(L_49));
	}

IL_0121:
	{
		V_13 = (Il2CppChar)G_B20_0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1328>
		Il2CppFullySharedGenericAny* L_50;
		L_50 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_13), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_51, L_50, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_51, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0136:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1331>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		V_14 = L_56;
		bool L_57 = V_14;
		if (!L_57)
		{
			goto IL_0180;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1333>
		String_t** L_58 = ___0_source;
		String_t* L_59 = *((String_t**)L_58);
		bool L_60;
		L_60 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_59, (&V_15), NULL);
		if (L_60)
		{
			goto IL_016d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_61, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B25_0, L_61, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0179;
	}

IL_016d:
	{
		Il2CppFullySharedGenericAny* L_62;
		L_62 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_63, L_62, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B25_0, L_63, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_0179:
	{
		il2cpp_codegen_memcpy(V_5, G_B25_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0180:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1338>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		V_16 = L_68;
		bool L_69 = V_16;
		if (!L_69)
		{
			goto IL_01f7;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1340>
		String_t** L_70 = ___0_source;
		String_t* L_71 = *((String_t**)L_70);
		bool L_72;
		L_72 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_71, (&V_17), NULL);
		V_20 = L_72;
		bool L_73 = V_20;
		if (!L_73)
		{
			goto IL_01c2;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1341>
		Il2CppFullySharedGenericAny* L_74;
		L_74 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_17), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_75, L_74, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_75, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_01c2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1343>
		String_t** L_76 = ___0_source;
		String_t* L_77 = *((String_t**)L_76);
		bool L_78;
		L_78 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_77, (&V_18), NULL);
		if (!L_78)
		{
			goto IL_01d8;
		}
	}
	{
		bool L_79;
		L_79 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B((&V_18), (&V_19), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		if (L_79)
		{
			goto IL_01e4;
		}
	}

IL_01d8:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_80, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B33_0, L_80, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_01f0;
	}

IL_01e4:
	{
		Il2CppFullySharedGenericAny* L_81;
		L_81 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_19), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_82, L_81, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B33_0, L_82, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_01f0:
	{
		il2cpp_codegen_memcpy(V_5, G_B33_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_01f7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1349>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		V_21 = L_87;
		bool L_88 = V_21;
		if (!L_88)
		{
			goto IL_026e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1351>
		String_t** L_89 = ___0_source;
		String_t* L_90 = *((String_t**)L_89);
		bool L_91;
		L_91 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_90, (&V_22), NULL);
		V_25 = L_91;
		bool L_92 = V_25;
		if (!L_92)
		{
			goto IL_0239;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1352>
		Il2CppFullySharedGenericAny* L_93;
		L_93 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_94, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0239:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1354>
		String_t** L_95 = ___0_source;
		String_t* L_96 = *((String_t**)L_95);
		bool L_97;
		L_97 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_96, (&V_23), NULL);
		if (!L_97)
		{
			goto IL_024f;
		}
	}
	{
		bool L_98;
		L_98 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF3FFCBA3F60AB742C0475B6563F3792C842DA87((&V_23), (&V_24), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAF3FFCBA3F60AB742C0475B6563F3792C842DA87_RuntimeMethod_var);
		if (L_98)
		{
			goto IL_025b;
		}
	}

IL_024f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_99, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B41_0, L_99, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0267;
	}

IL_025b:
	{
		Il2CppFullySharedGenericAny* L_100;
		L_100 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_101, L_100, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B41_0, L_101, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_0267:
	{
		il2cpp_codegen_memcpy(V_5, G_B41_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_026e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1360>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		bool L_106;
		L_106 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_103, L_105, NULL);
		V_26 = L_106;
		bool L_107 = V_26;
		if (!L_107)
		{
			goto IL_02e5;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1362>
		String_t** L_108 = ___0_source;
		String_t* L_109 = *((String_t**)L_108);
		bool L_110;
		L_110 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_109, (&V_27), NULL);
		V_30 = L_110;
		bool L_111 = V_30;
		if (!L_111)
		{
			goto IL_02b0;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1363>
		Il2CppFullySharedGenericAny* L_112;
		L_112 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_27), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_113, L_112, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_113, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_02b0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1365>
		String_t** L_114 = ___0_source;
		String_t* L_115 = *((String_t**)L_114);
		bool L_116;
		L_116 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_115, (&V_28), NULL);
		if (!L_116)
		{
			goto IL_02c6;
		}
	}
	{
		bool L_117;
		L_117 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44247D7E4ABA1E7C513713F50F94F136BCD6E20A((&V_28), (&V_29), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44247D7E4ABA1E7C513713F50F94F136BCD6E20A_RuntimeMethod_var);
		if (L_117)
		{
			goto IL_02d2;
		}
	}

IL_02c6:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_118, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B49_0, L_118, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_02de;
	}

IL_02d2:
	{
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_29), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B49_0, L_120, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_02de:
	{
		il2cpp_codegen_memcpy(V_5, G_B49_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_02e5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1371>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_31 = L_125;
		bool L_126 = V_31;
		if (!L_126)
		{
			goto IL_035c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1373>
		String_t** L_127 = ___0_source;
		String_t* L_128 = *((String_t**)L_127);
		bool L_129;
		L_129 = SByte_TryParse_m9C205D94AB4FF1CA82EA082E38DD01A493A77ED6(L_128, (&V_32), NULL);
		V_35 = L_129;
		bool L_130 = V_35;
		if (!L_130)
		{
			goto IL_0327;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1374>
		Il2CppFullySharedGenericAny* L_131;
		L_131 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_32), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_132, L_131, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_132, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0327:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1376>
		String_t** L_133 = ___0_source;
		String_t* L_134 = *((String_t**)L_133);
		bool L_135;
		L_135 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_134, (&V_33), NULL);
		if (!L_135)
		{
			goto IL_033d;
		}
	}
	{
		bool L_136;
		L_136 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8586FC824BFC2831E5694A3E40BFB0C7C5520B10((&V_33), (&V_34), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8586FC824BFC2831E5694A3E40BFB0C7C5520B10_RuntimeMethod_var);
		if (L_136)
		{
			goto IL_0349;
		}
	}

IL_033d:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_137, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B57_0, L_137, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0355;
	}

IL_0349:
	{
		Il2CppFullySharedGenericAny* L_138;
		L_138 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_34), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_139, L_138, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B57_0, L_139, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_0355:
	{
		il2cpp_codegen_memcpy(V_5, G_B57_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_035c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1382>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		bool L_144;
		L_144 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_141, L_143, NULL);
		V_36 = L_144;
		bool L_145 = V_36;
		if (!L_145)
		{
			goto IL_03d3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1384>
		String_t** L_146 = ___0_source;
		String_t* L_147 = *((String_t**)L_146);
		bool L_148;
		L_148 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_147, (&V_37), NULL);
		V_40 = L_148;
		bool L_149 = V_40;
		if (!L_149)
		{
			goto IL_039e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1385>
		Il2CppFullySharedGenericAny* L_150;
		L_150 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_37), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_151, L_150, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_151, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_039e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1387>
		String_t** L_152 = ___0_source;
		String_t* L_153 = *((String_t**)L_152);
		bool L_154;
		L_154 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_153, (&V_38), NULL);
		if (!L_154)
		{
			goto IL_03b4;
		}
	}
	{
		bool L_155;
		L_155 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E81413E6D3803FF61CCF7254021C14A4F405E63((&V_38), (&V_39), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E81413E6D3803FF61CCF7254021C14A4F405E63_RuntimeMethod_var);
		if (L_155)
		{
			goto IL_03c0;
		}
	}

IL_03b4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_156, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B65_0, L_156, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_03cc;
	}

IL_03c0:
	{
		Il2CppFullySharedGenericAny* L_157;
		L_157 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_39), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_158, L_157, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B65_0, L_158, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_03cc:
	{
		il2cpp_codegen_memcpy(V_5, G_B65_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_03d3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1393>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		V_41 = L_163;
		bool L_164 = V_41;
		if (!L_164)
		{
			goto IL_0405;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1395>
		String_t** L_165 = ___0_source;
		Il2CppFullySharedGenericAny* L_166;
		L_166 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline(L_165, il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_167, L_166, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_167, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0405:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1398>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		bool L_172;
		L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
		V_42 = L_172;
		bool L_173 = V_42;
		if (!L_173)
		{
			goto IL_047c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1400>
		String_t** L_174 = ___0_source;
		String_t* L_175 = *((String_t**)L_174);
		bool L_176;
		L_176 = UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6(L_175, (&V_43), NULL);
		V_46 = L_176;
		bool L_177 = V_46;
		if (!L_177)
		{
			goto IL_0447;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1401>
		Il2CppFullySharedGenericAny* L_178;
		L_178 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_43), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_179, L_178, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_179, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0447:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1403>
		String_t** L_180 = ___0_source;
		String_t* L_181 = *((String_t**)L_180);
		bool L_182;
		L_182 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_181, (&V_44), NULL);
		if (!L_182)
		{
			goto IL_045d;
		}
	}
	{
		bool L_183;
		L_183 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m776BD57FE5E923C6FDA3CA1640A021E2551B82E2((&V_44), (&V_45), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m776BD57FE5E923C6FDA3CA1640A021E2551B82E2_RuntimeMethod_var);
		if (L_183)
		{
			goto IL_0469;
		}
	}

IL_045d:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_184, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B75_0, L_184, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0475;
	}

IL_0469:
	{
		Il2CppFullySharedGenericAny* L_185;
		L_185 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_45), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_186, L_185, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B75_0, L_186, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_0475:
	{
		il2cpp_codegen_memcpy(V_5, G_B75_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_047c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1409>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		bool L_191;
		L_191 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_188, L_190, NULL);
		V_47 = L_191;
		bool L_192 = V_47;
		if (!L_192)
		{
			goto IL_04f0;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1411>
		String_t** L_193 = ___0_source;
		String_t* L_194 = *((String_t**)L_193);
		bool L_195;
		L_195 = UInt32_TryParse_mD470E3BAC9F792AB0BC616510AE3FA78C3CCB1E9(L_194, (&V_48), NULL);
		V_51 = L_195;
		bool L_196 = V_51;
		if (!L_196)
		{
			goto IL_04be;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1412>
		Il2CppFullySharedGenericAny* L_197;
		L_197 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_48), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_198, L_197, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_198, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_04be:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1414>
		String_t** L_199 = ___0_source;
		String_t* L_200 = *((String_t**)L_199);
		bool L_201;
		L_201 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_200, (&V_49), NULL);
		if (!L_201)
		{
			goto IL_04d4;
		}
	}
	{
		bool L_202;
		L_202 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92E3AECB318D1C3C767A7CD2CCF6DB1C5D31C399((&V_49), (&V_50), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92E3AECB318D1C3C767A7CD2CCF6DB1C5D31C399_RuntimeMethod_var);
		if (L_202)
		{
			goto IL_04e0;
		}
	}

IL_04d4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_203, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B83_0, L_203, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_04ec;
	}

IL_04e0:
	{
		Il2CppFullySharedGenericAny* L_204;
		L_204 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_50), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_205, L_204, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B83_0, L_205, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_04ec:
	{
		il2cpp_codegen_memcpy(V_5, G_B83_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_04f0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1420>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_206 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_207;
		L_207 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_206, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		bool L_210;
		L_210 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_207, L_209, NULL);
		V_52 = L_210;
		bool L_211 = V_52;
		if (!L_211)
		{
			goto IL_0561;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1422>
		String_t** L_212 = ___0_source;
		String_t* L_213 = *((String_t**)L_212);
		bool L_214;
		L_214 = UInt64_TryParse_mF3AF0976C95B83F09039AA0205FCB76B1CFD6D84(L_213, (&V_53), NULL);
		V_56 = L_214;
		bool L_215 = V_56;
		if (!L_215)
		{
			goto IL_052f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1423>
		Il2CppFullySharedGenericAny* L_216;
		L_216 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_53), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_217, L_216, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(V_5, L_217, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_052f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1425>
		String_t** L_218 = ___0_source;
		String_t* L_219 = *((String_t**)L_218);
		bool L_220;
		L_220 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_219, (&V_54), NULL);
		if (!L_220)
		{
			goto IL_0545;
		}
	}
	{
		bool L_221;
		L_221 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8D8CF46982FAEDDC0EFB173C06C0EBD04BE618ED((&V_54), (&V_55), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8D8CF46982FAEDDC0EFB173C06C0EBD04BE618ED_RuntimeMethod_var);
		if (L_221)
		{
			goto IL_0551;
		}
	}

IL_0545:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(L_222, V_6, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B91_0, L_222, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_055d;
	}

IL_0551:
	{
		Il2CppFullySharedGenericAny* L_223;
		L_223 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_55), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_224, L_223, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(G_B91_0, L_224, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
	}

IL_055d:
	{
		il2cpp_codegen_memcpy(V_5, G_B91_0, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		goto IL_0567;
	}

IL_0561:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1431>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_225 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_225, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_225, method);
	}

IL_0567:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1432>
		il2cpp_codegen_memcpy(L_226, V_5, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		il2cpp_codegen_memcpy(il2cppRetVal, L_226, SizeOf_TDestination_tFFFCF33D557AC5B125966119C81438FE88B79906);
		return;
	}
}
// Method Definition Index: 85107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6A1DA3430E328697B3C1E053374FAEACF0C77F95_gshared (uint16_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
	memset(V_2, 0, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1437>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1439>
		uint16_t* L_6 = ___0_source;
		int32_t L_7 = *((uint16_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1440>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1443>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1445>
		uint16_t* L_16 = ___0_source;
		int32_t L_17 = *((uint16_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1446>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1449>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a2;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1451>
		uint16_t* L_26 = ___0_source;
		int32_t L_27 = *((uint16_t*)L_26);
		V_6 = (Il2CppChar)L_27;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1452>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_00a2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1455>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00d9;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1457>
		uint16_t* L_36 = ___0_source;
		int32_t L_37 = *((uint16_t*)L_36);
		V_8 = ((double)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1458>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_00d9:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1461>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0110;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1463>
		uint16_t* L_46 = ___0_source;
		int32_t L_47 = *((uint16_t*)L_46);
		V_10 = ((int16_t)L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1464>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_0110:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1467>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0146;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1469>
		uint16_t* L_56 = ___0_source;
		int32_t L_57 = *((uint16_t*)L_56);
		V_12 = L_57;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1470>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_0146:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1473>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_017d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1475>
		uint16_t* L_66 = ___0_source;
		int32_t L_67 = *((uint16_t*)L_66);
		V_14 = ((int64_t)(uint64_t)((uint32_t)L_67));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1476>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_017d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1479>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1481>
		uint16_t* L_76 = ___0_source;
		int32_t L_77 = *((uint16_t*)L_76);
		V_16 = ((int8_t)L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1482>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_01b4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1485>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01eb;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1487>
		uint16_t* L_86 = ___0_source;
		int32_t L_87 = *((uint16_t*)L_86);
		V_18 = ((float)L_87);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1488>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_01eb:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1491>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_022a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1493>
		uint16_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = UInt16_ToString_mCFE0EB73F03E7230D7F2694140FF9CECE793184D(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1494>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_022a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1497>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_025d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1499>
		uint16_t* L_107 = ___0_source;
		int32_t L_108 = *((uint16_t*)L_107);
		V_22 = (uint16_t)L_108;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1500>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_025d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1503>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0290;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1505>
		uint16_t* L_117 = ___0_source;
		int32_t L_118 = *((uint16_t*)L_117);
		V_24 = (uint32_t)L_118;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1506>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_0290:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1509>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1511>
		uint16_t* L_127 = ___0_source;
		int32_t L_128 = *((uint16_t*)L_127);
		V_26 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_128));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1512>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		goto IL_02ca;
	}

IL_02c4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1515>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02ca:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1516>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_t6F1A026183BE41B11A4BC0A2CADF464DFDA48D90);
		return;
	}
}
// Method Definition Index: 85108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m62DAACE3E3F12517F13F380BE744A38D69E12156_gshared (uint32_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_130 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
	memset(V_2, 0, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1521>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1523>
		uint32_t* L_6 = ___0_source;
		int32_t L_7 = *((uint32_t*)L_6);
		V_1 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1524>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_0037:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1527>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1529>
		uint32_t* L_16 = ___0_source;
		int32_t L_17 = *((uint32_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1530>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_006c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1533>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1535>
		uint32_t* L_26 = ___0_source;
		int32_t L_27 = *((uint32_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1536>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_00a3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1539>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00db;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1541>
		uint32_t* L_36 = ___0_source;
		int32_t L_37 = *((uint32_t*)L_36);
		V_8 = ((double)((double)(uint32_t)L_37));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1542>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_00db:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1545>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0112;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1547>
		uint32_t* L_46 = ___0_source;
		int32_t L_47 = *((uint32_t*)L_46);
		V_10 = ((int16_t)L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1548>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_0112:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1551>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0148;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1553>
		uint32_t* L_56 = ___0_source;
		int32_t L_57 = *((uint32_t*)L_56);
		V_12 = L_57;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1554>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_0148:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1557>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_017f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1559>
		uint32_t* L_66 = ___0_source;
		int32_t L_67 = *((uint32_t*)L_66);
		V_14 = ((int64_t)(uint64_t)((uint32_t)L_67));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1560>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_017f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1563>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1565>
		uint32_t* L_76 = ___0_source;
		int32_t L_77 = *((uint32_t*)L_76);
		V_16 = ((int8_t)L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1566>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_01b6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1569>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01ee;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1571>
		uint32_t* L_86 = ___0_source;
		int32_t L_87 = *((uint32_t*)L_86);
		V_18 = ((float)((double)(uint32_t)L_87));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1572>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_01ee:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1575>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_022d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1577>
		uint32_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = UInt32_ToString_m5A3136A9B92E1A5285D56349AD71B4075BD254AC(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1578>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_022d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1581>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_0261;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1583>
		uint32_t* L_107 = ___0_source;
		int32_t L_108 = *((uint32_t*)L_107);
		V_22 = (uint16_t)((int32_t)(uint16_t)L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1584>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_0261:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1587>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0294;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1589>
		uint32_t* L_117 = ___0_source;
		int32_t L_118 = *((uint32_t*)L_117);
		V_24 = (uint32_t)L_118;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1590>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_0294:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1593>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c8;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1595>
		uint32_t* L_127 = ___0_source;
		int32_t L_128 = *((uint32_t*)L_127);
		V_26 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_128));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1596>
		Il2CppFullySharedGenericAny* L_129;
		L_129 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline((&V_26), il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_130, L_129, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(V_2, L_130, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		goto IL_02ce;
	}

IL_02c8:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1599>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_131 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_131, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, method);
	}

IL_02ce:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1600>
		il2cpp_codegen_memcpy(L_132, V_2, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_132, SizeOf_TDestination_tC05209D9AE090B66B4CEC35E689733362EDD600E);
		return;
	}
}
// Method Definition Index: 85109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m855CA8553E43D1238E78F509DF06C0671DB8A242_gshared (uint64_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_29 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_69 = L_9;
	const Il2CppFullySharedGenericAny L_79 = L_9;
	const Il2CppFullySharedGenericAny L_89 = L_9;
	const Il2CppFullySharedGenericAny L_100 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_120 = L_9;
	const Il2CppFullySharedGenericAny L_131 = L_9;
	const Il2CppFullySharedGenericAny L_133 = L_9;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
	memset(V_2, 0, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	int16_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	int8_t V_16 = 0x0;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	String_t* V_20 = NULL;
	bool V_21 = false;
	uint16_t V_22 = 0;
	bool V_23 = false;
	uint32_t V_24 = 0;
	bool V_25 = false;
	uint64_t V_26 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1605>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1607>
		uint64_t* L_6 = ___0_source;
		int64_t L_7 = *((int64_t*)L_6);
		V_1 = (bool)((!(((uint64_t)L_7) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1608>
		Il2CppFullySharedGenericAny* L_8;
		L_8 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppFullySharedGenericAny_m02A164781C4EE4C42B6AE487A64800BA93EB1AB4_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_0038:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1611>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1613>
		uint64_t* L_16 = ___0_source;
		int64_t L_17 = *((int64_t*)L_16);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_17);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1614>
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppFullySharedGenericAny_m151ACBED6E7BB54C415CB7E8EA33776F7039F595_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_006d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1617>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1619>
		uint64_t* L_26 = ___0_source;
		int64_t L_27 = *((int64_t*)L_26);
		V_6 = (Il2CppChar)((int32_t)(uint16_t)L_27);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1620>
		Il2CppFullySharedGenericAny* L_28;
		L_28 = UnsafeUtility_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIl2CppFullySharedGenericAny_mE30442D65E3FFFD05811A5A732C3847D916F8172_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_00a4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1623>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1625>
		uint64_t* L_36 = ___0_source;
		int64_t L_37 = *((int64_t*)L_36);
		V_8 = ((double)((double)(uint64_t)L_37));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1626>
		Il2CppFullySharedGenericAny* L_38;
		L_38 = UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisIl2CppFullySharedGenericAny_m10EEC08C1DE028AFE3580468F3266517C70DF884_inline((&V_8), il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_39, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_00dc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1629>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1631>
		uint64_t* L_46 = ___0_source;
		int64_t L_47 = *((int64_t*)L_46);
		V_10 = ((int16_t)L_47);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1632>
		Il2CppFullySharedGenericAny* L_48;
		L_48 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisIl2CppFullySharedGenericAny_mC1950F452E4C4F99289C357AC220D052A17EC021_inline((&V_10), il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_49, L_48, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_49, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_0113:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1635>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_014a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1637>
		uint64_t* L_56 = ___0_source;
		int64_t L_57 = *((int64_t*)L_56);
		V_12 = ((int32_t)L_57);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1638>
		Il2CppFullySharedGenericAny* L_58;
		L_58 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIl2CppFullySharedGenericAny_m3B7A87B8C2F56C1CF50C773198ABF9711047FD06_inline((&V_12), il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_59, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_014a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1641>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_13 = L_64;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_0180;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1643>
		uint64_t* L_66 = ___0_source;
		int64_t L_67 = *((int64_t*)L_66);
		V_14 = L_67;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1644>
		Il2CppFullySharedGenericAny* L_68;
		L_68 = UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppFullySharedGenericAny_m687950FF04C028E62165079151C24D430F026B95_inline((&V_14), il2cpp_rgctx_method(method->rgctx_data, 9));
		il2cpp_codegen_memcpy(L_69, L_68, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_69, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_0180:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1647>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01b7;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1649>
		uint64_t* L_76 = ___0_source;
		int64_t L_77 = *((int64_t*)L_76);
		V_16 = ((int8_t)L_77);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1650>
		Il2CppFullySharedGenericAny* L_78;
		L_78 = UnsafeUtility_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIl2CppFullySharedGenericAny_m0ABADD1C0AE66B503D3F7FA89A4F7FAE085164B3_inline((&V_16), il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_79, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_01b7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1653>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		V_17 = L_84;
		bool L_85 = V_17;
		if (!L_85)
		{
			goto IL_01ef;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1655>
		uint64_t* L_86 = ___0_source;
		int64_t L_87 = *((int64_t*)L_86);
		V_18 = ((float)((double)(uint64_t)L_87));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1656>
		Il2CppFullySharedGenericAny* L_88;
		L_88 = UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppFullySharedGenericAny_m2A0F037A143954054294E08B14B478A96CBCC78B_inline((&V_18), il2cpp_rgctx_method(method->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_89, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_01ef:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1659>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_19 = L_94;
		bool L_95 = V_19;
		if (!L_95)
		{
			goto IL_022e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1661>
		uint64_t* L_96 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97;
		L_97 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_98;
		L_98 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7(L_96, (RuntimeObject*)L_97, NULL);
		V_20 = L_98;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1662>
		Il2CppFullySharedGenericAny* L_99;
		L_99 = UnsafeUtility_As_TisString_t_TisIl2CppFullySharedGenericAny_m989292C8179F6E58E602CB322180138989BC2C1B_inline((&V_20), il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_100, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_022e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1665>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_21 = L_105;
		bool L_106 = V_21;
		if (!L_106)
		{
			goto IL_0262;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1667>
		uint64_t* L_107 = ___0_source;
		int64_t L_108 = *((int64_t*)L_107);
		V_22 = (uint16_t)((int32_t)(uint16_t)L_108);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1668>
		Il2CppFullySharedGenericAny* L_109;
		L_109 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIl2CppFullySharedGenericAny_mE47504DDA677938572E9CC34A6899DAAF67FC315_inline((&V_22), il2cpp_rgctx_method(method->rgctx_data, 13));
		il2cpp_codegen_memcpy(L_110, L_109, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_110, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_0262:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1671>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_23 = L_115;
		bool L_116 = V_23;
		if (!L_116)
		{
			goto IL_0296;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1673>
		uint64_t* L_117 = ___0_source;
		int64_t L_118 = *((int64_t*)L_117);
		V_24 = (uint32_t)((int32_t)(uint32_t)L_118);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1674>
		Il2CppFullySharedGenericAny* L_119;
		L_119 = UnsafeUtility_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIl2CppFullySharedGenericAny_mD4534073986F9E4F6E8290A86216FFCEEDC48B6B_inline((&V_24), il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy(L_120, L_119, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_120, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_0296:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1677>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_25 = L_125;
		bool L_126 = V_25;
		if (!L_126)
		{
			goto IL_02c8;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1679>
		uint64_t* L_127 = ___0_source;
		int64_t L_128 = *((int64_t*)L_127);
		V_26 = (uint64_t)L_128;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1680>
		uint64_t* L_129 = ___0_source;
		Il2CppFullySharedGenericAny* L_130;
		L_130 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppFullySharedGenericAny_m9B055D97DA8298E5759CE554E0A02333DC6FAE9C_inline(L_129, il2cpp_rgctx_method(method->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_131, L_130, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(V_2, L_131, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		goto IL_02ce;
	}

IL_02c8:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1683>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_132 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_132, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_132, method);
	}

IL_02ce:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:1684>
		il2cpp_codegen_memcpy(L_133, V_2, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		il2cpp_codegen_memcpy(il2cppRetVal, L_133, SizeOf_TDestination_t4280125D4D98995ECF9FDD95F9F02D8A45BFB066);
		return;
	}
}
// Method Definition Index: 85096
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
	const Il2CppFullySharedGenericAny L_32 = L_28;
	const Il2CppFullySharedGenericAny L_36 = L_28;
	const Il2CppFullySharedGenericAny L_40 = L_28;
	const Il2CppFullySharedGenericAny L_44 = L_28;
	const Il2CppFullySharedGenericAny L_48 = L_28;
	const Il2CppFullySharedGenericAny L_52 = L_28;
	const Il2CppFullySharedGenericAny L_56 = L_28;
	const Il2CppFullySharedGenericAny L_60 = L_28;
	const Il2CppFullySharedGenericAny L_64 = L_28;
	const Il2CppFullySharedGenericAny L_68 = L_28;
	const Il2CppFullySharedGenericAny L_72 = L_28;
	const Il2CppFullySharedGenericAny L_76 = L_28;
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:484>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:485>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		V_1 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:487>
		Type_t* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		Type_t* L_6 = V_1;
		Type_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_7, NULL);
		G_B3_0 = ((int32_t)(L_8));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_4 = (bool)G_B3_0;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:489>
		Il2CppFullySharedGenericAny* L_10 = ___1_destination;
		il2cpp_codegen_initobj(L_10, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:490>
		V_5 = (bool)0;
		goto IL_020d;
	}

IL_003f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:493>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		V_2 = L_12;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:494>
		Type_t* L_13 = V_2;
		NullCheck(L_13);
		bool L_14;
		L_14 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_13, NULL);
		if (L_14)
		{
			goto IL_005b;
		}
	}
	{
		Type_t* L_15 = V_2;
		Type_t* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_17;
		L_17 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, L_16, NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_005c;
	}

IL_005b:
	{
		G_B8_0 = 0;
	}

IL_005c:
	{
		V_6 = (bool)G_B8_0;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0072;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:496>
		Il2CppFullySharedGenericAny* L_19 = ___1_destination;
		il2cpp_codegen_initobj(L_19, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:497>
		V_5 = (bool)0;
		goto IL_020d;
	}

IL_0072:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:500>
		Type_t* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		int32_t L_21;
		L_21 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_20, NULL);
		V_3 = L_21;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:502>
		int32_t L_22 = V_3;
		V_8 = L_22;
		int32_t L_23 = V_8;
		V_7 = L_23;
		int32_t L_24 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 3)))
		{
			case 0:
			{
				goto IL_00ce;
			}
			case 1:
			{
				goto IL_0100;
			}
			case 2:
			{
				goto IL_017d;
			}
			case 3:
			{
				goto IL_00e7;
			}
			case 4:
			{
				goto IL_0132;
			}
			case 5:
			{
				goto IL_01bf;
			}
			case 6:
			{
				goto IL_014b;
			}
			case 7:
			{
				goto IL_01d5;
			}
			case 8:
			{
				goto IL_0164;
			}
			case 9:
			{
				goto IL_01eb;
			}
			case 10:
			{
				goto IL_0193;
			}
			case 11:
			{
				goto IL_0119;
			}
			case 12:
			{
				goto IL_0201;
			}
			case 13:
			{
				goto IL_0201;
			}
			case 14:
			{
				goto IL_0201;
			}
			case 15:
			{
				goto IL_01a9;
			}
		}
	}
	{
		goto IL_0201;
	}

IL_00ce:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:505>
		Il2CppFullySharedGenericAny* L_25 = ___1_destination;
		Il2CppFullySharedGenericAny* L_26 = ___0_source;
		bool* L_27;
		L_27 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m442ECCC3108A0DA30933490DE73A749856262150_inline(L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m856D276A33760D3F9B6FDC631F337372BC41037E(L_27, (Il2CppFullySharedGenericAny*)L_28, il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_25, L_28, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_25, (void*)L_28);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:506>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_00e7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:508>
		Il2CppFullySharedGenericAny* L_29 = ___1_destination;
		Il2CppFullySharedGenericAny* L_30 = ___0_source;
		uint8_t* L_31;
		L_31 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAAB228FFADB76FA6BB6686BBDB9479779E20A7C6_inline(L_30, il2cpp_rgctx_method(method->rgctx_data, 7));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mFD12A694611E03895F4458912B9FE341B07D690C(L_31, (Il2CppFullySharedGenericAny*)L_32, il2cpp_rgctx_method(method->rgctx_data, 8));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_29, L_32, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_29, (void*)L_32);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:509>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0100:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:511>
		Il2CppFullySharedGenericAny* L_33 = ___1_destination;
		Il2CppFullySharedGenericAny* L_34 = ___0_source;
		Il2CppChar* L_35;
		L_35 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE5405089F0731E1FEDDBDC485048456549B8F81A_inline(L_34, il2cpp_rgctx_method(method->rgctx_data, 9));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m691506CA4682A3878264EEB52FA188912614F238(L_35, (Il2CppFullySharedGenericAny*)L_36, il2cpp_rgctx_method(method->rgctx_data, 10));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, L_36, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:512>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0119:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:514>
		Il2CppFullySharedGenericAny* L_37 = ___1_destination;
		Il2CppFullySharedGenericAny* L_38 = ___0_source;
		double* L_39;
		L_39 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBB444EE29C3C196347A1EE7E44C9F299B396D5E_inline(L_38, il2cpp_rgctx_method(method->rgctx_data, 11));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mCC237A07CD7A39540520FE43C66A49204AD02060(L_39, (Il2CppFullySharedGenericAny*)L_40, il2cpp_rgctx_method(method->rgctx_data, 12));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_37, L_40, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_37, (void*)L_40);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:515>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0132:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:517>
		Il2CppFullySharedGenericAny* L_41 = ___1_destination;
		Il2CppFullySharedGenericAny* L_42 = ___0_source;
		int16_t* L_43;
		L_43 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7F3D38918DD7AAB2206B1C5D2F95935F1A78141_inline(L_42, il2cpp_rgctx_method(method->rgctx_data, 13));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m262B2BBB933FB2B1DBDA65D418FD3A0EA166B4AF(L_43, (Il2CppFullySharedGenericAny*)L_44, il2cpp_rgctx_method(method->rgctx_data, 14));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_44, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_44);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:518>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_014b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:520>
		Il2CppFullySharedGenericAny* L_45 = ___1_destination;
		Il2CppFullySharedGenericAny* L_46 = ___0_source;
		int32_t* L_47;
		L_47 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5E4D05CB0C699ABEB044C09A5C38EA0E714D013B_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 15));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m0E14C5AEDCB7F8A75EEE6D4D476E00E0DD7A5531(L_47, (Il2CppFullySharedGenericAny*)L_48, il2cpp_rgctx_method(method->rgctx_data, 16));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_45, L_48, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_45, (void*)L_48);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:521>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0164:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:523>
		Il2CppFullySharedGenericAny* L_49 = ___1_destination;
		Il2CppFullySharedGenericAny* L_50 = ___0_source;
		int64_t* L_51;
		L_51 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDE435009462C7C302356109B64DAD634148B4099_inline(L_50, il2cpp_rgctx_method(method->rgctx_data, 17));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m3BFB7BDCFA2447B375F048512E95569635B8D4E4(L_51, (Il2CppFullySharedGenericAny*)L_52, il2cpp_rgctx_method(method->rgctx_data, 18));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_49, L_52, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_49, (void*)L_52);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:524>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_017d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:526>
		Il2CppFullySharedGenericAny* L_53 = ___1_destination;
		Il2CppFullySharedGenericAny* L_54 = ___0_source;
		int8_t* L_55;
		L_55 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4310668E52FB7067987D6E9321559DDF3A2FA60A_inline(L_54, il2cpp_rgctx_method(method->rgctx_data, 19));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m1967E1AEC5A0D9648CA206B187F6DA76F7865322(L_55, (Il2CppFullySharedGenericAny*)L_56, il2cpp_rgctx_method(method->rgctx_data, 20));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_56, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_56);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:527>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0193:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:529>
		Il2CppFullySharedGenericAny* L_57 = ___1_destination;
		Il2CppFullySharedGenericAny* L_58 = ___0_source;
		float* L_59;
		L_59 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9E826A3FF880E1787077B6E79CA0C8C363A54997_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 21));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6F7761D5CA3434775F5725B70793B2676B5BB50A(L_59, (Il2CppFullySharedGenericAny*)L_60, il2cpp_rgctx_method(method->rgctx_data, 22));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_57, L_60, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_57, (void*)L_60);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:530>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_01a9:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:532>
		Il2CppFullySharedGenericAny* L_61 = ___1_destination;
		Il2CppFullySharedGenericAny* L_62 = ___0_source;
		String_t** L_63;
		L_63 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisString_t_m9BC71B961562D33981F3D2A518280ACCCC720714_inline(L_62, il2cpp_rgctx_method(method->rgctx_data, 23));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_mB352A8132547464344E6835AF40F1C7DA0FC6179(L_63, (Il2CppFullySharedGenericAny*)L_64, il2cpp_rgctx_method(method->rgctx_data, 24));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_61, L_64, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_61, (void*)L_64);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:533>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_01bf:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:535>
		Il2CppFullySharedGenericAny* L_65 = ___1_destination;
		Il2CppFullySharedGenericAny* L_66 = ___0_source;
		uint16_t* L_67;
		L_67 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m33A571A8A920313DC399CF856BA643AEFFEE4840_inline(L_66, il2cpp_rgctx_method(method->rgctx_data, 25));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m6A1DA3430E328697B3C1E053374FAEACF0C77F95(L_67, (Il2CppFullySharedGenericAny*)L_68, il2cpp_rgctx_method(method->rgctx_data, 26));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_65, L_68, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_65, (void*)L_68);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:536>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_01d5:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:538>
		Il2CppFullySharedGenericAny* L_69 = ___1_destination;
		Il2CppFullySharedGenericAny* L_70 = ___0_source;
		uint32_t* L_71;
		L_71 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8FE2798F42657FD77E43F73BE64B9A2ECAD370A_inline(L_70, il2cpp_rgctx_method(method->rgctx_data, 27));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m62DAACE3E3F12517F13F380BE744A38D69E12156(L_71, (Il2CppFullySharedGenericAny*)L_72, il2cpp_rgctx_method(method->rgctx_data, 28));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_69, L_72, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_69, (void*)L_72);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:539>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_01eb:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:541>
		Il2CppFullySharedGenericAny* L_73 = ___1_destination;
		Il2CppFullySharedGenericAny* L_74 = ___0_source;
		uint64_t* L_75;
		L_75 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0D05B6202B7FECB3D9612396E65FA72BCBD2671A_inline(L_74, il2cpp_rgctx_method(method->rgctx_data, 29));
		PrimitivesConverters_DoConvert_TisIl2CppFullySharedGenericAny_m855CA8553E43D1238E78F509DF06C0671DB8A242(L_75, (Il2CppFullySharedGenericAny*)L_76, il2cpp_rgctx_method(method->rgctx_data, 30));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_73, L_76, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_73, (void*)L_76);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:542>
		V_5 = (bool)1;
		goto IL_020d;
	}

IL_0201:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:544>
		Il2CppFullySharedGenericAny* L_77 = ___1_destination;
		il2cpp_codegen_initobj(L_77, SizeOf_TDestination_tAC5BFD4B78BBF0013ECE1D6EDEC896A74B5E9325);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:545>
		V_5 = (bool)0;
		goto IL_020d;
	}

IL_020d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeConversion.cs:547>
		bool L_78 = V_5;
		return L_78;
	}
}
// Method Definition Index: 85154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeUtility.cs:255>
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 64474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_12 = L_7;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	void* V_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:392>
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:396>
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_2 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:397>
		void* L_3 = V_2;
		int32_t L_4;
		L_4 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_5;
		L_5 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9((uint64_t)((int64_t)(uint64_t)((uintptr_t)(intptr_t)L_3)), L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:398>
		void* L_6 = V_2;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_6, 0, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_0037;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:400>
		void* L_8 = V_2;
		int32_t L_9 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_1), L_8, ((int64_t)L_9), NULL);
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:402>
		int32_t L_10 = __this->___Offset;
		int32_t L_11 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:403>
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 64473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	void* V_1 = NULL;
	void* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:371>
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:374>
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_1 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:375>
		void* L_3 = V_1;
		int32_t L_4;
		L_4 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_5;
		L_5 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9((uint64_t)((int64_t)(uint64_t)((uintptr_t)(intptr_t)L_3)), L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:376>
		void* L_6 = V_1;
		Il2CppFullySharedGenericStruct* L_7 = ___0_value;
		UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		goto IL_003c;
	}

IL_002b:
	{
		Il2CppFullySharedGenericStruct* L_8 = ___0_value;
		V_3 = L_8;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:378>
		Il2CppFullySharedGenericStruct* L_9 = V_3;
		V_2 = (void*)((uintptr_t)L_9);
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:378>
		void* L_10 = V_2;
		void* L_11 = V_1;
		int32_t L_12 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_10, L_11, ((int64_t)L_12), NULL);
		V_3 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:380>
		int32_t L_13 = __this->___Offset;
		int32_t L_14 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:381>
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 64476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:431>
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:432>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763(L_2, L_3, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:433>
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:434>
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:436>
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:437>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10);
		void* L_12;
		L_12 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:439>
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
// Method Definition Index: 64477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:454>
		int32_t* L_0 = ___0_length;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeAppendBuffer.cs:455>
		int32_t* L_2 = ___0_length;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		return L_7;
	}

IL_001b:
	{
		return (void*)(((uintptr_t)0));
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
// Method Definition Index: 65171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:676>
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:678>
		uint8_t* L_1 = __this->___m_CurrentPtr;
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:679>
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = __this->___m_CurrentBlockEnd;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) > ((uintptr_t)L_4))))
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:681>
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_5 = __this->___m_CurrentBlock;
		NullCheck(L_5);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = L_5->___Next;
		NullCheck(L_6);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_7 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_6->___Data);
		uint8_t* L_8 = (uint8_t*)(&L_7->___FixedElementField);
		V_1 = (uint8_t*)((uintptr_t)L_8);
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:684>
		uint8_t* L_9 = V_1;
		Il2CppFullySharedGenericStruct* L_10;
		L_10 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:664>
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:665>
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:506>
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:507>
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:492>
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:493>
		il2cpp_codegen_memcpy(L_1, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_1, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_1);
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeStream.cs:494>
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 70405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2355>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2357>
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2359>
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2360>
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2361>
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2362>
		Il2CppFullySharedGenericStruct* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2364>
		Il2CppFullySharedGenericStruct* L_13 = ___0_dptr;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2357>
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2357>
		int32_t L_19 = V_1;
		int32_t L_20 = ___4_n;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2367>
		return;
	}
}
// Method Definition Index: 70404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2339>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2341>
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2343>
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2344>
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2345>
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2346>
		Il2CppFullySharedGenericStruct* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2348>
		Il2CppFullySharedGenericStruct* L_13 = ___0_dptr;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2341>
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2341>
		int32_t L_19 = V_1;
		int32_t L_20 = ___4_n;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Avx2.cs:2351>
		return;
	}
}
// Method Definition Index: 70879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_9 = L_3;
	const Il2CppFullySharedGenericStruct L_15 = L_3;
	const Il2CppFullySharedGenericStruct L_26 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_40 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_124 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_27 = L_16;
	const Il2CppFullySharedGenericStruct L_31 = L_16;
	const Il2CppFullySharedGenericStruct L_41 = L_16;
	const Il2CppFullySharedGenericStruct L_51 = L_16;
	const Il2CppFullySharedGenericStruct L_125 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_8, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_12, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:223>
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:224>
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:225>
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:230>
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:232>
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:233>
		V_0 = (bool)1;
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:235>
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:238>
		Il2CppFullySharedGenericStruct* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_9, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_8, L_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:239>
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:240>
		V_1 = (bool)1;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:245>
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:248>
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_14;
		L_14 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_15, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_16, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:249>
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:250>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:251>
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:252>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:253>
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:254>
		V_9 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:255>
		goto IL_0164;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:258>
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:259>
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_25;
		L_25 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_26, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_27, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:261>
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_29;
		L_29 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_30, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_31, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:263>
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:264>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:265>
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:266>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:267>
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:268>
		V_9 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:269>
		goto IL_0164;
	}

IL_0102:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:271>
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_39;
		L_39 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_41, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:272>
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:273>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:274>
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:275>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:276>
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:277>
		V_9 = (bool)1;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:278>
		goto IL_0164;
	}

IL_0134:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:280>
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:281>
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:282>
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:283>
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:284>
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:285>
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:286>
		V_9 = (bool)1;
	}

IL_0164:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:290>
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:236>
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:228>
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:294>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:297>
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:304>
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:302>
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:300>
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:312>
		goto IL_02a5;
	}

IL_01ef:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:318>
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:316>
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:314>
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:321>
		goto IL_02a5;
	}

IL_0237:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:325>
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:323>
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:327>
		goto IL_02a5;
	}

IL_025f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:329>
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:332>
		int32_t L_104 = V_3;
		V_11 = L_104;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:335>
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:336>
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:337>
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:333>
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:330>
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:343>
		V_5 = 0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:346>
		V_1 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:349>
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:351>
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:353>
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_120;
		L_120 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_124, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_125, V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:355>
		V_1 = (bool)1;
	}

IL_02e4:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:358>
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:359>
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:361>
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:364>
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:367>
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:347>
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:370>
		int32_t L_143 = V_5;
		return L_143;
	}
}
// Method Definition Index: 70878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_1, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:212>
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:214>
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:210>
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:217>
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
// Method Definition Index: 70874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:141>
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:142>
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:145>
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:148>
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:150>
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_7, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), L_7, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), (void*)L_7);
		goto IL_0049;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:154>
		Il2CppFullySharedGenericStruct* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:146>
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:161>
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:164>
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Method Definition Index: 70876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:176>
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:178>
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// Method Definition Index: 70873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:133>
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:135>
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13;
		L_13 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_8, L_9, il2cpp_codegen_memcpy(L_12, L_10, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_13;
	}
}
// Method Definition Index: 70875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:169>
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:171>
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Method Definition Index: 70872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:126>
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		//<source_info:./Library/PackageCache/com.unity.burst@2f3d916873ea/Runtime/Intrinsics/x86/Sse4_2.cs:128>
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17;
		L_17 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_12, L_13, il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_17;
	}
}
// Method Definition Index: 77724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:69>
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:70>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:74>
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_2 = __this->___m_Api;
		int32_t L_3 = __this->___m_RequestId;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9, L_2, L_3, (&V_0), (&V_1));
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:76>
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_5;
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:77>
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:78>
		intptr_t L_6 = V_0;
		void* L_7;
		L_7 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_6, NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10;
		L_10 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_7, ((int32_t)(L_8/L_9)), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:83>
		return L_10;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Common/Textures/XRCpuImage/AsyncConversion.cs:86>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 78721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___2_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:144>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___2_array;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:146>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___2_array;
		int32_t L_3;
		L_3 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:148>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___2_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:149>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___2_array;
		int32_t L_7 = ___0_length;
		int32_t L_8 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_7, L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:154>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___2_array;
		int32_t L_11 = ___0_length;
		int32_t L_12 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_13), L_11, L_12, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_13;
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@13d2457b468b/Runtime/ARSubsystems/Planes/XRPlaneSubsystem.cs:156>
		return;
	}
}
// Method Definition Index: 64410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/xxHash3.StreamingState.cs:145>
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/xxHash3.StreamingState.cs:146>
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
// Method Definition Index: 63430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:103>
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 63431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:110>
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:111>
		return;
	}

IL_0006:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:112>
		Il2CppFullySharedGenericStruct* L_1 = ___0_pointer;
		int64_t L_2 = ___1_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___2_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD(L_1, L_2, ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:113>
		return;
	}
}
// Method Definition Index: 63429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/Memory.cs:96>
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_6);
	}
}
// Method Definition Index: 41918
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:92>
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:94>
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// Method Definition Index: 41917
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:84>
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
// Method Definition Index: 41912
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:47>
		void* L_0 = ___0_source;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:49>
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
// Method Definition Index: 41908
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:19>
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:20>
		return;
	}
}
// Method Definition Index: 41920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:107>
		void* L_0 = ___0_ptr;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatched.cs:109>
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
// Method Definition Index: 21513
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 41771
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:241>
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 41768
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_gshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:170>
		int32_t L_0 = __this->___m_Length;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:171>
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 65199
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		//<source_info:./Library/PackageCache/com.unity.collections@84e8eb3fc12e/Unity.Collections/UnsafeUtilityEx.cs:90>
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		void* L_1;
		L_1 = ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// Method Definition Index: 91143
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_thing;
		return (void*)(L_0);
	}
}
