﻿#include "pch.h"
#include "extensions/ExtensionMasks.h"

#include <string>

const unsigned char PLAYER_TARGET_AOB[] = {0x48, 0x8B, 0x48, 0x08, 0x49, 0x89, 0x8D};
const unsigned char CREATE_BULLET_AOB[] = {
	0xF3, 0x0F, 0x11, 0xB3, 0x14, 0x0B, 0x00, 0x00, 0xF3, 0x0F, 0x11, 0xB3, 0x18, 0x0B, 0x00, 0x00, 0x0F, 0x28, 0x74,
	0x24, 0x40, 0x48, 0x83, 0xC4, 0x50, 0x5B, 0xC3
};
const unsigned char CHARACTER_LIST_AOB[] = {
	0x0F, 0x10, 0x00, 0x0F, 0x11, 0x44, 0x24, 0x70, 0x0F, 0x10, 0x48, 0x10, 0x0F, 0x11, 0x4D, 0x80, 0x48, 0x83, 0x3D
};
const unsigned char ROOT_MOTION_REDUCTION_FACTOR_ACCESS_AOB[] = {
	0x48, 0x8d, 0x44, 0x24, 0x50, 0xf3, 0x41, 0x0f, 0x10, 0x70, 0x04, 0xf3, 0x41, 0x0f, 0x5c, 0x30, 0x0f, 0x29, 0x7c,
	0x24, 0x20
};

constexpr char PLAYER_TARGET_MASK[] = ".......";
constexpr char CREATE_BULLET_MASK[] = "...........................";
constexpr char CHARACTER_LIST_MASK[] = "...................";
constexpr char ROOT_MOTION_REDUCTION_MASK[] = "................";

ExtensionRegister PLAYER_TARGET = {PLAYER_TARGET_AOB, PLAYER_TARGET_MASK};
ExtensionRegister CREATE_BULLET = {CREATE_BULLET_AOB, CREATE_BULLET_MASK};
ExtensionRegister CHARACTER_LIST = {CHARACTER_LIST_AOB, CHARACTER_LIST_MASK};
ExtensionRegister ROOT_MOTION_REDUCTION_FACTOR_ACCESS = {
	ROOT_MOTION_REDUCTION_FACTOR_ACCESS_AOB, ROOT_MOTION_REDUCTION_MASK
};