#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: resourcecompiler.dll
// Classes count: 5 (Allocated) | 133 (Unallocated)
// Enums count: 0 (Allocated) | 6 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class LayerType_t : uint32_t
{
	LAYER_TYPE_LEVELS = 0x0,
	LAYER_TYPE_VIBRANCE = 0x1,
	LAYER_TYPE_BRIGHTNESS_CONTRAST = 0x2,
	LAYER_TYPE_LUT = 0x3,
	LAYER_TYPE_COLOR_BALANCE = 0x4,
	LAYER_TYPE_COLOR_TINT = 0x5,
	LAYER_TYPE_HUE_SATURATION = 0x6,
	LAYER_TYPE_CURVES = 0x7,
	LAYER_TYPE_TONEMAPPING = 0x8,
	LAYER_TYPE_BLOOM = 0x9,
	LAYER_TYPE_VIGNETTE = 0xa,
	LAYER_TYPE_LOCAL_CONTRAST = 0xb,
	MAX_LAYER_TYPES = 0xc,
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SteamAudioHRTFInterpolationType_t : uint32_t
{
	// MPropertyFriendlyName "Nearest"
	SA_HRTFINTEROP_NEAREST = 0x0,
	// MPropertyFriendlyName "Bilinear"
	SA_HRTFINTEROP_BILINEAR = 0x1,
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class LayerMaskType_t : uint32_t
{
	LAYER_MASK_LUMINOSITY = 0x0,
	LAYER_MASK_COLOR_RANGE = 0x1,
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class NmGraphDocGraphType_t : uint32_t
{
	Invalid = 0x0,
	BlendTree = 0x1,
	ValueTree = 0x2,
	StateMachine = 0x4,
	StateData = 0x8,
	TransitionConduit = 0x10,
};

// Registered binary: resourcecompiler.dll (project 'pulsedoc_lib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PulsePortUserVisibility_t : uint32_t
{
	UNSPECIFIED = 0x0,
	SHOW = 0x1,
	HIDE = 0x2,
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SteamAudioOcclusionModeType_t : uint32_t
{
	// MPropertyFriendlyName "Off"
	SA_OCCLUSIONMODE_NONE = 0x0,
	// MPropertyFriendlyName "On, No Transmission"
	SA_OCCLUSIONMODE_NOTRANSMISSION = 0x1,
	// MPropertyFriendlyName "On, Frequency Independent Transmission"
	SA_OCCLUSIONMODE_FREQINDEPENDENT = 0x2,
	// MPropertyFriendlyName "On, Frequency Dependent Transmission"
	SA_OCCLUSIONMODE_FREQDEPENDENT = 0x3,
};

struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct PostProcessingLocalContrastParameters_t;
struct VMixFilterDesc_t;
struct CPreviewList;
struct PostProcessingTonemapParameters_t;
struct VMixShaperDesc_t;
struct PulseDocNodeID_t;
struct VMixOscDesc_t;
struct CNmGraphDocGraph;
struct CNmGraphDocFlowGraph;
struct CNmVariationHierarchy;
struct VMixUtilityDesc_t;
struct VMixDynamicsCompressorDesc_t;
struct PostProcessingVignetteParameters_t;
struct CLayerMask;
struct CSelectableSubgraph;
struct VMixConvolutionDesc_t;
struct VMixAutoFilterDesc_t;
struct PostProcessingBloomParameters_t;

// Registered binary: resourcecompiler.dll (project 'entity2')
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

// Registered binary: resourcecompiler.dll (project 'particleslib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
class CParticleBindingRealPulse : public CParticleCollectionBindingInstance
{
public:
};

// Registered binary: resourcecompiler.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("resourcecompiler.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("resourcecompiler.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: resourcecompiler.dll (project 'entity2')
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
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x16]; // 0x42
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: resourcecompiler.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
	bool m_bVisibleinPVS; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CMixPropertyBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyDescription "Node name"
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "1"
	CUtlString m_name; // 0x8	
	// MPropertyDescription "Description of how this is used  the graph for people reading the graph"
	// MPropertySortPriority "-2"
	CUtlString m_Comment; // 0x10	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bActive; // 0x18	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bSolo; // 0x19	
	// MPropertySortPriority "-1"
	// MPropertyHideField
	bool m_bEditProperties; // 0x1a	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CColorCorrectionLayer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	int32_t m_nOpacityPercent; // 0x10	
	bool m_bVisible; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	CLayerMask* m_pLayerMask; // 0x18	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	V_uuid_t m_ID; // 0x8	
	CUtlString m_name; // 0x18	
	// MPropertySuppressField
	Vector2D m_position; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertySuppressField
	CNmGraphDocGraph* m_pChildGraph; // 0x30	
	// MPropertySuppressField
	CNmGraphDocGraph* m_pSecondaryGraph; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Effect Name Node"
// MPropertyDescription "Define an effect name variable that can be controlled by code/operator stack and used to drive processor/effectchain/subgraphswitch nodes."
class CMixEffectName : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	// MPropertyAttributeChoiceName "dsp_preset"
	CUtlString m_defaultValue; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Remap Node"
// MPropertyDescription "Remap a control value using a clamped linear range or clamped power curve.  Allows you to stretch and clip a control signal."
class CMixControlRemap : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Input Min"
	float m_flInputMin; // 0x20	
	// MPropertyFriendlyName "Input Max"
	float m_flInputMax; // 0x24	
	// MPropertyFriendlyName "Output Start"
	float m_flOutputStart; // 0x28	
	// MPropertyFriendlyName "Output End"
	float m_flOutputEnd; // 0x2c	
	// MPropertyFriendlyName "Nonlinear power (1.0 = linear)"
	// MPropertyAttributeRange "biased 0.02 20"
	float m_flPower; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Panner Audio Node"
// MPropertyDescription "Adjust the stereo panning of an audio track."
class CMixPanner : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Type"
	VMixPannerType_t m_type; // 0x20	
	// MPropertyFriendlyName "Strength"
	// MPropertyAttributeRange "0 1"
	float m_flStrength; // 0x24	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Splitter Blend Audio Node"
// MPropertyDescription "Blends a single track to multiple outputs based on a single control input.  This works similarly to the blend node, but in reverse.  It will always be blending to a contiguous set of outputs.  The control value will move the signal along the list of outputs."
class CMixSplitterBlend : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Lock to output (0-1)"
	float m_flLockAmount; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Meter Node"
// MPropertyDescription "Allows you to monitor a control value in real-time in vmixtool."
class CMixControlMeter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_flValue; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Input Node"
// MPropertyDescription "Define a control variable that can be set by code or an operator stack."
class CMixControlInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
	// MPropertyFriendlyName "Preview Min Range"
	float m_flMinRange; // 0x24	
	// MPropertyFriendlyName "Preview Max Range"
	float m_flMaxRange; // 0x28	
	// MPropertyFriendlyName "Convert From dB"
	bool m_bUseDecibels; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocFlowGraphNode : public CNmGraphDocNode
{
public:
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t > m_inputPins; // 0x40	
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t > m_outputPins; // 0xc8	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CLocalContrastLayer : public CColorCorrectionLayer
{
public:
	PostProcessingLocalContrastParameters_t m_params; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Vocoder Audio Node"
// MPropertyDescription "Applies multi-band modulation to a carrier signal, based on the multi-band envelope of a modulator signal.  Modulation bands can be configured to a certain number of bands or range of frequencies."
class CMixVocoder : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Vocoder Band Count"
	int32_t m_nBandCount; // 0x20	
	// MPropertyFriendlyName "Bandwidth"
	// MPropertyAttributeRange "0.1 3.0"
	float m_flBandwidth; // 0x24	
	// MPropertyFriendlyName "dB gain for modulation signal"
	// MPropertyAttributeRange "-12 12"
	float m_fldBModGain; // 0x28	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x2c	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x30	
	// MPropertyFriendlyName "Frequency Start"
	// MPropertyAttributeRange "0 11025"
	float m_flFreqRangeStart; // 0x34	
	// MPropertyFriendlyName "Frequency End"
	// MPropertyAttributeRange "100 22050"
	float m_flFreqRangeEnd; // 0x38	
	// MPropertyFriendlyName "Gain of Unvoiced"
	// MPropertyAttributeRange "-12 12"
	float m_fldBUnvoicedGain; // 0x3c	
	int32_t m_nDebugBand; // 0x40	
	bool m_bPeakMode; // 0x44	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CNmVariationHierarchy
{
public:
	CUtlVector< NmVariation_t > m_variations; // 0x0	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocParameterBaseNode : public CNmGraphDocFlowGraphNode
{
public:
	CUtlString m_groupName; // 0xf0	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocParameterReferenceNode : public CNmGraphDocFlowGraphNode
{
private:
	[[maybe_unused]] uint8_t __pad00f0[0x8]; // 0xf0
public:
	V_uuid_t m_parameterUUID; // 0xf8	
	NmGraphValueType_t m_parameterValueType; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0109[0x7]; // 0x109
public:
	CUtlString m_parameterName; // 0x110	
	CUtlString m_parameterGroupName; // 0x118	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CSelectableSubgraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "File"
	// MPropertyAttributeEditor "AssetBrowse( vmix )"
	CUtlString file; // 0x8	
	// MPropertyFriendlyName "Name"
	// MPropertyAttributeChoiceName "graph_names"
	CUtlString subgraphName; // 0x10	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CBrightnessContrastColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nBrightness; // 0x28	
	int32_t m_nContrast; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix VSND Input Node"
// MPropertyDescription "Create a variable that can contain the name of a vsnd file that can be modified by code/operator stack.  This can be used to select the IR for a convolution node."
class CMixVsndName : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	// MPropertyAttributeEditor "AssetBrowse( vsnd )"
	CUtlString m_defaultValue; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Shoebox Reverb Node"
// MPropertyDescription "A simple reverb that approximates the reflections of a box-shaped room."
class CMixBoxverb : public CMixPropertyBase
{
public:
	// MPropertyDescription "The reverb can be parameterized either by a delay range (min/max delay in milliseconds) OR by a delay size for each dimension of a box (width/height/depth).<br>If you set width, height, or depth to anything other than zero, these min/max fields will not be used."
	// MPropertyFriendlyName "Max Size (milliseconds)"
	// MPropertyAttributeRange "0.0 1000.0"
	float m_flSizeMax; // 0x20	
	// MPropertyDescription "The reverb can be parameterized either by a delay range (min/max delay in milliseconds) OR by a delay size for each dimension of a box (width/height/depth).<br>If you set width, height, or depth to anything other than zero, these min/max fields will not be used."
	// MPropertyFriendlyName "Min Size (milliseconds)"
	// MPropertyAttributeRange "0.0 1000.0"
	float m_flSizeMin; // 0x24	
	// MPropertyDescription "The complexity is how many delays are spread along the total delay length.  Max is 12.  More delays will give your space more reflections (more geometric complexity)."
	// MPropertyFriendlyName "Complexity"
	// MPropertyAttributeRange "1.01 12.0"
	float m_flComplexity; // 0x28	
	// MPropertyDescription "This is a percentage of the delay length to modulate. 100 means you will modulate between 0 and the max delay.  10 means the delay will modulate between 90 and 100 percent of max delay."
	// MPropertyFriendlyName "Mod Depth (milliseconds)"
	// MPropertyAttributeRange "0.0 100"
	float m_flModDepth; // 0x2c	
	// MPropertyDescription "This is the rate at which the delay length changes.  1 means change the delay every delaytime milliseconds.  2 means change the delay after 2*delaytime milliseconds."
	// MPropertyFriendlyName "Mod Rate (# of delay intervals before mod)"
	// MPropertyAttributeRange "0.0 10.0"
	float m_flModRate; // 0x30	
	// MPropertyDescription "If true the filter is applied to the signal before output.  If false the filter is applied while feeding back into each delay line."
	// MPropertyFriendlyName "Parallalelize Filter"
	bool m_bParallel; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyDescription "Configure the filter to apply to the delay output.  Usually this should be a lowpass filter."
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	VMixFilterDesc_t m_filterType; // 0x38	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Width (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flWidth; // 0x48	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Height (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flHeight; // 0x4c	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Depth (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flDepth; // 0x50	
	// MPropertyDescription "How much of the signal to send to the delay lines.  How loud the reflections are."
	// MPropertyFriendlyName "Feedback Scale"
	// MPropertyAttributeRange "0 1"
	float m_flFeedbackScale; // 0x54	
	// MPropertyDescription "Additional amp on the width dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Width Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackWidth; // 0x58	
	// MPropertyDescription "Additional amp on the height dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Height Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackHeight; // 0x5c	
	// MPropertyDescription "Additional amp on the depth dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Depth  Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackDepth; // 0x60	
	// MPropertyDescription "Amplification at output in dB for tuning."
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-24.0 -0.1"
	float m_flOutputGain; // 0x64	
	// MPropertyDescription "If zero there are no extra taps.  If non-zero there will be 3 extra taps and this value will adjust their relative phase."
	// MPropertyFriendlyName "Extra Tap Scale"
	// MPropertyAttributeRange "0 0.333"
	float m_flTaps; // 0x68	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Diffusor Audio Node"
// MPropertyDescription "Creates a dense field of delay/feedback/reflections.  This is basically a sequence of allpass filters and short delay lines.  Can be used to create part of a reverb effect."
class CMixDiffusor : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Size"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flSize; // 0x20	
	// MPropertyFriendlyName "Complexity"
	// MPropertyAttributeRange "1.01 8.0"
	float m_flComplexity; // 0x24	
	// MPropertyFriendlyName "Feedback (dB)"
	// MPropertyAttributeRange "-24.0 -8.0"
	float m_flFeedback; // 0x28	
	// MPropertyFriendlyName "Output (dB)"
	// MPropertyAttributeRange "-24.0 -0.1"
	float m_flOutputGain; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCurvesColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	CUtlVector< Vector2D > m_curvePointsRGB; // 0x28	
	CUtlVector< Vector2D > m_curvePointsR; // 0x40	
	CUtlVector< Vector2D > m_curvePointsG; // 0x58	
	CUtlVector< Vector2D > m_curvePointsB; // 0x70	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocVirtualParameterNode : public CNmGraphDocParameterBaseNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocResultNode : public CNmGraphDocFlowGraphNode
{
public:
	NmGraphValueType_t m_resultType; // 0xf0	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Audio Meter Node"
// MPropertyDescription "This lets you meter an audio signal in vmixtool."
class CMixAudioMeter : public CMixPropertyBase
{
public:
	float m_flLeftLevel; // 0x20	
	float m_flLeftPeak; // 0x24	
	float m_flRightLevel; // 0x28	
	float m_flRightPeak; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocControlParameterNode : public CNmGraphDocParameterBaseNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	V_uuid_t m_ID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlVector< CNmGraphDocNode* > m_nodes; // 0x20	
	NmGraphDocGraphType_t m_graphType; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoolVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CColorLookupColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	CUtlString m_fileName; // 0x28	
	CUtlVector< float32 > m_lut; // 0x30	
	int32_t m_nDim; // 0x48	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Direct Node"
// MPropertyDescription "Applies steam audio model for direct audio.  This includes modeling the loss due to transmission in air, directivity and occlusion effects."
class CMixSteamAudioDirect : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Apply Distance Attenuation"
	bool m_bApplyDistanceAttenuation; // 0x20	
	// MPropertyFriendlyName "Apply Air Absorption"
	bool m_bApplyAirAbsorption; // 0x21	
	// MPropertyFriendlyName "Apply Directivity"
	bool m_bApplyDirectivity; // 0x22	
	// MPropertyFriendlyName "Apply Occlusion"
	bool m_bApplyOcclusion; // 0x23	
	// MPropertyFriendlyName "Apply Transmission"
	bool m_bApplyTransmission; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	// MPropertyFriendlyName "Dipole Weight"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDipoleWeight; // 0x28	
	// MPropertyFriendlyName "Dipole Power"
	// MPropertyAttributeRange "0.0 4.0"
	float m_flDipolePower; // 0x2c	
	// MPropertyFriendlyName "Occlusion Value"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flOcclusion; // 0x30	
	// MPropertyFriendlyName "Transmission Value (Low Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionLow; // 0x34	
	// MPropertyFriendlyName "Transmission Value (Mid Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionMid; // 0x38	
	// MPropertyFriendlyName "Transmission Value (High Freq)"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flTransmissionHigh; // 0x3c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Dynamics Audio Node"
// MPropertyDescription "A dynamics multiprocessor.  This is a single unit that switches between being a noise gate, compressor, or limiter as the signal moves through its dynamic range.  Useful in some specific cases, e.g. gate+compress or gate+limit usually.  Other cases may be more suited to using multiple compressors in series."
class CMixDynamics : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Noise Gate Threshold(dB)"
	float m_fldbNoiseGateThreshold; // 0x24	
	// MPropertyFriendlyName "Gain (dB)"
	float m_fldbGain; // 0x28	
	// MPropertyFriendlyName "Compression Threshold(dB)"
	float m_fldbCompressionThreshold; // 0x2c	
	// MPropertyFriendlyName "Limiter Threshold(dB)"
	float m_fldbLimiterThreshold; // 0x30	
	// MPropertyFriendlyName "Knee width (dB) 0 = hard knee"
	float m_fldbKneeWidth; // 0x34	
	// MPropertyFriendlyName "Compression Ratio"
	float m_flRatio; // 0x38	
	// MPropertyFriendlyName "Limiter Ratio"
	float m_flLimiterRatio; // 0x3c	
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x40	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x44	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTime; // 0x48	
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x4c	
	// MPropertyFriendlyName "Peak Mode"
	bool m_bPeakMode; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	int32_t m_nUIPage; // 0x54	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix EQ8 Audio Node"
// MPropertyDescription "Up to 8 bands of EQ.  Boost/cut up to 8 bands with adjustable Q.  Filters can also be configured as low/high pass or low/high shelf."
class CMixEQ8 : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "EQ Stages"
	CFilterStage m_stages[8]; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix 3 Band Dynamics Node"
// MPropertyDescription "This is a multi-band dynamics processor.  First the signal is split into low/mid/high bands, then each band is routed through two compressors providing upward and downward compression to each band.  Input & Output gain can also be adjusted."
class CMixDynamics3Band : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-18 18"
	float m_fldbOutputGain; // 0x24	
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTime; // 0x28	
	// MPropertyFriendlyName "Depth [0.0 - 1.0]"
	// MPropertyAttributeRange "0 1"
	float m_flDepth; // 0x2c	
	// MPropertyFriendlyName "Wet [0.0 - 1.0]"
	// MPropertyAttributeRange "0 1"
	float m_flWetMix; // 0x30	
	// MPropertyFriendlyName "Time Scale [0.0 - 10.0]"
	// MPropertyAttributeRange "0 10"
	float m_flTimeScale; // 0x34	
	// MPropertyFriendlyName "Knee width (dB) 0 = hard knee"
	float m_fldbKneeWidth; // 0x38	
	// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
	float m_flLowCutoffFreq; // 0x3c	
	// MPropertyFriendlyName "High Cutoff Freq (Hz)"
	float m_flHighCutoffFreq; // 0x40	
	// MPropertyFriendlyName "Peak Mode"
	bool m_bPeakMode; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyHideField
	int32_t m_nSelectedPage; // 0x48	
	VMixDynamicsBand_t m_bands[3]; // 0x4c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoneMaskResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Source Node"
// MPropertyDescription "Applies steam audio model for a 3d audio source.  This includes panning and HRTF (head-related transfer function)."
class CMixSteamAudioSource : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "HRTF Interpolation"
	SteamAudioHRTFInterpolationType_t m_nInterpolation; // 0x20	
	// MPropertyFriendlyName "Direct Mix Level"
	// MPropertyAttributeRange "0 1"
	float m_flDirectMixLevel; // 0x24	
	// MPropertyFriendlyName "Enable Perspective Correction"
	// MPropertyDescription "If checked, enables perspective correction for spatialized sound sources. When perspective correction is enabled, instead of spatializing sounds from their world - space position relative to the listener, sounds are spatialized from their on - screen position relative to the user. This can improve perceived localization accuracy in 3D non - VR applications."
	bool m_bEnablePerspectiveCorrection; // 0x28	
	// MPropertyFriendlyName "Relative Input Position"
	// MPropertyDescription "<b>Check</b> this if the input position is relative to the listener.<br /> <b>Don't check</b> this if the input position is aboslute world space coordinates."
	bool m_bRelativePosition; // 0x29	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CPreviewList
{
public:
	CUtlVector< CPreviewEntry > m_sounds; // 0x0	
	bool m_bPreviewInGame; // 0x18	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CToneMappingLayer : public CColorCorrectionLayer
{
public:
	PostProcessingTonemapParameters_t m_params; // 0x28	
	bool m_bUseLocalTonemapOperator; // 0x64	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Mix Amp"
// MPropertyDescription "Adjust the volume of an audio track."
class CMixAmp : public CMixPropertyBase
{
public:
	// MPropertyDescription "Default volume scale (0-1) if not automated by connecting the volume input."
	float m_flVolume; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateMachineGraphNode : public CNmGraphDocNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocVectorResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Pathing Node"
// MPropertyDescription "Applies steam audio model for pathing audio through space.  This pans the audio based on the openings that the audio is audible through by traversing a path through space from the source to the listener."
class CMixSteamAudioPathing : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Pathing Mix Level"
	// MPropertyAttributeRange "0 1"
	float m_flPathingMixLevel; // 0x20	
	// MPropertyFriendlyName "Pathing EQ"
	// MPropertyAttributeRange "0 1"
	float m_vPathingEQ[3]; // 0x24	
	// MPropertyFriendlyName "Pathing Coefficients"
	// MPropertyAttributeRange "-1 1"
	CUtlVector< float32 > m_vPathingCoeffs; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Filter Audio Node"
// MPropertyDescription "Resonant filter with adjustable slope. NOTE: This is a clean filter, not an analog model with distortion."
class CMixFilter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x20	
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x28	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x2c	
	// MPropertyFriendlyName "Q"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x30	
	// MPropertyFriendlyName "Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x34	
	// MPropertyFriendlyName "Filter slope"
	VMixFilterSlope_t m_nFilterSlope; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Subgraph Node"
// MPropertyDescription "Contains a refernce to a subroutine that is authored as a separate graph.  Used to collapse common functions into single blocks."
class CMixSubgraph : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "File"
	// MPropertyAttributeEditor "AssetBrowse( vmix )"
	CUtlString subgraphFile; // 0x20	
	// MPropertyFriendlyName "Name"
	// MPropertyAttributeChoiceName "graph_names"
	CUtlString subgraphName; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Shaper Audio Node"
// MPropertyDescription "Apply waveshaping distortion to an audio track."
class CMixShaper : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixShaperDesc_t m_desc; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Max Node"
// MPropertyDescription "Outputs the current max of up to six control inputs."
class CMixControlMax : public CMixPropertyBase
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CLevelsColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nInputBlackPointRGB; // 0x28	
	int32_t m_nInputBlackPointR; // 0x2c	
	int32_t m_nInputBlackPointG; // 0x30	
	int32_t m_nInputBlackPointB; // 0x34	
	int32_t m_nInputWhitePointRGB; // 0x38	
	int32_t m_nInputWhitePointR; // 0x3c	
	int32_t m_nInputWhitePointG; // 0x40	
	int32_t m_nInputWhitePointB; // 0x44	
	int32_t m_nOutputBlackPointRGB; // 0x48	
	int32_t m_nOutputBlackPointR; // 0x4c	
	int32_t m_nOutputBlackPointG; // 0x50	
	int32_t m_nOutputBlackPointB; // 0x54	
	int32_t m_nOutputWhitePointRGB; // 0x58	
	int32_t m_nOutputWhitePointR; // 0x5c	
	int32_t m_nOutputWhitePointG; // 0x60	
	int32_t m_nOutputWhitePointB; // 0x64	
	float m_flGammaRGB; // 0x68	
	float m_flGammaR; // 0x6c	
	float m_flGammaG; // 0x70	
	float m_flGammaB; // 0x74	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CPreviewEntry
{
public:
	CUtlString m_soundName; // 0x0	
	CUtlString m_trackName; // 0x8	
	bool m_bIsSoundEvent; // 0x10	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocPoseResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CLayerMask
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nLumMaskCenter; // 0x8	
	int32_t m_nLumMaskWidth; // 0xc	
	int32_t m_nLumMaskShape; // 0x10	
	bool m_bInverted; // 0x14	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Listener Node"
// MPropertyDescription "An automatic control input that gets a value from the listener of this mix (e.g. orientation values)."
class CMixControlListener : public CMixPropertyBase
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoolParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoneMaskParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	float m_previewStartValue; // 0xf8	
	float m_previewMin; // 0xfc	
	float m_previewMax; // 0x100	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Input Node"
// MPropertyDescription "Define a control variable that triggers a one-time event."
class CMixControlTransientInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CGraphPreviewList
{
public:
	float m_flVolume; // 0x0	
	// -> m_sounds - 0x8
	// -> m_bPreviewInGame - 0x20
	CPreviewList m_previewList; // 0x8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocCommentNode : public CNmGraphDocNode
{
public:
	Vector2D m_size; // 0x40	
	CUtlString m_comment; // 0x48	
	Color m_nodeColor; // 0x50	
	
	// Static fields:
	static Vector2D &Get_s_minSize(){return *reinterpret_cast<Vector2D*>(interfaces::g_schema->FindTypeScopeForModule("resourcecompiler.dll")->FindDeclaredClass("CNmGraphDocCommentNode")->m_static_fields[0]->m_instance);};
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Preset DSP Audio Node"
// MPropertyDescription "Applies an effects preset from the source1 DSP system."
class CMixPresetDSP : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Effect Preset Name"
	// MPropertyAttributeChoiceName "dsp_preset"
	CUtlString m_effectName; // 0x28	
	// MPropertyFriendlyName "Crossfade time (seconds)"
	float m_flXFade; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Automatic Control Node"
// MPropertyDescription "This will automatically forward a variable from the sound event that can be used to drive graph behavior."
class CMixControlAutomatic : public CMixPropertyBase
{
public:
};

// Registered binary: resourcecompiler.dll (project 'pulsedoc_lib')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct SetVarTarget_t
{
public:
	PulseDocNodeID_t nVarDefID; // 0x0	
	CUtlString strValueEncoded; // 0x8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocDataSlotNode : public CNmGraphDocFlowGraphNode
{
public:
	CResourceName m_defaultResourceName; // 0xf0	
	CUtlVector< CNmGraphDocDataSlotNode::OverrideValue_t > m_overrides; // 0x1d0	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Oscillator Audio Node"
// MPropertyDescription "Generates a tone as an audio track."
class CMixOsc : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixOscDesc_t m_desc; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Envelope Trigger Control Node"
// MPropertyDescription "Used to create reverb effects based on a model of a reverb plate."
class CMixEnvelopeTrigger : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Base Value"
	float m_flBaseValue; // 0x20	
	// MPropertyFriendlyName "Destination Value"
	float m_flDestinationValue; // 0x24	
	// MPropertyFriendlyName "Attack Time (seconds)"
	float m_flAttackTime; // 0x28	
	// MPropertyFriendlyName "Hold Time (seconds)"
	float m_flHoldTime; // 0x2c	
	// MPropertyFriendlyName "Release Time (seconds)"
	float m_flReleaseTime; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTransitionNode : public CNmGraphDocNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Output Node"
// MPropertyDescription "This is where your audio is output from the graph"
class CMixOutput : public CMixPropertyBase
{
public:
	// MPropertyDescription "Volume for audio.Input1.<br>Range is 0 - 1"
	float m_flVolume1; // 0x20	
	// MPropertyDescription "Volume for audio.Input2.<br>Range is 0 - 1"
	float m_flVolume2; // 0x24	
	// MPropertyDescription "Optional name of a send in your main mix graph.  When set this node's mix will be sent to the named track in your main mix graph.
Most voice graphs have a single output, that is routed by the sound operator stack.You should only use this for special cases where the vmix graph needs to route additional unique mixes to specific tracks.e.g.bypass HRTF andsend a different mix to the reverb send"
	// MPropertyFriendlyName "Send To Track"
	// MPropertyAttributeChoiceName "send_to_track"
	CUtlString m_sendTo; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocVectorVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CColorTintColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nTintColorR; // 0x28	
	int32_t m_nTintColorG; // 0x2c	
	int32_t m_nTintColorB; // 0x30	
	int32_t m_nStrength; // 0x34	
	bool m_bPreserveLuminosity; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Crossfade Control Node"
// MPropertyDescription "Generates two control signals from a single input that can be used to drive an equal power volume crossfade."
class CMixControlCrossfade : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Fade Start"
	float m_flFadeStart; // 0x20	
	// MPropertyFriendlyName "Fade End"
	float m_flFadeEnd; // 0x24	
};

// Registered binary: resourcecompiler.dll (project 'pulsedoc_lib')
// Alignment: 8
// Size: 0x348
// 
// MGetKV3ClassDefaults
class CPulseEditorSettings
{
public:
	Color m_colCanvasBackground; // 0x0	
	Color m_colCanvasBackgroundWhenDebugging; // 0x4	
	// MPropertyStartGroup "+Grid"
	float m_flGridSnap; // 0x8	
	bool m_bSnapAbsToGrid; // 0xc	
	bool m_bSnapSizeToGrid; // 0xd	
	bool m_bGridMinorPoints; // 0xe	
private:
	[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
public:
	float m_flGridMinorSpacing; // 0x10	
	float m_flSuppressMinorGridFurtherThan; // 0x14	
	Color m_colGridMinorColor; // 0x18	
	float m_flGridMinorWidth; // 0x1c	
	// MPropertyAttributeRange "1 25"
	int32_t m_nGridMajorMultiple; // 0x20	
	Color m_colGridMajorColor; // 0x24	
	float m_flGridMajorWidth; // 0x28	
	Color m_colGridOriginColor; // 0x2c	
	float m_flGridOriginWidth; // 0x30	
	// MPropertyStartGroup "+Ports"
	// MPropertyAttributeRange "0 32"
	float m_flFlowPortBorder; // 0x34	
	// MPropertyAttributeRange "0 32"
	float m_flFlowTooltipOffset; // 0x38	
	// MPropertyAttributeRange "0 32"
	float m_nFlowTooltipBoxMargin; // 0x3c	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontSequencePoint; // 0x40	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointRadius; // 0x48	
	// MPropertyAttributeRange "0 32"
	float m_flSequencePointLinkWidth; // 0x4c	
	// MPropertyColorPlusAlpha
	Color m_colSequencePointFadeOverlay; // 0x50	
	Color m_colSequencePointSpontaneous; // 0x54	
	Color m_colSequencePointYield; // 0x58	
	Color m_colSequencePoint; // 0x5c	
	Color m_colSequencePointLink; // 0x60	
	Color m_colSequencePointLinkYield; // 0x64	
	Color m_colSequencePointName; // 0x68	
	Color m_colFlowTooltipBorder; // 0x6c	
	Color m_colFlowTooltipBackground; // 0x70	
	Color m_colFlowTooltipForeground; // 0x74	
	Color m_colFlowPortLinked; // 0x78	
	Color m_colFlowPortUnlinked; // 0x7c	
	CUtlString m_ParamPortIconImg; // 0x80	
	CUtlString m_ParamPortBrokenImg; // 0x88	
	CUtlString m_SetValueIconImg; // 0x90	
	CUtlString m_GetValueIconImg; // 0x98	
	// MPropertyAttributeRange "0 32"
	float m_flParamPortIconSize; // 0xa0	
	// MPropertyAttributeRange "0 32"
	float m_flParamPortBGSize; // 0xa4	
	CUtlString m_ResultPortIconImg; // 0xa8	
	CUtlString m_ResultPortIconLeftImg; // 0xb0	
	// MPropertyAttributeRange "0 32"
	float m_flResultPortIconSize; // 0xb8	
	// MPropertyAttributeRange "0 32"
	float m_flPortBGCornerRadius; // 0xbc	
	// MPropertyGroupName "+X"
	Color m_colValuePortBG; // 0xc0	
	Color m_colValuePortBGHover; // 0xc4	
	Color m_colFlowPortBorder; // 0xc8	
	Color m_colFlowPortBorderHover; // 0xcc	
	Color m_colUnreachableFlowBorder; // 0xd0	
	float m_flUnreachableFlowBorderWidth; // 0xd4	
	Color m_colUnreachableFlowOverlay; // 0xd8	
	// MPropertyAttributeRange "-1 128"
	float m_flPortDragOffCreateThreshold; // 0xdc	
	// MPropertyStartGroup "+Types"
	Color m_colBool; // 0xe0	
	Color m_colNumber; // 0xe4	
	Color m_colString; // 0xe8	
	Color m_colOther; // 0xec	
	Color m_colCursorFlow; // 0xf0	
	// MPropertyStartGroup "+Comments"
	Color m_colComments; // 0xf4	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontNodeComment; // 0xf8	
	// MPropertyStartGroup "+Fonts"
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontFlowTooltip; // 0x100	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontLiteral; // 0x108	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontDomainName; // 0x110	
	Vector2D m_vDomainNameOffsetPX; // 0x118	
	Color m_colDomainName; // 0x120	
	Color m_colDomainNameWhenDebugging; // 0x124	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontParentAssets; // 0x128	
	Color m_colParentAssets; // 0x130	
	// MPropertyStartGroup "+Literals"
	// MPropertyAttributeRange "0 32"
	float m_flLiteralLabelSpacing; // 0x134	
	// MPropertyStartGroup "+Debugger"
	Color m_colDebuggerBrokenBorder; // 0x138	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenBorderWidth; // 0x13c	
	CUtlString m_DebuggerBrokenImg; // 0x140	
	CUtlString m_DebuggerBrokenOtherImg; // 0x148	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerOffset; // 0x150	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBrokenMarkerSize; // 0x154	
	CUtlString m_DebuggerBreakpointImg; // 0x158	
	CUtlString m_DebuggerBreakpointDisabledImg; // 0x160	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointOffset; // 0x168	
	// MPropertyAttributeRange "0 32"
	float m_flDebuggerBreakpointSize; // 0x16c	
	CUtlString m_YieldedCursorImg; // 0x170	
	CUtlString m_YieldedCursorOtherImg; // 0x178	
	CUtlString m_DeadCursorImg; // 0x180	
	// MPropertyAttributeRange "0 32"
	float m_flYieldedCursorOffset; // 0x188	
	// MPropertyAttributeRange "0 32"
	float m_flYieldedCursorStackOffset; // 0x18c	
	// MPropertyAttributeRange "0 64"
	float m_flYieldedCursorSize; // 0x190	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	CUtlString m_GraphInstanceImg; // 0x198	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecTimeoutSec; // 0x1a0	
	// MPropertyAttributeRange "0 32"
	float m_flRecentExecStartOffset; // 0x1a4	
	// MPropertyAttributeRange "0 64"
	float m_flRecentExecEndOffset; // 0x1a8	
	// MPropertyAttributeRange "0 8"
	float m_flRecentExecLineWidth; // 0x1ac	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecStartColor; // 0x1b0	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecEndColor; // 0x1b4	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailStartColor; // 0x1b8	
	// MPropertyColorPlusAlpha
	Color m_colRecentExecRequirementFailEndColor; // 0x1bc	
	bool m_bBreakOnExceptions; // 0x1c0	
	bool m_bShowExecutionHistory; // 0x1c1	
	bool m_bBoxSelectRequiresFullyContained; // 0x1c2	
private:
	[[maybe_unused]] uint8_t __pad01c3[0x1]; // 0x1c3
public:
	// MPropertyStartGroup "+Group Layout"
	float m_flFlowMinWidth; // 0x1c4	
	Color m_colHoverBorder; // 0x1c8	
	// MPropertyAttributeRange "0 32"
	float m_flHoverBorderWidth; // 0x1cc	
	Color m_colVarHighlightBorder; // 0x1d0	
	// MPropertyAttributeRange "0 32"
	float m_flVarHighlightWidth; // 0x1d4	
	Color m_colSelectedBorder; // 0x1d8	
	// MPropertyAttributeRange "0 32"
	float m_flSelectionOverlayWidth; // 0x1dc	
	// MPropertyAttributeRange "0 32"
	float m_flSelectedBorderWidth; // 0x1e0	
	Color m_colValueBorder; // 0x1e4	
	// MPropertyAttributeRange "0 32"
	float m_flHighPriorityOutflowArrowHalfWidth; // 0x1e8	
	// MPropertyAttributeRange "0 32"
	float m_flMediumPriorityOutflowArrowHalfWidth; // 0x1ec	
	// MPropertyAttributeRange "0 32"
	float m_flMediumPriorityOutflowArrowHeight; // 0x1f0	
	// MPropertyAttributeRange "0 64"
	float m_flAppendButtonSize; // 0x1f4	
	Color m_colAppendHover; // 0x1f8	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	CUtlString m_AppendImg; // 0x200	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowOffset; // 0x208	
	// MPropertyAttributeRange "0 32"
	float m_flMoveChildArrowSize; // 0x20c	
	CUtlString m_MoveChildArrowImg; // 0x210	
	Color m_colMoveChildArrow; // 0x218	
	// MPropertyStartGroup "+Steps"
	// MPropertyAttributeRange "0 32"
	float m_flStepCornerRadius; // 0x21c	
	// MPropertyAttributeRange "0 32"
	float m_flStepPadding; // 0x220	
	Color m_colStepBG_Input; // 0x224	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleWidth; // 0x228	
	Color m_colStepHandleBG; // 0x22c	
	Color m_colStepHandleHoverBG; // 0x230	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLineWidth; // 0x234	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLineMargin; // 0x238	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLine1X; // 0x23c	
	// MPropertyAttributeRange "0 32"
	float m_flStepHandleLine2X; // 0x240	
	Color m_colExitBG_Default; // 0x244	
	// MPropertyStartGroup "+Generic Nodes"
	// MPropertyAttributeRange "0 32"
	float m_flNodeIconSize; // 0x248	
	// MPropertyAttributeRange "0 32"
	float m_flNodeIconPadding; // 0x24c	
	// MPropertyAttributeRange "0 32"
	float m_flHeaderTextPadding; // 0x250	
	// MPropertyStartGroup "+Connections"
	// MPropertyAttributeRange "0 32"
	float m_flLinearConnectionOffset; // 0x254	
	// MPropertyAttributeRange "0 500"
	float m_flConnectionTangentStrength; // 0x258	
	// MPropertyAttributeRange "1 50"
	float m_flConnectionCurveSpacing; // 0x25c	
	// MPropertyAttributeRange "0 2"
	float m_flConnectionDeltaLimitScale; // 0x260	
	bool m_bLimitByDelta; // 0x264	
private:
	[[maybe_unused]] uint8_t __pad0265[0x3]; // 0x265
public:
	// MPropertyAttributeRange "0 32"
	float m_flBrokenConnectionOffset; // 0x268	
	// MPropertyAttributeRange "0 32"
	float m_flInparamConnectionWidth; // 0x26c	
	// MPropertyAttributeRange "0 32"
	float m_flOutflowConnectionWidth; // 0x270	
	Color m_colConnectionHover; // 0x274	
	Color m_colConnectionSelected; // 0x278	
	Color m_colConnectionBroken; // 0x27c	
	Color m_colInparamDefault; // 0x280	
	Color m_colOutflowDefault; // 0x284	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapInflowSize; // 0x288	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInflowOffset; // 0x28c	
	// MPropertyAttributeEditor "AssetBrowse( png )"
	CUtlString m_ConnectionCapInflowImg; // 0x290	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapInparamSize; // 0x298	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionInparamOffset; // 0x29c	
	CUtlString m_ConnectionCapInparamImg; // 0x2a0	
	// MPropertyAttributeRange "0 32"
	float m_flConnectionCapBrokenSize; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	CUtlString m_ConnectionCapBrokenImg; // 0x2b0	
	// MPropertyStartGroup "+Notes"
	Vector2D m_vecBlockCommentDefaultSize; // 0x2b8	
	Vector2D m_vecBlockCommentMinSize; // 0x2c0	
	Color m_colBlockCommentDefault; // 0x2c8	
	Color m_colBlockCommentTextLight; // 0x2cc	
	Color m_colBlockCommentTextDark; // 0x2d0	
	Color m_colBlockCommentHeaderOutline; // 0x2d4	
	float m_flBlockCommentHeaderRadius; // 0x2d8	
	float m_flBlockCommentOutlineRadius; // 0x2dc	
	float m_flBlockCommentRegionAlpha; // 0x2e0	
	float m_flBlockCommentResizeHorizontalWidth; // 0x2e4	
	float m_flBlockCommentHeaderTextPadding; // 0x2e8	
	bool m_bBlockCommentShowZoomBubbles; // 0x2ec	
	bool m_bBlockCommentZoomBubblesSortToTop; // 0x2ed	
private:
	[[maybe_unused]] uint8_t __pad02ee[0x2]; // 0x2ee
public:
	float m_flBlockCommentZoomBubbleMaxScale; // 0x2f0	
	bool m_bBlockCommentZoomBubbleBottomAlign; // 0x2f4	
private:
	[[maybe_unused]] uint8_t __pad02f5[0x3]; // 0x2f5
public:
	Vector2D m_vecBlockCommentZoomBubbleCanvasOffset; // 0x2f8	
	Vector2D m_vecBlockCommentZoomBubblePixelOffset; // 0x300	
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontBlockComment; // 0x308	
	// MPropertyStartGroup "+Timelines"
	float m_flTimelineSeekBarHeight; // 0x310	
	float m_flTimelinePauseIconSize; // 0x314	
	float m_flTimelineCallModeIconSize; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad031c[0x4]; // 0x31c
public:
	// MPropertyAttributeEditor "Font()"
	CUtlString m_FontTimelineTime; // 0x320	
	Color m_colTimelineLabel; // 0x328	
	Vector2D m_vecTimelineIconFromPort; // 0x32c	
	Vector2D m_vecTimelinePauseIconOffset; // 0x334	
	float m_flTimelineCursorHeight; // 0x33c	
	float m_flTimelineCursorTextHeight; // 0x340	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Track Node"
// MPropertyDescription "This node creates a track.Voices can be played on a track.  This is the source of audio for your graph."
class CMixTrack : public CMixPropertyBase
{
public:
	// MPropertyDescription "Leave this as "Automatic" unless you are forcing mono/stereo for some reason.  That way each graph will get configured to match the incoming vsnd (for a voice graph) or the audio device (main mix graph)"
	// MPropertyAttributeChoiceName "channel_count"
	int32_t m_nChannels; // 0x20	
	// MPropertyDescription "This determines what happens when your incoming audio doesn't match the channel count for the track.  e.g. for a mono track, this is the rule for what happens to stereo audio"
	// MPropertyFriendlyName "Mix Down Rule"
	// MPropertyAttributeChoiceName "mix_down_rule"
	int32_t m_nMixDownRule; // 0x24	
	// MPropertyFriendlyName "Send These Voices"
	// MPropertyAttributeChoiceName "send_operator"
	// MPropertyDescription "<b>Main Graph Only</b><br>This refers to a piece of code in the sound engine that will select specific voices to be mixed into this track and at what mix level each voice will be mixed.<br>If you want to drive that with data, choose "By Named Send" and author a list of send names for this track.  Then any sound event can send to one of those names and the audio will be mixed here."
	// MPropertyGroupName "MainGraph"
	CUtlString m_sendOperator; // 0x28	
	// MPropertyGroupName "MainGraph"
	// MPropertyFriendlyName "Send Name 1"
	CUtlString m_Send1; // 0x30	
	// MPropertyGroupName "MainGraph"
	// MPropertyFriendlyName "Send Name 2"
	CUtlString m_Send2; // 0x38	
	// MPropertyGroupName "MainGraph"
	// MPropertyFriendlyName "Send Name 3"
	CUtlString m_Send3; // 0x40	
	// MPropertyGroupName "MainGraph"
	// MPropertyFriendlyName "Send Name 4"
	CUtlString m_Send4; // 0x48	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class CHueSaturationColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nHueMaster; // 0x28	
	int32_t m_nHueRed; // 0x2c	
	int32_t m_nHueYellow; // 0x30	
	int32_t m_nHueGreen; // 0x34	
	int32_t m_nHueCyan; // 0x38	
	int32_t m_nHueBlue; // 0x3c	
	int32_t m_nHueMagenta; // 0x40	
	int32_t m_nSaturationMaster; // 0x44	
	int32_t m_nSaturationRed; // 0x48	
	int32_t m_nSaturationYellow; // 0x4c	
	int32_t m_nSaturationGreen; // 0x50	
	int32_t m_nSaturationCyan; // 0x54	
	int32_t m_nSaturationBlue; // 0x58	
	int32_t m_nSaturationMagenta; // 0x5c	
	int32_t m_nBrightnessMaster; // 0x60	
	int32_t m_nBrightnessRed; // 0x64	
	int32_t m_nBrightnessYellow; // 0x68	
	int32_t m_nBrightnessGreen; // 0x6c	
	int32_t m_nBrightnessCyan; // 0x70	
	int32_t m_nBrightnessBlue; // 0x74	
	int32_t m_nBrightnessMagenta; // 0x78	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CNmAnimGraphDocument
{
public:
	CNmGraphDocFlowGraph* m_pRootGraph; // 0x0	
	CNmVariationHierarchy m_variationHierarchy; // 0x8	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CEffectsPreviewList
{
public:
	CUtlString m_previewGraphInput; // 0x0	
	float m_flMix; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// -> m_sounds - 0x10
	// -> m_bPreviewInGame - 0x28
	CPreviewList m_previewList; // 0x10	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xe8
// 
// MGetKV3ClassDefaults
struct CNmGraphDocDataSlotNode__OverrideValue_t
{
public:
	CGlobalSymbol m_variationID; // 0x0	
	CResourceName m_resourceName; // 0x8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Utility Audio Node"
// MPropertyDescription "Adjust the stereo spread/pan/balance of a signal or convert it to mono or mid/side."
class CMixUtility : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixUtilityDesc_t m_desc; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Compressor/Limiter Node"
// MPropertyDescription "Compress the dynamic range of a signal when it is louder than some threshold."
class CMixDynamicsCompressor : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyAutoExpandSelf
	VMixDynamicsCompressorDesc_t m_desc; // 0x24	
	int32_t m_nUIPage; // 0x48	
	bool m_bIsLimiter; // 0x4c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Envelope Audio Node"
// MPropertyDescription "Generate a control signal that represents the envelope/level of an audio track.  Think of this as behaving like a meter but driving some graph logic."
class CMixEnvelope : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTime; // 0x20	
	// MPropertyFriendlyName "Hold time (ms)"
	float m_flHoldTime; // 0x24	
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTime; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	bool m_bIsSet; // 0xf8	
	bool m_bIsBoneID; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x2]; // 0xfa
public:
	QAngle m_targetOrientation; // 0xfc	
	Vector m_targetPosition; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CGlobalSymbol m_previewStartBoneID; // 0x118	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CVignetteLayer : public CColorCorrectionLayer
{
public:
	PostProcessingVignetteParameters_t m_params; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateMachineGraph : public CNmGraphDocGraph
{
public:
	V_uuid_t m_entryStateID; // 0x40	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Pitch Shift Audio Node"
// MPropertyDescription "Adjust the pitch of an audio track.  This happens in real-time so the timing of the track is unaffected.  Generally the time domain processor will produce better results for small shifts downward.  For shifting upward it will alias where the frequency space shifter will apply anti-aliasing."
class CMixPitchShift : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Pitch Scale"
	// MPropertyAttributeRange "0.2 4.0"
	float m_flPitchScale; // 0x24	
	// MPropertyFriendlyName "Grain Size (ms)"
	// MPropertyAttributeRange "1 100"
	float m_flGrainMs; // 0x28	
	// MPropertyFriendlyName "Type 0=time domain, 1 = freq domain"
	// MPropertyAttributeRange "0 1"
	int32_t m_nProcType; // 0x2c	
	// MPropertyFriendlyName "Quality level 1..4"
	// MPropertyAttributeRange "1 4"
	int32_t m_nQuality; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Blend Audio Node"
// MPropertyDescription "This node will do a pairwise blend through a set of audio signals.  It will blend through as many different signals as you connect.  A blend factor of 0.0 is 100% the first signal, and a blend factor of 1.0 is 100% the last signal."
class CMixBlendAudio : public CMixPropertyBase
{
public:
	// MPropertyDescription "Lock to inputs.  This makes each input "sticky" instead of smoothly varying between each source it will stick to one for some range of the parameter space."
	// MPropertyFriendlyName "Lock to input (0-1)"
	float m_flLockAmount; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Delay Audio Node"
// MPropertyDescription "Stereo delay with resonant filter on feedback."
class CMixDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyFriendlyName "Delay (ms)"
	// MPropertyGroupName "+Delay"
	// MPropertyAttributeRange "0 2000"
	float m_flDelay; // 0x24	
	// MPropertyFriendlyName "DirectGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-24 24"
	float m_fldbDirectGain; // 0x28	
	// MPropertyFriendlyName "DelayGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-24 24"
	float m_fldbDelayGain; // 0x2c	
	// MPropertyFriendlyName "FeedbackGain (dB)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "-60 12"
	float m_fldbFeedbackGain; // 0x30	
	// MPropertyFriendlyName "Width"
	// MPropertyAttributeRange "0 1.0"
	float m_flWidth; // 0x34	
	// MPropertyFriendlyName "EnableFilter"
	// MPropertyGroupName "+Filter"
	bool m_bEnableFilter; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x40	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x48	
	// MPropertyFriendlyName "Q"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x4c	
	// MPropertyFriendlyName "Filter Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x50	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Splitter Audio Node"
// MPropertyDescription "Create multiple copies of a track at different volumes for processing or mixing separately."
class CMixSplitter : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Volume1"
	float m_flVolume1; // 0x20	
	// MPropertyFriendlyName "Volume2"
	float m_flVolume2; // 0x24	
	// MPropertyFriendlyName "Volume3"
	float m_flVolume3; // 0x28	
	// MPropertyFriendlyName "Volume4"
	float m_flVolume4; // 0x2c	
	// MPropertyFriendlyName "Volume5"
	float m_flVolume5; // 0x30	
	// MPropertyFriendlyName "Volume6"
	float m_flVolume6; // 0x34	
	// MPropertyFriendlyName "Volume7"
	float m_flVolume7; // 0x38	
	// MPropertyFriendlyName "Volume8"
	float m_flVolume8; // 0x3c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoolControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	bool m_previewStartValue; // 0xf8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocVectorControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	Vector m_previewStartValue; // 0xf8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocVectorParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CVibranceColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nVibrance; // 0x28	
	int32_t m_nSaturation; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoneMaskVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateNode : public CNmGraphDocStateMachineGraphNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Array Input Node"
// MPropertyDescription "Define a control array variable that can be set by code or an operator stack.  This can be used to control steamaudio pathing or steamaudio reverb for example."
class CMixControlInputArray : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Input Data"
	// MPropertyAttributeRange "-1 1"
	CUtlVector< float32 > m_vflData; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 4
// Size: 0x50
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CNmGraphDocFlowGraph__Connection_t
{
public:
	V_uuid_t m_ID; // 0x0	
	V_uuid_t m_outputNodeID; // 0x10	
	V_uuid_t m_outputPinID; // 0x20	
	V_uuid_t m_inputNodeID; // 0x30	
	V_uuid_t m_inputPinID; // 0x40	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Modulating Delay Audio Node"
// MPropertyDescription "A delay with a modulated delay time."
class CMixModDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Invert Phase"
	bool m_bPhaseInvert; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// MPropertyFriendlyName "Glide Time (ms)"
	// MPropertyAttributeRange "0 2000"
	float m_flGlideTime; // 0x24	
	// MPropertyFriendlyName "Delay Time (ms)"
	// MPropertyGroupName "Delay"
	// MPropertyAttributeRange "10 2000"
	float m_flDelay; // 0x28	
	// MPropertyFriendlyName "Feedback Gain (dB)"
	// MPropertyAttributeRange "-24 -0.6"
	float m_flFeedback; // 0x2c	
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flGain; // 0x30	
	// MPropertyFriendlyName "Modulation Rate (Hz)"
	// MPropertyAttributeRange "0 20"
	float m_flModRate; // 0x34	
	// MPropertyFriendlyName "Modulation Depth (linear)"
	// MPropertyAttributeRange "0 1.0"
	float m_flModDepth; // 0x38	
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	VMixFilterType_t m_filterType; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003e[0x2]; // 0x3e
public:
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x40	
	// MPropertyFriendlyName "Q"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0x44	
	// MPropertyFriendlyName "Filter Gain (dB)"
	// MPropertyGroupName "Filter"
	// MPropertyAttributeRange "-24 24"
	float m_flFilterGain; // 0x48	
	// MPropertyFriendlyName "Apply Antialiasing"
	bool m_bAntialiasing; // 0x4c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Group Box"
// MPropertyDescription "Groups a set of nodes.  Comments/colors will get displayed in the graph and on node editors.  A group box allows the user to drag the entire group as one object."
class CMixGroupBox : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Background Color"
	Color m_color; // 0x20	
	// MPropertyFriendlyName "Move contained nodes"
	bool m_bMovesNodes; // 0x24	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CPostProcessData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CColorCorrectionLayer* > m_layers; // 0x8	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Subgraph Switch Audio Node"
// MPropertyDescription "Allows you to swap between sub-graphs with a short crossfade.  Can be used to swap out processing algorithms/configurations, or to dynamically enable/disable optional processing stages.  This can also expose control parameters from the subgraphs so those can be connected to the outer graph."
class CMixSubgraphSwitch : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Show Detailed Plug Names"
	bool bUseDetailedPlugNames; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
public:
	// MPropertyFriendlyName "Default Subgraph"
	// -> file - 0x30
	// -> subgraphName - 0x38
	CSelectableSubgraph defaultSubgraph; // 0x28	
	// MPropertyFriendlyName "Mode"
	// MPropertyGroupName "+Transition Behavior"
	VMixSubgraphSwitchInterpolationType_t interpolationMode; // 0x40	
	// MPropertyFriendlyName "Only Let Effect Ring On Fadeout"
	// MPropertyGroupName "Transition Behavior"
	bool bOnlyTailsOnFadeOut; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MPropertyFriendlyName "Transition time (seconds)"
	// MPropertyGroupName "Transition Behavior"
	float flTransitionTime; // 0x48	
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t nChannels; // 0x4c	
	CUtlVector< CSelectableSubgraph > subgraphs; // 0x50	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Audio Convolution Node"
// MPropertyDescription "Apply a vsnd as an impulse response (IR) to an audio signal via convolution."
class CMixConvolution : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixConvolutionDesc_t m_desc; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Freeverb Audio Node"
// MPropertyDescription "Used to create reverb effects based on a symmetrical room."
class CMixFreeverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Size"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flRoomSize; // 0x20	
	// MPropertyFriendlyName "Dampening Factor"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDamp; // 0x24	
	// MPropertyFriendlyName "Width"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flWidth; // 0x28	
	// MPropertyFriendlyName "Late Reflections"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flLateReflections; // 0x2c	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocClipNode : public CNmGraphDocDataSlotNode
{
public:
	bool m_bSampleRootMotion; // 0x1e8	
	bool m_bAllowLooping; // 0x1e9	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDVirtualParameterNode : public CNmGraphDocVirtualParameterNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CFilterStage
{
public:
	// MPropertyFriendlyName "Filter Type"
	// MPropertyAttributeChoiceName "filter_type"
	CUtlString m_filterType; // 0x0	
	// MPropertyFriendlyName "Center Frequency (Hz)"
	// MPropertyAttributeRange "biased 20 22000"
	float m_flFrequency; // 0x8	
	// MPropertyFriendlyName "Q"
	// MPropertyAttributeRange "0.1 12"
	float m_flQ; // 0xc	
	// MPropertyFriendlyName "Gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbGain; // 0x10	
	// MPropertyFriendlyName "Slope"
	VMixFilterSlope_t m_nFilterSlope; // 0x14	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnable; // 0x15	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Output Node"
// MPropertyDescription "Save the results of a control value (e.g. envelope level) so that code/stack can query it by name."
class CMixControlOutput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct NmGraphDocPin_t
{
public:
	V_uuid_t m_ID; // 0x0	
	CUtlString m_name; // 0x10	
	NmGraphValueType_t m_type; // 0x18	
	bool m_bIsDynamicPin; // 0x19	
	bool m_bAllowMultipleOutConnections; // 0x1a	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Blend VSnds to Impulse Response Node"
// MPropertyDescription "Blends up to 8 vsnds to an impulse response."
class CMixBlendVsndsToImpulseResponse : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Weight:0"
	float m_flWeight0; // 0x20	
	// MPropertyFriendlyName "Weight:1"
	float m_flWeight1; // 0x24	
	// MPropertyFriendlyName "Weight:2"
	float m_flWeight2; // 0x28	
	// MPropertyFriendlyName "Weight:3"
	float m_flWeight3; // 0x2c	
	// MPropertyFriendlyName "Weight:4"
	float m_flWeight4; // 0x30	
	// MPropertyFriendlyName "Weight:5"
	float m_flWeight5; // 0x34	
	// MPropertyFriendlyName "Weight:6"
	float m_flWeight6; // 0x38	
	// MPropertyFriendlyName "Weight:7"
	float m_flWeight7; // 0x3c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Remap VSnd to Impulse Response Node"
// MPropertyDescription "Remaps a vsnd to an impulse response."
class CMixRemapVsndToImpulseResponse : public CMixPropertyBase
{
public:
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDParameterReferenceNode : public CNmGraphDocParameterReferenceNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Impulse Response Node"
// MPropertyDescription "Define a control input that outputs a dynamic impulse response, which can be used by the Steam Audio hybrid reverb processor."
class CMixImpulseResponseInput : public CMixPropertyBase
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Stereo Delay Audio Node"
// MPropertyDescription "A simple delay with separate left & right delay times."
class CMixStereoDelay : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Left Channel Delay (in seconds)"
	// MPropertyAttributeRange "0 100"
	float m_flDelayLeft; // 0x20	
	// MPropertyFriendlyName "Right Channel Delay (in seconds)"
	// MPropertyAttributeRange "0 100"
	float m_flDelayRight; // 0x24	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	CGlobalSymbol m_previewStartValue; // 0xf8	
	CUtlVector< CGlobalSymbol > m_expectedValues; // 0x100	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Effect Chain Audio Node"
// MPropertyDescription "Allows you to swap between sub-graphs with a short crossfade.  Can be used to swap out processing algorithms/configurations, or to dynamically enable/disable optional processing stages."
class CMixEffectChain : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	// MPropertyFriendlyName "Effect Preset Name"
	CUtlString m_effectName; // 0x28	
	// MPropertyFriendlyName "Crossfade time (seconds)"
	float m_flXFade; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CColorBalanceColorCorrectionLayer : public CColorCorrectionLayer
{
public:
	int32_t m_nRedCyanBalS; // 0x28	
	int32_t m_nRedCyanBalM; // 0x2c	
	int32_t m_nRedCyanBalH; // 0x30	
	int32_t m_nGreenMagentaBalS; // 0x34	
	int32_t m_nGreenMagentaBalM; // 0x38	
	int32_t m_nGreenMagentaBalH; // 0x3c	
	int32_t m_nBlueYellowBalS; // 0x40	
	int32_t m_nBlueYellowBalM; // 0x44	
	int32_t m_nBlueYellowBalH; // 0x48	
	bool m_bPreserveLuminosity; // 0x4c	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Auto Filter Node"
// MPropertyDescription "A continuously variable filter that can be driven by a built-in envelope follower and/or LFO.  Stereo channels can be processed differently by adjusting the phase parameter."
class CMixAutoFilter : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixAutoFilterDesc_t m_desc; // 0x20	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Curve Node"
// MPropertyDescription "Remap a control variable through a curve that you define."
class CMixControlCurve : public CMixPropertyBase
{
public:
	float m_flInputMin; // 0x20	
	float m_flInputMax; // 0x24	
	float m_flOutputMin; // 0x28	
	float m_flOutputMax; // 0x2c	
	// MPropertySuppressField
	CPiecewiseCurve m_curve; // 0x30	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Steam Audio Hybrid Reverb Node"
// MPropertyDescription "Applies Steam Audio Hybrid Reverb."
class CMixSteamAudioHybridReverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Reverb Time (RT60), Low Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeLow; // 0x20	
	// MPropertyFriendlyName "Reverb Time (RT60), Mid Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeMid; // 0x24	
	// MPropertyFriendlyName "Reverb Time (RT60), High Frequency"
	// MPropertyAttributeRange "0.1 10.0"
	float m_flReverbTimeHigh; // 0x28	
	// MPropertyFriendlyName "EQ, Low Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQLow; // 0x2c	
	// MPropertyFriendlyName "EQ, Mid Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQMid; // 0x30	
	// MPropertyFriendlyName "EQ, High Frequency (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_flEQHigh; // 0x34	
	// MPropertyFriendlyName "Delay (seconds)"
	// MPropertyAttributeRange "0.0 5.0"
	float m_flDelay; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Plateverb Audio Node"
// MPropertyDescription "Used to create reverb effects based on a model of a reverb plate."
class CMixPlateverb : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Prefilter"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flPrefilter; // 0x20	
	// MPropertyFriendlyName "Input Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flInputDiffusion1; // 0x24	
	// MPropertyFriendlyName "Input Diffusion 2"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flInputDiffusion2; // 0x28	
	// MPropertyFriendlyName "Decay"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDecay; // 0x2c	
	// MPropertyFriendlyName "Dampening Factor"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flDamp; // 0x30	
	// MPropertyFriendlyName "Feedback Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flFeedbackDiffusion1; // 0x34	
	// MPropertyFriendlyName "Feedback Diffusion 1"
	// MPropertyAttributeRange "0.0 1.0"
	float m_flFeedbackDiffusion2; // 0x38	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf0
// 
// MGetKV3ClassDefaults
struct NmVariation_t
{
public:
	CGlobalSymbol m_ID; // 0x0	
	CGlobalSymbol m_parentID; // 0x8	
	CResourceName m_skeleton; // 0x10	
	
	// Static fields:
	static CGlobalSymbol &Get_s_defaultVariationID(){return *reinterpret_cast<CGlobalSymbol*>(interfaces::g_schema->FindTypeScopeForModule("resourcecompiler.dll")->FindDeclaredClass("NmVariation_t")->m_static_fields[0]->m_instance);};
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Mixer Audio Node"
// MPropertyDescription "Mixes audio tracks together into a single track.  Mix levels can be automated."
class CMixSum : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Volume:1"
	float m_flVolume1; // 0x20	
	// MPropertyFriendlyName "Volume:2"
	float m_flVolume2; // 0x24	
	// MPropertyFriendlyName "Volume:3"
	float m_flVolume3; // 0x28	
	// MPropertyFriendlyName "Volume:4"
	float m_flVolume4; // 0x2c	
	// MPropertyFriendlyName "Volume:5"
	float m_flVolume5; // 0x30	
	// MPropertyFriendlyName "Volume:6"
	float m_flVolume6; // 0x34	
	// MPropertyFriendlyName "Volume:7"
	float m_flVolume7; // 0x38	
	// MPropertyFriendlyName "Volume:8"
	float m_flVolume8; // 0x3c	
	// MPropertyFriendlyName "Channel Name"
	CUtlString m_channelName[8]; // 0x40	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFlowGraph : public CNmGraphDocGraph
{
public:
	CUtlVector< CNmGraphDocFlowGraph::Connection_t > m_connections; // 0x40	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoolResultNode : public CNmGraphDocResultNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Stack Input Node"
// MPropertyDescription "This will copy a control value from this soundevent's operator stack.  Works with any stack/variable without modifying the stack itself."
class CMixControlStackInput : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_flDefaultValue; // 0x20	
	// MPropertyFriendlyName "Preview Min Range"
	float m_flMinRange; // 0x24	
	// MPropertyFriendlyName "Preview Max Range"
	float m_flMaxRange; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateMachineNode : public CNmGraphDocNode
{
public:
};

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
class CBloomLayer : public CColorCorrectionLayer
{
public:
	PostProcessingBloomParameters_t m_params; // 0x28	
};

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTransitionConduit : public CNmGraphDocStateMachineGraphNode
{
public:
	float m_flTransitionProgress; // 0x40	
	V_uuid_t m_startStateID; // 0x44	
	V_uuid_t m_endStateID; // 0x54	
};

