#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54[6];
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_79 = 0f;
	float fLocal_80[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_110[2] = { 0, 0 };
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 16;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_51 = { 2194.135f, 5593.278f, 53.70383f };
	Local_73 = { 2203.27f, 5549.918f, 93.09485f };
	Local_76 = { 2199.629f, 5640.293f, 52.23926f };
	fLocal_79 = 81.5f;
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_142();
	}
	if (func_115(Local_48, -1, 0, 0, 0))
	{
		func_112(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((unk_0xC92F9F18E020B461() || iLocal_100) || (func_111() && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_48, 500f, 500f, 500f, 0, 1, 0)))
		{
			if (!func_111())
			{
				if (func_110())
				{
					func_142();
				}
			}
			unk_0x6D3F703013ED87D3("RE_DS", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_98())
					{
						func_142();
					}
					func_96();
					iLocal_88 = 1;
					break;
				
				case 1:
					func_24();
					break;
				
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()
{
	if (iLocal_88 && !iLocal_87)
	{
		unk_0x1CF3F44FC2EB9F99("RE20_FAIL");
		if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			func_23(0);
		}
		iLocal_125 = 0;
		while (iLocal_125 < 6)
		{
			if (!unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_116[iLocal_125]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_116[iLocal_125]));
				}
				unk_0xB3822DB3D538C8F3(&(iLocal_103[iLocal_125]));
			}
			iLocal_125++;
		}
		unk_0x8576657A629C4B0A(1f);
		unk_0x07CECF421D895F3D(3, 1);
		if (bLocal_89)
		{
			func_3(18, 7, 0);
		}
		else
		{
			func_3(18, 1, 0);
		}
		iLocal_87 = 1;
	}
	if (SYSTEM::VDIST(func_2(unk_0x9E2D6C50374FCFA9()), Local_48) > 150f)
	{
		func_142();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_22();
	func_13(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_12(iParam0, &uVar0);
	Var1 = { func_4(&uVar0) };
}

struct<16> func_4(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_11(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_10(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_9(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_8(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_7(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_5(*uParam0), 64);
	return Var0;
}

int func_5(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_6(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_6(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_7(int iParam0)
{
	return iParam0 & 15;
}

int func_8(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_9(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_10(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_11(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_12(int iParam0, var uParam1)
{
	Global_112915.f_24995.f_43[iParam0] = *uParam1;
}

void func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_5(*uParam0);
	iVar1 = func_7(*uParam0);
	iVar2 = func_8(*uParam0);
	iVar3 = func_11(*uParam0);
	iVar4 = func_10(*uParam0);
	iVar5 = func_9(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_21(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_21(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, iParam1);
	func_19(uParam0, iParam2);
	func_18(uParam0, iParam3);
	func_17(uParam0, iParam5);
	func_16(uParam0, iParam4);
	func_15(uParam0, iParam6);
}

void func_15(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_7(*uParam0);
	iVar1 = func_5(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_19(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_20(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_22()
{
	var uVar0;
	
	func_20(&uVar0, unk_0xAA2844CAD88768B5());
	func_19(&uVar0, unk_0x80F97D7D29800A1A());
	func_18(&uVar0, unk_0x09FC827691DACE59());
	func_16(&uVar0, unk_0xD52BD97E61483713());
	func_17(&uVar0, unk_0x771485043FDC55DE());
	func_15(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_23(int iParam0)
{
	Global_112915.f_24995.f_7 = iParam0;
}

void func_24()
{
	func_71();
	func_70();
	switch (iLocal_47)
	{
		case 0:
			if (unk_0x2791155FB0769FE5(uLocal_113))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_114))
				{
					if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_73, Local_76, fLocal_79, 0, 1, 0))
					{
						func_67();
						if (!bLocal_101)
						{
							unk_0x1CF3F44FC2EB9F99("RE20_FADE_RADIO_OUT");
							iLocal_130 = unk_0x320D1840B6DAA1CC();
							bLocal_101 = true;
						}
						if (!func_111())
						{
							func_58(1);
						}
					}
				}
			}
			if (bLocal_101)
			{
				if ((unk_0x320D1840B6DAA1CC() - iLocal_130) > 6000)
				{
					if (!iLocal_102)
					{
						unk_0x1CF3F44FC2EB9F99("RE20_START");
						iLocal_102 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((((unk_0xF68107C40359970C(iLocal_103[0]) && unk_0xF68107C40359970C(iLocal_103[1])) && unk_0xF68107C40359970C(iLocal_103[2])) && unk_0xF68107C40359970C(iLocal_103[3])) && unk_0xF68107C40359970C(iLocal_103[4]))
			{
				func_25();
			}
			else if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_48, 100f, 100f, 100f, 0, 1, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_125 = 0;
	while (iLocal_125 < 6)
	{
		if (unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_116[iLocal_125]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_116[iLocal_125]));
			}
		}
		iLocal_125++;
	}
}

void func_25()
{
	func_57("DRUG_BLIP_END", -1);
	unk_0x1CF3F44FC2EB9F99("RE20_END");
	func_23(1);
	while (func_56())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_55())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_89 = true;
	func_29(-1, 0);
	func_26();
	iLocal_46 = 2;
}

void func_26()
{
	func_27();
}

int func_27()
{
	if (func_28(0))
	{
		return 0;
	}
	if (Global_100013.f_8)
	{
		if (Global_100013.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100013.f_10 > 1)
	{
		return 0;
	}
	Global_100013.f_10++;
	return 1;
}

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_29(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_52(iParam0))
	{
		func_51(iParam0, iParam1);
		if (!func_50(51))
		{
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0))
		{
			Global_112915.f_24995.f_2 = 3;
		}
		if (func_37(iParam0, iParam1) != 322)
		{
			func_31(func_37(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_112903 = iParam1;
		if (Global_112901 == 0)
		{
			if (((Global_112904 == 1 || Global_112904 == 5) || Global_112904 == 11) || Global_112904 == 25)
			{
				func_30(2);
			}
			else if ((Global_112904 == 26 || Global_112904 == 8) || Global_112904 == 17)
			{
				func_30(7);
			}
			else
			{
				func_30(1);
			}
		}
	}
}

void func_30(int iParam0)
{
	Global_112901 = iParam0;
}

void func_31(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_35((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112915.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112915.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112915.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112915.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112915.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112915.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_32();
	}
}

void func_32()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112651 = 0;
	Global_112652 = 0;
	Global_112653 = 0;
	Global_112654 = 0;
	Global_112655 = 0;
	Global_112656 = 0;
	Global_112657 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112915.f_10194.f_3853;
	Global_112915.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112915.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112915.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112651++;
					fVar1 = (fVar1 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112652++;
					fVar2 = (fVar2 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112653++;
					fVar3 = (fVar3 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112654++;
					fVar4 = (fVar4 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112655++;
					fVar5 = (fVar5 + (Global_112915.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112656++;
					fVar6 = (fVar6 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112657++;
					fVar7 = (fVar7 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112634 > 0)
	{
		if (Global_112651 == Global_112634)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112635 > 0)
	{
		if (Global_112652 == Global_112635)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112636 > 0)
	{
		if (Global_112653 == Global_112636)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112637 > 0)
	{
		if (Global_112654 == Global_112637)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112638 > 0)
	{
		if (((Global_112655 == Global_112638 || (Global_112638 * 10 / Global_112655) < 41) || Global_112655 > Global_112641) || Global_112655 == Global_112641)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_10194.f_3856, 14))
			{
				if (Global_112655 == Global_112638)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_112638, 0);
					unk_0xCED9E32812D6C7C7(&(Global_112915.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112639 > 0)
	{
		if (Global_112656 == Global_112639)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112640 > 0)
	{
		if (Global_112657 == Global_112640)
		{
			fVar7 = 5f;
		}
	}
	Global_112915.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112655 > Global_112641 || Global_112655 == Global_112641)
	{
		iVar9 = Global_112641;
	}
	else
	{
		iVar9 = Global_112655;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_112651, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_112634, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_112652, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_112635, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_112653, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_112636, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_112654, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_112637, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_112641, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_112657 + Global_112656), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_112640 + Global_112639), 1);
	Global_112658 = (Global_112651 * 100 / Global_112634);
	Global_112660 = ((Global_112653 + Global_112652) * 100 / (Global_112636 + Global_112635));
	Global_112659 = ((Global_112654 + iVar9) * 100 / (Global_112637 + Global_112641));
	Global_112661 = ((Global_112656 + Global_112657) * 100 / (Global_112639 + Global_112640));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_112915.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_112658, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_112659, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_112660, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112915.f_10194.f_3853))
	{
		func_34(13, SYSTEM::FLOOR(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_33() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
				{
					func_27();
				}
			}
		}
	}
}

int func_33()
{
	return Global_31505;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_36()
{
	return Global_1574907;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112915.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112915.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112915.f_20410.f_145++;
		func_42();
	}
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112915.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[0])
			{
				Global_112915.f_20410.f_146[0] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[1])
			{
				Global_112915.f_20410.f_146[1] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[2])
			{
				Global_112915.f_20410.f_146[2] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_43()
{
	func_44();
	switch (Global_112915.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_48(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_47(unk_0xE2D3D51028F0428A());
			if (func_46(iVar0) && (!func_45(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_46(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_45(int iParam0)
{
	return Global_42596 == iParam0;
}

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_51(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112915.f_24995.f_8[iParam0]), iParam1);
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_53()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_54(Var0);
	return uVar16;
}

int func_54(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_55()
{
	return 1;
}

int func_56()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_57(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_58(int iParam0)
{
	if (func_61())
	{
		Global_112905 = 1;
		Global_112902 = unk_0x320D1840B6DAA1CC();
		if (func_38(Global_112904))
		{
			func_59(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_38(Global_112904))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112915.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_57(func_60(iParam0), -1);
					Global_112915.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_57(func_60(iParam0), -1);
					Global_112915.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_57(func_60(iParam0), -1);
					Global_112915.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 2);
				}
			}
			break;
	}
}

char* func_60(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_61()
{
	switch (func_62(&Global_31565, 0, 5, 0, unk_0x69CE66B03B2184EB()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_62(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_66(0))
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_42596 = iParam2;
		Global_42558 = *uParam0;
		Global_42559 = iParam4;
		Global_42557 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42557 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42557)
			{
				if (Global_42563[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42558 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_64(iParam2))
		{
			return 0;
		}
		if (Global_42557 == 8)
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		Global_42563[Global_42557 /*4*/] = Global_42560;
		Global_42563[Global_42557 /*4*/].f_1 = iParam1;
		Global_42563[Global_42557 /*4*/].f_2 = iParam2;
		Global_42563[Global_42557 /*4*/].f_3 = 0;
		Global_42557++;
		if (iParam4 != 0)
		{
			func_63(uParam0, iParam4);
		}
	}
	return 2;
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42557 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42557)
	{
		if (Global_42563[iVar0 /*4*/] == *uParam0)
		{
			Global_42563[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_64(int iParam0)
{
	return func_65(iParam0, Global_42596);
}

int func_65(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_64(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_67()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_114))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_114);
		if (unk_0x2791155FB0769FE5(uLocal_113))
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_115))
			{
				uLocal_115 = func_68(uLocal_113);
			}
		}
	}
}

int func_68(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return uVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_70()
{
	if (unk_0x803592456AE579B3(uLocal_113))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_114))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_114);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_100 = 1;
		iLocal_127 = 2;
		iLocal_47 = 1;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	iLocal_125 = 0;
	while (iLocal_125 < 6)
	{
		if (unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_116[iLocal_125]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_116[iLocal_125]));
			}
			iLocal_127 = 2;
		}
		else
		{
			if ((func_95() && iLocal_127 != 2) || (iLocal_127 == 1 && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A())))
			{
				func_93();
				SYSTEM::WAIT(0);
				if (func_92())
				{
					func_91(&uLocal_131, 4, iLocal_103[iLocal_125], "DRUGFARMGOON", 0, 1);
					func_74(&uLocal_131, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_127 = 2;
			}
			switch (iLocal_127)
			{
				case 0:
					if (!iLocal_90[iLocal_125])
					{
						if ((unk_0x77A43AFA9AAEC041(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A(), 15f, 15f, 40f, 0, 1, 0) && unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), iLocal_103[iLocal_125])) || unk_0x7E006F2E24F03BB4(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A()))
						{
							if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_73, Local_76, fLocal_79, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 2205.918f, 5633.455f, 55.7472f, 15f, 15f, 40f, 0, 1, 0))
							{
								if (!func_56())
								{
									func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
									func_74(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_103)
								{
									unk_0x41FBE02637A70478(iLocal_103[iLocal_125]);
									unk_0xA888F8CC04F25CC8(&uLocal_124);
									unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
									unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), -1, 0);
									unk_0xC963A45B50851768(uLocal_124);
									unk_0x8ACADA903FCAA42F(iLocal_103[iVar0], uLocal_124);
									unk_0x7461D7C5BA953BC7(&uLocal_124);
									unk_0xA091C233F9D0AB04(iLocal_103[iVar0], 1, -1, 0);
									iVar0++;
								}
								iLocal_90[iLocal_125] = 1;
								iLocal_130 = unk_0x320D1840B6DAA1CC();
								iLocal_127 = 1;
							}
						}
					}
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_103)
					{
						if (!iLocal_90[iVar1])
						{
							unk_0x41FBE02637A70478(iLocal_103[iLocal_125]);
							unk_0xA888F8CC04F25CC8(&uLocal_124);
							unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
							unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
							unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), -1, 0);
							unk_0xC963A45B50851768(uLocal_124);
							unk_0x8ACADA903FCAA42F(iLocal_103[iVar1], uLocal_124);
							unk_0x7461D7C5BA953BC7(&uLocal_124);
							unk_0xA091C233F9D0AB04(iLocal_103[iVar1], 1, -1, 0);
							iLocal_90[iVar1] = 1;
						}
						iVar1++;
					}
					if (!unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
					{
						if (!unk_0x2E7F5417D4F4DD69(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A(), 50f))
						{
							unk_0xF30F15F203736DE4(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A(), -1, 0, 2);
							unk_0xABC2CA6F28903308(iLocal_103[iLocal_125], 1);
						}
					}
					if (unk_0xEEEC05469860B219(unk_0xE2D3D51028F0428A()))
					{
						if (iLocal_128 == 0)
						{
							iLocal_128 = unk_0x320D1840B6DAA1CC();
						}
						else
						{
							iLocal_129 = unk_0x320D1840B6DAA1CC();
						}
					}
					else
					{
						iLocal_129 = 0;
						iLocal_128 = 0;
					}
					if (iLocal_90[iLocal_125] && !iLocal_97)
					{
						if ((unk_0x320D1840B6DAA1CC() - iLocal_130) > 6000)
						{
							if (!func_56())
							{
								func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
								func_74(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_97 = 1;
							}
						}
					}
					if (iLocal_90[iLocal_125] && !iLocal_98)
					{
						if ((unk_0x320D1840B6DAA1CC() - iLocal_130) > 12000)
						{
							if (!func_56())
							{
								func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
								func_74(&uLocal_131, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_98 = 1;
							}
						}
					}
					if (iLocal_90[iLocal_125])
					{
						if (((unk_0x320D1840B6DAA1CC() - iLocal_130) > 18000 || (iLocal_129 - iLocal_128) > 5000) || unk_0xCED7266BAB0BDC20(iLocal_103[iLocal_125], 0))
						{
							if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_73, Local_76, fLocal_79, 0, 1, 0) || unk_0x77A43AFA9AAEC041(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A(), 15f, 15f, 5f, 0, 1, 0))
							{
								func_93();
								SYSTEM::WAIT(0);
								if (func_92())
								{
									func_91(&uLocal_131, 4, iLocal_103[iLocal_125], "DRUGFARMGOON", 0, 1);
									func_74(&uLocal_131, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
									func_74(&uLocal_131, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_127 = 2;
							}
							else
							{
								if (!unk_0xCED7266BAB0BDC20(iLocal_103[iLocal_125], 0))
								{
									unk_0x03A927199A2DFE46(iLocal_103[iLocal_125]);
									if (!unk_0xF68107C40359970C(iLocal_103[0]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_124);
										unk_0x7D1424753688EE7A(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2214.833f, 5635.627f, 55.0029f, 8000);
										unk_0x7D1424753688EE7A(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2221.951f, 5593.625f, 52.9483f, 10000);
										unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
										unk_0xC963A45B50851768(uLocal_124);
										unk_0x8ACADA903FCAA42F(iLocal_103[0], uLocal_124);
										unk_0x7461D7C5BA953BC7(&uLocal_124);
										unk_0xA091C233F9D0AB04(iLocal_103[0], 0, -1, 0);
									}
									if (!unk_0xF68107C40359970C(iLocal_103[1]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_124);
										unk_0x7D1424753688EE7A(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										unk_0x7D1424753688EE7A(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2199.498f, 5560.702f, 52.8606f, 10000);
										unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
										unk_0xC963A45B50851768(uLocal_124);
										unk_0x8ACADA903FCAA42F(iLocal_103[1], uLocal_124);
										unk_0x7461D7C5BA953BC7(&uLocal_124);
										unk_0xA091C233F9D0AB04(iLocal_103[1], 0, -1, 0);
									}
									if (!unk_0xF68107C40359970C(iLocal_103[2]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_124);
										unk_0x7D1424753688EE7A(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2210.646f, 5593.576f, 52.8312f, 8000);
										unk_0x7D1424753688EE7A(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1, 1048576000, 0, 1193033728);
										unk_0x1A96B8B416BC07D0(0, 2237.916f, 5599.589f, 53.2311f, 12000);
										unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
										unk_0xC963A45B50851768(uLocal_124);
										unk_0x8ACADA903FCAA42F(iLocal_103[2], uLocal_124);
										unk_0x7461D7C5BA953BC7(&uLocal_124);
										unk_0xA091C233F9D0AB04(iLocal_103[2], 0, -1, 0);
									}
									if (!unk_0xF68107C40359970C(iLocal_103[3]) && !unk_0xF68107C40359970C(iLocal_103[4]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_124);
										unk_0xC149E50FBB27DD70(0, iLocal_103[4], -1, 2f, 1f, 1073741824, 0);
										unk_0x529D306014D3C29A(0, iLocal_103[4], 0);
										unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										unk_0xC963A45B50851768(uLocal_124);
										unk_0x8ACADA903FCAA42F(iLocal_103[3], uLocal_124);
										unk_0x7461D7C5BA953BC7(&uLocal_124);
										unk_0xA091C233F9D0AB04(iLocal_103[3], 0, -1, 0);
									}
									if (!unk_0xF68107C40359970C(iLocal_103[4]))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_124);
										unk_0xC149E50FBB27DD70(0, iLocal_103[3], -1, 2f, 1f, 1073741824, 0);
										unk_0x529D306014D3C29A(0, iLocal_103[3], 0);
										unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										unk_0xC963A45B50851768(uLocal_124);
										unk_0x8ACADA903FCAA42F(iLocal_103[4], uLocal_124);
										unk_0x7461D7C5BA953BC7(&uLocal_124);
										unk_0xA091C233F9D0AB04(iLocal_103[4], 0, -1, 0);
									}
									if (!unk_0xF68107C40359970C(iLocal_103[5]))
									{
										unk_0x274A180D57A0D9A6(iLocal_103[5], 0f, 3f, 1);
										unk_0xA091C233F9D0AB04(iLocal_103[5], 0, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_90)
								{
									iLocal_90[iVar1] = 0;
									iVar1++;
								}
								iLocal_90[iLocal_125] = 0;
								iLocal_127 = 0;
							}
						}
					}
					break;
				
				case 2:
					func_67();
					iLocal_125 = 0;
					while (iLocal_125 < 6)
					{
						if (!unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
						{
							if (!unk_0xCED7266BAB0BDC20(iLocal_103[iLocal_125], 0))
							{
								unk_0x41FBE02637A70478(iLocal_103[iLocal_125]);
								unk_0xC1A74225341AA9FB(iLocal_103[iLocal_125], unk_0xE2D3D51028F0428A(), 0, 16);
								unk_0xABC2CA6F28903308(iLocal_103[iLocal_125], 1);
								if (!unk_0x12DD4A0B247D9B4D(uLocal_116[iLocal_125]))
								{
									uLocal_116[iLocal_125] = func_72(iLocal_103[iLocal_125], 1, 145);
								}
							}
						}
						if (!iLocal_99)
						{
							if (!func_56())
							{
								func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
								func_74(&uLocal_131, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_99 = 1;
							}
						}
						iLocal_125++;
					}
					break;
				}
		}
		iLocal_125++;
	}
}

var func_72(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_73(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_73(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(uParam0);
	if (unk_0x04D9F44466CBF3CA(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_89();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_87();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam2)
			{
				func_85();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_84())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77852)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_83())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 9))
				{
					return 0;
				}
			}
			func_82();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_81();
		func_76();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_89();
	}
	return 0;
}

void func_76()
{
	if (!func_77())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973333.f_1), {Global_20904}, 4);
		Global_1973333 = Global_7139;
		Global_1973333.f_6 = Global_21295;
	}
}

int func_77()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_80())
	{
		return 0;
	}
	if (func_78(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_78(int iParam0)
{
	return func_79(iParam0, 20);
}

bool func_79(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_80()
{
	return -1;
}

void func_81()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21285 = 1;
}

void func_82()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	unk_0xB0550BC91B0159D6(&Global_7825, 16);
}

int func_83()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	int iVar0;
	int iVar1;
	
	if (Global_77852)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_85()
{
	if (func_45(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_86();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

int func_86()
{
	func_44();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

void func_89()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

void func_91(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(uParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(uParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(uParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(uParam2, 1);
			}
		}
	}
}

bool func_92()
{
	return Global_112915.f_24995.f_7;
}

void func_93()
{
	Global_20151 = 0;
	func_94();
}

void func_94()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_110)
	{
		if (unk_0x55A0C756C4A8220C(iLocal_110[iVar0], 0))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_110[iVar0], unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_103)
	{
		if (!unk_0xF68107C40359970C(iLocal_103[iVar0]))
		{
			if (unk_0x7E006F2E24F03BB4(iLocal_103[iVar0], unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_103[iVar0]) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_103[iVar0]))
				{
					return 1;
				}
			}
			if ((((((unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_103[iVar0], 1), 5f, 1) || unk_0x0747E45CFF1F74AA(iLocal_103[iVar0], unk_0xE2D3D51028F0428A(), 1)) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iLocal_103[iVar0])) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f), unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f), unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f), unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) - Vector(15f, 15f, 15f), unk_0x6B62510F212526DC(iLocal_103[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (unk_0x44808D06C0FF7D30(-1, Local_73, Local_76, fLocal_79))
	{
		return 1;
	}
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_73, Local_76, fLocal_79, 0, 1, 0))
	{
		if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return 1;
		}
	}
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, 0, 1, 0))
	{
		if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	int iVar0;
	
	unk_0xD69A0C3662175E68(joaat("g_m_y_salvagoon_01"));
	unk_0xD69A0C3662175E68(joaat("bobcatxl"));
	unk_0xD69A0C3662175E68(joaat("prop_cash_case_01"));
	if ((unk_0x0152AA00FA3130F1(joaat("g_m_y_salvagoon_01")) && unk_0x0152AA00FA3130F1(joaat("bobcatxl"))) && unk_0x0152AA00FA3130F1(joaat("prop_cash_case_01")))
	{
		unk_0x2915D98110F23A29(Local_48 - Vector(20f, 50f, 50f), Local_48 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0x7CD708DEB04F8474(joaat("bobcatxl"), 1);
		unk_0x8576657A629C4B0A(0f);
		unk_0x07CECF421D895F3D(3, 0);
		iLocal_110[0] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, 1, 1, 0);
		unk_0x2D58A6131679D82C(iLocal_110[0], 1, 0);
		unk_0x9F65B3BAFA302A65(iLocal_110[0], 1084227584);
		unk_0x45A6EA15139A0C54(iLocal_110[0], 1, 1);
		iLocal_110[1] = unk_0xBA715A7BEBA5A1F9(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, 1, 1, 0);
		unk_0x2D58A6131679D82C(iLocal_110[1], 1, 0);
		unk_0x45A6EA15139A0C54(iLocal_110[1], 1, 0);
		iVar0 = 0;
		unk_0xCED9E32812D6C7C7(&iVar0, 1);
		uLocal_113 = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), Local_51, -1.368082f, 0.230633f, 176.8749f, iVar0, unk_0x5853B15F78E1A265(40000, 100000), 2, 1, joaat("prop_cash_case_01"));
		Local_54[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_80[0] = 352.2203f;
		Local_54[1 /*3*/] = { 2210.584f, 5580.684f, 52.8132f };
		fLocal_80[1] = 300.5012f;
		Local_54[2 /*3*/] = { 2201.302f, 5589.279f, 52.9354f };
		fLocal_80[2] = 53.1602f;
		Local_54[3 /*3*/] = { 2202.535f, 5613.367f, 52.6781f };
		fLocal_80[3] = 70f;
		Local_54[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_80[4] = 53f;
		Local_54[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_80[5] = 338.8346f;
		unk_0xD642E010A287ADFD("DrugCult", &iLocal_123);
		unk_0x9972EFADA7A2A47D(3, iLocal_123, joaat("COP"));
		unk_0x9972EFADA7A2A47D(3, joaat("COP"), iLocal_123);
		unk_0x9972EFADA7A2A47D(5, iLocal_123, 1862763509);
		iLocal_125 = 0;
		while (iLocal_125 < 6)
		{
			iLocal_103[iLocal_125] = unk_0xA8D58C3AADA2C41C(26, joaat("g_m_y_salvagoon_01"), Local_54[iLocal_125 /*3*/], fLocal_80[iLocal_125], 1, 1);
			unk_0x50274A7EACA3133A(iLocal_103[iLocal_125], 1);
			unk_0x71B502FC2E129665(iLocal_103[iLocal_125], 2);
			unk_0xBC12D08EE7559CCD(iLocal_103[iLocal_125], 50, 1);
			unk_0x3DAB02AAC9E9EC02(iLocal_103[iLocal_125], 0);
			unk_0x348A212511C78DBF(iLocal_103[iLocal_125], 13);
			unk_0xFF4BEB6CFF55A013(iLocal_103[iLocal_125], iLocal_123);
			iLocal_126 = unk_0x5853B15F78E1A265(0, 3);
			if (iLocal_126 == 0)
			{
				unk_0x9521FB98DB6DDF50(iLocal_103[iLocal_125], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			}
			else if (iLocal_126 == 1)
			{
				unk_0x9521FB98DB6DDF50(iLocal_103[iLocal_125], joaat("weapon_microsmg"), -1, 1, 1);
			}
			else
			{
				unk_0x9521FB98DB6DDF50(iLocal_103[iLocal_125], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			unk_0xD6A76BAB45A4B460(iLocal_103[iLocal_125], 42, 1);
			func_91(&uLocal_131, 3, iLocal_103[iLocal_125], "SalvadorGang", 0, 1);
			iLocal_125++;
		}
		if (!unk_0xF68107C40359970C(iLocal_103[0]))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_124);
			unk_0x7D1424753688EE7A(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			unk_0x7D1424753688EE7A(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
			unk_0xC963A45B50851768(uLocal_124);
			unk_0x8ACADA903FCAA42F(iLocal_103[0], uLocal_124);
			unk_0x7461D7C5BA953BC7(&uLocal_124);
		}
		unk_0xD8B630F464FE1D6D(iLocal_103[0], "piDrugCult[0]");
		if (!unk_0xF68107C40359970C(iLocal_103[1]))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_124);
			unk_0x7D1424753688EE7A(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			unk_0x7D1424753688EE7A(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
			unk_0xC963A45B50851768(uLocal_124);
			unk_0x8ACADA903FCAA42F(iLocal_103[1], uLocal_124);
			unk_0x7461D7C5BA953BC7(&uLocal_124);
		}
		unk_0xD8B630F464FE1D6D(iLocal_103[1], "piDrugCult[1]");
		if (!unk_0xF68107C40359970C(iLocal_103[2]))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_124);
			unk_0x7D1424753688EE7A(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			unk_0x7D1424753688EE7A(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x1A96B8B416BC07D0(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			unk_0x3F2B528DF27C8A9F(uLocal_124, 1);
			unk_0xC963A45B50851768(uLocal_124);
			unk_0x8ACADA903FCAA42F(iLocal_103[2], uLocal_124);
			unk_0x7461D7C5BA953BC7(&uLocal_124);
		}
		unk_0xD8B630F464FE1D6D(iLocal_103[2], "piDrugCult[2]");
		if (!unk_0xF68107C40359970C(iLocal_103[3]) && !unk_0xF68107C40359970C(iLocal_103[4]))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_124);
			unk_0xC149E50FBB27DD70(0, iLocal_103[4], -1, 2f, 1f, 1073741824, 0);
			unk_0x529D306014D3C29A(0, iLocal_103[4], 0);
			unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0xC963A45B50851768(uLocal_124);
			unk_0x8ACADA903FCAA42F(iLocal_103[3], uLocal_124);
			unk_0x7461D7C5BA953BC7(&uLocal_124);
		}
		unk_0xD8B630F464FE1D6D(iLocal_103[3], "piDrugCult[3]");
		if (!unk_0xF68107C40359970C(iLocal_103[4]))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_124);
			unk_0xC149E50FBB27DD70(0, iLocal_103[3], -1, 2f, 1f, 1073741824, 0);
			unk_0x529D306014D3C29A(0, iLocal_103[3], 0);
			unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0xC963A45B50851768(uLocal_124);
			unk_0x8ACADA903FCAA42F(iLocal_103[4], uLocal_124);
			unk_0x7461D7C5BA953BC7(&uLocal_124);
		}
		unk_0xD8B630F464FE1D6D(iLocal_103[4], "piDrugCult[4]");
		unk_0x274A180D57A0D9A6(iLocal_103[5], 0f, 3f, 1);
		unk_0xD8B630F464FE1D6D(iLocal_103[5], "piDrugCult[5]");
		uLocal_114 = func_97(Local_51, 0);
		unk_0x1A5B5BA56167D412(uLocal_114, 140);
		func_57("DRUG_BLIP_START", -1);
		iLocal_46 = 1;
	}
}

var func_97(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_69(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

int func_98()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (SYSTEM::VDIST2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_105())
	{
		return 1;
	}
	if (func_99(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_46(func_86()))
		{
			iVar36 = func_43();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar32 /*6*/], 2) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar32 /*6*/], 3))
				{
					func_100(iVar32, &Var0);
					fVar35 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_101(uParam1, "Abigail1", func_103(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 1:
			func_101(uParam1, "Abigail2", func_103(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 2:
			func_101(uParam1, "Barry1", func_103(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 3:
			func_101(uParam1, "Barry2", func_103(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 4:
			func_101(uParam1, "Barry3", func_103(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 5:
			func_101(uParam1, "Barry3A", func_103(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 6:
			func_101(uParam1, "Barry3C", func_103(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 7:
			func_101(uParam1, "Barry4", func_103(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_102(iParam0), 0, 0);
			break;
		
		case 8:
			func_101(uParam1, "Dreyfuss1", func_103(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 9:
			func_101(uParam1, "Epsilon1", func_103(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 10:
			func_101(uParam1, "Epsilon2", func_103(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 11:
			func_101(uParam1, "Epsilon3", func_103(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 12:
			func_101(uParam1, "Epsilon4", func_103(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 13:
			func_101(uParam1, "Epsilon5", func_103(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 14:
			func_101(uParam1, "Epsilon6", func_103(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 15:
			func_101(uParam1, "Epsilon7", func_103(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 16:
			func_101(uParam1, "Epsilon8", func_103(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 17:
			func_101(uParam1, "Extreme1", func_103(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 18:
			func_101(uParam1, "Extreme2", func_103(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 19:
			func_101(uParam1, "Extreme3", func_103(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 20:
			func_101(uParam1, "Extreme4", func_103(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 21:
			func_101(uParam1, "Fanatic1", func_103(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_102(iParam0), 1, 0);
			break;
		
		case 22:
			func_101(uParam1, "Fanatic2", func_103(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_102(iParam0), 1, 0);
			break;
		
		case 23:
			func_101(uParam1, "Fanatic3", func_103(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_102(iParam0), 0, 1);
			break;
		
		case 24:
			func_101(uParam1, "Hao1", func_103(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_102(iParam0), 0, 1);
			break;
		
		case 25:
			func_101(uParam1, "Hunting1", func_103(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 26:
			func_101(uParam1, "Hunting2", func_103(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 27:
			func_101(uParam1, "Josh1", func_103(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 28:
			func_101(uParam1, "Josh2", func_103(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 29:
			func_101(uParam1, "Josh3", func_103(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 30:
			func_101(uParam1, "Josh4", func_103(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 31:
			func_101(uParam1, "Maude1", func_103(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 32:
			func_101(uParam1, "Minute1", func_103(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 33:
			func_101(uParam1, "Minute2", func_103(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 34:
			func_101(uParam1, "Minute3", func_103(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 35:
			func_101(uParam1, "MrsPhilips1", func_103(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 36:
			func_101(uParam1, "MrsPhilips2", func_103(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 37:
			func_101(uParam1, "Nigel1", func_103(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 38:
			func_101(uParam1, "Nigel1A", func_103(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 39:
			func_101(uParam1, "Nigel1B", func_103(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 40:
			func_101(uParam1, "Nigel1C", func_103(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 41:
			func_101(uParam1, "Nigel1D", func_103(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 42:
			func_101(uParam1, "Nigel2", func_103(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 43:
			func_101(uParam1, "Nigel3", func_103(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 44:
			func_101(uParam1, "Omega1", func_103(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 45:
			func_101(uParam1, "Omega2", func_103(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 46:
			func_101(uParam1, "Paparazzo1", func_103(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 47:
			func_101(uParam1, "Paparazzo2", func_103(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 48:
			func_101(uParam1, "Paparazzo3", func_103(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 49:
			func_101(uParam1, "Paparazzo3A", func_103(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 50:
			func_101(uParam1, "Paparazzo3B", func_103(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 51:
			func_101(uParam1, "Paparazzo4", func_103(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 52:
			func_101(uParam1, "Rampage1", func_103(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 54:
			func_101(uParam1, "Rampage3", func_103(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 55:
			func_101(uParam1, "Rampage4", func_103(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 56:
			func_101(uParam1, "Rampage5", func_103(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 53:
			func_101(uParam1, "Rampage2", func_103(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 57:
			func_101(uParam1, "TheLastOne", func_103(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 58:
			func_101(uParam1, "Tonya1", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 59:
			func_101(uParam1, "Tonya2", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 60:
			func_101(uParam1, "Tonya3", func_103(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 61:
			func_101(uParam1, "Tonya4", func_103(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 62:
			func_101(uParam1, "Tonya5", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_101(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_103(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_104(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_104(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_105()
{
	if (func_108() && !func_109())
	{
		return 1;
	}
	if (func_107() && func_106())
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_112633 > 0;
}

int func_107()
{
	if (Global_96896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_109()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	if (!func_64(5))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (SYSTEM::VMAG2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_99(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	if ((Global_112904 == func_53() && unk_0xE3BBDB1C36703410()) && Global_112905)
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112901 = 0;
	func_113();
}

void func_113()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

void func_114(int iParam0)
{
	Global_112904 = iParam0;
}

int func_115(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151499)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_53();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (SYSTEM::VMAG2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_109())
			{
				return 0;
			}
		}
		if (!Global_112915.f_9085)
		{
			return 0;
		}
		if (func_28(0))
		{
			return 0;
		}
		if (func_105())
		{
			return 0;
		}
		if (func_140())
		{
			return 0;
		}
		if (Global_112904 != -1)
		{
			return 0;
		}
		if (func_46(func_86()))
		{
			if (func_99(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_139(iParam3))
		{
			return 0;
		}
		if (func_46(func_86()))
		{
			if (func_138(func_86()) == 4 || func_138(func_86()) == 5)
			{
				return 0;
			}
		}
		if (func_46(func_86()))
		{
			if (!func_137(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_136(Global_112915.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_112906) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_135())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_126(4))
		{
			return 0;
		}
		if (!func_64(5))
		{
			return 0;
		}
		if (func_125(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_125(0, 0))
		{
			return 0;
		}
		if (Global_31652)
		{
			return 0;
		}
		if (func_139(30) && !func_125(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_46(func_86()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112915.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112915.f_2363.f_539.f_2296[iVar4];
				if (func_124(iVar8))
				{
					if (func_117(iVar4))
					{
						if (!func_116(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_86() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_116(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_124(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_121(func_22(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_7(iParam1);
		iVar1 = func_5(iParam0);
		iVar2 = (func_5(iParam0) - func_5(iParam1));
		iVar3 = (func_7(iParam0) - func_7(iParam1));
		iVar4 = (func_8(iParam0) - func_8(iParam1));
		iVar5 = (func_11(iParam0) - func_11(iParam1));
		iVar6 = (func_10(iParam0) - func_10(iParam1));
		iVar7 = (func_9(iParam0) - func_9(iParam1));
	}
	else
	{
		iVar0 = func_7(iParam0);
		iVar1 = func_5(iParam1);
		iVar2 = (func_5(iParam1) - func_5(iParam0));
		iVar3 = (func_7(iParam1) - func_7(iParam0));
		iVar4 = (func_8(iParam1) - func_8(iParam0));
		iVar5 = (func_11(iParam1) - func_11(iParam0));
		iVar6 = (func_10(iParam1) - func_10(iParam0));
		iVar7 = (func_9(iParam1) - func_9(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_122(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_122(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_124(iParam1) || !func_124(iParam0))
	{
		return 1;
	}
	iVar0 = func_5(iParam0);
	iVar1 = func_5(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_11(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_5(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_7(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_8(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_86();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_134()) || Global_111962) || Global_31508) || func_133()) || func_88(8, -1)) || func_132()) || func_131()) || func_130()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_134()) || Global_31508) || func_133()) || func_88(8, -1)) || func_130()) || func_132()) || func_131()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_134()) || Global_111962) || Global_31508) || func_133()) || func_88(8, -1)) || func_130()) || func_132()) || func_131()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_134()) || Global_111962) || Global_31508) || func_133()) || func_88(8, -1)) || func_132()) || func_131()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_134() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_88(8, -1)) || func_129()) || func_128()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_132()) || func_131()) || func_128()) || func_127())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_134()) || Global_31508) || func_133()) || func_88(8, -1)) || func_131()) || func_130()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_134()) || func_131()) || Global_111962) || Global_31508) || func_133()) || Global_43774) || func_88(8, -1)) || func_130()) || func_128()) || func_129()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_134()) || Global_111962) || Global_31508) || func_133()) || func_88(8, -1)) || func_130()) || func_128()) || func_132()) || func_131()) || func_129())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_127()
{
	return Global_100013.f_1;
}

int func_128()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_129()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	if (Global_78112)
	{
		return 1;
	}
	else if (Global_62684 && !Global_62690)
	{
		return 1;
	}
	return 0;
}

bool func_131()
{
	return Global_100026.f_376 > 0;
}

bool func_132()
{
	return Global_100026.f_375 > 0;
}

var func_133()
{
	return Global_1575046;
}

int func_134()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_135()
{
	func_85();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_136(int iParam0)
{
	return func_123(func_22(), iParam0);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_86();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_138(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 7;
	}
	return Global_112915.f_7688.f_919[iParam0];
}

bool func_139(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_1, iVar0);
	}
	return bVar1;
}

int func_140()
{
	var uVar0;
	
	if (Global_31656)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (unk_0xE2D0C323A1AE5D85(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_142()
{
	if (iLocal_88)
	{
		if (!iLocal_87)
		{
			unk_0x1CF3F44FC2EB9F99("RE20_FAIL");
			if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				func_23(0);
			}
			iLocal_125 = 0;
			while (iLocal_125 < 6)
			{
				if (!unk_0xF68107C40359970C(iLocal_103[iLocal_125]))
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_116[iLocal_125]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_116[iLocal_125]));
					}
					unk_0xB3822DB3D538C8F3(&(iLocal_103[iLocal_125]));
				}
				iLocal_125++;
			}
			unk_0x8576657A629C4B0A(1f);
			unk_0x07CECF421D895F3D(3, 1);
			if (bLocal_89)
			{
				func_3(18, 7, 0);
			}
			else
			{
				func_3(18, 1, 0);
			}
		}
		unk_0xEC6D4F9C59CDA6F5();
	}
	func_143(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_143(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_111())
	{
		func_147(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112906 = unk_0x320D1840B6DAA1CC();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_112904, 1), 64);
		if (func_52(Global_112904) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112903, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_112901, (unk_0x320D1840B6DAA1CC() - Global_112902), 0);
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_112911, 0) && Global_112915.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_112911, 0);
	}
	func_144(&Global_31565);
	Global_112905 = 0;
	func_114(-1);
}

void func_144(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42558)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42557 = 0;
	Global_42559 = 0;
	Global_42596 = 15;
	Global_62687 = 0;
	Global_62688 = 0;
}

char* func_145(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_146(int iParam0)
{
	Global_43147 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_147(int iParam0)
{
	func_3(iParam0, 0, func_148(iParam0));
}

int func_148(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

