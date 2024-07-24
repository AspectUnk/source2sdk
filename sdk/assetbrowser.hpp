#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: assetbrowser.dll
// Classes count: 0 (Allocated) | 0 (Unallocated)
// Enums count: 0 (Allocated) | 11 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class GraphCanvasInteractionPriority_t : uint32_t
{
	NONINTERACTIVE = 0xffffffffffffd8f1,
	GROUP = 0x0,
	BASE = 0x1,
	DRAG_HANDLE = 0x2,
	RESIZE_EDGE = 0x3,
	RESIZE_CORNER = 0x4,
	ADD_FLOW = 0x5,
	PORT = 0x6,
	ANCHOR = 0x7,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class GraphCanvasChildLayoutAlgorithm_t : uint32_t
{
	DEFAULT = 0x0,
	VBOX = 0x1,
	VBOX_REVERSE = 0x2,
	HBOX = 0x3,
	HBOX_REVERSE = 0x4,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class GraphCanvasTextClipMode_t : uint32_t
{
	EXPAND_ITEM = 0x0,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class LayoutAxis_t : uint32_t
{
	X = 0x0,
	Y = 0x1,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class GraphCanvasBorderDrawBehavior_t : uint32_t
{
	Centered = 0x0,
	Inside = 0x1,
	Outside = 0x2,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class GraphCanvasVAlign_t : uint32_t
{
	TOP = 0x0,
	CENTER = 0x1,
	BOTTOM = 0x2,
	STRETCH = 0x3,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class GraphCanvasVisibilityState_t : uint32_t
{
	VISIBLE = 0x0,
	HIDDEN = 0x1,
	COLLAPSE = 0x2,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class GraphCanvasPositioning_t : uint32_t
{
	AUTO = 0x0,
	INSIDE_PARENT = 0x1,
	OUTSIDE_PARENT = 0x2,
	ON_PARENT_BORDER = 0x3,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class GraphCanvasRenderLayer_t : uint32_t
{
	INVALID = 0xffffffffffffffff,
	COMMENTS = 0x0,
	CONNECTIONS_BACKGROUND = 0x1,
	GROUP_BACKGROUND = 0x2,
	DEFAULT = 0x3,
	NODES = 0x4,
	CONNECTIONS_FOREGROUND = 0x5,
	COMMENT_OVERLAY = 0x6,
	DEBUGGER_OVERLAY = 0x7,
	SELECTION_OVERLAY = 0x8,
	HOVER_OVERLAY = 0x9,
	STANDARD_LAYER_COUNT = 0xa,
	SPECIAL_LAYER_HOVER_TOOLTIP = 0xb,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class GraphCanvasPseudoClass_t : uint32_t
{
	// MPropertySuppressEnumerator
	INVALID = 0x0,
	FIRST_CHILD = 0x1,
	LAST_CHILD = 0x2,
	ONLY_CHILD = 0x3,
	HOVER_ASSOCIATE = 0x4,
	HOVER_DESCENDANT = 0x5,
	SELECTED = 0x6,
	HOVER_SELF = 0x7,
};

// Registered binary: assetbrowser.dll (project 'qcontrols')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class GraphCanvasHAlign_t : uint32_t
{
	LEFT = 0x0,
	CENTER = 0x1,
	RIGHT = 0x2,
	STRETCH = 0x3,
};

