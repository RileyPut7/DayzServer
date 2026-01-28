modded class MZ_KOTH
{
	override void ReleaseScriptedReward(EntityAI rewardEAI)
	{
		//If your container is a scripted container, the script will spawn it and then call this function for you to do what you want with it
	}
	
	override void StartNewKOTH(int KOTH_ID, int newKothArrayID, string ContainerClassname, bool IsScripted)
	{
		//These 7 variables, you can adjust if you like or if you want to further customize how the KOTHs are started
		//Useful if you want to alter any aspects of it or force a certain reward container classname and force the scripted boolean for example
		
		string	KOTH_Name = GetMZKConfig().KOTHs.Get(KOTH_ID).GetName();
		vector	KOTH_Position = GetMZKConfig().KOTHs.Get(KOTH_ID).GetPosition();
		vector	KOTH_Orientation = GetMZKConfig().KOTHs.Get(KOTH_ID).GetOrientation();
		int		KOTH_CaptureRadius = GetMZKConfig().KOTHs.Get(KOTH_ID).GetCaptureRadius();
		int		KOTH_EnemyCount = GetMZKConfig().KOTHs.Get(KOTH_ID).GetEnemyCount();
		int		KOTH_LootCount = GetMZKConfig().KOTHs.Get(KOTH_ID).GetRewardLootCount();
		string	KOTH_ContainerClassname = ContainerClassname;
		bool	KOTH_ContainerIsScripted = IsScripted;
		
		MZK_ActiveKoths.Insert(new MZ_KOTHEvent(KOTH_ID, KOTH_Name, KOTH_Position, KOTH_Orientation, KOTH_CaptureRadius, KOTH_EnemyCount, KOTH_LootCount, KOTH_ContainerClassname, KOTH_ContainerIsScripted));
		
		SendNotification("New King of The Hill '" + KOTH_Name + "' starting!");
	}
}