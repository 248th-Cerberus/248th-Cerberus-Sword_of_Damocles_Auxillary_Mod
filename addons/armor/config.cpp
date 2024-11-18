class CfgPatches
{
	class SoD_MainBuild
	{
		units[] = 
		{
			
		};
		weapons[] = 
		{
			"SoD_Cerberus_M56_Scout_Helmet",
		};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class SoD_Mod : Mod_Base
	{
		logo = "Sword_of_Damocles_Auxiliary_Mod\addons\armor\SoD_logo.paa";
	};
};
class CfgFactionClasses
{
	class Sword_of_Damocles_Faction
	{
		displayName = "Sword of Damocles";
		priority = 2;
		side = 1;
		icon = "";
	};
};
class CfgEditorSubcategories
{
	class SoD_Units
	{
		displayName = "[SoD] Units";
	};
	class SoD_APC
	{
		displayName = "[SoD] APC";
	};
	class SoD_Cars
	{
		displayName = "[SoD] Cars";
	};
	class SoD_Shyrack
	{
		displayName = "[SoD] Aircraft";
	};
	class SoD_Shyrack_Custom
	{
		displayName = "[SoD] Aircraft Customs";
	};
	class SoD_Rancor
	{
		displayName = "[SoD] Armoured";
	};
	class SoD_Rancor_Custom
	{
		displayName = "[SoD] Armoured Customs";
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class MA_Dev_Helmets
		{
			label="[SoD] Custom Helmets";
			options[]=
			{
				"Dev"
			};
			class Dev
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Cerberus",
					"Scav",
					"Maytag",
					
				};
				class Cerberus
				{
					label="Cerberus";
					description="Cerberus_M56_S";
				};
				class Bman_M56_S
				{
					label="Bman (M56-S)";
					description="Bman's M56-S Helmet";
				};
				class Bman_H3
				{
					label="Bman (M56SH)";
					description="Bman's M56SH Helmet";
				};
				class Jerry
				{
					label="Jerry";
					description="Jerry's M56SR Helmet";
				};
				class McDaniel_Reach
				{
					label="McDaniel (M56-R)";
					description="McDaniel's M56SR Helmet";
				};
				class McDaniel_H3
				{
					label="McDaniel (M56SH)";
					description="McDaniel's M56SH Helmet";
				};
				class Thatcher
				{
					label="Thatcher";
					description="Thatcher's M56SR Helmet";
				};
				class Heimdall
				{
					label="Heimdall";
					description="Heimdall's M56SR Helmet";
				};
			};
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class Head
	{
		class iteminfo;
	};
	class UniformItem;
	class iteminfo;
	class vestitem;
	class Body;
	class HitpointsProtectionInfo;
	class MA_M56_Scout_Helmet;
	class MA_M56_Scout_Helmet_Black_Visor;
	class M52_ODST_Vest_ODST;

	#include "base_helmet.hpp"
	#include "base_vest.hpp"
	#include "custom_helmet.hpp"
	#include "custom_vest.hpp"
};

class cfgvehicles
{
	class MA_M56S_Rucksack_Radio;
	class eventhandlers;
	class UserActionsM;
	class HitPoints;
	class HitHull;
	class HitEngine;
	class HitFace;
	class HitNeck;
	class HitHead;
	class HitPelvis;
	class HitHands;
	class HitAbdomen;
	class HitDiaphragm;
	class HitChest;
	class HitBody;
	class HitArms;
	class HitLegs;
	class Incapacitated;
	class lsd_blueforClone_base;

	#include "backpacks.hpp"
};
