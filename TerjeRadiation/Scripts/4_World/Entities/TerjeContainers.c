// <copyright file="TerjeContainers.c" author="Terje Bruoygard">
//     This repository does not provide full code of our mods need to be fully functional.
//     That's just interfaces and simple logic that may be helpful to other developers while using our mods as dependencies.
//     Modification, repackaging, distribution or any other use of the code from this file except as specified in the LICENSE.md is strictly prohibited.
//     Copyright (c) TerjeMods. All rights reserved.
// </copyright>

class TerjeCaseRadMilitary: WoodenCrate
{
	override bool IsTerjeRadiationAccumulated()
	{
		return false;
	};
	
	override float GetTerjeRadiationInventoryIsolation()
	{
		return 1;
	}
};

class TerjeCaseRadSpecial: Container_Base
{
	override bool IsTerjeRadiationAccumulated()
	{
		return false;
	};
	
	override float GetTerjeRadiationInventoryIsolation()
	{
		return 1;
	}
};