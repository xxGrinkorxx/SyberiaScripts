modded class ParticleList
{
    // CONTAMINATED AREAS

	static const int CONTAMINATED_AREA_GAS_BIGASS_ORNG	= RegisterSybParticle("contaminated_area_gas_bigass_orng");

    static int RegisterSybParticle(string file_name)
	{
		return RegisterParticle(GetPathToSybParticles(), file_name);
	}

    //! Returns base path to syberia particles
	static string GetPathToSybParticles()
	{
		return "SyberiaScripts/graphics/particles/";
	}

}