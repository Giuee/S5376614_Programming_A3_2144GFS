// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Programming_A2EditorTarget : TargetRules
{
	public Programming_A2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Programming_A2" } );
	}
}
