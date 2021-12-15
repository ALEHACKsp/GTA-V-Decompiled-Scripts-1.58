#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 10;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.56.01";
	iLocal_20 = -1;
	iLocal_21 = -1;
	unk_0x2C07CBAFAC54A645(0);
	unk_0x3F57BEDBC381CBC7();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577977 = unk_0x2E87280918B16506(sLocal_0);
	iVar0 = unk_0x320D1840B6DAA1CC() + 10000;
	while (unk_0x320D1840B6DAA1CC() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_104())
		{
			func_102();
		}
		if (unk_0x9315DBF7D972F07A() && Global_2723433.f_3)
		{
			func_101();
			func_100();
			func_97();
			func_95();
			func_94();
			func_83();
			func_82();
			func_77();
			func_65();
			func_58();
			func_42();
			func_36();
			func_30();
			func_28();
			func_27();
			func_9();
		}
		if (unk_0x44859561F653DD4E())
		{
			func_2();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_1()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5] || Global_1574629.f_18 != 0)
	{
		iLocal_27 = 0;
		iLocal_28 = 0;
		iLocal_30 = 0;
		iLocal_29 = 0;
		return;
	}
	if (iLocal_28 >= 4)
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_30))
	{
		Var0 = { -1003f, -3007.9f, 15.2f };
		iLocal_30 = unk_0xFE15FEB341652241(Var0, 3f, joaat("schafter6"), 65602);
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(iLocal_27, iLocal_29))
	{
		iVar3 = (-1 + iLocal_29);
		iVar4 = unk_0xAB793EA186AB8DAA(iLocal_30, iVar3, 1);
		if (unk_0xE5965CDF24F93A9F(iVar4) && unk_0x3A8B0F5B0E3DE13A(iVar4))
		{
			unk_0x9210F85E9CD785F1(iVar4, 0);
			unk_0x4536AE3DABDE0C44(iVar4, 1);
			unk_0xD6A76BAB45A4B460(iVar4, 106, 0);
			unk_0xD6A76BAB45A4B460(iVar4, 107, 0);
			unk_0xD6A76BAB45A4B460(iVar4, 108, 0);
			unk_0xCED9E32812D6C7C7(&iLocal_27, iLocal_29);
			iLocal_28++;
		}
	}
	iLocal_29++;
	if (iLocal_29 >= (8 - 1))
	{
		iLocal_29 = 0;
	}
}

void func_2()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (Global_1958759 == -1)
	{
		func_7();
		return;
	}
	iVar0 = (Global_1958759 - func_6());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		func_7();
		return;
	}
	sVar1 = func_5(&(Global_4718592.f_128495[iVar0 /*565*/]));
	if (!unk_0x3C57C2F07FEE34D2("FIX_BIL_MCS2", sVar1) && !unk_0x3C57C2F07FEE34D2("FIX_TRIP2_MCS1", sVar1))
	{
		func_7();
		return;
	}
	iLocal_24 = 1;
	if (unk_0xC6398AABC3E92273() && !Global_1058362)
	{
		unk_0x6D23F8C14190D353();
	}
	Global_1058362 = 1;
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		return;
	}
	func_4(&uLocal_22, 0, 0);
	iVar2 = func_3(&uLocal_22, 0, 0);
	iVar3 = unk_0x9E3BE9BFA8265D37() + 5000;
	if (iVar2 > iVar3)
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			unk_0xA43ADA94826528F5();
		}
		unk_0x6D23F8C14190D353();
	}
}

