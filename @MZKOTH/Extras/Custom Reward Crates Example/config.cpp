class CfgPatches
{
	class mz_kothchest_override
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping"};
	};
};
class CfgMods
{
	class mz_kothchest_override
	{
		dir = "mz_kothchest_override";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MerkZone KOTH Chest Override";
		logoSmall = "";
		logo = "";
		logoOver = "";
		tooltip = "";
		overview = "";
		credits = "";
		author = "YOU";
		authorID = "0";
		version = "2.00";
		extra = 1;
		type = "mod";
	};
};
class CfgVehicles
{
	class mz_KOTHchest_Base;
	class mz_KOTHchest_MyCustomBox: mz_KOTHchest_Base //Change classname to what you want to call it
	{
		scope=2;
		model="DZ\structures\Military\Misc\Misc_SupplyBox1.p3d"; //Put the P3D in here
	};
};
