modded class DeadRabbit
{
	override bool CanBeSkinned()
	{
		return true;
	}
	
	override bool IsSkinned()
	{
		return CanBeSkinned() && m_alreadySkinned;
	}
};