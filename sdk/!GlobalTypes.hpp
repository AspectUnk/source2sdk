#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: !GlobalTypes
// Classes count: 1,075
// Enums count: 219
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: schemasystem.dll (project 'schemasystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class LightSourceShape_t : uint32_t
{
	LIGHT_SOURCE_SHAPE_SPHERE = 0x0,
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class LightType_t : uint32_t
{
	MATERIAL_LIGHT_DISABLE = 0x0,
	MATERIAL_LIGHT_POINT = 0x1,
	MATERIAL_LIGHT_DIRECTIONAL = 0x2,
	MATERIAL_LIGHT_SPOT = 0x3,
	MATERIAL_LIGHT_ORTHO = 0x4,
	MATERIAL_LIGHT_ENVIRONMENT_PROBE = 0x5,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class CubeMapFace_t : uint32_t
{
	CUBEMAP_FACE_POSITIVE_X = 0x0,
	CUBEMAP_FACE_NEGATIVE_X = 0x1,
	CUBEMAP_FACE_POSITIVE_Y = 0x2,
	CUBEMAP_FACE_NEGATIVE_Y = 0x3,
	CUBEMAP_FACE_POSITIVE_Z = 0x4,
	CUBEMAP_FACE_NEGATIVE_Z = 0x5,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_MAT3X4 = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x2,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_LIGHTMAP_PARAMS = 0x3,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x4,
	INPUT_LAYOUT_VARIATION_MAX = 0x5,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class RenderMultisampleType_t : uint32_t
{
	RENDER_MULTISAMPLE_INVALID = 0xffffffffffffffff,
	RENDER_MULTISAMPLE_NONE = 0x0,
	RENDER_MULTISAMPLE_2X = 0x1,
	RENDER_MULTISAMPLE_4X = 0x2,
	RENDER_MULTISAMPLE_6X = 0x3,
	RENDER_MULTISAMPLE_8X = 0x4,
	RENDER_MULTISAMPLE_16X = 0x5,
	RENDER_MULTISAMPLE_TYPE_COUNT = 0x6,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class RenderBufferFlags_t : uint32_t
{
	RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
	RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
	RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
	RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
	RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
	RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
	RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
	RENDER_BUFFER_UAV_COUNTER = 0x80,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 21
// Alignment: 4
// Size: 0x4
enum class TextureSpecificationFlags_t : uint32_t
{
	TSPEC_FLAGS = 0x0,
	TSPEC_RENDER_TARGET = 0x1,
	TSPEC_VERTEX_TEXTURE = 0x2,
	TSPEC_UNFILTERABLE_OK = 0x4,
	TSPEC_RENDER_TARGET_SAMPLEABLE = 0x8,
	TSPEC_SUGGEST_CLAMPS = 0x10,
	TSPEC_SUGGEST_CLAMPT = 0x20,
	TSPEC_SUGGEST_CLAMPU = 0x40,
	TSPEC_NO_LOD = 0x80,
	TSPEC_CUBE_TEXTURE = 0x100,
	TSPEC_VOLUME_TEXTURE = 0x200,
	TSPEC_TEXTURE_ARRAY = 0x400,
	TSPEC_TEXTURE_GEN_MIP_MAPS = 0x800,
	TSPEC_LINE_TEXTURE_360 = 0x1000,
	TSPEC_LINEAR_ADDRESSING_360 = 0x2000,
	TSPEC_USE_TYPED_IMAGEFORMAT = 0x4000,
	TSPEC_SHARED_RESOURCE = 0x8000,
	TSPEC_UAV = 0x10000,
	TSPEC_INPUT_ATTACHMENT = 0x20000,
	TSPEC_CUBE_CAN_SAMPLE_AS_ARRAY = 0x40000,
	TSPEC_LINEAR_COLOR_SPACE = 0x80000,
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Enumerator count: 45
// Alignment: 4
// Size: 0x4
enum class RenderPrimitiveType_t : uint32_t
{
	RENDER_PRIM_POINTS = 0x0,
	RENDER_PRIM_LINES = 0x1,
	RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
	RENDER_PRIM_LINE_STRIP = 0x3,
	RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
	RENDER_PRIM_TRIANGLES = 0x5,
	RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
	RENDER_PRIM_TRIANGLE_STRIP = 0x7,
	RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
	RENDER_PRIM_INSTANCED_QUADS = 0x9,
	RENDER_PRIM_HETEROGENOUS = 0xa,
	RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 0xb,
	RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 0xc,
	RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 0xd,
	RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 0xe,
	RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 0xf,
	RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 0x10,
	RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 0x11,
	RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 0x12,
	RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 0x13,
	RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 0x14,
	RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 0x15,
	RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 0x16,
	RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 0x17,
	RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 0x18,
	RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 0x19,
	RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 0x1a,
	RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 0x1b,
	RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 0x1c,
	RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 0x1d,
	RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 0x1e,
	RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 0x1f,
	RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 0x20,
	RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 0x21,
	RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 0x22,
	RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 0x23,
	RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 0x24,
	RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 0x25,
	RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 0x26,
	RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 0x27,
	RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 0x28,
	RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 0x29,
	RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 0x2a,
	RENDER_PRIM_COMPUTE_SHADER = 0x2b,
	RENDER_PRIM_TYPE_COUNT = 0x2c,
};

// Registered binary: engine2.dll (project 'engine2')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class SignonState_t : uint32_t
{
	SIGNONSTATE_NONE = 0x0,
	SIGNONSTATE_CHALLENGE = 0x1,
	SIGNONSTATE_CONNECTED = 0x2,
	SIGNONSTATE_NEW = 0x3,
	SIGNONSTATE_PRESPAWN = 0x4,
	SIGNONSTATE_SPAWN = 0x5,
	SIGNONSTATE_FULL = 0x6,
	SIGNONSTATE_CHANGELEVEL = 0x7,
};

// Registered binary: engine2.dll (project 'entity2')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class EntityIOTargetType_t : uint32_t
{
	ENTITY_IO_TARGET_INVALID = 0xffffffffffffffff,
	ENTITY_IO_TARGET_CLASSNAME = 0x0,
	ENTITY_IO_TARGET_CLASSNAME_DERIVES_FROM = 0x1,
	ENTITY_IO_TARGET_ENTITYNAME = 0x2,
	ENTITY_IO_TARGET_CONTAINS_COMPONENT = 0x3,
	ENTITY_IO_TARGET_SPECIAL_ACTIVATOR = 0x4,
	ENTITY_IO_TARGET_SPECIAL_CALLER = 0x5,
	ENTITY_IO_TARGET_EHANDLE = 0x6,
	ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
};

// Registered binary: engine2.dll (project 'entity2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class BinaryNodeChildOption : uint32_t
{
	// MPropertyFriendlyName "Child 1"
	Child1 = 0x0,
	// MPropertyFriendlyName "Child 2"
	Child2 = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BoneMaskBlendSpace : uint32_t
{
	// MPropertyFriendlyName "Parent Space"
	BlendSpace_Parent = 0x0,
	// MPropertyFriendlyName "Model Space"
	BlendSpace_Model = 0x1,
	// MPropertyFriendlyName "Model Space, Rotation Only"
	BlendSpace_Model_RotationOnly = 0x2,
	// MPropertyFriendlyName "Model Space, Translation Only"
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SelectionSource_t : uint32_t
{
	// MPropertyFriendlyName "Bool"
	SelectionSource_Bool = 0x0,
	// MPropertyFriendlyName "Enum"
	SelectionSource_Enum = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class IkTargetType : uint32_t
{
	// MPropertyFriendlyName "Attachment"
	IkTarget_Attachment = 0x0,
	// MPropertyFriendlyName "Bone"
	IkTarget_Bone = 0x1,
	// MPropertyFriendlyName "Parameter (Model Space)"
	IkTarget_Parameter_ModelSpace = 0x2,
	// MPropertyFriendlyName "Parameter (World Space)"
	IkTarget_Parameter_WorldSpace = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 14
// Alignment: 4
// Size: 0x4
enum class AnimVectorSource : uint32_t
{
	// MPropertyFriendlyName "Move Direction"
	MoveDirection = 0x0,
	// MPropertyFriendlyName "Facing Direction"
	FacingDirection = 0x1,
	// MPropertyFriendlyName "Look Direction"
	LookDirection = 0x2,
	// MPropertyFriendlyName "Parameter"
	VectorParameter = 0x3,
	// MPropertyFriendlyName "Waypoint Direction"
	WayPointDirection = 0x4,
	// MPropertyFriendlyName "Target Move Direction"
	TargetMoveDirection = 0x5,
	// MPropertyFriendlyName "Acceleration"
	Acceleration = 0x6,
	// MPropertyFriendlyName "Slope Normal"
	SlopeNormal = 0x7,
	// MPropertyFriendlyName "Slope Normal World Space"
	SlopeNormal_WorldSpace = 0x8,
	// MPropertyFriendlyName "Look Target"
	LookTarget = 0x9,
	// MPropertyFriendlyName "Look Target World Space"
	LookTarget_WorldSpace = 0xa,
	// MPropertyFriendlyName "Waypoint Position"
	WayPointPosition = 0xb,
	// MPropertyFriendlyName "Goal Position"
	GoalPosition = 0xc,
	// MPropertyFriendlyName "Root Motion Velocity"
	RootMotionVelocity = 0xd,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class FootFallTagFoot_t : uint32_t
{
	// MPropertyFriendlyName "Left"
	FOOT1 = 0x0,
	// MPropertyFriendlyName "Right"
	FOOT2 = 0x1,
	// MPropertyFriendlyName "Foot 3"
	FOOT3 = 0x2,
	// MPropertyFriendlyName "Foot 4"
	FOOT4 = 0x3,
	// MPropertyFriendlyName "Foot 5"
	FOOT5 = 0x4,
	// MPropertyFriendlyName "Foot 6"
	FOOT6 = 0x5,
	// MPropertyFriendlyName "Foot 7"
	FOOT7 = 0x6,
	// MPropertyFriendlyName "Foot 8"
	FOOT8 = 0x7,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class AnimationSnapshotType_t : uint32_t
{
	ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
	ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
	ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
	ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
	ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
	ANIMATION_SNAPSHOT_MAX = 0x6,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class AimMatrixBlendMode : uint32_t
{
	// MPropertyFriendlyName "Additive"
	AimMatrixBlendMode_Additive = 0x0,
	// MPropertyFriendlyName "Bone Mask"
	AimMatrixBlendMode_BoneMask = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class FacingMode : uint32_t
{
	// MPropertyFriendlyName "Manual"
	FacingMode_Manual = 0x0,
	// MPropertyFriendlyName "Path"
	FacingMode_Path = 0x1,
	// MPropertyFriendlyName "Look Target"
	FacingMode_LookTarget = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class AnimVRHandMotionRange_t : uint32_t
{
	// MPropertyFriendlyName "With Controller"
	MotionRange_WithController = 0x0,
	// MPropertyFriendlyName "Without Controller"
	MotionRange_WithoutController = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	// MPropertyFriendlyName "Default"
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	// MPropertyFriendlyName "Override"
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SelectorTagBehavior_t : uint32_t
{
	// MPropertyFriendlyName "Active While Current"
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	// MPropertyFriendlyName "Off When Finished"
	SelectorTagBehavior_OffWhenFinished = 0x1,
	// MPropertyFriendlyName "Off Before Finished"
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class AnimParamButton_t : uint32_t
{
	// MPropertyFriendlyName "None"
	ANIMPARAM_BUTTON_NONE = 0x0,
	// MPropertyFriendlyName "Dpad Up"
	ANIMPARAM_BUTTON_DPAD_UP = 0x1,
	// MPropertyFriendlyName "Dpad Right"
	ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
	// MPropertyFriendlyName "Dpad Down"
	ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
	// MPropertyFriendlyName "Dpad Left"
	ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
	// MPropertyFriendlyName "A"
	ANIMPARAM_BUTTON_A = 0x5,
	// MPropertyFriendlyName "B"
	ANIMPARAM_BUTTON_B = 0x6,
	// MPropertyFriendlyName "X"
	ANIMPARAM_BUTTON_X = 0x7,
	// MPropertyFriendlyName "Y"
	ANIMPARAM_BUTTON_Y = 0x8,
	// MPropertyFriendlyName "Left Shoulder"
	ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
	// MPropertyFriendlyName "Right Shoulder"
	ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
	// MPropertyFriendlyName "Left Trigger"
	ANIMPARAM_BUTTON_LTRIGGER = 0xb,
	// MPropertyFriendlyName "Right Trigger"
	ANIMPARAM_BUTTON_RTRIGGER = 0xc,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class IkEndEffectorType : uint32_t
{
	// MPropertyFriendlyName "Attachment"
	IkEndEffector_Attachment = 0x0,
	// MPropertyFriendlyName "Last Bone in Chain"
	IkEndEffector_Bone = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class JiggleBoneSimSpace : uint32_t
{
	// MPropertyFriendlyName "Local Space"
	SimSpace_Local = 0x0,
	// MPropertyFriendlyName "Model Space"
	SimSpace_Model = 0x1,
	// MPropertyFriendlyName "World Space"
	SimSpace_World = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class AnimationProcessingType_t : uint32_t
{
	ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
	ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
	ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
	ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
	ANIMATION_PROCESSING_MAX = 0x5,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class FootLockSubVisualization : uint32_t
{
	// MPropertyFriendlyName "Reachability Analysis"
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	// MPropertyFriendlyName "IK Solve"
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BlendKeyType : uint32_t
{
	// MPropertyFriendlyName "User Defined Values"
	BlendKey_UserValue = 0x0,
	// MPropertyFriendlyName "Velocity"
	BlendKey_Velocity = 0x1,
	// MPropertyFriendlyName "Distance"
	BlendKey_Distance = 0x2,
	// MPropertyFriendlyName "Remaining Distance"
	BlendKey_RemainingDistance = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class MotionSamplingMethod : uint32_t
{
	// MPropertyFriendlyName "Uniform"
	Uniform = 0x0,
	// MPropertyFriendlyName "On Foot Cycle Change"
	AtFootCycleStart = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ChoiceBlendMethod : uint32_t
{
	// MPropertyFriendlyName "Single Blend Time"
	SingleBlendTime = 0x0,
	// MPropertyFriendlyName "Per-Choice Blend Times"
	PerChoiceBlendTimes = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ChoiceChangeMethod : uint32_t
{
	OnReset = 0x0,
	OnCycleEnd = 0x1,
	OnResetOrCycleEnd = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class Blend2DMode : uint32_t
{
	// MPropertyFriendlyName "General"
	Blend2DMode_General = 0x0,
	// MPropertyFriendlyName "Directional"
	Blend2DMode_Directional = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class IKSolverType : uint32_t
{
	// MPropertyFriendlyName "Perlin"
	IKSOLVER_Perlin = 0x0,
	// MPropertyFriendlyName "Two Bone"
	IKSOLVER_TwoBone = 0x1,
	// MPropertyFriendlyName "FABRIK"
	IKSOLVER_Fabrik = 0x2,
	// MPropertyFriendlyName "Dog Leg (3 Bone)"
	IKSOLVER_DogLeg3Bone = 0x3,
	// MPropertyFriendlyName "CCD"
	IKSOLVER_CCD = 0x4,
	IKSOLVER_COUNT = 0x5,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 35
// Alignment: 4
// Size: 0x4
enum class AnimValueSource : uint32_t
{
	// MPropertyFriendlyName "Move Heading"
	MoveHeading = 0x0,
	// MPropertyFriendlyName "Move Speed"
	MoveSpeed = 0x1,
	// MPropertyFriendlyName "Forward Speed"
	ForwardSpeed = 0x2,
	// MPropertyFriendlyName "Strafe Speed"
	StrafeSpeed = 0x3,
	// MPropertyFriendlyName "Facing Heading"
	FacingHeading = 0x4,
	// MPropertyFriendlyName "Look Heading"
	LookHeading = 0x5,
	// MPropertyFriendlyName "Look Pitch"
	LookPitch = 0x6,
	// MPropertyFriendlyName "Parameter"
	Parameter = 0x7,
	// MPropertyFriendlyName "Waypoint Heading"
	WayPointHeading = 0x8,
	// MPropertyFriendlyName "Waypoint Distance"
	WayPointDistance = 0x9,
	// MPropertyFriendlyName "Boundary Radius"
	BoundaryRadius = 0xa,
	// MPropertyFriendlyName "Target Move Heading"
	TargetMoveHeading = 0xb,
	// MPropertyFriendlyName "Target Move Speed"
	TargetMoveSpeed = 0xc,
	// MPropertyFriendlyName "Acceleration Heading"
	AccelerationHeading = 0xd,
	// MPropertyFriendlyName "Acceleration Speed"
	AccelerationSpeed = 0xe,
	// MPropertyFriendlyName "Slope Heading"
	SlopeHeading = 0xf,
	// MPropertyFriendlyName "Slope Angle"
	SlopeAngle = 0x10,
	// MPropertyFriendlyName "Slope Pitch"
	SlopePitch = 0x11,
	// MPropertyFriendlyName "Slope Yaw"
	SlopeYaw = 0x12,
	// MPropertyFriendlyName "Goal Distance"
	GoalDistance = 0x13,
	// MPropertyFriendlyName "Acceleration Left-Right"
	AccelerationLeftRight = 0x14,
	// MPropertyFriendlyName "Acceleration Forward-Back"
	AccelerationFrontBack = 0x15,
	// MPropertyFriendlyName "Root Motion Speed"
	RootMotionSpeed = 0x16,
	// MPropertyFriendlyName "Root Motion Turn Speed"
	RootMotionTurnSpeed = 0x17,
	// MPropertyFriendlyName "Move Heading Relative to Look Heading"
	MoveHeadingRelativeToLookHeading = 0x18,
	// MPropertyFriendlyName "Max Move Speed"
	MaxMoveSpeed = 0x19,
	// MPropertyFriendlyName "Finger Curl - Thumb"
	FingerCurl_Thumb = 0x1a,
	// MPropertyFriendlyName "Finger Curl - Index"
	FingerCurl_Index = 0x1b,
	// MPropertyFriendlyName "Finger Curl - Middle"
	FingerCurl_Middle = 0x1c,
	// MPropertyFriendlyName "Finger Curl - Ring"
	FingerCurl_Ring = 0x1d,
	// MPropertyFriendlyName "Finger Curl - Pinky"
	FingerCurl_Pinky = 0x1e,
	// MPropertyFriendlyName "Finger Splay - Thumb:Index"
	FingerSplay_Thumb_Index = 0x1f,
	// MPropertyFriendlyName "Finger Splay - Index:Middle"
	FingerSplay_Index_Middle = 0x20,
	// MPropertyFriendlyName "Finger Splay - Middle:Ring"
	FingerSplay_Middle_Ring = 0x21,
	// MPropertyFriendlyName "Finger Splay - Ring:Pinky"
	FingerSplay_Ring_Pinky = 0x22,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class FinishedConditionOption : uint32_t
{
	// MPropertyFriendlyName "On Finished"
	FinishedConditionOption_OnFinished = 0x0,
	// MPropertyFriendlyName "On Almost Finished"
	FinishedConditionOption_OnAlmostFinished = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 40
// Alignment: 4
// Size: 0x4
enum class ControlValue : uint32_t
{
	// MPropertyFriendlyName "Move Heading"
	ControlValue_MoveHeading = 0x0,
	// MPropertyFriendlyName "Move Speed"
	ControlValue_MoveSpeed = 0x1,
	// MPropertyFriendlyName "Facing"
	ControlValue_FacingHeading = 0x2,
	// MPropertyFriendlyName "Look Heading"
	ControlValue_LookHeading = 0x3,
	// MPropertyFriendlyName "Look Pitch"
	ControlValue_LookPitch = 0x4,
	// MPropertyFriendlyName "WayPoint Heading"
	ControlValue_WayPointHeading = 0x5,
	// MPropertyFriendlyName "WayPoint Distance"
	ControlValue_WayPointDistance = 0x6,
	// MPropertyFriendlyName "Boundary Radius"
	ControlValue_BoundaryRadius = 0x7,
	// MPropertyFriendlyName "Total Translation (Source State)"
	ControlValue_TotalTranslation_SourceState = 0x8,
	// MPropertyFriendlyName "Total Translation (Target State)"
	ControlValue_TotalTranslation_TargetState = 0x9,
	// MPropertyFriendlyName "Remaining Translation (Source State)"
	ControlValue_RemainingTranslation_SourceState = 0xa,
	// MPropertyFriendlyName "Remaining Translation (Target State)"
	ControlValue_RemainingTranslation_TargetState = 0xb,
	// MPropertyFriendlyName "Difference Between Moving and Facing"
	ControlValue_MoveVsFacingDelta = 0xc,
	// MPropertyFriendlyName "Source State Blend Weight"
	ControlValue_SourceStateBlendWeight = 0xd,
	// MPropertyFriendlyName "Target State Blend Weight"
	ControlValue_TargetStateBlendWeight = 0xe,
	// MPropertyFriendlyName "Target Move Heading"
	ControlValue_TargetMoveHeading = 0xf,
	// MPropertyFriendlyName "Target Move Speed"
	ControlValue_TargetMoveSpeed = 0x10,
	// MPropertyFriendlyName "Acceleration Heading"
	ControlValue_AccelerationHeading = 0x11,
	// MPropertyFriendlyName "Acceleration Magnitude"
	ControlValue_AccelerationSpeed = 0x12,
	// MPropertyFriendlyName "Slope Heading"
	ControlValue_SlopeHeading = 0x13,
	// MPropertyFriendlyName "Slope Angle"
	ControlValue_SlopeAngle = 0x14,
	// MPropertyFriendlyName "Slope Yaw"
	ControlValue_SlopeYaw = 0x15,
	// MPropertyFriendlyName "Slope Pitch"
	ControlValue_SlopePitch = 0x16,
	// MPropertyFriendlyName "Goal Distance"
	ControlValue_GoalDistance = 0x17,
	// MPropertyFriendlyName "Acceleration Left-Right"
	ControlValue_AccelerationLeftRight = 0x18,
	// MPropertyFriendlyName "Acceleration Front-Back"
	ControlValue_AccelerationFrontBack = 0x19,
	// MPropertyFriendlyName "Root Motion Speed"
	ControlValue_RootMotionSpeed = 0x1a,
	// MPropertyFriendlyName "Root Motion Turn Speed"
	ControlValue_RootMotionTurnSpeed = 0x1b,
	// MPropertyFriendlyName "Move Heading Relative To Look Heading"
	ControlValue_MoveHeadingRelativeToLookHeading = 0x1c,
	// MPropertyFriendlyName "Finger Curl - Thumb"
	ControlValue_FingerCurl_Thumb = 0x1d,
	// MPropertyFriendlyName "Finger Curl - Index"
	ControlValue_FingerCurl_Index = 0x1e,
	// MPropertyFriendlyName "Finger Curl - Middle"
	ControlValue_FingerCurl_Middle = 0x1f,
	// MPropertyFriendlyName "Finger Curl - Ring"
	ControlValue_FingerCurl_Ring = 0x20,
	// MPropertyFriendlyName "Finger Curl - Pinky"
	ControlValue_FingerCurl_Pinky = 0x21,
	// MPropertyFriendlyName "Finger Splay - Thumb:Index"
	ControlValue_FingerSplay_Thumb_Index = 0x22,
	// MPropertyFriendlyName "Finger Splay - Index:Middle"
	ControlValue_FingerSplay_Index_Middle = 0x23,
	// MPropertyFriendlyName "Finger Splay - Middle:Ring"
	ControlValue_FingerSplay_Middle_Ring = 0x24,
	// MPropertyFriendlyName "Finger Splay - Ring:Pinky"
	ControlValue_FingerSplay_Ring_Pinky = 0x25,
	ControlValue_Count = 0x26,
	ControlValue_Invalid = 0xff,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 67
// Alignment: 1
// Size: 0x1
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0x0,
	FIELD_FLOAT32 = 0x1,
	FIELD_STRING = 0x2,
	FIELD_VECTOR = 0x3,
	FIELD_QUATERNION = 0x4,
	FIELD_INT32 = 0x5,
	FIELD_BOOLEAN = 0x6,
	FIELD_INT16 = 0x7,
	FIELD_CHARACTER = 0x8,
	FIELD_COLOR32 = 0x9,
	FIELD_EMBEDDED = 0xa,
	FIELD_CUSTOM = 0xb,
	FIELD_CLASSPTR = 0xc,
	FIELD_EHANDLE = 0xd,
	FIELD_POSITION_VECTOR = 0xe,
	FIELD_TIME = 0xf,
	FIELD_TICK = 0x10,
	FIELD_SOUNDNAME = 0x11,
	FIELD_INPUT = 0x12,
	FIELD_FUNCTION = 0x13,
	FIELD_VMATRIX = 0x14,
	FIELD_VMATRIX_WORLDSPACE = 0x15,
	FIELD_MATRIX3X4_WORLDSPACE = 0x16,
	FIELD_INTERVAL = 0x17,
	FIELD_UNUSED = 0x18,
	FIELD_VECTOR2D = 0x19,
	FIELD_INT64 = 0x1a,
	FIELD_VECTOR4D = 0x1b,
	FIELD_RESOURCE = 0x1c,
	FIELD_TYPEUNKNOWN = 0x1d,
	FIELD_CSTRING = 0x1e,
	FIELD_HSCRIPT = 0x1f,
	FIELD_VARIANT = 0x20,
	FIELD_UINT64 = 0x21,
	FIELD_FLOAT64 = 0x22,
	FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
	FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
	FIELD_UINT32 = 0x25,
	FIELD_UTLSTRINGTOKEN = 0x26,
	FIELD_QANGLE = 0x27,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
	FIELD_HMATERIAL = 0x29,
	FIELD_HMODEL = 0x2a,
	FIELD_NETWORK_QUANTIZED_VECTOR = 0x2b,
	FIELD_NETWORK_QUANTIZED_FLOAT = 0x2c,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2d,
	FIELD_QANGLE_WORLDSPACE = 0x2e,
	FIELD_QUATERNION_WORLDSPACE = 0x2f,
	FIELD_HSCRIPT_LIGHTBINDING = 0x30,
	FIELD_V8_VALUE = 0x31,
	FIELD_V8_OBJECT = 0x32,
	FIELD_V8_ARRAY = 0x33,
	FIELD_V8_CALLBACK_INFO = 0x34,
	FIELD_UTLSTRING = 0x35,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
	FIELD_HRENDERTEXTURE = 0x37,
	FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
	FIELD_UINT8 = 0x39,
	FIELD_UINT16 = 0x3a,
	FIELD_CTRANSFORM = 0x3b,
	FIELD_CTRANSFORM_WORLDSPACE = 0x3c,
	FIELD_HPOSTPROCESSING = 0x3d,
	FIELD_MATRIX3X4 = 0x3e,
	FIELD_SHIM = 0x3f,
	FIELD_CMOTIONTRANSFORM = 0x40,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
	FIELD_TYPECOUNT = 0x42,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetSource : uint32_t
{
	// MPropertyFriendlyName "Bone"
	IKTARGETSOURCE_Bone = 0x0,
	// MPropertyFriendlyName "Animgraph Parameter"
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 24
// Alignment: 4
// Size: 0x4
enum class CGroundIKSolveAnimNode__DebugSkeletonBoneType_t : uint32_t
{
	CGroundIKSolveAnimNode::FLAG_NO_BONE_FLAGS = 0x0,
	CGroundIKSolveAnimNode::FLAG_BONEFLEXDRIVER = 0x4,
	CGroundIKSolveAnimNode::FLAG_CLOTH = 0x8,
	CGroundIKSolveAnimNode::FLAG_PHYSICS = 0x10,
	CGroundIKSolveAnimNode::FLAG_ATTACHMENT = 0x20,
	CGroundIKSolveAnimNode::FLAG_ANIMATION = 0x40,
	CGroundIKSolveAnimNode::FLAG_MESH = 0x80,
	CGroundIKSolveAnimNode::FLAG_HITBOX = 0x100,
	CGroundIKSolveAnimNode::FLAG_RETARGET_SRC = 0x200,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_READ = 0x40000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_WRITE = 0x80000,
	CGroundIKSolveAnimNode::BLEND_PREALIGNED = 0x100000,
	CGroundIKSolveAnimNode::FLAG_RIGIDLENGTH = 0x200000,
	CGroundIKSolveAnimNode::FLAG_PROCEDURAL = 0x400000,
	CGroundIKSolveAnimNode::FLAG_IK = 0x800000,
	CGroundIKSolveAnimNode::FLAG_ALL_BONE_FLAGS = 0xffffff,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimNodeNetworkMode : uint32_t
{
	// MPropertyFriendlyName "Server Authoritative"
	ServerAuthoritative = 0x0,
	// MPropertyFriendlyName "Client Simulate"
	ClientSimulate = 0x1,
	// MPropertyFriendlyName "Client Predicted"
	ClientPredicted = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimPoseControl : uint32_t
{
	// MPropertyFriendlyName "None"
	NoPoseControl = 0x0,
	// MPropertyFriendlyName "Absolute"
	AbsolutePoseControl = 0x1,
	// MPropertyFriendlyName "Relative"
	RelativePoseControl = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class GroundIKTiltSource_t : uint32_t
{
	TILT_None = 0x0,
	TILT_IK = 0x1,
	TILT_MovementManagerSlope = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetCoordinateSystem : uint32_t
{
	// MPropertyFriendlyName "World Space"
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	// MPropertyFriendlyName "Model Space"
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class SolveIKChainAnimNodeDebugSetting : uint32_t
{
	// MPropertyFriendlyName "None"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
	// MPropertyFriendlyName "Debug X Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
	// MPropertyFriendlyName "Debug Y Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
	// MPropertyFriendlyName "Debug Z Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
	// MPropertyFriendlyName "Debug Hold Forward"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
	// MPropertyFriendlyName "Debug Hold Up"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
	// MPropertyFriendlyName "Debug Hold Left"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PathStatusOptions : uint32_t
{
	PathStatus_HasPath = 0x0,
	PathStatus_WaypointIsGoal = 0x1,
	PathStatus_GoalHasChanged = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BinaryNodeTiming : uint32_t
{
	// MPropertyFriendlyName "Use Child1"
	UseChild1 = 0x0,
	// MPropertyFriendlyName "Use Child2"
	UseChild2 = 0x1,
	// MPropertyFriendlyName "Synchronize Children"
	SyncChildren = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 17
// Alignment: 4
// Size: 0x4
enum class SeqCmd_t : uint32_t
{
	SeqCmd_Nop = 0x0,
	SeqCmd_LinearDelta = 0x1,
	SeqCmd_FetchFrameRange = 0x2,
	SeqCmd_Slerp = 0x3,
	SeqCmd_Add = 0x4,
	SeqCmd_Subtract = 0x5,
	SeqCmd_Scale = 0x6,
	SeqCmd_Copy = 0x7,
	SeqCmd_Blend = 0x8,
	SeqCmd_Worldspace = 0x9,
	SeqCmd_Sequence = 0xa,
	SeqCmd_FetchCycle = 0xb,
	SeqCmd_FetchFrame = 0xc,
	SeqCmd_IKLockInPlace = 0xd,
	SeqCmd_IKRestoreAll = 0xe,
	SeqCmd_ReverseSequence = 0xf,
	SeqCmd_Transform = 0x10,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ModelConfigAttachmentType_t : uint32_t
{
	MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffffffffffff,
	MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
	MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
	MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
	MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class VPhysXDiskShapeHeader_t__VersinEnum_t : uint32_t
{
	VPhysXDiskShapeHeader_t::VERSION = 0x81,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class VPhysXJoint_t__Flags_t : uint32_t
{
	VPhysXJoint_t::JOINT_FLAGS_NONE = 0x0,
	VPhysXJoint_t::JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class MeshTranslucencyType_t : uint32_t
{
	MESH_TRANSLUCENCY_FULLY_OPAQUE = 0x0,
	MESH_TRANSLUCENCY_PARTIALLY_ALPHA_BLENDED = 0x1,
	MESH_TRANSLUCENCY_FULLY_ALPHA_BLENDED = 0x2,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class MorphLookupType_t : uint32_t
{
	LOOKUP_TYPE_TEXCOORD = 0x0,
	LOOKUP_TYPE_VERTEX_ID = 0x1,
	LOOKUP_TYPE_COUNT = 0x2,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 23
// Alignment: 4
// Size: 0x4
enum class ModelSkeletonData_t__BoneFlags_t : uint32_t
{
	ModelSkeletonData_t::FLAG_NO_BONE_FLAGS = 0x0,
	ModelSkeletonData_t::FLAG_BONEFLEXDRIVER = 0x4,
	ModelSkeletonData_t::FLAG_CLOTH = 0x8,
	ModelSkeletonData_t::FLAG_PHYSICS = 0x10,
	ModelSkeletonData_t::FLAG_ATTACHMENT = 0x20,
	ModelSkeletonData_t::FLAG_ANIMATION = 0x40,
	ModelSkeletonData_t::FLAG_MESH = 0x80,
	ModelSkeletonData_t::FLAG_HITBOX = 0x100,
	ModelSkeletonData_t::FLAG_RETARGET_SRC = 0x200,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	ModelSkeletonData_t::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_READ = 0x40000,
	ModelSkeletonData_t::FLAG_BONE_MERGE_WRITE = 0x80000,
	ModelSkeletonData_t::FLAG_ALL_BONE_FLAGS = 0xfffff,
	ModelSkeletonData_t::BLEND_PREALIGNED = 0x100000,
	ModelSkeletonData_t::FLAG_RIGIDLENGTH = 0x200000,
	ModelSkeletonData_t::FLAG_PROCEDURAL = 0x400000,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class VPhysXConstraintParams_t__EnumFlags0_t : uint32_t
{
	VPhysXConstraintParams_t::FLAG0_SHIFT_INTERPENETRATE = 0x0,
	VPhysXConstraintParams_t::FLAG0_SHIFT_CONSTRAIN = 0x1,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	VPhysXConstraintParams_t::FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class AnimVRHand_t : uint32_t
{
	// MPropertyFriendlyName "Left Hand"
	AnimVRHand_Left = 0x0,
	// MPropertyFriendlyName "Right Hand"
	AnimVRHand_Right = 0x1,
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class MeshDrawPrimitiveFlags_t : uint32_t
{
	MESH_DRAW_FLAGS_NONE = 0x0,
	MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
	MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
	MESH_DRAW_FLAGS_IS_OCCLUDER = 0x4,
	MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
	MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
	MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
	MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
	MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
	MESH_DRAW_FLAGS_HAS_LIGHTING_BASIS = 0x100,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class MorphEncodingType_t : uint32_t
{
	ENCODING_TYPE_OBJECT_SPACE = 0x0,
	ENCODING_TYPE_TANGENT_SPACE = 0x1,
	ENCODING_TYPE_COUNT = 0x2,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class PermModelInfo_t__FlagEnum : uint32_t
{
	PermModelInfo_t::FLAG_TRANSLUCENT = 0x1,
	PermModelInfo_t::FLAG_TRANSLUCENT_TWO_PASS = 0x2,
	PermModelInfo_t::FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
	PermModelInfo_t::FLAG_SOURCE1_IMPORT = 0x8,
	PermModelInfo_t::FLAG_MODEL_PART_CHILD = 0x10,
	PermModelInfo_t::FLAG_NAV_GEN_NONE = 0x20,
	PermModelInfo_t::FLAG_NAV_GEN_HULL = 0x40,
	PermModelInfo_t::FLAG_NO_FORCED_FADE = 0x800,
	PermModelInfo_t::FLAG_HAS_SKINNED_MESHES = 0x400,
	PermModelInfo_t::FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
	PermModelInfo_t::FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
	PermModelInfo_t::FLAG_NO_ANIM_EVENTS = 0x100000,
	PermModelInfo_t::FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
	PermModelInfo_t::FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	PermModelInfo_t::FLAG_MODEL_DOC = 0x800000,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t
{
	VPhysXBodyPart_t::FLAG_STATIC = 0x1,
	VPhysXBodyPart_t::FLAG_KINEMATIC = 0x2,
	VPhysXBodyPart_t::FLAG_JOINT = 0x4,
	VPhysXBodyPart_t::FLAG_MASS = 0x8,
	VPhysXBodyPart_t::FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 26
// Alignment: 4
// Size: 0x4
enum class FlexOpCode_t : uint32_t
{
	FLEX_OP_CONST = 0x1,
	FLEX_OP_FETCH1 = 0x2,
	FLEX_OP_FETCH2 = 0x3,
	FLEX_OP_ADD = 0x4,
	FLEX_OP_SUB = 0x5,
	FLEX_OP_MUL = 0x6,
	FLEX_OP_DIV = 0x7,
	FLEX_OP_NEG = 0x8,
	FLEX_OP_EXP = 0x9,
	FLEX_OP_OPEN = 0xa,
	FLEX_OP_CLOSE = 0xb,
	FLEX_OP_COMMA = 0xc,
	FLEX_OP_MAX = 0xd,
	FLEX_OP_MIN = 0xe,
	FLEX_OP_2WAY_0 = 0xf,
	FLEX_OP_2WAY_1 = 0x10,
	FLEX_OP_NWAY = 0x11,
	FLEX_OP_COMBO = 0x12,
	FLEX_OP_DOMINATE = 0x13,
	FLEX_OP_DME_LOWER_EYELID = 0x14,
	FLEX_OP_DME_UPPER_EYELID = 0x15,
	FLEX_OP_SQRT = 0x16,
	FLEX_OP_REMAPVALCLAMPED = 0x17,
	FLEX_OP_SIN = 0x18,
	FLEX_OP_COS = 0x19,
	FLEX_OP_ABS = 0x1a,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t
{
	VPhysXAggregateData_t::FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	VPhysXAggregateData_t::FLAG_LEVEL_COLLISION = 0x10,
	VPhysXAggregateData_t::FLAG_IGNORE_SCALE = 0x20,
};

// Registered binary: vphysics2.dll (project 'modellib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class AnimVRFinger_t : uint32_t
{
	// MPropertyFriendlyName "Thumb"
	AnimVrFinger_Thumb = 0x0,
	// MPropertyFriendlyName "Index"
	AnimVrFinger_Index = 0x1,
	// MPropertyFriendlyName "Middle"
	AnimVrFinger_Middle = 0x2,
	// MPropertyFriendlyName "Ring"
	AnimVrFinger_Ring = 0x3,
	// MPropertyFriendlyName "Pinky"
	AnimVrFinger_Pinky = 0x4,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosGroupType_t : uint32_t
{
	// MPropertyFriendlyName "Dynamic"
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	// MPropertyFriendlyName "Static"
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ActionType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_ACTION_NONE = 0x0,
	// MPropertyFriendlyName "Limiter"
	SOS_ACTION_LIMITER = 0x1,
	// MPropertyFriendlyName "Time Limiter"
	SOS_ACTION_TIME_LIMIT = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosActionSortType_t : uint32_t
{
	// MPropertyFriendlyName "Highest"
	SOS_SORTTYPE_HIGHEST = 0x0,
	// MPropertyFriendlyName "Lowest"
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SosActionStopType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_STOPTYPE_NONE = 0x0,
	// MPropertyFriendlyName "Elapsed Time"
	SOS_STOPTYPE_TIME = 0x1,
	// MPropertyFriendlyName "Opvar"
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 8
// Alignment: 2
// Size: 0x2
enum class vmix_filter_type_t : uint16_t
{
	FILTER_UNKNOWN = 0xffffffffffffffff,
	FILTER_LOWPASS = 0x0,
	FILTER_HIGHPASS = 0x1,
	FILTER_BANDPASS = 0x2,
	FILTER_NOTCH = 0x3,
	FILTER_PEAKING_EQ = 0x4,
	FILTER_LOW_SHELF = 0x5,
	FILTER_HIGH_SHELF = 0x6,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 12
// Alignment: 2
// Size: 0x2
enum class vmix_processor_type_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
	VPROCESSOR_RT_PITCH = 0x2,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
	VPROCESSOR_DYNAMICS = 0x4,
	VPROCESSOR_PRESETDSP = 0x5,
	VPROCESSOR_DELAY = 0x6,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0x7,
	VPROCESSOR_FILTER = 0x8,
	VPROCESSOR_STEAMAUDIO_PATHING = 0x9,
	VPROCESSOR_EQ8 = 0xa,
	VPROCESSOR_ENVELOPE = 0xb,
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class ObjectTypeFlags_t : uint32_t
{
	OBJECT_TYPE_IMAGE_LOD = 0x1,
	OBJECT_TYPE_GEOMETRY_LOD = 0x2,
	OBJECT_TYPE_DECAL = 0x4,
	OBJECT_TYPE_MODEL = 0x8,
	OBJECT_TYPE_BLOCK_LIGHT = 0x10,
	OBJECT_TYPE_NO_SHADOWS = 0x20,
	OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
	OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
	OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
	OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
	OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class voxel_vis_compression_t : uint32_t
{
	VOXVIS_COMPRESS_RAW = 0x0,
	VOXVIS_COMPRESS_RLE = 0x1,
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class EntityLumpFlags_t : uint32_t
{
	ENTITY_LUMP_NONE = 0x0,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class TextureRepetitionMode_t : uint32_t
{
	// MPropertyFriendlyName "Per-Particle"
	TEXTURE_REPETITION_PARTICLE = 0x0,
	// MPropertyFriendlyName "Entire Path"
	TEXTURE_REPETITION_PATH = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Omni Light"
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	// MPropertyFriendlyName "Spot Light"
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	// MPropertyFriendlyName "FX Light"
	PARTICLE_LIGHT_TYPE_FX = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleImpulseType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	IMPULSE_TYPE_NONE = 0x0,
	// MPropertyFriendlyName "Generic"
	IMPULSE_TYPE_GENERIC = 0x1,
	// MPropertyFriendlyName "Rope"
	IMPULSE_TYPE_ROPE = 0x2,
	// MPropertyFriendlyName "Explosion"
	IMPULSE_TYPE_EXPLOSION = 0x4,
	// MPropertyFriendlyName "Underwater Explosion"
	IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
	// MPropertyFriendlyName "Particle System"
	IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleSortingChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Distance - Nearest"
	PARTICLE_SORTING_NEAREST = 0x0,
	// MPropertyFriendlyName "Age - Oldest"
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleCollisionMode_t : uint32_t
{
	// MPropertyFriendlyName "Per-Particle Trace"
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	// MPropertyFriendlyName "Trace Caching"
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	// MPropertyFriendlyName "Per-Frame Planeset"
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	// MPropertyFriendlyName "Initial Trace Down"
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	// MPropertyFriendlyName "Collision Disabled"
	COLLISION_MODE_DISABLED = 0xffffffffffffffff,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleOrientationChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Screen Align"
	PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
	// MPropertyFriendlyName "Screen-Z Align"
	PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
	// MPropertyFriendlyName "World-Z Align"
	PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
	// MPropertyFriendlyName "Particle Normal Align"
	PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
	// MPropertyFriendlyName "Screen & Particle Normal Align"
	PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
	// MPropertyFriendlyName "Full 3-Axis Rotation"
	PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 17
// Alignment: 4
// Size: 0x4
enum class ParticleAttachment_t : uint32_t
{
	PATTACH_INVALID = 0xffffffffffffffff,
	PATTACH_ABSORIGIN = 0x0,
	PATTACH_ABSORIGIN_FOLLOW = 0x1,
	PATTACH_CUSTOMORIGIN = 0x2,
	PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
	PATTACH_POINT = 0x4,
	PATTACH_POINT_FOLLOW = 0x5,
	PATTACH_EYES_FOLLOW = 0x6,
	PATTACH_OVERHEAD_FOLLOW = 0x7,
	PATTACH_WORLDORIGIN = 0x8,
	PATTACH_ROOTBONE_FOLLOW = 0x9,
	PATTACH_RENDERORIGIN_FOLLOW = 0xa,
	PATTACH_MAIN_VIEW = 0xb,
	PATTACH_WATERWAKE = 0xc,
	PATTACH_CENTER_FOLLOW = 0xd,
	PATTACH_CUSTOM_GAME_STATE_1 = 0xe,
	MAX_PATTACH_TYPES = 0xf,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleDetailLevel_t : uint32_t
{
	// MPropertyFriendlyName "Low"
	PARTICLEDETAIL_LOW = 0x0,
	// MPropertyFriendlyName "Medium"
	PARTICLEDETAIL_MEDIUM = 0x1,
	// MPropertyFriendlyName "High"
	PARTICLEDETAIL_HIGH = 0x2,
	// MPropertyFriendlyName "Ultra"
	PARTICLEDETAIL_ULTRA = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleFalloffFunction_t : uint32_t
{
	// MPropertyFriendlyName "Constant - No Falloff"
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	// MPropertyFriendlyName "Linear Falloff"
	PARTICLE_FALLOFF_LINEAR = 0x1,
	// MPropertyFriendlyName "Exponential Falloff"
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class ParticleVecType_t : uint32_t
{
	PVEC_TYPE_INVALID = 0xffffffffffffffff,
	PVEC_TYPE_LITERAL = 0x0,
	PVEC_TYPE_LITERAL_COLOR = 0x1,
	PVEC_TYPE_PARTICLE_VECTOR = 0x2,
	PVEC_TYPE_CP_VALUE = 0x3,
	PVEC_TYPE_CP_RELATIVE_POSITION = 0x4,
	PVEC_TYPE_CP_RELATIVE_DIR = 0x5,
	PVEC_TYPE_FLOAT_COMPONENTS = 0x6,
	PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0x7,
	PVEC_TYPE_FLOAT_INTERP_OPEN = 0x8,
	PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0x9,
	PVEC_TYPE_COUNT = 0xa,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	// MPropertyFriendlyName "Off"
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	// MPropertyFriendlyName "On (If Possible)"
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	// MPropertyFriendlyName "On (Required)"
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleFloatInputMode_t : uint32_t
{
	PF_INPUT_MODE_INVALID = 0xffffffffffffffff,
	PF_INPUT_MODE_CLAMPED = 0x0,
	PF_INPUT_MODE_LOOPED = 0x1,
	PF_INPUT_MODE_COUNT = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleSelection_t : uint32_t
{
	// MPropertyFriendlyName "First/Oldest Particle"
	PARTICLE_SELECTION_FIRST = 0x0,
	// MPropertyFriendlyName "Last/Newest Particle"
	PARTICLE_SELECTION_LAST = 0x1,
	// MPropertyFriendlyName "Specified Particle Number"
	PARTICLE_SELECTION_NUMBER = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ParticleFloatMapType_t : uint32_t
{
	PF_MAP_TYPE_INVALID = 0xffffffffffffffff,
	PF_MAP_TYPE_DIRECT = 0x0,
	PF_MAP_TYPE_MULT = 0x1,
	PF_MAP_TYPE_REMAP = 0x2,
	PF_MAP_TYPE_REMAP_BIASED = 0x3,
	PF_MAP_TYPE_CURVE = 0x4,
	PF_MAP_TYPE_COUNT = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleTopology_t : uint32_t
{
	// MPropertyFriendlyName "Points"
	PARTICLE_TOPOLOGY_POINTS = 0x0,
	// MPropertyFriendlyName "Line segments"
	PARTICLE_TOPOLOGY_LINES = 0x1,
	// MPropertyFriendlyName "Triangles"
	PARTICLE_TOPOLOGY_TRIS = 0x2,
	// MPropertyFriendlyName "Quadrilaterals"
	PARTICLE_TOPOLOGY_QUADS = 0x3,
	// MPropertyFriendlyName "Cubes"
	PARTICLE_TOPOLOGY_CUBES = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimationType_t : uint32_t
{
	// MPropertyFriendlyName "Fixed Rate"
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	// MPropertyFriendlyName "Fit Lifetime"
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	// MPropertyFriendlyName "Set Frames Manually"
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class HitboxLerpType_t : uint32_t
{
	// MPropertyFriendlyName "Lerp from Start/End Time"
	HITBOX_LERP_LIFETIME = 0x0,
	// MPropertyFriendlyName "Constant"
	HITBOX_LERP_CONSTANT = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class VectorExpressionType_t : uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	// MPropertyFriendlyName "Add"
	VECTOR_EXPRESSION_ADD = 0x0,
	// MPropertyFriendlyName "Subtract"
	VECTOR_EXPRESSION_SUBTRACT = 0x1,
	// MPropertyFriendlyName "Multiply"
	VECTOR_EXPRESSION_MUL = 0x2,
	// MPropertyFriendlyName "Divide"
	VECTOR_EXPRESSION_DIVIDE = 0x3,
	// MPropertyFriendlyName "Input 1"
	VECTOR_EXPRESSION_INPUT_1 = 0x4,
	// MPropertyFriendlyName "Min"
	VECTOR_EXPRESSION_MIN = 0x5,
	// MPropertyFriendlyName "Max"
	VECTOR_EXPRESSION_MAX = 0x6,
	// MPropertyFriendlyName "Normalize Input 1"
	VECTOR_EXPRESSION_NORMALIZE_INPUT_1 = 0x7,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class SequenceCombineMode_t : uint32_t
{
	// MPropertyFriendlyName "Color and alpha from sequence 0"
	SEQUENCE_COMBINE_MODE_USE_SEQUENCE_0 = 0x0,
	// MPropertyFriendlyName "Color and alpha from sequence 1"
	SEQUENCE_COMBINE_MODE_USE_SEQUENCE_1 = 0x1,
	// MPropertyFriendlyName "Average pixels form sequence 0 and 1 together"
	SEQUENCE_COMBINE_MODE_AVERAGE = 0x2,
	// MPropertyFriendlyName "Add pixels from sequence 0 and 1 together"
	SEQUENCE_COMBINE_MODE_ADDITIVE = 0x3,
	// MPropertyFriendlyName "Alpha From Sequence 0, RGB From Sequence 1"
	SEQUENCE_COMBINE_MODE_ALPHA_FROM0_RGB_FROM_1 = 0x4,
	// MPropertyFriendlyName "Alpha From Sequence 1, RGB From Sequence 0"
	SEQUENCE_COMBINE_MODE_ALPHA_FROM1_RGB_FROM_0 = 0x5,
	// MPropertyFriendlyName "Specify blend weights for alpha and rgb"
	SEQUENCE_COMBINE_MODE_WEIGHTED_BLEND = 0x6,
	// MPropertyFriendlyName "Alpha blend sequence 1 over sequence 0"
	SEQUENCE_COMBINE_MODE_ALPHA_BLEND_1_OVER_0 = 0x7,
	// MPropertyFriendlyName "Replicate sequence 0 alpha to rgb"
	SEQUENCE_COMBINE_MODE_REPLICATEALPHA0 = 0x8,
	// MPropertyFriendlyName "Replicate sequence 1 alpha to rgb"
	SEQUENCE_COMBINE_MODE_REPLICATEALPHA1 = 0x9,
	// MPropertyFriendlyName "Alpha blend sequence 0 over sequence 1"
	SEQUENCE_COMBINE_MODE_ALPHA_BLEND_0_OVER_1 = 0xa,
	// MPropertyFriendlyName "Color from sequence 0, solid alpha"
	SEQUENCE_COMBINE_MODE_REPLICATE_COLOR_0 = 0xb,
	// MPropertyFriendlyName "Color from sequence 1, solid alpha"
	SEQUENCE_COMBINE_MODE_REPLICATE_COLOR_1 = 0xc,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class ParticlePinDistance_t : uint32_t
{
	// MPropertyFriendlyName "Don't Break"
	PARTICLE_PIN_DISTANCE_NONE = 0xffffffffffffffff,
	// MPropertyFriendlyName "Distance to Neighboring Particle"
	PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
	// MPropertyFriendlyName "Distance to Farthest Particle"
	PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
	// MPropertyFriendlyName "Distance to First Particle"
	PARTICLE_PIN_DISTANCE_FIRST = 0x2,
	// MPropertyFriendlyName "Distance to Last Particle"
	PARTICLE_PIN_DISTANCE_LAST = 0x3,
	// MPropertyFriendlyName "Distance to Particle System Center"
	PARTICLE_PIN_DISTANCE_CENTER = 0x5,
	// MPropertyFriendlyName "Distance to Control Point"
	PARTICLE_PIN_DISTANCE_CP = 0x6,
	// MPropertyFriendlyName "Distance to Either of Two Control Points"
	PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
	// MPropertyFriendlyName "Distance to Both of Two Control Points"
	PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
	// MPropertyFriendlyName "Particle Speed"
	PARTICLE_PIN_SPEED = 0x9,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class BlurFilterType_t : uint32_t
{
	// MPropertyFriendlyName "Gaussian"
	BLURFILTER_GAUSSIAN = 0x0,
	// MPropertyFriendlyName "Box"
	BLURFILTER_BOX = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class ScalarExpressionType_t : uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	// MPropertyFriendlyName "Add"
	SCALAR_EXPRESSION_ADD = 0x0,
	// MPropertyFriendlyName "Subtract"
	SCALAR_EXPRESSION_SUBTRACT = 0x1,
	// MPropertyFriendlyName "Multiply"
	SCALAR_EXPRESSION_MUL = 0x2,
	// MPropertyFriendlyName "Divide"
	SCALAR_EXPRESSION_DIVIDE = 0x3,
	// MPropertyFriendlyName "Input 1"
	SCALAR_EXPRESSION_INPUT_1 = 0x4,
	// MPropertyFriendlyName "Min"
	SCALAR_EXPRESSION_MIN = 0x5,
	// MPropertyFriendlyName "Max"
	SCALAR_EXPRESSION_MAX = 0x6,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class ParticleColorBlendType_t : uint32_t
{
	// MPropertyFriendlyName "Multiply"
	PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
	// MPropertyFriendlyName "Add"
	PARTICLE_COLOR_BLEND_ADD = 0x1,
	// MPropertyFriendlyName "Subtract"
	PARTICLE_COLOR_BLEND_SUBTRACT = 0x2,
	// MPropertyFriendlyName "Mod2X"
	PARTICLE_COLOR_BLEND_MOD2X = 0x3,
	// MPropertyFriendlyName "Screen"
	PARTICLE_COLOR_BLEND_SCREEN = 0x4,
	// MPropertyFriendlyName "Lighten"
	PARTICLE_COLOR_BLEND_MAX = 0x5,
	// MPropertyFriendlyName "Darken"
	PARTICLE_COLOR_BLEND_MIN = 0x6,
	// MPropertyFriendlyName "Replace"
	PARTICLE_COLOR_BLEND_REPLACE = 0x7,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleColorBlendMode_t : uint32_t
{
	// MPropertyFriendlyName "Replace"
	PARTICLEBLEND_DEFAULT = 0x0,
	// MPropertyFriendlyName "Overlay"
	PARTICLEBLEND_OVERLAY = 0x1,
	// MPropertyFriendlyName "Darken"
	PARTICLEBLEND_DARKEN = 0x2,
	// MPropertyFriendlyName "Lighten"
	PARTICLEBLEND_LIGHTEN = 0x3,
	// MPropertyFriendlyName "Multiply"
	PARTICLEBLEND_MULTIPLY = 0x4,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 17
// Alignment: 4
// Size: 0x4
enum class ParticleFloatType_t : uint32_t
{
	PF_TYPE_INVALID = 0xffffffffffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_RANDOM_UNIFORM = 0x1,
	PF_TYPE_RANDOM_BIASED = 0x2,
	PF_TYPE_COLLECTION_AGE = 0x3,
	PF_TYPE_ENDCAP_AGE = 0x4,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x5,
	PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x6,
	PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x7,
	PF_TYPE_PARTICLE_AGE = 0x8,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x9,
	PF_TYPE_PARTICLE_FLOAT = 0xa,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0xb,
	PF_TYPE_PARTICLE_SPEED = 0xc,
	PF_TYPE_PARTICLE_NUMBER = 0xd,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0xe,
	PF_TYPE_COUNT = 0xf,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleVRHandChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Left Hand"
	PARTICLE_VRHAND_LEFT = 0x0,
	// MPropertyFriendlyName "Right Hand"
	PARTICLE_VRHAND_RIGHT = 0x1,
	// MPropertyFriendlyName "Specified Via Control Point"
	PARTICLE_VRHAND_CP = 0x2,
	// MPropertyFriendlyName "Detect from CP's Object"
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleFloatBiasType_t : uint32_t
{
	PF_BIAS_TYPE_INVALID = 0xffffffffffffffff,
	PF_BIAS_TYPE_STANDARD = 0x0,
	PF_BIAS_TYPE_GAIN = 0x1,
	PF_BIAS_TYPE_EXPONENTIAL = 0x2,
	PF_BIAS_TYPE_COUNT = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class MissingParentInheritBehavior_t : uint32_t
{
	// MPropertyFriendlyName "Do Nothing"
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	// MPropertyFriendlyName "Kill Particle"
	MISSING_PARENT_KILL = 0x0,
	// MPropertyFriendlyName "Use Next Parent Particle"
	MISSING_PARENT_FIND_NEW = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class Detail2Combo_t : uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	DETAIL_2_COMBO_UNINITIALIZED = 0xffffffffffffffff,
	// MPropertyFriendlyName "Off"
	DETAIL_2_COMBO_OFF = 0x0,
	// MPropertyFriendlyName "Add"
	DETAIL_2_COMBO_ADD = 0x1,
	// MPropertyFriendlyName "Add + Self Illum"
	DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
	// MPropertyFriendlyName "Mod2X"
	DETAIL_2_COMBO_MOD2X = 0x3,
	// MPropertyFriendlyName "Multiply"
	DETAIL_2_COMBO_MUL = 0x4,
	// MPropertyFriendlyName "Crossfade"
	DETAIL_2_COMBO_CROSSFADE = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleSetMethod_t : uint32_t
{
	// MPropertyFriendlyName "Set Value"
	PARTICLE_SET_REPLACE_VALUE = 0x0,
	// MPropertyFriendlyName "Scale Initial Value"
	PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
	// MPropertyFriendlyName "Add to Initial Value"
	PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
	// MPropertyFriendlyName "Scale Current Value"
	PARTICLE_SET_SCALE_CURRENT_VALUE = 0x3,
	// MPropertyFriendlyName "Add to Current Value"
	PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 14
// Alignment: 1
// Size: 0x1
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0x0,
	MOVETYPE_ISOMETRIC = 0x1,
	MOVETYPE_WALK = 0x2,
	MOVETYPE_STEP = 0x3,
	MOVETYPE_FLY = 0x4,
	MOVETYPE_FLYGRAVITY = 0x5,
	MOVETYPE_VPHYSICS = 0x6,
	MOVETYPE_PUSH = 0x7,
	MOVETYPE_NOCLIP = 0x8,
	MOVETYPE_LADDER = 0x9,
	MOVETYPE_OBSERVER = 0xa,
	MOVETYPE_CUSTOM = 0xb,
	MOVETYPE_LAST = 0xb,
	MOVETYPE_MAX_BITS = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class Disposition_t : uint32_t
{
	D_ER = 0x0,
	D_HT = 0x1,
	D_FR = 0x2,
	D_LI = 0x3,
	D_NU = 0x4,
	D_ERROR = 0x0,
	D_HATE = 0x1,
	D_FEAR = 0x2,
	D_LIKE = 0x3,
	D_NEUTRAL = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ShakeCommand_t : uint32_t
{
	SHAKE_START = 0x0,
	SHAKE_STOP = 0x1,
	SHAKE_AMPLITUDE = 0x2,
	SHAKE_FREQUENCY = 0x3,
	SHAKE_START_RUMBLEONLY = 0x4,
	SHAKE_START_NORUMBLE = 0x5,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PointWorldTextJustifyHorizontal_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class WeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 14
// Alignment: 4
// Size: 0x4
enum class UnitStatusLabel : uint32_t
{
	STATUS_NO_HEALTH_BAR = 0x0,
	STATUS_BANISHED = 0x1,
	STATUS_SLEEP = 0x2,
	STATUS_STUNNED = 0x3,
	STATUS_HEXED = 0x4,
	STATUS_TAUNTED = 0x5,
	STATUS_FEAR = 0x6,
	STATUS_CHARMED = 0x7,
	STATUS_MUTED = 0x8,
	STATUS_SILENCED = 0x9,
	STATUS_ROOTED = 0xa,
	STATUS_DISARMED = 0xb,
	STATUS_BREAK = 0xc,
	STATUS_NONE = 0xd,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ValueRemapperOutputType_t : uint32_t
{
	OutputType_AnimationCycle = 0x0,
	OutputType_RotationX = 0x1,
	OutputType_RotationY = 0x2,
	OutputType_RotationZ = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class MoveCollide_t : uint8_t
{
	MOVECOLLIDE_DEFAULT = 0x0,
	MOVECOLLIDE_FLY_BOUNCE = 0x1,
	MOVECOLLIDE_FLY_CUSTOM = 0x2,
	MOVECOLLIDE_FLY_SLIDE = 0x3,
	MOVECOLLIDE_COUNT = 0x4,
	MOVECOLLIDE_MAX_BITS = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 1
// Size: 0x1
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0x0,
	SOLID_BSP = 0x1,
	SOLID_BBOX = 0x2,
	SOLID_OBB = 0x3,
	SOLID_POINT = 0x5,
	SOLID_VPHYSICS = 0x6,
	SOLID_CAPSULE = 0x7,
	SOLID_LAST = 0x8,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PetLevelup_Rule_t : uint32_t
{
	PETLEVELFROM_NOTHING = 0x0,
	PETLEVELFROM_KILLEATER = 0x1,
	PETLEVELFROM_COMPENDIUM_LEVEL = 0x2,
	NUM_PETLEVELUPRULES = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class DAC_UNIT_TARGET_TYPE : uint32_t
{
	DAC_UNIT_TARGET_NONE = 0x0,
	DAC_UNIT_TARGET_HERO = 0x1,
	DAC_UNIT_TARGET_CREEP = 0x2,
	DAC_UNIT_TARGET_BUILDING = 0x4,
	DAC_UNIT_TARGET_COURIER = 0x10,
	DAC_UNIT_TARGET_OTHER = 0x20,
	DAC_UNIT_TARGET_TREE = 0x40,
	DAC_UNIT_TARGET_CUSTOM = 0x80,
	DAC_UNIT_TARGET_BASIC = 0x12,
	DAC_UNIT_TARGET_ALL = 0x37,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class attackfail : uint32_t
{
	DAC_ATTACK_RECORD_FAIL_NO = 0x0,
	DAC_ATTACK_RECORD_FAIL_TERRAIN_MISS = 0x1,
	DAC_ATTACK_RECORD_FAIL_SOURCE_MISS = 0x2,
	DAC_ATTACK_RECORD_FAIL_TARGET_EVADED = 0x3,
	DAC_ATTACK_RECORD_FAIL_TARGET_INVULNERABLE = 0x4,
	DAC_ATTACK_RECORD_FAIL_TARGET_OUT_OF_RANGE = 0x5,
	DAC_ATTACK_RECORD_CANNOT_FAIL = 0x6,
	DAC_ATTACK_RECORD_FAIL_BLOCKED_BY_OBSTRUCTION = 0x7,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t : uint32_t
{
	SimpleConstraintSoundProfile::kMIN_THRESHOLD = 0x0,
	SimpleConstraintSoundProfile::kMIN_FULL = 0x1,
	SimpleConstraintSoundProfile::kHIGHWATER = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PlayerConnectedState : uint32_t
{
	PlayerConnected = 0x0,
	PlayerDisconnecting = 0x1,
	PlayerDisconnected = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class MaterialModifyMode_t : uint32_t
{
	MATERIAL_MODIFY_MODE_NONE = 0x0,
	MATERIAL_MODIFY_MODE_SETVAR = 0x1,
	MATERIAL_MODIFY_MODE_ANIM_SEQUENCE = 0x2,
	MATERIAL_MODIFY_MODE_FLOAT_LERP = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class DoorState_t : uint32_t
{
	DOOR_STATE_CLOSED = 0x0,
	DOOR_STATE_OPENING = 0x1,
	DOOR_STATE_OPEN = 0x2,
	DOOR_STATE_CLOSING = 0x3,
	DOOR_STATE_AJAR = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class LatchDirtyPermission_t : uint32_t
{
	LATCH_DIRTY_DISALLOW = 0x0,
	LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
	LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
	LATCH_DIRTY_PREDICTION = 0x3,
	LATCH_DIRTY_FRAMESIMULATE = 0x4,
	LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 16
// Alignment: 4
// Size: 0x4
enum class vote_create_failed_t : uint32_t
{
	VOTE_FAILED_GENERIC = 0x0,
	VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
	VOTE_FAILED_RATE_EXCEEDED = 0x2,
	VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
	VOTE_FAILED_QUORUM_FAILURE = 0x4,
	VOTE_FAILED_ISSUE_DISABLED = 0x5,
	VOTE_FAILED_MAP_NOT_FOUND = 0x6,
	VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
	VOTE_FAILED_FAILED_RECENTLY = 0x8,
	VOTE_FAILED_TEAM_CANT_CALL = 0x9,
	VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
	VOTE_FAILED_PLAYERNOTFOUND = 0xb,
	VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
	VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
	VOTE_FAILED_SPECTATOR = 0xe,
	VOTE_FAILED_MAX = 0xf,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 20
// Alignment: 1
// Size: 0x1
enum class RenderFx_t : uint8_t
{
	kRenderFxNone = 0x0,
	kRenderFxPulseSlow = 0x1,
	kRenderFxPulseFast = 0x2,
	kRenderFxPulseSlowWide = 0x3,
	kRenderFxPulseFastWide = 0x4,
	kRenderFxFadeSlow = 0x5,
	kRenderFxFadeFast = 0x6,
	kRenderFxSolidSlow = 0x7,
	kRenderFxSolidFast = 0x8,
	kRenderFxStrobeSlow = 0x9,
	kRenderFxStrobeFast = 0xa,
	kRenderFxStrobeFaster = 0xb,
	kRenderFxFlickerSlow = 0xc,
	kRenderFxFlickerFast = 0xd,
	kRenderFxNoDissipation = 0xe,
	kRenderFxFadeOut = 0xf,
	kRenderFxFadeIn = 0x10,
	kRenderFxPulseFastWider = 0x11,
	kRenderFxGlowShell = 0x12,
	kRenderFxMax = 0x13,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class CRR_Response__ResponseEnum_t : uint32_t
{
	CRR_Response::MAX_RESPONSE_NAME = 0xc0,
	CRR_Response::MAX_RULE_NAME = 0x80,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 241
// Alignment: 4
// Size: 0x4
enum class modifierfunction : uint32_t
{
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE = 0x0,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_TARGET = 0x1,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_PROC = 0x2,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_POST_CRIT = 0x3,
	MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE = 0x4,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL = 0x5,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL = 0x6,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PURE = 0x7,
	MODIFIER_PROPERTY_PROCATTACK_FEEDBACK = 0x8,
	MODIFIER_PROPERTY_OVERRIDE_ATTACK_DAMAGE = 0x9,
	MODIFIER_PROPERTY_PRE_ATTACK = 0xa,
	MODIFIER_PROPERTY_INVISIBILITY_LEVEL = 0xb,
	MODIFIER_PROPERTY_INVISIBILITY_ATTACK_BEHAVIOR_EXCEPTION = 0xc,
	MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY = 0xd,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT = 0xe,
	MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE = 0xf,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE = 0x10,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE = 0x11,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE_2 = 0x12,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE = 0x13,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE_2 = 0x14,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE = 0x15,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE_2 = 0x16,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE = 0x17,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MIN = 0x18,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MAX = 0x19,
	MODIFIER_PROPERTY_IGNORE_MOVESPEED_LIMIT = 0x1a,
	MODIFIER_PROPERTY_MOVESPEED_LIMIT = 0x1b,
	MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE = 0x1c,
	MODIFIER_PROPERTY_FIXED_ATTACK_RATE = 0x1d,
	MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT = 0x1e,
	MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT = 0x1f,
	MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT = 0x20,
	MODIFIER_PROPERTY_ATTACK_POINT_CONSTANT = 0x21,
	MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE = 0x22,
	MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION = 0x23,
	MODIFIER_PROPERTY_TOTALDAMAGEOUTGOING_PERCENTAGE = 0x24,
	MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE = 0x25,
	MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_UNIQUE = 0x26,
	MODIFIER_PROPERTY_HP_REGEN_AMPLIFY_PERCENTAGE_SOURCE = 0x27,
	MODIFIER_PROPERTY_HP_REGEN_AMPLIFY_PERCENTAGE = 0x28,
	MODIFIER_PROPERTY_MP_REGEN_AMPLIFY_PERCENTAGE = 0x29,
	MODIFIER_PROPERTY_MP_RESTORE_AMPLIFY_PERCENTAGE = 0x2a,
	MODIFIER_PROPERTY_MP_FROM_DAMAGE_INCOMING_AMPLIFY_PERCENTAGE = 0x2b,
	MODIFIER_PROPERTY_MP_FROM_DAMAGE_OUTGOING_AMPLIFY_PERCENTAGE = 0x2c,
	MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE = 0x2d,
	MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE = 0x2e,
	MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE = 0x2f,
	MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE = 0x30,
	MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_CONSTANT = 0x31,
	MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT = 0x32,
	MODIFIER_PROPERTY_EVASION_CONSTANT = 0x33,
	MODIFIER_PROPERTY_NEGATIVE_EVASION_CONSTANT = 0x34,
	MODIFIER_PROPERTY_STATUS_RESISTANCE = 0x35,
	MODIFIER_PROPERTY_STATUS_RESISTANCE_STACKING = 0x36,
	MODIFIER_PROPERTY_STATUS_RESISTANCE_CASTER = 0x37,
	MODIFIER_PROPERTY_AVOID_DAMAGE = 0x38,
	MODIFIER_PROPERTY_AVOID_SPELL = 0x39,
	MODIFIER_PROPERTY_MISS_PERCENTAGE = 0x3a,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS = 0x3b,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE = 0x3c,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE = 0x3d,
	MODIFIER_PROPERTY_IGNORE_PHYSICAL_ARMOR = 0x3e,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DIRECT_MODIFICATION = 0x3f,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS = 0x40,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE = 0x41,
	MODIFIER_PROPERTY_BASE_MANA_REGEN = 0x42,
	MODIFIER_PROPERTY_MANA_REGEN_CONSTANT = 0x43,
	MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE = 0x44,
	MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE = 0x45,
	MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT = 0x46,
	MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE = 0x47,
	MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE_UNIQUE = 0x48,
	MODIFIER_PROPERTY_HEALTH_BONUS = 0x49,
	MODIFIER_PROPERTY_MANA_BONUS = 0x4a,
	MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS = 0x4b,
	MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS = 0x4c,
	MODIFIER_PROPERTY_EXTRA_MANA_BONUS = 0x4d,
	MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE = 0x4e,
	MODIFIER_PROPERTY_STATS_STRENGTH_BONUS = 0x4f,
	MODIFIER_PROPERTY_STATS_AGILITY_BONUS = 0x50,
	MODIFIER_PROPERTY_STATS_INTELLECT_BONUS = 0x51,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS = 0x52,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS_TARGET = 0x53,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS_STACKING = 0x54,
	MODIFIER_PROPERTY_ATTACK_RANGE_BASE_OVERRIDE = 0x55,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS = 0x56,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE = 0x57,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_PERCENTAGE = 0x58,
	MODIFIER_PROPERTY_MAX_ATTACK_RANGE = 0x59,
	MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS = 0x5a,
	MODIFIER_PROPERTY_PROJECTILE_NAME = 0x5b,
	MODIFIER_PROPERTY_REINCARNATION = 0x5c,
	MODIFIER_PROPERTY_RESPAWNTIME = 0x5d,
	MODIFIER_PROPERTY_RESPAWNTIME_PERCENTAGE = 0x5e,
	MODIFIER_PROPERTY_RESPAWNTIME_STACKING = 0x5f,
	MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE = 0x60,
	MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_STACKING = 0x61,
	MODIFIER_PROPERTY_CASTTIME_PERCENTAGE = 0x62,
	MODIFIER_PROPERTY_MANACOST_PERCENTAGE = 0x63,
	MODIFIER_PROPERTY_MANACOST_PERCENTAGE_STACKING = 0x64,
	MODIFIER_PROPERTY_DEATHGOLDCOST = 0x65,
	MODIFIER_PROPERTY_EXP_RATE_BOOST = 0x66,
	MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE = 0x67,
	MODIFIER_PROPERTY_PREATTACK_TARGET_CRITICALSTRIKE = 0x68,
	MODIFIER_PROPERTY_MAGICAL_CONSTANT_BLOCK = 0x69,
	MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK = 0x6a,
	MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK_SPECIAL = 0x6b,
	MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR = 0x6c,
	MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK = 0x6d,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION = 0x6e,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION_WEIGHT = 0x6f,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION_RATE = 0x70,
	MODIFIER_PROPERTY_ABSORB_SPELL = 0x71,
	MODIFIER_PROPERTY_REFLECT_SPELL = 0x72,
	MODIFIER_PROPERTY_DISABLE_AUTOATTACK = 0x73,
	MODIFIER_PROPERTY_BONUS_DAY_VISION = 0x74,
	MODIFIER_PROPERTY_BONUS_NIGHT_VISION = 0x75,
	MODIFIER_PROPERTY_BONUS_NIGHT_VISION_UNIQUE = 0x76,
	MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE = 0x77,
	MODIFIER_PROPERTY_FIXED_DAY_VISION = 0x78,
	MODIFIER_PROPERTY_FIXED_NIGHT_VISION = 0x79,
	MODIFIER_PROPERTY_MIN_HEALTH = 0x7a,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL = 0x7b,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL = 0x7c,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE = 0x7d,
	MODIFIER_PROPERTY_IS_ILLUSION = 0x7e,
	MODIFIER_PROPERTY_ILLUSION_LABEL = 0x7f,
	MODIFIER_PROPERTY_SUPER_ILLUSION = 0x80,
	MODIFIER_PROPERTY_SUPER_ILLUSION_WITH_ULTIMATE = 0x81,
	MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE = 0x82,
	MODIFIER_PROPERTY_TURN_RATE_OVERRIDE = 0x83,
	MODIFIER_PROPERTY_DISABLE_HEALING = 0x84,
	MODIFIER_PROPERTY_ALWAYS_ALLOW_ATTACK = 0x85,
	MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL = 0x86,
	MODIFIER_PROPERTY_UNIT_STATS_NEEDS_REFRESH = 0x87,
	MODIFIER_PROPERTY_BOUNTY_CREEP_MULTIPLIER = 0x88,
	MODIFIER_PROPERTY_BOUNTY_OTHER_MULTIPLIER = 0x89,
	MODIFIER_PROPERTY_UNIT_DISALLOW_UPGRADING = 0x8a,
	MODIFIER_PROPERTY_DODGE_PROJECTILE = 0x8b,
	MODIFIER_PROPERTY_TOTAL_HEALING_PERCENTAGE_BONUS = 0x8c,
	MODIFIER_PROPERTY_MANA_REDUCTION_AMPLIFY_PERCENTAGE = 0x8d,
	MODIFIER_PROPERTY_MANA_GENERATED_BY_OUTGOING_ATTACKS_PERCENTAGE = 0x8e,
	MODIFIER_PROPERTY_HYPE_GENERATION_PERCENTAGE = 0x8f,
	MODIFIER_EVENT_ON_SPELL_TARGET_READY = 0x90,
	MODIFIER_EVENT_ON_ATTACK_RECORD = 0x91,
	MODIFIER_EVENT_ON_ATTACK_START = 0x92,
	MODIFIER_EVENT_ON_ATTACK = 0x93,
	MODIFIER_EVENT_ON_ATTACK_LANDED = 0x94,
	MODIFIER_EVENT_ON_ATTACK_FAIL = 0x95,
	MODIFIER_EVENT_ON_ATTACK_ALLIED = 0x96,
	MODIFIER_EVENT_ON_PROJECTILE_DODGE = 0x97,
	MODIFIER_EVENT_ON_ORDER = 0x98,
	MODIFIER_EVENT_ON_UNIT_MOVED = 0x99,
	MODIFIER_EVENT_ON_ABILITY_START = 0x9a,
	MODIFIER_EVENT_ON_ABILITY_EXECUTED = 0x9b,
	MODIFIER_EVENT_ON_ABILITY_FULLY_CAST = 0x9c,
	MODIFIER_EVENT_ON_BREAK_INVISIBILITY = 0x9d,
	MODIFIER_EVENT_ON_ABILITY_END_CHANNEL = 0x9e,
	MODIFIER_EVENT_ON_PROCESS_UPGRADE = 0x9f,
	MODIFIER_EVENT_ON_REFRESH = 0xa0,
	MODIFIER_EVENT_ON_TAKEDAMAGE = 0xa1,
	MODIFIER_EVENT_ON_STATE_CHANGED = 0xa2,
	MODIFIER_EVENT_ON_ORB_EFFECT = 0xa3,
	MODIFIER_EVENT_ON_PROCESS_CLEAVE = 0xa4,
	MODIFIER_EVENT_ON_DAMAGE_CALCULATED = 0xa5,
	MODIFIER_EVENT_ON_ATTACKED = 0xa6,
	MODIFIER_EVENT_ON_DEATH = 0xa7,
	MODIFIER_EVENT_ON_RESPAWN = 0xa8,
	MODIFIER_EVENT_ON_SPENT_MANA = 0xa9,
	MODIFIER_EVENT_ON_TELEPORTING = 0xaa,
	MODIFIER_EVENT_ON_TELEPORTED = 0xab,
	MODIFIER_EVENT_ON_SET_LOCATION = 0xac,
	MODIFIER_EVENT_ON_HEALTH_GAINED = 0xad,
	MODIFIER_EVENT_ON_MANA_GAINED = 0xae,
	MODIFIER_EVENT_ON_MANA_GAINED_WHEN_DAMAGED = 0xaf,
	MODIFIER_EVENT_ON_MANA_GAINED_WHEN_DEALING_DAMAGE = 0xb0,
	MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT = 0xb1,
	MODIFIER_EVENT_ON_HERO_KILLED = 0xb2,
	MODIFIER_EVENT_ON_HEAL_RECEIVED = 0xb3,
	MODIFIER_EVENT_ON_BUILDING_KILLED = 0xb4,
	MODIFIER_EVENT_ON_MODEL_CHANGED = 0xb5,
	MODIFIER_EVENT_ON_MODIFIER_ADDED = 0xb6,
	MODIFIER_EVENT_ON_DELTA_SLAM_UNIT_HIT = 0xb7,
	MODIFIER_EVENT_ON_DELTA_SLAM_FINISHED = 0xb8,
	MODIFIER_EVENT_ON_ASSASSIN_LANDED = 0xb9,
	MODIFIER_EVENT_ON_RESURRECTION = 0xba,
	MODIFIER_PROPERTY_TOOLTIP = 0xbb,
	MODIFIER_PROPERTY_MODEL_CHANGE = 0xbc,
	MODIFIER_PROPERTY_MODEL_SCALE = 0xbd,
	MODIFIER_PROPERTY_IS_SCEPTER = 0xbe,
	MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS = 0xbf,
	MODIFIER_PROPERTY_TRANSLATE_ATTACK_SOUND = 0xc0,
	MODIFIER_PROPERTY_LIFETIME_FRACTION = 0xc1,
	MODIFIER_PROPERTY_PROVIDES_FOW_POSITION = 0xc2,
	MODIFIER_PROPERTY_SPELLS_REQUIRE_HP = 0xc3,
	MODIFIER_PROPERTY_FORCE_DRAW_MINIMAP = 0xc4,
	MODIFIER_PROPERTY_DISABLE_TURNING = 0xc5,
	MODIFIER_PROPERTY_IGNORE_CAST_ANGLE = 0xc6,
	MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE = 0xc7,
	MODIFIER_PROPERTY_ABILITY_LAYOUT = 0xc8,
	MODIFIER_EVENT_ON_DOMINATED = 0xc9,
	MODIFIER_PROPERTY_TEMPEST_DOUBLE = 0xca,
	MODIFIER_PROPERTY_PRESERVE_PARTICLES_ON_MODEL_CHANGE = 0xcb,
	MODIFIER_EVENT_ON_ATTACK_FINISHED = 0xcc,
	MODIFIER_PROPERTY_IGNORE_COOLDOWN = 0xcd,
	MODIFIER_PROPERTY_CAN_ATTACK_TREES = 0xce,
	MODIFIER_PROPERTY_VISUAL_Z_DELTA = 0xcf,
	MODIFIER_PROPERTY_INCOMING_DAMAGE_ILLUSION = 0xd0,
	MODIFIER_PROPERTY_DONT_GIVE_VISION_OF_ATTACKER = 0xd1,
	MODIFIER_PROPERTY_TOOLTIP2 = 0xd2,
	MODIFIER_EVENT_ON_ATTACK_RECORD_DESTROY = 0xd3,
	MODIFIER_EVENT_ON_PROJECTILE_OBSTRUCTION_HIT = 0xd4,
	MODIFIER_PROPERTY_SUPPRESS_TELEPORT = 0xd5,
	MODIFIER_PROPERTY_FORCE_ATTACK_TARGET = 0xd6,
	MODIFIER_PROPERTY_MODIFY_MOTION = 0xd7,
	MODIFIER_EVENT_ON_COMBAT_START = 0xd8,
	MODIFIER_EVENT_ON_COMBAT_PROVISIONALLY_END = 0xd9,
	MODIFIER_EVENT_ON_COMBAT_END = 0xda,
	MODIFIER_EVENT_ON_UNIT_SUMMONED = 0xdb,
	MODIFIER_EVENT_ON_BEFORE_TAKING_DAMAGE = 0xdc,
	MODIFIER_EVENT_ON_TAKEDAMAGE_ALWAYS = 0xdd,
	MODIFIER_EVENT_ON_EVADE = 0xde,
	MODIFIER_PROPERTY_BEST_TARGET = 0xdf,
	MODIFIER_PROPERTY_KEYWORD_CHANGE = 0xe0,
	MODIFIER_EVENT_ON_VALIDATE_TARGET_REPORT_INVALID = 0xe1,
	MODIFIER_EVENT_ON_EXCESS_DAMAGE = 0xe2,
	MODIFIER_EVENT_ON_ABILITY_PRE_CAST = 0xe3,
	MODIFIER_PROPERTY_COOLDOWN_TICKDOWN_MULTIPLIER = 0xe4,
	MODIFIER_PROPERTY_MP_GAIN_FROM_ABILITY = 0xe5,
	MODIFIER_PROPERTY_BONUS_MAX_MP_GAIN_FROM_ATTACK = 0xe6,
	MODIFIER_EVENT_ON_HEALTH_REGENED = 0xe7,
	MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE_FLAT = 0xe8,
	MODIFIER_PROPERTY_POST_TARGET_SELECT_OVERRIDE = 0xe9,
	MODIFIER_EVENT_ON_UNDERLORD_POWER_CHANGED = 0xea,
	MODIFIER_PROPERTY_ALWAYS_BONUS_DAMAGE_PURE = 0xeb,
	MODIFIER_PROPERTY_BONUS_BURN_DAMAGE_PERCENTAGE = 0xec,
	MODIFIER_PROPERTY_BYPASSES_HEALING_RESTRICTIONS = 0xed,
	MODIFIER_PROPERTY_HOLDS_CELL_ON_DEATH = 0xee,
	MODIFIER_FUNCTION_LAST = 0xef,
	MODIFIER_FUNCTION_INVALID = 0xff,
};

// Registered binary: server.dll (project 'navlib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class NavDirType : uint32_t
{
	NORTH = 0x0,
	EAST = 0x1,
	SOUTH = 0x2,
	WEST = 0x3,
	NUM_DIRECTIONS = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SpeechPriorityType : uint32_t
{
	SPEECH_PRIORITY_LOW = 0x0,
	SPEECH_PRIORITY_NORMAL = 0x1,
	SPEECH_PRIORITY_MANUAL = 0x2,
	SPEECH_PRIORITY_UNINTERRUPTABLE = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 46
// Alignment: 4
// Size: 0x4
enum class eEconItemOrigin : uint32_t
{
	kEconItemOrigin_Invalid = 0xffffffffffffffff,
	kEconItemOrigin_Drop = 0x0,
	kEconItemOrigin_Achievement = 0x1,
	kEconItemOrigin_Purchased = 0x2,
	kEconItemOrigin_Traded = 0x3,
	kEconItemOrigin_Crafted = 0x4,
	kEconItemOrigin_StorePromotion = 0x5,
	kEconItemOrigin_Gifted = 0x6,
	kEconItemOrigin_SupportGranted = 0x7,
	kEconItemOrigin_FoundInCrate = 0x8,
	kEconItemOrigin_Earned = 0x9,
	kEconItemOrigin_ThirdPartyPromotion = 0xa,
	kEconItemOrigin_GiftWrapped = 0xb,
	kEconItemOrigin_HalloweenDrop = 0xc,
	kEconItemOrigin_PackageItem = 0xd,
	kEconItemOrigin_Foreign = 0xe,
	kEconItemOrigin_CDKey = 0xf,
	kEconItemOrigin_CollectionReward = 0x10,
	kEconItemOrigin_PreviewItem = 0x11,
	kEconItemOrigin_SteamWorkshopContribution = 0x12,
	kEconItemOrigin_PeriodicScoreReward = 0x13,
	kEconItemOrigin_Recycling = 0x14,
	kEconItemOrigin_TournamentDrop = 0x15,
	kEconItemOrigin_PassportReward = 0x16,
	kEconItemOrigin_TutorialDrop = 0x17,
	kEconItemOrigin_RecipeOutput = 0x18,
	kEconItemOrigin_GemExtract = 0x19,
	kEconItemOrigin_EventPointReward = 0x1a,
	kEconItemOrigin_ItemRedemption = 0x1b,
	kEconItemOrigin_FantasyTicketRefund = 0x1c,
	kEconItemOrigin_VictoryPredictionReward = 0x1d,
	kEconItemOrigin_AssassinEventReward = 0x1e,
	kEconItemOrigin_CompendiumReward = 0x1f,
	kEconItemOrigin_CompendiumDrop = 0x20,
	kEconItemOrigin_MysteryItem = 0x21,
	kEconItemOrigin_UnpackedFromBundle = 0x22,
	kEconItemOrigin_WonFromWeeklyGame = 0x23,
	kEconItemOrigin_SeasonalItemGrant = 0x24,
	kEconItemOrigin_PackOpening = 0x25,
	kEconItemOrigin_InitialGrant = 0x26,
	kEconItemOrigin_MarketPurchase = 0x27,
	kEconItemOrigin_MarketRefunded = 0x28,
	kEconItemOrigin_LimitedDraft = 0x29,
	kEconItemOrigin_GauntletReward = 0x2a,
	kEconItemOrigin_CompendiumGift = 0x2b,
	kEconItemOrigin_Max = 0x2c,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class TakeHealthOptions_t : uint32_t
{
	TH_IGNORE_MAX_HITPOINTS = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 30
// Alignment: 4
// Size: 0x4
enum class soundlevel_t : uint32_t
{
	SNDLVL_NONE = 0x0,
	SNDLVL_20dB = 0x14,
	SNDLVL_25dB = 0x19,
	SNDLVL_30dB = 0x1e,
	SNDLVL_35dB = 0x23,
	SNDLVL_40dB = 0x28,
	SNDLVL_45dB = 0x2d,
	SNDLVL_50dB = 0x32,
	SNDLVL_55dB = 0x37,
	SNDLVL_IDLE = 0x3c,
	SNDLVL_60dB = 0x3c,
	SNDLVL_65dB = 0x41,
	SNDLVL_STATIC = 0x42,
	SNDLVL_70dB = 0x46,
	SNDLVL_NORM = 0x4b,
	SNDLVL_75dB = 0x4b,
	SNDLVL_80dB = 0x50,
	SNDLVL_TALKING = 0x50,
	SNDLVL_85dB = 0x55,
	SNDLVL_90dB = 0x5a,
	SNDLVL_95dB = 0x5f,
	SNDLVL_100dB = 0x64,
	SNDLVL_105dB = 0x69,
	SNDLVL_110dB = 0x6e,
	SNDLVL_120dB = 0x78,
	SNDLVL_130dB = 0x82,
	SNDLVL_GUNFIRE = 0x8c,
	SNDLVL_140dB = 0x8c,
	SNDLVL_150dB = 0x96,
	SNDLVL_180dB = 0xb4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 32
// Alignment: 4
// Size: 0x4
enum class UnitFilterResult : uint32_t
{
	UF_SUCCESS = 0x0,
	UF_FAIL = 0x1,
	UF_FAIL_FRIENDLY = 0x2,
	UF_FAIL_ENEMY = 0x3,
	UF_FAIL_HERO = 0x4,
	UF_FAIL_CONSIDERED_HERO = 0x5,
	UF_FAIL_CREEP = 0x6,
	UF_FAIL_BUILDING = 0x7,
	UF_FAIL_COURIER = 0x8,
	UF_FAIL_OTHER = 0x9,
	UF_FAIL_ANCIENT = 0xa,
	UF_FAIL_ILLUSION = 0xb,
	UF_FAIL_SUMMONED = 0xc,
	UF_FAIL_DOMINATED = 0xd,
	UF_FAIL_MELEE = 0xe,
	UF_FAIL_RANGED = 0xf,
	UF_FAIL_DEAD = 0x10,
	UF_FAIL_MAGIC_IMMUNE_ALLY = 0x11,
	UF_FAIL_MAGIC_IMMUNE_ENEMY = 0x12,
	UF_FAIL_INVULNERABLE = 0x13,
	UF_FAIL_IN_FOW = 0x14,
	UF_FAIL_INVISIBLE = 0x15,
	UF_FAIL_NOT_PLAYER_CONTROLLED = 0x16,
	UF_FAIL_ATTACK_IMMUNE = 0x17,
	UF_FAIL_CUSTOM = 0x18,
	UF_FAIL_INVALID_LOCATION = 0x19,
	UF_FAIL_DISABLE_HELP = 0x1a,
	UF_FAIL_OUT_OF_WORLD = 0x1b,
	UF_FAIL_NIGHTMARED = 0x1c,
	UF_FAIL_OBSTRUCTED = 0x1d,
	UF_FAIL_UNDERLORD = 0x1e,
	UF_FAIL_UNTARGETABLE = 0x1f,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class DACDamageFlag_t : uint32_t
{
	DAC_DAMAGE_FLAG_NONE = 0x0,
	DAC_DAMAGE_FLAG_IGNORES_MAGIC_ARMOR = 0x1,
	DAC_DAMAGE_FLAG_IGNORES_PHYSICAL_ARMOR = 0x2,
	DAC_DAMAGE_FLAG_BYPASSES_INVULNERABILITY = 0x4,
	DAC_DAMAGE_FLAG_BYPASSES_BLOCK = 0x8,
	DAC_DAMAGE_FLAG_REFLECTION = 0x10,
	DAC_DAMAGE_FLAG_HPLOSS = 0x20,
	DAC_DAMAGE_FLAG_NON_LETHAL = 0x80,
	DAC_DAMAGE_FLAG_NO_DAMAGE_MULTIPLIERS = 0x200,
	DAC_DAMAGE_FLAG_NO_SPELL_AMPLIFICATION = 0x400,
	DAC_DAMAGE_FLAG_NO_SPELL_LIFESTEAL = 0x1000,
	DAC_DAMAGE_FLAG_PROPERTY_FIRE = 0x2000,
	DAC_DAMAGE_FLAG_NO_MANA_GAIN = 0x4000,
	DAC_DAMAGE_FLAG_CANNOT_DEFER = 0x8000,
	DAC_DAMAGE_FLAG_NO_MANA_GAIN_DEFENDER = 0x10000,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class DAC_UNIT_TARGET_TEAM : uint32_t
{
	DAC_UNIT_TARGET_TEAM_NONE = 0x0,
	DAC_UNIT_TARGET_TEAM_FRIENDLY = 0x1,
	DAC_UNIT_TARGET_TEAM_ENEMY = 0x2,
	DAC_UNIT_TARGET_TEAM_CUSTOM = 0x4,
	DAC_UNIT_TARGET_TEAM_BOTH = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class BeamType_t : uint32_t
{
	BEAM_INVALID = 0x0,
	BEAM_POINTS = 0x1,
	BEAM_ENTPOINT = 0x2,
	BEAM_ENTS = 0x3,
	BEAM_HOSE = 0x4,
	BEAM_SPLINE = 0x5,
	BEAM_LASER = 0x6,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class HierarchyType_t : uint32_t
{
	HIERARCHY_NONE = 0x0,
	HIERARCHY_BONE_MERGE = 0x1,
	HIERARCHY_ATTACHMENT = 0x2,
	HIERARCHY_ABSORIGIN = 0x3,
	HIERARCHY_BONE = 0x4,
	HIERARCHY_TYPE_COUNT = 0x5,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class DAMAGE_TYPES : uint32_t
{
	DAMAGE_TYPE_NONE = 0x0,
	DAMAGE_TYPE_PHYSICAL = 0x1,
	DAMAGE_TYPE_MAGICAL = 0x2,
	DAMAGE_TYPE_PURE = 0x4,
	DAMAGE_TYPE_HP_REMOVAL = 0x8,
	DAMAGE_TYPE_ALL = 0x7,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class eLiteralHandType : uint32_t
{
	LITERAL_HAND_TYPE_UNKNOWN = 0xffffffffffffffff,
	LITERAL_HAND_TYPE_RIGHT = 0x0,
	LITERAL_HAND_TYPE_LEFT = 0x1,
	LITERAL_HAND_TYPE_COUNT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class modifierremove : uint32_t
{
	DOTA_BUFF_REMOVE_ENEMY_BUFFS = 0x1,
	DOTA_BUFF_REMOVE_ALLY_BUFFS = 0x2,
	DOTA_BUFF_REMOVE_ITEMS = 0x4,
	DOTA_BUFF_REMOVE_NON_ITEMS = 0x8,
	DOTA_BUFF_REMOVE_PERMANENT = 0x10,
	DOTA_BUFF_REMOVE_ON_COMBAT_END = 0x20,
	DOTA_BUFF_REMOVE_EVERYTHING = 0xffffffffffffffff,
	DOTA_BUFF_REMOVE_ALL_BUFFS = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EntityDisolveType_t : uint32_t
{
	ENTITY_DISSOLVE_NORMAL = 0x0,
	ENTITY_DISSOLVE_ELECTRICAL = 0x1,
	ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
	ENTITY_DISSOLVE_CORE = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 21
// Alignment: 1
// Size: 0x1
enum class gender_t : uint8_t
{
	GENDER_NONE = 0x0,
	GENDER_MALE = 0x1,
	GENDER_FEMALE = 0x2,
	GENDER_NAMVET = 0x3,
	GENDER_TEENGIRL = 0x4,
	GENDER_BIKER = 0x5,
	GENDER_MANAGER = 0x6,
	GENDER_GAMBLER = 0x7,
	GENDER_PRODUCER = 0x8,
	GENDER_COACH = 0x9,
	GENDER_MECHANIC = 0xa,
	GENDER_CEDA = 0xb,
	GENDER_CRAWLER = 0xc,
	GENDER_UNDISTRACTABLE = 0xd,
	GENDER_FALLEN = 0xe,
	GENDER_RIOT_CONTROL = 0xf,
	GENDER_CLOWN = 0x10,
	GENDER_JIMMY = 0x11,
	GENDER_HOSPITAL_PATIENT = 0x12,
	GENDER_BRIDE = 0x13,
	GENDER_LAST = 0x14,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class DacGestureSlot_t : uint32_t
{
	GESTURE_SLOT_NONE = 0xffffffffffffffff,
	GESTURE_SLOT_ATTACK = 0x0,
	GESTURE_SLOT_ABILITY = 0x1,
	GESTURE_SLOT_OVERRIDE = 0x2,
	GESTURE_SLOT_CUSTOM = 0x3,
	GESTURE_SLOT_CUSTOM2 = 0x4,
	GESTURE_SLOT_CUSTOM3 = 0x5,
	GESTURE_SLOT_CONSTANT = 0x6,
	GESTURE_SLOT_TAUNT = 0x7,
	GESTURE_SLOT_ABSOLUTE = 0x8,
	GESTURE_SLOT_COUNT = 0x9,
	GESTURE_SLOT_STOLEN_ABILITY_BIT = 0x80,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class DAC_PURGE_FLAGS : uint32_t
{
	DAC_PURGE_FLAG_NONE = 0x0,
	DAC_PURGE_FLAG_REMOVE_BUFFS = 0x2,
	DAC_PURGE_FLAG_REMOVE_DEBUFFS = 0x4,
	DAC_PURGE_FLAG_REMOVE_STUNS = 0x8,
	DAC_PURGE_FLAG_REMOVE_EXCEPTIONS = 0x10,
	DAC_PURGE_FLAG_REMOVE_THIS_FRAME_ONLY = 0x20,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class SpawnDebugRestrictionOverrideState_t : uint32_t
{
	SPAWN_DEBUG_RESTRICT_NONE = 0x0,
	SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
	SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class Hull_t : uint32_t
{
	HULL_HUMAN = 0x0,
	HULL_SMALL_CENTERED = 0x1,
	HULL_WIDE_HUMAN = 0x2,
	HULL_TINY = 0x3,
	HULL_MEDIUM = 0x4,
	HULL_TINY_CENTERED = 0x5,
	HULL_LARGE = 0x6,
	HULL_LARGE_CENTERED = 0x7,
	HULL_MEDIUM_TALL = 0x8,
	NUM_HULLS = 0x9,
	HULL_NONE = 0xa,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Registered binary: server.dll (project 'navlib')
// Enumerator count: 16
// Alignment: 8
// Size: 0x8
enum class NavAttributeEnum : uint64_t
{
	NAV_MESH_CROUCH = 0x1,
	NAV_MESH_JUMP = 0x2,
	NAV_MESH_PRECISE = 0x4,
	NAV_MESH_NO_JUMP = 0x8,
	NAV_MESH_AVOID = 0x80,
	NAV_MESH_STAIRS = 0x1000,
	NAV_MESH_NO_MERGE = 0x2000,
	NAV_MESH_OBSTACLE_TOP = 0x4000,
	NAV_MESH_CLIFF = 0x8000,
	NAV_MESH_STOP = 0x10,
	NAV_MESH_RUN = 0x20,
	NAV_MESH_WALK = 0x40,
	NAV_MESH_TRANSIENT = 0x100,
	NAV_MESH_DONT_HIDE = 0x200,
	NAV_MESH_STAND = 0x400,
	NAV_MESH_NO_HOSTAGES = 0x800,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class DOTAModifierAttribute_t : uint32_t
{
	MODIFIER_ATTRIBUTE_NONE = 0x0,
	MODIFIER_ATTRIBUTE_PERMANENT = 0x1,
	MODIFIER_ATTRIBUTE_MULTIPLE = 0x2,
	MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE = 0x4,
	MODIFIER_ATTRIBUTE_AURA_PRIORITY = 0x8,
	MODIFIER_ATTRIBUTE_KEEP_ON_DEATH = 0x10,
	MODIFIER_ATTRIBUTE_PERSISTS_COMBAT_END = 0x20,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class WeaponProficiency_t : uint32_t
{
	WEAPON_PROFICIENCY_POOR = 0x0,
	WEAPON_PROFICIENCY_AVERAGE = 0x1,
	WEAPON_PROFICIENCY_GOOD = 0x2,
	WEAPON_PROFICIENCY_VERY_GOOD = 0x3,
	WEAPON_PROFICIENCY_PERFECT = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class TOGGLE_STATE : uint32_t
{
	TS_AT_TOP = 0x0,
	TS_AT_BOTTOM = 0x1,
	TS_GOING_UP = 0x2,
	TS_GOING_DOWN = 0x3,
	DOOR_OPEN = 0x0,
	DOOR_CLOSED = 0x1,
	DOOR_OPENING = 0x2,
	DOOR_CLOSING = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 13
// Alignment: 1
// Size: 0x1
enum class RenderMode_t : uint8_t
{
	kRenderNormal = 0x0,
	kRenderTransColor = 0x1,
	kRenderTransTexture = 0x2,
	kRenderGlow = 0x3,
	kRenderTransAlpha = 0x4,
	kRenderTransAdd = 0x5,
	kRenderEnvironmental = 0x6,
	kRenderTransAddFrameBlend = 0x7,
	kRenderTransAlphaAdd = 0x8,
	kRenderWorldGlow = 0x9,
	kRenderNone = 0xa,
	kRenderDevVisualizer = 0xb,
	kRenderModeCount = 0xc,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class DamageCategory_t : uint32_t
{
	DAC_DAMAGE_CATEGORY_SPELL = 0x0,
	DAC_DAMAGE_CATEGORY_ATTACK = 0x1,
	DAC_DAMAGE_CATEGORY_ITEM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class Touch_t : uint32_t
{
	touch_none = 0x0,
	touch_player_only = 0x1,
	touch_npc_only = 0x2,
	touch_player_or_npc = 0x3,
	touch_player_or_npc_or_physicsprop = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ABILITY_TYPES : uint32_t
{
	ABILITY_TYPE_BASIC = 0x0,
	ABILITY_TYPE_ULTIMATE = 0x1,
	ABILITY_TYPE_ATTRIBUTES = 0x2,
	ABILITY_TYPE_HIDDEN = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class modifierpriority : uint32_t
{
	MODIFIER_PRIORITY_LOW = 0x0,
	MODIFIER_PRIORITY_NORMAL = 0x1,
	MODIFIER_PRIORITY_HIGH = 0x2,
	MODIFIER_PRIORITY_ULTRA = 0x3,
	MODIFIER_PRIORITY_SUPER_ULTRA = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class PrecipitationType_t : uint32_t
{
	PRECIPITATION_TYPE_PARTICLERAIN = 0x4,
	PRECIPITATION_TYPE_PARTICLEASH = 0x5,
	PRECIPITATION_TYPE_PARTICLERAINSTORM = 0x6,
	PRECIPITATION_TYPE_PARTICLEBUGS = 0x7,
	PRECIPITATION_TYPE_PARTICLESMOKE = 0x8,
	PRECIPITATION_TYPE_PARTICLESNOW = 0x9,
	PRECIPITATION_TYPE_PARTICLEXENSPORES = 0xa,
	PRECIPITATION_TYPE_DUSTMOTES = 0xb,
	PRECIPITATION_TYPE_PARTICLEFLYINGEMBER = 0xc,
	PRECIPITATION_TYPE_PARTICLEGROUNDFOG = 0xd,
	NUM_PRECIPITATION_TYPES = 0xe,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class interactions_t : uint32_t
{
	INTERACTION_NONE = 0xffffffffffffffff,
	NUM_HAND_INTERACTIONS = 0x0,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	CLASS_BULLSEYE = 0x3,
	LAST_SHARED_ENTITY_CLASS = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class Materials : uint32_t
{
	matGlass = 0x0,
	matWood = 0x1,
	matMetal = 0x2,
	matFlesh = 0x3,
	matCinderBlock = 0x4,
	matCeilingTile = 0x5,
	matComputer = 0x6,
	matUnbreakableGlass = 0x7,
	matRocks = 0x8,
	matWeb = 0x9,
	matNone = 0xa,
	matLastMaterial = 0xb,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class NetChannelBufType_t : uint32_t
{
	BUF_DEFAULT = 0xffffffffffffffff,
	BUF_UNRELIABLE = 0x0,
	BUF_RELIABLE = 0x1,
	BUF_VOICE = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class DamageOptions_t : uint8_t
{
	DAMAGE_NO = 0x0,
	DAMAGE_EVENTS_ONLY = 0x1,
	DAMAGE_YES = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class WorldTextAttachmentType_t : uint32_t
{
	ATTACHED_NONE = 0x0,
	ATTACHED_PRIMARY_HAND = 0x1,
	ATTACHED_OFF_HAND = 0x2,
	ATTACHED_ENTITY = 0x3,
	ATTACHED_HMD = 0x4,
	ATTACHED_ENTITY_LARGE = 0x5,
	ATTACHED_HAND_SPECIFIED_IN_EVENT = 0x6,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ScreenEffectType_t : uint32_t
{
	SCREENEFFECT_EP2_ADVISOR_STUN = 0x0,
	SCREENEFFECT_EP1_INTRO = 0x1,
	SCREENEFFECT_EP2_GROGGY = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class PoseController_FModType_t : uint32_t
{
	POSECONTROLLER_FMODTYPE_NONE = 0x0,
	POSECONTROLLER_FMODTYPE_SINE = 0x1,
	POSECONTROLLER_FMODTYPE_SQUARE = 0x2,
	POSECONTROLLER_FMODTYPE_TRIANGLE = 0x3,
	POSECONTROLLER_FMODTYPE_SAWTOOTH = 0x4,
	POSECONTROLLER_FMODTYPE_NOISE = 0x5,
	POSECONTROLLER_FMODTYPE_TOTAL = 0x6,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ShatterSurface_t : uint32_t
{
	SHATTERSURFACE_GLASS = 0x0,
	SHATTERSURFACE_TILE = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 1029
// Alignment: 4
// Size: 0x4
enum class BaseActivity_t : uint32_t
{
	ACT_RESET = 0x0,
	ACT_IDLE = 0x1,
	ACT_TRANSITION = 0x2,
	ACT_COVER = 0x3,
	ACT_COVER_MED = 0x4,
	ACT_COVER_LOW = 0x5,
	ACT_WALK = 0x6,
	ACT_WALK_AIM = 0x7,
	ACT_WALK_CROUCH = 0x8,
	ACT_WALK_CROUCH_AIM = 0x9,
	ACT_RUN = 0xa,
	ACT_RUN_AIM = 0xb,
	ACT_RUN_CROUCH = 0xc,
	ACT_RUN_CROUCH_AIM = 0xd,
	ACT_RUN_PROTECTED = 0xe,
	ACT_SCRIPT_CUSTOM_MOVE = 0xf,
	ACT_RANGE_ATTACK1 = 0x10,
	ACT_RANGE_ATTACK2 = 0x11,
	ACT_RANGE_ATTACK1_LOW = 0x12,
	ACT_RANGE_ATTACK2_LOW = 0x13,
	ACT_DIESIMPLE = 0x14,
	ACT_DIEBACKWARD = 0x15,
	ACT_DIEFORWARD = 0x16,
	ACT_DIEVIOLENT = 0x17,
	ACT_DIERAGDOLL = 0x18,
	ACT_FLY = 0x19,
	ACT_HOVER = 0x1a,
	ACT_GLIDE = 0x1b,
	ACT_SWIM = 0x1c,
	ACT_JUMP = 0x1d,
	ACT_HOP = 0x1e,
	ACT_LEAP = 0x1f,
	ACT_LAND = 0x20,
	ACT_CLIMB_UP = 0x21,
	ACT_CLIMB_DOWN = 0x22,
	ACT_CLIMB_DISMOUNT = 0x23,
	ACT_SHIPLADDER_UP = 0x24,
	ACT_SHIPLADDER_DOWN = 0x25,
	ACT_STRAFE_LEFT = 0x26,
	ACT_STRAFE_RIGHT = 0x27,
	ACT_ROLL_LEFT = 0x28,
	ACT_ROLL_RIGHT = 0x29,
	ACT_TURN_LEFT = 0x2a,
	ACT_TURN_RIGHT = 0x2b,
	ACT_CROUCH = 0x2c,
	ACT_CROUCHIDLE = 0x2d,
	ACT_STAND = 0x2e,
	ACT_USE = 0x2f,
	ACT_ALIEN_BURROW_IDLE = 0x30,
	ACT_ALIEN_BURROW_OUT = 0x31,
	ACT_SIGNAL1 = 0x32,
	ACT_SIGNAL2 = 0x33,
	ACT_SIGNAL3 = 0x34,
	ACT_SIGNAL_ADVANCE = 0x35,
	ACT_SIGNAL_FORWARD = 0x36,
	ACT_SIGNAL_GROUP = 0x37,
	ACT_SIGNAL_HALT = 0x38,
	ACT_SIGNAL_LEFT = 0x39,
	ACT_SIGNAL_RIGHT = 0x3a,
	ACT_SIGNAL_TAKECOVER = 0x3b,
	ACT_LOOKBACK_RIGHT = 0x3c,
	ACT_LOOKBACK_LEFT = 0x3d,
	ACT_COWER = 0x3e,
	ACT_SMALL_FLINCH = 0x3f,
	ACT_BIG_FLINCH = 0x40,
	ACT_MELEE_ATTACK1 = 0x41,
	ACT_MELEE_ATTACK2 = 0x42,
	ACT_RELOAD = 0x43,
	ACT_RELOAD_START = 0x44,
	ACT_RELOAD_FINISH = 0x45,
	ACT_RELOAD_LOW = 0x46,
	ACT_ARM = 0x47,
	ACT_DISARM = 0x48,
	ACT_DROP_WEAPON = 0x49,
	ACT_DROP_WEAPON_SHOTGUN = 0x4a,
	ACT_PICKUP_GROUND = 0x4b,
	ACT_PICKUP_RACK = 0x4c,
	ACT_IDLE_ANGRY = 0x4d,
	ACT_IDLE_RELAXED = 0x4e,
	ACT_IDLE_STIMULATED = 0x4f,
	ACT_IDLE_AGITATED = 0x50,
	ACT_IDLE_STEALTH = 0x51,
	ACT_IDLE_HURT = 0x52,
	ACT_WALK_RELAXED = 0x53,
	ACT_WALK_STIMULATED = 0x54,
	ACT_WALK_AGITATED = 0x55,
	ACT_WALK_STEALTH = 0x56,
	ACT_RUN_RELAXED = 0x57,
	ACT_RUN_STIMULATED = 0x58,
	ACT_RUN_AGITATED = 0x59,
	ACT_RUN_STEALTH = 0x5a,
	ACT_IDLE_AIM_RELAXED = 0x5b,
	ACT_IDLE_AIM_STIMULATED = 0x5c,
	ACT_IDLE_AIM_AGITATED = 0x5d,
	ACT_IDLE_AIM_STEALTH = 0x5e,
	ACT_WALK_AIM_RELAXED = 0x5f,
	ACT_WALK_AIM_STIMULATED = 0x60,
	ACT_WALK_AIM_AGITATED = 0x61,
	ACT_WALK_AIM_STEALTH = 0x62,
	ACT_RUN_AIM_RELAXED = 0x63,
	ACT_RUN_AIM_STIMULATED = 0x64,
	ACT_RUN_AIM_AGITATED = 0x65,
	ACT_RUN_AIM_STEALTH = 0x66,
	ACT_CROUCHIDLE_STIMULATED = 0x67,
	ACT_CROUCHIDLE_AIM_STIMULATED = 0x68,
	ACT_CROUCHIDLE_AGITATED = 0x69,
	ACT_WALK_HURT = 0x6a,
	ACT_RUN_HURT = 0x6b,
	ACT_SPECIAL_ATTACK1 = 0x6c,
	ACT_SPECIAL_ATTACK2 = 0x6d,
	ACT_COMBAT_IDLE = 0x6e,
	ACT_WALK_SCARED = 0x6f,
	ACT_RUN_SCARED = 0x70,
	ACT_VICTORY_DANCE = 0x71,
	ACT_DIE_HEADSHOT = 0x72,
	ACT_DIE_CHESTSHOT = 0x73,
	ACT_DIE_GUTSHOT = 0x74,
	ACT_DIE_BACKSHOT = 0x75,
	ACT_FLINCH_HEAD = 0x76,
	ACT_FLINCH_CHEST = 0x77,
	ACT_FLINCH_STOMACH = 0x78,
	ACT_FLINCH_LEFTARM = 0x79,
	ACT_FLINCH_RIGHTARM = 0x7a,
	ACT_FLINCH_LEFTLEG = 0x7b,
	ACT_FLINCH_RIGHTLEG = 0x7c,
	ACT_FLINCH_PHYSICS = 0x7d,
	ACT_FLINCH_HEAD_BACK = 0x7e,
	ACT_FLINCH_CHEST_BACK = 0x7f,
	ACT_FLINCH_STOMACH_BACK = 0x80,
	ACT_FLINCH_CROUCH_FRONT = 0x81,
	ACT_FLINCH_CROUCH_BACK = 0x82,
	ACT_FLINCH_CROUCH_LEFT = 0x83,
	ACT_FLINCH_CROUCH_RIGHT = 0x84,
	ACT_IDLE_ON_FIRE = 0x85,
	ACT_WALK_ON_FIRE = 0x86,
	ACT_RUN_ON_FIRE = 0x87,
	ACT_RAPPEL_LOOP = 0x88,
	ACT_180_LEFT = 0x89,
	ACT_180_RIGHT = 0x8a,
	ACT_90_LEFT = 0x8b,
	ACT_90_RIGHT = 0x8c,
	ACT_STEP_LEFT = 0x8d,
	ACT_STEP_RIGHT = 0x8e,
	ACT_STEP_BACK = 0x8f,
	ACT_STEP_FORE = 0x90,
	ACT_GESTURE_RANGE_ATTACK1 = 0x91,
	ACT_GESTURE_RANGE_ATTACK2 = 0x92,
	ACT_GESTURE_MELEE_ATTACK1 = 0x93,
	ACT_GESTURE_MELEE_ATTACK2 = 0x94,
	ACT_GESTURE_RANGE_ATTACK1_LOW = 0x95,
	ACT_GESTURE_RANGE_ATTACK2_LOW = 0x96,
	ACT_MELEE_ATTACK_SWING_GESTURE = 0x97,
	ACT_GESTURE_SMALL_FLINCH = 0x98,
	ACT_GESTURE_BIG_FLINCH = 0x99,
	ACT_GESTURE_FLINCH_BLAST = 0x9a,
	ACT_GESTURE_FLINCH_BLAST_SHOTGUN = 0x9b,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED = 0x9c,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED_SHOTGUN = 0x9d,
	ACT_GESTURE_FLINCH_HEAD = 0x9e,
	ACT_GESTURE_FLINCH_CHEST = 0x9f,
	ACT_GESTURE_FLINCH_STOMACH = 0xa0,
	ACT_GESTURE_FLINCH_LEFTARM = 0xa1,
	ACT_GESTURE_FLINCH_RIGHTARM = 0xa2,
	ACT_GESTURE_FLINCH_LEFTLEG = 0xa3,
	ACT_GESTURE_FLINCH_RIGHTLEG = 0xa4,
	ACT_GESTURE_TURN_LEFT = 0xa5,
	ACT_GESTURE_TURN_RIGHT = 0xa6,
	ACT_GESTURE_TURN_LEFT45 = 0xa7,
	ACT_GESTURE_TURN_RIGHT45 = 0xa8,
	ACT_GESTURE_TURN_LEFT90 = 0xa9,
	ACT_GESTURE_TURN_RIGHT90 = 0xaa,
	ACT_GESTURE_TURN_LEFT45_FLAT = 0xab,
	ACT_GESTURE_TURN_RIGHT45_FLAT = 0xac,
	ACT_GESTURE_TURN_LEFT90_FLAT = 0xad,
	ACT_GESTURE_TURN_RIGHT90_FLAT = 0xae,
	ACT_BARNACLE_HIT = 0xaf,
	ACT_BARNACLE_PULL = 0xb0,
	ACT_BARNACLE_CHOMP = 0xb1,
	ACT_BARNACLE_CHEW = 0xb2,
	ACT_DO_NOT_DISTURB = 0xb3,
	ACT_SPECIFIC_SEQUENCE = 0xb4,
	ACT_VM_DEPLOY = 0xb5,
	ACT_VM_RELOAD_EMPTY = 0xb6,
	ACT_VM_DRAW = 0xb7,
	ACT_VM_HOLSTER = 0xb8,
	ACT_VM_IDLE = 0xb9,
	ACT_VM_FIDGET = 0xba,
	ACT_VM_PULLBACK = 0xbb,
	ACT_VM_PULLBACK_HIGH = 0xbc,
	ACT_VM_PULLBACK_LOW = 0xbd,
	ACT_VM_THROW = 0xbe,
	ACT_VM_DROP = 0xbf,
	ACT_VM_PULLPIN = 0xc0,
	ACT_VM_PRIMARYATTACK = 0xc1,
	ACT_VM_SECONDARYATTACK = 0xc2,
	ACT_VM_RELOAD = 0xc3,
	ACT_VM_DRYFIRE = 0xc4,
	ACT_VM_HITLEFT = 0xc5,
	ACT_VM_HITLEFT2 = 0xc6,
	ACT_VM_HITRIGHT = 0xc7,
	ACT_VM_HITRIGHT2 = 0xc8,
	ACT_VM_HITCENTER = 0xc9,
	ACT_VM_HITCENTER2 = 0xca,
	ACT_VM_MISSLEFT = 0xcb,
	ACT_VM_MISSLEFT2 = 0xcc,
	ACT_VM_MISSRIGHT = 0xcd,
	ACT_VM_MISSRIGHT2 = 0xce,
	ACT_VM_MISSCENTER = 0xcf,
	ACT_VM_MISSCENTER2 = 0xd0,
	ACT_VM_HAULBACK = 0xd1,
	ACT_VM_SWINGHARD = 0xd2,
	ACT_VM_SWINGMISS = 0xd3,
	ACT_VM_SWINGHIT = 0xd4,
	ACT_VM_IDLE_TO_LOWERED = 0xd5,
	ACT_VM_IDLE_LOWERED = 0xd6,
	ACT_VM_LOWERED_TO_IDLE = 0xd7,
	ACT_VM_RECOIL1 = 0xd8,
	ACT_VM_RECOIL2 = 0xd9,
	ACT_VM_RECOIL3 = 0xda,
	ACT_VM_PICKUP = 0xdb,
	ACT_VM_RELEASE = 0xdc,
	ACT_VM_MAUL_LOOP = 0xdd,
	ACT_VM_ATTACH_SILENCER = 0xde,
	ACT_VM_DETACH_SILENCER = 0xdf,
	ACT_SLAM_STICKWALL_IDLE = 0xe0,
	ACT_SLAM_STICKWALL_ND_IDLE = 0xe1,
	ACT_SLAM_STICKWALL_ATTACH = 0xe2,
	ACT_SLAM_STICKWALL_ATTACH2 = 0xe3,
	ACT_SLAM_STICKWALL_ND_ATTACH = 0xe4,
	ACT_SLAM_STICKWALL_ND_ATTACH2 = 0xe5,
	ACT_SLAM_STICKWALL_DETONATE = 0xe6,
	ACT_SLAM_STICKWALL_DETONATOR_HOLSTER = 0xe7,
	ACT_SLAM_STICKWALL_DRAW = 0xe8,
	ACT_SLAM_STICKWALL_ND_DRAW = 0xe9,
	ACT_SLAM_STICKWALL_TO_THROW = 0xea,
	ACT_SLAM_STICKWALL_TO_THROW_ND = 0xeb,
	ACT_SLAM_STICKWALL_TO_TRIPMINE_ND = 0xec,
	ACT_SLAM_THROW_IDLE = 0xed,
	ACT_SLAM_THROW_ND_IDLE = 0xee,
	ACT_SLAM_THROW_THROW = 0xef,
	ACT_SLAM_THROW_THROW2 = 0xf0,
	ACT_SLAM_THROW_THROW_ND = 0xf1,
	ACT_SLAM_THROW_THROW_ND2 = 0xf2,
	ACT_SLAM_THROW_DRAW = 0xf3,
	ACT_SLAM_THROW_ND_DRAW = 0xf4,
	ACT_SLAM_THROW_TO_STICKWALL = 0xf5,
	ACT_SLAM_THROW_TO_STICKWALL_ND = 0xf6,
	ACT_SLAM_THROW_DETONATE = 0xf7,
	ACT_SLAM_THROW_DETONATOR_HOLSTER = 0xf8,
	ACT_SLAM_THROW_TO_TRIPMINE_ND = 0xf9,
	ACT_SLAM_TRIPMINE_IDLE = 0xfa,
	ACT_SLAM_TRIPMINE_DRAW = 0xfb,
	ACT_SLAM_TRIPMINE_ATTACH = 0xfc,
	ACT_SLAM_TRIPMINE_ATTACH2 = 0xfd,
	ACT_SLAM_TRIPMINE_TO_STICKWALL_ND = 0xfe,
	ACT_SLAM_TRIPMINE_TO_THROW_ND = 0xff,
	ACT_SLAM_DETONATOR_IDLE = 0x100,
	ACT_SLAM_DETONATOR_DRAW = 0x101,
	ACT_SLAM_DETONATOR_DETONATE = 0x102,
	ACT_SLAM_DETONATOR_HOLSTER = 0x103,
	ACT_SLAM_DETONATOR_STICKWALL_DRAW = 0x104,
	ACT_SLAM_DETONATOR_THROW_DRAW = 0x105,
	ACT_SHOTGUN_RELOAD_START = 0x106,
	ACT_SHOTGUN_RELOAD_FINISH = 0x107,
	ACT_SHOTGUN_PUMP = 0x108,
	ACT_SMG2_IDLE2 = 0x109,
	ACT_SMG2_FIRE2 = 0x10a,
	ACT_SMG2_DRAW2 = 0x10b,
	ACT_SMG2_RELOAD2 = 0x10c,
	ACT_SMG2_DRYFIRE2 = 0x10d,
	ACT_SMG2_TOAUTO = 0x10e,
	ACT_SMG2_TOBURST = 0x10f,
	ACT_PHYSCANNON_UPGRADE = 0x110,
	ACT_RANGE_ATTACK_AR1 = 0x111,
	ACT_RANGE_ATTACK_AR2 = 0x112,
	ACT_RANGE_ATTACK_AR2_LOW = 0x113,
	ACT_RANGE_ATTACK_AR2_GRENADE = 0x114,
	ACT_RANGE_ATTACK_HMG1 = 0x115,
	ACT_RANGE_ATTACK_ML = 0x116,
	ACT_RANGE_ATTACK_SMG1 = 0x117,
	ACT_RANGE_ATTACK_SMG1_LOW = 0x118,
	ACT_RANGE_ATTACK_SMG2 = 0x119,
	ACT_RANGE_ATTACK_SHOTGUN = 0x11a,
	ACT_RANGE_ATTACK_SHOTGUN_LOW = 0x11b,
	ACT_RANGE_ATTACK_PISTOL = 0x11c,
	ACT_RANGE_ATTACK_PISTOL_LOW = 0x11d,
	ACT_RANGE_ATTACK_SLAM = 0x11e,
	ACT_RANGE_ATTACK_TRIPWIRE = 0x11f,
	ACT_RANGE_ATTACK_THROW = 0x120,
	ACT_RANGE_ATTACK_SNIPER_RIFLE = 0x121,
	ACT_RANGE_ATTACK_RPG = 0x122,
	ACT_MELEE_ATTACK_SWING = 0x123,
	ACT_RANGE_AIM_LOW = 0x124,
	ACT_RANGE_AIM_SMG1_LOW = 0x125,
	ACT_RANGE_AIM_PISTOL_LOW = 0x126,
	ACT_RANGE_AIM_AR2_LOW = 0x127,
	ACT_COVER_PISTOL_LOW = 0x128,
	ACT_COVER_SMG1_LOW = 0x129,
	ACT_GESTURE_RANGE_ATTACK_AR1 = 0x12a,
	ACT_GESTURE_RANGE_ATTACK_AR2 = 0x12b,
	ACT_GESTURE_RANGE_ATTACK_AR2_GRENADE = 0x12c,
	ACT_GESTURE_RANGE_ATTACK_HMG1 = 0x12d,
	ACT_GESTURE_RANGE_ATTACK_ML = 0x12e,
	ACT_GESTURE_RANGE_ATTACK_SMG1 = 0x12f,
	ACT_GESTURE_RANGE_ATTACK_SMG1_LOW = 0x130,
	ACT_GESTURE_RANGE_ATTACK_SMG2 = 0x131,
	ACT_GESTURE_RANGE_ATTACK_SHOTGUN = 0x132,
	ACT_GESTURE_RANGE_ATTACK_PISTOL = 0x133,
	ACT_GESTURE_RANGE_ATTACK_PISTOL_LOW = 0x134,
	ACT_GESTURE_RANGE_ATTACK_SLAM = 0x135,
	ACT_GESTURE_RANGE_ATTACK_TRIPWIRE = 0x136,
	ACT_GESTURE_RANGE_ATTACK_THROW = 0x137,
	ACT_GESTURE_RANGE_ATTACK_SNIPER_RIFLE = 0x138,
	ACT_GESTURE_MELEE_ATTACK_SWING = 0x139,
	ACT_IDLE_RIFLE = 0x13a,
	ACT_IDLE_SMG1 = 0x13b,
	ACT_IDLE_ANGRY_SMG1 = 0x13c,
	ACT_IDLE_PISTOL = 0x13d,
	ACT_IDLE_ANGRY_PISTOL = 0x13e,
	ACT_IDLE_ANGRY_SHOTGUN = 0x13f,
	ACT_IDLE_STEALTH_PISTOL = 0x140,
	ACT_IDLE_PACKAGE = 0x141,
	ACT_WALK_PACKAGE = 0x142,
	ACT_IDLE_SUITCASE = 0x143,
	ACT_WALK_SUITCASE = 0x144,
	ACT_IDLE_SMG1_RELAXED = 0x145,
	ACT_IDLE_SMG1_STIMULATED = 0x146,
	ACT_WALK_RIFLE_RELAXED = 0x147,
	ACT_RUN_RIFLE_RELAXED = 0x148,
	ACT_WALK_RIFLE_STIMULATED = 0x149,
	ACT_RUN_RIFLE_STIMULATED = 0x14a,
	ACT_IDLE_AIM_RIFLE_STIMULATED = 0x14b,
	ACT_WALK_AIM_RIFLE_STIMULATED = 0x14c,
	ACT_RUN_AIM_RIFLE_STIMULATED = 0x14d,
	ACT_IDLE_SHOTGUN_RELAXED = 0x14e,
	ACT_IDLE_SHOTGUN_STIMULATED = 0x14f,
	ACT_IDLE_SHOTGUN_AGITATED = 0x150,
	ACT_WALK_ANGRY = 0x151,
	ACT_POLICE_HARASS1 = 0x152,
	ACT_POLICE_HARASS2 = 0x153,
	ACT_IDLE_MANNEDGUN = 0x154,
	ACT_IDLE_MELEE = 0x155,
	ACT_IDLE_ANGRY_MELEE = 0x156,
	ACT_IDLE_RPG_RELAXED = 0x157,
	ACT_IDLE_RPG = 0x158,
	ACT_IDLE_ANGRY_RPG = 0x159,
	ACT_COVER_LOW_RPG = 0x15a,
	ACT_WALK_RPG = 0x15b,
	ACT_RUN_RPG = 0x15c,
	ACT_WALK_CROUCH_RPG = 0x15d,
	ACT_RUN_CROUCH_RPG = 0x15e,
	ACT_WALK_RPG_RELAXED = 0x15f,
	ACT_RUN_RPG_RELAXED = 0x160,
	ACT_WALK_RIFLE = 0x161,
	ACT_WALK_AIM_RIFLE = 0x162,
	ACT_WALK_CROUCH_RIFLE = 0x163,
	ACT_WALK_CROUCH_AIM_RIFLE = 0x164,
	ACT_RUN_RIFLE = 0x165,
	ACT_RUN_AIM_RIFLE = 0x166,
	ACT_RUN_CROUCH_RIFLE = 0x167,
	ACT_RUN_CROUCH_AIM_RIFLE = 0x168,
	ACT_RUN_STEALTH_PISTOL = 0x169,
	ACT_WALK_AIM_SHOTGUN = 0x16a,
	ACT_RUN_AIM_SHOTGUN = 0x16b,
	ACT_WALK_PISTOL = 0x16c,
	ACT_RUN_PISTOL = 0x16d,
	ACT_WALK_AIM_PISTOL = 0x16e,
	ACT_RUN_AIM_PISTOL = 0x16f,
	ACT_WALK_STEALTH_PISTOL = 0x170,
	ACT_WALK_AIM_STEALTH_PISTOL = 0x171,
	ACT_RUN_AIM_STEALTH_PISTOL = 0x172,
	ACT_RELOAD_PISTOL = 0x173,
	ACT_RELOAD_PISTOL_LOW = 0x174,
	ACT_RELOAD_SMG1 = 0x175,
	ACT_RELOAD_SMG1_LOW = 0x176,
	ACT_RELOAD_SHOTGUN = 0x177,
	ACT_RELOAD_SHOTGUN_LOW = 0x178,
	ACT_GESTURE_RELOAD = 0x179,
	ACT_GESTURE_RELOAD_PISTOL = 0x17a,
	ACT_GESTURE_RELOAD_SMG1 = 0x17b,
	ACT_GESTURE_RELOAD_SHOTGUN = 0x17c,
	ACT_BUSY_LEAN_LEFT = 0x17d,
	ACT_BUSY_LEAN_LEFT_ENTRY = 0x17e,
	ACT_BUSY_LEAN_LEFT_EXIT = 0x17f,
	ACT_BUSY_LEAN_BACK = 0x180,
	ACT_BUSY_LEAN_BACK_ENTRY = 0x181,
	ACT_BUSY_LEAN_BACK_EXIT = 0x182,
	ACT_BUSY_SIT_GROUND = 0x183,
	ACT_BUSY_SIT_GROUND_ENTRY = 0x184,
	ACT_BUSY_SIT_GROUND_EXIT = 0x185,
	ACT_BUSY_SIT_CHAIR = 0x186,
	ACT_BUSY_SIT_CHAIR_ENTRY = 0x187,
	ACT_BUSY_SIT_CHAIR_EXIT = 0x188,
	ACT_BUSY_STAND = 0x189,
	ACT_BUSY_QUEUE = 0x18a,
	ACT_DUCK_DODGE = 0x18b,
	ACT_DIE_BARNACLE_SWALLOW = 0x18c,
	ACT_GESTURE_BARNACLE_STRANGLE = 0x18d,
	ACT_PHYSCANNON_DETACH = 0x18e,
	ACT_PHYSCANNON_ANIMATE = 0x18f,
	ACT_PHYSCANNON_ANIMATE_PRE = 0x190,
	ACT_PHYSCANNON_ANIMATE_POST = 0x191,
	ACT_DIE_FRONTSIDE = 0x192,
	ACT_DIE_RIGHTSIDE = 0x193,
	ACT_DIE_BACKSIDE = 0x194,
	ACT_DIE_LEFTSIDE = 0x195,
	ACT_DIE_CROUCH_FRONTSIDE = 0x196,
	ACT_DIE_CROUCH_RIGHTSIDE = 0x197,
	ACT_DIE_CROUCH_BACKSIDE = 0x198,
	ACT_DIE_CROUCH_LEFTSIDE = 0x199,
	ACT_DIE_INCAP = 0x19a,
	ACT_DIE_STANDING = 0x19b,
	ACT_OPEN_DOOR = 0x19c,
	ACT_DI_ALYX_ZOMBIE_MELEE = 0x19d,
	ACT_DI_ALYX_ZOMBIE_TORSO_MELEE = 0x19e,
	ACT_DI_ALYX_HEADCRAB_MELEE = 0x19f,
	ACT_DI_ALYX_ANTLION = 0x1a0,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN64 = 0x1a1,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN26 = 0x1a2,
	ACT_READINESS_RELAXED_TO_STIMULATED = 0x1a3,
	ACT_READINESS_RELAXED_TO_STIMULATED_WALK = 0x1a4,
	ACT_READINESS_AGITATED_TO_STIMULATED = 0x1a5,
	ACT_READINESS_STIMULATED_TO_RELAXED = 0x1a6,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED = 0x1a7,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED_WALK = 0x1a8,
	ACT_READINESS_PISTOL_AGITATED_TO_STIMULATED = 0x1a9,
	ACT_READINESS_PISTOL_STIMULATED_TO_RELAXED = 0x1aa,
	ACT_IDLE_CARRY = 0x1ab,
	ACT_WALK_CARRY = 0x1ac,
	ACT_STARTDYING = 0x1ad,
	ACT_DYINGLOOP = 0x1ae,
	ACT_DYINGTODEAD = 0x1af,
	ACT_RIDE_MANNED_GUN = 0x1b0,
	ACT_VM_SPRINT_ENTER = 0x1b1,
	ACT_VM_SPRINT_IDLE = 0x1b2,
	ACT_VM_SPRINT_LEAVE = 0x1b3,
	ACT_FIRE_START = 0x1b4,
	ACT_FIRE_LOOP = 0x1b5,
	ACT_FIRE_END = 0x1b6,
	ACT_CROUCHING_GRENADEIDLE = 0x1b7,
	ACT_CROUCHING_GRENADEREADY = 0x1b8,
	ACT_CROUCHING_PRIMARYATTACK = 0x1b9,
	ACT_OVERLAY_GRENADEIDLE = 0x1ba,
	ACT_OVERLAY_GRENADEREADY = 0x1bb,
	ACT_OVERLAY_PRIMARYATTACK = 0x1bc,
	ACT_OVERLAY_SHIELD_UP = 0x1bd,
	ACT_OVERLAY_SHIELD_DOWN = 0x1be,
	ACT_OVERLAY_SHIELD_UP_IDLE = 0x1bf,
	ACT_OVERLAY_SHIELD_ATTACK = 0x1c0,
	ACT_OVERLAY_SHIELD_KNOCKBACK = 0x1c1,
	ACT_SHIELD_UP = 0x1c2,
	ACT_SHIELD_DOWN = 0x1c3,
	ACT_SHIELD_UP_IDLE = 0x1c4,
	ACT_SHIELD_ATTACK = 0x1c5,
	ACT_SHIELD_KNOCKBACK = 0x1c6,
	ACT_CROUCHING_SHIELD_UP = 0x1c7,
	ACT_CROUCHING_SHIELD_DOWN = 0x1c8,
	ACT_CROUCHING_SHIELD_UP_IDLE = 0x1c9,
	ACT_CROUCHING_SHIELD_ATTACK = 0x1ca,
	ACT_CROUCHING_SHIELD_KNOCKBACK = 0x1cb,
	ACT_TURNRIGHT45 = 0x1cc,
	ACT_TURNLEFT45 = 0x1cd,
	ACT_TURN = 0x1ce,
	ACT_OBJ_ASSEMBLING = 0x1cf,
	ACT_OBJ_DISMANTLING = 0x1d0,
	ACT_OBJ_STARTUP = 0x1d1,
	ACT_OBJ_RUNNING = 0x1d2,
	ACT_OBJ_IDLE = 0x1d3,
	ACT_OBJ_PLACING = 0x1d4,
	ACT_OBJ_DETERIORATING = 0x1d5,
	ACT_OBJ_UPGRADING = 0x1d6,
	ACT_DEPLOY = 0x1d7,
	ACT_DEPLOY_IDLE = 0x1d8,
	ACT_UNDEPLOY = 0x1d9,
	ACT_CROSSBOW_DRAW_UNLOADED = 0x1da,
	ACT_GAUSS_SPINUP = 0x1db,
	ACT_GAUSS_SPINCYCLE = 0x1dc,
	ACT_VM_PRIMARYATTACK_SILENCED = 0x1dd,
	ACT_VM_RELOAD_SILENCED = 0x1de,
	ACT_VM_DRYFIRE_SILENCED = 0x1df,
	ACT_VM_IDLE_SILENCED = 0x1e0,
	ACT_VM_DRAW_SILENCED = 0x1e1,
	ACT_VM_IDLE_EMPTY_LEFT = 0x1e2,
	ACT_VM_DRYFIRE_LEFT = 0x1e3,
	ACT_VM_IS_DRAW = 0x1e4,
	ACT_VM_IS_HOLSTER = 0x1e5,
	ACT_VM_IS_IDLE = 0x1e6,
	ACT_VM_IS_PRIMARYATTACK = 0x1e7,
	ACT_PLAYER_IDLE_FIRE = 0x1e8,
	ACT_PLAYER_CROUCH_FIRE = 0x1e9,
	ACT_PLAYER_CROUCH_WALK_FIRE = 0x1ea,
	ACT_PLAYER_WALK_FIRE = 0x1eb,
	ACT_PLAYER_RUN_FIRE = 0x1ec,
	ACT_IDLETORUN = 0x1ed,
	ACT_RUNTOIDLE = 0x1ee,
	ACT_VM_DRAW_DEPLOYED = 0x1ef,
	ACT_HL2MP_IDLE_MELEE = 0x1f0,
	ACT_HL2MP_RUN_MELEE = 0x1f1,
	ACT_HL2MP_IDLE_CROUCH_MELEE = 0x1f2,
	ACT_HL2MP_WALK_CROUCH_MELEE = 0x1f3,
	ACT_HL2MP_GESTURE_RANGE_ATTACK_MELEE = 0x1f4,
	ACT_HL2MP_GESTURE_RELOAD_MELEE = 0x1f5,
	ACT_HL2MP_JUMP_MELEE = 0x1f6,
	ACT_MP_STAND_IDLE = 0x1f7,
	ACT_MP_CROUCH_IDLE = 0x1f8,
	ACT_MP_CROUCH_DEPLOYED_IDLE = 0x1f9,
	ACT_MP_CROUCH_DEPLOYED = 0x1fa,
	ACT_MP_DEPLOYED_IDLE = 0x1fb,
	ACT_MP_RUN = 0x1fc,
	ACT_MP_WALK = 0x1fd,
	ACT_MP_AIRWALK = 0x1fe,
	ACT_MP_CROUCHWALK = 0x1ff,
	ACT_MP_SPRINT = 0x200,
	ACT_MP_JUMP = 0x201,
	ACT_MP_JUMP_START = 0x202,
	ACT_MP_JUMP_FLOAT = 0x203,
	ACT_MP_JUMP_LAND = 0x204,
	ACT_MP_DOUBLEJUMP = 0x205,
	ACT_MP_SWIM = 0x206,
	ACT_MP_DEPLOYED = 0x207,
	ACT_MP_SWIM_DEPLOYED = 0x208,
	ACT_MP_VCD = 0x209,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE = 0x20a,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE_DEPLOYED = 0x20b,
	ACT_MP_ATTACK_STAND_SECONDARYFIRE = 0x20c,
	ACT_MP_ATTACK_STAND_GRENADE = 0x20d,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE = 0x20e,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE_DEPLOYED = 0x20f,
	ACT_MP_ATTACK_CROUCH_SECONDARYFIRE = 0x210,
	ACT_MP_ATTACK_CROUCH_GRENADE = 0x211,
	ACT_MP_ATTACK_SWIM_PRIMARYFIRE = 0x212,
	ACT_MP_ATTACK_SWIM_SECONDARYFIRE = 0x213,
	ACT_MP_ATTACK_SWIM_GRENADE = 0x214,
	ACT_MP_ATTACK_AIRWALK_PRIMARYFIRE = 0x215,
	ACT_MP_ATTACK_AIRWALK_SECONDARYFIRE = 0x216,
	ACT_MP_ATTACK_AIRWALK_GRENADE = 0x217,
	ACT_MP_RELOAD_STAND = 0x218,
	ACT_MP_RELOAD_STAND_LOOP = 0x219,
	ACT_MP_RELOAD_STAND_END = 0x21a,
	ACT_MP_RELOAD_CROUCH = 0x21b,
	ACT_MP_RELOAD_CROUCH_LOOP = 0x21c,
	ACT_MP_RELOAD_CROUCH_END = 0x21d,
	ACT_MP_RELOAD_SWIM = 0x21e,
	ACT_MP_RELOAD_SWIM_LOOP = 0x21f,
	ACT_MP_RELOAD_SWIM_END = 0x220,
	ACT_MP_RELOAD_AIRWALK = 0x221,
	ACT_MP_RELOAD_AIRWALK_LOOP = 0x222,
	ACT_MP_RELOAD_AIRWALK_END = 0x223,
	ACT_MP_ATTACK_STAND_PREFIRE = 0x224,
	ACT_MP_ATTACK_STAND_POSTFIRE = 0x225,
	ACT_MP_ATTACK_STAND_STARTFIRE = 0x226,
	ACT_MP_ATTACK_CROUCH_PREFIRE = 0x227,
	ACT_MP_ATTACK_CROUCH_POSTFIRE = 0x228,
	ACT_MP_ATTACK_SWIM_PREFIRE = 0x229,
	ACT_MP_ATTACK_SWIM_POSTFIRE = 0x22a,
	ACT_MP_STAND_PRIMARY = 0x22b,
	ACT_MP_CROUCH_PRIMARY = 0x22c,
	ACT_MP_RUN_PRIMARY = 0x22d,
	ACT_MP_WALK_PRIMARY = 0x22e,
	ACT_MP_AIRWALK_PRIMARY = 0x22f,
	ACT_MP_CROUCHWALK_PRIMARY = 0x230,
	ACT_MP_JUMP_PRIMARY = 0x231,
	ACT_MP_JUMP_START_PRIMARY = 0x232,
	ACT_MP_JUMP_FLOAT_PRIMARY = 0x233,
	ACT_MP_JUMP_LAND_PRIMARY = 0x234,
	ACT_MP_SWIM_PRIMARY = 0x235,
	ACT_MP_DEPLOYED_PRIMARY = 0x236,
	ACT_MP_SWIM_DEPLOYED_PRIMARY = 0x237,
	ACT_MP_ATTACK_STAND_PRIMARY = 0x238,
	ACT_MP_ATTACK_STAND_PRIMARY_DEPLOYED = 0x239,
	ACT_MP_ATTACK_CROUCH_PRIMARY = 0x23a,
	ACT_MP_ATTACK_CROUCH_PRIMARY_DEPLOYED = 0x23b,
	ACT_MP_ATTACK_SWIM_PRIMARY = 0x23c,
	ACT_MP_ATTACK_AIRWALK_PRIMARY = 0x23d,
	ACT_MP_RELOAD_STAND_PRIMARY = 0x23e,
	ACT_MP_RELOAD_STAND_PRIMARY_LOOP = 0x23f,
	ACT_MP_RELOAD_STAND_PRIMARY_END = 0x240,
	ACT_MP_RELOAD_CROUCH_PRIMARY = 0x241,
	ACT_MP_RELOAD_CROUCH_PRIMARY_LOOP = 0x242,
	ACT_MP_RELOAD_CROUCH_PRIMARY_END = 0x243,
	ACT_MP_RELOAD_SWIM_PRIMARY = 0x244,
	ACT_MP_RELOAD_SWIM_PRIMARY_LOOP = 0x245,
	ACT_MP_RELOAD_SWIM_PRIMARY_END = 0x246,
	ACT_MP_RELOAD_AIRWALK_PRIMARY = 0x247,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_LOOP = 0x248,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_END = 0x249,
	ACT_MP_ATTACK_STAND_GRENADE_PRIMARY = 0x24a,
	ACT_MP_ATTACK_CROUCH_GRENADE_PRIMARY = 0x24b,
	ACT_MP_ATTACK_SWIM_GRENADE_PRIMARY = 0x24c,
	ACT_MP_ATTACK_AIRWALK_GRENADE_PRIMARY = 0x24d,
	ACT_MP_STAND_SECONDARY = 0x24e,
	ACT_MP_CROUCH_SECONDARY = 0x24f,
	ACT_MP_RUN_SECONDARY = 0x250,
	ACT_MP_WALK_SECONDARY = 0x251,
	ACT_MP_AIRWALK_SECONDARY = 0x252,
	ACT_MP_CROUCHWALK_SECONDARY = 0x253,
	ACT_MP_JUMP_SECONDARY = 0x254,
	ACT_MP_JUMP_START_SECONDARY = 0x255,
	ACT_MP_JUMP_FLOAT_SECONDARY = 0x256,
	ACT_MP_JUMP_LAND_SECONDARY = 0x257,
	ACT_MP_SWIM_SECONDARY = 0x258,
	ACT_MP_ATTACK_STAND_SECONDARY = 0x259,
	ACT_MP_ATTACK_CROUCH_SECONDARY = 0x25a,
	ACT_MP_ATTACK_SWIM_SECONDARY = 0x25b,
	ACT_MP_ATTACK_AIRWALK_SECONDARY = 0x25c,
	ACT_MP_RELOAD_STAND_SECONDARY = 0x25d,
	ACT_MP_RELOAD_STAND_SECONDARY_LOOP = 0x25e,
	ACT_MP_RELOAD_STAND_SECONDARY_END = 0x25f,
	ACT_MP_RELOAD_CROUCH_SECONDARY = 0x260,
	ACT_MP_RELOAD_CROUCH_SECONDARY_LOOP = 0x261,
	ACT_MP_RELOAD_CROUCH_SECONDARY_END = 0x262,
	ACT_MP_RELOAD_SWIM_SECONDARY = 0x263,
	ACT_MP_RELOAD_SWIM_SECONDARY_LOOP = 0x264,
	ACT_MP_RELOAD_SWIM_SECONDARY_END = 0x265,
	ACT_MP_RELOAD_AIRWALK_SECONDARY = 0x266,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_LOOP = 0x267,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_END = 0x268,
	ACT_MP_ATTACK_STAND_GRENADE_SECONDARY = 0x269,
	ACT_MP_ATTACK_CROUCH_GRENADE_SECONDARY = 0x26a,
	ACT_MP_ATTACK_SWIM_GRENADE_SECONDARY = 0x26b,
	ACT_MP_ATTACK_AIRWALK_GRENADE_SECONDARY = 0x26c,
	ACT_MP_STAND_MELEE = 0x26d,
	ACT_MP_CROUCH_MELEE = 0x26e,
	ACT_MP_RUN_MELEE = 0x26f,
	ACT_MP_WALK_MELEE = 0x270,
	ACT_MP_AIRWALK_MELEE = 0x271,
	ACT_MP_CROUCHWALK_MELEE = 0x272,
	ACT_MP_JUMP_MELEE = 0x273,
	ACT_MP_JUMP_START_MELEE = 0x274,
	ACT_MP_JUMP_FLOAT_MELEE = 0x275,
	ACT_MP_JUMP_LAND_MELEE = 0x276,
	ACT_MP_SWIM_MELEE = 0x277,
	ACT_MP_ATTACK_STAND_MELEE = 0x278,
	ACT_MP_ATTACK_STAND_MELEE_SECONDARY = 0x279,
	ACT_MP_ATTACK_CROUCH_MELEE = 0x27a,
	ACT_MP_ATTACK_CROUCH_MELEE_SECONDARY = 0x27b,
	ACT_MP_ATTACK_SWIM_MELEE = 0x27c,
	ACT_MP_ATTACK_AIRWALK_MELEE = 0x27d,
	ACT_MP_ATTACK_STAND_GRENADE_MELEE = 0x27e,
	ACT_MP_ATTACK_CROUCH_GRENADE_MELEE = 0x27f,
	ACT_MP_ATTACK_SWIM_GRENADE_MELEE = 0x280,
	ACT_MP_ATTACK_AIRWALK_GRENADE_MELEE = 0x281,
	ACT_MP_STAND_ITEM1 = 0x282,
	ACT_MP_CROUCH_ITEM1 = 0x283,
	ACT_MP_RUN_ITEM1 = 0x284,
	ACT_MP_WALK_ITEM1 = 0x285,
	ACT_MP_AIRWALK_ITEM1 = 0x286,
	ACT_MP_CROUCHWALK_ITEM1 = 0x287,
	ACT_MP_JUMP_ITEM1 = 0x288,
	ACT_MP_JUMP_START_ITEM1 = 0x289,
	ACT_MP_JUMP_FLOAT_ITEM1 = 0x28a,
	ACT_MP_JUMP_LAND_ITEM1 = 0x28b,
	ACT_MP_SWIM_ITEM1 = 0x28c,
	ACT_MP_ATTACK_STAND_ITEM1 = 0x28d,
	ACT_MP_ATTACK_STAND_ITEM1_SECONDARY = 0x28e,
	ACT_MP_ATTACK_CROUCH_ITEM1 = 0x28f,
	ACT_MP_ATTACK_CROUCH_ITEM1_SECONDARY = 0x290,
	ACT_MP_ATTACK_SWIM_ITEM1 = 0x291,
	ACT_MP_ATTACK_AIRWALK_ITEM1 = 0x292,
	ACT_MP_STAND_ITEM2 = 0x293,
	ACT_MP_CROUCH_ITEM2 = 0x294,
	ACT_MP_RUN_ITEM2 = 0x295,
	ACT_MP_WALK_ITEM2 = 0x296,
	ACT_MP_AIRWALK_ITEM2 = 0x297,
	ACT_MP_CROUCHWALK_ITEM2 = 0x298,
	ACT_MP_JUMP_ITEM2 = 0x299,
	ACT_MP_JUMP_START_ITEM2 = 0x29a,
	ACT_MP_JUMP_FLOAT_ITEM2 = 0x29b,
	ACT_MP_JUMP_LAND_ITEM2 = 0x29c,
	ACT_MP_SWIM_ITEM2 = 0x29d,
	ACT_MP_ATTACK_STAND_ITEM2 = 0x29e,
	ACT_MP_ATTACK_STAND_ITEM2_SECONDARY = 0x29f,
	ACT_MP_ATTACK_CROUCH_ITEM2 = 0x2a0,
	ACT_MP_ATTACK_CROUCH_ITEM2_SECONDARY = 0x2a1,
	ACT_MP_ATTACK_SWIM_ITEM2 = 0x2a2,
	ACT_MP_ATTACK_AIRWALK_ITEM2 = 0x2a3,
	ACT_MP_GESTURE_FLINCH = 0x2a4,
	ACT_MP_GESTURE_FLINCH_PRIMARY = 0x2a5,
	ACT_MP_GESTURE_FLINCH_SECONDARY = 0x2a6,
	ACT_MP_GESTURE_FLINCH_MELEE = 0x2a7,
	ACT_MP_GESTURE_FLINCH_ITEM1 = 0x2a8,
	ACT_MP_GESTURE_FLINCH_ITEM2 = 0x2a9,
	ACT_MP_GESTURE_FLINCH_HEAD = 0x2aa,
	ACT_MP_GESTURE_FLINCH_CHEST = 0x2ab,
	ACT_MP_GESTURE_FLINCH_STOMACH = 0x2ac,
	ACT_MP_GESTURE_FLINCH_LEFTARM = 0x2ad,
	ACT_MP_GESTURE_FLINCH_RIGHTARM = 0x2ae,
	ACT_MP_GESTURE_FLINCH_LEFTLEG = 0x2af,
	ACT_MP_GESTURE_FLINCH_RIGHTLEG = 0x2b0,
	ACT_MP_GRENADE1_DRAW = 0x2b1,
	ACT_MP_GRENADE1_IDLE = 0x2b2,
	ACT_MP_GRENADE1_ATTACK = 0x2b3,
	ACT_MP_GRENADE2_DRAW = 0x2b4,
	ACT_MP_GRENADE2_IDLE = 0x2b5,
	ACT_MP_GRENADE2_ATTACK = 0x2b6,
	ACT_MP_PRIMARY_GRENADE1_DRAW = 0x2b7,
	ACT_MP_PRIMARY_GRENADE1_IDLE = 0x2b8,
	ACT_MP_PRIMARY_GRENADE1_ATTACK = 0x2b9,
	ACT_MP_PRIMARY_GRENADE2_DRAW = 0x2ba,
	ACT_MP_PRIMARY_GRENADE2_IDLE = 0x2bb,
	ACT_MP_PRIMARY_GRENADE2_ATTACK = 0x2bc,
	ACT_MP_SECONDARY_GRENADE1_DRAW = 0x2bd,
	ACT_MP_SECONDARY_GRENADE1_IDLE = 0x2be,
	ACT_MP_SECONDARY_GRENADE1_ATTACK = 0x2bf,
	ACT_MP_SECONDARY_GRENADE2_DRAW = 0x2c0,
	ACT_MP_SECONDARY_GRENADE2_IDLE = 0x2c1,
	ACT_MP_SECONDARY_GRENADE2_ATTACK = 0x2c2,
	ACT_MP_MELEE_GRENADE1_DRAW = 0x2c3,
	ACT_MP_MELEE_GRENADE1_IDLE = 0x2c4,
	ACT_MP_MELEE_GRENADE1_ATTACK = 0x2c5,
	ACT_MP_MELEE_GRENADE2_DRAW = 0x2c6,
	ACT_MP_MELEE_GRENADE2_IDLE = 0x2c7,
	ACT_MP_MELEE_GRENADE2_ATTACK = 0x2c8,
	ACT_MP_ITEM1_GRENADE1_DRAW = 0x2c9,
	ACT_MP_ITEM1_GRENADE1_IDLE = 0x2ca,
	ACT_MP_ITEM1_GRENADE1_ATTACK = 0x2cb,
	ACT_MP_ITEM1_GRENADE2_DRAW = 0x2cc,
	ACT_MP_ITEM1_GRENADE2_IDLE = 0x2cd,
	ACT_MP_ITEM1_GRENADE2_ATTACK = 0x2ce,
	ACT_MP_ITEM2_GRENADE1_DRAW = 0x2cf,
	ACT_MP_ITEM2_GRENADE1_IDLE = 0x2d0,
	ACT_MP_ITEM2_GRENADE1_ATTACK = 0x2d1,
	ACT_MP_ITEM2_GRENADE2_DRAW = 0x2d2,
	ACT_MP_ITEM2_GRENADE2_IDLE = 0x2d3,
	ACT_MP_ITEM2_GRENADE2_ATTACK = 0x2d4,
	ACT_MP_STAND_BUILDING = 0x2d5,
	ACT_MP_CROUCH_BUILDING = 0x2d6,
	ACT_MP_RUN_BUILDING = 0x2d7,
	ACT_MP_WALK_BUILDING = 0x2d8,
	ACT_MP_AIRWALK_BUILDING = 0x2d9,
	ACT_MP_CROUCHWALK_BUILDING = 0x2da,
	ACT_MP_JUMP_BUILDING = 0x2db,
	ACT_MP_JUMP_START_BUILDING = 0x2dc,
	ACT_MP_JUMP_FLOAT_BUILDING = 0x2dd,
	ACT_MP_JUMP_LAND_BUILDING = 0x2de,
	ACT_MP_SWIM_BUILDING = 0x2df,
	ACT_MP_ATTACK_STAND_BUILDING = 0x2e0,
	ACT_MP_ATTACK_CROUCH_BUILDING = 0x2e1,
	ACT_MP_ATTACK_SWIM_BUILDING = 0x2e2,
	ACT_MP_ATTACK_AIRWALK_BUILDING = 0x2e3,
	ACT_MP_ATTACK_STAND_GRENADE_BUILDING = 0x2e4,
	ACT_MP_ATTACK_CROUCH_GRENADE_BUILDING = 0x2e5,
	ACT_MP_ATTACK_SWIM_GRENADE_BUILDING = 0x2e6,
	ACT_MP_ATTACK_AIRWALK_GRENADE_BUILDING = 0x2e7,
	ACT_MP_STAND_PDA = 0x2e8,
	ACT_MP_CROUCH_PDA = 0x2e9,
	ACT_MP_RUN_PDA = 0x2ea,
	ACT_MP_WALK_PDA = 0x2eb,
	ACT_MP_AIRWALK_PDA = 0x2ec,
	ACT_MP_CROUCHWALK_PDA = 0x2ed,
	ACT_MP_JUMP_PDA = 0x2ee,
	ACT_MP_JUMP_START_PDA = 0x2ef,
	ACT_MP_JUMP_FLOAT_PDA = 0x2f0,
	ACT_MP_JUMP_LAND_PDA = 0x2f1,
	ACT_MP_SWIM_PDA = 0x2f2,
	ACT_MP_ATTACK_STAND_PDA = 0x2f3,
	ACT_MP_ATTACK_SWIM_PDA = 0x2f4,
	ACT_MP_GESTURE_VC_HANDMOUTH = 0x2f5,
	ACT_MP_GESTURE_VC_FINGERPOINT = 0x2f6,
	ACT_MP_GESTURE_VC_FISTPUMP = 0x2f7,
	ACT_MP_GESTURE_VC_THUMBSUP = 0x2f8,
	ACT_MP_GESTURE_VC_NODYES = 0x2f9,
	ACT_MP_GESTURE_VC_NODNO = 0x2fa,
	ACT_MP_GESTURE_VC_HANDMOUTH_PRIMARY = 0x2fb,
	ACT_MP_GESTURE_VC_FINGERPOINT_PRIMARY = 0x2fc,
	ACT_MP_GESTURE_VC_FISTPUMP_PRIMARY = 0x2fd,
	ACT_MP_GESTURE_VC_THUMBSUP_PRIMARY = 0x2fe,
	ACT_MP_GESTURE_VC_NODYES_PRIMARY = 0x2ff,
	ACT_MP_GESTURE_VC_NODNO_PRIMARY = 0x300,
	ACT_MP_GESTURE_VC_HANDMOUTH_SECONDARY = 0x301,
	ACT_MP_GESTURE_VC_FINGERPOINT_SECONDARY = 0x302,
	ACT_MP_GESTURE_VC_FISTPUMP_SECONDARY = 0x303,
	ACT_MP_GESTURE_VC_THUMBSUP_SECONDARY = 0x304,
	ACT_MP_GESTURE_VC_NODYES_SECONDARY = 0x305,
	ACT_MP_GESTURE_VC_NODNO_SECONDARY = 0x306,
	ACT_MP_GESTURE_VC_HANDMOUTH_MELEE = 0x307,
	ACT_MP_GESTURE_VC_FINGERPOINT_MELEE = 0x308,
	ACT_MP_GESTURE_VC_FISTPUMP_MELEE = 0x309,
	ACT_MP_GESTURE_VC_THUMBSUP_MELEE = 0x30a,
	ACT_MP_GESTURE_VC_NODYES_MELEE = 0x30b,
	ACT_MP_GESTURE_VC_NODNO_MELEE = 0x30c,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM1 = 0x30d,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM1 = 0x30e,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM1 = 0x30f,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM1 = 0x310,
	ACT_MP_GESTURE_VC_NODYES_ITEM1 = 0x311,
	ACT_MP_GESTURE_VC_NODNO_ITEM1 = 0x312,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM2 = 0x313,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM2 = 0x314,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM2 = 0x315,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM2 = 0x316,
	ACT_MP_GESTURE_VC_NODYES_ITEM2 = 0x317,
	ACT_MP_GESTURE_VC_NODNO_ITEM2 = 0x318,
	ACT_MP_GESTURE_VC_HANDMOUTH_BUILDING = 0x319,
	ACT_MP_GESTURE_VC_FINGERPOINT_BUILDING = 0x31a,
	ACT_MP_GESTURE_VC_FISTPUMP_BUILDING = 0x31b,
	ACT_MP_GESTURE_VC_THUMBSUP_BUILDING = 0x31c,
	ACT_MP_GESTURE_VC_NODYES_BUILDING = 0x31d,
	ACT_MP_GESTURE_VC_NODNO_BUILDING = 0x31e,
	ACT_MP_GESTURE_VC_HANDMOUTH_PDA = 0x31f,
	ACT_MP_GESTURE_VC_FINGERPOINT_PDA = 0x320,
	ACT_MP_GESTURE_VC_FISTPUMP_PDA = 0x321,
	ACT_MP_GESTURE_VC_THUMBSUP_PDA = 0x322,
	ACT_MP_GESTURE_VC_NODYES_PDA = 0x323,
	ACT_MP_GESTURE_VC_NODNO_PDA = 0x324,
	ACT_VM_UNUSABLE = 0x325,
	ACT_VM_UNUSABLE_TO_USABLE = 0x326,
	ACT_VM_USABLE_TO_UNUSABLE = 0x327,
	ACT_PRIMARY_VM_DRAW = 0x328,
	ACT_PRIMARY_VM_HOLSTER = 0x329,
	ACT_PRIMARY_VM_IDLE = 0x32a,
	ACT_PRIMARY_VM_PULLBACK = 0x32b,
	ACT_PRIMARY_VM_PRIMARYATTACK = 0x32c,
	ACT_PRIMARY_VM_SECONDARYATTACK = 0x32d,
	ACT_PRIMARY_VM_RELOAD = 0x32e,
	ACT_PRIMARY_VM_DRYFIRE = 0x32f,
	ACT_PRIMARY_VM_IDLE_TO_LOWERED = 0x330,
	ACT_PRIMARY_VM_IDLE_LOWERED = 0x331,
	ACT_PRIMARY_VM_LOWERED_TO_IDLE = 0x332,
	ACT_SECONDARY_VM_DRAW = 0x333,
	ACT_SECONDARY_VM_HOLSTER = 0x334,
	ACT_SECONDARY_VM_IDLE = 0x335,
	ACT_SECONDARY_VM_PULLBACK = 0x336,
	ACT_SECONDARY_VM_PRIMARYATTACK = 0x337,
	ACT_SECONDARY_VM_SECONDARYATTACK = 0x338,
	ACT_SECONDARY_VM_RELOAD = 0x339,
	ACT_SECONDARY_VM_DRYFIRE = 0x33a,
	ACT_SECONDARY_VM_IDLE_TO_LOWERED = 0x33b,
	ACT_SECONDARY_VM_IDLE_LOWERED = 0x33c,
	ACT_SECONDARY_VM_LOWERED_TO_IDLE = 0x33d,
	ACT_MELEE_VM_DRAW = 0x33e,
	ACT_MELEE_VM_HOLSTER = 0x33f,
	ACT_MELEE_VM_IDLE = 0x340,
	ACT_MELEE_VM_PULLBACK = 0x341,
	ACT_MELEE_VM_PRIMARYATTACK = 0x342,
	ACT_MELEE_VM_SECONDARYATTACK = 0x343,
	ACT_MELEE_VM_RELOAD = 0x344,
	ACT_MELEE_VM_DRYFIRE = 0x345,
	ACT_MELEE_VM_IDLE_TO_LOWERED = 0x346,
	ACT_MELEE_VM_IDLE_LOWERED = 0x347,
	ACT_MELEE_VM_LOWERED_TO_IDLE = 0x348,
	ACT_PDA_VM_DRAW = 0x349,
	ACT_PDA_VM_HOLSTER = 0x34a,
	ACT_PDA_VM_IDLE = 0x34b,
	ACT_PDA_VM_PULLBACK = 0x34c,
	ACT_PDA_VM_PRIMARYATTACK = 0x34d,
	ACT_PDA_VM_SECONDARYATTACK = 0x34e,
	ACT_PDA_VM_RELOAD = 0x34f,
	ACT_PDA_VM_DRYFIRE = 0x350,
	ACT_PDA_VM_IDLE_TO_LOWERED = 0x351,
	ACT_PDA_VM_IDLE_LOWERED = 0x352,
	ACT_PDA_VM_LOWERED_TO_IDLE = 0x353,
	ACT_ITEM1_VM_DRAW = 0x354,
	ACT_ITEM1_VM_HOLSTER = 0x355,
	ACT_ITEM1_VM_IDLE = 0x356,
	ACT_ITEM1_VM_PULLBACK = 0x357,
	ACT_ITEM1_VM_PRIMARYATTACK = 0x358,
	ACT_ITEM1_VM_SECONDARYATTACK = 0x359,
	ACT_ITEM1_VM_RELOAD = 0x35a,
	ACT_ITEM1_VM_DRYFIRE = 0x35b,
	ACT_ITEM1_VM_IDLE_TO_LOWERED = 0x35c,
	ACT_ITEM1_VM_IDLE_LOWERED = 0x35d,
	ACT_ITEM1_VM_LOWERED_TO_IDLE = 0x35e,
	ACT_ITEM2_VM_DRAW = 0x35f,
	ACT_ITEM2_VM_HOLSTER = 0x360,
	ACT_ITEM2_VM_IDLE = 0x361,
	ACT_ITEM2_VM_PULLBACK = 0x362,
	ACT_ITEM2_VM_PRIMARYATTACK = 0x363,
	ACT_ITEM2_VM_SECONDARYATTACK = 0x364,
	ACT_ITEM2_VM_RELOAD = 0x365,
	ACT_ITEM2_VM_DRYFIRE = 0x366,
	ACT_ITEM2_VM_IDLE_TO_LOWERED = 0x367,
	ACT_ITEM2_VM_IDLE_LOWERED = 0x368,
	ACT_ITEM2_VM_LOWERED_TO_IDLE = 0x369,
	ACT_RELOAD_SUCCEED = 0x36a,
	ACT_RELOAD_FAIL = 0x36b,
	ACT_WALK_AIM_AUTOGUN = 0x36c,
	ACT_RUN_AIM_AUTOGUN = 0x36d,
	ACT_IDLE_AUTOGUN = 0x36e,
	ACT_IDLE_AIM_AUTOGUN = 0x36f,
	ACT_RELOAD_AUTOGUN = 0x370,
	ACT_CROUCH_IDLE_AUTOGUN = 0x371,
	ACT_RANGE_ATTACK_AUTOGUN = 0x372,
	ACT_JUMP_AUTOGUN = 0x373,
	ACT_IDLE_AIM_PISTOL = 0x374,
	ACT_WALK_AIM_DUAL = 0x375,
	ACT_RUN_AIM_DUAL = 0x376,
	ACT_IDLE_DUAL = 0x377,
	ACT_IDLE_AIM_DUAL = 0x378,
	ACT_RELOAD_DUAL = 0x379,
	ACT_CROUCH_IDLE_DUAL = 0x37a,
	ACT_RANGE_ATTACK_DUAL = 0x37b,
	ACT_JUMP_DUAL = 0x37c,
	ACT_IDLE_AIM_SHOTGUN = 0x37d,
	ACT_CROUCH_IDLE_SHOTGUN = 0x37e,
	ACT_IDLE_AIM_RIFLE = 0x37f,
	ACT_CROUCH_IDLE_RIFLE = 0x380,
	ACT_RANGE_ATTACK_RIFLE = 0x381,
	ACT_SLEEP = 0x382,
	ACT_WAKE = 0x383,
	ACT_FLICK_LEFT = 0x384,
	ACT_FLICK_LEFT_MIDDLE = 0x385,
	ACT_FLICK_RIGHT_MIDDLE = 0x386,
	ACT_FLICK_RIGHT = 0x387,
	ACT_SPINAROUND = 0x388,
	ACT_PREP_TO_FIRE = 0x389,
	ACT_FIRE = 0x38a,
	ACT_FIRE_RECOVER = 0x38b,
	ACT_SPRAY = 0x38c,
	ACT_PREP_EXPLODE = 0x38d,
	ACT_EXPLODE = 0x38e,
	ACT_SCRIPT_CUSTOM_0 = 0x38f,
	ACT_SCRIPT_CUSTOM_1 = 0x390,
	ACT_SCRIPT_CUSTOM_2 = 0x391,
	ACT_SCRIPT_CUSTOM_3 = 0x392,
	ACT_SCRIPT_CUSTOM_4 = 0x393,
	ACT_SCRIPT_CUSTOM_5 = 0x394,
	ACT_SCRIPT_CUSTOM_6 = 0x395,
	ACT_SCRIPT_CUSTOM_7 = 0x396,
	ACT_SCRIPT_CUSTOM_8 = 0x397,
	ACT_SCRIPT_CUSTOM_9 = 0x398,
	ACT_SCRIPT_CUSTOM_10 = 0x399,
	ACT_SCRIPT_CUSTOM_11 = 0x39a,
	ACT_SCRIPT_CUSTOM_12 = 0x39b,
	ACT_SCRIPT_CUSTOM_13 = 0x39c,
	ACT_SCRIPT_CUSTOM_14 = 0x39d,
	ACT_SCRIPT_CUSTOM_15 = 0x39e,
	ACT_SCRIPT_CUSTOM_16 = 0x39f,
	ACT_SCRIPT_CUSTOM_17 = 0x3a0,
	ACT_SCRIPT_CUSTOM_18 = 0x3a1,
	ACT_SCRIPT_CUSTOM_19 = 0x3a2,
	ACT_SCRIPT_CUSTOM_20 = 0x3a3,
	ACT_SCRIPT_CUSTOM_21 = 0x3a4,
	ACT_SCRIPT_CUSTOM_22 = 0x3a5,
	ACT_SCRIPT_CUSTOM_23 = 0x3a6,
	ACT_SCRIPT_CUSTOM_24 = 0x3a7,
	ACT_SCRIPT_CUSTOM_25 = 0x3a8,
	ACT_SCRIPT_CUSTOM_26 = 0x3a9,
	ACT_SCRIPT_CUSTOM_27 = 0x3aa,
	ACT_SCRIPT_CUSTOM_28 = 0x3ab,
	ACT_SCRIPT_CUSTOM_29 = 0x3ac,
	ACT_SCRIPT_CUSTOM_30 = 0x3ad,
	ACT_SCRIPT_CUSTOM_31 = 0x3ae,
	ACT_VR_PISTOL_LAST_SHOT = 0x3af,
	ACT_VR_PISTOL_SLIDE_RELEASE = 0x3b0,
	ACT_VR_PISTOL_CLIP_OUT_CHAMBERED = 0x3b1,
	ACT_VR_PISTOL_CLIP_OUT_SLIDE_BACK = 0x3b2,
	ACT_VR_PISTOL_CLIP_IN_CHAMBERED = 0x3b3,
	ACT_VR_PISTOL_CLIP_IN_SLIDE_BACK = 0x3b4,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK = 0x3b5,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK_CLIP_READY = 0x3b6,
	ACT_RAGDOLL_RECOVERY_FRONT = 0x3b7,
	ACT_RAGDOLL_RECOVERY_BACK = 0x3b8,
	ACT_RAGDOLL_RECOVERY_LEFT = 0x3b9,
	ACT_RAGDOLL_RECOVERY_RIGHT = 0x3ba,
	ACT_GRABBITYGLOVES_GRAB = 0x3bb,
	ACT_GRABBITYGLOVES_RELEASE = 0x3bc,
	ACT_GRABBITYGLOVES_GRAB_IDLE = 0x3bd,
	ACT_GRABBITYGLOVES_ACTIVE = 0x3be,
	ACT_GRABBITYGLOVES_ACTIVE_IDLE = 0x3bf,
	ACT_GRABBITYGLOVES_DEACTIVATE = 0x3c0,
	ACT_GRABBITYGLOVES_PULL = 0x3c1,
	ACT_HEADCRAB_SMOKE_BOMB = 0x3c2,
	ACT_HEADCRAB_SPIT = 0x3c3,
	ACT_ZOMBIE_TRIP = 0x3c4,
	ACT_ZOMBIE_LUNGE = 0x3c5,
	ACT_NEUTRAL_REF_POSE = 0x3c6,
	ACT_ANTLION_SCUTTLE_FORWARD = 0x3c7,
	ACT_ANTLION_SCUTTLE_BACK = 0x3c8,
	ACT_ANTLION_SCUTTLE_LEFT = 0x3c9,
	ACT_ANTLION_SCUTTLE_RIGHT = 0x3ca,
	ACT_VR_PISTOL_EMPTY_CLIP_IN_SLIDE_BACK = 0x3cb,
	ACT_VR_SHOTGUN_IDLE = 0x3cc,
	ACT_VR_SHOTGUN_OPEN_CHAMBER = 0x3cd,
	ACT_VR_SHOTGUN_RELOAD_1 = 0x3ce,
	ACT_VR_SHOTGUN_RELOAD_2 = 0x3cf,
	ACT_VR_SHOTGUN_RELOAD_3 = 0x3d0,
	ACT_VR_SHOTGUN_CLOSE_CHAMBER = 0x3d1,
	ACT_VR_SHOTGUN_TRIGGER_SQUEEZE = 0x3d2,
	ACT_VR_SHOTGUN_SHOOT = 0x3d3,
	ACT_VR_SHOTGUN_SLIDE_BACK = 0x3d4,
	ACT_VR_SHOTGUN_SLIDE_FORWARD = 0x3d5,
	ACT_VR_PISTOL_LONG_CLIP_IN_CHAMBERED = 0x3d6,
	ACT_VR_PISTOL_LONG_CLIP_IN_SLIDE_BACK = 0x3d7,
	ACT_VR_PISTOL_BURST_TOGGLE = 0x3d8,
	ACT_VR_PISTOL_LOW_KICK = 0x3d9,
	ACT_VR_PISTOL_BURST_ATTACK = 0x3da,
	ACT_VR_SHOTGUN_GRENADE_TWIST = 0x3db,
	ACT_DIE_STAND = 0x3dc,
	ACT_DIE_STAND_HEADSHOT = 0x3dd,
	ACT_DIE_CROUCH = 0x3de,
	ACT_DIE_CROUCH_HEADSHOT = 0x3df,
	ACT_CSGO_NULL = 0x3e0,
	ACT_CSGO_DEFUSE = 0x3e1,
	ACT_CSGO_DEFUSE_WITH_KIT = 0x3e2,
	ACT_CSGO_FLASHBANG_REACTION = 0x3e3,
	ACT_CSGO_FIRE_PRIMARY = 0x3e4,
	ACT_CSGO_FIRE_PRIMARY_OPT_1 = 0x3e5,
	ACT_CSGO_FIRE_PRIMARY_OPT_2 = 0x3e6,
	ACT_CSGO_FIRE_SECONDARY = 0x3e7,
	ACT_CSGO_FIRE_SECONDARY_OPT_1 = 0x3e8,
	ACT_CSGO_FIRE_SECONDARY_OPT_2 = 0x3e9,
	ACT_CSGO_RELOAD = 0x3ea,
	ACT_CSGO_RELOAD_START = 0x3eb,
	ACT_CSGO_RELOAD_LOOP = 0x3ec,
	ACT_CSGO_RELOAD_END = 0x3ed,
	ACT_CSGO_OPERATE = 0x3ee,
	ACT_CSGO_DEPLOY = 0x3ef,
	ACT_CSGO_CATCH = 0x3f0,
	ACT_CSGO_SILENCER_DETACH = 0x3f1,
	ACT_CSGO_SILENCER_ATTACH = 0x3f2,
	ACT_CSGO_TWITCH = 0x3f3,
	ACT_CSGO_TWITCH_BUYZONE = 0x3f4,
	ACT_CSGO_PLANT_BOMB = 0x3f5,
	ACT_CSGO_IDLE_TURN_BALANCEADJUST = 0x3f6,
	ACT_CSGO_IDLE_ADJUST_STOPPEDMOVING = 0x3f7,
	ACT_CSGO_ALIVE_LOOP = 0x3f8,
	ACT_CSGO_FLINCH = 0x3f9,
	ACT_CSGO_FLINCH_HEAD = 0x3fa,
	ACT_CSGO_FLINCH_MOLOTOV = 0x3fb,
	ACT_CSGO_JUMP = 0x3fc,
	ACT_CSGO_FALL = 0x3fd,
	ACT_CSGO_CLIMB_LADDER = 0x3fe,
	ACT_CSGO_LAND_LIGHT = 0x3ff,
	ACT_CSGO_LAND_HEAVY = 0x400,
	ACT_CSGO_EXIT_LADDER_TOP = 0x401,
	ACT_CSGO_EXIT_LADDER_BOTTOM = 0x402,
	ACT_CSGO_PARACHUTE = 0x403,
	ACT_CSGO_TAUNT = 0x404,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class EDACUnderlordEquipSlot : uint32_t
{
	EDACUnderlordEquipSlot_None = 0x0,
	EDACUnderlordEquipSlot_First = 0x1,
	EDACUnderlordEquipSlot_Skin = 0x1,
	EDACUnderlordEquipSlot_VictoryDance = 0x2,
	EDACUnderlordEquipSlot_Max = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class LifeState_t : uint32_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 1
// Size: 0x1
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0x0,
	USE_BEST_COLLISION_BOUNDS = 0x1,
	USE_HITBOXES = 0x2,
	USE_SPECIFIED_BOUNDS = 0x3,
	USE_GAME_CODE = 0x4,
	USE_ROTATION_EXPANDED_BOUNDS = 0x5,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x6,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x7,
	SURROUNDING_TYPE_BIT_COUNT = 0x3,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class eLogicalHandType : uint32_t
{
	LOGICAL_HAND_TYPE_UNKNOWN = 0xffffffffffffffff,
	LOGICAL_HAND_TYPE_PRIMARY_HAND = 0x0,
	LOGICAL_HAND_TYPE_OFF_HAND = 0x1,
	LOGICAL_HAND_TYPE_COUNT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 49
// Alignment: 4
// Size: 0x4
enum class modifierstate : uint32_t
{
	MODIFIER_STATE_ROOTED = 0x0,
	MODIFIER_STATE_DISARMED = 0x1,
	MODIFIER_STATE_ATTACK_IMMUNE = 0x2,
	MODIFIER_STATE_SILENCED = 0x3,
	MODIFIER_STATE_MUTED = 0x4,
	MODIFIER_STATE_STUNNED = 0x5,
	MODIFIER_STATE_HEXED = 0x6,
	MODIFIER_STATE_INVISIBLE = 0x7,
	MODIFIER_STATE_INVULNERABLE = 0x8,
	MODIFIER_STATE_MAGIC_IMMUNE = 0x9,
	MODIFIER_STATE_PROVIDES_VISION = 0xa,
	MODIFIER_STATE_NIGHTMARED = 0xb,
	MODIFIER_STATE_BLOCK_DISABLED = 0xc,
	MODIFIER_STATE_EVADE_DISABLED = 0xd,
	MODIFIER_STATE_UNSELECTABLE = 0xe,
	MODIFIER_STATE_CANNOT_TARGET_ENEMIES = 0xf,
	MODIFIER_STATE_CANNOT_MISS = 0x10,
	MODIFIER_STATE_SPECIALLY_DENIABLE = 0x11,
	MODIFIER_STATE_FROZEN = 0x12,
	MODIFIER_STATE_COMMAND_RESTRICTED = 0x13,
	MODIFIER_STATE_NOT_ON_MINIMAP = 0x14,
	MODIFIER_STATE_LOW_ATTACK_PRIORITY = 0x15,
	MODIFIER_STATE_FLYING = 0x16,
	MODIFIER_STATE_NO_UNIT_COLLISION = 0x17,
	MODIFIER_STATE_NO_TEAM_MOVE_TO = 0x18,
	MODIFIER_STATE_NO_TEAM_SELECT = 0x19,
	MODIFIER_STATE_PASSIVES_DISABLED = 0x1a,
	MODIFIER_STATE_DOMINATED = 0x1b,
	MODIFIER_STATE_BLIND = 0x1c,
	MODIFIER_STATE_OUT_OF_GAME = 0x1d,
	MODIFIER_STATE_FAKE_ALLY = 0x1e,
	MODIFIER_STATE_FLYING_FOR_PATHING_PURPOSES_ONLY = 0x1f,
	MODIFIER_STATE_TRUESIGHT_IMMUNE = 0x20,
	MODIFIER_STATE_UNTARGETABLE = 0x21,
	MODIFIER_STATE_IGNORING_MOVE_AND_ATTACK_ORDERS = 0x22,
	MODIFIER_STATE_ALLOW_PATHING_TROUGH_TREES = 0x23,
	MODIFIER_STATE_NOT_ON_MINIMAP_FOR_ENEMIES = 0x24,
	MODIFIER_STATE_UNSLOWABLE = 0x25,
	MODIFIER_STATE_TETHERED = 0x26,
	MODIFIER_STATE_DEMON_DISABLED = 0x27,
	MODIFIER_STATE_DEMON_DISABLED_IMMUNITY = 0x28,
	MODIFIER_STATE_PREVENT_ROUND_END = 0x29,
	MODIFIER_STATE_NO_ROUND_DAMAGE = 0x2a,
	MODIFIER_STATE_ON_FIRE = 0x2b,
	MODIFIER_STATE_NO_PATHFINDING_CELL_RESERVATION = 0x2c,
	MODIFIER_STATE_NO_HEALTH_BAR = 0x2d,
	MODIFIER_STATE_NO_HYPE_DRAIN = 0x2e,
	MODIFIER_STATE_PREVENT_TEAM_WIPE = 0x2f,
	MODIFIER_STATE_LAST = 0x30,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 27
// Alignment: 4
// Size: 0x4
enum class DAC_UNIT_TARGET_FLAGS : uint32_t
{
	DAC_UNIT_TARGET_FLAG_NONE = 0x0,
	DAC_UNIT_TARGET_FLAG_RANGED_ONLY = 0x2,
	DAC_UNIT_TARGET_FLAG_MELEE_ONLY = 0x4,
	DAC_UNIT_TARGET_FLAG_DEAD = 0x8,
	DAC_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES = 0x10,
	DAC_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES = 0x20,
	DAC_UNIT_TARGET_FLAG_INVULNERABLE = 0x40,
	DAC_UNIT_TARGET_FLAG_FOW_VISIBLE = 0x80,
	DAC_UNIT_TARGET_FLAG_NO_INVIS = 0x100,
	DAC_UNIT_TARGET_FLAG_NOT_ANCIENTS = 0x200,
	DAC_UNIT_TARGET_FLAG_PLAYER_CONTROLLED = 0x400,
	DAC_UNIT_TARGET_FLAG_NOT_DOMINATED = 0x800,
	DAC_UNIT_TARGET_FLAG_NOT_SUMMONED = 0x1000,
	DAC_UNIT_TARGET_FLAG_NOT_ILLUSIONS = 0x2000,
	DAC_UNIT_TARGET_FLAG_NOT_ATTACK_IMMUNE = 0x4000,
	DAC_UNIT_TARGET_FLAG_MANA_ONLY = 0x8000,
	DAC_UNIT_TARGET_FLAG_CHECK_DISABLE_HELP = 0x10000,
	DAC_UNIT_TARGET_FLAG_NOT_CREEP_HERO = 0x20000,
	DAC_UNIT_TARGET_FLAG_OUT_OF_WORLD = 0x40000,
	DAC_UNIT_TARGET_FLAG_NOT_NIGHTMARED = 0x80000,
	DAC_UNIT_TARGET_FLAG_PREFER_ENEMIES = 0x100000,
	DAC_UNIT_TARGET_FLAG_RESPECT_OBSTRUCTIONS = 0x200000,
	DAC_UNIT_TARGET_FLAG_ON_GROUND = 0x400000,
	DAC_UNIT_TARGET_FLAG_NO_MOTION_CONTROL = 0x800000,
	DAC_UNIT_TARGET_FLAG_INCLUDE_PLACEABLE_ITEMS = 0x1000000,
	DAC_UNIT_TARGET_FLAG_NOT_UNDERLORD = 0x2000000,
	DAC_UNIT_TARGET_FLAG_ALLOW_UNTARGETABLE = 0x4000000,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 270
// Alignment: 4
// Size: 0x4
enum class GameActivity_t : uint32_t
{
	ACT_DOTA_IDLE = 0x5dc,
	ACT_DOTA_IDLE_RARE = 0x5dd,
	ACT_DOTA_RUN = 0x5de,
	ACT_DOTA_ATTACK = 0x5df,
	ACT_DOTA_ATTACK2 = 0x5e0,
	ACT_DOTA_ATTACK_EVENT = 0x5e1,
	ACT_DOTA_DIE = 0x5e2,
	ACT_DOTA_FLINCH = 0x5e3,
	ACT_DOTA_FLAIL = 0x5e4,
	ACT_DOTA_DISABLED = 0x5e5,
	ACT_DOTA_CAST_ABILITY_1 = 0x5e6,
	ACT_DOTA_CAST_ABILITY_2 = 0x5e7,
	ACT_DOTA_CAST_ABILITY_3 = 0x5e8,
	ACT_DOTA_CAST_ABILITY_4 = 0x5e9,
	ACT_DOTA_CAST_ABILITY_5 = 0x5ea,
	ACT_DOTA_CAST_ABILITY_6 = 0x5eb,
	ACT_DOTA_OVERRIDE_ABILITY_1 = 0x5ec,
	ACT_DOTA_OVERRIDE_ABILITY_2 = 0x5ed,
	ACT_DOTA_OVERRIDE_ABILITY_3 = 0x5ee,
	ACT_DOTA_OVERRIDE_ABILITY_4 = 0x5ef,
	ACT_DOTA_CHANNEL_ABILITY_1 = 0x5f0,
	ACT_DOTA_CHANNEL_ABILITY_2 = 0x5f1,
	ACT_DOTA_CHANNEL_ABILITY_3 = 0x5f2,
	ACT_DOTA_CHANNEL_ABILITY_4 = 0x5f3,
	ACT_DOTA_CHANNEL_ABILITY_5 = 0x5f4,
	ACT_DOTA_CHANNEL_ABILITY_6 = 0x5f5,
	ACT_DOTA_CHANNEL_END_ABILITY_1 = 0x5f6,
	ACT_DOTA_CHANNEL_END_ABILITY_2 = 0x5f7,
	ACT_DOTA_CHANNEL_END_ABILITY_3 = 0x5f8,
	ACT_DOTA_CHANNEL_END_ABILITY_4 = 0x5f9,
	ACT_DOTA_CHANNEL_END_ABILITY_5 = 0x5fa,
	ACT_DOTA_CHANNEL_END_ABILITY_6 = 0x5fb,
	ACT_DOTA_CONSTANT_LAYER = 0x5fc,
	ACT_DOTA_CAPTURE = 0x5fd,
	ACT_DOTA_SPAWN = 0x5fe,
	ACT_DOTA_KILLTAUNT = 0x5ff,
	ACT_DOTA_TAUNT = 0x600,
	ACT_DOTA_THIRST = 0x601,
	ACT_DOTA_CAST_DRAGONBREATH = 0x602,
	ACT_DOTA_ECHO_SLAM = 0x603,
	ACT_DOTA_CAST_ABILITY_1_END = 0x604,
	ACT_DOTA_CAST_ABILITY_2_END = 0x605,
	ACT_DOTA_CAST_ABILITY_3_END = 0x606,
	ACT_DOTA_CAST_ABILITY_4_END = 0x607,
	ACT_MIRANA_LEAP_END = 0x608,
	ACT_WAVEFORM_START = 0x609,
	ACT_WAVEFORM_END = 0x60a,
	ACT_DOTA_CAST_ABILITY_ROT = 0x60b,
	ACT_DOTA_DIE_SPECIAL = 0x60c,
	ACT_DOTA_RATTLETRAP_BATTERYASSAULT = 0x60d,
	ACT_DOTA_RATTLETRAP_POWERCOGS = 0x60e,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_START = 0x60f,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_LOOP = 0x610,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_END = 0x611,
	ACT_STORM_SPIRIT_OVERLOAD_RUN_OVERRIDE = 0x612,
	ACT_DOTA_TINKER_REARM1 = 0x613,
	ACT_DOTA_TINKER_REARM2 = 0x614,
	ACT_DOTA_TINKER_REARM3 = 0x615,
	ACT_TINY_AVALANCHE = 0x616,
	ACT_TINY_TOSS = 0x617,
	ACT_TINY_GROWL = 0x618,
	ACT_DOTA_WEAVERBUG_ATTACH = 0x619,
	ACT_DOTA_CAST_WILD_AXES_END = 0x61a,
	ACT_DOTA_CAST_LIFE_BREAK_START = 0x61b,
	ACT_DOTA_CAST_LIFE_BREAK_END = 0x61c,
	ACT_DOTA_NIGHTSTALKER_TRANSITION = 0x61d,
	ACT_DOTA_LIFESTEALER_RAGE = 0x61e,
	ACT_DOTA_LIFESTEALER_OPEN_WOUNDS = 0x61f,
	ACT_DOTA_SAND_KING_BURROW_IN = 0x620,
	ACT_DOTA_SAND_KING_BURROW_OUT = 0x621,
	ACT_DOTA_EARTHSHAKER_TOTEM_ATTACK = 0x622,
	ACT_DOTA_WHEEL_LAYER = 0x623,
	ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_START = 0x624,
	ACT_DOTA_ALCHEMIST_CONCOCTION = 0x625,
	ACT_DOTA_JAKIRO_LIQUIDFIRE_START = 0x626,
	ACT_DOTA_JAKIRO_LIQUIDFIRE_LOOP = 0x627,
	ACT_DOTA_LIFESTEALER_INFEST = 0x628,
	ACT_DOTA_LIFESTEALER_INFEST_END = 0x629,
	ACT_DOTA_LASSO_LOOP = 0x62a,
	ACT_DOTA_ALCHEMIST_CONCOCTION_THROW = 0x62b,
	ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_END = 0x62c,
	ACT_DOTA_CAST_COLD_SNAP = 0x62d,
	ACT_DOTA_CAST_GHOST_WALK = 0x62e,
	ACT_DOTA_CAST_TORNADO = 0x62f,
	ACT_DOTA_CAST_EMP = 0x630,
	ACT_DOTA_CAST_ALACRITY = 0x631,
	ACT_DOTA_CAST_CHAOS_METEOR = 0x632,
	ACT_DOTA_CAST_SUN_STRIKE = 0x633,
	ACT_DOTA_CAST_FORGE_SPIRIT = 0x634,
	ACT_DOTA_CAST_ICE_WALL = 0x635,
	ACT_DOTA_CAST_DEAFENING_BLAST = 0x636,
	ACT_DOTA_VICTORY = 0x637,
	ACT_DOTA_DEFEAT = 0x638,
	ACT_DOTA_SPIRIT_BREAKER_CHARGE_POSE = 0x639,
	ACT_DOTA_SPIRIT_BREAKER_CHARGE_END = 0x63a,
	ACT_DOTA_TELEPORT = 0x63b,
	ACT_DOTA_TELEPORT_END = 0x63c,
	ACT_DOTA_CAST_REFRACTION = 0x63d,
	ACT_DOTA_CAST_ABILITY_7 = 0x63e,
	ACT_DOTA_CANCEL_SIREN_SONG = 0x63f,
	ACT_DOTA_CHANNEL_ABILITY_7 = 0x640,
	ACT_DOTA_LOADOUT = 0x641,
	ACT_DOTA_FORCESTAFF_END = 0x642,
	ACT_DOTA_POOF_END = 0x643,
	ACT_DOTA_SLARK_POUNCE = 0x644,
	ACT_DOTA_MAGNUS_SKEWER_START = 0x645,
	ACT_DOTA_MAGNUS_SKEWER_END = 0x646,
	ACT_DOTA_MEDUSA_STONE_GAZE = 0x647,
	ACT_DOTA_RELAX_START = 0x648,
	ACT_DOTA_RELAX_LOOP = 0x649,
	ACT_DOTA_RELAX_END = 0x64a,
	ACT_DOTA_CENTAUR_STAMPEDE = 0x64b,
	ACT_DOTA_BELLYACHE_START = 0x64c,
	ACT_DOTA_BELLYACHE_LOOP = 0x64d,
	ACT_DOTA_BELLYACHE_END = 0x64e,
	ACT_DOTA_ROQUELAIRE_LAND = 0x64f,
	ACT_DOTA_ROQUELAIRE_LAND_IDLE = 0x650,
	ACT_DOTA_GREEVIL_CAST = 0x651,
	ACT_DOTA_GREEVIL_OVERRIDE_ABILITY = 0x652,
	ACT_DOTA_GREEVIL_HOOK_START = 0x653,
	ACT_DOTA_GREEVIL_HOOK_END = 0x654,
	ACT_DOTA_GREEVIL_BLINK_BONE = 0x655,
	ACT_DOTA_IDLE_SLEEPING = 0x656,
	ACT_DOTA_INTRO = 0x657,
	ACT_DOTA_GESTURE_POINT = 0x658,
	ACT_DOTA_GESTURE_ACCENT = 0x659,
	ACT_DOTA_SLEEPING_END = 0x65a,
	ACT_DOTA_AMBUSH = 0x65b,
	ACT_DOTA_ITEM_LOOK = 0x65c,
	ACT_DOTA_STARTLE = 0x65d,
	ACT_DOTA_FRUSTRATION = 0x65e,
	ACT_DOTA_TELEPORT_REACT = 0x65f,
	ACT_DOTA_TELEPORT_END_REACT = 0x660,
	ACT_DOTA_SHRUG = 0x661,
	ACT_DOTA_RELAX_LOOP_END = 0x662,
	ACT_DOTA_PRESENT_ITEM = 0x663,
	ACT_DOTA_IDLE_IMPATIENT = 0x664,
	ACT_DOTA_SHARPEN_WEAPON = 0x665,
	ACT_DOTA_SHARPEN_WEAPON_OUT = 0x666,
	ACT_DOTA_IDLE_SLEEPING_END = 0x667,
	ACT_DOTA_BRIDGE_DESTROY = 0x668,
	ACT_DOTA_TAUNT_SNIPER = 0x669,
	ACT_DOTA_DEATH_BY_SNIPER = 0x66a,
	ACT_DOTA_LOOK_AROUND = 0x66b,
	ACT_DOTA_CAGED_CREEP_RAGE = 0x66c,
	ACT_DOTA_CAGED_CREEP_RAGE_OUT = 0x66d,
	ACT_DOTA_CAGED_CREEP_SMASH = 0x66e,
	ACT_DOTA_CAGED_CREEP_SMASH_OUT = 0x66f,
	ACT_DOTA_IDLE_IMPATIENT_SWORD_TAP = 0x670,
	ACT_DOTA_INTRO_LOOP = 0x671,
	ACT_DOTA_BRIDGE_THREAT = 0x672,
	ACT_DOTA_DAGON = 0x673,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL_START = 0x674,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL = 0x675,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL_END = 0x676,
	ACT_DOTA_NIAN_PIN_START = 0x677,
	ACT_DOTA_NIAN_PIN_LOOP = 0x678,
	ACT_DOTA_NIAN_PIN_END = 0x679,
	ACT_DOTA_LEAP_STUN = 0x67a,
	ACT_DOTA_LEAP_SWIPE = 0x67b,
	ACT_DOTA_NIAN_INTRO_LEAP = 0x67c,
	ACT_DOTA_AREA_DENY = 0x67d,
	ACT_DOTA_NIAN_PIN_TO_STUN = 0x67e,
	ACT_DOTA_RAZE_1 = 0x67f,
	ACT_DOTA_RAZE_2 = 0x680,
	ACT_DOTA_RAZE_3 = 0x681,
	ACT_DOTA_UNDYING_DECAY = 0x682,
	ACT_DOTA_UNDYING_SOUL_RIP = 0x683,
	ACT_DOTA_UNDYING_TOMBSTONE = 0x684,
	ACT_DOTA_WHIRLING_AXES_RANGED = 0x685,
	ACT_DOTA_SHALLOW_GRAVE = 0x686,
	ACT_DOTA_COLD_FEET = 0x687,
	ACT_DOTA_ICE_VORTEX = 0x688,
	ACT_DOTA_CHILLING_TOUCH = 0x689,
	ACT_DOTA_ENFEEBLE = 0x68a,
	ACT_DOTA_FATAL_BONDS = 0x68b,
	ACT_DOTA_MIDNIGHT_PULSE = 0x68c,
	ACT_DOTA_ANCESTRAL_SPIRIT = 0x68d,
	ACT_DOTA_THUNDER_STRIKE = 0x68e,
	ACT_DOTA_KINETIC_FIELD = 0x68f,
	ACT_DOTA_STATIC_STORM = 0x690,
	ACT_DOTA_MINI_TAUNT = 0x691,
	ACT_DOTA_ARCTIC_BURN_END = 0x692,
	ACT_DOTA_LOADOUT_RARE = 0x693,
	ACT_DOTA_SWIM = 0x694,
	ACT_DOTA_FLEE = 0x695,
	ACT_DOTA_TROT = 0x696,
	ACT_DOTA_SHAKE = 0x697,
	ACT_DOTA_SWIM_IDLE = 0x698,
	ACT_DOTA_WAIT_IDLE = 0x699,
	ACT_DOTA_GREET = 0x69a,
	ACT_DOTA_TELEPORT_COOP_START = 0x69b,
	ACT_DOTA_TELEPORT_COOP_WAIT = 0x69c,
	ACT_DOTA_TELEPORT_COOP_END = 0x69d,
	ACT_DOTA_TELEPORT_COOP_EXIT = 0x69e,
	ACT_DOTA_SHOPKEEPER_PET_INTERACT = 0x69f,
	ACT_DOTA_ITEM_PICKUP = 0x6a0,
	ACT_DOTA_ITEM_DROP = 0x6a1,
	ACT_DOTA_CAPTURE_PET = 0x6a2,
	ACT_DOTA_PET_WARD_OBSERVER = 0x6a3,
	ACT_DOTA_PET_WARD_SENTRY = 0x6a4,
	ACT_DOTA_PET_LEVEL = 0x6a5,
	ACT_DOTA_CAST_BURROW_END = 0x6a6,
	ACT_DOTA_LIFESTEALER_ASSIMILATE = 0x6a7,
	ACT_DOTA_LIFESTEALER_EJECT = 0x6a8,
	ACT_DOTA_ATTACK_EVENT_BASH = 0x6a9,
	ACT_DOTA_CAPTURE_RARE = 0x6aa,
	ACT_DOTA_AW_MAGNETIC_FIELD = 0x6ab,
	ACT_DOTA_CAST_GHOST_SHIP = 0x6ac,
	ACT_DOTA_FXANIM = 0x6ad,
	ACT_DOTA_VICTORY_START = 0x6ae,
	ACT_DOTA_DEFEAT_START = 0x6af,
	ACT_DOTA_DP_SPIRIT_SIPHON = 0x6b0,
	ACT_DOTA_TRICKS_END = 0x6b1,
	ACT_DOTA_ES_STONE_CALLER = 0x6b2,
	ACT_DOTA_MK_STRIKE = 0x6b3,
	ACT_DOTA_VERSUS = 0x6b4,
	ACT_DOTA_CAPTURE_CARD = 0x6b5,
	ACT_DOTA_MK_SPRING_SOAR = 0x6b6,
	ACT_DOTA_MK_SPRING_END = 0x6b7,
	ACT_DOTA_MK_TREE_SOAR = 0x6b8,
	ACT_DOTA_MK_TREE_END = 0x6b9,
	ACT_DOTA_MK_FUR_ARMY = 0x6ba,
	ACT_DOTA_MK_SPRING_CAST = 0x6bb,
	ACT_DOTA_NECRO_GHOST_SHROUD = 0x6bc,
	ACT_DOTA_OVERRIDE_ARCANA = 0x6bd,
	ACT_DOTA_SLIDE = 0x6be,
	ACT_DOTA_SLIDE_LOOP = 0x6bf,
	ACT_DOTA_GENERIC_CHANNEL_1 = 0x6c0,
	ACT_DOTA_GS_SOUL_CHAIN = 0x6c1,
	ACT_DOTA_GS_INK_CREATURE = 0x6c2,
	ACT_DOTA_TRANSITION = 0x6c3,
	ACT_DOTA_BLINK_DAGGER = 0x6c4,
	ACT_DOTA_BLINK_DAGGER_END = 0x6c5,
	ACT_DOTA_CUSTOM_TOWER_ATTACK = 0x6c6,
	ACT_DOTA_CUSTOM_TOWER_IDLE = 0x6c7,
	ACT_DOTA_CUSTOM_TOWER_DIE = 0x6c8,
	ACT_DOTA_CAST_COLD_SNAP_ORB = 0x6c9,
	ACT_DOTA_CAST_GHOST_WALK_ORB = 0x6ca,
	ACT_DOTA_CAST_TORNADO_ORB = 0x6cb,
	ACT_DOTA_CAST_EMP_ORB = 0x6cc,
	ACT_DOTA_CAST_ALACRITY_ORB = 0x6cd,
	ACT_DOTA_CAST_CHAOS_METEOR_ORB = 0x6ce,
	ACT_DOTA_CAST_SUN_STRIKE_ORB = 0x6cf,
	ACT_DOTA_CAST_FORGE_SPIRIT_ORB = 0x6d0,
	ACT_DOTA_CAST_ICE_WALL_ORB = 0x6d1,
	ACT_DOTA_CAST_DEAFENING_BLAST_ORB = 0x6d2,
	ACT_DOTA_NOTICE = 0x6d3,
	ACT_DOTA_ANESSIX_CAST_GOLEM = 0x6d4,
	ACT_DOTA_ANESSIX_CAST_GOLEM_CRASH = 0x6d5,
	ACT_DOTA_FAIL_CAST = 0x6d6,
	ACT_DAC_BC_IDLE = 0x6d7,
	ACT_DOTA_UNDERLORD_EMPOWER = 0x6d8,
	ACT_DAC_PORTRAIT_IDLE = 0x6d9,
	ACT_DAC_PORTRAIT_IDLE_HAPPY = 0x6da,
	ACT_DAC_PORTRAIT_IDLE_SAD = 0x6db,
	ACT_DAC_CHANNEL_LOOP = 0x6dc,
	ACT_DAC_ATTACK_IDLE = 0x6dd,
	ACT_DAC_SELECT_FACING_IDLE = 0x6de,
	ACT_DAC_UNDERLORD_SELECTED = 0x6df,
	ACT_DAC_ENNO_GRAPPLE_OUT = 0x6e0,
	ACT_DAC_ENNO_GRAPPLE_IN = 0x6e1,
	ACT_DAC_ENNO_AIRBRAWL_FIGHT = 0x6e2,
	ACT_DAC_ENNO_AIRBRAWL_END = 0x6e3,
	ACT_DAC_ENNO_AIRBRAWL_START = 0x6e4,
	ACT_DAC_ENNO_STEAL = 0x6e5,
	ACT_DAC_ENNO_AIRBRAWL_FIGHT_AWAY = 0x6e6,
	ACT_DAC_VICTORYDANCE_1 = 0x6e7,
	ACT_DAC_VICTORYDANCE_2 = 0x6e8,
	ACT_DAC_VICTORYDANCE_3 = 0x6e9,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EconEntityParticleDisableMode_t : uint32_t
{
	ECON_ENTITY_PARTICLES_ENABLED = 0x0,
	ECON_ENTITY_PARTICLES_DISABLED = 0x1,
	ECON_ENTITY_PARTICLES_DISABLED_BUT_PLAY_ENDCAPS_TO_STOP = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class Explosions : uint32_t
{
	expRandom = 0x0,
	expDirected = 0x1,
	expUsePrecise = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class TimelineCompression_t : uint32_t
{
	TIMELINE_COMPRESSION_SUM = 0x0,
	TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
	TIMELINE_COMPRESSION_AVERAGE = 0x2,
	TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
	TIMELINE_COMPRESSION_TOTAL = 0x4,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class LessonPanelLayoutFileTypes_t : uint32_t
{
	LAYOUT_HAND_DEFAULT = 0x0,
	LAYOUT_WORLD_DEFAULT = 0x1,
	LAYOUT_CUSTOM = 0x2,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class LOSSpeculativeMuzzle_t : uint32_t
{
	MUZZLE_CURRENT_NPC_STATE = 0x0,
	MUZZLE_STANDING = 0x1,
	MUZZLE_CROUCHING = 0x2,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class PostProcessParameterNames_t : uint32_t
{
	PPPN_FADE_TIME = 0x0,
	PPPN_LOCAL_CONTRAST_STRENGTH = 0x1,
	PPPN_LOCAL_CONTRAST_EDGE_STRENGTH = 0x2,
	PPPN_VIGNETTE_START = 0x3,
	PPPN_VIGNETTE_END = 0x4,
	PPPN_VIGNETTE_BLUR_STRENGTH = 0x5,
	PPPN_FADE_TO_BLACK_STRENGTH = 0x6,
	PPPN_DEPTH_BLUR_FOCAL_DISTANCE = 0x7,
	PPPN_DEPTH_BLUR_STRENGTH = 0x8,
	PPPN_SCREEN_BLUR_STRENGTH = 0x9,
	PPPN_FILM_GRAIN_STRENGTH = 0xa,
	PPPN_TOP_VIGNETTE_STRENGTH = 0xb,
	POST_PROCESS_PARAMETER_COUNT = 0xc,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class NPC_STATE : uint32_t
{
	NPC_STATE_INVALID = 0xffffffffffffffff,
	NPC_STATE_NONE = 0x0,
	NPC_STATE_IDLE = 0x1,
	NPC_STATE_ALERT = 0x2,
	NPC_STATE_COMBAT = 0x3,
	NPC_STATE_SCRIPT = 0x4,
	NPC_STATE_PLAYDEAD = 0x5,
	NPC_STATE_PRONE = 0x6,
	NPC_STATE_DEAD = 0x7,
};

struct EngineLoopState_t;
struct CEntityComponentHelper;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct EntComponentInfo_t;
struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct AnimNodeID;
struct CSeqAutoLayerFlag;
struct AnimParamID;
struct CAnimInputDamping;
struct IKBoneNameAndIndex_t;
struct CSeqSeqDescFlag;
struct CSeqTransition;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct CSeqMultiFetch;
struct CAnimKeyData;
struct CAnimRetargetData;
struct CSeqMultiFetchFlag;
struct CBlendCurve;
struct AnimStateID;
struct CAnimMotorList;
struct CAnimMovementSettings;
struct AnimationDecodeDebugDumpElement_t;
struct AnimTagID;
struct CAnimationGraph;
struct CAnimEncodeDifference;
struct FourVectors2D;
struct VPhysics2ShapeDef_t;
struct RnCapsule_t;
struct RnHull_t;
struct SkeletonBoneBounds_t;
struct CRenderSkeleton;
struct AABB_t;
struct CAnimCycle;
struct CFootCycle;
struct CFootCycleDefinition;
struct CFootTrajectories;
struct RnPlane_t;
struct RnSphere_t;
struct PermModelInfo_t;
struct ModelSkeletonData_t;
struct CModelConfigList;
struct FourQuaternions;
struct CPhysSurfacePropertiesPhysics;
struct CPhysSurfacePropertiesSoundNames;
struct CPhysSurfacePropertiesAudio;
struct RnMesh_t;
struct VPhysXConstraintParams_t;
struct CRenderBufferBinding;
struct FourCovMatrices3;
struct CFeJiggleBone;
struct PhysFeModelDesc_t;
struct VPhysXRange_t;
struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
struct vmix_filter_desc_t;
struct SceneViewId_t;
struct CPVSData;
struct CSceneObjectReference_t;
struct CSceneObject;
struct voxel_vis_cluster_t;
struct WorldBuilderParams_t;
struct BakedLightingInfo_t;
struct CParticleCollectionVecInput;
struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct CPerParticleVecInput;
struct ParticlePreviewState_t;
struct CPiecewiseCurveSchemaWrapper;
struct CPathParameters;
struct ControlPointReference_t;
struct CParticleVisibilityInputs;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CParticleFloatInput;
struct UnderlordID_t;
struct PlayerSlot_t;
struct DACStreetfightID_t;
struct CDACPlayerState;
struct fogparams_t;
struct CNetworkedSequenceOperation;
struct CBaseAnimatingController;
struct CResponseCriteriaSet;
struct CRR_Response;
struct sky3dparams_t;
struct audioparams_t;
struct DACBoardBuddyState;
struct IDACPlayerBot;
struct DACUnderdlordLoadout;
struct ParticleIndex_t;
struct ResponseFollowup;
struct CDACUnitState;
struct CSequenceTransitioner2;
struct CDAC_NPC;
struct DACAbilityID_t;
struct ResponseParams;
struct CSoundEnvelope;
struct CCopyRecipientFilter;
struct CBasePlayer;
struct CModelState;
struct CNetworkedIKContext;
struct CBaseAnimatingEasingFloat_t;
struct CEntityInstance;
struct CGameSceneNode;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct CEntityIOOutput;
struct CEconItemView;
struct VelocitySampler;
struct SimpleConstraintSoundProfile;
struct CBaseFlex;
struct CAttributeList;
struct CSkeletonInstance;
struct DACBoardPosition_t;
struct constraint_axislimit_t;
struct constraint_breakableparams_t;
struct ragdoll_t;
struct VPhysicsCollisionAttribute_t;
struct CAttributeManager;
struct CPropVRHand;
struct C_BasePlayer;
struct C_BaseAnimatingController;
struct C_CSequenceTransitioner2;
struct CDecalInfo;

// Registered binary: schemasystem.dll (project 'schemasystem')
// Alignment: 16
// Size: 0x150
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0	
	Vector m_Vector; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	VectorAligned m_VectorAligned; // 0x20	
	QAngle m_QAngle; // 0x30	
	RadianEuler m_RadianEuler; // 0x3c	
	DegreeEuler m_DegreeEuler; // 0x48	
	Quaternion m_Quaternion; // 0x54	
	matrix3x4_t m_matrix3x4_t; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0094[0xc]; // 0x94
public:
	matrix3x4a_t m_matrix3x4a_t; // 0xa0	
	Color m_Color; // 0xd0	
	Vector4D m_Vector4D; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00e4[0xc]; // 0xe4
public:
	CTransform m_CTransform; // 0xf0	
	KeyValues* m_pKeyValues; // 0x110	
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x118	
	CUtlString m_CUtlString; // 0x130	
	CUtlSymbol m_CUtlSymbol; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad013a[0x2]; // 0x13a
public:
	CUtlStringToken m_stringToken; // 0x13c	
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x140	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vrman"
class InfoForResourceTypeCResourceManifestInternal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vdpn"
class InfoForResourceTypeCDOTAPatchNotesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vents"
class InfoForResourceTypeCEntityLump
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vseq"
class InfoForResourceTypeCSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpcf"
class InfoForResourceTypeIParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vtex"
class InfoForResourceTypeCTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmdl"
class InfoForResourceTypeCModel
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpdi"
class InfoForResourceTypeCPanoramaDynamicImages
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsvg"
class InfoForResourceTypeIVectorGraphic
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmat"
class InfoForResourceTypeIMaterial2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vanim"
class InfoForResourceTypeCAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmix"
class InfoForResourceTypeCVMixListResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vanmgrphvxml"
class InfoForResourceTypeIAnimationGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vwnod"
class InfoForResourceTypeCWorldNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vcss"
class InfoForResourceTypeCPanoramaStyle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vdacdefsvsvg"
class InfoForResourceTypeCDACGameDefsData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsndevts"
class InfoForResourceTypeCVSoundEventScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vagrp"
class InfoForResourceTypeCAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsnd"
struct InfoForResourceTypeVSound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vxml"
class InfoForResourceTypeCPanoramaLayout
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
class FourQuaternions
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
	fltx4 z; // 0x20	
	fltx4 w; // 0x30	
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsnap"
class InfoForResourceTypeIParticleSnapshot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpost"
class InfoForResourceTypeCPostProcessingResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vwrld"
struct InfoForResourceTypeWorld_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vphys"
class InfoForResourceTypeCPhysAggregateData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vvis"
class InfoForResourceTypeCVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmesh"
class InfoForResourceTypeCRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsurf"
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 4
// Size: 0x104
// Has Trivial Destructor
struct LightDesc_t
{
public:
	LightType_t m_Type; // 0x0	
	Vector m_Color; // 0x4	
	Vector m_BounceColor; // 0x10	
	float m_Range; // 0x1c	
	float m_Falloff; // 0x20	
	float m_Attenuation0; // 0x24	
	float m_Attenuation1; // 0x28	
	float m_Attenuation2; // 0x2c	
	float m_Theta; // 0x30	
	float m_Phi; // 0x34	
	CUtlStringToken m_lightCookie; // 0x38	
	int32_t m_nLightGroupCount; // 0x3c	
	CUtlStringToken m_lightGroups[1]; // 0x40	
	bool m_bCastShadows; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	int32_t m_nShadowWidth; // 0x48	
	int32_t m_nShadowHeight; // 0x4c	
	int32_t m_nShadowCascadeCount; // 0x50	
	float m_flShadowCascadeDistance[4]; // 0x54	
	int32_t m_nShadowCascadeResolution[4]; // 0x64	
	bool m_bUsesIndexedBakedLighting; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x3]; // 0x75
public:
	int32_t m_nBakeLightIndex; // 0x78	
	float m_flBakeLightIndexScale; // 0x7c	
	int32_t m_nFogLightingMode; // 0x80	
	bool m_bRenderDiffuse; // 0x84	
	bool m_bRenderSpecular; // 0x85	
	bool m_bRenderTransmissive; // 0x86	
private:
	[[maybe_unused]] uint8_t __pad0087[0x1]; // 0x87
public:
	int32_t m_nPriority; // 0x88	
	LightSourceShape_t m_Shape; // 0x8c	
	float m_flLightSourceDim0; // 0x90	
	float m_flLightSourceDim1; // 0x94	
	float m_flLightSourceSize0; // 0x98	
	float m_flLightSourceSize1; // 0x9c	
	float m_flPrecomputedMaxRange; // 0xa0	
	float m_flFogContributionStength; // 0xa4	
	float m_flNearClipPlane; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x18]; // 0xac
public:
	Vector m_vecUp; // 0xc4	
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsndstckvseq"
class InfoForResourceTypeCVSoundStackScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vjs"
class InfoForResourceTypeCPanoramaScript
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vcdlist"
class InfoForResourceTypeCChoreoSceneFileData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmorf"
class InfoForResourceTypeCMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "item"
class InfoForResourceTypeCDotaItemDefinitionResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
struct SheetFrameImage_t
{
public:
	Vector2D uvCropped[2]; // 0x0	
	Vector2D uvUncropped[2]; // 0x10	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0x38
// Has Trivial Constructor
// Has Trivial Destructor
struct RenderInputLayoutField_t
{
public:
	uint8_t m_pSemanticName[32]; // 0x0	
	int32_t m_nSemanticIndex; // 0x20	
	uint32_t m_Format; // 0x24	
	int32_t m_nOffset; // 0x28	
	int32_t m_nSlot; // 0x2c	
	RenderSlotType_t m_nSlotType; // 0x30	
	int32_t m_nInstanceStepRate; // 0x34	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
struct SheetSequenceFrame_t
{
public:
	float m_flDisplayTime; // 0x0	
	CResourceArray< SheetFrameImage_t > m_Images; // 0x4	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct Sheet_t
{
public:
	CResourceArray< SheetSequence_t > m_Sequences; // 0x0	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
struct SheetSequence_t
{
public:
	uint32_t m_nId; // 0x0	
	bool m_bClamp; // 0x4	
	bool m_bAlphaCrop; // 0x5	
	bool m_bNoColor; // 0x6	
	bool m_bNoAlpha; // 0x7	
	CResourceArray< SheetSequenceFrame_t > m_Frames; // 0x8	
	float m_flTotalTime; // 0x10	
	CResourceString m_name; // 0x14	
	CResourceArray< SequenceFloatParam_t > m_floatParams; // 0x18	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 8
// Size: 0x18
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct SequenceFloatParam_t
{
public:
	CResourceString m_name; // 0x0	
	float m_value; // 0x4	
};

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 4
// Size: 0xc4
// Has Trivial Destructor
struct VsInputSignatureElement_t
{
public:
	char m_pName[64]; // 0x0	
	char m_pSemantic[64]; // 0x40	
	char m_pD3DSemanticName[64]; // 0x80	
	int32_t m_nD3DSemanticIndex; // 0xc0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
struct EngineLoopState_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	int32_t m_nPlatWindowWidth; // 0x18	
	int32_t m_nPlatWindowHeight; // 0x1c	
	int32_t m_nRenderWidth; // 0x20	
	int32_t m_nRenderHeight; // 0x24	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	bool m_bFirstTick; // 0x28	
	bool m_bLastTick; // 0x29	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// Has Trivial Destructor
struct EntComponentInfo_t
{
public:
	V_uuid_t m_id; // 0x0	
	char* m_pName; // 0x10	
	char* m_pCPPClassname; // 0x18	
	char* m_pNetworkDataReferencedDescription; // 0x20	
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x28	
	int32_t m_nRuntimeIndex; // 0x30	
	uint32_t m_nFlags; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0038[0x38]; // 0x38
public:
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70	
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
class CEmptyEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct EntOutput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x60
// Has Trivial Destructor
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	int32_t m_nClientOutputFrames; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	double m_flRealTime; // 0x30	
	double m_flRenderTime; // 0x38	
	double m_flRenderFrameTime; // 0x40	
	double m_flRenderFrameTimeUnbounded; // 0x48	
	double m_flRenderFrameTimeUnscaled; // 0x50	
	double m_flTickRemainder; // 0x58	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nTotalTicksThisFrame; // 0x34	
	int32_t m_nTotalTicks; // 0x38	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct EventClientSendInput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	double m_flRenderFrameTime; // 0x30	
	double m_flRenderFrameTimeUnbounded; // 0x38	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
struct EventModInitialized_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
class CVariantDefaultAllocator
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30	
	int32_t m_nTotalTicksThisFrame; // 0x34	
	int32_t m_nTotalTicks; // 0x38	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
struct EventSplitScreenStateChanged_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventServerAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct EventClientProcessNetworking_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IHandleEntity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 2
// Size: 0x2
// Has Trivial Destructor
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct EventProfileStorageAvailable_t
{
public:
	int32_t m_nSplitScreenSlot; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventServerSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IRecipientFilter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct EventPreDataUpdate_t
{
public:
	int32_t m_nEntityIndex; // 0x0	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	uint32_t m_nVRDisplayID; // 0x2c	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	double m_flRenderTime; // 0x28	
	float m_flRenderFrameTime; // 0x30	
	float m_flRenderFrameTimeUnbounded; // 0x34	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x18
class CNetworkVarChainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x8	
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EntInput_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventClientAdvanceTick_t : public EventAdvanceTick_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponentHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	uint32_t m_flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	EntComponentInfo_t* m_pInfo; // 0x10	
	int32_t m_nPriority; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CEntityComponentHelper* m_pNext; // 0x20	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRenderTime; // 0x28	
	float m_flRealTime; // 0x2c	
	float m_flRenderFrameTimeUnbounded; // 0x30	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0	
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x28
// Has VTable
class CEntityIOOutput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x40
// Has Trivial Destructor
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:
	// No schema binary for binding
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0	
	float m_flRealTime; // 0x28	
	float m_flFrameTime; // 0x2c	
};

// Registered binary: engine2.dll (project 'engine2')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
	// No schema binary for binding
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x8
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x70
// Has Trivial Destructor
struct PostProcessingBloomParameters_t
{
public:
	BloomBlendMode_t m_blendMode; // 0x0	
	float m_flBloomStrength; // 0x4	
	float m_flScreenBloomStrength; // 0x8	
	float m_flBlurBloomStrength; // 0xc	
	float m_flBloomThreshold; // 0x10	
	float m_flBloomThresholdWidth; // 0x14	
	float m_flSkyboxBloomStrength; // 0x18	
	float m_flBloomStartValue; // 0x1c	
	float m_flBlurWeight[5]; // 0x20	
	Vector m_vBlurTint[5]; // 0x34	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x130
struct MaterialResourceData_t
{
public:
	CUtlString m_materialName; // 0x0	
	CUtlString m_shaderName; // 0x8	
	CUtlVector< MaterialParamInt_t > m_intParams; // 0x10	
	CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28	
	CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40	
	CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58	
	CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70	
	CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88	
	CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xa0	
	CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xb8	
	CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xd0	
	CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xe8	
	CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100	
	CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x20
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
struct PostProcessingTonemapParameters_t
{
public:
	float m_flExposureBias; // 0x0	
	float m_flShoulderStrength; // 0x4	
	float m_flLinearStrength; // 0x8	
	float m_flLinearAngle; // 0xc	
	float m_flToeStrength; // 0x10	
	float m_flToeNum; // 0x14	
	float m_flToeDenom; // 0x18	
	float m_flWhitePoint; // 0x1c	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x24
// Has Trivial Destructor
struct PostProcessingVignetteParameters_t
{
public:
	float m_flVignetteStrength; // 0x0	
	Vector2D m_vCenter; // 0x4	
	float m_flRadius; // 0xc	
	float m_flRoundness; // 0x10	
	float m_flFeather; // 0x14	
	Vector m_vColorTint; // 0x18	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0xe0
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0	
	// -> m_flExposureBias - 0x4
	// -> m_flShoulderStrength - 0x8
	// -> m_flLinearStrength - 0xc
	// -> m_flLinearAngle - 0x10
	// -> m_flToeStrength - 0x14
	// -> m_flToeNum - 0x18
	// -> m_flToeDenom - 0x1c
	// -> m_flWhitePoint - 0x20
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4	
	bool m_bHasBloomParams; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	// -> m_blendMode - 0x28
	// -> m_flBloomStrength - 0x2c
	// -> m_flScreenBloomStrength - 0x30
	// -> m_flBlurBloomStrength - 0x34
	// -> m_flBloomThreshold - 0x38
	// -> m_flBloomThresholdWidth - 0x3c
	// -> m_flSkyboxBloomStrength - 0x40
	// -> m_flBloomStartValue - 0x44
	// -> m_flBlurWeight[5] - 0x48
	// -> m_vBlurTint[5] - 0x5c
	PostProcessingBloomParameters_t m_bloomParams; // 0x28	
	bool m_bHasVignetteParams; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	// -> m_flVignetteStrength - 0x9c
	// -> m_vCenter - 0xa0
	// -> m_flRadius - 0xa8
	// -> m_flRoundness - 0xac
	// -> m_flFeather - 0xb0
	// -> m_vColorTint - 0xb4
	PostProcessingVignetteParameters_t m_vignetteParams; // 0x9c	
	int32_t m_nColorCorrectionVolumeDim; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xc8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x18
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x78
class CAnimKeyData
{
public:
	CBufferString m_name; // 0x0	
	CUtlVector< CAnimBone > m_boneArray; // 0x10	
	CUtlVector< CAnimUser > m_userArray; // 0x28	
	CUtlVector< CBufferString > m_morphArray; // 0x40	
	int32_t m_nChannelElements; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0	
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
class CAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_name; // 0x10	
	CUtlVector< CAnimDesc > m_animArray; // 0x20	
	CUtlVector< CAnimDecoder > m_decoderArray; // 0x38	
	int32_t m_nMaxUniqueFrameIndex; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimParamID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CMotionMetricBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	float m_flWeight; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x8
// Has Trivial Destructor
class CSeqAutoLayerFlag
{
public:
	bool m_bPost; // 0x0	
	bool m_bSpline; // 0x1	
	bool m_bXFade; // 0x2	
	bool m_bNoBlend; // 0x3	
	bool m_bLocal; // 0x4	
	bool m_bPose; // 0x5	
	bool m_bFetchFrame; // 0x6	
	bool m_bSubtract; // 0x7	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MPropertyFriendlyName "Damping"
class CAnimInputDamping
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8	
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc	
	// MPropertyFriendlyName "Minimum Speed"
	float m_fMinSpeed; // 0x10	
	// MPropertyFriendlyName "Maximum Tension"
	float m_fMaxTension; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// Is Abstract
class CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20	
	// MPropertyHideField
	Vector2D m_vecPosition; // 0x28	
	// MPropertyHideField
	AnimNodeID m_nNodeID; // 0x30	
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Choreo"
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
class CAnimRetargetElementData
{
public:
	int32_t m_nElementType; // 0x0	
	int32_t m_nGroupType; // 0x4	
	int32_t m_nChainType; // 0x8	
	int32_t m_nChainIndex; // 0xc	
	int32_t m_nChainInvIndex; // 0x10	
	int32_t m_nBoneIndex; // 0x14	
	CBufferString m_boneName; // 0x18	
	matrix3x4_t m_transform; // 0x28	
	matrix3x4_t m_invTransform; // 0x58	
	float m_flDistance; // 0x88	
	Vector m_vecMin; // 0x8c	
	Vector m_vecMax; // 0x98	
	float m_flMass; // 0xa4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	uint8_t m_comparisonOp; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Time Remaining Metric"
class CTimeRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Match Time Remaining"
	// MPropertyGroupName
	// MPropertyAttrChangeCallback
	bool m_bMatchByTimeRemaining; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MPropertyFriendlyName "Max Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMaxTimeRemaining; // 0x2c	
	// MPropertyFriendlyName "Filter By Time Remaining"
	// MPropertyAttrChangeCallback
	bool m_bFilterByTimeRemaining; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MPropertyFriendlyName "Min Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMinTimeRemaining; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MPropertyFriendlyName "Aim Matrix"
class CAimMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40	
	// MPropertyFriendlyName "Angle Increment"
	float m_fAngleIncrement; // 0x48	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x4c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58	
	// MPropertyFriendlyName "Blend Mode"
	AimMatrixBlendMode m_blendMode; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_boneMaskName; // 0x68	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x70	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x71	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MPropertyFriendlyName "Procedural Hit Reacts"
class CHitReactAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x3c	
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x40	
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x44	
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x48	
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x4c	
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x58	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x60	
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0x68	
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0x6c	
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0x70	
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0x74	
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0x78	
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0x7c	
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0x80	
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0x84	
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0x88	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8c	
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0x90	
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0x94	
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0x98	
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0x9c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xa0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0	
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Distance Remaining Metric"
class CDistanceRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Maximum Tracked Distance"
	float m_flMaxDistance; // 0x28	
	// MPropertyFriendlyName "Filter By Fixed Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterFixedMinDistance; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	// MPropertyFriendlyName "Min Distance"
	// MPropertyAttrStateCallback
	float m_flMinDistance; // 0x30	
	// MPropertyFriendlyName "Filter By Goal Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterGoalDistance; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyFriendlyName "Goal Filter Start Distance"
	// MPropertyAttrStateCallback
	float m_flStartGoalFilterDistance; // 0x38	
	// MPropertyFriendlyName "Filter By Goal Overshoot"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bFilterGoalOvershoot; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback
	float m_flMaxGoalOvershootScale; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
struct IKTargetSettings_t
{
public:
	// MPropertyFriendlyName "Target Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKTargetSource m_TargetSource; // 0x0	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttrStateCallback
	IKBoneNameAndIndex_t m_Bone; // 0x8	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNamePosition; // 0x18	
	// MPropertyFriendlyName "Target Coords"
	// MPropertyAttrStateCallback
	IKTargetCoordinateSystem m_TargetCoordSystem; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Bone Velocity Metric"
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Follow Path"
class CFollowPathAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Blend Out Time"
	float m_flBlendOutTime; // 0x3c	
	// MPropertyFriendlyName "Block Non-Path Movement"
	bool m_bBlockNonPathMovement; // 0x40	
	// MPropertyFriendlyName "Enable Speed Scaling"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrChangeCallback
	bool m_bScaleSpeed; // 0x41	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MPropertyFriendlyName "Scale"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flScale; // 0x44	
	// MPropertyFriendlyName "Min Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMinAngle; // 0x48	
	// MPropertyFriendlyName "Max Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMaxAngle; // 0x4c	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrStateCallback
	float m_flSpeedScaleBlending; // 0x50	
	// MPropertyFriendlyName "Enable Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	// MPropertyFriendlyName "Target"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x5c	
	// MPropertyFriendlyName "Offset"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
class CActivityValueList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CActivityValues > > m_activities; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimTagID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Neural Network"
class CNeuralNetAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Weights File"
	CUtlString m_weightsFile; // 0x38	
	// MPropertyFriendlyName "Test Input File"
	CUtlString m_testInputFile; // 0x40	
	// MPropertyFriendlyName "Bone Map File"
	CUtlString m_boneMapFile; // 0x48	
	// MPropertyFriendlyName "Sensor Range File"
	CUtlString m_sensorRangeFile; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// Is Abstract
class CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	AnimParamID m_id; // 0x20	
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x24	
	// MPropertyFriendlyName "Network"
	bool m_bNetwork; // 0x28	
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x29	
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x2a	
	// MPropertyFriendlyName "Predicted"
	bool m_bPredicted; // 0x2b	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// 
// MPropertyFriendlyName "Blend Item"
// MPropertyElementNameFn
class CBlendNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	AnimTagID m_tagID; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CAnimParameterList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xb0]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0xb0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CBaseAnimMotor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	bool m_bDefault; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Blend 1D"
class CBlendAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlendNodeChild > m_children; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x5c	
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x60	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x64	
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x65	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x66	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x67	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Future Facing Metric"
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Control Value Condition"
class CControlValueCondition : public CAnimStateConditionBase
{
public:
	ControlValue m_sourceControlValue; // 0x28	
	int32_t m_comparisonValueType; // 0x2c	
	float m_comparisonFixedValue; // 0x30	
	ControlValue m_comparisonControlValue; // 0x34	
	AnimParamID m_comparisonParamID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerPrimitiveBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x5
// Has Trivial Destructor
class CAnimDesc_Flag
{
public:
	bool m_bLooping; // 0x0	
	bool m_bAllZeros; // 0x1	
	bool m_bHidden; // 0x2	
	bool m_bDelta; // 0x3	
	bool m_bLegacyWorldspace; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0	
	float m_flAngleWeight; // 0x4	
	int16_t m_nLocalBone; // 0x8	
	bool m_bBonesOrientedAlongPositiveX; // 0xa	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
class CAnimGraphSettingsGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Float Parameter"
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x30	
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x34	
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x38	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Look Pitch Condition"
class CLookPitchCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Post Graph IK Tag"
class CPostGraphIKTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Blend Amount"
	float m_flBlendAmount; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
class CSeqCmdLayer
{
public:
	int16_t m_cmd; // 0x0	
	int16_t m_nLocalReference; // 0x2	
	int16_t m_nLocalBonemask; // 0x4	
	int16_t m_nDstResult; // 0x6	
	int16_t m_nSrcResult; // 0x8	
	bool m_bSpline; // 0xa	
private:
	[[maybe_unused]] uint8_t __pad000b[0x1]; // 0xb
public:
	float m_flVar1; // 0xc	
	float m_flVar2; // 0x10	
	int16_t m_nLineNumber; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10	
	float m_flAxisSize; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Subtract"
class CSubtractAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38	
	// MPropertyHideField
	AnimNodeID m_subtractChildID; // 0x3c	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x40	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x44	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x48	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x4c	
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x4d	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4e	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
class CBasePathAnimMotor : public CBaseAnimMotor
{
public:
	// MPropertyFriendlyName "Facing Damping"
	// MPropertySortPriority "90"
	CAnimInputDamping m_facingDamping; // 0x28	
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "WayPoint Helper"
class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x3c	
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x40	
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x44	
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x45	
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x46	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x6
// Has Trivial Destructor
class CSeqMultiFetchFlag
{
public:
	bool m_bRealtime; // 0x0	
	bool m_bCylepose; // 0x1	
	bool m_b0D; // 0x2	
	bool m_b1D; // 0x3	
	bool m_b2D; // 0x4	
	bool m_b2D_TRI; // 0x5	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x30
// Has VTable
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	Color m_Color; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlString m_Text; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x50
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x10	
	VectorAligned m_vWsStart; // 0x20	
	VectorAligned m_vWsEnd; // 0x30	
	Color m_Color; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Bone Mask"
class CBoneMaskAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x38	
	// MPropertyHideField
	AnimNodeID m_child1ID; // 0x40	
	// MPropertyHideField
	AnimNodeID m_child2ID; // 0x44	
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x48	
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x50	
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_blendParameter; // 0x54	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x58	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x5c	
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x60	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x64	
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x68	
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x69	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Move Speed Condition"
class CMoveSpeedCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "State Machine"
class CStateMachineAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x10]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x48	
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
class CAnimRetargetData
{
public:
	int32_t m_bEnableRetarget; // 0x0	
	int32_t m_nRetargetStyle; // 0x4	
	CUtlVector< CAnimRetargetElementData > m_element; // 0x8	
	CUtlVector< CAnimRetargetChainData > m_chain; // 0x20	
	CUtlVector< CBufferString > m_replicated; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Audio Tag"
class CAudioAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Audio Clip"
	// MPropertyAttributeEditor "SoundPicker"
	CUtlString m_clipName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
class CSeqMultiFetch
{
public:
	// -> m_bRealtime - 0x0
	// -> m_bCylepose - 0x1
	// -> m_b0D - 0x2
	// -> m_b1D - 0x3
	// -> m_b2D - 0x4
	// -> m_b2D_TRI - 0x5
	CSeqMultiFetchFlag m_flags; // 0x0	
	CUtlVector< int16 > m_localReferenceArray; // 0x8	
	int32_t m_nGroupSize[2]; // 0x20	
	int32_t m_nLocalPose[2]; // 0x28	
	CUtlVector< float32 > m_poseKeyArray0; // 0x30	
	CUtlVector< float32 > m_poseKeyArray1; // 0x48	
	int32_t m_nLocalCyclePoseParameter; // 0x60	
	bool m_bCalculatePoseParameters; // 0x64	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Damped Path Motor"
class CDampedPathAnimMotor : public CBasePathAnimMotor
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x48	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x54	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x58	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x5c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	float m_flRadius; // 0x20	
	Color m_Color; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
class CBlendCurve
{
public:
	Vector2D m_vControlPoint1; // 0x0	
	Vector2D m_vControlPoint2; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
class CAnimEncodeDifference
{
public:
	CUtlVector< CAnimBoneDifference > m_boneArray; // 0x0	
	CUtlVector< CAnimMorphDifference > m_morphArray; // 0x18	
	CUtlVector< CAnimUserDifference > m_userArray; // 0x30	
	CUtlVector< uint8 > m_bHasRotationBitArray; // 0x48	
	CUtlVector< uint8 > m_bHasMovementBitArray; // 0x60	
	CUtlVector< uint8 > m_bHasMorphBitArray; // 0x78	
	CUtlVector< uint8 > m_bHasUserBitArray; // 0x90	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Cloth Settings Tag"
class CClothSettingsAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x30	
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x34	
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// 
// MPropertyFriendlyName "Choice Item"
// MPropertyElementNameFn
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10	
	// MPropertyFriendlyName "Blend Time"
	float m_blendTime; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Finished Condition"
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	FinishedConditionOption m_option; // 0x28	
	bool m_bIsFinished; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
class CActivityValues
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CParameterValue > > m_values; // 0x18	
	CUtlString m_activityName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Direct Playback"
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x3c	
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x3d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Blend 2D"
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlend2DItem > m_items; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Horizontal Axis"
	AnimValueSource m_blendSourceX; // 0x50	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Horizontal Axis"
	AnimParamID m_paramX; // 0x54	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Vertical Axis"
	AnimValueSource m_blendSourceY; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Vertical Axis"
	AnimParamID m_paramY; // 0x5c	
	// MPropertyFriendlyName "Blend Mode"
	Blend2DMode m_eBlendNode; // 0x60	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
class CAnimFrameSegment
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0	
	uint32_t m_nLocalElementMasks; // 0x4	
	int32_t m_nLocalChannel; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlBinaryBlock m_container; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "String Tag"
class CStringAnimTag : public CAnimTagBase
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Enum Parameter"
class CEnumAnimParameter : public CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "FootstepLanded Tag"
class CFootstepLandedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x38	
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x40	
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Final Pose"
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0	
	int32_t m_nVersion; // 0x10	
	int32_t m_nType; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Bone Position Metric"
class CBonePositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Add"
class CAddAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38	
	// MPropertyHideField
	AnimNodeID m_additiveChildID; // 0x3c	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x40	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x44	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x48	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x4c	
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x4d	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4e	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// 
// MPropertyFriendlyName "Blend Item"
// MPropertyElementNameFn
class CBlend2DItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x0	
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MPropertyFriendlyName "Selector"
// MPropertyExtendedEditor
class CSelectorAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< AnimNodeID > m_children; // 0x40	
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x58	
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70	
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x74	
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x78	
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x7c	
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0x80	
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x84	
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x85	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x88	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x70
// Has VTable
class CAnimReplayFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlBinaryBlock m_instanceData; // 0x10	
	CUtlBinaryBlock m_poseRecipeInstanceData; // 0x28	
	CTransform m_localToWorldTransform; // 0x40	
	float m_timeStamp; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MPropertyFriendlyName "Motion Matching"
class CMotionMatchingAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionClipGroup > > m_clipGroups; // 0x40	
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x58	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x70	
	// MPropertyFriendlyName "Prediction Time"
	float m_flPredictionTime; // 0x80	
	// MPropertyFriendlyName "Sampling Method"
	// MPropertyAttrChangeCallback
	MotionSamplingMethod m_samplingMethod; // 0x84	
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttrStateCallback
	float m_flSampleRate; // 0x88	
	// MPropertyFriendlyName "Search at fixed interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrChangeCallback
	bool m_bSearchAtInterval; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x90	
	// MPropertyFriendlyName "Search on Steps"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchOnSteps; // 0x94	
	// MPropertyFriendlyName "Search when tags change"
	// MPropertyGroupName "Search Triggers"
	bool m_bForceSearchWhenTagsChange; // 0x95	
	// MPropertyFriendlyName "Search when clip ends"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenClipEnds; // 0x96	
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenGoalChanges; // 0x97	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x98	
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x9c	
	// MPropertyFriendlyName "Lock Clip When Waning"
	bool m_bLockClipWhenWaning; // 0xa0	
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa1	
private:
	[[maybe_unused]] uint8_t __pad00a2[0x2]; // 0xa2
public:
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xa4	
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xa8	
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb0	
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xb4	
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xb8	
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xbc	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
class CAnimBone
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_parent; // 0x10	
	Vector m_pos; // 0x14	
	Quaternion m_quat; // 0x20	
	Quaternion m_qAlignment; // 0x30	
	int32_t m_flags; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimRetargetChainData
{
public:
	CBufferString m_sChainName; // 0x0	
	int32_t m_nGroupType; // 0x10	
	int32_t m_nChainType; // 0x14	
	CUtlVector< int32 > m_nElement; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimStateID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Motion Clip"
class CMotionClip
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CAnimMotorList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CSmartPtr< CBaseAnimMotor > > m_motors; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x120
// Has VTable
class CSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_sName; // 0x10	
	uint32_t m_nFlags; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< CBufferString > m_localSequenceNameArray; // 0x28	
	CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // 0x40	
	CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // 0x58	
	CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // 0x70	
	CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // 0x88	
	CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // 0xa0	
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xb8	
	CBufferString m_localNodeName; // 0xd0	
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xe0	
	KeyValues3 m_keyValues; // 0xf8	
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x108	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CAnimMovementSettings
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bShouldCalculateSlope; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MPropertyFriendlyName "Ground IK"
class CGroundIKSolveAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAttributeChoiceName "IKChainOld"
	CUtlVector< CUtlString > m_IkChains; // 0x40	
	// MPropertyFriendlyName "Tilt Source"
	// MPropertyAttributeChoiceEnumName
	GroundIKTiltSource_t m_TiltSource; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyFriendlyName "Override Tilt Root"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_OverrideTiltRoot; // 0x60	
	// MPropertyFriendlyName "Tilt Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_TiltAttachment; // 0x68	
	// MPropertyFriendlyName "Override Tilt Spring Strength"
	float m_flOverrideTiltSpringStrength; // 0x70	
	// MPropertyFriendlyName "Apply Locks"
	bool m_bApplyLocks; // 0x74	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MPropertyFriendlyName "Target Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_TargetBlendParameter; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Bone Types to Draw"
	// MPropertyAttributeChoiceEnumName
	CUtlVector< CGroundIKSolveAnimNode::DebugSkeletonBoneType_t > m_DebugDrawBoneTypes; // 0x80	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Lock Values"
	bool m_bDebugDrawLockValues; // 0x98	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Lock Values Color"
	Color m_DebugDrawLockValuesColor; // 0x99	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Before"
	bool m_bDebugDrawBefore; // 0x9d	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Before IK Color"
	Color m_DebugDrawBeforeColor; // 0x9e	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw After"
	bool m_bDebugDrawAfter; // 0xa2	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug After IK Color"
	Color m_DebugDrawAfterColor; // 0xa3	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Foot Position Metric"
class CFootPositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Ignore Slope"
	bool m_bIgnoreSlope; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimLocalHierarchy
{
public:
	CBufferString m_sBone; // 0x0	
	CBufferString m_sNewParent; // 0x10	
	int32_t m_nStartFrame; // 0x20	
	int32_t m_nPeakFrame; // 0x24	
	int32_t m_nTailFrame; // 0x28	
	int32_t m_nEndFrame; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
class CAnimDataChannelDesc
{
public:
	CBufferString m_szChannelClass; // 0x0	
	CBufferString m_szVariableName; // 0x10	
	int32_t m_nFlags; // 0x20	
	int32_t m_nType; // 0x24	
	CBufferString m_szGrouping; // 0x28	
	CBufferString m_szDescription; // 0x38	
	CUtlVector< CBufferString > m_szElementNameArray; // 0x48	
	CUtlVector< int32 > m_nElementIndexArray; // 0x60	
	CUtlVector< uint32 > m_nElementMaskArray; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Animation State"
// MPropertyExtendedEditor
class CAnimState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x20	
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x38	
	// MPropertySuppressField
	CUtlVector< uint8 > m_tagBehaviors; // 0x50	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x68	
	// MPropertyHideField
	AnimNodeID m_childNodeID; // 0x70	
	// MPropertyHideField
	AnimStateID m_stateID; // 0x74	
	// MPropertyHideField
	Vector2D m_position; // 0x78	
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x80	
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x81	
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x82	
	// MPropertyFriendlyName "Exclusive Root Motion"
	bool m_bIsRootMotionExclusive; // 0x83	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class CAnimIKRuleStallFrame
{
public:
	int16_t chain; // 0x0	
	int16_t slot; // 0x2	
	float start; // 0x4	
	float peak; // 0x8	
	float tail; // 0xc	
	float end; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Mover"
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Generate Movement"
	bool m_bApplyMovement; // 0x3c	
	// MPropertyFriendlyName "Orient Movement"
	bool m_bOrientMovement; // 0x3d	
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x3e	
	// MPropertyFriendlyName "Turn to Face"
	bool m_bTurnToFace; // 0x3f	
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	float m_flTurnToFaceOffset; // 0x40	
	// MPropertyFriendlyName "Face Direction"
	AnimValueSource m_facingTarget; // 0x44	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Directional Blend"
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x40	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x44	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x48	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x4c	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
class CAnimMovement
{
public:
	int32_t endframe; // 0x0	
	int32_t motionflags; // 0x4	
	float v0; // 0x8	
	float v1; // 0xc	
	float angle; // 0x10	
	Vector vector; // 0x14	
	Vector position; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CSeqPoseParamDesc
{
public:
	CBufferString m_sName; // 0x0	
	float m_flStart; // 0x10	
	float m_flEnd; // 0x14	
	float m_flLoop; // 0x18	
	bool m_bLooping; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x1a0
class CCompressorGroup
{
public:
	int32_t m_nTotalElementCount; // 0x0	
	CUtlVector< char* > m_szChannelClass; // 0x8	
	CUtlVector< char* > m_szVariableName; // 0x20	
	CUtlVector< fieldtype_t > m_nType; // 0x38	
	CUtlVector< int32 > m_nFlags; // 0x50	
	CUtlVector< CUtlString > m_szGrouping; // 0x68	
	CUtlVector< int32 > m_nCompressorIndex; // 0x80	
	CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98	
	CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xb0	
	CUtlVector< uint32 > m_nElementMask; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00e0[0x18]; // 0xe0
public:
	CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xf8	
	CUtlVector< CCompressor< Quaternion >* > m_quaternionCompressor; // 0x110	
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128	
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140	
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158	
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170	
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
struct AnimationDecodeDebugDumpElement_t
{
public:
	int32_t m_nEntityIndex; // 0x0	
	CUtlString m_modelName; // 0x8	
	CUtlVector< CUtlString > m_poseParams; // 0x10	
	CUtlVector< CUtlString > m_decodeOps; // 0x28	
	CUtlVector< CUtlString > m_internalOps; // 0x40	
	CUtlVector< CUtlString > m_decodedAnims; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Look Heading Condition"
class CLookHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
class CAnimAnimEvent
{
public:
	int32_t m_nFrame; // 0x0	
	float m_flCycle; // 0x4	
	KeyValues3 m_EventData; // 0x8	
	CBufferString m_sLegacyOptions; // 0x18	
	CBufferString m_sEventName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Particle Tag"
class CParticleAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x30	
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x38	
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x40	
	// MPropertyFriendlyName "Tag End Stop is Instant"
	bool m_bTagEndStopIsInstant; // 0x41	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Motion Clip Group"
class CMotionClipGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionClip > > m_clips; // 0x20	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	// MPropertyFriendlyName "Enable On Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Cycle Condition"
class CCycleCondition : public CAnimStateConditionBase
{
public:
	float m_comparisonValue; // 0x28	
	int32_t m_comparisonValueType; // 0x2c	
	ControlValue m_comparisonControlValue; // 0x30	
	AnimParamID m_comparisonParamID; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Slow Down On Slopes"
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CAnimMovementManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CAnimMotorList m_MotorList; // 0x18	
	CAnimMovementSettings m_MovementSettings; // 0xd0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Steps Remaining Metric"
class CStepsRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Min Steps Remaining"
	float m_flMinStepsRemaining; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Post Graph IK Chain Blend Tag"
class CPostGraphIKChainBlendTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Chain Name"
	CUtlString m_ChainName; // 0x30	
	// MPropertyFriendlyName "Blend Amount on Enter"
	float m_flBlendAmountOnEnter; // 0x38	
	// MPropertyFriendlyName "Blend Amount on Exit"
	float m_flBlendAmountOnExit; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0xa
// Has Trivial Destructor
class CSeqSeqDescFlag
{
public:
	bool m_bLooping; // 0x0	
	bool m_bSnap; // 0x1	
	bool m_bAutoplay; // 0x2	
	bool m_bPost; // 0x3	
	bool m_bHidden; // 0x4	
	bool m_bMulti; // 0x5	
	bool m_bLegacyDelta; // 0x6	
	bool m_bLegacyWorldspace; // 0x7	
	bool m_bLegacyCyclepose; // 0x8	
	bool m_bLegacyRealtime; // 0x9	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimUser
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Follow Attachment"
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x40	
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48	
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x50	
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x51	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x10	
	VectorAligned m_vWsPositionEnd; // 0x20	
	Color m_Color; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x100
// Has VTable
class CAnimationGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CSmartPtr< CAnimParameterList > m_pParameterList; // 0x28	
	CSmartPtr< CAnimTagManager > m_pTagManager; // 0x30	
	CSmartPtr< CAnimMovementManager > m_pMovementManager; // 0x38	
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0x40	
	CSmartPtr< CActivityValueList > m_pActivityValuesList; // 0x48	
	AnimNodeID m_rootNodeID; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlString m_filePath; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// 
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CJiggleBoneItem
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x0	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8	
	// MPropertyFriendlyName "Sim Rate (FPS)"
	float m_flSimRateFPS; // 0xc	
	// MPropertyFriendlyName "Damping"
	// MPropertyAttributeRange "0 1"
	float m_flDamping; // 0x10	
	// MPropertyFriendlyName "Sim Space"
	JiggleBoneSimSpace m_eSimSpace; // 0x14	
	// MPropertyFriendlyName "Max"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMaxLS; // 0x18	
	// MPropertyFriendlyName "Min"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMinLS; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Foot Cycle Metric"
class CFootCycleMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "SteamVR Skeletal Input"
class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Motion Range"
	AnimVRHandMotionRange_t m_motionRange; // 0x38	
	// MPropertyFriendlyName "Enable IK"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableIK; // 0x3c	
	// MPropertyFriendlyName "Enable Collision"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableCollision; // 0x3d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Solve IK Chain"
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandGroup
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Look At"
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x3c	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x40	
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x44	
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x48	
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x50	
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	float m_flYawLimit; // 0x58	
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 180"
	float m_flPitchLimit; // 0x5c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x60	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x61	
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x62	
private:
	[[maybe_unused]] uint8_t __pad0063[0x1]; // 0x63
public:
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x64	
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Tag Condition"
class CTagCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28	
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Jiggle Bone"
class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandGroup
	CUtlVector< CJiggleBoneItem > m_items; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "FootFall Tag"
class CFootFallAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CAnimTagManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimBoneDifference
{
public:
	CBufferString m_name; // 0x0	
	CBufferString m_parent; // 0x10	
	Vector m_posError; // 0x20	
	bool m_bHasRotation; // 0x2c	
	bool m_bHasMovement; // 0x2d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Stop At Goal"
class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x3c	
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x40	
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x44	
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Path Status Condition"
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x28	
	bool m_bComparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x118
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x6]; // 0x1a
public:
	// -> m_flags - 0x20
	// -> m_localReferenceArray - 0x28
	// -> m_nGroupSize[2] - 0x40
	// -> m_nLocalPose[2] - 0x48
	// -> m_poseKeyArray0 - 0x50
	// -> m_poseKeyArray1 - 0x68
	// -> m_nLocalCyclePoseParameter - 0x80
	// -> m_bCalculatePoseParameters - 0x84
	CSeqMultiFetch m_fetch; // 0x20	
	int32_t m_nLocalWeightlist; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90	
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xa8	
	CSeqTransition m_transition; // 0xc0	
	KeyValues3 m_SequenceKeys; // 0xc8	
	CBufferString m_LegacyKeyValueText; // 0xd8	
	CUtlVector< CAnimActivity > m_activityArray; // 0xe8	
	CUtlVector< CFootMotion > m_footMotion; // 0x100	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Facing Condition"
class CFacingHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Parameter Condition"
class CParameterAnimCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_paramID; // 0x28	
	// MPropertyFriendlyName "Comparison Value"
	CAnimVariant m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
class CAnimTagSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	AnimTagID m_id; // 0x20	
	float m_fStartCycle; // 0x24	
	float m_fDuration; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Path Motor"
class CPathAnimMotor : public CBasePathAnimMotor
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CAnimNodeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Keyframe Animation"
class CSequenceAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x40	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x58	
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x60	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MPropertyFriendlyName "Strider"
class CFootLockAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandGroup
	CUtlVector< CFootLockItem > m_items; // 0x40	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x60	
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x64	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x68	
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x70	
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x74	
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x78	
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x79	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x7c	
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x80	
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90	
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00a9[0x3]; // 0xa9
public:
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xac	
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xb0	
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xb8	
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00bd[0x3]; // 0xbd
public:
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xc0	
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc4	
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xcc	
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd4	
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00dc[0x4]; // 0xdc
public:
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xe0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Time Condition"
class CTimeCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_comparisonValue; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Single Frame"
class CSingleFrameAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Frame"
	int32_t m_nFrameIndex; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MPropertyFriendlyName "Two-Bone IK"
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40	
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x50	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_attachmentName; // 0x60	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_targetBoneName; // 0x68	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_targetParam; // 0x70	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrStateCallback
	bool m_bMatchTargetOrientation; // 0x74	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Choice"
class CChoiceAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandGroup
	CUtlVector< CChoiceNodeChild > m_children; // 0x40	
	// MPropertyHideField
	int32_t m_seed; // 0x58	
	// MPropertyFriendlyName "Method"
	ChoiceMethod m_choiceMethod; // 0x5c	
	// MPropertyFriendlyName "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod; // 0x60	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Method"
	// MPropertyAttrChangeCallback
	ChoiceBlendMethod m_blendMethod; // 0x64	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Duration"
	// MPropertyAttrStateCallback
	float m_blendTime; // 0x68	
	// MPropertyFriendlyName "Reset On Selection"
	bool m_bResetChosen; // 0x6c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Future Velocity Metric"
class CFutureVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c	
	// MPropertyFriendlyName "Ignore Direction"
	bool m_bIgnoreDirection; // 0x30	
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	bool m_bAutoTargetSpeed; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
class CSeqPoseSetting
{
public:
	CBufferString m_sPoseParameter; // 0x0	
	CBufferString m_sAttachment; // 0x10	
	CBufferString m_sReferenceSequence; // 0x20	
	float m_flValue; // 0x30	
	bool m_bX; // 0x34	
	bool m_bY; // 0x35	
	bool m_bZ; // 0x36	
private:
	[[maybe_unused]] uint8_t __pad0037[0x1]; // 0x37
public:
	int32_t m_eType; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Path Metric"
class CPathMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyFriendlyName "Samples Times"
	CUtlVector< float32 > m_pathSamples; // 0x30	
	// MPropertyFriendlyName "Extrapolate Movement"
	// MPropertyAttrChangeCallback
	bool m_bExtrapolateMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Min Extrapolation Speed"
	// MPropertyAttrStateCallback
	float m_flMinExtrapolationSpeed; // 0x4c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Transition"
// MPropertyExtendedEditor
class CAnimStateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateConditionBase > > m_conditions; // 0x20	
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x38	
	// MPropertyHideField
	AnimStateID m_destState; // 0x3c	
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x44	
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	float m_flFixedCycleValue; // 0x48	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x4c	
	// MPropertyFriendlyName "Park Feet"
	bool m_bForceFootPlant; // 0x5c	
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x5d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
class CSeqAutoLayer
{
public:
	int16_t m_nLocalReference; // 0x0	
	int16_t m_nLocalPose; // 0x2	
	// -> m_bPost - 0x4
	// -> m_bSpline - 0x5
	// -> m_bXFade - 0x6
	// -> m_bNoBlend - 0x7
	// -> m_bLocal - 0x8
	// -> m_bPose - 0x9
	// -> m_bFetchFrame - 0xa
	// -> m_bSubtract - 0xb
	CSeqAutoLayerFlag m_flags; // 0x4	
	float m_start; // 0xc	
	float m_peak; // 0x10	
	float m_tail; // 0x14	
	float m_end; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Ground Condition"
class CGroundCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MPropertyFriendlyName "Networking"
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking "
	bool m_bNetworkingEnabled; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Path Helper"
class CPathHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x3c	
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xd8
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0	
	int32_t m_nFrames; // 0x10	
	int32_t m_nFramesPerBlock; // 0x14	
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18	
	// -> m_boneArray - 0x30
	// -> m_morphArray - 0x48
	// -> m_userArray - 0x60
	// -> m_bHasRotationBitArray - 0x78
	// -> m_bHasMovementBitArray - 0x90
	// -> m_bHasMorphBitArray - 0xa8
	// -> m_bHasUserBitArray - 0xc0
	CAnimEncodeDifference m_usageDifferences; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CAnimStateList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimState* > m_states; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Vector Parameter"
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x30	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
class CAnimGraphDebugReplay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	CAnimationGraph* m_pAnimGraph; // 0x40	
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48	
	int32_t m_startIndex; // 0x60	
	int32_t m_writeIndex; // 0x64	
	int32_t m_frameCount; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Player Input Motor"
class CPlayerInputAnimMotor : public CBasePathAnimMotor
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x48	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x54	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x58	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x5c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
class CParameterValue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	AnimParamID m_id; // 0x18	
	CAnimVariant m_value; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MPropertyFriendlyName "General"
class CAnimGraphGeneralSettings : public CAnimGraphSettingsGroup
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
class CSeqCmdSeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nFrameRangeSequence; // 0x24	
	int16_t m_nFrameCount; // 0x26	
	float m_flFPS; // 0x28	
	int16_t m_nSubCycles; // 0x2c	
	int16_t m_numLocalResults; // 0x2e	
	CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30	
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x48	
	CUtlVector< CAnimActivity > m_activityArray; // 0x60	
	CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x110
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0	
	matrix3x4a_t m_rootToWorld; // 0x10	
	bool m_bBonesInWorldSpace; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	CUtlVector< uint32 > m_boneSetupMask; // 0x48	
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60	
	CUtlVector< float32 > m_flexControllers; // 0x78	
	AnimationSnapshotType_t m_SnapshotType; // 0x90	
	bool m_bHasDecodeDump; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	// -> m_nEntityIndex - 0x98
	// -> m_modelName - 0xa0
	// -> m_poseParams - 0xa8
	// -> m_decodeOps - 0xc0
	// -> m_internalOps - 0xd8
	// -> m_decodedAnims - 0xf0
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Ragdoll Tag"
class CRagdollAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x30	
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x34	
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x38	
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x3c	
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x40	
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x44	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyElementNameFn
class CSolveIKChainAnimNodeChainData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_IkChain; // 0x8	
	// MPropertyFriendlyName "Solver Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10	
	// MPropertyFriendlyName "Override Solver Settings"
	// MPropertyAutoExpandGroup
	// MPropertyAttrStateCallback
	// -> m_SolverType - 0x14
	// -> m_nNumIterations - 0x18
	IKSolverSettings_t m_OverrideSolverSettings; // 0x14	
	// MPropertyFriendlyName "Target Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1c	
	// MPropertyFriendlyName "Override Target Settings"
	// MPropertyAutoExpandGroup
	// MPropertyAttrStateCallback
	// -> m_TargetSource - 0x20
	// -> m_Bone - 0x28
	// -> m_AnimgraphParameterNamePosition - 0x38
	// -> m_TargetCoordSystem - 0x3c
	IKTargetSettings_t m_OverrideTargetSettings; // 0x20	
	// MPropertyFriendlyName "Debug Setting"
	// MPropertyGroupName "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x40	
	// MPropertyFriendlyName "Debug Normalized Length"
	// MPropertyGroupName "Debug"
	float m_flDebugNormalizedLength; // 0x44	
	// MPropertyFriendlyName "Debug Offset"
	// MPropertyGroupName "Debug"
	Vector m_vDebugOffset; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nLocalBaseReference; // 0x24	
	int16_t m_nLocalBoneMask; // 0x26	
	CUtlVector< CAnimActivity > m_activityArray; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x120
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CUtlString m_modelName; // 0x118	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Move Heading Condition"
class CMoveHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MPropertyFriendlyName "Current Velocity Metric"
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CAnimActivity
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nActivity; // 0x10	
	int32_t m_nFlags; // 0x14	
	int32_t m_nWeight; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Status Tag"
class CTaskStatusAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x1b0
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0	
	// -> m_bLooping - 0x10
	// -> m_bAllZeros - 0x11
	// -> m_bHidden - 0x12
	// -> m_bDelta - 0x13
	// -> m_bLegacyWorldspace - 0x14
	CAnimDesc_Flag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	float fps; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// -> m_fileName - 0x20
	// -> m_nFrames - 0x30
	// -> m_nFramesPerBlock - 0x34
	// -> m_frameblockArray - 0x38
	// -> m_usageDifferences - 0x50
	CAnimEncodedFrames m_Data; // 0x20	
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8	
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110	
	CUtlVector< CAnimActivity > m_activityArray; // 0x128	
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140	
	float framestalltime; // 0x158	
	Vector m_vecRootMin; // 0x15c	
	Vector m_vecRootMax; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x178	
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x190	
	// -> m_flFadeInTime - 0x1a8
	// -> m_flFadeOutTime - 0x1ac
	CAnimSequenceParams m_sequenceParams; // 0x1a8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
class CSeqBoneMaskList
{
public:
	CBufferString m_sName; // 0x0	
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10	
	CUtlVector< float32 > m_flBoneWeightArray; // 0x28	
	float m_flDefaultMorphCtrlWeight; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Lean Matrix"
class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x44	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x48	
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x4c	
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// 
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CFootLockItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0	
	// MPropertyFriendlyName "Target Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_targetBoneName; // 0x8	
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x10	
	// MPropertyFriendlyName "Disable Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_disableTagID; // 0x18	
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x1c	
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x20	
	// MPropertyFriendlyName "Footstep Landed Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_footstepLandedTag; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x180
// Has VTable
class CAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	uint32_t m_nFlags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CBufferString m_name; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60	
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78	
	CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90	
	// -> m_name - 0x98
	// -> m_boneArray - 0xa8
	// -> m_userArray - 0xc0
	// -> m_morphArray - 0xd8
	// -> m_nChannelElements - 0xf0
	// -> m_dataChannelArray - 0xf8
	CAnimKeyData m_decodeKey; // 0x98	
	// -> m_bEnableRetarget - 0x110
	// -> m_nRetargetStyle - 0x114
	// -> m_element - 0x118
	// -> m_chain - 0x130
	// -> m_replicated - 0x148
	CAnimRetargetData m_retarget; // 0x110	
	CUtlVector< CBufferString > m_szScripts; // 0x160	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Int Parameter"
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x30	
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x34	
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Speed Scale"
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Turn Helper"
class CTurnHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x3c	
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x40	
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x44	
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x48	
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x4c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Cycle Control"
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_valueSource; // 0x3c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Sequence Finished Tag"
class CSequenceFinishedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Bool Parameter"
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Set Facing"
class CSetFacingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Facing Mode"
	FacingMode m_facingMode; // 0x3c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0	
	int32_t m_nEndFrame; // 0x4	
	CUtlVector< int32 > m_segmentIndexArray; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
class CModelConfigElement
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_ElementName; // 0x8	
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0	
	float flWeight; // 0x4	
	uint32_t nMatrixNode; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x38
class CFingerBone
{
public:
	CUtlString m_boneName; // 0x0	
	Vector m_hingeAxis; // 0x8	
	Vector m_vCapsulePos1; // 0x14	
	Vector m_vCapsulePos2; // 0x20	
	float m_flMinAngle; // 0x2c	
	float m_flMaxAngle; // 0x30	
	float m_flRadius; // 0x34	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
class FourVectors2D
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 1
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0	
	uint8_t m_nTwin; // 0x1	
	uint8_t m_nOrigin; // 0x2	
	uint8_t m_nFace; // 0x3	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x90
struct PhysSoftbodyDesc_t
{
public:
	CUtlVector< uint32 > m_ParticleBoneHash; // 0x0	
	CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18	
	CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30	
	CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48	
	CUtlVector< CTransform > m_InitPose; // 0x60	
	CUtlVector< CUtlString > m_ParticleBoneName; // 0x78	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0	
	uint16_t nNode; // 0x4	
	uint16_t nDummy; // 0x6	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct FeRodConstraint_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flMinDist; // 0x8	
	float flWeight0; // 0xc	
	float flRelaxationFactor; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Constructor
// Has Trivial Destructor
class CPhysSurfacePropertiesAudio
{
public:
	float m_reflectivity; // 0x0	
	float m_hardnessFactor; // 0x4	
	float m_roughnessFactor; // 0x8	
	float m_roughThreshold; // 0xc	
	float m_hardThreshold; // 0x10	
	// MDefaultString
	float m_hardVelocityThreshold; // 0x14	
	float m_flStaticImpactVolume; // 0x18	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CBoneConstraintBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
struct FeTreeChildren_t
{
public:
	uint16_t nChild[2]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x78
struct VPhysics2ShapeDef_t
{
public:
	CUtlVector< RnSphereDesc_t > m_spheres; // 0x0	
	CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18	
	CUtlVector< RnHullDesc_t > m_hulls; // 0x30	
	CUtlVector< RnMeshDesc_t > m_meshes; // 0x48	
	CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x10
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0	
	uint32_t m_nSurfacePropertyIndex; // 0x4	
	CUtlString m_UserFriendlyName; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0	
	Vector m_vecSize; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0	
	float flAlpha; // 0x4	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
// Has VTable
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
struct FeTaperedCapsuleRigid_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nCollisionMask; // 0x2	
	Vector vCenter[2]; // 0x4	
	float flRadius[2]; // 0x1c	
	float flStickiness; // 0x24	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct FeSphereRigid_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nCollisionMask; // 0x2	
	Vector vCenter; // 0x4	
	float flRadius; // 0x10	
	float flStickiness; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
struct RnCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x60
// Has Trivial Destructor
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0	
	fltx4 m_flXY; // 0x30	
	fltx4 m_flXZ; // 0x40	
	fltx4 m_flYZ; // 0x50	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 2
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct VPhysXDiskShapeHeader_t
{
public:
	uint8_t m_nType; // 0x0	
	uint16_t m_nCollisionAttribute; // 0x2	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x18
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0	
	float tv; // 0x4	
	float flDist; // 0x8	
	float flWeight[4]; // 0xc	
	uint16_t nNode[6]; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
struct FeSourceEdge_t
{
public:
	uint16_t nNode[2]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
class CBaseConstraint : public CBoneConstraintBase
{
public:
	CUtlString m_name; // 0x28	
	Vector m_vUpVector; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	CUtlVector< CConstraintSlave > m_slaves; // 0x40	
	CUtlVector< CConstraintTarget > m_targets; // 0x58	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0xf8
// Has Trivial Destructor
struct VPhysXConstraintParams_t
{
public:
	int8_t m_nType; // 0x0	
	int8_t m_nTranslateMotion; // 0x1	
	int8_t m_nRotateMotion; // 0x2	
	int8_t m_nFlags; // 0x3	
	Vector m_anchor[2]; // 0x4	
	Quaternion m_axes[2]; // 0x1c	
	float m_maxForce; // 0x3c	
	float m_maxTorque; // 0x40	
	float m_linearLimitValue; // 0x44	
	float m_linearLimitRestitution; // 0x48	
	float m_linearLimitSpring; // 0x4c	
	float m_linearLimitDamping; // 0x50	
	float m_twistLowLimitValue; // 0x54	
	float m_twistLowLimitRestitution; // 0x58	
	float m_twistLowLimitSpring; // 0x5c	
	float m_twistLowLimitDamping; // 0x60	
	float m_twistHighLimitValue; // 0x64	
	float m_twistHighLimitRestitution; // 0x68	
	float m_twistHighLimitSpring; // 0x6c	
	float m_twistHighLimitDamping; // 0x70	
	float m_swing1LimitValue; // 0x74	
	float m_swing1LimitRestitution; // 0x78	
	float m_swing1LimitSpring; // 0x7c	
	float m_swing1LimitDamping; // 0x80	
	float m_swing2LimitValue; // 0x84	
	float m_swing2LimitRestitution; // 0x88	
	float m_swing2LimitSpring; // 0x8c	
	float m_swing2LimitDamping; // 0x90	
	Vector m_goalPosition; // 0x94	
	Quaternion m_goalOrientation; // 0xa0	
	Vector m_goalAngularVelocity; // 0xb0	
	float m_driveSpringX; // 0xbc	
	float m_driveSpringY; // 0xc0	
	float m_driveSpringZ; // 0xc4	
	float m_driveDampingX; // 0xc8	
	float m_driveDampingY; // 0xcc	
	float m_driveDampingZ; // 0xd0	
	float m_driveSpringTwist; // 0xd4	
	float m_driveSpringSwing; // 0xd8	
	float m_driveSpringSlerp; // 0xdc	
	float m_driveDampingTwist; // 0xe0	
	float m_driveDampingSwing; // 0xe4	
	float m_driveDampingSlerp; // 0xe8	
	int32_t m_solverIterationCount; // 0xec	
	float m_projectionLinearTolerance; // 0xf0	
	float m_projectionAngularTolerance; // 0xf4	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x70
// Has VTable
class CPointConstraint : public CBaseConstraint
{
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x14
// Has Trivial Constructor
// Has Trivial Destructor
class CPhysSurfacePropertiesPhysics
{
public:
	float m_friction; // 0x0	
	float m_elasticity; // 0x4	
	float m_density; // 0x8	
	// MDefaultString
	float m_thickness; // 0xc	
	float m_dampening; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0	
	CUtlVector< int32 > m_boneParents; // 0x30	
	int32_t m_nBoneWeightCount; // 0x48	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28	
	CUtlString m_sAttachmentName; // 0x30	
	CUtlVector< CUtlString > m_outputMorph; // 0x38	
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50	
	bool m_bClamp; // 0x68	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x98
// Has VTable
class CBoneConstraintPoseSpaceBone : public CBaseConstraint
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x68
// Has Trivial Constructor
// Has Trivial Destructor
struct Dop26_t
{
public:
	float m_flSupport[26]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x18
class CVPhysXSurfacePropertiesList
{
public:
	CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CTiltTwistConstraint : public CBaseConstraint
{
public:
	int32_t m_nTargetAxis; // 0x70	
	int32_t m_nSlaveAxis; // 0x74	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xd8
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0	
	float m_flMaxAngularRadius; // 0xc	
	CUtlVector< Vector > m_Vertices; // 0x10	
	CUtlVector< RnPlane_t > m_Planes; // 0x28	
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x40	
	CUtlVector< RnFace_t > m_Faces; // 0x58	
	Vector m_vOrthographicAreas; // 0x70	
	matrix3x4_t m_MassProperties; // 0x7c	
	float m_flVolume; // 0xac	
	float m_flMaxMotionRadius; // 0xb0	
	float m_flMinMotionThickness; // 0xb4	
	// -> m_vMinBounds - 0xb8
	// -> m_vMaxBounds - 0xc4
	AABB_t m_Bounds; // 0xb8	
	uint32_t m_nFlags; // 0xd0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0	
	CUtlVector< CFlexOp > m_FlexOps; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0	
	CUtlString m_parentName; // 0x8	
	matrix3x4_t m_invBindPose; // 0x10	
	// -> m_vecCenter - 0x40
	// -> m_vecSize - 0x4c
	SkeletonBoneBounds_t m_bbox; // 0x40	
	float m_flSphereRadius; // 0x58	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0	
	CUtlString m_flexController; // 0x8	
	uint32_t m_flexControllerToken; // 0x10	
	float m_flMin; // 0x14	
	float m_flMax; // 0x18	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x98
// Has VTable
class CTwistConstraint : public CBaseConstraint
{
public:
	bool m_bInverse; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	Quaternion m_qParentBindRotation; // 0x74	
	Quaternion m_qChildBindRotation; // 0x84	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0	
	float m_flXY; // 0xc	
	float m_flXZ; // 0x10	
	float m_flYZ; // 0x14	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xb8
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0	
	float m_flMass; // 0x4	
	// -> m_spheres - 0x8
	// -> m_capsules - 0x20
	// -> m_hulls - 0x38
	// -> m_meshes - 0x50
	// -> m_CollisionAttributeIndices - 0x68
	VPhysics2ShapeDef_t m_rnShape; // 0x8	
	CUtlVector< uint8 > m_nSurfacepropertyIndices; // 0x80	
	uint16_t m_nCollisionAttributeIndex; // 0x98	
	uint16_t m_nReserved; // 0x9a	
	float m_flInertiaScale; // 0x9c	
	float m_flLinearDamping; // 0xa0	
	float m_flAngularDamping; // 0xa4	
	bool m_bOverrideMassCenter; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00a9[0x3]; // 0xa9
public:
	Vector m_vMassCenterOverride; // 0xac	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10	
	CUtlVector< CBaseConstraint* > m_constraints; // 0x88	
	// -> m_bones - 0xa0
	// -> m_boneParents - 0xd0
	// -> m_nBoneWeightCount - 0xe8
	CRenderSkeleton m_skeleton; // 0xa0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x30
class CWristBone
{
public:
	CUtlString m_name; // 0x0	
	Vector m_vForwardLS; // 0x8	
	Vector m_vUpLS; // 0x14	
	Vector m_vOffset; // 0x20	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xe8
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct FeCollisionSphere_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	float m_flRFactor; // 0x4	
	Vector m_vOrigin; // 0x8	
	float flStickiness; // 0x14	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0	
	float m_flFingerWeight; // 0x4	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x18
class CFlexController
{
public:
	CUtlString m_szName; // 0x0	
	CUtlString m_szType; // 0x8	
	float min; // 0x10	
	float max; // 0x14	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class CFootTrajectory
{
public:
	Vector m_vOffset; // 0x0	
	float m_flRotationOffset; // 0xc	
	float m_flProgression; // 0x10	
	
	// Static fields:
	static CFootTrajectory &Get_Identity(){return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->m_static_fields[0]->m_instance);};
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
struct FeTri_t
{
public:
	uint16_t nNode[3]; // 0x0	
	float w1; // 0x8	
	float w2; // 0xc	
	float v1x; // 0x10	
	Vector2D v2; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nDummy[3]; // 0x2	
	uint16_t nNodeX0; // 0x8	
	uint16_t nNodeX1; // 0xa	
	uint16_t nNodeY0; // 0xc	
	uint16_t nNodeY1; // 0xe	
	Quaternion qAdjust; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x40
class CPhysSurfacePropertiesSoundNames
{
public:
	CUtlString m_impactSoft; // 0x0	
	CUtlString m_impactHard; // 0x8	
	CUtlString m_scrapeSmooth; // 0x10	
	CUtlString m_scrapeRough; // 0x18	
	CUtlString m_bulletImpact; // 0x20	
	CUtlString m_rolling; // 0x28	
	CUtlString m_break; // 0x30	
	CUtlString m_strain; // 0x38	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
struct CBoneConstraintPoseSpaceBone__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< CTransform > m_outputTransformList; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x70
class CFingerChain
{
public:
	CUtlVector< CFingerSource > m_targets; // 0x0	
	CUtlVector< CFingerBone > m_bones; // 0x18	
	CUtlString m_name; // 0x30	
	CUtlString m_tipParentBoneName; // 0x38	
	Vector m_vTipOffset; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_metacarpalBoneName; // 0x50	
	Vector m_vSplayHingeAxis; // 0x58	
	float m_flSplayMinAngle; // 0x64	
	float m_flSplayMaxAngle; // 0x68	
	float m_flFingerScaleRatio; // 0x6c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
struct RnSoftbodyCapsule_t
{
public:
	Vector m_vCenter[2]; // 0x0	
	float m_flRadius; // 0x18	
	uint16_t m_nParticle[2]; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct FeCtrlOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
	Vector vOffset; // 0x4	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xb0
// Has VTable
class CMorphConstraint : public CBaseConstraint
{
public:
	bool m_bCacheAttempted; // 0x70	
	bool m_bCacheOk; // 0x71	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	CUtlString m_sTargetMorph; // 0x78	
	int32_t m_nSlaveChannel; // 0x80	
	float m_flMin; // 0x84	
	float m_flMax; // 0x88	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int32_t m_nWidth; // 0x10	
	int32_t m_nHeight; // 0x14	
	MorphLookupType_t m_nLookupType; // 0x18	
	MorphEncodingType_t m_nEncodingType; // 0x1c	
	CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x20	
	CUtlVector< CMorphData > m_morphDatas; // 0x38	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x50	
	CUtlVector< CFlexDesc > m_FlexDesc; // 0x58	
	CUtlVector< CFlexController > m_FlexControllers; // 0x70	
	CUtlVector< CFlexRule > m_FlexRules; // 0x88	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x90
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
	uint32_t m_nFlags; // 0x88	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0	
	uint32_t m_nBindOffsetBytes; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
struct FeBoxRigid_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nCollisionMask; // 0x2	
	Vector vSize; // 0x4	
	float flStickiness; // 0x10	
	float flReserved[3]; // 0x14	
	matrix3x4a_t tmFrame; // 0x20	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
struct VPhysXDiskMesh2_t : public VPhysXDiskShapeHeader_t
{
public:
	CResourceArray< uint8 > m_shape; // 0x4	
	float m_flSkinWidth; // 0xc	
	float m_flMaxVelocity; // 0x10	
	uint32_t m_nReserved2[2]; // 0x14	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
class CCycleBase
{
public:
	float m_flCycle; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x58
class CConstraintSlave
{
public:
	uint32_t m_nBoneHash; // 0x0	
	float m_flWeight; // 0x4	
	Vector m_vBasePosition; // 0x8	
	Quaternion m_qBaseOrientation; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlString m_sName; // 0x28	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x30
class CHitBoxSet
{
public:
	CUtlString m_name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHitBox > m_HitBoxes; // 0x10	
	CUtlString m_SourceFilename; // 0x28	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x20
// Has Trivial Destructor
struct VPhysXDiskCapsule_t : public VPhysXDiskShapeHeader_t
{
public:
	Vector m_vEnds[2]; // 0x4	
	float m_flRadius; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
class CVrSkeletalInputSettings
{
public:
	CUtlVector< CWristBone > m_wristBones; // 0x0	
	CUtlVector< CFingerChain > m_fingers; // 0x18	
	CUtlString m_name; // 0x30	
	CUtlString m_outerKnuckle1; // 0x38	
	CUtlString m_outerKnuckle2; // 0x40	
	AnimVRHand_t m_eHand; // 0x48	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
class CFootCycle : public CCycleBase
{
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x580
struct PhysFeModelDesc_t
{
public:
	CUtlVector< uint32 > m_CtrlHash; // 0x0	
	CUtlVector< CUtlString > m_CtrlName; // 0x18	
	uint32_t m_nStaticNodeFlags; // 0x30	
	uint32_t m_nDynamicNodeFlags; // 0x34	
	float m_flLocalForce; // 0x38	
	float m_flLocalRotation; // 0x3c	
	uint16_t m_nNodeCount; // 0x40	
	uint16_t m_nStaticNodes; // 0x42	
	uint16_t m_nRotLockStaticNodes; // 0x44	
	uint16_t m_nSimdTriCount1; // 0x46	
	uint16_t m_nSimdTriCount2; // 0x48	
	uint16_t m_nSimdQuadCount1; // 0x4a	
	uint16_t m_nSimdQuadCount2; // 0x4c	
	uint16_t m_nQuadCount1; // 0x4e	
	uint16_t m_nQuadCount2; // 0x50	
	uint16_t m_nCollisionSphereInclusiveCount; // 0x52	
	uint16_t m_nTreeDepth; // 0x54	
	uint16_t m_nFitMatrixCount1; // 0x56	
	uint16_t m_nFitMatrixCount2; // 0x58	
	uint16_t m_nSimdFitMatrixCount1; // 0x5a	
	uint16_t m_nSimdFitMatrixCount2; // 0x5c	
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x5e	
	uint16_t m_nRopeCount; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0062[0x6]; // 0x62
public:
	CUtlVector< uint16 > m_Ropes; // 0x68	
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x80	
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x98	
	CUtlVector< FeQuad_t > m_Quads; // 0xb0	
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc8	
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xe0	
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf8	
	CUtlVector< CTransform > m_InitPose; // 0x110	
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x128	
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x140	
	CUtlVector< float32 > m_NodeInvMasses; // 0x158	
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x170	
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x188	
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1a0	
	CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1b8	
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1d0	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1e8	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x200	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x218	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x230	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x248	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x260	
	CUtlVector< float32 > m_DynNodeFriction; // 0x278	
	CUtlVector< float32 > m_LocalRotation; // 0x290	
	CUtlVector< float32 > m_LocalForce; // 0x2a8	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2c0	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2d8	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x2f0	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x308	
	CUtlVector< uint16 > m_TreeParents; // 0x320	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x338	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x350	
	CUtlVector< uint16 > m_FreeNodes; // 0x368	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x380	
	CUtlVector< FeSimdFitMatrices_t > m_SimdFitMatrices; // 0x398	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3b0	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c8	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3e0	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f8	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x410	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x428	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x440	
	CUtlVector< uint16 > m_SourceElems; // 0x458	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x470	
	CUtlVector< FeTri_t > m_Tris; // 0x488	
	uint16_t m_nTriCount1; // 0x4a0	
	uint16_t m_nTriCount2; // 0x4a2	
	uint8_t m_nReservedUint8; // 0x4a4	
	uint8_t m_nExtraPressureIterations; // 0x4a5	
	uint8_t m_nExtraGoalIterations; // 0x4a6	
	uint8_t m_nExtraIterations; // 0x4a7	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a8	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4c0	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d8	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4f0	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x508	
	CUtlVector< uint8 > m_MorphSetData; // 0x520	
	float m_flInternalPressure; // 0x538	
	float m_flWindage; // 0x53c	
	float m_flWindDrag; // 0x540	
	float m_flDefaultSurfaceStretch; // 0x544	
	float m_flDefaultThreadStretch; // 0x548	
	float m_flDefaultGravityScale; // 0x54c	
	float m_flDefaultVelAirDrag; // 0x550	
	float m_flDefaultExpAirDrag; // 0x554	
	float m_flDefaultVelQuadAirDrag; // 0x558	
	float m_flDefaultExpQuadAirDrag; // 0x55c	
	float m_flDefaultVelRodAirDrag; // 0x560	
	float m_flDefaultExpRodAirDrag; // 0x564	
	float m_flRodVelocitySmoothRate; // 0x568	
	float m_flQuadVelocitySmoothRate; // 0x56c	
	float m_flAddWorldCollisionRadius; // 0x570	
	float m_flDefaultVolumetricSolveAmount; // 0x574	
	uint16_t m_nRodVelocitySmoothIterations; // 0x578	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x57a	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0	
	float m_flOffset; // 0xc	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
// Has VTable
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0xc
// Has Trivial Destructor
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0	
	uint16_t m_nSphereRigidIndex; // 0x2	
	uint16_t m_nBoxRigidIndex; // 0x4	
	uint16_t m_nCollisionSphereIndex[2]; // 0x6	
	uint16_t m_nCollisionPlaneIndex; // 0xa	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0	
	float m_flRadius; // 0xc	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
struct CBoneConstraintPoseSpaceMorph__Input_t
{
public:
	Vector m_inputValue; // 0x0	
	CUtlVector< float32 > m_outputWeightList; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
class CFlexOp
{
public:
	FlexOpCode_t m_OpCode; // 0x0	
	int32_t m_Data; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct FeKelagerBend2_t
{
public:
	float flWeight[3]; // 0x0	
	float flHeight0; // 0xc	
	uint16_t nNode[3]; // 0x10	
	uint16_t nReserved; // 0x16	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// Has VTable
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48	
	KeyValues3 m_Args; // 0x50	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x80
// Has Trivial Destructor
struct FeSimdTri_t
{
public:
	uint32_t nNode[3][4]; // 0x0	
	fltx4 w1; // 0x30	
	fltx4 w2; // 0x40	
	fltx4 v1x; // 0x50	
	// -> x - 0x60
	// -> y - 0x70
	FourVectors2D v2; // 0x60	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct FeSpringIntegrator_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flSpringRestLength; // 0x4	
	float flSpringConstant; // 0x8	
	float flSpringDamping; // 0xc	
	float flNodeWeight0; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x90
struct ModelSkeletonData_t
{
public:
	CUtlVector< CUtlString > m_boneName; // 0x0	
	CUtlVector< int16 > m_nParent; // 0x18	
	CUtlVector< float32 > m_boneSphere; // 0x30	
	CUtlVector< uint32 > m_nFlag; // 0x48	
	CUtlVector< Vector > m_bonePosParent; // 0x60	
	CUtlVector< Quaternion > m_boneRotParent; // 0x78	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x4
// Has Trivial Destructor
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0	
	uint16_t nWeight; // 0x2	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x70
// Has VTable
class CParentConstraint : public CBaseConstraint
{
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0	
	int16_t m_nYTopDst; // 0x2	
	float m_flUWidthSrc; // 0x4	
	float m_flVHeightSrc; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x4c
// Has Trivial Destructor
struct FeQuad_t
{
public:
	uint16_t nNode[4]; // 0x0	
	float flSlack; // 0x8	
	Vector4D vShape[4]; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x70
// Has Trivial Destructor
struct FeSimdNodeBase_t
{
public:
	uint16_t nNode[4]; // 0x0	
	uint16_t nNodeX0[4]; // 0x8	
	uint16_t nNodeX1[4]; // 0x10	
	uint16_t nNodeY0[4]; // 0x18	
	uint16_t nNodeY1[4]; // 0x20	
	uint16_t nDummy[4]; // 0x28	
	// -> x - 0x30
	// -> y - 0x40
	// -> z - 0x50
	// -> w - 0x60
	FourQuaternions qAdjust; // 0x30	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
struct FeSimdSpringIntegrator_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flSpringRestLength; // 0x10	
	fltx4 flSpringConstant; // 0x20	
	fltx4 flSpringDamping; // 0x30	
	fltx4 flNodeWeight0; // 0x40	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x130
// Has Trivial Destructor
struct FeSimdQuad_t
{
public:
	uint16_t nNode[4][4]; // 0x0	
	fltx4 f4Slack; // 0x20	
	FourVectors vShape[4]; // 0x30	
	fltx4 f4Weights[4]; // 0xf0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// Has VTable
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0	
	Vector vCenter; // 0x20	
	uint16_t nEnd; // 0x2c	
	uint16_t nNode; // 0x2e	
	uint16_t nCtrl; // 0x30	
	uint16_t nBeginDynamic; // 0x32	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x20
// Has Trivial Destructor
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0	
	uint32_t m_nChildren; // 0xc	
	Vector m_vMax; // 0x10	
	uint32_t m_nTriangleOffset; // 0x1c	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x58
// Has VTable
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48	
	int32_t m_nChoice; // 0x50	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0	
	float flGroundFriction; // 0x4	
	uint16_t nListBegin; // 0x8	
	uint16_t nListEnd; // 0xa	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
class CPhysSurfaceProperties
{
public:
	CUtlString m_name; // 0x0	
	uint32_t m_nameHash; // 0x8	
	uint32_t m_baseNameHash; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	bool m_bHidden; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	CUtlString m_description; // 0x20	
	// -> m_friction - 0x28
	// -> m_elasticity - 0x2c
	// -> m_density - 0x30
	// -> m_thickness - 0x34
	// -> m_dampening - 0x38
	CPhysSurfacePropertiesPhysics m_physics; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// -> m_impactSoft - 0x40
	// -> m_impactHard - 0x48
	// -> m_scrapeSmooth - 0x50
	// -> m_scrapeRough - 0x58
	// -> m_bulletImpact - 0x60
	// -> m_rolling - 0x68
	// -> m_break - 0x70
	// -> m_strain - 0x78
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x40	
	// -> m_reflectivity - 0x80
	// -> m_hardnessFactor - 0x84
	// -> m_roughnessFactor - 0x88
	// -> m_roughThreshold - 0x8c
	// -> m_hardThreshold - 0x90
	// -> m_hardVelocityThreshold - 0x94
	// -> m_flStaticImpactVolume - 0x98
	CPhysSurfacePropertiesAudio m_audioParams; // 0x80	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x9c
// Has Trivial Destructor
class CFeJiggleBone
{
public:
	uint32_t m_nFlags; // 0x0	
	float m_flLength; // 0x4	
	float m_flTipMass; // 0x8	
	float m_flYawStiffness; // 0xc	
	float m_flYawDamping; // 0x10	
	float m_flPitchStiffness; // 0x14	
	float m_flPitchDamping; // 0x18	
	float m_flAlongStiffness; // 0x1c	
	float m_flAlongDamping; // 0x20	
	float m_flAngleLimit; // 0x24	
	float m_flMinYaw; // 0x28	
	float m_flMaxYaw; // 0x2c	
	float m_flYawFriction; // 0x30	
	float m_flYawBounce; // 0x34	
	float m_flMinPitch; // 0x38	
	float m_flMaxPitch; // 0x3c	
	float m_flPitchFriction; // 0x40	
	float m_flPitchBounce; // 0x44	
	float m_flBaseMass; // 0x48	
	float m_flBaseStiffness; // 0x4c	
	float m_flBaseDamping; // 0x50	
	float m_flBaseMinLeft; // 0x54	
	float m_flBaseMaxLeft; // 0x58	
	float m_flBaseLeftFriction; // 0x5c	
	float m_flBaseMinUp; // 0x60	
	float m_flBaseMaxUp; // 0x64	
	float m_flBaseUpFriction; // 0x68	
	float m_flBaseMinForward; // 0x6c	
	float m_flBaseMaxForward; // 0x70	
	float m_flBaseForwardFriction; // 0x74	
	float m_flRadius0; // 0x78	
	float m_flRadius1; // 0x7c	
	Vector m_vPoint0; // 0x80	
	Vector m_vPoint1; // 0x8c	
	uint16_t m_nCollisionMask; // 0x98	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nChildNode; // 0x2	
	// -> m_vNormal - 0x4
	// -> m_flOffset - 0x10
	RnPlane_t m_Plane; // 0x4	
	float flStickiness; // 0x14	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct FeNodeReverseOffset_t
{
public:
	uint16_t nBoneCtrl; // 0x0	
	uint16_t nTargetNode; // 0x2	
	Vector vOffset; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x88
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0	
	Vector m_vMax; // 0xc	
	CUtlVector< RnNode_t > m_Nodes; // 0x18	
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30	
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48	
	CUtlVector< uint8 > m_Materials; // 0x60	
	Vector m_vOrthographicAreas; // 0x78	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
class CAnimCycle : public CCycleBase
{
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 2
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct FeEdgeDesc_t
{
public:
	uint16_t nEdge[2]; // 0x0	
	uint16_t nSide[2][2]; // 0x4	
	uint16_t nVirtElem[2]; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
struct FeAnimStrayRadius_t
{
public:
	uint16_t nNode[2]; // 0x0	
	float flMaxDist; // 0x4	
	float flRelaxationFactor; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x28	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x18
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 16
// Size: 0x40
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0	
	CUtlString m_Name; // 0x20	
	int32_t m_nParent; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x40
class CFootDefinition
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_ankleBoneName; // 0x8	
	CUtlString m_toeBoneName; // 0x10	
	Vector m_vBallOffset; // 0x18	
	Vector m_vHeelOffset; // 0x24	
	float m_flFootLength; // 0x30	
	float m_flBindPoseDirectionMS; // 0x34	
	float m_flTraceHeight; // 0x38	
	float m_flTraceRadius; // 0x3c	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
class CConstraintTarget
{
public:
	uint32_t m_nBoneHash; // 0x0	
	float m_flWeight; // 0x4	
	Vector m_vOffset; // 0x8	
	Quaternion m_qOffset; // 0x14	
	bool m_bIsAttachment; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	CUtlString m_sName; // 0x28	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0	
	uint16_t nCtrlChild; // 0x2	
	Vector vOffset; // 0x4	
	float flAlpha; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x100
// Has Trivial Destructor
struct VPhysXConstraint2_t
{
public:
	uint32_t m_nFlags; // 0x0	
	uint16_t m_nParent; // 0x4	
	uint16_t m_nChild; // 0x6	
	VPhysXConstraintParams_t m_params; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// Has VTable
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x88
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0	
	uint32_t m_nNameHash; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< uint16 > m_Nodes; // 0x10	
	CUtlVector< Vector > m_InitPos; // 0x28	
	CUtlVector< float32 > m_Gravity; // 0x40	
	CUtlVector< float32 > m_GoalStrength; // 0x58	
	CUtlVector< float32 > m_GoalDamping; // 0x70	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct RnBlendVertex_t
{
public:
	uint16_t m_nWeight0; // 0x0	
	uint16_t m_nIndex0; // 0x2	
	uint16_t m_nWeight1; // 0x4	
	uint16_t m_nIndex1; // 0x6	
	uint16_t m_nWeight2; // 0x8	
	uint16_t m_nIndex2; // 0xa	
	uint16_t m_nFlags; // 0xc	
	uint16_t m_nTargetIndex; // 0xe	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x70
// Has VTable
class COrientConstraint : public CBaseConstraint
{
public:
	// No schema binary for binding
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x58
struct PermModelInfo_t
{
public:
	uint32_t m_nFlags; // 0x0	
	Vector m_vHullMin; // 0x4	
	Vector m_vHullMax; // 0x10	
	Vector m_vViewMin; // 0x1c	
	Vector m_vViewMax; // 0x28	
	float m_flMass; // 0x34	
	Vector m_vEyePosition; // 0x38	
	float m_flMaxEyeDeflection; // 0x44	
	CUtlString m_sSurfaceProperty; // 0x48	
	CUtlString m_keyValueText; // 0x50	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct RnSoftbodySpring_t
{
public:
	uint16_t m_nParticle[2]; // 0x0	
	float m_flLength; // 0x4	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x78
class CHitBox
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	CUtlString m_name; // 0x30	
	CUtlString m_sSurfaceProperty; // 0x38	
	CUtlString m_sBoneName; // 0x40	
	uint32_t m_nBoneNameHash; // 0x48	
	int32_t m_nGroupId; // 0x4c	
	Color m_cRenderColor; // 0x50	
	uint16_t m_nHitBoxIndex; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	Vector m_vMinBounds; // 0x58	
	Vector m_vMaxBounds; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0070[0x1]; // 0x70
public:
	bool m_bTranslationOnly; // 0x71	
	bool m_bVisible; // 0x72	
	bool m_bSelected; // 0x73	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct VPhysXShapeCompoundHeader2_t : public VPhysXDiskShapeHeader_t
{
public:
	CResourceArray< CResourceArray< uint8 > > m_components; // 0x4	
	CResourceArray< uint8 > m_types; // 0xc	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0	
	Vector m_vNormal; // 0xc	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xd0
class CMaterialDrawDescriptor
{
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x0	
	int32_t m_nBaseVertex; // 0x4	
	int32_t m_nVertexCount; // 0x8	
	int32_t m_nStartIndex; // 0xc	
	int32_t m_nIndexCount; // 0x10	
	int32_t m_nStartInstance; // 0x14	
	int32_t m_nInstanceCount; // 0x18	
	float m_flUvDensity; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad0020[0x4]; // 0x20
public:
	// MDefaultString
	Vector m_vTintColor; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
public:
	int8_t m_CullDataIndex; // 0x32	
private:
	[[maybe_unused]] uint8_t __pad0033[0x7d]; // 0x33
public:
	// -> m_hBuffer - 0xb0
	// -> m_nBindOffsetBytes - 0xb8
	CRenderBufferBinding m_indexBuffer; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xc8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x88
// Has VTable
class CAimConstraint : public CBaseConstraint
{
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0xc0
// Has Trivial Destructor
struct FeSimdFitMatrices_t
{
public:
	FourVectors vCenter; // 0x0	
	uint16_t nEnd[4]; // 0x30	
	uint16_t nCtrl[4]; // 0x38	
	// -> m_vDiag - 0x40
	// -> m_flXY - 0x70
	// -> m_flXZ - 0x80
	// -> m_flYZ - 0x90
	FourCovMatrices3 AqqInv; // 0x40	
	fltx4 flStretchMin; // 0xa0	
	fltx4 flStretchMax; // 0xb0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// Has VTable
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x38
class CMorphBundleData
{
public:
	float m_flULeftSrc; // 0x0	
	float m_flVTopSrc; // 0x4	
	CUtlVector< float32 > m_offsets; // 0x8	
	CUtlVector< float32 > m_ranges; // 0x20	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x98
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vMin - 0x10
	// -> m_vMax - 0x1c
	// -> m_Nodes - 0x28
	// -> m_Vertices - 0x40
	// -> m_Triangles - 0x58
	// -> m_Materials - 0x70
	// -> m_vOrthographicAreas - 0x88
	RnMesh_t m_Mesh; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0	
	uint16_t nChildNode; // 0x2	
	float flWeight; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x48
// Has Trivial Destructor
struct OldFeEdge_t
{
public:
	float m_flK[3]; // 0x0	
	float invA; // 0xc	
	float t; // 0x10	
	float flThetaRelaxed; // 0x14	
	float flThetaFactor; // 0x18	
	float c01; // 0x1c	
	float c02; // 0x20	
	float c03; // 0x24	
	float c04; // 0x28	
	float flAxialModelDist; // 0x2c	
	float flAxialModelWeights[4]; // 0x30	
	uint16_t m_nNode[4]; // 0x40	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x40
// Has Trivial Destructor
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0	
	Vector m_vMidpointPositionMS; // 0xc	
	float m_flStanceDirectionMS; // 0x18	
	Vector m_vToStrideStartPos; // 0x1c	
	float m_flMaxExtent; // 0x28	
	CAnimCycle m_stanceCycle; // 0x2c	
	CFootCycle m_footLiftCycle; // 0x30	
	CFootCycle m_footOffCycle; // 0x34	
	CFootCycle m_footStrikeCycle; // 0x38	
	CFootCycle m_footLandCycle; // 0x3c	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0	
	float m_flMax; // 0x4	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0xd0
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0	
	CTransform m_transform; // 0x10	
	uint32_t m_nJiggleParent; // 0x30	
	CFeJiggleBone m_jiggleBone; // 0x34	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x138
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0	
	uint16_t m_nRefCounter; // 0x2	
private:
	[[maybe_unused]] uint8_t __pad0004[0x4]; // 0x4
public:
	CUtlVector< uint32 > m_bonesHash; // 0x8	
	CUtlVector< CUtlString > m_boneNames; // 0x20	
	CUtlVector< uint16 > m_indexNames; // 0x38	
	CUtlVector< uint16 > m_indexHash; // 0x50	
	CUtlVector< matrix3x4a_t > m_bindPose; // 0x68	
	CUtlVector< VPhysXBodyPart_t > m_parts; // 0x80	
	CUtlVector< VPhysXConstraint2_t > m_constraints2; // 0x98	
	CUtlVector< VPhysXJoint_t > m_joints; // 0xb0	
	PhysFeModelDesc_t* m_pFeModel; // 0xc8	
	CUtlVector< uint16 > m_boneParents; // 0xd0	
	CUtlVector< uint32 > m_surfacePropertyHashes; // 0xe8	
	CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x100	
	CUtlVector< CUtlString > m_debugPartNames; // 0x118	
	CUtlString m_embeddedKeyvalues; // 0x130	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0	
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8	
	bool m_bTopLevel; // 0x20	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CModelConfigElement_AttachedModel : public CModelConfigElement
{
public:
	CUtlString m_InstanceName; // 0x48	
	CUtlString m_EntityClass; // 0x50	
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x58	
	Vector m_vOffset; // 0x60	
	QAngle m_aAngOffset; // 0x6c	
	CUtlString m_AttachmentName; // 0x78	
	ModelConfigAttachmentType_t m_AttachmentType; // 0x80	
	bool m_bUserSpecifiedColor; // 0x84	
	bool m_bUserSpecifiedMaterialGroup; // 0x85	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vCenter[2] - 0x10
	// -> m_flRadius - 0x28
	RnCapsule_t m_Capsule; // 0x10	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 16
// Size: 0xb0
// Has Trivial Destructor
struct VPhysXJoint_t
{
public:
	uint16_t m_nType; // 0x0	
	uint16_t m_nBody1; // 0x2	
	uint16_t m_nBody2; // 0x4	
	uint16_t m_nFlags; // 0x6	
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CTransform m_Frame1; // 0x10	
	CTransform m_Frame2; // 0x30	
	bool m_bEnableCollision; // 0x50	
	bool m_bEnableLinearLimit; // 0x51	
private:
	[[maybe_unused]] uint8_t __pad0052[0x2]; // 0x52
public:
	VPhysXRange_t m_LinearLimit; // 0x54	
	bool m_bEnableLinearMotor; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	Vector m_vLinearTargetVelocity; // 0x60	
	float m_flMaxForce; // 0x6c	
	bool m_bEnableSwingLimit; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	VPhysXRange_t m_SwingLimit; // 0x74	
	bool m_bEnableTwistLimit; // 0x7c	
private:
	[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
public:
	VPhysXRange_t m_TwistLimit; // 0x80	
	bool m_bEnableAngularMotor; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad0089[0x3]; // 0x89
public:
	Vector m_vAngularTargetVelocity; // 0x8c	
	float m_flMaxTorque; // 0x98	
	float m_flLinearFrequency; // 0x9c	
	float m_flLinearDampingRatio; // 0xa0	
	float m_flAngularFrequency; // 0xa4	
	float m_flAngularDampingRatio; // 0xa8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0	
	int8_t m_ConeAxis[3]; // 0xc	
	int8_t m_ConeCutoff; // 0xf	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0	
	float flAnimationForceAttraction; // 0x4	
	float flAnimationVertexAttraction; // 0x8	
	float flGravity; // 0xc	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x88
class CAttachment
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_influenceNames[3]; // 0x8	
	Vector m_vInfluenceOffsets[3]; // 0x20	
	Quaternion m_vInfluenceRotations[3]; // 0x44	
	float m_influenceWeights[3]; // 0x74	
	bool m_bInfluenceRootTransform[3]; // 0x80	
	uint8_t m_nInfluences; // 0x83	
	bool m_bIgnoreRotation; // 0x84	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
class CMorphData
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
struct ModelBoneFlexDriver_t
{
public:
	CUtlString m_boneName; // 0x0	
	uint32_t m_boneNameToken; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
struct RnTriangle_t
{
public:
	int32_t m_nIndex[3]; // 0x0	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x20
class CModelConfigList
{
public:
	bool m_bHideMaterialGroupInTools; // 0x0	
	bool m_bHideRenderColorInTools; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
public:
	CUtlVector< CModelConfig* > m_Configs; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
struct FeSimdAnimStrayRadius_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flMaxDist; // 0x10	
	fltx4 flRelaxationFactor; // 0x20	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x18	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x20
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	// -> m_vCenter - 0x10
	// -> m_flRadius - 0x1c
	RnSphere_t m_Sphere; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
struct FeSimdRodConstraint_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 f4MaxDist; // 0x10	
	fltx4 f4MinDist; // 0x20	
	fltx4 f4Weight0; // 0x30	
	fltx4 f4RelaxationFactor; // 0x40	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct FeTaperedCapsuleStretch_t
{
public:
	uint16_t nNode[2]; // 0x0	
	uint16_t nCollisionMask; // 0x4	
	// MPropertySuppressField
	uint16_t nDummy; // 0x6	
	float flRadius[2]; // 0x8	
	float flStickiness; // 0x10	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0x14
// Has Trivial Constructor
// Has Trivial Destructor
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0	
	float flDistMax; // 0x4	
	uint16_t nNode[6]; // 0x8	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x280
struct PermModelData_t
{
public:
	CUtlString m_name; // 0x0	
	// -> m_nFlags - 0x8
	// -> m_vHullMin - 0xc
	// -> m_vHullMax - 0x18
	// -> m_vViewMin - 0x24
	// -> m_vViewMax - 0x30
	// -> m_flMass - 0x3c
	// -> m_vEyePosition - 0x40
	// -> m_flMaxEyeDeflection - 0x4c
	// -> m_sSurfaceProperty - 0x50
	// -> m_keyValueText - 0x58
	PermModelInfo_t m_modelInfo; // 0x8	
	CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60	
	CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78	
	CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90	
	CUtlVector< uint64 > m_refPhysGroupMasks; // 0xa8	
	CUtlVector< uint8 > m_refLODGroupMasks; // 0xc0	
	CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xd8	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xf0	
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108	
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120	
	CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138	
	CUtlVector< CUtlString > m_meshGroups; // 0x150	
	CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168	
	uint64_t m_nDefaultMeshGroupMask; // 0x180	
	// -> m_boneName - 0x188
	// -> m_nParent - 0x1a0
	// -> m_boneSphere - 0x1b8
	// -> m_nFlag - 0x1d0
	// -> m_bonePosParent - 0x1e8
	// -> m_boneRotParent - 0x200
	ModelSkeletonData_t m_modelSkeleton; // 0x188	
	CUtlVector< int16 > m_remappingTable; // 0x218	
	CUtlVector< uint16 > m_remappingTableStarts; // 0x230	
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x248	
	CModelConfigList* m_pModelConfigList; // 0x260	
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x268	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0xa0
struct VPhysXCollisionAttributes_t
{
public:
	uint32_t m_CollisionGroup; // 0x0	
	CUtlVector< uint32 > m_InteractAs; // 0x8	
	CUtlVector< uint32 > m_InteractWith; // 0x20	
	CUtlVector< uint32 > m_InteractExclude; // 0x38	
	CUtlString m_CollisionGroupString; // 0x50	
	CUtlVector< CUtlString > m_InteractAsStrings; // 0x58	
	CUtlVector< CUtlString > m_InteractWithStrings; // 0x70	
	CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 4
// Size: 0xa4
// Has Trivial Destructor
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0	
	uint32_t m_nJiggleParent; // 0x4	
	CFeJiggleBone m_jiggleBone; // 0x8	
};

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x60
// Has Trivial Destructor
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x50	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x58
class CFootStride
{
public:
	// -> m_vStancePositionMS - 0x0
	// -> m_vMidpointPositionMS - 0xc
	// -> m_flStanceDirectionMS - 0x18
	// -> m_vToStrideStartPos - 0x1c
	// -> m_flMaxExtent - 0x28
	// -> m_stanceCycle - 0x2c
	// -> m_footLiftCycle - 0x30
	// -> m_footOffCycle - 0x34
	// -> m_footStrikeCycle - 0x38
	// -> m_footLandCycle - 0x3c
	CFootCycleDefinition m_definition; // 0x0	
	CFootTrajectories m_trajectories; // 0x40	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x20	
	CUtlVector< CDrawCullingData > m_drawCullData; // 0x38	
	Vector4D m_vTintColor; // 0x50	
};

// Registered binary: vphysics2.dll (project 'modellib')
// Alignment: 8
// Size: 0x28
class CFootMotion
{
public:
	CUtlVector< CFootStride > m_strides; // 0x0	
	CUtlString m_name; // 0x18	
	bool m_bAdditive; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_pitch_shift_desc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MPropertyElementNameFn
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct vmix_filter_desc_t
{
public:
	vmix_filter_type_t m_nFilterType; // 0x0	
	bool m_bEnabled; // 0x2	
private:
	[[maybe_unused]] uint8_t __pad0003[0x1]; // 0x3
public:
	float m_fldbGain; // 0x4	
	float m_flCutoffFreq; // 0x8	
	float m_flQ; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x30
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0	
	CUtlString itemName; // 0x8	
	CUtlString itemTypeName; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlString itemKVString; // 0x20	
	Vector2D itemPos; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CSosGroupBranchPattern
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Event Name"
	bool m_bMatchEventName; // 0x8	
	// MPropertyFriendlyName "Sub-String"
	bool m_bMatchEventSubString; // 0x9	
	// MPropertyFriendlyName "Source Entity Index"
	bool m_bMatchEntIndex; // 0xa	
	// MPropertyFriendlyName "Operator Variable"
	bool m_bMatchOpvar; // 0xb	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandGroup
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_dynamics_desc_t
{
public:
	float m_fldbGain; // 0x0	
	float m_fldbNoiseGateThreshold; // 0x4	
	float m_fldbCompressionThreshold; // 0x8	
	float m_fldbLimiterThreshold; // 0xc	
	float m_fldbKneeWidth; // 0x10	
	float m_flRatio; // 0x14	
	float m_flLimiterRatio; // 0x18	
	float m_flAttackTimeMS; // 0x1c	
	float m_flReleaseTimeMS; // 0x20	
	float m_flRMSTimeMS; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	CUtlString m_matchSoundEventName; // 0x10	
	// MPropertyFriendlyName "Sub-String"
	CUtlString m_matchSoundEventSubString; // 0x18	
	// MPropertyFriendlyName "Entity Index"
	float m_flEntIndex; // 0x20	
	// MPropertyFriendlyName "Operator Variable Value"
	float m_flOpvar; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xd0
// 
// MPropertyElementNameFn
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	// -> m_matchSoundEventName - 0x28
	// -> m_matchSoundEventSubString - 0x30
	// -> m_flEntIndex - 0x38
	// -> m_flOpvar - 0x3c
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	// -> m_bMatchEventName - 0x48
	// -> m_bMatchEventSubString - 0x49
	// -> m_bMatchEntIndex - 0x4a
	// -> m_bMatchOpvar - 0x4b
	CSosGroupBranchPattern m_branchPattern; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0050[0x60]; // 0x50
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xb0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_envelope_desc_t
{
public:
	float m_flAttackTimeMS; // 0x0	
	float m_flHoldTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x80
// Has Trivial Destructor
struct vmix_eq8_desc_t
{
public:
	// -> m_nFilterType - 0x0
	// -> m_bEnabled - 0x2
	// -> m_fldbGain - 0x4
	// -> m_flCutoffFreq - 0x8
	// -> m_flQ - 0xc
	vmix_filter_desc_t m_stages[8]; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
struct vmix_delay_desc_t
{
public:
	// -> m_nFilterType - 0x0
	// -> m_bEnabled - 0x2
	// -> m_fldbGain - 0x4
	// -> m_flCutoffFreq - 0x8
	// -> m_flQ - 0xc
	vmix_filter_desc_t m_feedbackFilter; // 0x0	
	bool m_bEnableFilter; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flDelay; // 0x14	
	float m_flDirectGain; // 0x18	
	float m_flDelayGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flWidth; // 0x24	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CPVSData__pvsmask_t
{
public:
	uint32_t m_nOffset; // 0x0	
	uint32_t m_nMask; // 0x4	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0	
	uint64_t m_nFrameCount; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x48
// Has Trivial Constructor
// Has Trivial Destructor
class CPVSData
{
public:
	CPVSData* m_pNext; // 0x0	
	uint16_t m_nPVSMasks; // 0x8	
	uint16_t m_nPVSFlags; // 0xa	
	// -> m_nOffset - 0xc
	// -> m_nMask - 0x10
	CPVSData::pvsmask_t m_masks[7]; // 0xc	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0xb0
// Has VTable
class CSceneObject
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	ISceneObjectDesc* m_pDesc; // 0x10	
	CSceneObjectReference_t* m_pRefData; // 0x18	
	float m_flStartFadeDistanceSquared; // 0x20	
	float m_flFarCullDistanceSquared; // 0x24	
	uint16_t m_nObjectTypeFlags; // 0x28	
	uint16_t m_nGameRenderCounter; // 0x2a	
private:
	[[maybe_unused]] uint8_t __pad002c[0x3]; // 0x2c
public:
	uint8_t m_nMeshGroupMaskSmall; // 0x2f	
	struct 
	{
		uint8_t m_nDebugLevel: 2; 		
		uint8_t m_nSizeCullBloat: 2; 		
		uint8_t m_nBoundsType: 1; 		
		uint16_t __pad0: 11;
	}; // 16 bits
	uint8_t m_nID; // 0x31	
	int8_t m_nBoundsGroupIndex; // 0x32	
	uint8_t m_nObjectClass; // 0x33	
private:
	[[maybe_unused]] uint8_t __pad0034[0xc]; // 0x34
public:
	matrix3x4a_t m_transform; // 0x40	
	CPVSData* m_pPVSData; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0078[0x10]; // 0x78
public:
	uint64_t m_nOriginalRenderableFlags; // 0x88	
	uint64_t m_nRenderableFlags; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0098[0xc]; // 0x98
public:
	CUtlStringToken m_nLayerMatchID; // 0xa4	
	
	// Static fields:
	static float &Get_s_flSizeCullBloatScale(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSceneObject")->m_static_fields[0]->m_instance);};
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	int32_t m_nLayerIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	uint64_t m_nLayerId; // 0x20	
	CUtlString m_LayerName; // 0x28	
	CUtlString m_displayText; // 0x30	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
struct CSceneObjectReference_t
{
public:
	VectorAligned m_vecAABBMins; // 0x0	
	VectorAligned m_vecAABBMaxes; // 0x10	
	uint64_t m_nRenderableFlags; // 0x20	
	CSceneObject* m_pObject; // 0x28	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
	// No schema binary for binding
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0x470
struct CSceneObjectExtraData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x440]; // 0x0
public:
	uint64_t m_nCurrentMeshGroupMask; // 0x440	
private:
	[[maybe_unused]] uint8_t __pad0448[0x8]; // 0x448
public:
	CUtlStringToken m_nLayerForceID; // 0x450	
	Vector m_vLightingOrigin; // 0x454	
	float m_flDepthSortBias; // 0x460	
	uint8_t m_nVisibleToPlayer[4]; // 0x464	
	uint16_t m_nAlphaFade; // 0x468	
	int16_t m_nViewProducerIndex; // 0x46a	
	bool m_bLightingOriginIsInWorldSpace; // 0x46c	
	int8_t m_nCurrentLOD; // 0x46d	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
	// No schema binary for binding
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0	
	CUtlString m_ViewName; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
class CSSDSMsg_ViewTarget
{
public:
	CUtlString m_Name; // 0x0	
	uint64_t m_TextureId; // 0x8	
	int32_t m_nWidth; // 0x10	
	int32_t m_nHeight; // 0x14	
	int32_t m_nRequestedWidth; // 0x18	
	int32_t m_nRequestedHeight; // 0x1c	
	int32_t m_nNumMipLevels; // 0x20	
	int32_t m_nDepth; // 0x24	
	int32_t m_nMultisampleNumSamples; // 0x28	
	int32_t m_nFormat; // 0x2c	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct voxel_vis_cluster_t
{
public:
	uint32_t m_nBlockIndex; // 0x0	
	uint32_t m_nOffsetIntoBlock; // 0x4	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x30
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0	
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x70
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0	
	float m_flWidth; // 0x30	
	float m_flHeight; // 0x34	
	float m_flDepth; // 0x38	
	Vector2D m_vUVStart; // 0x3c	
	Vector2D m_vUVEnd; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50	
	int32_t m_nRenderOrder; // 0x58	
	Vector4D m_vTintColor; // 0x5c	
	int32_t m_nSequenceOverride; // 0x6c	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x50
struct BakedLightingInfo_t
{
public:
	CUtlVector< uint8 > m_PerVertexLightingDataPlainRGBM; // 0x0	
	uint32_t m_nPerVertexLightingDataPlainRGBMWidth; // 0x18	
	uint32_t m_nPerVertexLightingDataPlainRGBMHeight; // 0x1c	
	uint32_t m_nPerVertexLightingDataPlainRGBMDepth; // 0x20	
	uint32_t m_nLightmapVersionNumber; // 0x24	
	uint32_t m_nLightmapGameVersionNumber; // 0x28	
	Vector2D m_vLightmapUvScale; // 0x2c	
	bool m_bHasLightmaps; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x38	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0	
	int32_t m_nElementSizeInBytes; // 0x4	
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8	
	CUtlVector< uint8 > m_pData; // 0x20	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmap"
struct InfoForResourceTypeVMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 4
// Size: 0x54
// Has Trivial Destructor
struct WorldBuilderParams_t
{
public:
	int32_t m_nSizeBytesPerVoxel; // 0x0	
	float m_flMinDrawVolumeSize; // 0x4	
	float m_flMinDistToCamera; // 0x8	
	float m_flMinAtlasDist; // 0xc	
	float m_flMinSimplifiedDist; // 0x10	
	float m_flHorzFOV; // 0x14	
	float m_flHalfScreenWidth; // 0x18	
	int32_t m_nAtlasTextureSizeX; // 0x1c	
	int32_t m_nAtlasTextureSizeY; // 0x20	
	int32_t m_nUniqueTextureSizeX; // 0x24	
	int32_t m_nUniqueTextureSizeY; // 0x28	
	int32_t m_nCompressedAtlasSize; // 0x2c	
	float m_flGutterSize; // 0x30	
	float m_flUVMapThreshold; // 0x34	
	Vector m_vWorldUnitsPerTile; // 0x38	
	int32_t m_nMaxTexScaleSlots; // 0x44	
	bool m_bWrapInAtlas; // 0x48	
	bool m_bBuildBakedLighting; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	Vector2D m_vLightmapUvScale; // 0x4c	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x98
class CVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	CUtlVector< uint32 > m_blockOffset; // 0x30	
	CUtlVector< voxel_vis_cluster_t > m_clusters; // 0x48	
	Vector m_vMinBounds; // 0x60	
	Vector m_vMaxBounds; // 0x6c	
	float m_flGridSize; // 0x78	
	int32_t m_nNodeCount; // 0x7c	
	int32_t m_nRegionCount; // 0x80	
	// -> m_nBlockIndex - 0x84
	// -> m_nOffsetIntoBlock - 0x88
	voxel_vis_cluster_t m_skyVisibilityCluster; // 0x84	
	voxel_vis_compression_t m_nPVSCompression; // 0x8c	
	uint32_t m_nTreeSize; // 0x90	
	uint32_t m_nPVSSizeCompressed; // 0x94	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x30
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0	
	uint32_t m_targetType; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_targetName; // 0x10	
	CUtlString m_inputName; // 0x18	
	CUtlString m_overrideParam; // 0x20	
	float m_flDelay; // 0x28	
	int32_t m_nTimesToFire; // 0x2c	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x18
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x160
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0	
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18	
	CUtlVector< uint16 > m_visClusterMembership; // 0x30	
	CUtlVector< AABB_t > m_boundsGroups; // 0x48	
	CUtlVector< BoneOverride_t > m_boneOverrides; // 0x60	
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78	
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90	
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xa8	
	CUtlVector< CUtlString > m_layerNames; // 0xc0	
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xd8	
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xf0	
	CUtlString m_grassFileName; // 0x108	
	// -> m_PerVertexLightingDataPlainRGBM - 0x110
	// -> m_nPerVertexLightingDataPlainRGBMWidth - 0x128
	// -> m_nPerVertexLightingDataPlainRGBMHeight - 0x12c
	// -> m_nPerVertexLightingDataPlainRGBMDepth - 0x130
	// -> m_nLightmapVersionNumber - 0x134
	// -> m_nLightmapGameVersionNumber - 0x138
	// -> m_vLightmapUvScale - 0x13c
	// -> m_bHasLightmaps - 0x144
	// -> m_lightMaps - 0x148
	BakedLightingInfo_t m_nodeLightingInfo; // 0x110	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x48
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0	
	EntityLumpFlags_t m_flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_manifestName; // 0x10	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x18	
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x30	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xd8
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x58	
	// -> m_PerVertexLightingDataPlainRGBM - 0x70
	// -> m_nPerVertexLightingDataPlainRGBMWidth - 0x88
	// -> m_nPerVertexLightingDataPlainRGBMHeight - 0x8c
	// -> m_nPerVertexLightingDataPlainRGBMDepth - 0x90
	// -> m_nLightmapVersionNumber - 0x94
	// -> m_nLightmapGameVersionNumber - 0x98
	// -> m_vLightmapUvScale - 0x9c
	// -> m_bHasLightmaps - 0xa4
	// -> m_lightMaps - 0xa8
	BakedLightingInfo_t m_worldLightingInfo; // 0x70	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0xc0	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
struct BoneOverride_t : public BaseSceneObjectOverride_t
{
private:
	[[maybe_unused]] uint8_t __pad0004[0x4]; // 0x4
public:
	CUtlVector< uint32 > m_boneHashes; // 0x8	
	CUtlVector< matrix3x4_t > m_boneTransforms; // 0x20	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
struct VMapResourceData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x50
struct NodeData_t
{
public:
	int32_t m_Flags; // 0x0	
	int32_t m_nParent; // 0x4	
	Vector m_vOrigin; // 0x8	
	Vector m_vMinBounds; // 0x14	
	Vector m_vMaxBounds; // 0x20	
	float m_flMinimumDistance; // 0x2c	
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30	
	CUtlString m_worldNodePrefix; // 0x48	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4	
	uint32_t m_nDrawCallIndex; // 0x8	
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc	
	// -> m_hBuffer - 0x10
	// -> m_nBindOffsetBytes - 0x18
	CRenderBufferBinding m_extraBufferBinding; // 0x10	
};

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xa8
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0	
	Vector4D m_vTransform[3]; // 0x4	
	float m_flFadeStartDistance; // 0x34	
	float m_flFadeEndDistance; // 0x38	
	Vector4D m_vTintColor; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_skin; // 0x50	
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58	
	Vector m_vLightingOrigin; // 0x5c	
	uint32_t m_nLightGroup; // 0x68	
	int16_t m_nOverlayRenderOrder; // 0x6c	
	int16_t m_nLODOverride; // 0x6e	
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70	
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74	
	int16_t m_nBoundsGroupIndex; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007a[0x6]; // 0x7a
public:
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80	
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCTextureBase > > m_externalTextures; // 0x90	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x28
class CParticleProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x40
class CPiecewiseCurveSchemaWrapper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0xa8
// 
// MClassIsParticleFloat
// MParticleCustomFieldDefaultValue
class CParticleFloatInput
{
public:
	// MDefaultString
	ParticleFloatType_t m_nType; // 0x0	
	// MDefaultString
	ParticleFloatMapType_t m_nMapType; // 0x4	
	// MDefaultString
	float m_flLiteralValue; // 0x8	
	// MDefaultString
	int32_t m_nControlPoint; // 0xc	
	// MDefaultString
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x10	
	// MDefaultString
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14	
	// MDefaultString
	int32_t m_nVectorComponent; // 0x18	
	// MDefaultString
	float m_flRandomMin; // 0x1c	
	// MDefaultString
	float m_flRandomMax; // 0x20	
	// MDefaultString
	ParticleFloatRandomMode_t m_nRandomMode; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MDefaultString
	float m_flLOD0; // 0x2c	
	// MDefaultString
	float m_flLOD1; // 0x30	
	// MDefaultString
	float m_flLOD2; // 0x34	
	// MDefaultString
	float m_flLOD3; // 0x38	
	// MDefaultString
	ParticleFloatInputMode_t m_nInputMode; // 0x3c	
	// MDefaultString
	float m_flMultFactor; // 0x40	
	// MDefaultString
	float m_flInput0; // 0x44	
	// MDefaultString
	float m_flInput1; // 0x48	
	// MDefaultString
	float m_flOutput0; // 0x4c	
	// MDefaultString
	float m_flOutput1; // 0x50	
	// MDefaultString
	ParticleFloatBiasType_t m_nBiasType; // 0x54	
	// MDefaultString
	float m_flBiasParameter; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CPiecewiseCurveSchemaWrapper m_Curve; // 0x60	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0xa8
// 
// MPropertyEditClassCustomEditor
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpStartFadeInTime; // 0x8	
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator end fadein"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpEndFadeInTime; // 0xc	
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator start fadeout"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpStartFadeOutTime; // 0x10	
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator end fadeout"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpEndFadeOutTime; // 0x14	
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "operator fade oscillate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpFadeOscillatePeriod; // 0x18	
	// MPropertyGroupName "Operator Fade"
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bNormalizeToStopTime; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset min"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpTimeOffsetMin; // 0x20	
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset max"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpTimeOffsetMax; // 0x24	
	// MPropertyGroupName "Time Offset"
	// MPropertyFriendlyName "operator time offset seed"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nOpTimeOffsetSeed; // 0x28	
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale seed"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nOpTimeScaleSeed; // 0x2c	
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale min"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpTimeScaleMin; // 0x30	
	// MPropertyGroupName "Timescale Modifiers"
	// MPropertyFriendlyName "operator time scale max"
	// MDefaultString
	// MParticleAdvancedField
	float m_flOpTimeScaleMax; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0038[0x1]; // 0x38
public:
	// MPropertySortPriority "2147483647"
	// MPropertyFriendlyName "disable"
	// MDefaultString
	bool m_bDisableOperator; // 0x39	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; // 0x3a
public:
	// MPropertyFriendlyName "operator end cap state"
	// MDefaultString
	int32_t m_nOpEndCapState; // 0x3c	
	// MPropertyGroupName "Strength Modifiers"
	// MPropertyFriendlyName "operator strength"
	// MDefaultString
	// MParticleAdvancedField
	CParticleCollectionFloatInput m_flOpStrength; // 0x40	
	// MPropertyFriendlyName "operator help and notes"
	// MDefaultString
	// MParticleHelpField
	CUtlString m_Notes; // 0xe8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	int32_t m_nInputMin; // 0x144	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	int32_t m_nInputMax; // 0x148	
	// MPropertyFriendlyName "input scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x14c	
	// MPropertyFriendlyName "input scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x15c	
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x160	
	// MPropertyFriendlyName "invert input from total particle count"
	// MDefaultString
	bool m_bInvert; // 0x161	
	// MPropertyFriendlyName "wrap input"
	// MDefaultString
	bool m_bWrap; // 0x162	
private:
	[[maybe_unused]] uint8_t __pad0163[0x1]; // 0x163
public:
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionOperator : public CParticleFunction
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	float m_RateMin; // 0x140	
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	float m_RateMax; // 0x144	
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x148	
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x14c	
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x150	
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x154	
private:
	[[maybe_unused]] uint8_t __pad0158[0x28]; // 0x158
public:
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x180	
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x184	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x140	
	// MPropertyFriendlyName "Value at start of cycle"
	// MDefaultString
	float m_flStartValue; // 0x144	
	// MPropertyFriendlyName "Value at end of cycle"
	// MDefaultString
	float m_flEndValue; // 0x148	
	// MPropertyFriendlyName "Cycle time"
	// MDefaultString
	float m_flCycleTime; // 0x14c	
	// MPropertyFriendlyName "Do not repeat cycle"
	// MDefaultString
	bool m_bDoNotRepeatCycle; // 0x150	
	// MPropertyFriendlyName "Synchronize particles"
	// MDefaultString
	bool m_bSynchronizeParticles; // 0x151	
private:
	[[maybe_unused]] uint8_t __pad0152[0x2]; // 0x152
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	// MDefaultString
	int32_t m_nCPScale; // 0x154	
	// MPropertyFriendlyName "start scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x158	
	// MPropertyFriendlyName "end scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x15c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x160	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0xa8
// 
// MPropertyEditClassCustomEditor
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionConstraint : public CParticleFunction
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x44
// Has Trivial Constructor
// Has Trivial Destructor
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "visibility camera depth bias"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCameraBias; // 0x0	
	// MPropertyFriendlyName "visibility input minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMin; // 0x4	
	// MPropertyFriendlyName "visibility input maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flInputMax; // 0x8	
	// MPropertyFriendlyName "visibility alpha scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMin; // 0xc	
	// MPropertyFriendlyName "visibility alpha scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAlphaScaleMax; // 0x10	
	// MPropertyFriendlyName "visibility radius scale minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMin; // 0x14	
	// MPropertyFriendlyName "visibility radius scale maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleMax; // 0x18	
	// MPropertyFriendlyName "visibility radius FOV scale base"
	// MDefaultString
	// MParticleAdvancedField
	float m_flRadiusScaleFOVBase; // 0x1c	
	// MPropertyFriendlyName "visibility proxy radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flProxyRadius; // 0x20	
	// MPropertyFriendlyName "visibility input distance minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMin; // 0x24	
	// MPropertyFriendlyName "visibility input distance maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDistanceInputMax; // 0x28	
	// MPropertyFriendlyName "visibility input dot minimum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMin; // 0x2c	
	// MPropertyFriendlyName "visibility input dot maximum"
	// MDefaultString
	// MParticleAdvancedField
	float m_flDotInputMax; // 0x30	
	// MPropertyFriendlyName "Visibility input dot use CP angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCPAngles; // 0x34	
	// MPropertyFriendlyName "Visibility input dot use Camera angles"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bDotCameraAngles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	// MPropertyFriendlyName "visibility unsupported hardware fallback value"
	// MDefaultString
	// MParticleAdvancedField
	float m_flNoPixelVisibilityFallback; // 0x38	
	// MPropertyFriendlyName "visibility proxy input control point number"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCPin; // 0x3c	
	// MPropertyFriendlyName "visibility vr camera right eye"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2b0
// Has VTable
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x144	
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x150	
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1f8	
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x2a0	
	// MPropertyFriendlyName "set number of children based on particle count"
	// MDefaultString
	bool m_bNumBasedOnParticleCount; // 0x2a1	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x330
// 
// MClassIsParticleFloat
// MParticleCustomFieldDefaultValue
class CParticleVecInput
{
public:
	// MDefaultString
	ParticleVecType_t m_nType; // 0x0	
	// MDefaultString
	Vector m_vLiteralValue; // 0x4	
	// MDefaultString
	Color m_LiteralColor; // 0x10	
	// MDefaultString
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x14	
	// MDefaultString
	Vector m_vVectorAttributeScale; // 0x18	
	// MDefaultString
	int32_t m_nControlPoint; // 0x24	
	// MDefaultString
	Vector m_vCPValueScale; // 0x28	
	// MDefaultString
	Vector m_vCPRelativePosition; // 0x34	
	// MDefaultString
	Vector m_vCPRelativeDir; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CParticleFloatInput m_FloatComponentX; // 0x50	
	CParticleFloatInput m_FloatComponentY; // 0xf8	
	CParticleFloatInput m_FloatComponentZ; // 0x1a0	
	CParticleFloatInput m_FloatInterp; // 0x248	
	// MDefaultString
	float m_flInterpInput0; // 0x2f0	
	// MDefaultString
	float m_flInterpInput1; // 0x2f4	
	// MDefaultString
	Vector m_vInterpOutput0; // 0x2f8	
	// MDefaultString
	Vector m_vInterpOutput1; // 0x304	
	CColorGradient m_Gradient; // 0x310	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "use only bounding box"
	// MDefaultString
	bool m_bBoundBox; // 0x144	
	// MPropertyFriendlyName "cull outside instead of inside"
	// MDefaultString
	bool m_bCullOutside; // 0x145	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x146	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x147	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionForce : public CParticleFunction
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x0	
	// MPropertyFriendlyName "Use local coordinates for offset"
	// MDefaultString
	bool m_bLocalCoords; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffset; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x160
// Has VTable
// Is Abstract
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	// MDefaultString
	int32_t m_nSpinRateDegrees; // 0x140	
	// MPropertyFriendlyName "spin rate min"
	// MDefaultString
	int32_t m_nSpinRateMinDegrees; // 0x144	
private:
	[[maybe_unused]] uint8_t __pad0148[0x4]; // 0x148
public:
	// MPropertyFriendlyName "spin stop time"
	// MDefaultString
	float m_fSpinRateStopTime; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_flForceScale; // 0x140	
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x144	
	// MPropertyFriendlyName "flip twist axis with yaw"
	// MDefaultString
	bool m_bFlipBasedOnYaw; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x30
struct ParticleControlPointDriver_t
{
public:
	int32_t m_iControlPoint; // 0x0	
	ParticleAttachment_t m_iAttachType; // 0x4	
	CUtlString m_attachmentName; // 0x8	
	Vector m_vecOffset; // 0x10	
	QAngle m_angOffset; // 0x1c	
	CUtlString m_entityName; // 0x28	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "offset"
	// MDefaultString
	Vector m_vecOffset; // 0x144	
	// MPropertyFriendlyName "offset in local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x3f0
// Has VTable
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_nInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_nInputMax; // 0x1f0	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x298	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x340	
	// MPropertyFriendlyName
	// MDefaultString
	bool m_bActiveRange; // 0x3e8	
private:
	[[maybe_unused]] uint8_t __pad03e9[0x3]; // 0x3e9
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x3ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class IParticleCollection
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x144	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad015c[0x4]; // 0x15c
public:
	// MPropertyFriendlyName "noise coordinate scale"
	// MDefaultString
	fltx4 m_fl4NoiseScale; // 0x160	
	// MPropertyFriendlyName "additive"
	// MDefaultString
	bool m_bAdditive; // 0x170	
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x171	
private:
	[[maybe_unused]] uint8_t __pad0172[0x2]; // 0x172
public:
	// MPropertyFriendlyName "Noise animation time scale"
	// MDefaultString
	float m_flNoiseAnimationTimeScale; // 0x174	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_ControlPoint; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x140	
	// MPropertyFriendlyName "warp max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x14c	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x158	
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x200	
	// MPropertyFriendlyName "warp scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x204	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x208	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x3f0
// Has VTable
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	// MDefaultString
	CParticleCollectionFloatInput m_flRestLength; // 0x140	
	// MPropertyFriendlyName "minimum segment length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flMinDistance; // 0x1e8	
	// MPropertyFriendlyName "maximum segment length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flMaxDistance; // 0x290	
	// MPropertyFriendlyName "scale factor for spring correction"
	// MDefaultString
	float m_flAdjustmentScale; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
public:
	// MPropertyFriendlyName "manual resting spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x340	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x400
// Has VTable
class C_OP_CylindricalDistanceToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "cylinder inner radius"
	// MDefaultString
	CPerParticleFloatInput m_flInputMin; // 0x148	
	// MPropertyFriendlyName "cylinder outer radius"
	// MDefaultString
	CPerParticleFloatInput m_flInputMax; // 0x1f0	
	// MPropertyFriendlyName "cylinder inner output"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMin; // 0x298	
	// MPropertyFriendlyName "cylinder outer output"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMax; // 0x340	
	// MPropertyFriendlyName "cylinder top control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x3e8	
	// MPropertyFriendlyName "cylinder bottom control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x3ec	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x3f0	
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x3f4	
	// MPropertyFriendlyName "output is additive"
	// MDefaultString
	bool m_bAdditive; // 0x3f5	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	// MDefaultString
	bool m_bCapsule; // 0x3f6	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x190
// Has VTable
// Is Abstract
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x140	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x148	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x160	
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x178	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x17c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x180	
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x184	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RemapInitialCPDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x148	
	// MPropertyFriendlyName "control point axis"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x14c	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x330
// 
// MPropertyEditClassCustomEditor
class CPerParticleVecInput : public CParticleVecInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x154	
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bIgnoreDelta; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x140
// Has VTable
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "particle field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8	
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0xc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "attribute to read from"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x144	
	// MPropertyFriendlyName "attribute to cache to"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x58
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0	
	uint32_t m_nModSpecificData; // 0x8	
	// MDefaultString
	PetGroundType_t m_groundType; // 0xc	
	CUtlString m_sequenceName; // 0x10	
	int32_t m_nFireParticleOnSequenceFrame; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlString m_hitboxSetName; // 0x20	
	CUtlString m_materialGroupName; // 0x28	
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30	
	// MDefaultString
	float m_flPlaybackSpeed; // 0x48	
	// MDefaultString
	float m_flParticleSimulationRate; // 0x4c	
	bool m_bShouldDrawHitboxes; // 0x50	
	bool m_bShouldDrawAttachments; // 0x51	
	bool m_bShouldDrawAttachmentNames; // 0x52	
	bool m_bShouldDrawControlPointAxes; // 0x53	
	bool m_bAnimationNonLooping; // 0x54	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	// MDefaultString
	float m_flMinDist; // 0x140	
	// MPropertyFriendlyName "force at min distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x144	
	// MPropertyFriendlyName "max distance from plane"
	// MDefaultString
	float m_flMaxDist; // 0x150	
	// MPropertyFriendlyName "force at max distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x154	
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x160	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x16c	
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x170	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x140
// Has VTable
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_PercentageBetweenCPLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x14c	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x150	
	// MPropertyFriendlyName "output starting control point number"
	// MDefaultString
	int32_t m_nOutputStartCP; // 0x154	
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	// MDefaultString
	int32_t m_nOutputStartField; // 0x158	
	// MPropertyFriendlyName "output ending control point number"
	// MDefaultString
	int32_t m_nOutputEndCP; // 0x15c	
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	// MDefaultString
	int32_t m_nOutputEndField; // 0x160	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x164	
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x168	
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x169	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x154	
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x158	
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x159	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x1dc	
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x1e0	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1e4	
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "distance component scale"
	// MDefaultString
	Vector m_vecDistanceScale; // 0x1ec	
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "first child to enable"
	// MDefaultString
	int32_t m_nFirstChild; // 0x144	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	// MDefaultString
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x190
// Has VTable
// Is Abstract
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MParticleAdvancedField
	CParticleVisibilityInputs VisibilityInputs; // 0x140	
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MDefaultString
	// MPropertyGroupName "Rendering filter"
	bool m_bCannotBeRefracted; // 0x184	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MDefaultString
	// MPropertyGroupName "Rendering filter"
	bool m_bSkipRenderingOnMobile; // 0x185	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x144	
	// MPropertyFriendlyName "scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x148	
	// MPropertyFriendlyName "cache attribute to read from"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x14c	
	// MPropertyFriendlyName "attribute to write to"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x150	
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	// MDefaultString
	float m_flAParm; // 0x140	
	// MPropertyFriendlyName "pickover B parameter"
	// MDefaultString
	float m_flBParm; // 0x144	
	// MPropertyFriendlyName "pickover C parameter"
	// MDefaultString
	float m_flCParm; // 0x148	
	// MPropertyFriendlyName "pickover D parameter"
	// MDefaultString
	float m_flDParm; // 0x14c	
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x150	
	// MPropertyFriendlyName "speed min"
	// MDefaultString
	float m_flSpeedMin; // 0x154	
	// MPropertyFriendlyName "speed max"
	// MDefaultString
	float m_flSpeedMax; // 0x158	
	// MPropertyFriendlyName "relative control point number"
	// MDefaultString
	int32_t m_nBaseCP; // 0x15c	
	// MPropertyFriendlyName "uniform speed"
	// MDefaultString
	bool m_bUniformSpeed; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	// MDefaultString
	float m_Rate; // 0x140	
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x144	
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x24]; // 0x14c
public:
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x170	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x140	
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x148	
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014d[0x3]; // 0x14d
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x170	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x178	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x180	
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x188	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0140[0x18]; // 0x140
public:
	// MPropertyFriendlyName "color1"
	// MDefaultString
	Color m_ColorMin; // 0x158	
	// MPropertyFriendlyName "color2"
	// MDefaultString
	Color m_ColorMax; // 0x15c	
	// MPropertyFriendlyName "tint clamp min"
	// MDefaultString
	Color m_TintMin; // 0x160	
	// MPropertyFriendlyName "tint clamp max"
	// MDefaultString
	Color m_TintMax; // 0x164	
	// MPropertyFriendlyName "tint perc"
	// MDefaultString
	float m_flTintPerc; // 0x168	
	// MPropertyFriendlyName "tint update movement threshold"
	// MDefaultString
	float m_flUpdateThreshold; // 0x16c	
	// MPropertyFriendlyName "tint control point"
	// MDefaultString
	int32_t m_nTintCP; // 0x170	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x174	
	// MPropertyFriendlyName "tint blend mode"
	// MDefaultString
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x178	
	// MPropertyFriendlyName "light amplification amount"
	// MDefaultString
	float m_flLightAmplification; // 0x17c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x140	
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1e8	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x148	
	// MPropertyFriendlyName "space points along path"
	// MDefaultString
	bool m_bPlaceAlongPath; // 0x160	
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x161	
private:
	[[maybe_unused]] uint8_t __pad0162[0x2]; // 0x162
public:
	// MPropertyFriendlyName "Numer of points along path"
	// MDefaultString
	int32_t m_nNumPointsAlongPath; // 0x164	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x330
// 
// MPropertyEditClassCustomEditor
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x290
// Has VTable
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "lifetime lerp start"
	// MDefaultString
	float m_flLifeTimeLerpStart; // 0x148	
	// MPropertyFriendlyName "lifetime lerp end"
	// MDefaultString
	float m_flLifeTimeLerpEnd; // 0x14c	
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x150	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x154	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "lerp type"
	// MDefaultString
	HitboxLerpType_t m_nLerpType; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "Constant Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1a0
// Has VTable
// Is Abstract
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x140	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x148	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x160	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x178	
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x194	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	CPerParticleFloatInput m_flScale; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	// MDefaultString
	int32_t m_nOverrideCP; // 0x144	
	// MPropertyFriendlyName "density"
	// MDefaultString
	int32_t m_nDensity; // 0x148	
	// MPropertyFriendlyName "initial radius"
	// MDefaultString
	float m_flInitialRadius; // 0x14c	
	// MPropertyFriendlyName "min initial speed"
	// MDefaultString
	float m_flInitialSpeedMin; // 0x150	
	// MPropertyFriendlyName "max initial speed"
	// MDefaultString
	float m_flInitialSpeedMax; // 0x154	
	// MPropertyFriendlyName "use particle count as density scale"
	// MDefaultString
	bool m_bUseParticleCount; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	// MDefaultString
	int32_t m_nMinCol; // 0x140	
	// MPropertyFriendlyName "max column/particle index to affect"
	// MDefaultString
	int32_t m_nMaxCol; // 0x144	
	// MPropertyFriendlyName "min row/particle index to affect"
	// MDefaultString
	int32_t m_nMinRow; // 0x148	
	// MPropertyFriendlyName "max row/particle index to affect"
	// MDefaultString
	int32_t m_nMaxRow; // 0x14c	
	// MPropertyFriendlyName "control point to lock to"
	// MDefaultString
	int32_t m_nControlPoint; // 0x150	
	// MPropertyFriendlyName "amount of current position to preserve"
	// MDefaultString
	float m_flBlendValue; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x140	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nMinCP; // 0x144	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	// MParticleMinVersion "2"
	int32_t m_nMaxCP; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "dynamic control point count"
	// MDefaultString
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2b0
// Has VTable
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x140	
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	Vector m_PlaneNormal; // 0x14c	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x158	
	// MPropertyFriendlyName "global origin"
	// MDefaultString
	bool m_bGlobalOrigin; // 0x15c	
	// MPropertyFriendlyName "global normal"
	// MDefaultString
	bool m_bGlobalNormal; // 0x15d	
private:
	[[maybe_unused]] uint8_t __pad015e[0x2]; // 0x15e
public:
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusScale; // 0x160	
	// MPropertyFriendlyName "falloff distance from control point"
	// MDefaultString
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x208	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0	
	// MPropertyFriendlyName "Relative probability"
	// MDefaultString
	float m_flRelativeProbabilityOfSpawn; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x340
// Has VTable
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	CParticleCollectionFloatInput m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "first child to enable"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstChild; // 0x1e8	
	// MPropertyFriendlyName "# of children to enable"
	// MDefaultString
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x290	
	// MPropertyFriendlyName "play endcap when children are removed"
	// MDefaultString
	bool m_bPlayEndcapOnStop; // 0x338	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	// MDefaultString
	bool m_bDestroyImmediately; // 0x339	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	// MDefaultString
	bool m_bKillUnused; // 0x140	
	// MPropertyFriendlyName "offset propotional to radius"
	// MDefaultString
	bool m_bRadiusScale; // 0x141	
private:
	[[maybe_unused]] uint8_t __pad0142[0x2]; // 0x142
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x144	
	// MPropertyFriendlyName "per particle spatial offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	// MDefaultString
	float m_flEmissionDuration; // 0x140	
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	float m_flStartTime; // 0x144	
	// MPropertyFriendlyName "scale emission to used control points"
	// MDefaultString
	// MParticleMaxVersion "1"
	float m_flEmissionScale; // 0x148	
	// MPropertyFriendlyName "emission count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x14c	
	// MPropertyFriendlyName "emission count scale control point field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x150	
	// MPropertyFriendlyName "world noise scale control point"
	// MDefaultString
	int32_t m_nWorldNoisePoint; // 0x154	
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x158	
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x159	
private:
	[[maybe_unused]] uint8_t __pad015a[0x2]; // 0x15a
public:
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x15c	
	// MPropertyFriendlyName "emission minimum"
	// MDefaultString
	float m_flOutputMin; // 0x160	
	// MPropertyFriendlyName "emission maximum"
	// MDefaultString
	float m_flOutputMax; // 0x164	
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x168	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	// MDefaultString
	float m_flWorldNoiseScale; // 0x16c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x170	
	// MPropertyFriendlyName "world time noise coordinate scale"
	// MDefaultString
	float m_flWorldTimeScale; // 0x17c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "current anim time output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x15c	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x168	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x16c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x170	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x174	
	// MPropertyFriendlyName "use local system"
	// MDefaultString
	bool m_bLocalCoords; // 0x178	
private:
	[[maybe_unused]] uint8_t __pad0179[0x3]; // 0x179
public:
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x17c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_PercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x154	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x158	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x15c	
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x160	
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x161	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	// MDefaultString
	float m_flMinRadius; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	// MDefaultString
	bool m_bTransformNormals; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0141[0x3]; // 0x141
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
	// MPropertyFriendlyName "lifetime fade start"
	// MDefaultString
	float m_flLifeTimeFadeStart; // 0x148	
	// MPropertyFriendlyName "lifetime fade end"
	// MDefaultString
	float m_flLifeTimeFadeEnd; // 0x14c	
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x150	
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	// MDefaultString
	float m_flInterpRate; // 0x140	
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x144	
	// MPropertyFriendlyName "CP movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x148	
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x14c	
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x150	
	// MPropertyFriendlyName "CP to trace from"
	// MDefaultString
	int32_t m_nInputCP; // 0x1d0	
	// MPropertyFriendlyName "CP to set"
	// MDefaultString
	int32_t m_nOutputCP; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x4]; // 0x1d8
public:
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	// MDefaultString
	float m_flStartLerpTime; // 0x140	
	// MPropertyFriendlyName "starting force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x144	
	// MPropertyFriendlyName "time to end transition"
	// MDefaultString
	float m_flEndLerpTime; // 0x150	
	// MPropertyFriendlyName "ending force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	// MDefaultString
	int32_t m_nSourceCP; // 0x140	
	// MPropertyFriendlyName "dest CP"
	// MDefaultString
	int32_t m_nDestCP; // 0x144	
	// MPropertyFriendlyName "dest control point component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x144	
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x150	
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x154	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	// MDefaultString
	float m_flVelocityMin; // 0x140	
	// MPropertyFriendlyName "velocity maximum"
	// MDefaultString
	float m_flVelocityMax; // 0x144	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x148	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x14c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	// MDefaultString
	float m_flScale; // 0x140	
	// MPropertyFriendlyName "scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x144	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x148	
	// MPropertyFriendlyName "scale radius"
	// MDefaultString
	bool m_bScaleRadius; // 0x14c	
	// MPropertyFriendlyName "scale position"
	// MDefaultString
	bool m_bScalePosition; // 0x14d	
	// MPropertyFriendlyName "scale velocity"
	// MDefaultString
	bool m_bScaleVelocity; // 0x14e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	// MDefaultString
	int32_t m_nColorCP; // 0x140	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	// MDefaultString
	int32_t m_nColorGemEnableCP; // 0x144	
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputCP; // 0x148	
	// MPropertyFriendlyName "Default HSV Color"
	// MDefaultString
	Color m_DefaultHSVColor; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x140	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1c0
// Has VTable
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x190	
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x194	
	// MPropertyFriendlyName "frequence scale"
	// MDefaultString
	float m_flFrequencyScale; // 0x198	
	// MPropertyFriendlyName "amplitude scale"
	// MDefaultString
	float m_flAmplitudeScale; // 0x19c	
	// MPropertyFriendlyName "radius field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x1a0	
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1a4	
	// MPropertyFriendlyName "frequency field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x1a8	
	// MPropertyFriendlyName "amplitude field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x1ac	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	// MDefaultString
	int32_t m_nFilterCP; // 0x1b0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	// MDefaultString
	float m_flFadeInTimeMin; // 0x140	
	// MPropertyFriendlyName "fade in time max"
	// MDefaultString
	float m_flFadeInTimeMax; // 0x144	
	// MPropertyFriendlyName "fade in time exponent"
	// MDefaultString
	float m_flFadeInTimeExp; // 0x148	
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	// MDefaultString
	CParticleCollectionFloatInput m_flSimulationScale; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "use curl"
	// MDefaultString
	bool m_useCurl; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0141[0x3]; // 0x141
public:
	// MPropertyFriendlyName "noise frequency"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseFreq; // 0x144	
	// MPropertyFriendlyName "noise amplitude"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseScale; // 0x150	
	// MPropertyFriendlyName "offset rate"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetRate; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IControlPointEditorData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapCPOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	// MDefaultString
	Vector m_vecRotation; // 0x144	
	// MPropertyFriendlyName "Use Quaternians Internally"
	// MDefaultString
	bool m_bUseQuat; // 0x150	
	// MPropertyFriendlyName "Write normal instead of rotation"
	// MDefaultString
	bool m_bWriteNormal; // 0x151	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxis; // 0x140	
	// MPropertyFriendlyName "rotation rate"
	// MDefaultString
	float m_flRotRate; // 0x14c	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x150	
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nLocalCP; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nInputControlPoint; // 0x140	
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x144	
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x148	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x14c	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x150	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x154	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x158	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x15c	
	// MPropertyFriendlyName "use the derivative"
	// MDefaultString
	bool m_bDerivative; // 0x160	
private:
	[[maybe_unused]] uint8_t __pad0161[0x3]; // 0x161
public:
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	float m_flInterpRate; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0x140	
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0x144	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "use particle velocity for first input"
	// MDefaultString
	bool m_bUseParticleVelocity; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad015d[0x3]; // 0x15d
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x160	
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x164	
	// MPropertyFriendlyName "use particle normal for first input"
	// MDefaultString
	bool m_bUseParticleNormal; // 0x165	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x144	
	// MPropertyFriendlyName "scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x148	
	// MPropertyFriendlyName "input volume minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input volume maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	// MDefaultString
	int32_t m_nCP1; // 0x140	
	// MPropertyFriendlyName "center offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_INIT_CreateWithinSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	// MDefaultString
	float m_fRadiusMin; // 0x140	
	// MPropertyFriendlyName "distance max"
	// MDefaultString
	float m_fRadiusMax; // 0x144	
	// MPropertyFriendlyName "distance bias"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDistanceBias; // 0x148	
	// MPropertyFriendlyName "distance bias absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0x154	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x160	
	// MPropertyFriendlyName "scale CP (distance/speed/local speed)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x164	
	// MPropertyFriendlyName "speed min"
	// MDefaultString
	float m_fSpeedMin; // 0x168	
	// MPropertyFriendlyName "speed max"
	// MDefaultString
	float m_fSpeedMax; // 0x16c	
	// MPropertyFriendlyName "speed random exponent"
	// MDefaultString
	float m_fSpeedRandExp; // 0x170	
	// MPropertyFriendlyName "bias in local system"
	// MDefaultString
	bool m_bLocalCoords; // 0x174	
private:
	[[maybe_unused]] uint8_t __pad0175[0x1]; // 0x175
public:
	// MPropertyFriendlyName "randomly distribute to highest supplied control point"
	// MDefaultString
	// MParticleMaxVersion "1"
	bool m_bUseHighestEndCP; // 0x176	
private:
	[[maybe_unused]] uint8_t __pad0177[0x1]; // 0x177
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	// MDefaultString
	float m_flEndCPGrowthTime; // 0x178	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMin; // 0x17c	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMax; // 0x188	
	// MPropertyFriendlyName "Output vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x194	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x148	
	// MPropertyFriendlyName "control point axis"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x650
// Has VTable
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nLightType; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x198	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	// MPropertyFriendlyName "intensity"
	// MDefaultString
	CParticleCollectionFloatInput m_flIntensity; // 0x4d0	
	// MPropertyFriendlyName "cast shadows"
	// MDefaultString
	bool m_bCastShadows; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0579[0x3]; // 0x579
public:
	// MPropertyFriendlyName "inner cone angle"
	// MDefaultString
	float m_flTheta; // 0x57c	
	// MPropertyFriendlyName "outer cone angle"
	// MDefaultString
	float m_flPhi; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	// MPropertyFriendlyName "light radius multiplier"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0x588	
	// MPropertyFriendlyName "falloff linearity"
	// MDefaultString
	float m_flFalloffLinearity; // 0x630	
	// MPropertyFriendlyName "render diffuse"
	// MDefaultString
	bool m_bRenderDiffuse; // 0x634	
	// MPropertyFriendlyName "render specular"
	// MDefaultString
	bool m_bRenderSpecular; // 0x635	
private:
	[[maybe_unused]] uint8_t __pad0636[0x2]; // 0x636
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x638	
	// MPropertyFriendlyName "light priority"
	// MDefaultString
	int32_t m_nPriority; // 0x640	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vForce; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb0
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x15c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x160	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x164	
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x144	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	// MDefaultString
	int32_t m_nStartControlPointNumber; // 0x0	
	// MPropertyFriendlyName "end control point number"
	// MDefaultString
	int32_t m_nEndControlPointNumber; // 0x4	
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	// MDefaultString
	int32_t m_nBulgeControl; // 0x8	
	// MPropertyFriendlyName "random bulge"
	// MDefaultString
	float m_flBulge; // 0xc	
	// MPropertyFriendlyName "mid point position"
	// MDefaultString
	float m_flMidPoint; // 0x10	
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14	
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20	
	// MPropertyFriendlyName "Offset from control point for path end"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	// MDefaultString
	CParticleCollectionFloatInput m_flDuration; // 0x140	
	// MPropertyFriendlyName "destroy all particles immediately"
	// MDefaultString
	bool m_bDestroyImmediately; // 0x1e8	
	// MPropertyFriendlyName "play end cap effect"
	// MDefaultString
	bool m_bPlayEndCap; // 0x1e9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x140	
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x144	
	// MPropertyFriendlyName "cohesion strength"
	// MDefaultString
	float m_flCohesionStrength; // 0x148	
	// MPropertyFriendlyName "control point movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x14c	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x150	
	// MPropertyFriendlyName "use existing particle count"
	// MDefaultString
	bool m_bUseParticleCount; // 0x151	
private:
	[[maybe_unused]] uint8_t __pad0152[0xe]; // 0x152
public:
	CPathParameters m_PathParams; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output control point number"
	// MDefaultString
	int32_t m_nCPOutput; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_ExternalGenericForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "strength"
	// MDefaultString
	float m_flStrength; // 0x140	
	// MPropertyFriendlyName "curl strength"
	// MDefaultString
	float m_flCurlStrength; // 0x144	
	// MPropertyFriendlyName "linear strength"
	// MDefaultString
	float m_flLinearStrength; // 0x148	
	// MPropertyFriendlyName "radial strength"
	// MDefaultString
	float m_flRadialStrength; // 0x14c	
	// MPropertyFriendlyName "rotation strength"
	// MDefaultString
	float m_flRotationStrength; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1a0
// Has VTable
// Is Abstract
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x140	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x148	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x160	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x178	
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x190	
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x194	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x198	
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0x19c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Acceleration"
	// MDefaultString
	float m_flAccel; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	float m_RateMin; // 0x140	
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	float m_RateMax; // 0x144	
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x148	
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x14c	
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x150	
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x154	
	// MPropertyFriendlyName "bias"
	// MDefaultString
	float m_flBias; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad015c[0x24]; // 0x15c
public:
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x180	
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x184	
	// MPropertyFriendlyName "ease out"
	// MDefaultString
	bool m_bEaseOut; // 0x185	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	// MDefaultString
	Color m_ColorFade; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0xc]; // 0x144
public:
	// MPropertyFriendlyName "fade start time"
	// MDefaultString
	float m_flFadeStartTime; // 0x150	
	// MPropertyFriendlyName "fade end time"
	// MDefaultString
	float m_flFadeEndTime; // 0x154	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x158	
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInOut; // 0x15c	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	// MDefaultString
	float m_flStartFadeInTime; // 0x140	
	// MPropertyFriendlyName "end fade in time"
	// MDefaultString
	float m_flEndFadeInTime; // 0x144	
	// MPropertyFriendlyName "start fade out time"
	// MDefaultString
	float m_flStartFadeOutTime; // 0x148	
	// MPropertyFriendlyName "end fade out time"
	// MDefaultString
	float m_flEndFadeOutTime; // 0x14c	
	// MPropertyFriendlyName "start alpha"
	// MDefaultString
	float m_flStartAlpha; // 0x150	
	// MPropertyFriendlyName "end alpha"
	// MDefaultString
	float m_flEndAlpha; // 0x154	
	// MPropertyFriendlyName "force preserving particle order"
	// MDefaultString
	bool m_bForcePreserveParticleOrder; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	// MDefaultString
	int32_t m_nControlPointNumberStart; // 0x140	
	// MPropertyFriendlyName "offset control point number"
	// MDefaultString
	int32_t m_nControlPointNumberEnd; // 0x144	
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	// MDefaultString
	int32_t m_nParticlesToMaintain; // 0x140	
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	float m_flStartTime; // 0x144	
	// MPropertyFriendlyName "maintain count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x148	
	// MPropertyFriendlyName "maintain count scale control point field"
	// MDefaultString
	int32_t m_nScaleControlPointField; // 0x14c	
	// MPropertyFriendlyName "emission rate"
	// MDefaultString
	float m_flEmissionRate; // 0x150	
	// MPropertyFriendlyName "control point with snapshot data"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x154	
	// MPropertyFriendlyName "group emission times for new particles"
	// MDefaultString
	bool m_bEmitInstantaneously; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0x140	
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0x144	
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	// MDefaultString
	float m_flMaxVelocity; // 0x140	
	// MPropertyFriendlyName "override max velocity from this CP"
	// MDefaultString
	int32_t m_nOverrideCP; // 0x144	
	// MPropertyFriendlyName "override CP field"
	// MDefaultString
	int32_t m_nOverrideCPField; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	// MDefaultString
	bool m_bProjectCharacter; // 0x190	
	// MPropertyFriendlyName "project on world"
	// MDefaultString
	bool m_bProjectWorld; // 0x191	
	// MPropertyFriendlyName "project on water"
	// MDefaultString
	bool m_bProjectWater; // 0x192	
	// MPropertyFriendlyName "flip horizontal"
	// MDefaultString
	bool m_bFlipHorizontal; // 0x193	
	// MPropertyFriendlyName "enable projected depth controls"
	// MDefaultString
	bool m_bEnableProjectedDepthControls; // 0x194	
private:
	[[maybe_unused]] uint8_t __pad0195[0x3]; // 0x195
public:
	// MPropertyFriendlyName "min projection depth"
	// MDefaultString
	float m_flMinProjectionDepth; // 0x198	
	// MPropertyFriendlyName "max projection depth"
	// MDefaultString
	float m_flMaxProjectionDepth; // 0x19c	
	// MPropertyFriendlyName "material"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x1a0	
	// MPropertyFriendlyName "sheet animation time scale"
	// MDefaultString
	float m_flAnimationTimeScale; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01ac[0x4]; // 0x1ac
public:
	// MPropertyFriendlyName "material variables"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1b0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x170
// Has VTable
// Is Abstract
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x140	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x148	
	// MPropertyFriendlyName "shuffle"
	// MDefaultString
	bool m_bShuffle; // 0x160	
	// MPropertyFriendlyName "linear"
	// MDefaultString
	bool m_bLinear; // 0x161	
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x162	
private:
	[[maybe_unused]] uint8_t __pad0163[0x1]; // 0x163
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x520
// Has VTable
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	// MDefaultString
	CPerParticleFloatInput m_flForceScale; // 0x140	
	// MPropertyFriendlyName "force to apply"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x1e8	
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nCP; // 0x518	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "written field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x144	
	// MPropertyFriendlyName "particle neighbor increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x148	
	// MPropertyFriendlyName "group id"
	// MDefaultString
	int32_t m_nGroupID; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "force to be inside model"
	// MDefaultString
	int32_t m_nForceInModel; // 0x144	
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x148	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	// MDefaultString
	int32_t m_nHitboxValueFromControlPointIndex; // 0x14c	
	// MPropertyFriendlyName "hitbox scale"
	// MDefaultString
	float m_flHitBoxScale; // 0x150	
	// MPropertyFriendlyName "inherited velocity scale"
	// MDefaultString
	float m_flBoneVelocity; // 0x154	
	// MPropertyFriendlyName "maximum inherited velocity"
	// MDefaultString
	float m_flMaxBoneVelocity; // 0x158	
	// MPropertyFriendlyName "direction bias"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x15c	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x168	
	// MPropertyFriendlyName "bias in local space"
	// MDefaultString
	bool m_bLocalCoords; // 0x1e8	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x1e9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxis; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "rotation rate"
	// MDefaultString
	CParticleCollectionFloatInput m_flRotRate; // 0x150	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x1f8	
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x1fc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_DistanceToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x154	
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x158	
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x159	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x1dc	
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x1e0	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1e4	
	// MPropertyFriendlyName "only active within specified distance"
	// MDefaultString
	bool m_bActiveRange; // 0x1e8	
	// MPropertyFriendlyName "output is additive"
	// MDefaultString
	bool m_bAdditive; // 0x1e9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x140	
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0x141	
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0x142	
private:
	[[maybe_unused]] uint8_t __pad0143[0x1]; // 0x143
public:
	// MPropertyFriendlyName "first control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x144	
	// MPropertyFriendlyName "second control point number"
	// MDefaultString
	int32_t m_nCP2; // 0x148	
	// MPropertyFriendlyName "third control point number"
	// MDefaultString
	int32_t m_nCP3; // 0x14c	
	// MPropertyFriendlyName "fourth control point number"
	// MDefaultString
	int32_t m_nCP4; // 0x150	
	// MPropertyFriendlyName "first control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x154	
	// MPropertyFriendlyName "second control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x160	
	// MPropertyFriendlyName "third control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x16c	
	// MPropertyFriendlyName "fourth control point location"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x178	
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x184	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x140	
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_flMaxDistance; // 0x144	
	// MPropertyFriendlyName "Time scale"
	// MDefaultString
	float m_flTimeScale; // 0x148	
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bLoopedPath; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014d[0x3]; // 0x14d
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x140	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x144	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x148	
	// MPropertyFriendlyName "scale from conrol point (radius 1/radius 2/offset)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x14c	
	// MPropertyFriendlyName "particle density"
	// MDefaultString
	float m_flParticleDensity; // 0x150	
	// MPropertyFriendlyName "point offset"
	// MDefaultString
	float m_flOffset; // 0x154	
	// MPropertyFriendlyName "radius 1"
	// MDefaultString
	float m_flRadius1; // 0x158	
	// MPropertyFriendlyName "radius 2"
	// MDefaultString
	float m_flRadius2; // 0x15c	
	// MPropertyFriendlyName "use particle count instead of creation time"
	// MDefaultString
	bool m_bUseCount; // 0x160	
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bUseLocalCoords; // 0x161	
	// MPropertyFriendlyName "offset from existing position"
	// MDefaultString
	bool m_bOffsetExistingPos; // 0x162	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x350
// Has VTable
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x140	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x1e8	
	// MPropertyFriendlyName "force falloff function"
	// MDefaultString
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x290	
private:
	[[maybe_unused]] uint8_t __pad0294[0x4]; // 0x294
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	// MDefaultString
	CPerParticleFloatInput m_InputFalloffExp; // 0x298	
	// MPropertyFriendlyName "impulse type"
	// MDefaultString
	ParticleImpulseType_t m_nImpulseType; // 0x340	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMax; // 0x158	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMin; // 0x164	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMax; // 0x170	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x17c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x180	
	// MPropertyFriendlyName "interpolation scale"
	// MDefaultString
	float m_flInterpRate; // 0x184	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x188	
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x18c	
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x18d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x360
// Has VTable
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "offset"
	// MDefaultString
	Vector m_vecOffset; // 0x144	
	// MPropertyFriendlyName "offset in local space"
	// MDefaultString
	bool m_bOffsetLocal; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x3]; // 0x151
public:
	// MPropertyFriendlyName "particle to use"
	// MDefaultString
	ParticleSelection_t m_nParticleSelection; // 0x154	
	// MPropertyFriendlyName "particle number"
	// MDefaultString
	CParticleCollectionFloatInput m_nParticleNumber; // 0x158	
	// MPropertyFriendlyName "pin break type"
	// MDefaultString
	ParticlePinDistance_t m_nPinBreakType; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x4]; // 0x204
public:
	// MPropertyFriendlyName "break length %"
	// MDefaultString
	CParticleCollectionFloatInput m_flBreakDistance; // 0x208	
	// MPropertyFriendlyName "break speed"
	// MDefaultString
	CParticleCollectionFloatInput m_flBreakSpeed; // 0x2b0	
	// MPropertyFriendlyName "break comparison control point 1"
	// MDefaultString
	int32_t m_nBreakControlPointNumber; // 0x358	
	// MPropertyFriendlyName "break comparison control point 2"
	// MDefaultString
	int32_t m_nBreakControlPointNumber2; // 0x35c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x158	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x160	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x148	
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x14c	
	// MPropertyFriendlyName "offset axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x150	
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad015d[0x3]; // 0x15d
public:
	// MPropertyFriendlyName "strength field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x144	
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x150	
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x140	
	// MPropertyFriendlyName "offset max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x14c	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x158	
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x15c	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	// MDefaultString
	bool m_bProportional; // 0x15d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x610
// Has VTable
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x190	
	// MPropertyFriendlyName "texture repetition mode"
	// MDefaultString
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "texture repetitions"
	// MDefaultString
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0x1a0	
	// MPropertyFriendlyName "texture repetitions around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0x248	
	// MPropertyFriendlyName "color map offset along path"
	// MDefaultString
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0x2f0	
	// MPropertyFriendlyName "color map offset around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0x398	
	// MPropertyFriendlyName "normal map offset along path"
	// MDefaultString
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x440	
	// MPropertyFriendlyName "normal map offset around cable"
	// MDefaultString
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x4e8	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	// MDefaultString
	bool m_bDrawCableCaps; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0591[0x3]; // 0x591
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x594	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x598	
	// MPropertyFriendlyName "tessellation scale factor"
	// MDefaultString
	float m_flTessScale; // 0x59c	
	// MPropertyFriendlyName "minimum steps between particles"
	// MDefaultString
	int32_t m_nMinTesselation; // 0x5a0	
	// MPropertyFriendlyName "maximum steps between particles"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0x5a4	
	// MPropertyFriendlyName "roundness factor"
	// MDefaultString
	int32_t m_nRoundness; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05ac[0x4]; // 0x5ac
public:
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x5b0	
private:
	[[maybe_unused]] uint8_t __pad05c8[0x18]; // 0x5c8
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x5e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x144	
	// MPropertyFriendlyName "field to write"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x148	
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x14c	
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x150	
	// MPropertyFriendlyName "reverse order"
	// MDefaultString
	bool m_bReverse; // 0x151	
private:
	[[maybe_unused]] uint8_t __pad0152[0x2]; // 0x152
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x154	
	// MPropertyFriendlyName "local space angles"
	// MDefaultString
	bool m_bLocalSpaceAngles; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "difference minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "difference maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x158	
	// MPropertyFriendlyName "only active within specified difference"
	// MDefaultString
	bool m_bActiveRange; // 0x15c	
	// MPropertyFriendlyName "also set ouput to previous particle"
	// MDefaultString
	bool m_bSetPreviousParticle; // 0x15d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x140	
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x144	
	// MPropertyFriendlyName "use hmd orientation"
	// MDefaultString
	bool m_bOrientToHMD; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x144	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x140	
	// MPropertyFriendlyName "minimum velocity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x1c0	
	// MPropertyFriendlyName "maximum velocity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "per particle world collision tests"
	// MDefaultString
	bool m_bPerParticle; // 0x1dc	
	// MPropertyFriendlyName "offset instead of accelerate"
	// MDefaultString
	bool m_bTranslate; // 0x1dd	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	// MDefaultString
	bool m_bProportional; // 0x1de	
private:
	[[maybe_unused]] uint8_t __pad01df[0x1]; // 0x1df
public:
	// MPropertyFriendlyName "trace length"
	// MDefaultString
	float m_flTraceLength; // 0x1e0	
	// MPropertyFriendlyName "use radius for per particle trace length"
	// MDefaultString
	bool m_bPerParticleTR; // 0x1e4	
	// MPropertyFriendlyName "inherit from parent"
	// MDefaultString
	bool m_bInherit; // 0x1e5	
private:
	[[maybe_unused]] uint8_t __pad01e6[0x2]; // 0x1e6
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	// MDefaultString
	int32_t m_nChildCP; // 0x1e8	
	// MPropertyFriendlyName "child group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	CPerParticleFloatInput m_flOutput; // 0x148	
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x1f0	
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x1f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2a0
// Has VTable
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x144	
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x150	
	// MPropertyFriendlyName "Snapshot Index T Value"
	// MDefaultString
	CPerParticleFloatInput m_flTValue; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "force to be inside model"
	// MDefaultString
	int32_t m_nForceInModel; // 0x144	
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x148	
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	float m_flHitBoxScale; // 0x14c	
	// MPropertyFriendlyName "direction bias"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x150	
	// MPropertyFriendlyName "maintain existing hitbox"
	// MDefaultString
	bool m_bMaintainHitbox; // 0x15c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x15d	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x15e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x480
// Has VTable
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x470	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x474	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	// MDefaultString
	float m_flMinAlpha; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "current anim time output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x340
// Has VTable
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	// MDefaultString
	CPerParticleFloatInput m_flHueAdjust; // 0x140	
	// MPropertyFriendlyName "saturation adjust"
	// MDefaultString
	CPerParticleFloatInput m_flSaturationAdjust; // 0x1e8	
	// MPropertyFriendlyName "lightness adjust"
	// MDefaultString
	CPerParticleFloatInput m_flLightnessAdjust; // 0x290	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	// MDefaultString
	float m_flStartFadeInTime; // 0x140	
	// MPropertyFriendlyName "end fade in time"
	// MDefaultString
	float m_flEndFadeInTime; // 0x144	
	// MPropertyFriendlyName "start fade out time"
	// MDefaultString
	float m_flStartFadeOutTime; // 0x148	
	// MPropertyFriendlyName "end fade out time"
	// MDefaultString
	float m_flEndFadeOutTime; // 0x14c	
	// MPropertyFriendlyName "start alpha"
	// MDefaultString
	float m_flStartAlpha; // 0x150	
	// MPropertyFriendlyName "end alpha"
	// MDefaultString
	float m_flEndAlpha; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x144	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "noise coordinate scale"
	// MDefaultString
	fltx4 m_fl4NoiseScale; // 0x150	
	// MPropertyFriendlyName "additive"
	// MDefaultString
	bool m_bAdditive; // 0x160	
private:
	[[maybe_unused]] uint8_t __pad0161[0x3]; // 0x161
public:
	// MPropertyFriendlyName "Noise animation time scale"
	// MDefaultString
	float m_flNoiseAnimationTimeScale; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	// MDefaultString
	int32_t m_nDesiredVelocityCP; // 0x140	
	// MPropertyFriendlyName "latency CP"
	// MDefaultString
	int32_t m_nLatencyCP; // 0x144	
	// MPropertyFriendlyName "latency CP field"
	// MDefaultString
	int32_t m_nLatencyCPField; // 0x148	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	// MDefaultString
	int32_t m_nDesiredVelocityCPField; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x140	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x3]; // 0x149
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x14c	
	// MPropertyFriendlyName "prepare for rigid lock"
	// MDefaultString
	bool m_bRigid; // 0x150	
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x151	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x152	
private:
	[[maybe_unused]] uint8_t __pad0153[0x1]; // 0x153
public:
	// MPropertyFriendlyName "normal velocity min"
	// MDefaultString
	float m_flMinNormalVelocity; // 0x154	
	// MPropertyFriendlyName "normal velocity max"
	// MDefaultString
	float m_flMaxNormalVelocity; // 0x158	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	float m_flIncrement; // 0x15c	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MDefaultString
	int32_t m_nFullLoopIncrement; // 0x160	
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	int32_t m_nSnapShotStartPoint; // 0x164	
	// MPropertyFriendlyName "inherited bone velocity"
	// MDefaultString
	float m_flBoneVelocity; // 0x168	
	// MPropertyFriendlyName "max inherited bone velocity"
	// MDefaultString
	float m_flBoneVelocityMax; // 0x16c	
	// MPropertyFriendlyName "Set Color"
	// MDefaultString
	bool m_bCopyColor; // 0x170	
	// MPropertyFriendlyName "Set Alpha"
	// MDefaultString
	bool m_bCopyAlpha; // 0x171	
	// MPropertyFriendlyName "Set Radius"
	// MDefaultString
	bool m_bCopyRadius; // 0x172	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "rotation axis min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x144	
	// MPropertyFriendlyName "rotation axis max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x150	
	// MPropertyFriendlyName "rotation rate min"
	// MDefaultString
	float m_flRotRateMin; // 0x15c	
	// MPropertyFriendlyName "rotation rate max"
	// MDefaultString
	float m_flRotRateMax; // 0x160	
	// MPropertyFriendlyName "normalize output"
	// MDefaultString
	bool m_bNormalize; // 0x164	
private:
	[[maybe_unused]] uint8_t __pad0165[0x3]; // 0x165
public:
	// MPropertyFriendlyName "per particle scale"
	// MDefaultString
	CPerParticleFloatInput m_flScale; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x140	
	// MPropertyFriendlyName "Second Control point to set"
	// MDefaultString
	int32_t m_nSecondControlPoint; // 0x144	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x140	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	float m_flIncrement; // 0x144	
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x3]; // 0x149
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x14c	
	// MPropertyFriendlyName "sub frame interpolation"
	// MDefaultString
	bool m_bSubFrame; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x520
// Has VTable
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CPerParticleFloatInput m_Lerp; // 0x478	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x140	
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nCP; // 0x14c	
	// MPropertyFriendlyName "scale by radius"
	// MDefaultString
	bool m_bRadiusScale; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control_point_number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "lifetime fade start"
	// MDefaultString
	float m_flLifeTimeFadeStart; // 0x144	
	// MPropertyFriendlyName "lifetime fade end"
	// MDefaultString
	float m_flLifeTimeFadeEnd; // 0x148	
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x14c	
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x150	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x154	
	// MPropertyFriendlyName "rigid lock"
	// MDefaultString
	bool m_bRigid; // 0x1d4	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x1d5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	// MDefaultString
	int32_t m_controlPointNameString; // 0x0	
	// MPropertyFriendlyName "Offset from control point"
	// MDefaultString
	Vector m_vOffsetFromControlPoint; // 0x4	
	// MPropertyFriendlyName "Use local space offset"
	// MDefaultString
	bool m_bOffsetInLocalSpace; // 0x10	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapCPOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x148	
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "falloff range"
	// MDefaultString
	float m_flRange; // 0x144	
	// MPropertyFriendlyName "dampen scale"
	// MDefaultString
	float m_flScale; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x170
// Has VTable
// Is Abstract
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "yaw offset min"
	// MDefaultString
	float m_flDegreesMin; // 0x140	
	// MPropertyFriendlyName "yaw offset max"
	// MDefaultString
	float m_flDegreesMax; // 0x144	
	// MPropertyFriendlyName "yaw initial"
	// MDefaultString
	float m_flDegrees; // 0x148	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad0150[0xc]; // 0x150
public:
	// MPropertyFriendlyName "yaw random exponent"
	// MDefaultString
	float m_flRotationRandExponent; // 0x15c	
	// MPropertyFriendlyName "randomly flip direction"
	// MDefaultString
	bool m_bRandomlyFlipDirection; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "Output Scalar"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "Vector Component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x140	
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x141	
private:
	[[maybe_unused]] uint8_t __pad0142[0x2]; // 0x142
public:
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x144	
	// MPropertyFriendlyName "start age minimum"
	// MDefaultString
	float m_flAgeMin; // 0x148	
	// MPropertyFriendlyName "start age maximum"
	// MDefaultString
	float m_flAgeMax; // 0x14c	
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x150	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x154	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	// MDefaultString
	float m_flTimeDuration; // 0x14	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1ec	
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_Lerp; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x140	
	// MPropertyFriendlyName "sequence max"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
// 
// MParticleMinVersion
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x140	
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x148	
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014d[0x3]; // 0x14d
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	// MDefaultString
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x7b0
// Has VTable
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x140	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x470	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x7a0	
	// MPropertyFriendlyName "normalize output"
	// MDefaultString
	bool m_bNormalize; // 0x7a4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInputControlPoint; // 0x140	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputControlPoint; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	// MDefaultString
	float m_flOffset; // 0x140	
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x144	
	// MPropertyFriendlyName "CP movement tolerance"
	// MDefaultString
	float m_flTolerance; // 0x148	
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x14c	
	// MPropertyFriendlyName "interpolation rate"
	// MDefaultString
	float m_flLerpRate; // 0x150	
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x154	
	// MPropertyFriendlyName "reference CP 1"
	// MDefaultString
	int32_t m_nRefCP1; // 0x1d4	
	// MPropertyFriendlyName "reference CP 2"
	// MDefaultString
	int32_t m_nRefCP2; // 0x1d8	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	// MDefaultString
	int32_t m_nLerpCP; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x4]; // 0x1e0
public:
	// MPropertyFriendlyName "kill on no collision"
	// MDefaultString
	bool m_bKill; // 0x1e4	
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x1e5	
private:
	[[maybe_unused]] uint8_t __pad01e6[0x2]; // 0x1e6
public:
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x1e8	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	// MDefaultString
	bool m_bScaleOffset; // 0x1e9	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x148	
	// MPropertyFriendlyName "space points along path"
	// MDefaultString
	bool m_bPlaceAlongPath; // 0x160	
	// MPropertyFriendlyName "Treat path as a loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x161	
private:
	[[maybe_unused]] uint8_t __pad0162[0x2]; // 0x162
public:
	// MPropertyFriendlyName "Numer of points along path"
	// MDefaultString
	int32_t m_nNumPointsAlongPath; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	// MDefaultString
	int32_t m_nInputCP; // 0x140	
	// MPropertyFriendlyName "CP to set"
	// MDefaultString
	int32_t m_nOutputCP; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	// MDefaultString
	float m_flMinVelocity; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x144	
	// MPropertyFriendlyName "lerp time"
	// MDefaultString
	float m_flLerpTime; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2a0
// Has VTable
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x148	
	// MPropertyFriendlyName "position cache attribute"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flScale; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	Color m_OutlineColor; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x198	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_RemapCPOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	// MDefaultString
	Vector m_vecRotation; // 0x144	
	// MPropertyFriendlyName "Use Quaternians Internally"
	// MDefaultString
	bool m_bUseQuat; // 0x150	
	// MPropertyFriendlyName "Write normal instead of rotation"
	// MDefaultString
	bool m_bWriteNormal; // 0x151	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2a0
// Has VTable
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "written field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	CPerParticleFloatInput m_DistanceCheck; // 0x150	
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	// MDefaultString
	float m_flPercent; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	// MDefaultString
	float m_flCullPerc; // 0x140	
	// MPropertyFriendlyName "cull start time"
	// MDefaultString
	float m_flCullStart; // 0x144	
	// MPropertyFriendlyName "cull end time"
	// MDefaultString
	float m_flCullEnd; // 0x148	
	// MPropertyFriendlyName "cull time exponent"
	// MDefaultString
	float m_flCullExp; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MParticleMinVersion
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	// MDefaultString
	float m_flFadeStart; // 0x140	
	// MPropertyFriendlyName "end fade time"
	// MDefaultString
	float m_flFadeEnd; // 0x144	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	CPathParameters m_PathParams; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	// MDefaultString
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	// MDefaultString
	CParticleCollectionVecInput m_vecInput; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
// 
// MParticleMinVersion
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x140	
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x144	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x148	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x149	
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x14a	
private:
	[[maybe_unused]] uint8_t __pad014b[0x5]; // 0x14b
public:
	CPathParameters m_PathParams; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MObsoleteParticleFunction
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	// MDefaultString
	float m_flDurationMin; // 0x140	
	// MPropertyFriendlyName "maximum restart time"
	// MDefaultString
	float m_flDurationMax; // 0x144	
	// MPropertyFriendlyName "control point to scale duration"
	// MDefaultString
	int32_t m_nCP; // 0x148	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x14c	
	// MPropertyFriendlyName "child group ID"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x150	
	// MPropertyFriendlyName "only restart children"
	// MDefaultString
	bool m_bOnlyChildren; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x140	
	// MPropertyFriendlyName "force creation height to desired height"
	// MDefaultString
	bool m_bForceZ; // 0x141	
private:
	[[maybe_unused]] uint8_t __pad0142[0x2]; // 0x142
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
	// MPropertyFriendlyName "height override control point number"
	// MDefaultString
	int32_t m_nHeightCP; // 0x148	
	// MPropertyFriendlyName "desired height is relative to water"
	// MDefaultString
	bool m_bUseWaterHeight; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014d[0x3]; // 0x14d
public:
	// MPropertyFriendlyName "relative desired height"
	// MDefaultString
	float m_flDesiredHeight; // 0x150	
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	float m_flHitBoxScale; // 0x154	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x140	
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x144	
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	// MDefaultString
	float m_flDirScale; // 0x140	
	// MPropertyFriendlyName "speed matching strength"
	// MDefaultString
	float m_flSpdScale; // 0x144	
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	// MDefaultString
	int32_t m_nCPBroadcast; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x140	
	// MPropertyFriendlyName "ramp rate min"
	// MDefaultString
	Vector m_vecRateMin; // 0x144	
	// MPropertyFriendlyName "ramp rate max"
	// MDefaultString
	Vector m_vecRateMax; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x540
// Has VTable
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nXCount; // 0x140	
	// MPropertyFriendlyName "Y Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nYCount; // 0x1e8	
	// MPropertyFriendlyName "Z Dimension Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nZCount; // 0x290	
	// MPropertyFriendlyName "X Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nXSpacing; // 0x338	
	// MPropertyFriendlyName "Y Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nYSpacing; // 0x3e0	
	// MPropertyFriendlyName "Z Dimension Spacing"
	// MDefaultString
	CParticleCollectionFloatInput m_nZSpacing; // 0x488	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x530	
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x534	
	// MPropertyFriendlyName "center around control point"
	// MDefaultString
	bool m_bCenter; // 0x535	
	// MPropertyFriendlyName "hollow"
	// MDefaultString
	bool m_bHollow; // 0x536	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
// 
// MObsoleteParticleFunction
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x190	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0140[0x18]; // 0x140
public:
	// MPropertyFriendlyName "color1"
	// MDefaultString
	Color m_ColorMin; // 0x158	
	// MPropertyFriendlyName "color2"
	// MDefaultString
	Color m_ColorMax; // 0x15c	
	// MPropertyFriendlyName "tint clamp min"
	// MDefaultString
	Color m_TintMin; // 0x160	
	// MPropertyFriendlyName "tint clamp max"
	// MDefaultString
	Color m_TintMax; // 0x164	
	// MPropertyFriendlyName "light bias"
	// MDefaultString
	float m_flTintPerc; // 0x168	
	// MPropertyFriendlyName "tint blend mode"
	// MDefaultString
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x16c	
	// MPropertyFriendlyName "light amplification amount"
	// MDefaultString
	float m_flLightAmplification; // 0x170	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x360
// Has VTable
// Is Abstract
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	float m_flAnimationRate; // 0x190	
	// MPropertyFriendlyName "animation type"
	// MDefaultString
	AnimationType_t m_nAnimationType; // 0x194	
	// MPropertyFriendlyName "set animation value in FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x198	
	// MPropertyFriendlyName "light per vertex"
	// MDefaultString
	bool m_bPerVertexLighting; // 0x199	
private:
	[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
public:
	// MPropertyFriendlyName "self illum amount"
	// MDefaultString
	// MPropertyAttributeRange "0 2"
	float m_flSelfIllumAmount; // 0x19c	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	float m_flDiffuseAmount; // 0x1a0	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MDefaultString
	int32_t m_nLightingControlPoint; // 0x1a4	
	// MPropertyFriendlyName "self illum per-particle"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x1a8	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToZero; // 0x1ac	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flSourceAlphaValueToMapToOne; // 0x1b0	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bGammaCorrectVertexColors; // 0x1b4	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bSaturateColorPreAlphaBlend; // 0x1b5	
private:
	[[maybe_unused]] uint8_t __pad01b6[0x2]; // 0x1b6
public:
	// MPropertyFriendlyName "dual sequence combine mode"
	// MDefaultString
	// MPropertyGroupName "Dual sequence controls"
	SequenceCombineMode_t m_nSequenceCombineMode; // 0x1b8	
	// MPropertyFriendlyName "second sequence animation rate"
	// MDefaultString
	// MPropertyAttributeRange "0 5"
	// MPropertyGroupName "Dual sequence controls"
	float m_flAnimationRate2; // 0x1bc	
	// MPropertyFriendlyName "RGB blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0RGBWeight; // 0x1c0	
	// MPropertyFriendlyName "alpha blend weight for sequence 0"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence0AlphaWeight; // 0x1c4	
	// MPropertyFriendlyName "RGB blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1RGBWeight; // 0x1c8	
	// MPropertyFriendlyName "alpha blend weight for sequence 1"
	// MDefaultString
	// MPropertyAttributeRange "0 1"
	// MPropertyGroupName "Dual sequence controls"
	float m_flSequence1AlphaWeight; // 0x1cc	
	// MPropertyFriendlyName "add self amount for combined additive and alpha blended"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flAddSelfAmount; // 0x1d0	
	// MPropertyFriendlyName "use additive blending"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditive; // 0x1d4	
	// MPropertyFriendlyName "Additive alpha - write alpha during additive"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bAdditiveAlpha; // 0x1d5	
	// MPropertyFriendlyName "Mod2x blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bMod2X; // 0x1d6	
	// MPropertyFriendlyName "'Lighten blend mode"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bLightenMode; // 0x1d7	
	// MPropertyFriendlyName "use max-luminance blending for sequence 0"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence0; // 0x1d8	
	// MPropertyFriendlyName "use max-luminance blending for sequence 1"
	// MDefaultString
	bool m_bMaxLuminanceBlendingSequence1; // 0x1d9	
	// MPropertyFriendlyName "refract background"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	bool m_bRefract; // 0x1da	
private:
	[[maybe_unused]] uint8_t __pad01db[0x1]; // 0x1db
public:
	// MPropertyFriendlyName "refract amount"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	// MPropertyGroupName "Refraction"
	float m_flRefractAmount; // 0x1dc	
	// MPropertyFriendlyName "refract blur radius"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	int32_t m_nRefractBlurRadius; // 0x1e0	
	// MPropertyFriendlyName "refract blur type"
	// MDefaultString
	// MPropertyGroupName "Refraction"
	BlurFilterType_t m_nRefractBlurType; // 0x1e4	
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MDefaultString
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1e8	
	// MPropertyFriendlyName "stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char m_stencilTestID[128]; // 0x1e9	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bStencilTestExclude; // 0x269	
	// MPropertyFriendlyName "stencil write ID"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	char m_stencilWriteID[128]; // 0x26a	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthPass; // 0x2ea	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MDefaultString
	// MPropertyGroupName "Stencil"
	bool m_bWriteStencilOnDepthFail; // 0x2eb	
	// MPropertyFriendlyName "reverse z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bReverseZBuffering; // 0x2ec	
	// MPropertyFriendlyName "disable z-buffer test"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	bool m_bDisableZBuffering; // 0x2ed	
private:
	[[maybe_unused]] uint8_t __pad02ee[0x2]; // 0x2ee
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x2f0	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMinDist; // 0x2f4	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flFeatheringMaxDist; // 0x2f8	
	// MPropertyFriendlyName "overbright factor"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	float m_flOverbrightFactor; // 0x2fc	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByFOW; // 0x300	
	// MPropertyFriendlyName "Apply fog to particle"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bFogParticles; // 0x301	
	// MPropertyFriendlyName "Apply global light to color"
	// MDefaultString
	// MPropertyGroupName "Color and alpha adjustments"
	bool m_bTintByGlobalLight; // 0x302	
private:
	[[maybe_unused]] uint8_t __pad0303[0x5]; // 0x303
public:
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x308	
	// MPropertyFriendlyName "Apply motion vectors"
	// MDefaultString
	// MPropertyGroupName "Motion vectors"
	bool m_bMotionVectors; // 0x310	
private:
	[[maybe_unused]] uint8_t __pad0311[0x7]; // 0x311
public:
	// MPropertyFriendlyName "motion vectors texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	// MPropertyGroupName "Motion vectors"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hMotionVectorsTexture; // 0x318	
	// MPropertyFriendlyName "blend sequence 0 animation frames"
	// MDefaultString
	bool m_bBlendFramesSeq0; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0321[0x3]; // 0x321
public:
	// MPropertyFriendlyName "right eye first seq offset"
	// MDefaultString
	int32_t m_nFirstSequenceOffsetForRightEye; // 0x324	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MDefaultString
	int32_t m_nHSVShiftControlPoint; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	// MDefaultString
	CParticleCollectionFloatInput m_nCount; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1c0
// Has VTable
// 
// MObsoleteParticleFunction
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	float m_flAnimationRate; // 0x1a0	
	// MPropertyFriendlyName "animation type"
	// MDefaultString
	AnimationType_t m_nAnimationType; // 0x1a4	
	// MPropertyFriendlyName "set animation value in FPS"
	// MDefaultString
	bool m_bAnimateInFPS; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01a9[0x3]; // 0x1a9
public:
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	float m_flMinSize; // 0x1ac	
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	float m_flMaxSize; // 0x1b0	
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	float m_flStartFadeSize; // 0x1b4	
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	float m_flEndFadeSize; // 0x1b8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	// MDefaultString
	Color m_ColorFadeMin; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x18]; // 0x144
public:
	// MPropertyFriendlyName "color fade max"
	// MDefaultString
	Color m_ColorFadeMax; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad0160[0xc]; // 0x160
public:
	// MPropertyFriendlyName "fade start time"
	// MDefaultString
	float m_flFadeStartTime; // 0x16c	
	// MPropertyFriendlyName "fade end time"
	// MDefaultString
	float m_flFadeEndTime; // 0x170	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x174	
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInOut; // 0x178	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x250
// Has VTable
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x140	
	// MPropertyFriendlyName "attachment to follow"
	// MDefaultString
	char m_AttachmentName[128]; // 0x1c0	
	// MPropertyFriendlyName "First control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x240	
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x244	
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x248	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	// MDefaultString
	bool m_bSkin; // 0x24c	
	// MPropertyFriendlyName "follow attachment"
	// MDefaultString
	bool m_bAttachment; // 0x24d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1b0
// Has VTable
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0xc]; // 0x144
public:
	CPathParameters m_PathParams; // 0x150	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	// MDefaultString
	bool m_bUseRandomCPs; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0191[0x3]; // 0x191
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x194	
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x1a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x140	
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x144	
	// MPropertyFriendlyName "cull distance"
	// MDefaultString
	float m_flDistance; // 0x150	
	// MPropertyFriendlyName "cull inside instead of outside"
	// MDefaultString
	bool m_bCullInside; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x140	
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_flMaxDistance0; // 0x144	
	// MPropertyFriendlyName "maximum distance middle"
	// MDefaultString
	float m_flMaxDistanceMid; // 0x148	
	// MPropertyFriendlyName "maximum distance end"
	// MDefaultString
	float m_flMaxDistance1; // 0x14c	
	CPathParameters m_PathParameters; // 0x150	
	// MPropertyFriendlyName "travel time"
	// MDefaultString
	float m_flTravelTime; // 0x190	
	// MPropertyFriendlyName "travel time scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x194	
	// MPropertyFriendlyName "manual time placement field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x198	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x140	
	// MPropertyFriendlyName "hand"
	// MDefaultString
	int32_t m_nHand; // 0x144	
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x148	
	// MPropertyFriendlyName "use hand orientation"
	// MDefaultString
	bool m_bOrientToHand; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x140	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x144	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x148	
	// MPropertyFriendlyName "output control point field"
	// MDefaultString
	int32_t m_nOutputCPField; // 0x14c	
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	float m_flInputMin; // 0x150	
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flInputMax; // 0x154	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x158	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x15c	
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x160	
	// MPropertyFriendlyName "LOS Failure Scale"
	// MDefaultString
	float m_flLOSScale; // 0x164	
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x168	
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x169	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2b0
// Has VTable
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x144	
	// MPropertyFriendlyName "field to write"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x148	
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x14c	
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x150	
	// MPropertyFriendlyName "reverse order"
	// MDefaultString
	bool m_bReverse; // 0x151	
private:
	[[maybe_unused]] uint8_t __pad0152[0x2]; // 0x152
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x154	
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x158	
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x200	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	// MDefaultString
	bool m_bSubSample; // 0x2a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x140	
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x144	
	// MPropertyFriendlyName "particle number to read"
	// MDefaultString
	int32_t m_nParticleNumber; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x160
// Has VTable
// Is Abstract
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	// MDefaultString
	int32_t m_nCP0; // 0x140	
	// MPropertyFriendlyName "control point 1"
	// MDefaultString
	int32_t m_nCP1; // 0x144	
	// MPropertyFriendlyName "min distance value"
	// MDefaultString
	float m_flMinInputValue; // 0x148	
	// MPropertyFriendlyName "max distance value"
	// MDefaultString
	float m_flMaxInputValue; // 0x14c	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	// MDefaultString
	bool m_bInfiniteLine; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x1ec	
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CPerParticleFloatInput m_Lerp; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "use only bounding box"
	// MDefaultString
	bool m_bBoundBox; // 0x144	
	// MPropertyFriendlyName "cull outside instead of inside"
	// MDefaultString
	bool m_bCullOutside; // 0x145	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x146	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x147	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x480
// Has VTable
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "scale control point"
	// MDefaultString
	int32_t m_nScaleCP; // 0x144	
	// MPropertyFriendlyName "local space acceleration"
	// MDefaultString
	CParticleCollectionVecInput m_vecAccel; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x78
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	int32_t m_nInputMin; // 0x144	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	int32_t m_nInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "count back from last particle"
	// MDefaultString
	bool m_bBackwards; // 0x154	
private:
	[[maybe_unused]] uint8_t __pad0155[0x3]; // 0x155
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x140	
	// MPropertyFriendlyName "max force"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x190	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x198	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x1a0	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x1a8	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x1b0	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x1b8	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad0140[0x4]; // 0x140
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	// MDefaultString
	Vector m_vecScale; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x14c	
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x150	
	// MPropertyFriendlyName "random offset min"
	// MDefaultString
	Vector m_vOffsetMin; // 0x154	
	// MPropertyFriendlyName "random offset max"
	// MDefaultString
	Vector m_vOffsetMax; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	// MDefaultString
	float m_Rate; // 0x140	
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x144	
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x24]; // 0x14c
public:
	// MPropertyFriendlyName "ramp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x170	
	// MPropertyFriendlyName "ease out"
	// MDefaultString
	bool m_bEaseOut; // 0x174	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x140	
	// MPropertyFriendlyName "sequence max"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x144	
	// MPropertyFriendlyName "shuffle"
	// MDefaultString
	bool m_bShuffle; // 0x148	
	// MPropertyFriendlyName "linear"
	// MDefaultString
	bool m_bLinear; // 0x149	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	// MDefaultString
	float m_flFadeOutTimeMin; // 0x140	
	// MPropertyFriendlyName "fade out time max"
	// MDefaultString
	float m_flFadeOutTimeMax; // 0x144	
	// MPropertyFriendlyName "fade out time exponent"
	// MDefaultString
	float m_flFadeOutTimeExp; // 0x148	
	// MPropertyFriendlyName "fade bias"
	// MDefaultString
	float m_flFadeBias; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad0150[0x30]; // 0x150
public:
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x180	
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInAndOut; // 0x181	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MDefaultString
	float m_RateMin; // 0x140	
	// MPropertyFriendlyName "oscillation rate max"
	// MDefaultString
	float m_RateMax; // 0x144	
	// MPropertyFriendlyName "oscillation frequency min"
	// MDefaultString
	float m_FrequencyMin; // 0x148	
	// MPropertyFriendlyName "oscillation frequency max"
	// MDefaultString
	float m_FrequencyMax; // 0x14c	
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x150	
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x154	
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x155	
private:
	[[maybe_unused]] uint8_t __pad0156[0x2]; // 0x156
public:
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x158	
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x15c	
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x160	
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x164	
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x168	
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x16c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1b0
// Has VTable
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	// MDefaultString
	float m_cubeWidth; // 0x190	
	// MPropertyFriendlyName "cutoff radius"
	// MDefaultString
	float m_cutoffRadius; // 0x194	
	// MPropertyFriendlyName "render radius"
	// MDefaultString
	float m_renderRadius; // 0x198	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x19c	
	// MPropertyFriendlyName "material"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x1a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x480
// Has VTable
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x470	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4b0
// Has VTable
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x144	
	// MPropertyFriendlyName "collision mode"
	// MDefaultString
	ParticleCollisionMode_t m_nCollisionMode; // 0x150	
	// MPropertyFriendlyName "minimum detail collision mode"
	// MDefaultString
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x154	
	// MPropertyFriendlyName "amount of bounce"
	// MDefaultString
	CPerParticleFloatInput m_flBounceAmount; // 0x158	
	// MPropertyFriendlyName "amount of slide"
	// MDefaultString
	CPerParticleFloatInput m_flSlideAmount; // 0x200	
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	// MPropertyFriendlyName "Random Direction scale"
	// MDefaultString
	CPerParticleFloatInput m_flRandomDirScale; // 0x2b0	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MDefaultString
	float m_flCpMovementTolerance; // 0x358	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MDefaultString
	float m_flTraceTolerance; // 0x35c	
	// MPropertyFriendlyName "minimum speed to kill on collision"
	// MDefaultString
	float m_flMinSpeed; // 0x360	
	// MPropertyFriendlyName "Add Decay to Bounce"
	// MDefaultString
	bool m_bDecayBounce; // 0x364	
	// MPropertyFriendlyName "kill particle on collision"
	// MDefaultString
	bool m_bKillonContact; // 0x365	
private:
	[[maybe_unused]] uint8_t __pad0366[0x2]; // 0x366
public:
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MDefaultString
	float m_flCollisionConfirmationSpeed; // 0x368	
	// MPropertyFriendlyName "Set Normal"
	// MDefaultString
	bool m_bSetNormal; // 0x36c	
private:
	[[maybe_unused]] uint8_t __pad036d[0x3]; // 0x36d
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x370	
private:
	[[maybe_unused]] uint8_t __pad0374[0x4]; // 0x374
public:
	// MPropertyFriendlyName "Speed to stop when sticking"
	// MDefaultString
	CPerParticleFloatInput m_flStopSpeed; // 0x378	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x420	
	// MPropertyFriendlyName "World Only"
	// MDefaultString
	bool m_bWorldOnly; // 0x424	
private:
	[[maybe_unused]] uint8_t __pad0425[0x3]; // 0x425
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x428	
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x42c	
	// MPropertyFriendlyName "brush only"
	// MDefaultString
	bool m_bBrushOnly; // 0x4ac	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x140	
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x144	
	// MPropertyFriendlyName "exponent"
	// MDefaultString
	float m_flExponent; // 0x148	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	// MDefaultString
	float m_flOffset; // 0x140	
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x144	
	// MPropertyFriendlyName "collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
public:
	// MPropertyFriendlyName "kill on no collision"
	// MDefaultString
	bool m_bKill; // 0x1cc	
	// MPropertyFriendlyName "include water"
	// MDefaultString
	bool m_bIncludeWater; // 0x1cd	
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x1ce	
	// MPropertyFriendlyName "set Previous XYZ only"
	// MDefaultString
	bool m_bSetPXYZOnly; // 0x1cf	
	// MPropertyFriendlyName "Trace along particle normal"
	// MDefaultString
	bool m_bTraceAlongNormal; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	// MDefaultString
	float m_flOffsetByRadiusFactor; // 0x1d4	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MDefaultString
	int32_t m_nIgnoreCP; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x5e0
// Has VTable
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	// MDefaultString
	float m_flScale; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x410]; // 0x144
public:
	// MPropertyFriendlyName "light 1 control point"
	// MDefaultString
	int32_t m_nControlPoint1; // 0x554	
	// MPropertyFriendlyName "light 2 control point"
	// MDefaultString
	int32_t m_nControlPoint2; // 0x558	
	// MPropertyFriendlyName "light 3 control point"
	// MDefaultString
	int32_t m_nControlPoint3; // 0x55c	
	// MPropertyFriendlyName "light 4 control point"
	// MDefaultString
	int32_t m_nControlPoint4; // 0x560	
	// MPropertyFriendlyName "light 1 control point offset"
	// MDefaultString
	Vector m_vecCPOffset1; // 0x564	
	// MPropertyFriendlyName "light 2 control point offset"
	// MDefaultString
	Vector m_vecCPOffset2; // 0x570	
	// MPropertyFriendlyName "light 3 control point offset"
	// MDefaultString
	Vector m_vecCPOffset3; // 0x57c	
	// MPropertyFriendlyName "light 4 control point offset"
	// MDefaultString
	Vector m_vecCPOffset4; // 0x588	
	// MPropertyFriendlyName "light 1 50% distance"
	// MDefaultString
	float m_LightFiftyDist1; // 0x594	
	// MPropertyFriendlyName "light 1 0% distance"
	// MDefaultString
	float m_LightZeroDist1; // 0x598	
	// MPropertyFriendlyName "light 2 50% distance"
	// MDefaultString
	float m_LightFiftyDist2; // 0x59c	
	// MPropertyFriendlyName "light 2 0% distance"
	// MDefaultString
	float m_LightZeroDist2; // 0x5a0	
	// MPropertyFriendlyName "light 3 50% distance"
	// MDefaultString
	float m_LightFiftyDist3; // 0x5a4	
	// MPropertyFriendlyName "light 3 0% distance"
	// MDefaultString
	float m_LightZeroDist3; // 0x5a8	
	// MPropertyFriendlyName "light 4 50% distance"
	// MDefaultString
	float m_LightFiftyDist4; // 0x5ac	
	// MPropertyFriendlyName "light 4 0% distance"
	// MDefaultString
	float m_LightZeroDist4; // 0x5b0	
	// MPropertyFriendlyName "light 1 color"
	// MDefaultString
	Color m_LightColor1; // 0x5b4	
	// MPropertyFriendlyName "light 2 color"
	// MDefaultString
	Color m_LightColor2; // 0x5b8	
	// MPropertyFriendlyName "light 3 color"
	// MDefaultString
	Color m_LightColor3; // 0x5bc	
	// MPropertyFriendlyName "light 4 color"
	// MDefaultString
	Color m_LightColor4; // 0x5c0	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType1; // 0x5c4	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType2; // 0x5c5	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType3; // 0x5c6	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	// MDefaultString
	bool m_bLightType4; // 0x5c7	
	// MPropertyFriendlyName "light 1 dynamic light"
	// MDefaultString
	bool m_bLightDynamic1; // 0x5c8	
	// MPropertyFriendlyName "light 2 dynamic light"
	// MDefaultString
	bool m_bLightDynamic2; // 0x5c9	
	// MPropertyFriendlyName "light 3 dynamic light"
	// MDefaultString
	bool m_bLightDynamic3; // 0x5ca	
	// MPropertyFriendlyName "light 4 dynamic light"
	// MDefaultString
	bool m_bLightDynamic4; // 0x5cb	
	// MPropertyFriendlyName "compute normals from control points"
	// MDefaultString
	bool m_bUseNormal; // 0x5cc	
	// MPropertyFriendlyName "half-lambert normals"
	// MDefaultString
	bool m_bUseHLambert; // 0x5cd	
private:
	[[maybe_unused]] uint8_t __pad05ce[0x4]; // 0x5ce
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	// MDefaultString
	bool m_bClampLowerRange; // 0x5d2	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	// MDefaultString
	bool m_bClampUpperRange; // 0x5d3	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "Number of Children to Use"
	// MDefaultString
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecMin; // 0x140	
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecMax; // 0x14c	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x158	
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad015d[0x3]; // 0x15d
public:
	// MPropertyFriendlyName "scale CP (.x= distance)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x160	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	// MDefaultString
	Color m_vColorTint; // 0x140	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	// MDefaultString
	float m_flBrightnessScale; // 0x144	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	// MDefaultString
	float m_flRadiusScale; // 0x148	
	// MPropertyFriendlyName "minimum radius for created lights"
	// MDefaultString
	float m_flMinimumLightingRadius; // 0x14c	
	// MPropertyFriendlyName "maximum radius for created lights"
	// MDefaultString
	float m_flMaximumLightingRadius; // 0x150	
	// MPropertyFriendlyName "amount of damping of changes"
	// MDefaultString
	float m_flPositionDampingConstant; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
// 
// MObsoleteParticleFunction
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	// MDefaultString
	float m_flRotateRateDegrees; // 0x190	
	// MPropertyFriendlyName "forward angle"
	// MDefaultString
	float m_flForwardDegrees; // 0x194	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x350
// Has VTable
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MDefaultString
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyFriendlyName "pre emission operators"
	CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10	
	// MPropertyFriendlyName "emitters"
	CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28	
	// MPropertyFriendlyName "initializers"
	CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40	
	// MPropertyFriendlyName "operators"
	CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58	
	// MPropertyFriendlyName "forces"
	CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70	
	// MPropertyFriendlyName "constraints"
	CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88	
	// MPropertyFriendlyName "renderers"
	CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xa0	
	// MPropertySuppressField
	CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0xa8]; // 0xd0
public:
	// MPropertySuppressField
	// MDefaultString
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178	
	// MPropertyFriendlyName "initial particles"
	// MDefaultString
	int32_t m_nInitialParticles; // 0x17c	
	// MPropertyFriendlyName "max particles"
	// MDefaultString
	int32_t m_nMaxParticles; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x3c]; // 0x184
public:
	// MPropertyFriendlyName "bounding box min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1c0	
	// MPropertyFriendlyName "bounding box max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x1cc	
	// MPropertyFriendlyName "snapshot control point"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "snapshot"
	// MPropertyAttributeEditor "AssetBrowse( vsnap )"
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x1e0	
	// MPropertyFriendlyName "target layer ID for rendering"
	// MDefaultString
	CUtlSymbolLarge m_pszTargetLayerID; // 0x1e8	
	// MPropertyFriendlyName "Topology"
	// MDefaultString
	ParticleTopology_t m_nTopology; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01f4[0x1c]; // 0x1f4
public:
	// MPropertyFriendlyName "reference replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x210	
	// MPropertyFriendlyName "cull replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x218	
	// MPropertyFriendlyName "cull radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullRadius; // 0x220	
	// MPropertyFriendlyName "cull cost"
	// MDefaultString
	// MParticleAdvancedField
	float m_flCullFillCost; // 0x224	
	// MPropertyFriendlyName "cull control point"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nCullControlPoint; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0xc]; // 0x22c
public:
	// MPropertyFriendlyName "fallback replacement definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x238	
	// MPropertyFriendlyName "fallback max count"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nFallbackMaxCount; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
public:
	// MPropertyFriendlyName "low violence definition"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MParticleAdvancedField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x248	
	// MPropertyFriendlyName "color"
	// MDefaultString
	Color m_ConstantColor; // 0x250	
	// MPropertyFriendlyName "normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x254	
	// MPropertyFriendlyName "radius"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x260	
	// MPropertyFriendlyName "rotation"
	// MDefaultString
	float m_flConstantRotation; // 0x264	
	// MPropertyFriendlyName "rotation speed"
	// MDefaultString
	float m_flConstantRotationSpeed; // 0x268	
	// MPropertyFriendlyName "lifetime"
	// MDefaultString
	float m_flConstantLifespan; // 0x26c	
	// MPropertyFriendlyName "sequence number"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x270	
	// MPropertyFriendlyName "sequence number 1"
	// MDefaultString
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x274	
	// MPropertyFriendlyName "group id"
	// MDefaultString
	int32_t m_nGroupID; // 0x278	
	// MPropertyFriendlyName "maximum time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumTimeStep; // 0x27c	
	// MPropertyFriendlyName "maximum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMaximumSimTime; // 0x280	
	// MPropertyFriendlyName "minimum sim tick rate"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumSimTime; // 0x284	
	// MPropertyFriendlyName "minimum simulation time step"
	// MDefaultString
	// MParticleAdvancedField
	float m_flMinimumTimeStep; // 0x288	
	// MPropertyFriendlyName "minimum rendered frames"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinimumFrames; // 0x28c	
	// MPropertyFriendlyName "minimum CPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinCPULevel; // 0x290	
	// MPropertyFriendlyName "minimum GPU level"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nMinGPULevel; // 0x294	
	// MPropertyFriendlyName "view model effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bViewModelEffect; // 0x298	
	// MPropertyFriendlyName "screen space effect"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bScreenSpaceEffect; // 0x299	
private:
	[[maybe_unused]] uint8_t __pad029a[0x16]; // 0x29a
public:
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x2b0	
	// MPropertyFriendlyName "time to sleep when not drawn"
	// MDefaultString
	float m_flNoDrawTimeToGoToSleep; // 0x2c8	
	// MPropertyFriendlyName "maximum draw distance"
	// MDefaultString
	float m_flMaxDrawDistance; // 0x2cc	
	// MPropertyFriendlyName "start fade distance"
	// MDefaultString
	float m_flStartFadeDistance; // 0x2d0	
	// MPropertyFriendlyName "maximum creation distance"
	// MDefaultString
	float m_flMaxCreationDistance; // 0x2d4	
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nSkipRenderControlPoint; // 0x2d8	
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAllowRenderControlPoint; // 0x2dc	
	// MPropertyFriendlyName "minimum free particles to aggregate"
	// MDefaultString
	// MParticleAdvancedField
	int32_t m_nAggregationMinAvailableParticles; // 0x2e0	
	// MPropertyFriendlyName "aggregation radius"
	// MDefaultString
	// MParticleAdvancedField
	float m_flAggregateRadius; // 0x2e4	
	// MPropertyFriendlyName "freeze simulation after time"
	// MDefaultString
	// MParticleAdvancedField
	float m_flStopSimulationAfterTime; // 0x2e8	
private:
	[[maybe_unused]] uint8_t __pad02ec[0x38]; // 0x2ec
public:
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MDefaultString
	bool m_bShouldSort; // 0x324	
	// MPropertyFriendlyName "batch particle systems"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldBatch; // 0x325	
private:
	[[maybe_unused]] uint8_t __pad0326[0x2]; // 0x326
public:
	// MPropertyFriendlyName "depth sort bias"
	// MDefaultString
	float m_flDepthSortBias; // 0x328	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	// MDefaultString
	bool m_bInfiniteBounds; // 0x32c	
private:
	[[maybe_unused]] uint8_t __pad032d[0x1]; // 0x32d
public:
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	// MDefaultString
	// MParticleAdvancedField
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x32e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1c0
// Has VTable
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	// MDefaultString
	float m_flPeakStrength; // 0x190	
	// MPropertyFriendlyName "peak strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x194	
	// MPropertyFriendlyName "radius"
	// MDefaultString
	float m_flRadius; // 0x198	
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x19c	
	// MPropertyFriendlyName "shake duration after end"
	// MDefaultString
	float m_flShakeDuration; // 0x1a0	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	// MDefaultString
	float m_flTransitionTime; // 0x1a4	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	// MDefaultString
	float m_flTwistAmount; // 0x1a8	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	// MDefaultString
	float m_flRadialAmount; // 0x1ac	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	// MDefaultString
	float m_flControlPointOrientationAmount; // 0x1b0	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	// MDefaultString
	int32_t m_nControlPointForLinearDirection; // 0x1b4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x15c	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x160	
	// MPropertyFriendlyName "interpolation scale"
	// MDefaultString
	float m_flInterpRate; // 0x164	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x140	
	// MPropertyFriendlyName "only set position once"
	// MDefaultString
	bool m_bSetOnce; // 0x141	
private:
	[[maybe_unused]] uint8_t __pad0142[0x2]; // 0x142
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x144	
	// MPropertyFriendlyName "control point location"
	// MDefaultString
	Vector m_vecCP1Pos; // 0x148	
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	// MDefaultString
	bool m_bTransformNormals; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0141[0x3]; // 0x141
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "value to lerp to"
	// MDefaultString
	float m_flOutput; // 0x144	
	// MPropertyFriendlyName "lerp time"
	// MDefaultString
	float m_flLerpTime; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x144	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x140	
	// MPropertyFriendlyName "inherit CP orientation"
	// MDefaultString
	bool m_bOrient; // 0x141	
private:
	[[maybe_unused]] uint8_t __pad0142[0x2]; // 0x142
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x144	
	// MPropertyFriendlyName "control point to offset positions from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	// MDefaultString
	CParticleCollectionFloatInput m_flReRandomRate; // 0x150	
	// MPropertyFriendlyName "control point min"
	// MDefaultString
	Vector m_vecCPMinPos; // 0x1f8	
	// MPropertyFriendlyName "control point max"
	// MDefaultString
	Vector m_vecCPMaxPos; // 0x204	
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_flInterpolation; // 0x210	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CNewParticleEffect : public IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CNewParticleEffect* m_pNext; // 0x10	
	CNewParticleEffect* m_pPrev; // 0x18	
	IParticleCollection* m_pParticles; // 0x20	
	char* m_pDebugName; // 0x28	
	struct 
	{
		uint8_t m_bDontRemove: 1; 		
		uint8_t m_bRemove: 1; 		
		uint8_t m_bNeedsBBoxUpdate: 1; 		
		uint8_t m_bIsFirstFrame: 1; 		
		uint8_t m_bAutoUpdateBBox: 1; 		
		uint8_t m_bAllocated: 1; 		
		uint8_t m_bSimulate: 1; 		
		uint8_t m_bShouldPerformCullCheck: 1; 		
		uint8_t m_bForceNoDraw: 1; 		
		uint8_t m_bDisableAggregation: 1; 		
		uint8_t m_bShouldSimulateDuringGamePaused: 1; 		
		uint8_t m_bShouldCheckFoW: 1; 		
		uint256_t __pad1: 180;
	}; // 192 bits
	Vector m_vSortOrigin; // 0x40	
	float m_flScale; // 0x4c	
	PARTICLE_EHANDLE__* m_hOwner; // 0x50	
	CParticleProperty* m_pOwningParticleProperty; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x10]; // 0x60
public:
	Vector m_LastMin; // 0x70	
	Vector m_LastMax; // 0x7c	
	CSplitScreenSlot m_nSplitScreenUser; // 0x88	
	Vector m_vecAggregationCenter; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad0098[0x18]; // 0x98
public:
	int32_t m_RefCount; // 0xb0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	// MDefaultString
	CParticleCollectionFloatInput m_flFreezeTime; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP1; // 0x140	
	// MPropertyFriendlyName "control point offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x144	
	// MPropertyFriendlyName "use eye orientation"
	// MDefaultString
	bool m_bOrientToEyes; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	// MDefaultString
	float m_flNoiseCoordScale0; // 0x140	
	// MPropertyFriendlyName "noise scale 1"
	// MDefaultString
	float m_flNoiseCoordScale1; // 0x144	
	// MPropertyFriendlyName "noise scale 2"
	// MDefaultString
	float m_flNoiseCoordScale2; // 0x148	
	// MPropertyFriendlyName "noise scale 3"
	// MDefaultString
	float m_flNoiseCoordScale3; // 0x14c	
	// MPropertyFriendlyName "noise amount 0"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x150	
	// MPropertyFriendlyName "noise amount 1"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x15c	
	// MPropertyFriendlyName "noise amount 2"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x168	
	// MPropertyFriendlyName "noise amount 3"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x174	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "minimum"
	// MDefaultString
	float m_flOutputMin; // 0x144	
	// MPropertyFriendlyName "maximum"
	// MDefaultString
	float m_flOutputMax; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	// MDefaultString
	float m_flStartTime; // 0x140	
	// MPropertyFriendlyName "end time"
	// MDefaultString
	float m_flEndTime; // 0x144	
	// MPropertyFriendlyName "radius start scale"
	// MDefaultString
	float m_flStartScale; // 0x148	
	// MPropertyFriendlyName "radius end scale"
	// MDefaultString
	float m_flEndScale; // 0x14c	
	// MPropertyFriendlyName "ease in and out"
	// MDefaultString
	bool m_bEaseInAndOut; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x3]; // 0x151
public:
	// MPropertyFriendlyName "scale bias"
	// MDefaultString
	float m_flBias; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nCPOut; // 0x140	
	// MPropertyFriendlyName "control point to trace from"
	// MDefaultString
	int32_t m_nCPIn; // 0x144	
	// MPropertyFriendlyName "trace update rate"
	// MDefaultString
	float m_flUpdateRate; // 0x148	
	// MPropertyFriendlyName "max trace length"
	// MDefaultString
	float m_flTraceLength; // 0x14c	
	// MPropertyFriendlyName "offset end point amount"
	// MDefaultString
	float m_flOffset; // 0x150	
	// MPropertyFriendlyName "trace direction override"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x154	
	// MPropertyFriendlyName "trace collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x160	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	// MDefaultString
	bool m_bSetToEndpoint; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x250
// Has VTable
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nHand; // 0x190	
	// MPropertyFriendlyName "hand control point number"
	// MDefaultString
	int32_t m_nOutputHandCP; // 0x194	
	// MPropertyFriendlyName "cp field"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x4]; // 0x19c
public:
	// MPropertyFriendlyName "amplitude"
	// MDefaultString
	CPerParticleFloatInput m_flAmplitude; // 0x1a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "start fadeout min"
	// MDefaultString
	float m_flStartTime_min; // 0x144	
	// MPropertyFriendlyName "start fadeout max"
	// MDefaultString
	float m_flStartTime_max; // 0x148	
	// MPropertyFriendlyName "start fadeout exponent"
	// MDefaultString
	float m_flStartTime_exp; // 0x14c	
	// MPropertyFriendlyName "end fadeout min"
	// MDefaultString
	float m_flEndTime_min; // 0x150	
	// MPropertyFriendlyName "end fadeout max"
	// MDefaultString
	float m_flEndTime_max; // 0x154	
	// MPropertyFriendlyName "end fadeout exponent"
	// MDefaultString
	float m_flEndTime_exp; // 0x158	
	// MPropertyFriendlyName "distance fade range"
	// MDefaultString
	float m_flRange; // 0x15c	
	// MPropertyFriendlyName "instant jump threshold"
	// MDefaultString
	float m_flJumpThreshold; // 0x160	
	// MPropertyFriendlyName "previous position scale"
	// MDefaultString
	float m_flPrevPosScale; // 0x164	
	// MPropertyFriendlyName "lock rotation"
	// MDefaultString
	bool m_bLockRot; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMin; // 0x140	
	// MPropertyFriendlyName "oscillation rate max"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMax; // 0x14c	
	// MPropertyFriendlyName "oscillation frequency min"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMin; // 0x158	
	// MPropertyFriendlyName "oscillation frequency max"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMax; // 0x164	
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x170	
	// MPropertyFriendlyName "proportional 0/1"
	// MDefaultString
	bool m_bProportional; // 0x174	
	// MPropertyFriendlyName "start/end proportional"
	// MDefaultString
	bool m_bProportionalOp; // 0x175	
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x176	
private:
	[[maybe_unused]] uint8_t __pad0177[0x1]; // 0x177
public:
	// MPropertyFriendlyName "start time min"
	// MDefaultString
	float m_flStartTime_min; // 0x178	
	// MPropertyFriendlyName "start time max"
	// MDefaultString
	float m_flStartTime_max; // 0x17c	
	// MPropertyFriendlyName "end time min"
	// MDefaultString
	float m_flEndTime_min; // 0x180	
	// MPropertyFriendlyName "end time max"
	// MDefaultString
	float m_flEndTime_max; // 0x184	
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x188	
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x18c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x400
// Has VTable
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	// MDefaultString
	int32_t m_nSnapshotControlPointNumber; // 0x140	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
	// MPropertyFriendlyName "random order"
	// MDefaultString
	bool m_bRandom; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x3]; // 0x149
public:
	// MPropertyFriendlyName "random seed"
	// MDefaultString
	int32_t m_nRandomSeed; // 0x14c	
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bSetNormal; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x7]; // 0x151
public:
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	CParticleCollectionFloatInput m_flIncrement; // 0x158	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MDefaultString
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x200	
	// MPropertyFriendlyName "Snapshot start point"
	// MDefaultString
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x2a8	
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x350	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	// MDefaultString
	bool m_bUseWorldLocation; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0141[0x1]; // 0x141
public:
	// MPropertyFriendlyName "randomize"
	// MDefaultString
	bool m_bRandomize; // 0x142	
	// MPropertyFriendlyName "only set orientation once"
	// MDefaultString
	bool m_bSetOnce; // 0x143	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x144	
	// MPropertyFriendlyName "control point to offset orientation from"
	// MDefaultString
	int32_t m_nHeadLocation; // 0x148	
	// MPropertyFriendlyName "pitch yaw roll"
	// MDefaultString
	QAngle m_vecRotation; // 0x14c	
	// MPropertyFriendlyName "pitch yaw roll max"
	// MDefaultString
	QAngle m_vecRotationB; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad0164[0x4]; // 0x164
public:
	// MPropertyFriendlyName "interpolation"
	// MDefaultString
	CParticleCollectionFloatInput m_flInterpolation; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x140	
	// MPropertyFriendlyName "comparison control point number"
	// MDefaultString
	int32_t m_nControlPointCompare; // 0x144	
	// MPropertyFriendlyName "local space control point number"
	// MDefaultString
	int32_t m_nControlPointLocal; // 0x148	
	// MPropertyFriendlyName "velocity scale"
	// MDefaultString
	float m_flVelocityScale; // 0x14c	
	// MPropertyFriendlyName "direction only"
	// MDefaultString
	bool m_bDirectionOnly; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x960
// Has VTable
// Is Abstract
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyFriendlyName "orientation type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nOrientationType; // 0x360	
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	int32_t m_nOrientationControlPoint; // 0x364	
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x368	
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x36c	
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x370	
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x418	
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusScale; // 0x4c8	
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flAlphaScale; // 0x570	
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x618	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x948	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	bool m_bClampV; // 0x94c	
private:
	[[maybe_unused]] uint8_t __pad094d[0x3]; // 0x94d
public:
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	float m_flFinalTextureScaleU; // 0x950	
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	float m_flFinalTextureScaleV; // 0x954	
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	float m_flFinalTextureOffsetU; // 0x958	
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	float m_flFinalTextureOffsetV; // 0x95c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_PercentageBetweenCPsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x144	
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x158	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x164	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x168	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x16c	
	// MPropertyFriendlyName "only active within input range"
	// MDefaultString
	bool m_bActiveRange; // 0x170	
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x171	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x140	
	// MPropertyFriendlyName "trace offset"
	// MDefaultString
	float m_flTraceOffset; // 0x14c	
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x150	
	// MPropertyFriendlyName "trace recycle tolerance"
	// MDefaultString
	float m_flTraceTolerance; // 0x154	
	// MPropertyFriendlyName "maximum points to cache"
	// MDefaultString
	int32_t m_nMaxPlanes; // 0x158	
private:
	[[maybe_unused]] uint8_t __pad015c[0x4]; // 0x15c
public:
	// MPropertyFriendlyName "trace collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x160	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x4]; // 0x1e0
public:
	// MPropertyFriendlyName "collide with water"
	// MDefaultString
	bool m_bIncludeWater; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	// MDefaultString
	float m_flMinDistance; // 0x140	
	// MPropertyFriendlyName "maximum length"
	// MDefaultString
	float m_flMaxDistance; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2a0
// Has VTable
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MDefaultString
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x140	
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	CParticleCollectionFloatInput m_flStartTime; // 0x1e8	
	// MPropertyFriendlyName "emission scale from killed parent particles"
	// MDefaultString
	float m_flInitFromKilledParentParticles; // 0x290	
	// MPropertyFriendlyName "maximum emission per frame"
	// MDefaultString
	int32_t m_nMaxEmittedPerFrame; // 0x294	
	// MPropertyFriendlyName "control point with snapshot data"
	// MDefaultString
	int32_t m_nSnapshotControlPoint; // 0x298	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x9c0
// Has VTable
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyFriendlyName "sequence id override"
	// MDefaultString
	int32_t m_nSequenceOverride; // 0x360	
	// MPropertyFriendlyName "orientation type"
	// MPropertyAttributeChoiceEnumName
	// MDefaultString
	int32_t m_nOrientationType; // 0x364	
	// MPropertyFriendlyName "orientation control point"
	// MDefaultString
	int32_t m_nOrientationControlPoint; // 0x368	
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x36c	
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x370	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flAlphaAdjustWithSizeAdjust; // 0x374	
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x378	
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x420	
	// MPropertyFriendlyName "start dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeDot; // 0x4c8	
	// MPropertyFriendlyName "end dot product value for fading as the particle normal becomes aligned with the view vector"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeDot; // 0x4cc	
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x4d0	
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureScaleU; // 0x4d4	
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureScaleV; // 0x4d8	
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureOffsetU; // 0x4dc	
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flFinalTextureOffsetV; // 0x4e0	
	// MPropertyFriendlyName "X offset of center point"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flCenterXOffset; // 0x4e4	
	// MPropertyFriendlyName "Y offset of center point"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flCenterYOffset; // 0x4e8	
	// MPropertyFriendlyName "intraframe zoom amount for sequence 0"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flZoomAmount0; // 0x4ec	
	// MPropertyFriendlyName "intraframe zoom amount for sequence 1"
	// MDefaultString
	// MPropertyGroupName "Texture UV control"
	float m_flZoomAmount1; // 0x4f0	
	// MPropertyFriendlyName "distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	bool m_bDistanceAlpha; // 0x4f4	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	bool m_bSoftEdges; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	float m_flEdgeSoftnessStart; // 0x4f8	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MDefaultString
	// MPropertyGroupName "Distance to alpha coding"
	float m_flEdgeSoftnessEnd; // 0x4fc	
	// MPropertyFriendlyName "enable particle outlining"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	bool m_bOutline; // 0x500	
	// MPropertyFriendlyName "outline color"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	Color m_OutlineColor; // 0x501	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	// MPropertyFriendlyName "outline alpha"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Outlining"
	int32_t m_nOutlineAlpha; // 0x508	
	// MPropertyFriendlyName "outline start 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineStart0; // 0x50c	
	// MPropertyFriendlyName "outline start 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineStart1; // 0x510	
	// MPropertyFriendlyName "outline end 0"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineEnd0; // 0x514	
	// MPropertyFriendlyName "outline end 1"
	// MDefaultString
	// MPropertyGroupName "Outlining"
	float m_flOutlineEnd1; // 0x518	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MDefaultString
	bool m_bUseYawWithNormalAligned; // 0x51c	
	// MPropertyFriendlyName "Normal Mapping"
	// MDefaultString
	bool m_bNormalMap; // 0x51d	
private:
	[[maybe_unused]] uint8_t __pad051e[0x2]; // 0x51e
public:
	// MPropertyFriendlyName "Bump Strength"
	// MDefaultString
	float m_flBumpStrength; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	// MPropertyFriendlyName "Radius Scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusScale; // 0x528	
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flAlphaScale; // 0x5d0	
	// MPropertyFriendlyName "color blend"
	// MPropertyColorWithNoAlpha
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x678	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hNormalTexture; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b8[0x4]; // 0x9b8
public:
	// MPropertyFriendlyName "Sort Method"
	// MPropertyAttributeChoiceEnumName
	// MDefaultString
	int32_t m_nSortMethod; // 0x9bc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_Spin : public CGeneralSpin
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	bool m_bAbsVal; // 0x144	
	// MPropertyFriendlyName "invert absolute value"
	// MDefaultString
	bool m_bAbsValInv; // 0x145	
private:
	[[maybe_unused]] uint8_t __pad0146[0x2]; // 0x146
public:
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x148	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x14c	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x150	
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x154	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x158	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x15c	
	// MPropertyFriendlyName "world time noise coordinate scale"
	// MDefaultString
	float m_flWorldTimeScale; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	CUtlVector< ModelReference_t > m_ModelList; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad01a8[0x4]; // 0x1a8
public:
	// MPropertyFriendlyName "scale factor for radius"
	// MDefaultString
	float m_flModelScale; // 0x1ac	
	// MPropertyFriendlyName "scale model to match particle size"
	// MDefaultString
	bool m_bFitToModelSize; // 0x1b0	
	// MPropertyFriendlyName "non-uniform scaling"
	// MDefaultString
	bool m_bNonUniformScaling; // 0x1b1	
private:
	[[maybe_unused]] uint8_t __pad01b2[0x2]; // 0x1b2
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x1b4	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x1b8	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x1bc	
	// MPropertyFriendlyName "model size cull bloat"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x160	
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	Vector m_vMinOutputValue; // 0x164	
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	Vector m_vMaxOutputValue; // 0x170	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x140	
	// MPropertyFriendlyName "offset max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x14c	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x158	
	// MPropertyFriendlyName "offset in local space 0/1"
	// MDefaultString
	bool m_bLocalCoords; // 0x15c	
	// MPropertyFriendlyName "normalize output 0/1"
	// MDefaultString
	bool m_bNormalize; // 0x15d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x140	
	// MPropertyFriendlyName "local offset max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad0158[0x1]; // 0x158
public:
	// MPropertyFriendlyName "set normal"
	// MDefaultString
	bool m_bUseNormal; // 0x159	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MParticleMaxVersion
// MParticleReplacementOp
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad0140[0x4]; // 0x140
public:
	// MPropertyFriendlyName "start fade time"
	// MDefaultString
	float m_flFadeStart; // 0x144	
	// MPropertyFriendlyName "end fade time"
	// MDefaultString
	float m_flFadeEnd; // 0x148	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad014d[0x3]; // 0x14d
public:
	CPathParameters m_PathParams; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	// MDefaultString
	bool m_bFireOnEmissionEnd; // 0x140	
	// MPropertyFriendlyName "wait for children to finish"
	// MDefaultString
	bool m_bIncludeChildren; // 0x141	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	float m_flDistance; // 0x144	
	// MPropertyFriendlyName "component scale"
	// MDefaultString
	Vector m_vecScale; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
// 
// MParticleMaxVersion
// MParticleReplacementOp
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	// MDefaultString
	float m_flScale; // 0x140	
	// MPropertyFriendlyName "inherited field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nIncrement; // 0x148	
	// MPropertyFriendlyName "random parent particle distribution"
	// MDefaultString
	bool m_bRandomDistribution; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	float m_flMin; // 0x140	
	// MPropertyFriendlyName "max"
	// MDefaultString
	float m_flMax; // 0x144	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "scale"
	// MDefaultString
	Vector m_vecScale; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_RemapInitialDirectionToCPToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x148	
	// MPropertyFriendlyName "offset rotation"
	// MDefaultString
	float m_flOffsetRot; // 0x14c	
	// MPropertyFriendlyName "offset axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x150	
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2a0
// Has VTable
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0x140	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x144	
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput1; // 0x150	
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CParticleCollectionFloatInput m_flInput2; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x140	
	// MPropertyFriendlyName "warp max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x14c	
	// MPropertyFriendlyName "warp scale control point number"
	// MDefaultString
	int32_t m_nScaleControlPointNumber; // 0x158	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x15c	
	// MPropertyFriendlyName "radius scale component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0x160	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	// MDefaultString
	float m_flWarpTime; // 0x164	
	// MPropertyFriendlyName "warp transition start time"
	// MDefaultString
	float m_flWarpStartTime; // 0x168	
	// MPropertyFriendlyName "previous position sacale"
	// MDefaultString
	float m_flPrevPosScale; // 0x16c	
	// MPropertyFriendlyName "reverse warp (0/1)"
	// MDefaultString
	bool m_bInvertWarp; // 0x170	
	// MPropertyFriendlyName "use particle count instead of time"
	// MDefaultString
	bool m_bUseCount; // 0x171	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nCP; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x144	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x148	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x14c	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x150	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x154	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x158	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x15c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x160	
	// MPropertyFriendlyName "per particle"
	// MDefaultString
	bool m_bPerParticle; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_MakeShapes : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min size"
	// MDefaultString
	float m_flMinSize; // 0x140	
	// MPropertyFriendlyName "max size"
	// MDefaultString
	float m_flMaxSize; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapCPVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x140	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x144	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "CP visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "CP visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	Vector m_vecOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	Vector m_vecOutputMax; // 0x160	
	// MPropertyFriendlyName "visibility radius"
	// MDefaultString
	float m_flRadius; // 0x16c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x480
// Has VTable
class C_OP_DistanceBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x144	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "distance minimum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMin; // 0x150	
	// MPropertyFriendlyName "distance maximum"
	// MDefaultString
	CPerParticleFloatInput m_flInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMin; // 0x2a0	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CPerParticleFloatInput m_flOutputMax; // 0x348	
	// MPropertyFriendlyName "maximum trace length"
	// MDefaultString
	float m_flMaxTraceLength; // 0x3f0	
	// MPropertyFriendlyName "LOS Failure Scalar"
	// MDefaultString
	float m_flLOSScale; // 0x3f4	
	// MPropertyFriendlyName "LOS collision group"
	// MDefaultString
	char m_CollisionGroupName[128]; // 0x3f8	
	// MPropertyFriendlyName "ensure line of sight"
	// MDefaultString
	bool m_bLOS; // 0x478	
private:
	[[maybe_unused]] uint8_t __pad0479[0x3]; // 0x479
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x47c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x7b0
// Has VTable
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	VectorExpressionType_t m_nExpression; // 0x140	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x144	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x148	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x478	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	// MDefaultString
	Vector m_vStartValue; // 0x140	
	// MPropertyFriendlyName "input field 1"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x14c	
	// MPropertyFriendlyName "input scale 1"
	// MDefaultString
	float m_flInputScale1; // 0x150	
	// MPropertyFriendlyName "input field 2"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x154	
	// MPropertyFriendlyName "input scale 2"
	// MDefaultString
	float m_flInputScale2; // 0x158	
	// MPropertyFriendlyName "control point input 1"
	// -> m_controlPointNameString - 0x15c
	// -> m_vOffsetFromControlPoint - 0x160
	// -> m_bOffsetInLocalSpace - 0x16c
	ControlPointReference_t m_nControlPointInput1; // 0x15c	
	// MPropertyFriendlyName "control point scale 1"
	// MDefaultString
	float m_flControlPointScale1; // 0x170	
	// MPropertyFriendlyName "control point input 2"
	// -> m_controlPointNameString - 0x174
	// -> m_vOffsetFromControlPoint - 0x178
	// -> m_bOffsetInLocalSpace - 0x184
	ControlPointReference_t m_nControlPointInput2; // 0x174	
	// MPropertyFriendlyName "control point scale 2"
	// MDefaultString
	float m_flControlPointScale2; // 0x188	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x18c	
	// MPropertyFriendlyName "final per component scale"
	// MDefaultString
	Vector m_vFinalOutputScale; // 0x190	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x140	
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x144	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x148	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x140	
	// MPropertyFriendlyName "radius max"
	// MDefaultString
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x144	
	// MPropertyFriendlyName "radius random exponent"
	// MDefaultString
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0x144	
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0x148	
	// MPropertyFriendlyName "local space scale"
	// MDefaultString
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x14c	
private:
	[[maybe_unused]] uint8_t __pad0158[0x1]; // 0x158
public:
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDelta; // 0x159	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	// MDefaultString
	ScalarExpressionType_t m_nExpression; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "input 1"
	// MDefaultString
	CPerParticleFloatInput m_flInput1; // 0x148	
	// MPropertyFriendlyName "input 2"
	// MDefaultString
	CPerParticleFloatInput m_flInput2; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x298	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x29c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MDefaultString
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x140	
	// MPropertyFriendlyName "lifetime max"
	// MDefaultString
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x144	
	// MPropertyFriendlyName "lifetime random exponent"
	// MDefaultString
	float m_fLifetimeRandExponent; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad014c[0x4]; // 0x14c
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	// MDefaultString
	CPerParticleFloatInput m_fForceAmount; // 0x150	
	// MPropertyFriendlyName "falloff power"
	// MDefaultString
	float m_fFalloffPower; // 0x1f8	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x1fc	
	// MPropertyFriendlyName "scale in local space"
	// MDefaultString
	bool m_bScaleLocal; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x7]; // 0x201
public:
	// MPropertyFriendlyName "Min Pullforce"
	// MDefaultString
	CPerParticleFloatInput m_fForceAmountMin; // 0x208	
	// MPropertyFriendlyName "Apply Min Pullforce"
	// MDefaultString
	bool m_bApplyMinForce; // 0x2b0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "scale size multiplier from CP"
	// MDefaultString
	int32_t m_nScaleCP; // 0x144	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x148	
	// MPropertyFriendlyName "center core radius"
	// MDefaultString
	float m_fRadCentCore; // 0x14c	
	// MPropertyFriendlyName "radius multiplier"
	// MDefaultString
	float m_fRadPerPoint; // 0x150	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	// MDefaultString
	float m_fRadPerPointTo; // 0x154	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	// MDefaultString
	float m_fpointAngle; // 0x158	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	// MDefaultString
	float m_fsizeOverall; // 0x15c	
	// MPropertyFriendlyName "radius bias"
	// MDefaultString
	float m_fRadBias; // 0x160	
	// MPropertyFriendlyName "radius min "
	// MDefaultString
	float m_fMinRad; // 0x164	
	// MPropertyFriendlyName "Distribution Bias"
	// MPropertyFriendlyName "distribution bias"
	// MDefaultString
	float m_fDistBias; // 0x168	
	// MPropertyFriendlyName "local space"
	// MDefaultString
	bool m_bUseLocalCoords; // 0x16c	
	// MPropertyFriendlyName "use continuous emission"
	// MDefaultString
	bool m_bUseWithContEmit; // 0x16d	
	// MPropertyFriendlyName "scale radius from initial value"
	// MDefaultString
	bool m_bUseOrigRadius; // 0x16e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	// MDefaultString
	Vector m_vecMin; // 0x140	
	// MPropertyFriendlyName "max coords"
	// MDefaultString
	Vector m_vecMax; // 0x14c	
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nCP; // 0x158	
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nChildControlPoint; // 0x144	
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x148	
	// MPropertyFriendlyName "first parent control point to set from"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x14c	
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x144	
	// MPropertyFriendlyName "# of children to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x148	
	// MPropertyFriendlyName "particle increment amount"
	// MDefaultString
	int32_t m_nParticleIncrement; // 0x14c	
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x150	
	// MPropertyFriendlyName "set number of children based on particle count"
	// MDefaultString
	bool m_bNumBasedOnParticleCount; // 0x154	
private:
	[[maybe_unused]] uint8_t __pad0155[0x3]; // 0x155
public:
	// MPropertyFriendlyName "field to read"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x158	
	// MPropertyFriendlyName "control point field for scalars"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "output offset minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x148	
	// MPropertyFriendlyName "output offset maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	// MDefaultString
	float m_flScale; // 0x140	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	// MDefaultString
	bool m_bClampLowerRange; // 0x144	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	// MDefaultString
	bool m_bClampUpperRange; // 0x145	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	// MDefaultString
	float m_flInputMin; // 0x140	
	// MPropertyFriendlyName "percentage maximum"
	// MDefaultString
	float m_flInputMax; // 0x144	
	// MPropertyFriendlyName "percentage bias"
	// MDefaultString
	float m_flInputBias; // 0x148	
	// MPropertyFriendlyName "starting control point"
	// MDefaultString
	int32_t m_nStartCP; // 0x14c	
	// MPropertyFriendlyName "ending control point"
	// MDefaultString
	int32_t m_nEndCP; // 0x150	
	// MPropertyFriendlyName "offset control point"
	// MDefaultString
	int32_t m_nOffsetCP; // 0x154	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOuputCP; // 0x158	
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInputCP; // 0x15c	
	// MPropertyFriendlyName "treat distance between points as radius"
	// MDefaultString
	bool m_bRadialCheck; // 0x160	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	// MDefaultString
	bool m_bScaleOffset; // 0x161	
private:
	[[maybe_unused]] uint8_t __pad0162[0x2]; // 0x162
public:
	// MPropertyFriendlyName "offset amount"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x140	
	// MPropertyFriendlyName "drag"
	// MDefaultString
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x14c	
	// MPropertyFriendlyName "max constraint passes"
	// MDefaultString
	int32_t m_nMaxConstraintPasses; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x158	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x15c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x160	
	// MPropertyFriendlyName "only active within specified input range"
	// MDefaultString
	bool m_bActiveRange; // 0x164	
private:
	[[maybe_unused]] uint8_t __pad0165[0x3]; // 0x165
public:
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	// MDefaultString
	float m_flSpeedMin; // 0x140	
	// MPropertyFriendlyName "maximum speed"
	// MDefaultString
	float m_flSpeedMax; // 0x144	
	// MPropertyFriendlyName "end spread"
	// MDefaultString
	float m_flEndSpread; // 0x148	
	// MPropertyFriendlyName "start offset"
	// MDefaultString
	float m_flStartOffset; // 0x14c	
	// MPropertyFriendlyName "end offset"
	// MDefaultString
	float m_flEndOffset; // 0x150	
	// MPropertyFriendlyName "end control point"
	// MDefaultString
	int32_t m_nEndControlPointNumber; // 0x154	
	// MPropertyFriendlyName "bias lifetime by trail length"
	// MDefaultString
	bool m_bTrailBias; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	// MDefaultString
	float m_flFramerate; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_Rate; // 0x140	
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	Vector m_Frequency; // 0x14c	
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x158	
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x15c	
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x160	
	// MPropertyFriendlyName "offset instead of accelerate position"
	// MDefaultString
	bool m_bOffset; // 0x164	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x350
// Has VTable
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	// MDefaultString
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x140	
	// MPropertyFriendlyName "emission start time"
	// MDefaultString
	CParticleCollectionFloatInput m_flStartTime; // 0x1e8	
	// MPropertyFriendlyName "emission rate"
	// MDefaultString
	CParticleCollectionFloatInput m_flEmitRate; // 0x290	
	// MPropertyFriendlyName "scale emission to used control points"
	// MDefaultString
	// MParticleMaxVersion "1"
	float m_flEmissionScale; // 0x338	
	// MPropertyFriendlyName "scale emission by parent particle count"
	// MDefaultString
	float m_flScalePerParentParticle; // 0x33c	
	// MPropertyFriendlyName "emit particles for killed parent particles"
	// MDefaultString
	bool m_bInitFromKilledParentParticles; // 0x340	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x160	
	// MPropertyFriendlyName "output value at min distance"
	// MDefaultString
	float m_flMinOutputValue; // 0x164	
	// MPropertyFriendlyName "output value at max distance"
	// MDefaultString
	float m_flMaxOutputValue; // 0x168	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	// MDefaultString
	float m_flDecayTime; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MParticleMaxVersion
// MParticleReplacementOp
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x140	
	// MPropertyFriendlyName "particles to map from start to end"
	// MDefaultString
	float m_flNumToAssign; // 0x144	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	// MDefaultString
	bool m_bLoop; // 0x148	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	// MDefaultString
	bool m_bCPPairs; // 0x149	
	// MPropertyFriendlyName "save offset"
	// MDefaultString
	bool m_bSaveOffset; // 0x14a	
private:
	[[maybe_unused]] uint8_t __pad014b[0x5]; // 0x14b
public:
	CPathParameters m_PathParams; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	// MDefaultString
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapCPVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x140	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPoint; // 0x144	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "CP visibility minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "CP visibility maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "visibility radius"
	// MDefaultString
	float m_flRadius; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	// MDefaultString
	float m_flMinLength; // 0x140	
	// MPropertyFriendlyName "length max"
	// MDefaultString
	float m_flMaxLength; // 0x144	
	// MPropertyFriendlyName "length random exponent"
	// MDefaultString
	float m_flLengthRandExponent; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/thickness/speed)"
	// MDefaultString
	int32_t m_nOverrideCP; // 0x144	
	// MPropertyFriendlyName "override CP 2 (X/Y/Z *= pitch/yaw/roll)"
	// MDefaultString
	int32_t m_nOverrideCP2; // 0x148	
	// MPropertyFriendlyName "even distribution count"
	// MDefaultString
	float m_flParticlesPerOrbit; // 0x14c	
	// MPropertyFriendlyName "initial radius"
	// MDefaultString
	float m_flInitialRadius; // 0x150	
	// MPropertyFriendlyName "thickness"
	// MDefaultString
	float m_flThickness; // 0x154	
	// MPropertyFriendlyName "min initial speed"
	// MDefaultString
	float m_flInitialSpeedMin; // 0x158	
	// MPropertyFriendlyName "max initial speed"
	// MDefaultString
	float m_flInitialSpeedMax; // 0x15c	
	// MPropertyFriendlyName "roll"
	// MDefaultString
	float m_flRoll; // 0x160	
	// MPropertyFriendlyName "pitch"
	// MDefaultString
	float m_flPitch; // 0x164	
	// MPropertyFriendlyName "yaw"
	// MDefaultString
	float m_flYaw; // 0x168	
	// MPropertyFriendlyName "even distribution"
	// MDefaultString
	bool m_bEvenDistribution; // 0x16c	
	// MPropertyFriendlyName "XY velocity only"
	// MDefaultString
	bool m_bXYVelocityOnly; // 0x16d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1d0
// Has VTable
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "desired hitbox"
	// MDefaultString
	int32_t m_nDesiredHitbox; // 0x144	
	// MPropertyFriendlyName "model hitbox scale"
	// MDefaultString
	float m_flHitBoxScale; // 0x148	
	// MPropertyFriendlyName "hitbox set"
	// MDefaultString
	char m_HitboxSetName[128]; // 0x14c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	// MDefaultString
	bool m_bUseBones; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x144	
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	// MDefaultString
	float m_flTonemapLevel; // 0x190	
	// MPropertyFriendlyName "tonemap weight scale"
	// MDefaultString
	float m_flTonemapWeight; // 0x194	
	// MPropertyFriendlyName "tonemap level"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x198	
	// MPropertyFriendlyName "tonemap weight"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x19c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x340
// Has VTable
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x148	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterSize; // 0x1f0	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	// MDefaultString
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x298	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	// MDefaultString
	float m_flFadeInTime; // 0x140	
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
	// MPropertyFriendlyName "alpha min"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x144	
	// MPropertyFriendlyName "alpha max"
	// MDefaultString
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014c[0x8]; // 0x14c
public:
	// MPropertyFriendlyName "alpha random exponent"
	// MDefaultString
	float m_flAlphaRandExponent; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	// MDefaultString
	CPerParticleFloatInput m_flForceScale; // 0x140	
	// MPropertyFriendlyName "rope shake"
	// MDefaultString
	bool m_bRopes; // 0x1e8	
	// MPropertyFriendlyName "limit rope impulses to Z"
	// MDefaultString
	bool m_bRopesZOnly; // 0x1e9	
	// MPropertyFriendlyName "explosions"
	// MDefaultString
	bool m_bExplosions; // 0x1ea	
	// MPropertyFriendlyName "particle systems"
	// MDefaultString
	bool m_bParticles; // 0x1eb	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0xcf0
// Has VTable
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "activity override"
	// MDefaultString
	char m_ActivityName[256]; // 0x190	
	// MPropertyFriendlyName "model override economy loadout slot type"
	// MDefaultString
	char m_EconSlotName[256]; // 0x290	
	// MPropertyFriendlyName "models"
	CUtlVector< ModelReference_t > m_ModelList; // 0x390	
private:
	[[maybe_unused]] uint8_t __pad03a8[0x4]; // 0x3a8
public:
	// MPropertyFriendlyName "ignore normal"
	// MDefaultString
	bool m_bIgnoreNormal; // 0x3ac	
	// MPropertyFriendlyName "ignore radius"
	// MDefaultString
	bool m_bIgnoreRadius; // 0x3ad	
	// MPropertyFriendlyName "orient model z to normal"
	// MDefaultString
	bool m_bOrientZ; // 0x3ae	
	// MPropertyFriendlyName "scale animation rate"
	// MDefaultString
	bool m_bScaleAnimationRate; // 0x3af	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MDefaultString
	bool m_bResetAnimOnStop; // 0x3b0	
	// MPropertyFriendlyName "set animation frame manually"
	// MDefaultString
	bool m_bManualAnimFrame; // 0x3b1	
private:
	[[maybe_unused]] uint8_t __pad03b2[0x2]; // 0x3b2
public:
	// MPropertyFriendlyName "animation rate scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x3b4	
	// MPropertyFriendlyName "skin number"
	// MDefaultString
	int32_t m_nSkin; // 0x3b8	
	// MPropertyFriendlyName "bodygroup field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x3bc	
	// MPropertyFriendlyName "submodel field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x3c0	
	// MPropertyFriendlyName "animation sequence field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAnimationField; // 0x3c4	
	// MPropertyFriendlyName "manual animation frame field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x3c8	
	// MPropertyFriendlyName "model LOD"
	// MDefaultString
	int32_t m_nLOD; // 0x3cc	
	// MPropertyFriendlyName "material override"
	// MPropertyAttributeEditor "AssetBrowse( vmat )"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x3d0	
	// MPropertyFriendlyName "override translucent materials"
	// MDefaultString
	bool m_bOverrideTranslucentMaterials; // 0x3d8	
private:
	[[maybe_unused]] uint8_t __pad03d9[0x3]; // 0x3d9
public:
	// MPropertyFriendlyName "skin override CP"
	// MDefaultString
	int32_t m_nSkinCP; // 0x3dc	
	// MPropertyFriendlyName "model override CP"
	// MDefaultString
	int32_t m_nModelCP; // 0x3e0	
	// MPropertyFriendlyName "model scale CP"
	// MDefaultString
	int32_t m_nModelScaleCP; // 0x3e4	
	// MPropertyFriendlyName "animation rate"
	// MDefaultString
	float m_flAnimationRate; // 0x3e8	
	// MPropertyFriendlyName "animated"
	// MDefaultString
	bool m_bAnimated; // 0x3ec	
	// MPropertyFriendlyName "force looping animations"
	// MDefaultString
	bool m_bForceLoopingAnimation; // 0x3ed	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	// MDefaultString
	bool m_bForceDrawInterlevedWithSiblings; // 0x3ee	
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MDefaultString
	bool m_bOnlyRenderInEffectsBloomPass; // 0x3ef	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	// MDefaultString
	bool m_bOriginalModel; // 0x3f0	
	// MPropertyFriendlyName "suppress tinting of the model"
	// MDefaultString
	bool m_bSuppressTint; // 0x3f1	
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	// MDefaultString
	bool m_bUseRawMeshGroup; // 0x3f2	
	// MPropertyFriendlyName "disable shadows"
	// MDefaultString
	bool m_bDisableShadows; // 0x3f3	
	// MPropertyFriendlyName "render attribute"
	// MDefaultString
	char m_szRenderAttribute[260]; // 0x3f4	
	// MPropertyFriendlyName "material variables"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x4f8	
	// MPropertyFriendlyName "Radius Scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusScale; // 0x510	
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flAlphaScale; // 0x5b8	
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x660	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0994[0x4]; // 0x994
public:
	// MPropertyFriendlyName "model component scale"
	// MDefaultString
	CPerParticleVecInput m_vecComponentScale; // 0x998	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x250
// Has VTable
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MDefaultString
	char m_ActivityName[256]; // 0x140	
	// MPropertyFriendlyName "model"
	// MDefaultString
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x240	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	// MDefaultString
	int32_t m_nParticlesToMaintain; // 0x140	
	// MPropertyFriendlyName "maintain count scale control point"
	// MDefaultString
	int32_t m_nScaleControlPoint; // 0x144	
	// MPropertyFriendlyName "maintain count scale control point field"
	// MDefaultString
	int32_t m_nScaleControlPointField; // 0x148	
	// MPropertyFriendlyName "decay delay"
	// MDefaultString
	float m_flDecayDelay; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
	// MPropertyFriendlyName "time-of-day parameter"
	// MDefaultString
	char m_pszTimeOfDayParameter[128]; // 0x144	
	// MPropertyFriendlyName "default value"
	// MDefaultString
	Vector m_vecDefaultValue; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x12a0
// Has VTable
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	bool m_bEnableFadingAndClamping; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x3]; // 0x961
public:
	// MPropertyFriendlyName "max length"
	// MDefaultString
	float m_flMaxLength; // 0x964	
	// MPropertyFriendlyName "min length"
	// MDefaultString
	float m_flMinLength; // 0x968	
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDT; // 0x96c	
private:
	[[maybe_unused]] uint8_t __pad096d[0x3]; // 0x96d
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MDefaultString
	float m_flConstrainRadiusToLengthRatio; // 0x970	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MDefaultString
	float m_flLengthScale; // 0x974	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MDefaultString
	float m_flLengthFadeInTime; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	// MPropertyFriendlyName "head taper scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x980	
	// MPropertyFriendlyName "head color scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecHeadColorScale; // 0xa28	
	// MPropertyFriendlyName "head alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flHeadAlphaScale; // 0xd58	
	// MPropertyFriendlyName "tail taper scale"
	// MDefaultString
	CPerParticleFloatInput m_flRadiusTaper; // 0xe00	
	// MPropertyFriendlyName "tail color scale"
	// MDefaultString
	CParticleCollectionVecInput m_vecTailColorScale; // 0xea8	
	// MPropertyFriendlyName "tail alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flTailAlphaScale; // 0x11d8	
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x1280	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x1284	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	// MDefaultString
	float m_flForwardShift; // 0x1288	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	// MDefaultString
	bool m_bFlipUVBasedOnPitchYaw; // 0x128c	
private:
	[[maybe_unused]] uint8_t __pad128d[0x3]; // 0x128d
public:
	// MPropertyFriendlyName "Anchor point source"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x1290	
	// MPropertyFriendlyName "Use particle system topology"
	// MDefaultString
	bool m_bUseTopology; // 0x1294	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x3f0
// Has VTable
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	// MDefaultString
	int32_t m_nInputCP1; // 0x140	
	// MPropertyFriendlyName "second input control point"
	// MDefaultString
	int32_t m_nInputCP2; // 0x144	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutputCP; // 0x148	
	// MPropertyFriendlyName "output component"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x14c	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMin; // 0x150	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	// MDefaultString
	CParticleCollectionFloatInput m_flInputMax; // 0x1f8	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMin; // 0x2a0	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CParticleCollectionFloatInput m_flOutputMax; // 0x348	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0x140	
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0x144	
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x140
// Has VTable
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x9d0
// Has VTable
class C_OP_RenderFogSprites : public C_OP_RenderSprites
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x9c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_INIT_RemapCPtoVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMin; // 0x148	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMax; // 0x154	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMin; // 0x160	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMax; // 0x16c	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x178	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x17c	
	// MPropertyFriendlyName "set value method"
	// MDefaultString
	ParticleSetMethod_t m_nSetMethod; // 0x180	
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x184	
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x185	
private:
	[[maybe_unused]] uint8_t __pad0186[0x2]; // 0x186
public:
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x188	
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x18c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	// MDefaultString
	int32_t m_nCPPosition; // 0x140	
	// MPropertyFriendlyName "Velocity Control Point"
	// MDefaultString
	int32_t m_nCPVelocity; // 0x144	
	// MPropertyFriendlyName "Misc Control Point"
	// MDefaultString
	int32_t m_nCPMisc; // 0x148	
	// MPropertyFriendlyName "Color Control Point"
	// MDefaultString
	int32_t m_nCPColor; // 0x14c	
	// MPropertyFriendlyName "Invalid Color Control Point"
	// MDefaultString
	int32_t m_nCPInvalidColor; // 0x150	
	// MPropertyFriendlyName "Extra Arc Data Point"
	// MDefaultString
	int32_t m_nCPExtraArcData; // 0x154	
	// MPropertyFriendlyName "Gravity"
	// MDefaultString
	Vector m_vGravity; // 0x158	
	// MPropertyFriendlyName "Arc Duration Maximum"
	// MDefaultString
	float m_flArcMaxDuration; // 0x164	
	// MPropertyFriendlyName "Segment Break"
	// MDefaultString
	float m_flSegmentBreak; // 0x168	
	// MPropertyFriendlyName "Arc Speed"
	// MDefaultString
	float m_flArcSpeed; // 0x16c	
	// MPropertyFriendlyName "Alpha"
	// MDefaultString
	float m_flAlpha; // 0x170	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_fForceAmount; // 0x140	
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x144	
	// MPropertyFriendlyName "object local space axis 0/1"
	// MDefaultString
	bool m_bLocalSpace; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x3]; // 0x151
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x900
// Has VTable
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMin; // 0x148	
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	CPerParticleFloatInput m_fSpeedMax; // 0x1f0	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x298	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x5c8	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	// MDefaultString
	bool m_bIgnoreDT; // 0x8f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	// MDefaultString
	int32_t m_nPlaneControlPoint; // 0x140	
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x144	
	// MPropertyFriendlyName "use local space"
	// MDefaultString
	bool m_bLocalSpace; // 0x150	
private:
	[[maybe_unused]] uint8_t __pad0151[0x3]; // 0x151
public:
	// MPropertyFriendlyName "cull plane offset"
	// MDefaultString
	float m_flPlaneOffset; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x170
// Has VTable
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0141[0x3]; // 0x141
public:
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x144	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x20
struct ParticleChildrenInfo_t
{
public:
	// MDefaultString
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0	
	// MPropertyFriendlyName "delay"
	// MDefaultString
	float m_flDelay; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x2]; // 0xc
public:
	// MPropertyFriendlyName "end cap effect"
	// MDefaultString
	bool m_bEndCap; // 0xe	
	// MPropertyFriendlyName "disable child"
	// MDefaultString
	bool m_bDisableChild; // 0xf	
	// MPropertyFriendlyName "disable at detail levels below"
	// MDefaultString
	ParticleDetailLevel_t m_nDetailLevel; // 0x10	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0xcf0
// Has VTable
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x140	
	// MPropertyFriendlyName "invert abs value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x14c	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x158	
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	CPerParticleFloatInput m_flOffset; // 0x488	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	CPerParticleVecInput m_vecOutputMin; // 0x530	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	CPerParticleVecInput m_vecOutputMax; // 0x860	
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	CPerParticleFloatInput m_flNoiseScale; // 0xb90	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0xc38	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xce0	
	// MPropertyFriendlyName "apply velocity in local space (0/1)"
	// MDefaultString
	bool m_bLocalSpace; // 0xce4	
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0xce5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMin; // 0x140	
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMax; // 0x14c	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x158	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0x140	
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0x144	
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x148	
	// MPropertyFriendlyName "distance scale control point (X/Y = Min/Max)"
	// MDefaultString
	int32_t m_nScaleCP; // 0x14c	
	// MPropertyFriendlyName "offset of center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x150	
	// MPropertyFriendlyName "global center point"
	// MDefaultString
	bool m_bGlobalCenter; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1e0
// Has VTable
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x140	
	// MPropertyFriendlyName "cull normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x14c	
	// MPropertyFriendlyName "use velocity for test direction"
	// MDefaultString
	bool m_bUseVelocity; // 0x158	
	// MPropertyFriendlyName "cull on miss"
	// MDefaultString
	bool m_bCullOnMiss; // 0x159	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	// MDefaultString
	bool m_bLifeAdjust; // 0x15a	
	// MPropertyFriendlyName "ray trace environment name"
	// MDefaultString
	char m_RtEnvName[128]; // 0x15b	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	// MDefaultString
	Detail2Combo_t m_nDetail2Combo; // 0x140	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	// MDefaultString
	float m_flDetail2Rotation; // 0x144	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	// MDefaultString
	float m_flDetail2Scale; // 0x148	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	// MDefaultString
	float m_flDetail2BlendFactor; // 0x14c	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	// MDefaultString
	float m_flColorWarpIntensity; // 0x150	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	// MDefaultString
	float m_flDiffuseWarpBlendToFull; // 0x154	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	// MDefaultString
	float m_flEnvMapIntensity; // 0x158	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	// MDefaultString
	float m_flAmbientScale; // 0x15c	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	// MDefaultString
	Color m_specularColor; // 0x160	
	// MPropertyFriendlyName "$SPECULARSCALE"
	// MDefaultString
	float m_flSpecularScale; // 0x164	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	// MDefaultString
	float m_flSpecularExponent; // 0x168	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	// MDefaultString
	float m_flSpecularExponentBlendToFull; // 0x16c	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	// MDefaultString
	float m_flSpecularBlendToFull; // 0x170	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	// MDefaultString
	Color m_rimLightColor; // 0x174	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	// MDefaultString
	float m_flRimLightScale; // 0x178	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	// MDefaultString
	float m_flReflectionsTintByBaseBlendToNone; // 0x17c	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	// MDefaultString
	float m_flMetalnessBlendToFull; // 0x180	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	// MDefaultString
	float m_flSelfIllumBlendToFull; // 0x184	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x180
// Has VTable
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	float m_Rate; // 0x140	
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	float m_Frequency; // 0x144	
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x148	
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0x14c	
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0	
	int32_t m_nValue; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1f0
// Has VTable
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x140	
private:
	[[maybe_unused]] uint8_t __pad0144[0x4]; // 0x144
public:
	// MPropertyFriendlyName "Interpolation"
	// MDefaultString
	CPerParticleFloatInput m_flInterpolation; // 0x148	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0x140	
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0x148	
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0x14c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0x140	
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0x144	
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0x148	
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0x14c	
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0x150	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1a0
// Has VTable
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	// MDefaultString
	float m_flFlattenStrength; // 0x190	
	// MPropertyFriendlyName "strength field override"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x194	
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x198	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x2c0
// Has VTable
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	// MDefaultString
	float m_flDurationScale; // 0x190	
	// MPropertyFriendlyName "decibel level scale"
	// MDefaultString
	float m_flSndLvlScale; // 0x194	
	// MPropertyFriendlyName "pitch scale"
	// MDefaultString
	float m_flPitchScale; // 0x198	
	// MPropertyFriendlyName "volume scale"
	// MDefaultString
	float m_flVolumeScale; // 0x19c	
	// MPropertyFriendlyName "decibel level field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x1a0	
	// MPropertyFriendlyName "duration field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x1a4	
	// MPropertyFriendlyName "pitch field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x1a8	
	// MPropertyFriendlyName "volume field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x1ac	
	// MPropertyFriendlyName "sound channel"
	// MDefaultString
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x1b0	
	// MPropertyFriendlyName "sound control point number"
	// MDefaultString
	int32_t m_nCPReference; // 0x1b4	
	// MPropertyFriendlyName "sound"
	// MDefaultString
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x1b8	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x2b8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x870
// Has VTable
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyFriendlyName "enable fading and clamping"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	bool m_bEnableFadingAndClamping; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0361[0x3]; // 0x361
public:
	// MPropertyFriendlyName "minimum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMinSize; // 0x364	
	// MPropertyFriendlyName "maximum visual size"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flMaxSize; // 0x368	
	// MPropertyFriendlyName "size at which to start fading"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flStartFadeSize; // 0x36c	
	// MPropertyFriendlyName "size at which to fade away"
	// MDefaultString
	// MPropertyGroupName "Fading and culling"
	float m_flEndFadeSize; // 0x370	
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	// MDefaultString
	float m_flRadiusTaper; // 0x374	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MDefaultString
	int32_t m_nMinTesselation; // 0x378	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	// MDefaultString
	int32_t m_nMaxTesselation; // 0x37c	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	// MDefaultString
	float m_flTessScale; // 0x380	
	// MPropertyFriendlyName "texture V World Size"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVWorldSize; // 0x384	
	// MPropertyFriendlyName "texture V Scroll Rate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVScrollRate; // 0x388	
	// MPropertyFriendlyName "texture V Offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flTextureVOffset; // 0x38c	
	// MPropertyFriendlyName "texture V Params CP"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nTextureVParamsCP; // 0x390	
	// MPropertyFriendlyName "horizontal texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleU; // 0x394	
	// MPropertyFriendlyName "vertical texture scale"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureScaleV; // 0x398	
	// MPropertyFriendlyName "horizontal texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetU; // 0x39c	
	// MPropertyFriendlyName "vertical texture offset"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flFinalTextureOffsetV; // 0x3a0	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bClampV; // 0x3a4	
private:
	[[maybe_unused]] uint8_t __pad03a5[0x3]; // 0x3a5
public:
	// MPropertyFriendlyName "scale CP start"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP1; // 0x3a8	
	// MPropertyFriendlyName "scale CP end"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	int32_t m_nScaleCP2; // 0x3ac	
	// MPropertyFriendlyName "scale V world size by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVSizeByControlPointDistance; // 0x3b0	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVScrollByControlPointDistance; // 0x3b4	
	// MPropertyFriendlyName "scale V offset by CP distance"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScaleVOffsetByControlPointDistance; // 0x3b8	
private:
	[[maybe_unused]] uint8_t __pad03bc[0x1]; // 0x3bc
public:
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	bool m_bUseScalarForTextureCoordinate; // 0x3bd	
private:
	[[maybe_unused]] uint8_t __pad03be[0x2]; // 0x3be
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertyGroupName "Texture Coordinates"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x3c0	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MDefaultString
	// MPropertyGroupName "Texture Coordinates"
	float m_flScalarAttributeTextureCoordScale; // 0x3c4	
	// MPropertyFriendlyName "orientation_type"
	// MDefaultString
	// MPropertyAttributeChoiceEnumName
	int32_t m_nOrientationType; // 0x3c8	
	// MPropertyFriendlyName "attribute to use for normal"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x3cc	
	// MPropertyFriendlyName "draw as opaque"
	// MDefaultString
	bool m_bDrawAsOpaque; // 0x3d0	
	// MPropertyFriendlyName "generate normals for cylinder"
	// MDefaultString
	bool m_bGenerateNormals; // 0x3d1	
	// MPropertyFriendlyName "reverse point order"
	// MDefaultString
	bool m_bReverseOrder; // 0x3d2	
private:
	[[maybe_unused]] uint8_t __pad03d3[0x5]; // 0x3d3
public:
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flRadiusScale; // 0x3d8	
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	CParticleCollectionFloatInput m_flAlphaScale; // 0x480	
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x528	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x858	
	// MPropertyFriendlyName "Closed loop"
	// MDefaultString
	bool m_bClosedLoop; // 0x85c	
private:
	[[maybe_unused]] uint8_t __pad085d[0x3]; // 0x85d
public:
	// MPropertyFriendlyName "depth comparison bias"
	// MDefaultString
	// MPropertyGroupName "Depth buffer control and effects"
	float m_flDepthBias; // 0x860	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	// MDefaultString
	float m_flFadeOutTime; // 0x140	
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x144	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0x140	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x144	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MDefaultString
	float m_flInputMin; // 0x148	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MDefaultString
	float m_flInputMax; // 0x14c	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x150	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x154	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0	
	ParticleCollisionMode_t m_nCollisionModeInternal; // 0x4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x160
// Has VTable
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	// MDefaultString
	int32_t m_nInControlPointNumber; // 0x140	
	// MPropertyFriendlyName "output control point"
	// MDefaultString
	int32_t m_nOutControlPointNumber; // 0x144	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MDefaultString
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x148	
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	float m_flInputMin; // 0x14c	
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	float m_flInputMax; // 0x150	
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	float m_flOutputMin; // 0x154	
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	float m_flOutputMax; // 0x158	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	// MDefaultString
	bool m_bUseDeltaV; // 0x15c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x500
// Has VTable
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MDefaultString
	bool m_bUseAlphaTestWindow; // 0x190	
	// MPropertyFriendlyName "projected texture light"
	// MDefaultString
	bool m_bUseTexture; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	// MPropertyFriendlyName "radius scale"
	// MDefaultString
	float m_flRadiusScale; // 0x194	
	// MPropertyFriendlyName "alpha scale"
	// MDefaultString
	float m_flAlphaScale; // 0x198	
	// MPropertyFriendlyName "spotlight distance"
	// MDefaultString
	float m_flLightDistance; // 0x19c	
	// MPropertyFriendlyName "light start falloff"
	// MDefaultString
	float m_flStartFalloff; // 0x1a0	
	// MPropertyFriendlyName "spotlight distance falloff"
	// MDefaultString
	float m_flDistanceFalloff; // 0x1a4	
	// MPropertyFriendlyName "spotlight FoV"
	// MDefaultString
	float m_flSpotFoV; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01ac[0x4]; // 0x1ac
public:
	// MPropertyFriendlyName "color blend"
	// MDefaultString
	CParticleCollectionVecInput m_vecColorScale; // 0x1b0	
	// MPropertyFriendlyName "color blend type"
	// MDefaultString
	ParticleColorBlendType_t m_nColorBlendType; // 0x4e0	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x4e4	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x4e8	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x4ec	
	// MPropertyFriendlyName "texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x4f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x150
// Has VTable
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	// MDefaultString
	bool m_bRopeDecay; // 0x140	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Constructor
// Has Trivial Destructor
class TierChancePerHeroRank
{
public:
	float flHeroTierChance[5]; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
struct Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x0	
	Class_T classType; // 0x4	
	int32_t faction; // 0x8	
	Disposition_t disposition; // 0xc	
	int32_t priority; // 0x10	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x78
// Has VTable
// Is Abstract
class CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x78]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CDACShopUnitState
{
public:
	ConstDACUnitDefPtrAlias m_pUnitDef; // 0x0	
	int32_t m_nGoldCost; // 0x8	
	int32_t m_nScore; // 0xc	
	CUtlVectorFixed< EUnitKeyword > m_vecKeywords; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct UnderlordID_t
{
public:
	uint8_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CNavVolumeVector : public CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	bool m_bHasBeenPreFiltered; // 0x80	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkVelocityVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MNetworkVarNames "CUtlString m_GraphParameterName"
// MNetworkVarNames "float m_flGoal"
struct CBaseAnimatingEasingFloat_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlString m_GraphParameterName; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x18]; // 0x10
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flGoal; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x24
// Has Trivial Destructor
struct hudtextparms_t
{
public:
	Color color1; // 0x0	
	Color color2; // 0x4	
	uint8_t effect; // 0x8	
	uint8_t channel; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	float x; // 0xc	
	float y; // 0x10	
	float fadeinTime; // 0x14	
	float fadeoutTime; // 0x18	
	float holdTime; // 0x1c	
	float fxTime; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IRagdoll
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x2c
class CDACTurboShopOfferingState
{
public:
	CUtlVectorFixed< EUnitKeyword > m_vecKeywords; // 0x0	
	CUtlVectorFixed< int32 > m_vecUnits; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class CDACGameMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nGameModeStateUpdateNumber; // 0x8	
	bool m_bGameModeForceRewards; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
struct fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< CFogController > m_hCtrl; // 0x8	
	float m_flTransitionTime; // 0xc	
	Color m_OldColor; // 0x10	
	float m_flOldStart; // 0x14	
	float m_flOldEnd; // 0x18	
	float m_flOldMaxDensity; // 0x1c	
	float m_flOldHDRColorScale; // 0x20	
	float m_flOldFarZ; // 0x24	
	Color m_NewColor; // 0x28	
	float m_flNewStart; // 0x2c	
	float m_flNewEnd; // 0x30	
	float m_flNewMaxDensity; // 0x34	
	float m_flNewHDRColorScale; // 0x38	
	float m_flNewFarZ; // 0x3c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector dirPrimary"
// MNetworkVarNames "Color colorPrimary"
// MNetworkVarNames "Color colorSecondary"
// MNetworkVarNames "Color colorPrimaryLerpTo"
// MNetworkVarNames "Color colorSecondaryLerpTo"
// MNetworkVarNames "float32 start"
// MNetworkVarNames "float32 end"
// MNetworkVarNames "float32 farz"
// MNetworkVarNames "float32 maxdensity"
// MNetworkVarNames "float32 exponent"
// MNetworkVarNames "float32 HDRColorScale"
// MNetworkVarNames "float32 skyboxFogFactor"
// MNetworkVarNames "float32 skyboxFogFactorLerpTo"
// MNetworkVarNames "float32 startLerpTo"
// MNetworkVarNames "float32 endLerpTo"
// MNetworkVarNames "float32 maxdensityLerpTo"
// MNetworkVarNames "float32 lerptime"
// MNetworkVarNames "float32 duration"
// MNetworkVarNames "bool enable"
// MNetworkVarNames "bool blend"
// MNetworkVarNames "bool m_bNoReflectionFog"
struct fogparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector dirPrimary; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	Color colorPrimary; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	Color colorSecondary; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float start; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	float end; // 0x28	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	float maxdensity; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	float exponent; // 0x34	
	// MNetworkEnable
	// MNetworkEnable
	float HDRColorScale; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float lerptime; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	bool enable; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	bool blend; // 0x59	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x5a	
	bool m_bPadding; // 0x5b	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "float32 m_flPrevCycle"
// MNetworkVarNames "float32 m_flCycle"
class CNetworkedSequenceOperation
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "64"
	HSequence m_hSequence; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "64"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "64"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	// MNetworkChangeCallback "sequenceOpCycleChanged"
	float m_flCycle; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "0"
	CNetworkedQuantizedFloat m_flWeight; // 0x18	
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x30	
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x34	
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x38	
	
	// Datamap fields:
	// CUtlString sequenceName; // 0x7fffffff
	// int32_t sequence; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x64
// Has Trivial Constructor
// Has Trivial Destructor
struct dynpitchvol_base_t
{
public:
	int32_t preset; // 0x0	
	int32_t pitchrun; // 0x4	
	int32_t pitchstart; // 0x8	
	int32_t spinup; // 0xc	
	int32_t spindown; // 0x10	
	int32_t volrun; // 0x14	
	int32_t volstart; // 0x18	
	int32_t fadein; // 0x1c	
	int32_t fadeout; // 0x20	
	int32_t lfotype; // 0x24	
	int32_t lforate; // 0x28	
	int32_t lfomodpitch; // 0x2c	
	int32_t lfomodvol; // 0x30	
	int32_t cspinup; // 0x34	
	int32_t cspincount; // 0x38	
	int32_t pitch; // 0x3c	
	int32_t spinupsav; // 0x40	
	int32_t spindownsav; // 0x44	
	int32_t pitchfrac; // 0x48	
	int32_t vol; // 0x4c	
	int32_t fadeinsav; // 0x50	
	int32_t fadeoutsav; // 0x54	
	int32_t volfrac; // 0x58	
	int32_t lfofrac; // 0x5c	
	int32_t lfomult; // 0x60	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa0
// Has VTable
// Is Abstract
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
class IDamageHandler
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
class CDAC_AttackRecord
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > m_hSource; // 0x8	
	CHandle< CBaseEntity > m_hInflictor; // 0xc	
	CHandle< CBaseEntity > m_hTarget; // 0x10	
	CHandle< CBaseEntity > m_hProjectileSource; // 0x14	
	float m_flDamage; // 0x18	
	float m_flOriginalDamage; // 0x1c	
	float m_flDamagePhysical; // 0x20	
	float m_flDamagePhysical_IllusionDisplay; // 0x24	
	float m_flDamageMagical; // 0x28	
	float m_flDamageComposite; // 0x2c	
	float m_flDamagePure; // 0x30	
	int16_t m_iRecord; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	int32_t m_iDamageCategory; // 0x38	
	int32_t m_iFailType; // 0x3c	
	int32_t m_iDamageType; // 0x40	
	int32_t m_iFlags; // 0x44	
	struct 
	{
		uint8_t m_bAttack: 1; 		
		uint8_t m_bRangedAttack: 1; 		
		uint8_t m_bDirectionalRangedAttack: 1; 		
		uint8_t m_bFakeAttack: 1; 		
		uint8_t m_bNeverMiss: 1; 		
		uint8_t m_bLethalAttack: 1; 		
		uint8_t m_bTriggeredAttack: 1; 		
		uint8_t m_bNoCooldown: 1; 		
		uint8_t m_bProcessProcs: 1; 		
		uint8_t m_bUseProjectile: 1; 		
		uint8_t m_bUseCastAttackOrb: 1; 		
		uint8_t m_bAutoCastAttack: 1; 		
		uint8_t m_bIgnoreArmor: 1; 		
		uint8_t m_bIgnoreObstructions: 1; 		
		uint8_t m_bSuppressDamageSounds: 1; 		
		uint8_t m_bTriggerSavageAlliance: 1; 		
		uint64_t __pad2: 48;
	}; // 64 bits
	int32_t m_nBashSource; // 0x4c	
	float m_flAttackHeight; // 0x50	
	float m_flCriticalBonus; // 0x54	
	float m_flCriticalDamage; // 0x58	
	float m_flCriticalDisplay; // 0x5c	
	int32_t m_iProjectileSpeed; // 0x60	
	Vector m_vForceDirectionOverride; // 0x64	
	Vector m_vTargetLoc; // 0x70	
	Vector m_vBlockLoc; // 0x7c	
	int32_t m_nGlobalMeterEntity; // 0x88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x31
// Has Trivial Destructor
class ResponseFollowup
{
public:
	char* followup_concept; // 0x0	
	char* followup_contexts; // 0x8	
	float followup_delay; // 0x10	
	char* followup_target; // 0x14	
	char* followup_entityiotarget; // 0x1c	
	char* followup_entityioinput; // 0x24	
	float followup_entityiodelay; // 0x2c	
	bool bFired; // 0x30	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CDAC_NPC_Incident
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	float m_flStartTime; // 0xc	
	float m_flFinishTime; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x14]; // 0x14
public:
	float m_flMagnitude; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CNetworkedIKProceduralTargetContext m_ProceduralTargetContexts"
class CNetworkedIKContext
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CNetworkedIKProceduralTargetContext > m_ProceduralTargetContexts; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector
{
private:
	[[maybe_unused]] uint8_t __pad00a0[0x8]; // 0xa0
public:
	Vector m_vStartPos; // 0xa8	
	float m_flSearchDist; // 0xb4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0	
	float forceLimit; // 0x4	
	float torqueLimit; // 0x8	
	float bodyMassScale[2]; // 0xc	
	bool isActive; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	char m_szQuestName[128]; // 0x8	
	int32_t m_nQuestPhase; // 0x88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "int16 scale"
// MNetworkVarNames "Vector origin"
// MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
// MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
// MNetworkVarNames "fogparams_t fog"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
struct sky3dparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int16_t scale; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector origin; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	// MNetworkEnable
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t fog; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nWorldGroupID; // 0x80	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CInteractionManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	interactions_t m_nActiveInteraction; // 0x8	
	matrix3x4_t m_matHoldTransform; // 0xc	
	CHandle< CBaseAnimating > m_hSelf; // 0x3c	
	CHandle< CBasePlayer > m_hPlayer; // 0x40	
	CHandle< CBaseAnimating > m_hInteractionTarget; // 0x44	
	matrix3x4_t m_mInteractionTransformInit; // 0x48	
	matrix3x4_t m_mInteractionTransformTarget; // 0x78	
	float m_flInteractionLerp; // 0xa8	
	bool m_bAllInteractionsDisabled; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	CUtlVector< prevent_interaction_t > m_vecPreventionEntities; // 0xb0	
	CUtlVector< interactions_data_t > m_vecHandInteractions; // 0xc8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
// Has Trivial Destructor
struct interactions_data_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	interactions_t m_iInteractionType; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlSymbolLarge m_pszSelfClassname; // 0x10	
	CUtlSymbolLarge m_pszOtherClassname; // 0x18	
	CUtlSymbolLarge m_pszSelfAttachmentStart; // 0x20	
	CUtlSymbolLarge m_pszSelfAttachmentStartAlternate; // 0x28	
	CUtlSymbolLarge m_pszSelfAttachmentAdvance; // 0x30	
	CUtlSymbolLarge m_pszSelfAttachmentRetreat; // 0x38	
	bool m_bSelfMustBeHeld; // 0x40	
	bool m_bReleaseSelfOnSuccess; // 0x41	
private:
	[[maybe_unused]] uint8_t __pad0042[0x6]; // 0x42
public:
	CUtlSymbolLarge m_pszOtherAttachmentStart; // 0x48	
	CUtlSymbolLarge m_pszOtherAttachmentStartAlternate; // 0x50	
	CUtlSymbolLarge m_pszOtherAttachmentAdvance; // 0x58	
	CUtlSymbolLarge m_pszOtherAttachmentRetreat; // 0x60	
	bool m_bOtherMustBeHeld; // 0x68	
	bool m_bReleaseOtherOnSuccess; // 0x69	
	bool m_bIsInteractionsDisabled; // 0x6a	
	bool m_bIsSelfInteractionRequirementMet; // 0x6b	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iReapplyProvisionParity"
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CHandle< CBaseEntity > > m_Providers; // 0x8	
	CUtlVector< CHandle< CBaseEntity > > m_Receivers; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOuter; // 0x3c	
	bool m_bPreventLoopback; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x44	
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class DACUnderdlordLoadout
{
public:
	UnderlordID_t m_Underlord; // 0x0	
	int32_t m_nBuildIndex; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
class sGlaiveInfo
{
public:
	int32_t iAttackIndex; // 0x0	
	int32_t iBounceCount; // 0x4	
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct ParticleIndex_t
{
public:
	int32_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class IDACPlayerBot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct PlayerSlot_t
{
public:
	uint8_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
class CAI_Expresser
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	float m_flStopTalkTime; // 0x40	
	float m_flStopTalkTimeWithoutDelay; // 0x44	
	float m_flBlockedTalkTime; // 0x48	
	int32_t m_voicePitch; // 0x4c	
	float m_flLastTimeAcceptedSpeak; // 0x50	
	bool m_bAllowSpeakingInterrupts; // 0x54	
	bool m_bConsiderSceneInvolvementAsSpeech; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	int32_t m_nLastSpokenPriority; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CBaseFlex* m_pOuter; // 0x60	
	
	// Datamap fields:
	// void m_pSink; // 0x8
	// void m_ConceptHistories; // 0x10
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
class CDAC_BuffParticle
{
public:
	ParticleIndex_t m_iIndex; // 0x0	
	int32_t m_iPriority; // 0x4	
	bool m_bDestroyImmediatly; // 0x8	
	bool m_bStatusEffect; // 0x9	
	bool m_bHeroEffect; // 0xa	
	bool m_bOverheadEffectOffset; // 0xb	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct DACBoardPosition_t
{
public:
	int32_t x; // 0x0	
	int32_t y; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2a8
// Has VTable
class CDAC_PB_Bot2 : public IDACPlayerBot
{
public:
	PlayerSlot_t m_unPlayerSlot; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x7]; // 0x11
public:
	CUtlString m_strPersonaName; // 0x18	
	bool m_bCanAdjustPersonality; // 0x20	
	bool m_bAllowBuySell; // 0x21	
	bool m_bAllowUnderlord; // 0x22	
private:
	[[maybe_unused]] uint8_t __pad0023[0x1]; // 0x23
public:
	int32_t m_nRoundNumber; // 0x24	
	int32_t m_nLastPersonalityConsideredRound; // 0x28	
	float m_flBoardNoiseMagnitude; // 0x2c	
	float m_flBoardHorizontalPreference; // 0x30	
	float m_flBoardVerticalPreference; // 0x34	
	CUtlVector< DACBoardPosition_t > m_vecBoardPriority_Melee; // 0x38	
	CUtlVector< DACBoardPosition_t > m_vecBoardPriority_Ranged; // 0x50	
	CUtlVector< DACBoardPosition_t > m_vecBoardPriority_Assassin; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0080[0x58]; // 0x80
public:
	CUtlVector< CDACUnitState* > m_vecKnights; // 0xd8	
	bool m_bUnitKeywords[56]; // 0xf0	
	int32_t m_nLowestPowerLevel; // 0x128	
	int32_t m_nPowerLevelTotal; // 0x12c	
	int32_t m_nBoardUnits; // 0x130	
	int32_t m_nBenchUnits; // 0x134	
	int32_t m_nFallbacksDesired; // 0x138	
	int32_t m_nMaxUnitCapToBuyFor; // 0x13c	
	bool m_bSetBoardOccupied[8][4]; // 0x140	
	CDACUnitState* m_pLowestPLUnit; // 0x160	
	CUtlVector< int32 > m_vecBoardUnits; // 0x168	
	CUtlVector< int32 > m_vecBenchUnits; // 0x180	
	CUtlVector< int32 > m_vecGoingToL3; // 0x198	
	bool m_bNeedsReposition; // 0x1b0	
	bool m_bNeedsItemAssign; // 0x1b1	
	bool m_bNeedsUnitRemap; // 0x1b2	
	bool m_bAllowCombines; // 0x1b3	
	bool m_bAllowLevel3; // 0x1b4	
	bool m_bFollowBoughtSynergies; // 0x1b5	
	bool m_bSellOld; // 0x1b6	
	bool m_bKeepCombineds; // 0x1b7	
	int32_t m_nMaxLevelToBuy; // 0x1b8	
	int32_t m_nMaxTier; // 0x1bc	
	bool m_bAllowRerolls; // 0x1c0	
	bool m_bCareAboutDupes; // 0x1c1	
	bool m_bPersonality; // 0x1c2	
private:
	[[maybe_unused]] uint8_t __pad01c3[0x1]; // 0x1c3
public:
	int32_t m_nMaxTierForLevel3; // 0x1c4	
	int32_t m_nMaxGoingToLevel3; // 0x1c8	
	UnderlordID_t m_unUnderlord; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	CUtlVector< EUnitKeyword > m_vecKeywords; // 0x1d0	
	CUtlVector< int32 > m_vecUnitIDs; // 0x1e8	
	CUtlVector< CUtlString > m_vecTalents; // 0x200	
	int32_t m_nPersonality; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	CUtlVector< CUtlPair< DACAbilityID_t, float32 > > m_vecItemOffsets; // 0x220	
	int32_t m_nUnitsBoughtThisRound; // 0x238	
	int32_t m_nUnitsCombinedThisRound; // 0x23c	
	int32_t m_nRoundsSinceBoughtUnit; // 0x240	
	bool m_bSentGG; // 0x244	
private:
	[[maybe_unused]] uint8_t __pad0245[0x3]; // 0x245
public:
	int32_t m_nLastHealth; // 0x248	
	bool m_bSentDuosRequest; // 0x24c	
private:
	[[maybe_unused]] uint8_t __pad024d[0x3]; // 0x24d
public:
	CUtlVector< int32 > m_vecTeammateRequestedUnits; // 0x250	
	CUtlVector< int32 > m_vecOurRequestedUnits; // 0x268	
	CUtlVector< EUnitKeyword > m_vecTeammateRequestedKeywords; // 0x280	
	double m_flLastThanks; // 0x298	
	int32_t m_nCheatCounter; // 0x2a0	
	
	// Static fields:
	static int32_t &Get_sm_nLastPersonality1(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CDAC_PB_Bot2")->m_static_fields[0]->m_instance);};
	static int32_t &Get_sm_nLastPersonality2(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CDAC_PB_Bot2")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
class CDAC_GM_TechPrototypeA : public CDACGameMode
{
public:
	int32_t m_nRoundsRemaining; // 0x10	
	PlayerSlot_t m_unHumanPlayerSlot; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	CDACPlayerState* m_pHumanPlayer; // 0x18	
	PlayerSlot_t m_unEnemyPlayerSlot; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	IDACPlayerBot* m_pEnemyBot; // 0x28	
	CDACPlayerState* m_pEnemyPlayer; // 0x30	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// Has Trivial Destructor
class CSequenceTransitioner2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8	
	float m_flCurrentPlaybackRate; // 0x48	
	float m_flCurrentAnimTime; // 0x4c	
	TransitioningLayer_t m_transitioningLayers[4]; // 0x50	
	CBaseAnimatingController* m_pOwner; // 0x1d0	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x88
// Has VTable
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x78	
	float m_flRadius; // 0x84	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x68	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MNetworkVarNames "CNetworkedSequenceOperation m_op"
// MNetworkVarNames "int m_nOrder"
// MNetworkVarNames "bool m_bLooping"
// MNetworkVarNames "int m_nNewSequenceParity"
class CAnimationLayer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOpChanged"
	CNetworkedSequenceOperation m_op; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOrderChanged"
	int32_t m_nOrder; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkSendProxyRecipientsFilter
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x60	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	bool m_bLooping; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "animationLayerCycleReset"
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nNewSequenceParity; // 0x7c	
	// MNetworkDisable
	int32_t m_nFlags; // 0x80	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MNetworkDisable
	float m_flKillRate; // 0x88	
	// MNetworkDisable
	float m_flKillDelay; // 0x8c	
	// MNetworkDisable
	float m_flLayerAnimtime; // 0x90	
	// MNetworkDisable
	float m_flLayerFadeOuttime; // 0x94	
	// MNetworkDisable
	int32_t m_nActivity; // 0x98	
	// MNetworkDisable
	int32_t m_nPriority; // 0x9c	
	// MNetworkDisable
	float m_flLastEventCycle; // 0xa0	
	// MNetworkDisable
	float m_flLastAccess; // 0xa4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x34
// Has Trivial Destructor
struct HandHistoryInfo_t
{
public:
	Vector m_vVelocity; // 0x0	
	Vector m_vFilteredVelocity; // 0xc	
	Vector m_vFilteredThrowVel; // 0x18	
	Vector m_vPosition; // 0x24	
	float m_flSampleTime; // 0x30	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has Trivial Destructor
class sSpiritInfo
{
public:
	Vector vPosition; // 0x0	
	Vector vDirection; // 0xc	
	QAngle qAngles; // 0x18	
	Vector vVelocity; // 0x24	
	Vector vTargetLoc; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	CDAC_NPC* pTarget; // 0x40	
	bool bHit; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	int32_t nHealAmount; // 0x4c	
	CDAC_NPC* pSpirit; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x1
// Has Trivial Destructor
struct HeroPersona_t
{
public:
	int8_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
class CDAC_ML_Bot : public IDACPlayerBot
{
public:
	PlayerSlot_t m_unPlayerSlot; // 0x10	
	UnderlordID_t m_unUnderlord; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x6]; // 0x12
public:
	CUtlString m_strPersonaName; // 0x18	
	bool m_bPreviousVersion; // 0x20	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
class Extent
{
public:
	Vector lo; // 0x0	
	Vector hi; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
class CDAC_GM_Puzzle : public CDACGameMode
{
public:
	bool m_bUnclaimedChallenge; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
public:
	ConstDACPuzzleDefPtrAlias m_pPuzzleDef; // 0x20	
	PlayerSlot_t m_unHumanPlayerSlot; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x7]; // 0x29
public:
	CDACPlayerState* m_pHumanPlayer; // 0x30	
	PlayerSlot_t m_unEnemyPlayerSlot; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	CDACPlayerState* m_pEnemyPlayer; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
class CSimpleSimTimer
{
public:
	float m_next; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CTakeDamageInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vecDamageForce; // 0x8	
	Vector m_vecDamagePosition; // 0x14	
	Vector m_vecReportedPosition; // 0x20	
	Vector m_vecDamageDirection; // 0x2c	
	CHandle< CBaseEntity > m_hInflictor; // 0x38	
	CHandle< CBaseEntity > m_hAttacker; // 0x3c	
	CHandle< CBaseEntity > m_hWeapon; // 0x40	
	float m_flDamage; // 0x44	
	float m_flMaxDamage; // 0x48	
	float m_flBaseDamage; // 0x4c	
	int32_t m_bitsDamageType; // 0x50	
	int32_t m_iDamageCustom; // 0x54	
	int32_t m_iAmmoType; // 0x58	
	float m_flRadius; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	float m_flOriginalDamage; // 0x68	
	int32_t m_nDamageTaken; // 0x6c	
	int16_t m_iRecord; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0072[0x2]; // 0x72
public:
	float m_flStabilityDamage; // 0x74	
	int32_t m_bitsDotaDamageType; // 0x78	
	int32_t m_nDotaDamageCategory; // 0x7c	
	float m_flCombatLogCreditFactor; // 0x80	
	int32_t m_nDACGlobalMeterEntity; // 0x84	
	bool m_bAllowFriendlyFire; // 0x88	
	bool m_bCanBeBlocked; // 0x89	
	bool m_bCanHeadshot; // 0x8a	
private:
	[[maybe_unused]] uint8_t __pad008b[0x5]; // 0x8b
public:
	HSCRIPT m_hScriptInstance; // 0x90	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CConstantForceController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	Vector m_linear; // 0xc	
	Vector m_angular; // 0x18	
	Vector m_linearSave; // 0x24	
	Vector m_angularSave; // 0x30	
	
	// Datamap fields:
	// int32_t m_controlType; // 0x8
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct DACAbilityID_t
{
public:
	uint32_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct DACPuzzleID_t
{
public:
	uint32_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
class ResponseParams
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	int16_t odds; // 0x10	
	int16_t flags; // 0x12	
	uint8_t soundlevel; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	ResponseFollowup* m_pFollowup; // 0x18	
	
	// Datamap fields:
	// int32_t delay; // 0x0
	// int32_t respeakdelay; // 0x4
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class DACItemChoiceReward_Choice
{
public:
	DACAbilityID_t m_unItemID; // 0x0	
	bool m_bAvailable; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector localSound"
// MNetworkVarNames "int32 soundscapeIndex"
// MNetworkVarNames "uint8 localBits"
// MNetworkVarNames "int soundscapeEntityListIndex"
struct audioparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector localSound[8]; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	int32_t soundscapeIndex; // 0x68	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t localBits; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CRecipientFilter : public IRecipientFilter
{
public:
	NetChannelBufType_t m_nBufType; // 0x8	
	bool m_bInitMessage; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	CUtlVector< CEntityIndex > m_Recipients; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0028[0x88]; // 0x28
public:
	bool m_bUsingPredictionRules; // 0xb0	
	bool m_bIgnorePredictionCull; // 0xb1	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MNetworkVarNames "HModelStrong m_hModel"
// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames "int8 m_nIdealMotionType"
class CModelState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0	
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x38]; // 0xb0
public:
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00e9[0x9f]; // 0xe9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0190[0x9a]; // 0x190
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x22a	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x22b	
	// MNetworkDisable
	bool m_bIsJiggleBonesEnabled; // 0x22c	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x22d	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0xe0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
struct DACLobbyID_t
{
public:
	uint64_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
class CDACGameConstants
{
public:
	CMsgGameModeSettings m_msgGameModeSettings; // 0x0	
	CUtlVector< int32 > m_vecPlayerExperienceTable; // 0x28	
	CUtlVector< TierChancePerHeroRank > m_vecUnitTierOddsTable; // 0x40	
	int32_t m_nExperiencePurchaseGoldCost; // 0x58	
	int32_t m_nExperiencePurchaseAmount; // 0x5c	
	int32_t m_nMaxInterestGoldAmount; // 0x60	
	int32_t m_nInterestGoldDivisor; // 0x64	
	bool m_bDoesWinMatterForItemRewards; // 0x68	
	bool m_bHasNeutralRounds; // 0x69	
private:
	[[maybe_unused]] uint8_t __pad006a[0x6]; // 0x6a
public:
	CUtlVector< int32 > m_vecLootRoundNumbers; // 0x70	
	int32_t m_nUnderlordSelectionRound; // 0x88	
	float m_flKillMultiplier; // 0x8c	
	uint32_t m_unPresitgeLevel; // 0x90	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
class CEconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x12]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CMotorController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_speed; // 0x8	
	float m_maxTorque; // 0xc	
	Vector m_axis; // 0x10	
	float m_inertiaFactor; // 0x1c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0	
	CUtlVector< int32 > boneIndex; // 0x18	
	bool allowStretch; // 0x30	
	bool unused; // 0x31	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IHasAttributes
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
class CCopyRecipientFilter : public IRecipientFilter
{
public:
	int32_t m_Flags; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CEntityIndex > m_Recipients; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IPhysicsPlayerController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CDACUnderlordPickerOfferingState
{
public:
	UnderlordID_t m_unUnderlordID; // 0x0	
	uint32_t m_unBuildID; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
struct locksound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge sLockedSound; // 0x8	
	CUtlSymbolLarge sLockedSentence; // 0x10	
	CUtlSymbolLarge sUnlockedSound; // 0x18	
	CUtlSymbolLarge sUnlockedSentence; // 0x20	
	int32_t iLockedSentence; // 0x28	
	int32_t iUnlockedSentence; // 0x2c	
	float flwaitSound; // 0x30	
	float flwaitSentence; // 0x34	
	uint8_t bEOFLocked; // 0x38	
	uint8_t bEOFUnlocked; // 0x39	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
class CDAC_Talent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x48]; // 0x0
public:
	PlayerSlot_t m_nPlayerSlot; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	int32_t m_nTeam; // 0x4c	
	bool m_bForceActive; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	item_definition_index_t m_uItemDef; // 0x54	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float m_flAutoExposureMin"
// MNetworkVarNames "float m_flAutoExposureMax"
// MNetworkVarNames "float m_flExposureCompensationScalar"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
// MNetworkVarNames "float m_flRate"
// MNetworkVarNames "float m_flAccelerateExposureDown"
struct TonemapParameters_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x8	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0xc	
	// MNetworkEnable
	float m_flExposureCompensationScalar; // 0x10	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x14	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x18	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x1c	
	// MNetworkEnable
	float m_flRate; // 0x20	
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CDAC_GM_Sandbox : public CDACGameMode
{
public:
	PlayerSlot_t m_unHumanPlayerSlot; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x7]; // 0x11
public:
	CDACPlayerState* m_pHumanPlayer; // 0x18	
	PlayerSlot_t m_unEnemyPlayerSlot; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	CDACPlayerState* m_pEnemyPlayer; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "int32 m_iGlowType"
// MNetworkVarNames "int32 m_nGlowRange"
// MNetworkVarNames "int32 m_nGlowRangeMin"
// MNetworkVarNames "Color m_glowColorOverride"
// MNetworkVarNames "bool m_bFlashing"
class CGlowProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_fGlowColor; // 0x8	
	int32_t m_iGlowTeam; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0018[0x18]; // 0x18
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x34	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x3c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlashing; // 0x40	
	bool m_bGlowing; // 0x41	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
class CDACPlayerLinkableComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< PlayerSlot_t > m_vecParentPlayerSlots; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
class CSoundEnvelope
{
public:
	float m_current; // 0x0	
	float m_target; // 0x4	
	float m_rate; // 0x8	
	bool m_forceupdate; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has Trivial Destructor
class CSceneEventInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1c]; // 0x0
public:
	bool m_bStarted; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	int32_t m_iLayer; // 0x20	
	int32_t m_iPriority; // 0x24	
	HSequence m_hSequence; // 0x28	
	bool m_bIsGesture; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	float m_flWeight; // 0x30	
	CHandle< CBaseEntity > m_hTarget; // 0x34	
	bool m_bIsMoving; // 0x38	
	bool m_bHasArrived; // 0x39	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; // 0x3a
public:
	float m_flInitialYaw; // 0x3c	
	float m_flTargetYaw; // 0x40	
	float m_flFacingYaw; // 0x44	
	int32_t m_nType; // 0x48	
	float m_flNext; // 0x4c	
	bool m_bClientSide; // 0x50	
	bool m_bShouldRemove; // 0x51	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IBotController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MNetworkOverride "m_baseLayer.m_hSequence"
// MNetworkVarNames "CNetworkedSequenceOperation m_baseLayer"
// MNetworkVarNames "float m_flPoseParameter"
// MNetworkVarNames "bool m_bClientSideAnimation"
// MNetworkVarNames "int m_nNewSequenceParity"
// MNetworkVarNames "int m_nResetEventsParity"
class CBaseAnimatingController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkDisable
	float m_flGroundSpeed; // 0x5c	
	// MNetworkDisable
	float m_flLastEventCycle; // 0x60	
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x64	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x68	
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x80	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float m_flPoseParameter[24]; // 0x84	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0xe4	
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0xe5	
private:
	[[maybe_unused]] uint8_t __pad00e6[0x2]; // 0xe6
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0xec	
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0xf0	
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0xf4	
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0xf8	
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad0100[0x28]; // 0x100
public:
	// MNetworkDisable
	// -> m_currentOp - 0x130
	// -> m_flCurrentPlaybackRate - 0x170
	// -> m_flCurrentAnimTime - 0x174
	// -> m_transitioningLayers[4] - 0x178
	// -> m_pOwner - 0x2f8
	CSequenceTransitioner2 m_SequenceTransitioner; // 0x128	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x300
	// float m_flCachedSequenceCycleRate; // 0x118
	// float m_flCachedGroundSpeed; // 0x11c
	// float m_flCachedOneMinusLastVisibleCycle; // 0x120
	// bool m_bModelHasNoPoseParams; // 0x124
	// bool m_bNotifyWhenSequenceFinished; // 0x125
	// bool useClientSideAnimation; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
struct thinkfunc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	HSCRIPT m_hFn; // 0x8	
	CUtlStringToken m_nContext; // 0x10	
	int32_t m_nNextThinkTick; // 0x14	
	int32_t m_nLastThinkTick; // 0x18	
	
	// Datamap fields:
	// void m_think; // 0x0
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "EHANDLE2 m_hOwner"
// MNetworkVarNames "CUtlStringToken m_name"
class CGameSceneNodeHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8	
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CHintMessageQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_tmMessageEnd; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHintMessage* > m_messages; // 0x10	
	CBasePlayer* m_pPlayer; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CSingleplayRules : public CGameRules
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct magnetted_objects_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > hEntity; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkOriginQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "float32 m_timestamp"
class CountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkOriginCellCoordQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x18	
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x1a	
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x1c	
	// MNetworkBitCount "3"
	uint16_t m_nOutsideWorld; // 0x1e	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x20	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x38	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MNetworkVarNames "bool m_bUsed"
// MNetworkVarNames "float m_Floats"
// MNetworkVarNames "Vector m_Vectors"
class CTimeOfDayDynamicValues
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x12]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUsed; // 0x12	
private:
	[[maybe_unused]] uint8_t __pad0013[0x1]; // 0x13
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_Floats[16]; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_Vectors[16]; // 0x54	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CBaseAnimatingEasingFloat_t m_IKMasterBlendAmountEasing"
struct CBaseAnimatingEasings_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// -> m_GraphParameterName - 0x10
	// -> m_flGoal - 0x30
	CBaseAnimatingEasingFloat_t m_IKMasterBlendAmountEasing; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0	
	bool m_bIsInSimulation; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flSimOrRenderTime; // 0x1c	
	float m_flInterpolatedTime; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0	
	int32_t parentIndex; // 0x20	
	float m_flRadius; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IPlayerInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_timestamp"
class IntervalTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f0
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0	
	char m_szResponseName[192]; // 0x1	
	char m_szMatchingRule[128]; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad0141[0xf]; // 0x141
public:
	// -> odds - 0x160
	// -> flags - 0x162
	// -> soundlevel - 0x164
	// -> m_pFollowup - 0x168
	ResponseParams m_Params; // 0x150	
	float m_fMatchScore; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	char* m_szSpeakerContext; // 0x178	
	char* m_szWorldContext; // 0x180	
	// -> followup_concept - 0x188
	// -> followup_contexts - 0x190
	// -> followup_delay - 0x198
	// -> followup_target - 0x19c
	// -> followup_entityiotarget - 0x1a4
	// -> followup_entityioinput - 0x1ac
	// -> followup_entityiodelay - 0x1b4
	// -> bFired - 0x1b8
	ResponseFollowup m_Followup; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x7]; // 0x1b9
public:
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1c0	
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CEnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CDACPlayerWinsLosses : public CDACPlayerLinkableComponent
{
public:
	int32_t m_nWins; // 0x20	
	int32_t m_nLosses; // 0x24	
	int32_t m_nWinStreak; // 0x28	
	int32_t m_nLossStreak; // 0x2c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CPlayerState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool deadflag; // 0x8	
	bool hltv; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	QAngle v_angle; // 0xc	
	CUtlSymbolLarge netname; // 0x18	
	int32_t fixangle; // 0x20	
	QAngle anglechange; // 0x24	
	int32_t frags; // 0x30	
	int32_t deaths; // 0x34	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CStopwatchBase : public CSimpleSimTimer
{
private:
	[[maybe_unused]] uint8_t __pad0004[0x8]; // 0x4
public:
	bool m_fIsRunning; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MNetworkVarNames "CGameSceneNodeHandle m_hParent"
// MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
// MNetworkVarNames "QAngle m_angRotation"
// MNetworkVarNames "float m_flScale"
// MNetworkVarNames "CUtlStringToken m_name"
// MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
class CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkDisable
	matrix3x4a_t m_mNodeToWorld; // 0x10	
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x40	
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x48	
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x50	
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x18]; // 0x60
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "64"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	// -> m_hOwner - 0x80
	// -> m_name - 0x84
	CGameSceneNodeHandle m_hParent; // 0x78	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	// -> m_cellX - 0xa0
	// -> m_cellY - 0xa2
	// -> m_cellZ - 0xa4
	// -> m_nOutsideWorld - 0xa6
	// -> m_vecX - 0xa8
	// -> m_vecY - 0xc0
	// -> m_vecZ - 0xd8
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad00f0[0x8]; // 0xf0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xf8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "64"
	float m_flScale; // 0x104	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0x108	
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0x114	
	// MNetworkDisable
	float m_flAbsScale; // 0x120	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0x124	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0x126	
	// MNetworkDisable
	bool m_bDormant; // 0x127	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0x128	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyHierarchy: 1; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeInfo: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedPositionChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedAnglesChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedScaleChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bWillBeCallingPostDataUpdate: 1; 		
		// MNetworkDisable
		uint8_t m_bNotifyBoneTransformsChanged: 1; 		
		// MNetworkDisable
		uint8_t m_nLatchAbsOrigin: 2; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
		uint16_t __pad3: 14;
	}; // 24 bits
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0x12b	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0x12c	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x12d	
private:
	[[maybe_unused]] uint8_t __pad012e[0x2]; // 0x12e
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_name; // 0x130	
private:
	[[maybe_unused]] uint8_t __pad0134[0x14]; // 0x134
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x148	
	// MNetworkDisable
	float m_flZOffset; // 0x14c	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x150	
	
	// Datamap fields:
	// void m_bDirtyHierarchy; // -0x1
	// void m_bDirtyBoneMergeInfo; // -0x1
	// void m_bNetworkedPositionChanged; // -0x1
	// void m_bNetworkedAnglesChanged; // -0x1
	// void m_bNetworkedScaleChanged; // -0x1
	// void m_bWillBeCallingPostDataUpdate; // -0x1
	// void m_bNotifyBoneTransformsChanged; // -0x1
	// void m_nLatchAbsOrigin; // -0x1
	// void m_bDirtyBoneMergeBoneToRoot; // -0x1
	// CHandle< CBaseEntity > parentname; // 0x7fffffff
	// bool useLocalOffset; // 0x7fffffff
	// bool positionInLocalSpace; // 0x7fffffff
	// Vector scales; // 0x7fffffff
	// Vector local.scales; // 0x7fffffff
	// float scale; // 0x7fffffff
	// float ModelScale; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
class CDAC_Modifier
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	CUtlSymbolLarge m_class; // 0x20	
	CUtlStringToken m_classToken; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlSymbolLarge m_szModifierAura; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	int32_t m_iIndex; // 0x40	
	float m_flCreationTime; // 0x44	
	int32_t m_iCreationFrame; // 0x48	
	float m_flLastAppliedTime; // 0x4c	
	float m_flDuration; // 0x50	
	float m_flDieTime; // 0x54	
	CHandle< CBaseEntity > m_hCaster; // 0x58	
	CHandle< CBaseEntity > m_hAbility; // 0x5c	
	CHandle< CBaseEntity > m_hParent; // 0x60	
	CHandle< CBaseEntity > m_hAuraOwner; // 0x64	
	int32_t m_iStackCount; // 0x68	
	int16_t m_iAuraSearchTeam; // 0x6c	
	int16_t m_iAuraSearchType; // 0x6e	
	int32_t m_iAuraSearchFlags; // 0x70	
	int32_t m_iAuraRadius; // 0x74	
	int32_t m_iTeam; // 0x78	
	int32_t m_iAttributes; // 0x7c	
	int32_t m_iSynergyLevel; // 0x80	
	int32_t m_iSynergyKeyword; // 0x84	
	// MFieldVerificationName "m_iTooltipParity"
	int16_t m_iPaddingToMakeSchemaHappy2; // 0x88	
	struct 
	{
		uint8_t m_bIsAura: 1; 		
		uint8_t m_bIsAuraActiveOnDeath: 1; 		
		uint8_t m_bMarkedForDeletion: 1; 		
		uint8_t m_bAuraIsHeal: 1; 		
		uint8_t m_bProvidedByAura: 1; 		
		uint32_t __pad4: 19;
	}; // 24 bits
	bool m_bPurgedDestroy; // 0x8b	
	float m_flPreviousTick; // 0x8c	
	float m_flThinkInterval; // 0x90	
	float m_flThinkTimeAccumulator; // 0x94	
	CUtlVector< CDAC_BuffParticle > m_iParticles; // 0x98	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
struct prevent_interaction_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > m_hEntity; // 0x8	
	float m_flUntilTime; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CBaseAchievement
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	char* m_pszName; // 0x18	
	int32_t m_iAchievementID; // 0x20	
	int32_t m_iFlags; // 0x24	
	int32_t m_iGoal; // 0x28	
	int32_t m_iProgressMsgIncrement; // 0x2c	
	int32_t m_iProgressMsgMinimum; // 0x30	
	int32_t m_iPointValue; // 0x34	
	bool m_bHideUntilAchieved; // 0x38	
	bool m_bStoreProgressInSteam; // 0x39	
private:
	[[maybe_unused]] uint8_t __pad003a[0x6]; // 0x3a
public:
	char* m_pInflictorClassNameFilter; // 0x40	
	char* m_pInflictorEntityNameFilter; // 0x48	
	char* m_pVictimClassNameFilter; // 0x50	
	char* m_pAttackerClassNameFilter; // 0x58	
	char* m_pMapNameFilter; // 0x60	
	char* m_pGameDirFilter; // 0x68	
	char** m_pszComponentNames; // 0x70	
	char** m_pszComponentDisplayNames; // 0x78	
	int32_t m_iNumComponents; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	char* m_pszComponentPrefix; // 0x88	
	int32_t m_iComponentPrefixLen; // 0x90	
	bool m_bAchieved; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	int32_t m_iCount; // 0x98	
	int32_t m_iProgressShown; // 0x9c	
	uint64_t m_iComponentBits; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x8]; // 0xa8
public:
	int32_t m_nUserSlot; // 0xb0	
	int32_t m_iDisplayOrder; // 0xb4	
	bool m_bShowOnHUD; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x3]; // 0xb9
public:
	int32_t m_iAssetAwardID; // 0xbc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x290
// Has VTable
// 
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class CEnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	CEntityIOOutput m_OnGustStart; // 0x70	
	CEntityIOOutput m_OnGustEnd; // 0x98	
	float m_flVariationTime; // 0xc0	
	float m_flSwayTime; // 0xc4	
	float m_flSimTime; // 0xc8	
	float m_flSwitchTime; // 0xcc	
	float m_flAveWindSpeed; // 0xd0	
	bool m_bGusting; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	float m_flWindAngleVariation; // 0xd8	
	float m_flWindSpeedVariation; // 0xdc	
	CEntityIndex m_iEntIndex; // 0xe0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x9
// Has Trivial Destructor
struct AIHullFlags_t
{
public:
	bool m_bHull_Human; // 0x0	
	bool m_bHull_SmallCentered; // 0x1	
	bool m_bHull_WideHuman; // 0x2	
	bool m_bHull_Tiny; // 0x3	
	bool m_bHull_Medium; // 0x4	
	bool m_bHull_TinyCentered; // 0x5	
	bool m_bHull_Large; // 0x6	
	bool m_bHull_LargeCentered; // 0x7	
	bool m_bHull_MediumTall; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
class CPhysicsComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CDAC_GM_Normal : public CDACGameMode
{
public:
	PlayerSlot_t m_nLastOddPlayerSlot; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x1f]; // 0x11
public:
	CDACHashMapLarge< PlayerSlot_t, PlayerSlot_t > m_mapPlayerSlotToPreviousPlayerOpponentSlot; // 0x30	
	int32_t m_nNextFinalPlace; // 0x88	
	uint32_t m_rtGameStartTime; // 0x8c	
	bool m_bRoundIsNeutralFight; // 0x90	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
class CNetworkTransmitComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x12c]; // 0x0
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x12c	
	
	// Static fields:
	static int32_t &Get_s_nWatchTransmitEntity(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bUseNetworkVars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[1]->m_instance);};
	static bool &Get_s_bNetworkVarPerFieldTracking(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[2]->m_instance);};
	static bool &Get_s_bNetworkVarValidate(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fields[3]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MNetworkVarNames "CModelState m_modelState"
// MNetworkVarNames "bool m_bIsRenderingEnabled"
// MNetworkVarNames "bool m_bIsAnimationEnabled"
// MNetworkVarNames "CUtlStringToken m_materialGroup"
// MNetworkVarNames "uint8 m_nHitboxSet"
// MNetworkVarNames "float m_flIkMasterBlendValueCache"
// MNetworkVarNames "CNetworkedIKContext m_NetworkedIKContext"
class CSkeletonInstance : public CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0160[0x10]; // 0x160
public:
	// MNetworkEnable
	// -> m_hModel - 0x210
	// -> m_ModelName - 0x218
	// -> m_bClientClothCreationSuppressed - 0x258
	// -> m_MeshGroupMask - 0x2f8
	// -> m_nIdealMotionType - 0x39a
	// -> m_nForceLOD - 0x39b
	// -> m_bIsJiggleBonesEnabled - 0x39c
	// -> m_nClothUpdateFlags - 0x39d
	CModelState m_modelState; // 0x170	
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x3b0	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x3b1	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDisableSolidCollisionsForHierarchy: 1; 		
		// MNetworkDisable
		uint8_t m_bDirtyMotionType: 1; 		
		// MNetworkDisable
		uint8_t m_bIsGeneratingLatchedParentSpaceState: 1; 		
		uint16_t __pad5: 13;
	}; // 16 bits
	// MNetworkDisable
	bool m_bEnableIK; // 0x3b3	
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x3b4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nHitboxSet; // 0x3b8	
private:
	[[maybe_unused]] uint8_t __pad03b9[0x4f]; // 0x3b9
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x408	
private:
	[[maybe_unused]] uint8_t __pad040c[0x4]; // 0x40c
public:
	// MNetworkEnable
	// MNetworkEnable
	CNetworkedIKContext m_NetworkedIKContext; // 0x410	
	
	// Datamap fields:
	// Vector velocity; // 0x7fffffff
	// Vector rotationAxis; // 0x7fffffff
	// float rotationSpeed; // 0x7fffffff
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CResponseCriteriaSet
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	int32_t m_nNumPrefixedContexts; // 0x30	
	bool m_bOverrideOnAppend; // 0x34	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
class CCommentarySystem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	int32_t m_afPlayersLastButtons; // 0x14	
	int32_t m_iCommentaryNodeCount; // 0x18	
	bool m_bCommentaryConvarsChanging; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	int32_t m_iClearPressedButtons; // 0x20	
	bool m_bCommentaryEnabledMidGame; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_flNextTeleportTime; // 0x28	
	int32_t m_iTeleportStage; // 0x2c	
	bool m_bCheatState; // 0x30	
	bool m_bIsFirstSpawnGroupToLoad; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x6]; // 0x32
public:
	KeyValues* m_pkvSavedModifications; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	CUtlVector< CHandle< CBaseEntity > > m_hSpawnedEntities; // 0x58	
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x70	
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x74	
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x78	
	
	// Datamap fields:
	// void m_ModifiedConvars; // 0x40
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has VTable
class CDAC_PB_Empty : public IDACPlayerBot
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
class DACBoardBuddyState
{
public:
	Vector m_vPos; // 0x0	
	QAngle m_aAngle; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
class CDACPlayerState
{
public:
	PlayerSlot_t m_unPlayerSlot; // 0x0	
	EDACLobbyTeam m_eLobbyTeam; // 0x4	
	// -> m_vPos - 0x8
	// -> m_aAngle - 0x14
	DACBoardBuddyState m_boardBuddyState; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0020[0x38]; // 0x20
public:
	int32_t m_nGold; // 0x58	
	bool m_bShopLocked; // 0x5c	
	bool m_bBoughtTurboBucketThisGame; // 0x5d	
	bool m_bUsedTurboBucketReroll; // 0x5e	
	bool m_bUsedItemRerollThisRound; // 0x5f	
	float m_flBrawnyKills; // 0x60	
	float m_flBrawnyKillsQueued; // 0x64	
	bool m_bPlayerAbandoned; // 0x68	
	bool m_bKickedForDisconnection; // 0x69	
	bool m_bFreeFirstReroll; // 0x6a	
private:
	[[maybe_unused]] uint8_t __pad006b[0x1]; // 0x6b
public:
	int32_t m_nRerollCost; // 0x6c	
	CUtlVector< CDACUnitState* > m_vecUnits; // 0x70	
	CUtlVectorFixed< CDACShopUnitState > m_vecShopUnits; // 0x88	
	CUtlVectorFixed< CDACTurboShopOfferingState > m_vecTurboBuckets; // 0x158	
	int32_t m_nPartyIndex; // 0x1e0	
	int32_t m_nDevNextCombatTakeDamage; // 0x1e4	
	bool m_bHumanPlayer; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x7]; // 0x1e9
public:
	IDACPlayerBot* m_pPlayerBot; // 0x1f0	
	bool m_bIgnoreUnitCombinesOnBoard; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01f9[0x3]; // 0x1f9
public:
	int32_t m_nUnitLimitBonus; // 0x1fc	
	int32_t m_nShopCostDelta; // 0x200	
	uint32_t m_unGoldSpentInRerollsThisRound; // 0x204	
	uint32_t m_unGoldSpentInLevelsThisRound; // 0x208	
	uint32_t m_unGoldSpentInUnitsThisRound; // 0x20c	
	uint32_t m_unRerollsThisRound; // 0x210	
	uint32_t m_unDamageToUnitsThisRound; // 0x214	
	uint32_t m_unDamageToPlayersThisRound; // 0x218	
	uint32_t m_unShopGenerationID; // 0x21c	
	CUtlVector< DACItemChoiceReward > m_vecItemChoiceRewards; // 0x220	
	CUtlVectorFixed< int32 > m_vecCurrentRewardTiers; // 0x238	
	CUtlVector< item_definition_index_t > m_vecTalentsAvailable; // 0x250	
	CUtlVector< item_definition_index_t > m_vecTalentsSelected; // 0x268	
	CUtlVector< CDAC_Talent* > m_vecTalents; // 0x280	
	uint32_t m_unUnderlordBuildId; // 0x298	
private:
	[[maybe_unused]] uint8_t __pad029c[0x4]; // 0x29c
public:
	CDACHashMapLarge< PlayerSlot_t, DACWinLossRecord > m_mapPlayerSlotToWinLossRecord; // 0x2a0	
private:
	[[maybe_unused]] uint8_t __pad02f8[0x6c]; // 0x2f8
public:
	int32_t m_nFinalPlace; // 0x364	
	bool m_bSentPostMatchStats; // 0x368	
	bool m_bQueuedKillForLeftLobby; // 0x369	
	bool m_bCanSelectUnderlord; // 0x36a	
private:
	[[maybe_unused]] uint8_t __pad036b[0x1]; // 0x36b
public:
	CUtlVectorFixed< CDACUnderlordPickerOfferingState > m_vecUnderlordOfferings; // 0x36c	
	// -> m_Underlord - 0x390
	// -> m_nBuildIndex - 0x394
	DACUnderdlordLoadout m_underlordLoadout; // 0x390	
private:
	[[maybe_unused]] uint8_t __pad0398[0xa8]; // 0x398
public:
	uint32_t m_unGoldQueued; // 0x440	
private:
	[[maybe_unused]] uint8_t __pad0444[0xbc]; // 0x444
public:
	int32_t m_nMMRChangeOverallMin; // 0x500	
	int32_t m_nMMRChangeOverallMax; // 0x504	
	int32_t m_nMMRChangeCurrentMin; // 0x508	
	int32_t m_nMMRChangeCurrentMax; // 0x50c	
	int32_t m_nTeamMMRChangeOverallMin; // 0x510	
	int32_t m_nTeamMMRChangeOverallMax; // 0x514	
	int32_t m_nTeamMMRChangeCurrentMin; // 0x518	
	int32_t m_nTeamMMRChangeCurrentMax; // 0x51c	
	int32_t m_nRollsThisTurn; // 0x520	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
class CAI_MoveMonitor
{
public:
	Vector m_vMark; // 0x0	
	float m_flMarkTolerance; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0	
	float m_fPrevSampleTime; // 0xc	
	float m_fIdealSampleRate; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
class CPhysicsShake
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_force; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
class CDACPlayerItemSlots : public CDACPlayerLinkableComponent
{
public:
	CUtlVector< DACItemSlot > m_vecItemSlots; // 0x20	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CMultiplayRules : public CGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0090[0x18]; // 0x90
public:
	float m_flIntermissionEndTime; // 0xa8	
	
	// Static fields:
	static int32_t &Get_m_nMapCycleTimeStamp(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fields[0]->m_instance);};
	static int32_t &Get_m_nMapCycleindex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fields[1]->m_instance);};
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
class CNavVolumeAll : public CNavVolumeVector
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MNetworkExcludeByUserGroup "FogController"
// MNetworkVarNames "uint8 m_chAreaBits"
// MNetworkVarNames "uint8 m_chAreaPortalBits"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "QAngle m_vecPunchAngle"
// MNetworkVarNames "QAngle m_vecPunchAngleVel"
// MNetworkVarNames "bool m_bDrawViewmodel"
// MNetworkVarNames "bool m_bWearingSuit"
// MNetworkVarNames "bool m_bPoisoned"
// MNetworkVarNames "float32 m_flStepSize"
// MNetworkVarNames "bool m_bAllowAutoMovement"
// MNetworkVarNames "bool m_bSlowMovement"
// MNetworkVarNames "bool m_bAutoAimTarget"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
class CPlayerLocalData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0xe]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaBits[32]; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaPortalBits[24]; // 0x38	
	int32_t m_nStepside; // 0x50	
	int32_t m_nOldButtons; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x5c	
	Vector m_vecOverViewpoint; // 0x60	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0x6c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0x6d	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0x6e	
private:
	[[maybe_unused]] uint8_t __pad006f[0x1]; // 0x6f
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x70	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x74	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x78	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	float m_flFallVelocity; // 0x7c	
private:
	[[maybe_unused]] uint8_t __pad0080[0x8]; // 0x80
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x88	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x94	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xa0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xa1	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xa2	
private:
	[[maybe_unused]] uint8_t __pad00a3[0x1]; // 0xa3
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags "2"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	float m_flStepSize; // 0xa4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xa8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xa9	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xaa	
private:
	[[maybe_unused]] uint8_t __pad00ab[0x5]; // 0xab
public:
	// MNetworkEnable
	// MNetworkEnable
	// -> scale - 0xb8
	// -> origin - 0xbc
	// -> bClip3DSkyBoxNearToWorldFar - 0xc8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xcc
	// -> fog - 0xd0
	// -> m_nWorldGroupID - 0x130
	sky3dparams_t m_skybox3d; // 0xb0	
	// MNetworkEnable
	// MNetworkEnable
	// -> localSound[8] - 0x140
	// -> soundscapeIndex - 0x1a0
	// -> localBits - 0x1a4
	// -> soundscapeEntityListIndex - 0x1a8
	audioparams_t m_audio; // 0x138	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x1b0	
	fogparams_t m_fog; // 0x1c8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
class CRandStopwatch : public CStopwatchBase
{
public:
	float m_minInterval; // 0x10	
	float m_maxInterval; // 0x14	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x64
// Has Trivial Constructor
// Has Trivial Destructor
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x90
// Has VTable
class CSoundPatch
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_current - 0x8
	// -> m_target - 0xc
	// -> m_rate - 0x10
	// -> m_forceupdate - 0x14
	CSoundEnvelope m_pitch; // 0x8	
	// -> m_current - 0x18
	// -> m_target - 0x1c
	// -> m_rate - 0x20
	// -> m_forceupdate - 0x24
	CSoundEnvelope m_volume; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	float m_shutdownTime; // 0x30	
	float m_flLastTime; // 0x34	
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38	
	CHandle< CBaseEntity > m_hEnt; // 0x40	
	CEntityIndex m_soundEntityIndex; // 0x44	
	Vector m_soundOrigin; // 0x48	
	int32_t m_isPlaying; // 0x54	
	// -> m_Flags - 0x60
	// -> m_Recipients - 0x68
	CCopyRecipientFilter m_Filter; // 0x58	
	float m_flCloseCaptionDuration; // 0x80	
	bool m_bUpdatedSoundOrigin; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	CUtlSymbolLarge m_iszClassName; // 0x88	
	
	// Static fields:
	static int32_t &Get_g_SoundPatchCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_guid; // 0x28
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "CEconItemAttribute m_Attributes"
class CAttributeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	CUtlVector< CEconItemAttribute > m_Attributes; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0020[0x30]; // 0x20
public:
	CAttributeManager* m_pManager; // 0x50	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class SimpleConstraintSoundProfile
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8	
	float m_keyPoints[2]; // 0xc	
	float m_reversalSoundThresholds[3]; // 0x14	
	
	// Datamap fields:
	// float m_keyPoints[0]; // 0xc
	// float m_keyPoints[1]; // 0x10
	// float m_reversalSoundThresholds[0]; // 0x14
	// float m_reversalSoundThresholds[1]; // 0x18
	// float m_reversalSoundThresholds[2]; // 0x1c
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// Has Trivial Destructor
struct TransitioningLayer_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CNetworkedSequenceOperation m_op; // 0x8	
	float m_flStartAnimTime; // 0x48	
	float m_flStartWeight; // 0x4c	
	float m_flAnimTime; // 0x50	
	int32_t m_nOrder; // 0x54	
	float m_flPlaybackRate; // 0x58	
	float m_flFadeOutDuration; // 0x5c	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
// Is Abstract
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0	
	bool m_bFailed; // 0xc1	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CEnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f8
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0	
	// -> m_Type - 0x8
	// -> m_szResponseName[192] - 0x9
	// -> m_szMatchingRule[128] - 0xc9
	// -> m_Params - 0x158
	// -> m_fMatchScore - 0x178
	// -> m_szSpeakerContext - 0x180
	// -> m_szWorldContext - 0x188
	// -> m_Followup - 0x190
	// -> m_pchCriteriaNames - 0x1c8
	// -> m_pchCriteriaValues - 0x1e0
	CRR_Response m_response; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
class CStopwatch : public CStopwatchBase
{
public:
	float m_interval; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CDAC_GM_Turbo : public CDAC_GM_Normal
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
class CDACPlayerLevel : public CDACPlayerLinkableComponent
{
public:
	int32_t m_nLevel; // 0x20	
	int32_t m_nTotalExperience; // 0x24	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:
	bool m_bAllowMultipleScenes; // 0x78	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
struct DACStreetfightID_t
{
public:
	uint32_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x250
// Has VTable
class CResponseQueue::CDeferredResponse
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// -> m_nNumPrefixedContexts - 0x40
	// -> m_bOverrideOnAppend - 0x44
	CResponseCriteriaSet m_contexts; // 0x10	
	float m_fDispatchTime; // 0x48	
	CHandle< CBaseEntity > m_hIssuer; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
public:
	// -> m_Type - 0x58
	// -> m_szResponseName[192] - 0x59
	// -> m_szMatchingRule[128] - 0x119
	// -> m_Params - 0x1a8
	// -> m_fMatchScore - 0x1c8
	// -> m_szSpeakerContext - 0x1d0
	// -> m_szWorldContext - 0x1d8
	// -> m_Followup - 0x1e0
	// -> m_pchCriteriaNames - 0x218
	// -> m_pchCriteriaValues - 0x230
	CRR_Response m_response; // 0x58	
	bool m_bResponseValid; // 0x248	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "itemid_t m_iItemID"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "style_index_t m_nOverrideStyle"
// MNetworkVarNames "CAttributeList m_AttributeList"
class CEconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31	
	bool m_bIsStoreItem; // 0x32	
	bool m_bIsTradeItem; // 0x33	
	bool m_bHasComputedAttachedParticles; // 0x34	
	bool m_bHasAttachedParticles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	int32_t m_iEntityQuantity; // 0x38	
	uint8_t m_unClientFlags; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	eEconItemOrigin m_unOverrideOrigin; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0xc]; // 0x44
public:
	char* m_pszGrayedOutReason; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	// -> m_Attributes - 0x60
	// -> m_pManager - 0xa8
	CAttributeList m_AttributeList; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x388
// Has VTable
// 
// MNetworkVarNames "CAnimationLayer m_AnimOverlay"
class CBaseAnimatingOverlayController : public CBaseAnimatingController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x338	
};

// Registered binary: server.dll (project 'server')
// Alignment: 2
// Size: 0x2
// Has Trivial Destructor
struct DACEquipSubSlot_t
{
public:
	uint16_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MNetworkVarNames "CUtlStringToken m_FloatIDs"
// MNetworkVarNames "CUtlStringToken m_VectorIDs"
class CTimeOfDayDynamicKeys
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_FloatIDs[16]; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_VectorIDs[16]; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
class CPlayerInfo : public IBotController
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CBasePlayer* m_pParent; // 0x10	
};

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x90
// Has VTable
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:
	float m_flRadiusInner; // 0x88	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CDACPlayerHealth : public CDACPlayerLinkableComponent
{
public:
	int32_t m_nHealth; // 0x20	
	int32_t m_nHealableDamage; // 0x24	
	int32_t m_nMaximumHealth; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x328
// Has VTable
class CDAC_GM_Duos : public CDAC_GM_Normal
{
public:
	CDACHashMapLarge< EDACLobbyTeam, CUtlPair< CDACPlayerState*, CDACPlayerState* > > m_mapLobbyTeamToPlayerStatePair; // 0x98	
	CDACHashMapLarge< EDACLobbyTeam, CUtlPair< PlayerSlot_t, PlayerSlot_t > > m_mapLobbyTeamToPlayerSlotPair; // 0xf0	
	CDACHashMapLarge< PlayerSlot_t, EDACLobbyTeam > m_mapPlayerSlotToLobbyTeam; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad01a0[0x78]; // 0x1a0
public:
	CUtlVector< CUtlPair< EDACLobbyTeam, EDACLobbyTeam > > m_vecLastCombatPairings; // 0x218	
	CUtlVector< CUtlPair< EDACLobbyTeam, EDACLobbyTeam > > m_vecSecondLastCombatPairings; // 0x230	
private:
	[[maybe_unused]] uint8_t __pad0248[0x58]; // 0x248
public:
	CDACHashMapLarge< CUtlPair< EDACLobbyTeam, EDACLobbyTeam >, EDACLobbyTeam > m_mapCombatPairingToLastHomeTeam; // 0x2a0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0	
	CUtlSymbolLarge m_iszValue; // 0x8	
	float m_fExpirationTime; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class DACItemSlot
{
public:
	ConstDACItemDefPtrAlias m_pItemDef; // 0x0	
	int32_t m_nAssignedUnitEntIndex; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
class DACWinLossRecord
{
public:
	int32_t m_nWins; // 0x0	
	int32_t m_nLosses; // 0x4	
	int32_t m_nDraws; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
class CModifierParams
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x4]; // 0x0
public:
	float fDamage; // 0x4	
	float fOriginalDamage; // 0x8	
	int32_t nActivity; // 0xc	
	bool bTooltip; // 0x10	
	bool bIsKillingBlow; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	int32_t nTooltipParam; // 0x14	
	bool bIgnoreInvis; // 0x18	
	bool bNoCooldown; // 0x19	
	bool bIgnoreArmor; // 0x1a	
	bool bReincarnate; // 0x1b	
	bool bDoNotConsume; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	float fDistance; // 0x20	
	float fGain; // 0x24	
	float fAttackTimeRemaining; // 0x28	
	int32_t m_nIssuerPlayerIndex; // 0x2c	
	CHandle< CBaseEntity > inflictor; // 0x30	
	int32_t nDamageType; // 0x34	
	int32_t nDamageflags; // 0x38	
	int32_t nDamageCategory; // 0x3c	
	int32_t iFailType; // 0x40	
	int16_t iRecord; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0046[0x2]; // 0x46
public:
	int32_t nCost; // 0x48	
	int32_t nOrdertype; // 0x4c	
	Vector vOldLoc; // 0x50	
	Vector vNewLoc; // 0x5c	
	bool bCraniumBasherTested; // 0x68	
	bool bMKBTested; // 0x69	
	bool bHeartRegenApplied; // 0x6a	
	bool bDiffusalApplied; // 0x6b	
	bool bChainLightningConsidered; // 0x6c	
	bool bSuppressDamage; // 0x6d	
	bool bRangedAttack; // 0x6e	
	bool bProcessProcs; // 0x6f	
	bool bProjectileIsFromIllusion; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
public:
	int32_t nPlayerids_stick; // 0x74	
	int32_t nPreviousPower; // 0x78	
	int32_t nCurrentPower; // 0x7c	
	CUtlVector< EUnitKeyword > vecKeywords; // 0x80	
	CHandle< CBaseEntity > hattacker; // 0x98	
	CHandle< CBaseEntity > htarget; // 0x9c	
	CHandle< CBaseEntity > hunit; // 0xa0	
	
	// Static fields:
	static CModifierParams &Get_s_Default(){return *reinterpret_cast<CModifierParams*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CModifierParams")->m_static_fields[0]->m_instance);};
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
struct MatchID_t
{
public:
	uint64_t m_Data; // 0x0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector m_vOrigin"
// MNetworkVarNames "Vector m_vStart"
// MNetworkVarNames "Vector m_vNormal"
// MNetworkVarNames "QAngle m_vAngles"
// MNetworkVarNames "CEntityHandle m_hEntity"
// MNetworkVarNames "CEntityHandle m_hOtherEntity"
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flMagnitude"
// MNetworkVarNames "float32 m_flRadius"
// MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
// MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
// MNetworkVarNames "uint32 m_nDamageType"
// MNetworkVarNames "uint16 m_nMaterial"
// MNetworkVarNames "uint16 m_nHitBox"
// MNetworkVarNames "uint8 m_nColor"
// MNetworkVarNames "uint8 m_fFlags"
// MNetworkVarNames "int8 m_nAttachmentIndex"
// MNetworkVarNames "CUtlStringToken m_nAttachmentName"
// MNetworkVarNames "uint16 m_iEffectName"
// MNetworkVarNames "uint8 m_nExplosionType"
class CEffectData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vOrigin; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vStart; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vNormal; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_vAngles; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flScale; // 0x40	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flMagnitude; // 0x44	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flRadius; // 0x48	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c	
	// MNetworkEnable
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x5e	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nColor; // 0x60	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_fFlags; // 0x61	
	// MNetworkEnable
	// MNetworkEnable
	int8_t m_nAttachmentIndex; // 0x62	
private:
	[[maybe_unused]] uint8_t __pad0063[0x1]; // 0x63
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x64	
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x68	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6a	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
class CDAC_GM_Tutorial : public CDACGameMode
{
public:
	PlayerSlot_t m_unHumanPlayerSlot; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x7]; // 0x11
public:
	CDACPlayerState* m_pHumanPlayer; // 0x18	
	PlayerSlot_t m_unEnemyPlayerSlot; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	CDACPlayerState* m_pEnemyPlayer; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkViewOffsetVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30	
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CDAC_GM_Classic : public CDAC_GM_Normal
{
public:
	// No schema binary for binding
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has Trivial Destructor
class CDACUnitState
{
public:
	int32_t m_nEntIndex; // 0x0	
	// -> x - 0x4
	// -> y - 0x8
	DACBoardPosition_t m_Position; // 0x4	
	int32_t m_nRank; // 0xc	
	float m_flHealth; // 0x10	
	float m_flMana; // 0x14	
	int32_t m_nUnitsConsumed; // 0x18	
	int32_t m_nGoldConsumed; // 0x1c	
	float m_flKills; // 0x20	
	uint32_t m_unKillStreak; // 0x24	
	uint32_t m_unDuelBonusDamage; // 0x28	
	int32_t m_nUnitCapCost; // 0x2c	
	bool m_bIsPlaceableItem; // 0x30	
	bool m_bBotIgnore; // 0x31	
	bool m_bCanMoveToBench; // 0x32	
	bool m_bCanBeSold; // 0x33	
	float m_flScoreForAutoPosition; // 0x34	
	bool m_bRecommendedForPlacement; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
public:
	float m_flTimePlaced; // 0x3c	
	ConstDACUnitDefPtrAlias m_pUnitDef; // 0x40	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has Trivial Destructor
struct handposepair_t
{
public:
	matrix3x4_t m_matHandOffset[2]; // 0x0	
	Vector m_vMaxExtentOrigin[2]; // 0x60	
	Vector m_vMinExtentOrigin[2]; // 0x78	
	Vector m_vRotationAxisEndpoints[2]; // 0x90	
	float m_flHandPoseParams[5]; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00bc[0x4]; // 0xbc
public:
	CUtlSymbolLarge m_poseSequenceName; // 0xc0	
	int32_t m_nUseRange; // 0xc8	
	float m_flUseAnglesRange; // 0xcc	
	float m_flPivotMin; // 0xd0	
	float m_flPivotMax; // 0xd4	
	float m_flRotateMin; // 0xd8	
	float m_flRotateMax; // 0xdc	
	bool m_bHasExtent; // 0xe0	
	bool m_bHasRotation; // 0xe1	
	bool m_bAllowFlip; // 0xe2	
	bool m_bConformFingers; // 0xe3	
	bool m_bSqueezable; // 0xe4	
	bool m_bSqueezeTarget; // 0xe5	
	bool m_bGlobal; // 0xe6	
	bool m_bHandPoseEntityData; // 0xe7	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct CAttributeManager__cached_attribute_float_t
{
public:
	float flIn; // 0x0	
	CUtlSymbolLarge iAttribHook; // 0x8	
	float flOut; // 0x10	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0	
	float m_flClusterArea; // 0x4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0	
	float flMaxRotation; // 0x4	
	float flMotorTargetAngSpeed; // 0x8	
	float flMotorMaxTorque; // 0xc	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MNetworkVarNames "float m_flValues"
// MNetworkVarNames "int m_nValueCounts"
// MNetworkVarNames "int m_nBucketCount"
// MNetworkVarNames "float m_flInterval"
// MNetworkVarNames "float m_flFinalValue"
// MNetworkVarNames "TimelineCompression_t m_nCompressionType"
// MNetworkVarNames "bool m_bStopped"
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flValues[64]; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nValueCounts[64]; // 0x110	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210	
	// MNetworkEnable
	// MNetworkEnable
	float m_flInterval; // 0x214	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinalValue; // 0x218	
	// MNetworkEnable
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStopped; // 0x220	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc020
// Has VTable
class CDAC_NPC_History
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVectorFixedGrowable< CDAC_NPC_Incident > m_vecIncidents; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
class DACItemChoiceReward
{
public:
	int32_t m_nRewardID; // 0x0	
	CUtlVector< DACItemChoiceReward_Choice > m_vecChoices; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_nInteractsAs"
// MNetworkVarNames "uint64 m_nInteractsWith"
// MNetworkVarNames "uint64 m_nInteractsExclude"
// MNetworkVarNames "uint32 m_nEntityId"
// MNetworkVarNames "uint16 m_nHierarchyId"
// MNetworkVarNames "uint8 m_nCollisionGroup"
// MNetworkVarNames "uint8 m_nCollisionFunctionMask"
struct VPhysicsCollisionAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; // 0x8	
	// MNetworkEnable
	uint64_t m_nInteractsWith; // 0x10	
	// MNetworkEnable
	uint64_t m_nInteractsExclude; // 0x18	
	// MNetworkEnable
	uint32_t m_nEntityId; // 0x20	
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x24	
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x26	
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x27	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x40
// Has Trivial Destructor
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0	
	Vector worldAxisDirection; // 0xc	
	// -> flMinRotation - 0x18
	// -> flMaxRotation - 0x1c
	// -> flMotorTargetAngSpeed - 0x20
	// -> flMotorMaxTorque - 0x24
	constraint_axislimit_t hingeAxis; // 0x18	
	// -> strength - 0x28
	// -> forceLimit - 0x2c
	// -> torqueLimit - 0x30
	// -> bodyMassScale[2] - 0x34
	// -> isActive - 0x3c
	constraint_breakableparams_t constraint; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4	
	float m_maxInterval; // 0x8	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
class ConstraintSoundInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// -> m_prevSample - 0x8
	// -> m_fPrevSampleTime - 0x14
	// -> m_fIdealSampleRate - 0x18
	VelocitySampler m_vSampler; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// -> eKeypoints - 0x28
	// -> m_keyPoints[2] - 0x2c
	// -> m_reversalSoundThresholds[3] - 0x34
	SimpleConstraintSoundProfile m_soundProfile; // 0x20	
	Vector m_forwardAxis; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50	
	CUtlSymbolLarge m_iszTravelSoundBack; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68	
	bool m_bPlayTravelSound; // 0x80	
	bool m_bPlayReversalSound; // 0x81	
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszReversalSounds[0]; // 0x68
	// CUtlSymbolLarge m_iszReversalSounds[1]; // 0x70
	// CUtlSymbolLarge m_iszReversalSounds[2]; // 0x78
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x34
// Has Trivial Destructor
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0	
	MoveType_t m_MoveType; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	float m_flStartTime; // 0x8	
	Vector m_vecStartOrigin; // 0xc	
	Quaternion m_qStartRot; // 0x18	
	ParticleIndex_t m_nFXIndex; // 0x28	
	
	// Datamap fields:
	// void m_nSound; // 0x2c
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x70
// Has VTable
class CResponseQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x58]; // 0x0
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x58	
};

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x34
// Has Trivial Destructor
class CSound
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x0	
	CHandle< CBaseEntity > m_hTarget; // 0x4	
	int32_t m_iVolume; // 0x8	
	float m_flOcclusionScale; // 0xc	
	int32_t m_iType; // 0x10	
	int32_t m_iNextAudible; // 0x14	
	float m_flExpireTime; // 0x18	
	int16_t m_iNext; // 0x1c	
	bool m_bNoExpirationTime; // 0x1e	
private:
	[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
public:
	int32_t m_ownerChannelIndex; // 0x20	
	Vector m_vecOrigin; // 0x24	
	bool m_bHasOwner; // 0x30	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
class CDAC_GM_Streetfight : public CDAC_GM_Turbo
{
public:
	UnderlordID_t m_unUnderlord; // 0x98	
	PlayerSlot_t m_unPlayerSlot; // 0x99	
	PlayerSlot_t m_unBotSlot; // 0x9a	
private:
	[[maybe_unused]] uint8_t __pad009b[0x1]; // 0x9b
public:
	DACStreetfightID_t m_unStreetfightID; // 0x9c	
	uint32_t m_unPrestigeLevel; // 0xa0	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
class CRagdoll : public IRagdoll
{
public:
	// -> list - 0x8
	// -> boneIndex - 0x20
	// -> allowStretch - 0x38
	// -> unused - 0x39
	ragdoll_t m_ragdoll; // 0x8	
	Vector m_mins; // 0x40	
	Vector m_maxs; // 0x4c	
	Vector m_origin; // 0x58	
	float m_lastUpdate; // 0x64	
	bool m_allAsleep; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	Vector m_vecLastOrigin; // 0x6c	
	float m_flLastOriginChangeTime; // 0x78	
	float m_flAwakeTime; // 0x7c	
	
	// Static fields:
	static uint32_t &Get_s_globalCount(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// int32_t m_ragdoll.boneIndex[6]; // 0x20
	// void m_ragdoll.list; // 0x8
	// bool m_ragdoll.allowStretch; // 0x38
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has VTable
class CHintMessage
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	char* m_hintString; // 0x8	
	CUtlVector< char* > m_args; // 0x10	
	float m_duration; // 0x28	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
// MNetworkVarNames "Vector m_vecMins"
// MNetworkVarNames "Vector m_vecMaxs"
// MNetworkVarNames "uint8 m_usSolidFlags"
// MNetworkVarNames "SolidType_t m_nSolidType"
// MNetworkVarNames "uint8 m_triggerBloat"
// MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
// MNetworkVarNames "uint8 m_CollisionGroup"
// MNetworkVarNames "bool m_bHitboxEnabled"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
// MNetworkVarNames "Vector m_vCapsuleCenter1"
// MNetworkVarNames "Vector m_vCapsuleCenter2"
// MNetworkVarNames "float m_flCapsuleRadius"
class CCollisionProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	// -> m_nInteractsAs - 0x18
	// -> m_nInteractsWith - 0x20
	// -> m_nInteractsExclude - 0x28
	// -> m_nEntityId - 0x30
	// -> m_nHierarchyId - 0x34
	// -> m_nCollisionGroup - 0x36
	// -> m_nCollisionFunctionMask - 0x37
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0050[0x2]; // 0x50
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x52	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x53	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x55	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	uint8_t m_CollisionGroup; // 0x56	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x57	
	float m_flRadius; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x68	
	Vector m_vecSurroundingMaxs; // 0x74	
	Vector m_vecSurroundingMins; // 0x80	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x8c	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0x98	
	// MNetworkEnable
	// MNetworkEnable
	float m_flCapsuleRadius; // 0xa4	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CEconItemView m_Item; // 0x68	
};

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has Trivial Destructor
class CVRHandAttachmentInput
{
public:
	uint64_t m_nButtons; // 0x0	
	uint64_t m_afButtonPressed; // 0x8	
	uint64_t m_afButtonReleased; // 0x10	
	float m_flTriggerAnalogValue; // 0x18	
	float m_flGripAnalogValue; // 0x1c	
	float m_flFinger0; // 0x20	
	float m_flFinger1; // 0x24	
	float m_flFinger2; // 0x28	
	float m_flFinger3; // 0x2c	
	float m_flFinger4; // 0x30	
	float m_flTrackpadAnalogValueX; // 0x34	
	float m_flTrackpadAnalogValueY; // 0x38	
	float m_flJoystickAnalogValueX; // 0x3c	
	float m_flJoystickAnalogValueY; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x94]; // 0x44
public:
	CPropVRHand* m_pHand; // 0xd8	
};

// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	uint32_t m_fDataObjectTypes; // 0x38	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003e[0x12]; // 0x3e
public:
	CEntityIdentity* m_pPrev; // 0x50	
	CEntityIdentity* m_pNext; // 0x58	
	CEntityIdentity* m_pPrevByClass; // 0x60	
	CEntityIdentity* m_pNextByClass; // 0x68	
	V_uuid_t* m_pId; // 0x70	
	
	// Datamap fields:
	// void m_pAttributes; // 0x40
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
class CJiggleBones
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3f8
// Has VTable
class CLightInfoBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	Vector2D m_origin2D; // 0x10	
	Color m_Color[2]; // 0x18	
	float m_LightScale[2]; // 0x20	
	Color m_HeroColor[2]; // 0x28	
	float m_HeroLightScale[2]; // 0x30	
	Color m_AOGradientBottomColor[2]; // 0x38	
	bool m_bEnableRainFx; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	float m_flRainInnerRadius; // 0x44	
	float m_flRainOuterRadius; // 0x48	
	float m_flRainInnerAmount; // 0x4c	
	Color m_AmbientColor[2]; // 0x50	
	float m_AmbientScale[2]; // 0x58	
	Color m_ShadowColor[2]; // 0x60	
	Color m_ShadowSecondaryColor[2]; // 0x68	
	float m_ShadowScale[2]; // 0x70	
	float m_ShadowGroundScale[2]; // 0x78	
	Color m_SpecularColor[2]; // 0x80	
	float m_flSpecularPower[2]; // 0x88	
	float m_flSpecularIndependence[2]; // 0x90	
	Vector m_SpecularDirection[2]; // 0x98	
	Vector m_InspectorSpecularDirection[2]; // 0xb0	
	Vector m_LightDirection[2]; // 0xc8	
	Vector m_AmbientDirection[2]; // 0xe0	
	Color m_FogColor[2]; // 0xf8	
	float m_FogStart[2]; // 0x100	
	float m_FogEnd[2]; // 0x108	
	float m_HeightFogValue[2]; // 0x110	
	Color m_HeightFogColor[2]; // 0x118	
	float m_FoWDarkness[2]; // 0x120	
	float m_FoWColorR[2]; // 0x128	
	float m_FoWColorG[2]; // 0x130	
	float m_FoWColorB[2]; // 0x138	
	Color m_InspectorViewFogColor[2]; // 0x140	
	QAngle m_windAngle; // 0x148	
	float m_flWindAmount[2]; // 0x154	
	float m_flMinWind; // 0x15c	
	float m_flMaxWind; // 0x160	
	float m_flMinGust; // 0x164	
	float m_flMaxGust; // 0x168	
	float m_flMinGustDelay; // 0x16c	
	float m_flMaxGustDelay; // 0x170	
	float m_flGustDuration; // 0x174	
	float m_flGustDirChange; // 0x178	
	QAngle m_skyboxAngle[2]; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyboxMaterial[2]; // 0x198	
	Color m_vSkyboxTintColor[2]; // 0x1a8	
	uint8_t m_nSkyboxFogType; // 0x1b0	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x3]; // 0x1b1
public:
	float m_flSkyboxAngularFogMaxEnd; // 0x1b4	
	float m_flSkyboxAngularFogMaxStart; // 0x1b8	
	float m_flSkyboxAngularFogMinStart; // 0x1bc	
	float m_flSkyboxAngularFogMinEnd; // 0x1c0	
	Vector4D m_vAngularParams; // 0x1c4	
	Color m_vHeightFogColor[2]; // 0x1d4	
	float m_flFogMaxZ; // 0x1dc	
	float m_flFogDensity[2]; // 0x1e0	
	float m_flFogFalloff; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture0; // 0x1f0	
	float m_flFogLayer0Rotation; // 0x1f8	
	float m_flFogLayer0Scale; // 0x1fc	
	float m_flFoglayer0ScrollU[2]; // 0x200	
	float m_flFoglayer0ScrollV[2]; // 0x208	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture1; // 0x210	
	float m_flFogLayer1Rotation; // 0x218	
	float m_flFogLayer1Scale; // 0x21c	
	float m_flFoglayer1ScrollU[2]; // 0x220	
	float m_flFoglayer1ScrollV[2]; // 0x228	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTextureOpacity; // 0x230	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hWaterFlowMapTexture; // 0x238	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogFlowMapTexture; // 0x240	
	float m_flFogExclusionInnerRadius; // 0x248	
	float m_flFogExclusionHeightBias; // 0x24c	
private:
	[[maybe_unused]] uint8_t __pad0250[0x4]; // 0x250
public:
	float m_flCausticSpeedScale; // 0x254	
	float m_flCausticAmplitudeScale; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0x4]; // 0x25c
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hColorWarp; // 0x260	
	float m_flColorWarpBlendToFull; // 0x268	
	float m_fInnerRadius; // 0x26c	
	float m_fOuterRadius; // 0x270	
	float m_flLightning_specular_pow_scale_min; // 0x274	
	float m_flLightning_specular_pow_scale_max; // 0x278	
	Color m_lightningColor; // 0x27c	
	float m_flLightningIntensityMin; // 0x280	
	float m_flLightningIntensityMax; // 0x284	
	float m_flLightningElevation; // 0x288	
	float m_flLightningSpecularIntensity; // 0x28c	
	float m_flFarZOverride; // 0x290	
	float m_flAmbientShadowAmount; // 0x294	
	int32_t m_nWeatherType; // 0x298	
private:
	[[maybe_unused]] uint8_t __pad029c[0x4]; // 0x29c
public:
	CUtlString m_WeatherEffect; // 0x2a0	
	float m_flLightning_period_min; // 0x2a8	
	float m_flLightning_period_max; // 0x2ac	
	float m_flLightning_duration_min; // 0x2b0	
	float m_flLightning_duration_max; // 0x2b4	
	float m_flLightning_fluctuation_min; // 0x2b8	
	float m_flLightning_fluctuation_max; // 0x2bc	
	char m_pszLightningSound[260]; // 0x2c0	
	float m_flNextLightningStartTime; // 0x3c4	
	float m_flNextLightningEndTime; // 0x3c8	
	float m_flLightningFluctuationTimeStart; // 0x3cc	
	float m_flLightningFluctuationTimeEnd; // 0x3d0	
	float m_flLightningNumFluctuations; // 0x3d4	
	float m_flNextLightningSoundTime; // 0x3d8	
	bool m_bPlayLightingSound; // 0x3dc	
private:
	[[maybe_unused]] uint8_t __pad03dd[0x3]; // 0x3dd
public:
	float m_flLightningEventMagnitude; // 0x3e0	
	float m_flLightningScale; // 0x3e4	
	float m_flLightningFluctuation; // 0x3e8	
	float m_flLightningAngle; // 0x3ec	
	float m_flLightningEventPercentage; // 0x3f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
class C_CHintMessageQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_tmMessageEnd; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHintMessage* > m_messages; // 0x10	
	C_BasePlayer* m_pPlayer; // 0x28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "itemid_t m_iItemID"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "style_index_t m_nOverrideStyle"
// MNetworkVarNames "CAttributeList m_AttributeList"
class C_EconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31	
	bool m_bIsStoreItem; // 0x32	
	bool m_bIsTradeItem; // 0x33	
	bool m_bHasComputedAttachedParticles; // 0x34	
	bool m_bHasAttachedParticles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	int32_t m_iEntityQuantity; // 0x38	
	uint8_t m_unClientFlags; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	eEconItemOrigin m_unOverrideOrigin; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0xc]; // 0x44
public:
	char* m_pszGrayedOutReason; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	// -> m_Attributes - 0x60
	// -> m_pManager - 0xa8
	CAttributeList m_AttributeList; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CGlobalLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bSpotLight; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	Vector m_SpotLightOrigin; // 0x14	
	QAngle m_SpotLightAngles; // 0x20	
	Vector m_ShadowDirection; // 0x2c	
	Vector m_AmbientDirection; // 0x38	
	Vector m_SpecularDirection; // 0x44	
	Vector m_InspectorSpecularDirection; // 0x50	
	float m_flSpecularPower; // 0x5c	
	float m_flSpecularIndependence; // 0x60	
	Color m_SpecularColor; // 0x64	
	bool m_bStartDisabled; // 0x68	
	bool m_bEnabled; // 0x69	
	Color m_LightColor; // 0x6a	
	Color m_HeroLightColor; // 0x6e	
	Color m_AOGradientBottomColor; // 0x72	
	bool m_bEnableRainFx; // 0x76	
	Color m_AmbientColor1; // 0x77	
	Color m_AmbientColor2; // 0x7b	
	Color m_AmbientColor3; // 0x7f	
private:
	[[maybe_unused]] uint8_t __pad0083[0x1]; // 0x83
public:
	float m_flSunDistance; // 0x84	
	float m_flFOV; // 0x88	
	float m_flNearZ; // 0x8c	
	float m_flFarZ; // 0x90	
	bool m_bEnableShadows; // 0x94	
	bool m_bOldEnableShadows; // 0x95	
	bool m_bBackgroundClearNotRequired; // 0x96	
private:
	[[maybe_unused]] uint8_t __pad0097[0x1]; // 0x97
public:
	float m_flCloudScale; // 0x98	
	float m_flCloud1Speed; // 0x9c	
	float m_flCloud1Direction; // 0xa0	
	float m_flCloud2Speed; // 0xa4	
	float m_flCloud2Direction; // 0xa8	
	float m_flAmbientScale1; // 0xac	
	float m_flAmbientScale2; // 0xb0	
	float m_flGroundScale; // 0xb4	
	float m_flLightScale; // 0xb8	
	float m_flHeroLightScale; // 0xbc	
	float m_flRainInnerRadius; // 0xc0	
	float m_flRainOuterRadius; // 0xc4	
	float m_flRainInnerAmount; // 0xc8	
	float m_flFoWDarkness; // 0xcc	
	bool m_bEnableSeparateSkyboxFog; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	Vector m_vFowColor; // 0xd4	
	Vector m_ViewOrigin; // 0xe0	
	QAngle m_ViewAngles; // 0xec	
	float m_flViewFoV; // 0xf8	
	Vector m_WorldPoints[8]; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad015c[0x38c]; // 0x15c
public:
	Vector2D m_vFogOffsetLayer0; // 0x4e8	
	Vector2D m_vFogOffsetLayer1; // 0x4f0	
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4f8	
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4fc	
	float m_fSmoothedAmount; // 0x500	
	float m_fSlowSmoothedAmount; // 0x504	
	
	// Datamap fields:
	// float m_flAmbientShadowAmount; // 0x4e4
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nDistanceFadeMode: 1; 		
		uint8_t m_nReserved: 4; 		
		uint16_t __pad6: 9;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	float m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
class C_PlayerState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool deadflag; // 0x8	
	bool hltv; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	QAngle v_angle; // 0xc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float m_flIntensity"
// MNetworkVarNames "float m_flLightSize"
// MNetworkVarNames "float m_flSpotFoV"
// MNetworkVarNames "QAngle m_vLightDirection"
// MNetworkVarNames "float m_flStartFalloff"
// MNetworkVarNames "float m_flDistanceFalloff"
// MNetworkVarNames "uint m_nFlags"
// MNetworkVarNames "char m_ProjectedTextureName"
class CDeferredLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	Color m_LightColor; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightSize; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	float m_flSpotFoV; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_vLightDirection; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartFalloff; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDistanceFalloff; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nFlags; // 0x34	
	// MNetworkEnable
	// MNetworkEnable
	char m_ProjectedTextureName[260]; // 0x38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CViewAngleKeyFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	QAngle m_vecAngles; // 0x8	
	float m_flTime; // 0x14	
	int32_t m_iFlags; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
struct C_fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8	
	float m_flTransitionTime; // 0xc	
	Color m_OldColor; // 0x10	
	float m_flOldStart; // 0x14	
	float m_flOldEnd; // 0x18	
	float m_flOldMaxDensity; // 0x1c	
	float m_flOldHDRColorScale; // 0x20	
	float m_flOldFarZ; // 0x24	
	Color m_NewColor; // 0x28	
	float m_flNewStart; // 0x2c	
	float m_flNewEnd; // 0x30	
	float m_flNewMaxDensity; // 0x34	
	float m_flNewHDRColorScale; // 0x38	
	float m_flNewFarZ; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
class C_EconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x12]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsOn; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0xf]; // 0x9
public:
	bool m_bMuzzleFlashEnabled; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flMuzzleFlashBrightness; // 0x1c	
	Quaternion m_quatMuzzleFlashOrientation; // 0x20	
	Vector m_vecMuzzleFlashOrigin; // 0x30	
	float m_flDT; // 0x3c	
	float m_flFov; // 0x40	
	float m_flFarZ; // 0x44	
	float m_flLinearAtten; // 0x48	
	bool m_bCastsShadows; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flCurrentPullBackDist; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x58	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x60	
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x68	
	char m_textureName[64]; // 0x70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x238
// Has VTable
class C_CSequenceTransitioner2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8	
	float m_flCurrentPlaybackRate; // 0x48	
	float m_flCurrentAnimTime; // 0x4c	
	// -> m_op - 0x58
	// -> m_flStartAnimTime - 0x98
	// -> m_flStartWeight - 0x9c
	// -> m_flAnimTime - 0xa0
	// -> m_nOrder - 0xa4
	// -> m_flPlaybackRate - 0xa8
	// -> m_flFadeOutDuration - 0xac
	TransitioningLayer_t m_transitioningLayers[4]; // 0x50	
	C_BaseAnimatingController* m_pOwner; // 0x1d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x358
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x350	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CProjectedTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x28	
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44	
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48	
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	char m_SpotlightTextureName[260]; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x158	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x15c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x160	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x164	
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x168	
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x16c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x170	
	
	// Static fields:
	static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
class C_SingleplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
struct GCConsumedIDs_t
{
public:
	CUtlVector< item_definition_index_t > m_vecIDs; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CHeadlightEffect : public CFlashlightEffect
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x450
// Has VTable
// 
// MNetworkOverride "m_baseLayer.m_hSequence"
// MNetworkVarNames "CNetworkedSequenceOperation m_baseLayer"
// MNetworkVarNames "float m_flPoseParameter"
// MNetworkVarNames "bool m_bClientSideAnimation"
// MNetworkVarNames "int m_nNewSequenceParity"
// MNetworkVarNames "int m_nResetEventsParity"
class C_BaseAnimatingController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkDisable
	float m_flGroundSpeed; // 0x5c	
	// MNetworkDisable
	float m_flLastEventCycle; // 0x60	
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x64	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x68	
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x80	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float m_flPoseParameter[24]; // 0x84	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0xe4	
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0xe5	
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0xe6	
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0xe7	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0xec	
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0xf0	
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0xf4	
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0xf8	
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad0100[0x28]; // 0x100
public:
	// MNetworkDisable
	// -> m_currentOp - 0x130
	// -> m_flCurrentPlaybackRate - 0x170
	// -> m_flCurrentAnimTime - 0x174
	// -> m_transitioningLayers[4] - 0x178
	// -> m_pOwner - 0x2f8
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0360[0x40]; // 0x360
public:
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x3a0	
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x3a4	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x360
	// float m_flCachedSequenceCycleRate; // 0x118
	// float m_flCachedGroundSpeed; // 0x11c
	// float m_flCachedOneMinusLastVisibleCycle; // 0x120
	// bool m_bModelHasNoPoseParams; // 0x124
	// bool m_bNotifyWhenSequenceFinished; // 0x125
	// void m_iv_AnimOpHistory; // 0x3a8
	// void m_iv_flPoseParameter; // 0x3f8
	// bool useClientSideAnimation; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x60
// Has Trivial Destructor
class JiggleData
{
public:
	int32_t bone; // 0x0	
	int32_t id; // 0x4	
	float lastUpdate; // 0x8	
	Vector basePos; // 0xc	
	Vector baseLastPos; // 0x18	
	Vector baseVel; // 0x24	
	Vector baseAccel; // 0x30	
	Vector tipPos; // 0x3c	
	Vector tipVel; // 0x48	
	Vector tipAccel; // 0x54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4b8
// Has VTable
// 
// MNetworkVarNames "CAnimationLayer m_AnimOverlay"
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x450	
	
	// Datamap fields:
	// void m_iv_AnimOverlay; // 0x498
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MNetworkExcludeByUserGroup "FogController"
// MNetworkVarNames "uint8 m_chAreaBits"
// MNetworkVarNames "uint8 m_chAreaPortalBits"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "float32 m_flStepSize"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
// MNetworkVarNames "bool m_bDrawViewmodel"
// MNetworkVarNames "bool m_bWearingSuit"
// MNetworkVarNames "bool m_bPoisoned"
// MNetworkVarNames "bool m_bAllowAutoMovement"
// MNetworkVarNames "bool m_bSlowMovement"
// MNetworkVarNames "bool m_bAutoAimTarget"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
class C_PlayerLocalData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0xe]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaBits[32]; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaPortalBits[24]; // 0x38	
	int32_t m_nStepside; // 0x50	
	int32_t m_nOldButtons; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x60	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x64	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x68	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	float m_flFallVelocity; // 0x6c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags "2"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	float m_flStepSize; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0084[0xc]; // 0x84
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad009c[0xc]; // 0x9c
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0xa8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0xa9	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0xaa	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xab	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xac	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xad	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xae	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xaf	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b1[0x7]; // 0xb1
public:
	// MNetworkEnable
	// MNetworkEnable
	// -> scale - 0xc0
	// -> origin - 0xc4
	// -> bClip3DSkyBoxNearToWorldFar - 0xd0
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xd4
	// -> fog - 0xd8
	// -> m_nWorldGroupID - 0x138
	sky3dparams_t m_skybox3d; // 0xb8	
	// MNetworkEnable
	// MNetworkEnable
	// -> localSound[8] - 0x148
	// -> soundscapeIndex - 0x1a8
	// -> localBits - 0x1ac
	// -> soundscapeEntityListIndex - 0x1b0
	audioparams_t m_audio; // 0x140	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x4]; // 0x1d0
public:
	bool m_bInLanding; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	float m_flLandingTime; // 0x1d8	
	Vector m_vecClientBaseVelocity; // 0x1dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// -> m_vColor - 0x30
	// -> m_flHorzSize - 0x3c
	// -> m_flVertSize - 0x40
	// -> m_hMaterial - 0x48
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	int16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_CEnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class C_CEnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	float m_flVariationTime; // 0x70	
	float m_flSwayTime; // 0x74	
	float m_flSimTime; // 0x78	
	float m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x98
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x58]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0x90	
	
	// Datamap fields:
	// void m_decalEvent; // 0x38
	// void m_hProjectedDecal; // 0x20
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_flParameters"
struct PostProcessParameters_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flParameters[12]; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
class C_CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0	
	bool m_bIsInSimulation; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flSimOrRenderTime; // 0x1c	
	float m_flInterpolatedTime; // 0x20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_CEnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
class C_MultiplayRules : public C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x10]; // 0x8
public:
	// No schema binary for binding
};

