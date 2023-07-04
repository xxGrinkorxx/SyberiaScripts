modded class Edible_Base
{
	protected bool m_alreadySkinned = false;
	
	override void InitItemVariables()
	{
		super.InitItemVariables();
		RegisterNetSyncVariableBool("m_alreadySkinned");
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWashFruitsWell);
		AddAction(ActionWashFruitsWater);
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if (CanBeSkinned() && IsSkinned())
		{
			return false;
		}
		
		return super.CanPutInCargo(parent);
	}
};