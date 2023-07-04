modded class Heatpack : ItemBase
{	override bool CanHaveTemperature()
	{
		if(!IsRuined() && GetCompEM().IsWorking())
		{
		return true;
		}
		else
		{
		return false;
		}
	}
	override void OnWorkStart()
	{	
		if (GetGame().IsServer())
		{	float HeatPackTemp = (60 + GameConstants.TEMPERATURE_ITEMS_HEAT_IN_INVENTORY_FROM_BODY);
			SetTemperature(HeatPackTemp);
		}
	}
	
	override void OnWork( float consumed_energy )
	{
		if (GetGame().IsServer())
		{
			float HeatPackTemp = (60 + GameConstants.TEMPERATURE_ITEMS_HEAT_IN_INVENTORY_FROM_BODY);
			SetTemperature(HeatPackTemp);
		}
	}
};