var func_3(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

var func_5(var uParam0)
{
	return uParam0;
}

int func_6()
{
	if (Global_4718592.f_138118 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_7()
{
	func_8(&uLocal_22);
	if (iLocal_24)
	{
		iLocal_24 = 0;
		Global_1058362 = 0;
	}
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_26(&uLocal_14))
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
		if (func_25(&uLocal_14, 60000, 0))
		{
			func_24(&uLocal_14, 0, 0);
			func_8(&uLocal_14);
		}
	}
	if (func_26(&uLocal_12) && func_25(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_21 = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(iLocal_21, "05", unk_0xE2D3D51028F0428A(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_25(&uLocal_12, 4000, 0))
		{
			if (!unk_0x78D9ADD511FEAD8B(iLocal_21))
			{
				unk_0xF889BDFCC181BA9F(iLocal_21);
			}
			unk_0xCDBCC1BC1184B002(iLocal_21);
			iLocal_21 = -1;
			unk_0x0AF8D3A06BB92903("DLC_GR_CS2_General_Scene");
			func_24(&uLocal_12, 0, 0);
			func_8(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_19())
	{
		return;
	}
	iLocal_6 = 1;
	unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	if (!unk_0xE5965CDF24F93A9F(uLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			iLocal_5 = unk_0x0A7322C6D0E1A985(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0xF1A23B343DFEDFD0(iVar0);
			unk_0x5C65DDDC219B3AA5(iLocal_5, 1);
			unk_0x7A93DEA53EFC3CF2(iLocal_5, 8000);
			iVar1 = func_18(7868, -1, 0);
			func_15(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			unk_0x806FE7B7DB6B4483(&Var2);
			Local_16 = { unk_0x6B62510F212526DC(iLocal_5, 0) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_14();
		if (unk_0xE9E8955A780DDA01() || unk_0xECD40FEF3CF43BDB())
		{
			if (iLocal_20 == -1)
			{
				unk_0x66B27A59829491D3("DLC_GR_CS2_General_Scene");
				iLocal_20 = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(iLocal_20, "07", iLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_7)
			{
				if (func_25(&uLocal_8, 4500, 0))
				{
					unk_0x5C65DDDC219B3AA5(iLocal_5, 0);
					func_24(&uLocal_8, 0, 0);
					func_8(&uLocal_8);
					func_4(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_3(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_13()));
				fVar47 = (SYSTEM::TO_FLOAT(func_3(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_12()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_10(Local_16, func_11(), fVar47) };
				unk_0xC64B6E13A6A7F517(iLocal_5, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_19++;
					Local_16 = { unk_0x6B62510F212526DC(iLocal_5, 0) };
					func_24(&uLocal_8, 0, 0);
					func_8(&uLocal_8);
					if (func_12() == -1)
					{
						unk_0x4BDA5AFD88C085EB(&iLocal_5);
						unk_0xD7C2019EC11E9A90();
						if (!unk_0x78D9ADD511FEAD8B(iLocal_20))
						{
							unk_0xF889BDFCC181BA9F(iLocal_20);
						}
						unk_0xCDBCC1BC1184B002(iLocal_20);
						iLocal_20 = -1;
						func_4(&uLocal_12, 0, 0);
						func_4(&uLocal_14, 0, 0);
						func_24(&uLocal_10, 0, 0);
						func_8(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_10(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_11()
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_12()
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_13()
{
	return 3150;
}

void func_14()
{
	struct<3> Var0;
	
	Var0 = { unk_0x63A8BF5E6C2BF85C(iLocal_5, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0x8CE3D365F064F69E(iLocal_5, Var0, 2, 1);
}

void func_15(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_16(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, iParam3);
	}
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1574907;
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_16(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_19()
{
	if (((((((func_23(22107, -1) && Global_2671444 == 7) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0)) && func_22(unk_0xE2D3D51028F0428A(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715542.f_3076.f_178 >= 1) && Global_2715542.f_3076.f_178 < 4) && func_21()) && func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (func_23(15476, -1) && func_18(5452, func_17(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x234904AD6416665B(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_22(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(unk_0x6B62510F212526DC(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

var func_23(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

void func_24(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_25(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27()
{
	switch (Global_262145.f_30709)
	{
		case joaat("mamba"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.565f;
			Global_1966336 = -3.3f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.98f;
			Global_1966336 = -2.7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.849f;
			Global_1966336 = -4f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.87f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 1.025f;
			Global_1966336 = -3.1f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.7f;
			Global_1966336 = -2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.725f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.735f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.735f;
			Global_1966336 = -2.9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.695f;
			Global_1966336 = -2.7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.715f;
			Global_1966336 = -3.2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966333 = 0f;
			Global_1966334 = -1.61f;
			Global_1966335 = 0.755f;
			Global_1966336 = -5f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966333 = 0f;
			Global_1966334 = -1.6f;
			Global_1966335 = 0.695f;
			Global_1966336 = -3.2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966333 = 0f;
			Global_1966334 = -1.52f;
			Global_1966335 = 0.655f;
			Global_1966336 = -2.6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
	}
}

void func_28()
{
	switch (func_29())
	{
		case joaat("mamba"):
			Global_1966321 = 0.53f;
			break;
		
		case joaat("growler"):
			Global_1966321 = 0.6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966321 = 0.6f;
			break;
		
		case joaat("raiden"):
			Global_1966321 = 0.95f;
			break;
		
		case joaat("jugular"):
			Global_1966321 = 0.65f;
			break;
		
		case joaat("tampa2"):
			Global_1966321 = 0.65f;
			break;
		
		case joaat("t20"):
			Global_1966321 = 0.83f;
			break;
	}
}

int func_29()
{
	return Global_262145.f_26423;
}

void func_30()
{
	var uVar0;
	var uVar3;
	
	if (unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_35())
	{
		return;
	}
	if (func_34(unk_0x9E2D6C50374FCFA9()) == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) || !unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	func_33(&uVar0, &uVar3);
	if ((func_31(unk_0x9E2D6C50374FCFA9()) || Global_1946928 != 7) || !unk_0xB950B5D01E8A4868(unk_0xE2D3D51028F0428A(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, 0, 1, 0))
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			unk_0x7653D561C9574763(2, 58, 1);
		}
		else
		{
			unk_0x7653D561C9574763(2, 51, 1);
		}
	}
}

int func_31(int iParam0)
{
	if (iParam0 != func_35() && func_32(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_32(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_33(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

int func_34(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

int func_35()
{
	return -1;
}

void func_36()
{
	if (!func_37())
	{
		return;
	}
	unk_0x7653D561C9574763(2, 51, 1);
}

int func_37()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_3, 5))
	{
		return 1;
	}
	if ((func_40(unk_0x9E2D6C50374FCFA9()) && func_39()) && func_38(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_38(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_40(int iParam0)
{
	if (iParam0 != func_35())
	{
		if (func_32(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_41(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_42()
{
	var uVar0;
	var uVar19;
	bool bVar20;
	var uVar21;
	
	switch (iLocal_45)
	{
		case 0:
			if (unk_0x3E6C9DAD84CEFED1() && unk_0x99C5758D126DE2C4() == 444479190)
			{
				iLocal_45 = 1;
			}
			break;
		
		case 1:
			if ((((((unk_0xF09A4F413B0D30EB(2, 201) || unk_0xA829C9A2767AC8EF()) || unk_0xCB1EF1E7B77ADF4C()) || !func_56()) || func_55()) || !unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A())) || unk_0xE08D4560995E7946(unk_0x9E2D6C50374FCFA9()))
			{
				iLocal_45 = 0;
				return;
			}
			if (unk_0xF09A4F413B0D30EB(2, 202) || unk_0xDFA2E5162727D6D2())
			{
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_10 = func_35();
				unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_5), 15);
				unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_1), 31);
				iLocal_46 = Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_17;
				func_53(0, -1);
				if (unk_0xDFA2E5162727D6D2())
				{
				}
				iLocal_45 = 2;
				return;
			}
			if ((!unk_0x3E6C9DAD84CEFED1() || unk_0x99C5758D126DE2C4() != 444479190) && !unk_0xDFA2E5162727D6D2())
			{
				iLocal_45 = 0;
			}
			break;
		
		case 2:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_5), 15);
			unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_1), 31);
			func_53(0, -1);
			Global_1946934.f_4521.f_6 = iLocal_46;
			iLocal_45 = 3;
			break;
		
		case 3:
			if (Global_1946934.f_4521.f_6 == -1)
			{
				if (((func_52(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && func_56()) && !func_55())
				{
					uVar19 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (func_52(uVar19))
					{
						uVar21 = unk_0x15CAA6D7B11F1A7C(uVar19);
						func_49(iLocal_46, &uVar0);
						if (!func_43(&uVar0, uVar19, uVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_1), 31);
					unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_5), 15);
					unk_0xB0550BC91B0159D6(&(Global_1946934.f_4521.f_1), 9);
					func_53(0, -1);
					iLocal_45 = 0;
				}
			}
			break;
	}
}

int func_43(var uParam0, var uParam1, var uParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_48(uParam1, uParam2, &Var0, &Var3, &Var6, &Var9);
	func_47(uParam1, uParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_45(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_45(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_45(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_45(Var21, Var9, 0f, 1f, 0.5f) };
	if (unk_0x5F8653E60ED2288E(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_44(unk_0x82FE2343F8BDFF0B(uParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_45(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_45(Var0, Var3, 0f, 1f, 0.5f) };
	if (unk_0x5F8653E60ED2288E(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_44(unk_0x82FE2343F8BDFF0B(uParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (unk_0x5F8653E60ED2288E(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_44(unk_0x82FE2343F8BDFF0B(uParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (unk_0xD132EDDA78FF4A51(uParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1, 0))
	{
		if ((func_44(unk_0x82FE2343F8BDFF0B(uParam1), uParam0->f_14, 75f) || func_44(unk_0x82FE2343F8BDFF0B(uParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_44(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_45(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_46(Param0.x, Param3.x, fParam6, fParam7, fParam8), func_46(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_46(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_46(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	unk_0xB38EF75835FAF667(uParam1, &Var0, &Var3);
	Var6.x = Var0.x;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.x = Var3;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.x = Var0.x;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.x = Var3;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { unk_0xCACAD935C0BEE14F(uParam0, Var6) };
	*uParam3 = { unk_0xCACAD935C0BEE14F(uParam0, Var9) };
	*uParam4 = { unk_0xCACAD935C0BEE14F(uParam0, Var12) };
	*uParam5 = { unk_0xCACAD935C0BEE14F(uParam0, Var15) };
}

void func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	unk_0xB38EF75835FAF667(uParam1, &Var0, &Var3);
	Var6.x = Var0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.x = Var0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.x = Var3.x;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { unk_0xCACAD935C0BEE14F(uParam0, Var6) };
	*uParam3 = { unk_0xCACAD935C0BEE14F(uParam0, Var9) };
	*uParam4 = { unk_0xCACAD935C0BEE14F(uParam0, Var12) };
	*uParam5 = { unk_0xCACAD935C0BEE14F(uParam0, Var15) };
}

void func_49(int iParam0, var uParam1)
{
	func_50(iParam0, &(uParam1->f_4), &(uParam1->f_7), &(uParam1->f_10), &(uParam1->f_13), &(uParam1->f_14));
	uParam1->f_2 = 1;
	unk_0xCED9E32812D6C7C7(&(uParam1->f_3), 6);
	unk_0xCED9E32812D6C7C7(&(uParam1->f_3), 0);
	unk_0xCED9E32812D6C7C7(&(uParam1->f_3), 2);
	unk_0xCED9E32812D6C7C7(&(uParam1->f_3), 4);
}

void func_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { func_51(iParam0) };
	switch (iParam0)
	{
		case 149:
			*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
			*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
			*uParam4 = 3.25f;
			*uParam5 = 90f;
			break;
		
		case 150:
			*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
			*uParam3 = { -148.563f, -1341.091f, 32.5145f };
			*uParam4 = 2.75f;
			*uParam5 = 0f;
			break;
		
		case 151:
			*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
			*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
			*uParam4 = 2.5f;
			*uParam5 = 70f;
			break;
		
		case 152:
			*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
			*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
			*uParam4 = 2.25f;
			*uParam5 = 50f;
			break;
		
		case 153:
			*uParam2 = { 488.2599f, -896.563f, 24.7408f };
			*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
			*uParam4 = 2.25f;
			*uParam5 = 85f;
			break;
	}
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 759.36f, -675.13f, 27.86f;
			break;
		
		case 150:
			return -144.58f, -1341.37f, 28.87f;
			break;
		
		case 151:
			return -171f, -31.4f, 51.27f;
			break;
		
		case 152:
			return 231.54f, -1875.7f, 25.41f;
			break;
		
		case 153:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_52(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_53(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319), 5);
			if (iParam1 != -1)
			{
				func_54(1, iParam1);
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319, 5))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319), 5);
		func_54(0, -1);
	}
}

void func_54(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_17 = iParam1;
	}
	else
	{
		Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_17 = -1;
	}
}

bool func_55()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

int func_56()
{
	if (func_57() == 0)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	return Global_1574629.f_18;
}

void func_58()
{
	bool bVar0;
	
	if (unk_0x9315DBF7D972F07A() && Global_2723433.f_3)
	{
		switch (iLocal_42)
		{
			case 0:
				if (unk_0x44859561F653DD4E())
				{
					return;
				}
				if (Global_1946934.f_496 && func_64(Global_1946934.f_3369))
				{
					func_62(1);
					iLocal_42 = 1;
				}
				break;
			
			case 1:
				func_62(1);
				if ((!func_55() && func_56()) && Global_1946928 == 7)
				{
					bVar0 = true;
				}
				else if (unk_0x44859561F653DD4E())
				{
					bVar0 = true;
				}
				else if ((func_56() && !func_61(unk_0x9E2D6C50374FCFA9())) && !func_60(unk_0x9E2D6C50374FCFA9()))
				{
					bVar0 = true;
				}
				if (func_59() == 37 && Global_262145.f_10513)
				{
					func_4(&uLocal_43, 1, 0);
				}
				if (bVar0)
				{
					iLocal_42 = 2;
				}
				break;
			
			case 2:
				func_62(0);
				iLocal_42 = 0;
				break;
		}
	}
	else if (iLocal_42 != 0)
	{
		func_62(0);
		iLocal_42 = 0;
	}
	if (func_26(&uLocal_43))
	{
		if (func_25(&uLocal_43, 20000, 1))
		{
			func_8(&uLocal_43);
			Global_262145.f_10513 = 1;
		}
		else
		{
			Global_262145.f_10513 = 0;
		}
	}
}

int func_59()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192;
}

int func_60(int iParam0)
{
	if (iParam0 != func_35() && func_32(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_35())
	{
		if (func_32(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_32(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

void func_62(bool bParam0)
{
	func_63(bParam0);
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 21);
		unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1946934.f_9), 21);
		unk_0xB0550BC91B0159D6(&(Global_1946934.f_9), 20);
	}
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1946934.f_4), 7);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1946934.f_4), 7);
	}
}

int func_64(int iParam0)
{
	if ((((iParam0 == 151 || iParam0 == 149) || iParam0 == 153) || iParam0 == 152) || iParam0 == 150)
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	switch (iLocal_41)
	{
		case 0:
			if (unk_0xE2D0C323A1AE5D85(Global_1946934, 6))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_60, 0) && unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_41 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1574580.f_1)
			{
				iLocal_41 = 2;
			}
			else if (func_75())
			{
				iLocal_41 = 0;
			}
			break;
		
		case 2:
			if (!Global_1574580.f_1)
			{
				iLocal_41 = 0;
			}
			else if (func_75())
			{
				iLocal_41 = 3;
			}
			break;
		
		case 3:
			iLocal_41 = 0;
			if (Global_1574580.f_1)
			{
				func_66();
			}
			break;
	}
}

void func_66()
{
	if (Global_1574580.f_1 == 1)
	{
		func_67(7, 0, 1);
		Global_1574580.f_1 = 0;
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_9 = 0;
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	if (func_74())
	{
		if (iParam1 == 1)
		{
			if (Global_2810287.f_4462 == -1)
			{
				Global_2810287.f_4462 = Global_262145.f_26832;
			}
			func_24(&(Global_2810287.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810287.f_4465 == -1)
				{
					Global_2810287.f_4465 = Global_262145.f_26833;
				}
				func_24(&(Global_2810287.f_4463), 0, 0);
			}
			else
			{
				Global_1574580 = 0;
				Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
				func_73(1);
			}
		}
		else
		{
			Global_1574580 = 0;
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
			func_73(1);
		}
		if ((!unk_0x44859561F653DD4E() && !func_72()) && !func_68(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1057404 = 0;
		}
		unk_0x5106CAAF87C49A90(0, -1, -1, iParam0);
	}
}

int func_68(int iParam0)
{
	if (func_69(iParam0, 1))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_70(iParam0))
		{
			return 1;
		}
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_70(int iParam0)
{
	return func_71(iParam0);
}

bool func_71(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_72()
{
	return Global_2714627.f_840;
}

void func_73(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_74())
		{
			if (func_32(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_32(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

bool func_74()
{
	return Global_1574580;
}

bool func_75()
{
	return (unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_76(unk_0x9E2D6C50374FCFA9()));
}

int func_76(int iParam0)
{
	if (iParam0 != func_35())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_5, 6);
	}
	return 0;
}

void func_77()
{
	int iVar0;
	
	if (func_81(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_2810287.f_5193.f_765)
		{
			iVar0 = func_79();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_26(&uLocal_39))
			{
				func_24(&uLocal_39, 1, 0);
				func_78(1, 1);
			}
		}
	}
	if (func_26(&uLocal_39))
	{
		if (func_25(&uLocal_39, 10000, 1))
		{
			func_8(&uLocal_39);
			func_78(0, 0);
		}
	}
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1964897 && bParam0)
		{
			Global_1964897 = 1;
			iLocal_37 = 1;
		}
	}
	else
	{
		if (Global_1964897 && iLocal_37)
		{
			Global_1964897 = 0;
		}
		iLocal_37 = 0;
	}
	if (bParam1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1946934.f_3, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1946934.f_3), 5);
			iLocal_38 = 1;
		}
	}
	else
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_3, 5) && iLocal_38)
		{
			unk_0xB0550BC91B0159D6(&(Global_1946934.f_3), 5);
		}
		iLocal_38 = 0;
	}
}

int func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_80(7, iVar0))
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) && unk_0x2E87280918B16506(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1645739.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_80(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

int func_81(int iParam0)
{
	if (iParam0 != func_35())
	{
		if (func_32(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_41(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

void func_82()
{
	if (unk_0x9E2D6C50374FCFA9() == func_35())
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319, 5))
	{
		if ((unk_0x3E6C9DAD84CEFED1() && (unk_0x99C5758D126DE2C4() == 15890625 || unk_0x99C5758D126DE2C4() == -862848537)) && unk_0x99C5758D126DE2C4() != 0)
		{
			unk_0x6C5C36A8B5B604A8(0, 0, 0);
		}
	}
}

void func_83()
{
	if (func_93())
	{
		if (!iLocal_31)
		{
			func_92(45, 1, 1);
			iLocal_31 = 1;
		}
	}
	else if (iLocal_31)
	{
		func_89(45, 1, 1);
		iLocal_31 = 0;
		func_8(&uLocal_32);
	}
	if (func_84())
	{
		if (!iLocal_36)
		{
			Global_1965072 = 1;
			iLocal_36 = 1;
		}
	}
	else if (iLocal_36)
	{
		Global_1965072 = 0;
		iLocal_36 = 0;
		func_8(&uLocal_34);
	}
}

int func_84()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!func_81(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	iVar0 = 235;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 58;
	}
	if (func_88("CM_PV_MEM") || func_88("CM_PV_MEM_PC"))
	{
		if (unk_0xF09A4F413B0D30EB(2, iVar0))
		{
			func_24(&uLocal_34, 0, 0);
			return 1;
		}
	}
	if (func_26(&uLocal_34) && !func_25(&uLocal_34, 3000, 0))
	{
		return 1;
	}
	if (func_52(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_87(uVar1, 1))
		{
			iVar2 = func_85(uVar1);
			if ((iVar2 != func_35() && iVar2 != unk_0x9E2D6C50374FCFA9()) && unk_0xE2D0C323A1AE5D85(Global_2689156[iVar2 /*453*/].f_319.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (!func_87(uParam0, 1))
	{
		return func_35();
	}
	iVar0 = unk_0xC3B76795ECBDEF41(uParam0, "Player_Vehicle");
	return func_86(iVar0, 0, 1, 0);
}

int func_86(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xA1087A6350CD9244(iVar1);
			if (func_32(iVar0, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iVar0)))
			{
				if (iParam0 == unk_0x4AE7F6D227ED332C(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_32(iParam3, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iParam3)))
	{
		if (iParam0 == unk_0x4AE7F6D227ED332C(iParam3))
		{
			return iParam3;
		}
	}
	return func_35();
}

int func_87(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_88(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB0550BC91B0159D6(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_91() == 0)
		{
			uVar0 = func_18(func_90(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, iParam1);
			func_15(func_90(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10851;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12597;
}

int func_91()
{
	return Global_31505;
}

void func_92(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_91() == 0)
		{
			uVar0 = func_18(func_90(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, iParam1);
			func_15(func_90(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_93()
{
	int iVar0;
	
	if (!func_81(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	iVar0 = 201;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 223;
	}
	if (!func_88("CM_PV_MEM") && !func_88("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (unk_0xF09A4F413B0D30EB(2, iVar0))
	{
		func_24(&uLocal_32, 0, 0);
		return 1;
	}
	if (func_39() && unk_0x3C57C2F07FEE34D2(&(Global_22830.f_1), "INST_MENU_TTL"))
	{
		if (unk_0xF09A4F413B0D30EB(2, 201))
		{
			func_24(&uLocal_32, 0, 0);
			return 1;
		}
	}
	if (func_26(&uLocal_32) && !func_25(&uLocal_32, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if ((Global_111861 && unk_0xB4C854DD86E40FDA(joaat("director_mode")) <= 0) && func_56())
	{
		unk_0xC0BCF14F60B6723A();
	}
}

void func_95()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836379)
		{
			iVar0 = func_96(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10384 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_4 = 0;
	}
}

int func_96(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_97()
{
	if (!iLocal_3)
	{
		if (Global_1836379)
		{
			if (func_99() || func_98())
			{
				Global_262145.f_19963 = 1;
			}
			else
			{
				Global_262145.f_19963 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_3 = 0;
	}
}

int func_98()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_96(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10493)
	{
		return 0;
	}
	uVar1[0] = func_96(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_96(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_96(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_96(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10489 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10493)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_99()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_96(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10492)
	{
		return 0;
	}
	uVar1[0] = func_96(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_96(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_96(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_96(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10488 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10492)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_100()
{
	int iVar0;
	
	if (unk_0x8FE9914D4872D601())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853128)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[iVar0 /*888*/].f_766), 1);
			iVar0++;
		}
	}
}

void func_101()
{
	if (Global_262145.f_10468 != 120)
	{
		Global_262145.f_10468 = 120;
	}
}

void func_102()
{
	if (iLocal_1)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.23f);
		unk_0x71F4002CB1A0B451(255, 255, 255, 255);
		func_103(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0xF1EC2C71FD1371B8())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xF09A4F413B0D30EB(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (unk_0xF09A4F413B0D30EB(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0xF09A4F413B0D30EB(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0xF09A4F413B0D30EB(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0xF09A4F413B0D30EB(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xF1EC2C71FD1371B8())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xF09A4F413B0D30EB(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (unk_0xF09A4F413B0D30EB(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0xF09A4F413B0D30EB(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0xF09A4F413B0D30EB(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0xF09A4F413B0D30EB(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_103(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x702B349761F63A9E(sParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

bool func_104()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

