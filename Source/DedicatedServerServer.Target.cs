// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class DedicatedServerServerTarget : TargetRules
{
	public DedicatedServerServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange(new string[] { "DedicatedServer" });

        GlobalDefinitions.Add("UE_PROJECT_STEAMSHIPPINGID=480");
        GlobalDefinitions.Add("UE_PROJECT_STEAMPRODUCTNAME=\"spacewar\"");
        GlobalDefinitions.Add("UE_PROJECT_STEAMGAMEDIR=\"spacewar\"");
        GlobalDefinitions.Add("UE_PROJECT_STEAMGAMEDESC=\"Spacewar\"");
    }
}
