modded class SurvivorBase
{
	protected bool m_alreadySkinned = false;
	
	override void Init()
	{
		super.Init();
		RegisterNetSyncVariableBool("m_alreadySkinned");
	}
	
	override bool IsSkinned()
	{
		return CanBeSkinned() && m_alreadySkinned;
	}
};