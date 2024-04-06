#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: particles.dll
// Classes count: 379
// Enums count: 32
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

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

struct ParticlePreviewState_t;
struct CParticleCollectionFloatInput;
struct CParticleVisibilityInputs;
struct CParticleCollectionVecInput;
struct CPiecewiseCurveSchemaWrapper;
struct CParticleFloatInput;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct CPathParameters;
struct CPerParticleFloatInput;
struct CPerParticleVecInput;
struct ControlPointReference_t;

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
// Alignment: 8
// Size: 0x10
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0	
	int32_t m_nValue; // 0x8	
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
class CParticleFunctionForce : public CParticleFunction
{
public:
	// No schema binary for binding
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
// Alignment: 8
// Size: 0x140
// Has VTable
// Is Abstract
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// No schema binary for binding
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
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// No schema binary for binding
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
		uint256_t __pad0: 180;
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
// Alignment: 16
// Size: 0x140
// Has VTable
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
	// No schema binary for binding
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
// Size: 0x170
// Has VTable
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
	// No schema binary for binding
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
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
	// No schema binary for binding
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
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No schema binary for binding
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
// Size: 0x190
// Has VTable
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
	// No schema binary for binding
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
// Size: 0x170
// Has VTable
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
	// No schema binary for binding
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
// Size: 0x190
// Has VTable
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
	// No schema binary for binding
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
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vForce; // 0x140	
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
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	// MDefaultString
	bool m_bRopeDecay; // 0x140	
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
// Size: 0x140
// Has VTable
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
	// No schema binary for binding
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
class C_OP_Spin : public CGeneralSpin
{
public:
	// No schema binary for binding
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
// Size: 0x160
// Has VTable
class C_OP_SpinYaw : public CGeneralSpin
{
public:
	// No schema binary for binding
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
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0x140	
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
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No schema binary for binding
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
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
	// No schema binary for binding
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
// Size: 0x1a0
// Has VTable
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No schema binary for binding
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
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
	// No schema binary for binding
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
// Size: 0x190
// Has VTable
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
	// No schema binary for binding
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
// Size: 0x9d0
// Has VTable
class C_OP_RenderFogSprites : public C_OP_RenderSprites
{
public:
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x9c0	
};

