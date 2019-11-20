// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class A1_DiasCampos__HTarget : TargetRules
{
	public A1_DiasCampos__HTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "A1_DiasCampos__H" } );
	}
}
