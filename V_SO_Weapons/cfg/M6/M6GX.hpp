class OPTRE_M6G;
class SO_M6G_Base: OPTRE_M6G
{
	class WeaponSlotsInfo;
};

class OPTRE_M6GX: SO_M6G_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M6GX Magnum";
	baseWeapon 					= "OPTRE_M6GX";
	model                       = "\OPTRE_Weapons\Pistol\M6G";
	
	magazines[]=
	{
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag_Tracer",
		"OPTRE_8Rnd_127x40_Mag_AP",
		"OPTRE_8Rnd_127x40_Mag_APT",
		"OPTRE_8Rnd_127x40_Mag_HE",
		"OPTRE_8Rnd_127x40_Mag_HET",
		"OPTRE_8Rnd_127x40_Mag_HVAP",
		"OPTRE_8Rnd_127x40_Mag_HVAPT",
		"OPTRE_8Rnd_127x40_Mag_JHP",
		"OPTRE_8Rnd_127x40_Mag_JHPT",
		"OPTRE_8Rnd_127x40_Mag_SAPHE",
		"OPTRE_8Rnd_127x40_Mag_SAPHET",
		"OPTRE_8Rnd_127x40_Mag_SS",
		"OPTRE_8Rnd_127x40_Mag_NARQ",
		"OPTRE_8Rnd_127x40_Mag_FR",
		"OPTRE_8Rnd_127x40_Mag_FG"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 43;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_m6_silencer",
				"optre_m6c_compensator"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_aco_grn",
				"optic_aco",
				"optic_holosight_blk_f",
				"optic_yorris",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m6c_scope",
				"optre_m6g_scope",
				
				"OPTRE_M6S_Scope",
				"OPTRE_M6GX_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_M6D_Smartlink"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m6g_flashlight",
				"acc_flashlight_pistol",
				
				"OPTRE_M6D_Flashlight"
			};
		};
	};
};