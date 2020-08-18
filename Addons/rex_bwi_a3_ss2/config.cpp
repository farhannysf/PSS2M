class CfgPatches
{
	class rex_bwi_a3_ss2v2
	{
		units[]={};
		weapons[]=
		{
			"rex_bwi_a3_ss2v5a1"
		};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class rex_bwi_a3_ss2v5a1: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="SS2-V5A1";
		author="Rex";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class rex_bwi_a3_ss2v5a1
			{
				weapon="rex_bwi_a3_ss2v5a1";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=0;
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class rex_bwi_a3_ss2v1_base: Rifle_Base_F
	{
		scope=1;
		author="nzdfcrash";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction="GestureReloadSMG_02";
		maxrecoilsway=0.003;
		swaydecayspeed=0;
		canShootInWater=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_m",
					"muzzle_snds_m_snd_F",
					"muzzle_snds_m_khk_F"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		displayName="SS2-V2";
		picture="\rex_bwi_a3_ss2\ico\ss2_x_ca.paa";
		discreteDistance[]={100,200,300,400,500,600,800};
		discreteDistanceInitIndex=1;
		weaponInfoType="RscWeaponZeroing";
		magazineReloadSwitchPhase=0.46000001;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"\rex_bwi_a3_ss2\sounds\closure_rifle_7.wss",
					0.5,
					1,
					10
				};
				closure2[]=
				{
					"\rex_bwi_a3_ss2\sounds\closure_rifle_6.wss",
					0.5,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"TRG20_Shot_SoundSet",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TRG20_silencerShot_SoundSet",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.075000003;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			dispersion=0.00087270001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"\rex_bwi_a3_ss2\sounds\closure_rifle_7.wss",
					0.5,
					1,
					10
				};
				closure2[]=
				{
					"\rex_bwi_a3_ss2\sounds\closure_rifle_6.wss",
					0.5,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"TRG20_Shot_SoundSet",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TRG20_silencerShot_SoundSet",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.075000003;
			dispersion=0.0022;
			minRange=2;
			minRangeProbab=0.60000002;
			midRange=300;
			midRangeProbab=0.34999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			distanceZoomMin=60;
			distanceZoomMax=60;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			weaponSoundEffect="DefaultRifle";
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			1.1,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"rex_bwi_a3_ss2\sounds\ss2_reload",
			1.8,
			1,
			30
		};
		class Library
		{
			libTextDesc="The SS2 is a replacement for the Pindad SS1 created by PT Pindad.";
		};
	};
	class rex_bwi_a3_ss2v5a1: rex_bwi_a3_ss2v1_base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		author="nzdfcrash and Rex";
		displayName="SS2-V5A1";
		model="\rex_bwi_a3_ss2\rex_bwi_a3_ss2v5a1.p3d";
		picture="\rex_bwi_a3_ss2\ico\ss2v5a1_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_m",
					"muzzle_snds_m_snd_F",
					"muzzle_snds_m_khk_F"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
				compatibleItems[]={};
			};
		};
	};
};
class cfgMods
{
	author="nzdfcrash and Rex";
	timepacked="1591607459";
};
