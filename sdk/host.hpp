#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: host.dll
// Classes count: 2
// Enums count: 0
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Alignment: 1
// Size: 0x10
class CAnimScriptBase
{
public:
	bool m_bIsValid; // 0x8	
};

// Alignment: 1
// Size: 0x38
class EmptyTestScript : public CAnimScriptBase
{
public:
	CAnimScriptParam< float32 > m_hTest; // 0x10	
};

