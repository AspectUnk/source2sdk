#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: assetrename.dll
// Classes count: 4 (Allocated) | 154 (Unallocated)
// Enums count: 0 (Allocated) | 12 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class Comparison_t : uint32_t
{
	COMPARISON_EQUALS = 0x0,
	COMPARISON_NOT_EQUALS = 0x1,
	COMPARISON_GREATER = 0x2,
	COMPARISON_GREATER_OR_EQUAL = 0x3,
	COMPARISON_LESS = 0x4,
	COMPARISON_LESS_OR_EQUAL = 0x5,
	COMPARISON_COUNT = 0x6,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 2
// Alignment: 1
// Size: 0x1
enum class ComparisonValueType : uint8_t
{
	COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
	COMPARISONVALUETYPE_PARAMETER = 0x1,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class DampedValueType : uint32_t
{
	// MPropertyFriendlyName "Float"
	FloatParameter = 0x0,
	// MPropertyFriendlyName "Vector"
	VectorParameter = 0x1,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class StateValue : uint32_t
{
	// MPropertyFriendlyName "Total Translation (Source State)"
	TotalTranslation_SourceState = 0x0,
	// MPropertyFriendlyName "Total Translation (Target State)"
	TotalTranslation_TargetState = 0x1,
	// MPropertyFriendlyName "Source State Blend Weight"
	SourceStateBlendWeight = 0x2,
	// MPropertyFriendlyName "Target State Blend Weight"
	TargetStateBlendWeight = 0x3,
	Count = 0x4,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EAnimConflictIndex_t : uint32_t
{
	EAC_FIRST = 0x0,
	EAC_SECOND = 0x1,
	EAC_COUNT = 0x2,
	EAC_NONE = 0x2,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimConflictType_t : uint32_t
{
	NONE = 0x0,
	ID = 0x1,
	NAME = 0x2,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class StateComparisonValueType : uint32_t
{
	StateComparisonValue_FixedValue = 0x0,
	StateComparisonValue_StateValue = 0x1,
	StateComparisonValue_Parameter = 0x2,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class EAnimValueSource : uint32_t
{
	Constant = 0x0,
	Parameter = 0x1,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SingleFrameSelection : uint32_t
{
	// MPropertyFriendlyName "First Frame"
	FirstFrame = 0x0,
	// MPropertyFriendlyName "Last Frame"
	LastFrame = 0x1,
	// MPropertyFriendlyName "Specific Frame"
	SpecificFrame = 0x2,
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SelectionSource_t : uint32_t
{
	// MPropertyFriendlyName "Bool"
	SelectionSource_Bool = 0x0,
	// MPropertyFriendlyName "Enum"
	SelectionSource_Enum = 0x1,
	// MPropertyFriendlyName "Tag"
	SelectionSource_Tag = 0x2,
};

struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct CAnimGraphDoc_NodeConnection;
struct CAnimInputDamping;
struct AnimTagID;
struct AnimParamID;
struct AnimNodeID;
struct CAnimGraphDoc_MotionParameterManager;
struct IKTargetSettings_t;
struct CAnimGraphDoc_ConditionContainer;
struct AnimStateID;
struct CAnimDemoCaptureSettings;
struct CAnimGraphDoc_NodeManager;
struct CAnimGraphDoc_ClipDataManager;
struct CBlendCurve;
struct CAnimGraphDoc_MotionNodeManager;
struct AnimNodeOutputID;
struct CFloatAnimValue;
struct AnimComponentID;
struct CAnimGraphDoc_ComponentManager;
struct IKSolverSettings_t;

// Registered binary: assetrename.dll (project 'entity2')
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

// Registered binary: assetrename.dll (project 'entity2')
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
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("assetrename.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("assetrename.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: assetrename.dll (project 'entity2')
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

// Registered binary: assetrename.dll (project 'entity2')
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20	
	// MPropertyGroupName "Debug"
	Vector2D m_vecPosition; // 0x28	
	// MPropertyGroupName "Debug"
	AnimNodeID m_nNodeID; // 0x30	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug This Node"
	bool m_bDebugThisNode; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Animation State"
// MPropertyExtendedEditor
class CAnimGraphDoc_State
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_StateTransition > > m_transitions; // 0x28	
	// MPropertyHideField
	CUtlVector< CStateAction > m_actions; // 0x40	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x58	
	// MPropertyFriendlyName "Comment"
	// MPropertyAttributeEditor "TextBlock()"
	// MPropertySortPriority "-100"
	CUtlString m_sComment; // 0x60	
	// MPropertyHideField
	AnimStateID m_stateID; // 0x68	
	// MPropertyHideField
	Vector2D m_position; // 0x6c	
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x74	
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x75	
	// MPropertyFriendlyName "Show Input To Graph"
	bool m_bIsInputToGraph; // 0x76	
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x77	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Animation Clip"
class CAnimGraphDoc_SequenceNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x30]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x70	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x88	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0xa0	
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xa8	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xac	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Component
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyHideField
	CUtlString m_group; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	// MPropertyHideField
	AnimComponentID m_id; // 0x28	
	// MPropertyFriendlyName "Start Enabled"
	bool m_bStartEnabled; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x30	
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
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
	// MPropertyHideField
	CGlobalSymbol m_disableTagName; // 0x18	
	// MPropertyFriendlyName "Disable Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_disableTagID; // 0x20	
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x24	
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyHideField
	CGlobalSymbol m_footstepLandedTagName; // 0x30	
	// MPropertyFriendlyName "Footstep Landed Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_footstepLandedTag; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CStateAction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CSmartPtr< CAnimGraphDoc_Action > m_pAction; // 0x8	
	StateActionBehavior m_eBehavior; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0	
	AnimNodeOutputID m_outputID; // 0x4	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ContainerNodeBase : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x48	
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x4c	
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimGraphDoc_NodeConnection > m_inputConnectionMap; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimGraphDoc_Node* > m_nodes; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionParameterManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionParameter > > m_params; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Direct Playback"
class CAnimGraphDoc_DirectPlaybackNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x48	
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x49	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Pinning"
class CAnimGraphDoc_FootPinningNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootPinningItem > m_items; // 0x48	
	// MPropertyFriendlyName "Lock Timing Source"
	FootPinningTimingSource m_eTimingSource; // 0x60	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x64	
	// MPropertyFriendlyName "Lock Break Distance"
	float m_flLockBreakDistance; // 0x68	
	// MPropertyFriendlyName "Max Leg Straight Amount"
	// MPropertyAttributeRange "0 1"
	float m_flMaxLegStraightAmount; // 0x6c	
	// MPropertyFriendlyName "Limit Foot Rotation"
	// MPropertyGroupName "Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0071[0x7]; // 0x71
public:
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyGroupName "Foot Rotation Limits"
	CUtlString m_hipBoneName; // 0x78	
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "Knee Twist Limits"
	bool m_bApplyLegTwistLimits; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "Knee Twist Limits"
	float m_flMaxLegTwist; // 0x84	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x88	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Follow Attachment"
class CAnimGraphDoc_FollowAttachmentNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x48	
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x50	
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x58	
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x59	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Solve IK Chain"
class CAnimGraphDoc_SolveIKChainNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandSelf
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x48	
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x60	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Follow Target"
class CAnimGraphDoc_FollowTargetNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x48	
	// MPropertyFriendlyName "Target Settings"
	// MPropertyAutoExpandSelf
	IKTargetSettings_t m_TargetSettings; // 0x50	
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x78	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Condition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Clip Data Manager"
class CAnimGraphDoc_ClipDataManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimGraphDoc_ClipData > > m_itemTable; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Path Helper"
class CAnimGraphDoc_PathHelperNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x48	
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x4c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionMetric
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	float m_flWeight; // 0x20	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CDampedValueComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	// MPropertyFriendlyName "Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CDampedValueItem > m_items; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Parameter Condition"
class CAnimGraphDoc_ParameterCondition : public CAnimGraphDoc_Condition
{
public:
	CUtlString m_paramName; // 0x28	
	AnimParamID m_paramID; // 0x30	
	Comparison_t m_comparisonOp; // 0x34	
	CAnimVariant m_comparisonValue; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0049[0x7]; // 0x49
public:
	CUtlString m_comparisonString; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Slow Down On Slopes"
class CAnimGraphDoc_SlowDownOnSlopesNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x48	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend Item"
class CAnimGraphDoc_Blend2DItem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Use Custom Duration"
	// MPropertyAttrChangeCallback
	bool m_bUseCustomDuration; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Custom Duration"
	// MPropertyAttrStateCallback
	float m_flCustomDuration; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimConflictBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_sConflictDesc; // 0x18	
	int32_t m_nResolveIdx; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CAnimConflictInfo_t m_conflictData[2]; // 0x28	
	AnimConflictType_t m_eConflictType; // 0x68	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Mover"
class CAnimGraphDoc_MoverNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Generate Movement"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttrChangeCallback
	bool m_bApplyMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x7]; // 0x49
public:
	// MPropertyHideField
	CUtlString m_moveVectorParamName; // 0x50	
	// MPropertyFriendlyName "Movement Velocity Parameter"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveVectorParam; // 0x58	
	// MPropertyFriendlyName "Orient Movement"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttrChangeCallback
	bool m_bOrientMovement; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	// MPropertyHideField
	CUtlString m_moveHeadingParamName; // 0x60	
	// MPropertyFriendlyName "Movement Heading Parameter"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveHeadingParam; // 0x68	
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x6c	
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x6d	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	// MPropertyFriendlyName "Face Direction"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x78	
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x80	
	// MPropertyFriendlyName "Turn Limit Only"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	// MPropertyAttrChangeCallback
	bool m_bLimitOnly; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x88	
	// MPropertyFriendlyName "Turn to Face Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceLimit; // 0x8c	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x90	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimParameterConflict : public CAnimConflictBase
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stop At Goal"
class CAnimGraphDoc_StopAtGoalNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x48	
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x4c	
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x50	
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x54	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x58	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend 1D"
class CAnimGraphDoc_BlendNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children; // 0x50	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x70	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x78	
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x7c	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x80	
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x81	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x82	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x83	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x88	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Jiggle Bone"
class CAnimGraphDoc_JiggleBoneNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandSelf
	CUtlVector< CJiggleBoneItem > m_items; // 0x48	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Lean Matrix"
class CAnimGraphDoc_LeanMatrixNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x48	
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x50	
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x54	
	// MPropertyHideField
	CUtlString m_paramName; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x60	
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x64	
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stride Retargeting"
class CAnimGraphDoc_FootLockNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootLockItem > m_items; // 0x48	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x60	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x68	
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x6c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x6d	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x70	
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x74	
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bApplyLegTwistLimits; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	float m_flMaxLegTwist; // 0x78	
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x7c	
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x80	
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x84	
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x85	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x88	
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x8c	
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x94	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x98	
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
	// MPropertyFriendlyName "Tolerance"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakTolerance; // 0xb8	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xbc	
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xc4	
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc8	
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00cd[0x3]; // 0xcd
public:
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xd0	
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd8	
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xdc	
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xe0	
	// MPropertyFriendlyName "Enable Root Height Damping"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrChangeCallback
	bool m_bEnableRootHeightDamping; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad00f1[0x7]; // 0xf1
public:
	// MPropertyFriendlyName "Damping Settings"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_rootHeightDamping; // 0xf8	
	// MPropertyFriendlyName "Max Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMaxRootHeightOffset; // 0x108	
	// MPropertyFriendlyName "Min Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMinRootHeightOffset; // 0x10c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Action
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Network Look Target"
	bool m_bNetworkLookTarget; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
public:
	// MPropertyHideField
	AnimParamID m_lookHeadingID; // 0x3c	
	// MPropertyHideField
	AnimParamID m_lookHeadingVelocityID; // 0x40	
	// MPropertyHideField
	AnimParamID m_lookPitchID; // 0x44	
	// MPropertyHideField
	AnimParamID m_lookDistanceID; // 0x48	
	// MPropertyHideField
	AnimParamID m_lookDirectionID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_lookTargetID; // 0x50	
	// MPropertyHideField
	AnimParamID m_lookTargetWorldSpaceID; // 0x54	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Motor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x20	
	// MPropertyFriendlyName "Is Default"
	bool m_bDefault; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_TagManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ConditionContainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Condition > > m_conditions; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CFootStepTriggerItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0	
	// MPropertyFriendlyName "Trigger Phase"
	StepPhase m_triggerPhase; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyHideField
	CUtlVector< CGlobalSymbol > m_tagNames; // 0x10	
	// MPropertyFriendlyName "Tags"
	// MPropertyAttributeChoiceName "Tag"
	CUtlVector< AnimTagID > m_tagIDs; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "State Machine"
class CAnimGraphDoc_StateMachine
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_State > > m_states; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Two-Bone IK"
class CAnimGraphDoc_TwoBoneIKNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x48	
	// MPropertyFriendlyName "Auto-Detect Hinge Axis"
	bool m_bAutoDetectHingeAxis; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x54	
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x58	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_attachmentName; // 0x68	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_targetBoneName; // 0x70	
	// MPropertyHideField
	CUtlString m_targetParamName; // 0x78	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_targetParam; // 0x80	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyHideField
	CUtlString m_rotationParamName; // 0x88	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Rotation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_rotationParam; // 0x90	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Constrain Twist"
	// MPropertyAttrStateCallback
	bool m_bConstrainTwist; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Max Twist"
	// MPropertyAttrStateCallback
	float m_flMaxTwist; // 0x98	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Clip Group"
class CAnimGraphDoc_MotionItemGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItem > > m_motions; // 0x20	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	CAnimGraphDoc_ConditionContainer m_conditions; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transition"
// MPropertyExtendedEditor
class CAnimGraphDoc_StateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CAnimGraphDoc_ConditionContainer m_conditionList; // 0x28	
	// MPropertyHideField
	AnimStateID m_srcState; // 0x58	
	// MPropertyHideField
	AnimStateID m_destState; // 0x5c	
	// MPropertyFriendlyName "Comment"
	// MPropertyAttributeEditor "TextBlock()"
	// MPropertySortPriority "-100"
	CUtlString m_sComment; // 0x60	
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x68	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Input Stream"
class CAnimGraphDoc_InputStreamNode : public CAnimGraphDoc_Node
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_RigidBodyWeightList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlVector< CRigidBodyWeight > m_weights; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Choreo"
class CAnimGraphDoc_ChoreoNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Final Pose"
class CAnimGraphDoc_RootNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Adjustment"
class CAnimGraphDoc_FootAdjustmentNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyHideField
	CUtlString m_facingTargetParam; // 0x48	
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_facingTarget; // 0x50	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x54	
	// MPropertyFriendlyName "Animation Driven"
	// MPropertyAttrChangeCallback
	bool m_bAnimationDriven; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MPropertyFriendlyName "Base Anim Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_baseClipName; // 0x58	
	// MPropertyFriendlyName "Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_clips; // 0x60	
	// MPropertyFriendlyName "Turn Time Min"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMin; // 0x78	
	// MPropertyFriendlyName "Turn Time Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMax; // 0x7c	
	// MPropertyFriendlyName "Step Height Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMax; // 0x80	
	// MPropertyFriendlyName "Step Height Max Angle"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMaxAngle; // 0x84	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_PathMotorBase : public CAnimGraphDoc_Motor
{
public:
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x30	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CSlopeComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Trace Distance"
	float m_flTraceDistance; // 0x38	
	// MPropertyHideField
	AnimParamID m_slopeAngleID; // 0x3c	
	// MPropertyHideField
	AnimParamID m_slopeHeadingID; // 0x40	
	// MPropertyHideField
	AnimParamID m_slopeAngleSideID; // 0x44	
	// MPropertyHideField
	AnimParamID m_slopeAngleFrontID; // 0x48	
	// MPropertyHideField
	AnimParamID m_slopeNormalID; // 0x4c	
	// MPropertyHideField
	AnimParamID m_slopeNormal_WorldSpaceID; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "State Machine"
class CAnimGraphDoc_StateMachineNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x28]; // 0x40
public:
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x68	
	// MPropertyFriendlyName "Lock When Waning"
	bool m_bLockStateWhenWaning; // 0x69	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Comment"
class CAnimGraphDoc_CommentNode : public CAnimGraphDoc_Node
{
public:
	// MPropertySuppressField
	CUtlString m_commentText; // 0x40	
	// MPropertySuppressField
	Vector2D m_size; // 0x48	
	// MPropertyFriendlyName "Color"
	Color m_color; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CRagdollComponent : public CAnimGraphDoc_Component
{
public:
	CUtlVector< CAnimGraphDoc_RigidBodyWeightList > m_weightLists; // 0x38	
	float m_flSpringFrequencyMin; // 0x50	
	float m_flSpringFrequencyMax; // 0x54	
	float m_flMaxStretch; // 0x58	
	bool m_bSolidCollisionAtZeroWeight; // 0x5c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_StateList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimGraphDoc_State* > m_states; // 0x10	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ExpressionAction : public CAnimGraphDoc_Action
{
public:
	CUtlString m_paramName; // 0x28	
	AnimParamID m_param; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	CUtlString m_expression; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cycle Control Clip"
class CAnimGraphDoc_CycleControlClipNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x58	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x70	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x80	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x88	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ComponentState : public CAnimGraphDoc_State
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
class CDemoSettingsComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Settings"
	// MPropertyAutoExpandSelf
	CAnimDemoCaptureSettings m_settings; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionItem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertyHideField
	CAnimGraphDoc_MotionParameterManager m_paramManager; // 0x28	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_blockSpans; // 0x50	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x68	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0098[0x8]; // 0x98
public:
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa0	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Speed Scale"
class CAnimGraphDoc_SpeedScaleNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyHideField
	CUtlString m_paramName; // 0x48	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimGraphDoc_Node > > m_nodes; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Aim Camera"
class CAnimGraphDoc_AimCameraNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Spine IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChain; // 0x48	
	// MPropertyFriendlyName "Camera Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_cameraJointName; // 0x50	
	// MPropertyFriendlyName "Pelvis Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_pelvisJointName; // 0x58	
	// MPropertyFriendlyName "Clavicle Left Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_clavicleLeftJointName; // 0x60	
	// MPropertyFriendlyName "Clavicle Right Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_clavicleRightJointName; // 0x68	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_parameterNamePosition; // 0x70	
	// MPropertyFriendlyName "Orientation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	AnimParamID m_parameterNameOrientation; // 0x74	
	// MPropertyFriendlyName "Pelvis Offset Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterNamePelvisOffset; // 0x78	
	// MPropertyFriendlyName "Spine Rotation Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterNameSpineRotationWeight; // 0x7c	
	// MPropertyFriendlyName "Use IK Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_parameterUseIK; // 0x80	
	// MPropertyFriendlyName "Clearance Distance"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterCameraClearanceDistance; // 0x84	
	// MPropertyFriendlyName "Weapon De-Penetration Distance"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_parameterWeaponDepenetrationDistance; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Depenetration Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_depenetrationJointName; // 0x90	
	// MPropertyFriendlyName "Prop Joints"
	// MPropertyDescription "These joints will maintain their offset relative to the camera joint."
	CUtlVector< CAnimGraphDoc_AimCameraNode_PropJoint > m_propJoints; // 0x98	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Path Motor"
class CAnimGraphDoc_PathMotor : public CAnimGraphDoc_PathMotorBase
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ProxyNodeBase : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyFriendlyName "External Connections"
	// MPropertyAutoExpandSelf
	// MPropertyAttrChangeCallback
	CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x48	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Step Trigger"
class CAnimGraphDoc_FootStepTriggerNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Tolerance"
	float m_flTolerance; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootStepTriggerItem > m_items; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ComponentStateTransition : public CAnimGraphDoc_StateTransition
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Choice"
class CAnimGraphDoc_ChoiceNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandSelf
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
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Cross Fade"
	bool m_bCrossFade; // 0x6c	
	// MPropertyFriendlyName "Reset On Selection"
	// MPropertyAttrChangeCallback
	bool m_bResetChosen; // 0x6d	
	// MPropertyFriendlyName "Don't Reset Same Selection"
	// MPropertyAttrStateCallback
	bool m_bDontResetSameSelection; // 0x6e	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tag Condition"
class CAnimGraphDoc_TagCondition : public CAnimGraphDoc_Condition
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28	
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ComponentManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphDoc_Component > > m_components; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Position Metric"
class CAnimGraphDoc_FootPositionMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Ignore Slope"
	bool m_bIgnoreSlope; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Time Condition"
class CAnimGraphDoc_TimeCondition : public CAnimGraphDoc_Condition
{
public:
	Comparison_t m_comparisonOp; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlString m_comparisonString; // 0x30	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "State Status Condition"
class CAnimGraphDoc_StateStatusCondition : public CAnimGraphDoc_Condition
{
public:
	StateValue m_sourceValue; // 0x28	
	StateComparisonValueType m_comparisonValueType; // 0x2c	
	float m_comparisonFixedValue; // 0x30	
	StateValue m_comparisonStateValue; // 0x34	
	CUtlString m_comparisonParamName; // 0x38	
	AnimParamID m_comparisonParamID; // 0x40	
	Comparison_t m_comparisonOp; // 0x44	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_SubGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimGraphDoc_NodeManager m_nodeManager; // 0x8	
	CAnimGraphDoc_ComponentManager m_componentManager; // 0x50	
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x78	
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x90	
	CUtlVector< CUtlString > m_referencedParamGroups; // 0xa8	
	CUtlVector< CUtlString > m_referencedTagGroups; // 0xc0	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Future Facing Metric"
class CAnimGraphDoc_FutureFacingMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
	// MPropertyFriendlyName "Time"
	float m_flTime; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
class CRigidBodyWeight
{
public:
	CUtlString m_name; // 0x0	
	float m_flWeight; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Bone Velocity Metric"
class CAnimGraphDoc_BoneVelocityMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Bone Position Metric"
class CAnimGraphDoc_BonePositionMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x10
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_AimCameraNode_PropJoint
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Joint"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_jointName; // 0x8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionNodeManager : public CAnimGraphDoc_NodeManager
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Distance Remaining Metric"
class CAnimGraphDoc_DistanceRemainingMetric : public CAnimGraphDoc_MotionMetric
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_OrCondition : public CAnimGraphDoc_Condition
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CFootPinningItem
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
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x20	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_param; // 0x28	
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x2c	
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x30	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Matching"
class CAnimGraphDoc_MotionMatchingNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItemGroup > > m_groups; // 0x48	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionMetric > > m_metrics; // 0x60	
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0x78	
	// MPropertyHideField
	int32_t m_nRandomSeed; // 0x80	
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttributeRange "0.01 0.2"
	float m_flSampleRate; // 0x84	
	// MPropertyFriendlyName "Search Every Update"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrChangeCallback
	bool m_bSearchEveryTick; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad0089[0x3]; // 0x89
public:
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x8c	
	// MPropertyFriendlyName "Search when motion ends"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenMotionEnds; // 0x90	
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenGoalChanges; // 0x91	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
public:
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x94	
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x98	
	// MPropertyFriendlyName "Re-Selection Time Window"
	float m_flReselectionTimeWindow; // 0x9c	
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockSelectionWhenWaning; // 0xa0	
	// MPropertyFriendlyName "Enable Rotation Correction"
	bool m_bEnableRotationCorrection; // 0xa1	
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa2	
private:
	[[maybe_unused]] uint8_t __pad00a3[0x1]; // 0xa3
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Motion Graph"
class CAnimGraphDoc_GraphMotionItem : public CAnimGraphDoc_MotionItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0xa8	
	// MPropertyHideField
	CAnimGraphDoc_MotionNodeManager m_nodeManager; // 0xb0	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Block Selection Metric"
class CAnimGraphDoc_BlockSelectionMetric : public CAnimGraphDoc_MotionMetric
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cycle Control"
class CAnimGraphDoc_CycleControlNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x50	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x58	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CLODComponent : public CAnimGraphDoc_Component
{
public:
	int32_t m_nServerLOD; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stance Scale"
class CAnimGraphDoc_StanceScaleNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyHideField
	CUtlString m_paramName; // 0x48	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Current Velocity Metric"
class CAnimGraphDoc_CurrentVelocityMetric : public CAnimGraphDoc_MotionMetric
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Sequence"
class CAnimGraphDoc_SequenceMotionItem : public CAnimGraphDoc_MotionItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0xa8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct CAnimConflictInfo_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlString m_groupName; // 0x8	
	CUtlString m_subgraphName; // 0x10	
	uint32_t m_id; // 0x18	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Choice Item"
// MPropertyElementNameFn
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10	
	// MPropertyFriendlyName "Blend Time"
	float m_blendTime; // 0x14	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "SubGraph"
// MPropertyExtendedEditor
class CAnimGraphDoc_SubGraphNode : public CAnimGraphDoc_ContainerNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph, *requiredoubleclick  )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x70	
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x78	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ParamSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	CUtlVector< CAnimGraphDoc_ParamSpanSample > m_samples; // 0x20	
	// MPropertyHideField
	CUtlString m_paramName; // 0x38	
	AnimParamID m_id; // 0x40	
	float m_flStartCycle; // 0x44	
	float m_flEndCycle; // 0x48	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_AndCondition : public CAnimGraphDoc_Condition
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ParameterManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x20	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Group Input"
class CAnimGraphDoc_GroupInputNode : public CAnimGraphDoc_ProxyNodeBase
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionParameter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_name; // 0x18	
	AnimParamID m_id; // 0x20	
	float m_flMinValue; // 0x24	
	float m_flMaxValue; // 0x28	
	int32_t m_nSamples; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Path Metric"
class CAnimGraphDoc_PathMetric : public CAnimGraphDoc_MotionMetric
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stance Override"
class CAnimGraphDoc_StanceOverrideNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_stanceSourceConnection; // 0x48	
	// MPropertyHideField
	CUtlString m_blendParamName; // 0x50	
	// MPropertyFriendlyName "Blend Parameter (optional)"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_blendParamID; // 0x58	
	// MPropertyFriendlyName "Stance Source"
	// MPropertyAttrChangeCallback
	StanceOverrideMode m_eMode; // 0x5c	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_sequenceName; // 0x60	
	// MPropertyFriendlyName "Frame"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x68	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
class CStateMachineComponent : public CAnimGraphDoc_Component
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x28]; // 0x38
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x60	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeState : public CAnimGraphDoc_State
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x78	
	// MPropertyFriendlyName "Exclusive Root Motion"
	// MPropertySortPriority "0"
	bool m_bIsRootMotionExclusive; // 0x80	
	// MPropertyFriendlyName "Exclusive Root Motion On First Frame"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "m_bIsRootMotionExclusive == false"
	bool m_bIsRootMotionExclusiveFirstFrame; // 0x81	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Input Item"
// MPropertyElementNameFn
class CConnectionProxyItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0	
	// MPropertyHideField
	AnimNodeOutputID m_outputID; // 0x8	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0xc	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Zero Pose"
class CAnimGraphDoc_ZeroPoseNode : public CAnimGraphDoc_Node
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Damped Path Motor"
class CAnimGraphDoc_DampedPathMotor : public CAnimGraphDoc_PathMotorBase
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x38	
	// MPropertyFriendlyName "Minimum Speed Percentage"
	float m_flMinSpeedScale; // 0x3c	
	// MPropertyHideField
	CUtlString m_anticipationPosParamName; // 0x40	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_anticipationHeadingParamName; // 0x50	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x58	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x5c	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x60	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x64	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Directional Blend"
class CAnimGraphDoc_DirectionalBlendNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x48	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x60	
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Player Input Motor"
class CAnimGraphDoc_PlayerInputMotor : public CAnimGraphDoc_Motor
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x30	
	// MPropertyFriendlyName "Use Acceleration"
	bool m_bUseAcceleration; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Spring Constant"
	float m_flSpringConstant; // 0x4c	
	// MPropertyFriendlyName "Anticipation Distance"
	float m_flAnticipationDistance; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyHideField
	CUtlString m_anticipationPosParamName; // 0x58	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyHideField
	CUtlString m_anticipationHeadingParamName; // 0x68	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x70	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Steps Remaining Metric"
class CAnimGraphDoc_StepsRemainingMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Min Steps Remaining"
	float m_flMinStepsRemaining; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Finished Condition"
class CAnimGraphDoc_FinishedCondition : public CAnimGraphDoc_Condition
{
public:
	FinishedConditionOption m_option; // 0x28	
	bool m_bIsFinished; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_SetParameterAction : public CAnimGraphDoc_Action
{
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x28	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_param; // 0x30	
	// MPropertyFriendlyName "Value"
	CAnimVariant m_value; // 0x34	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Look At"
class CAnimGraphDoc_LookAtNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Target"
	// MPropertyAttrChangeCallback
	AnimVectorSource m_target; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x50	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x58	
	// MPropertyFriendlyName "Parameter is a Position"
	// MPropertyAttrStateCallback
	bool m_bIsPosition; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	// MPropertyHideField
	CUtlString m_weightParamName; // 0x60	
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x70	
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x78	
	// MPropertyFriendlyName "Rotate Through Forward"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrChangeCallback
	bool m_bRotateYawForward; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrStateCallback
	float m_flYawLimit; // 0x84	
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 90"
	// MPropertyGroupName "Rotation Limits"
	float m_flPitchLimit; // 0x88	
	// MPropertyFriendlyName "Maintain Up Direction"
	bool m_bMaintainUpDirection; // 0x8c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x8d	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x8e	
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x8f	
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x90	
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x94	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x98	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Group Output"
class CAnimGraphDoc_GroupOutputNode : public CAnimGraphDoc_ProxyNodeBase
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CFloatAnimValue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	float m_flConstValue; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x10	
	// MPropertyHideField
	AnimParamID m_paramID; // 0x18	
	// MPropertyHideField
	EAnimValueSource m_eSource; // 0x1c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Jump Helper"
class CAnimGraphDoc_JumpHelperNode : public CAnimGraphDoc_SequenceNode
{
public:
	// MPropertyHideField
	CUtlString m_targetParamName; // 0xb0	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_targetParamID; // 0xb8	
	// MPropertySuppressField
	float m_flJumpStartCycle; // 0xbc	
	// MPropertySuppressField
	float m_flJumpDuration; // 0xc0	
	// MPropertyFriendlyName "Translate X"
	bool m_bTranslateX; // 0xc4	
	// MPropertyFriendlyName "Translate Y"
	bool m_bTranslateY; // 0xc5	
	// MPropertyFriendlyName "Translate Z"
	bool m_bTranslateZ; // 0xc6	
	// MPropertyFriendlyName "Apply Speed Scale"
	bool m_bScaleSpeed; // 0xc7	
	// MPropertyFriendlyName "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Ragdoll"
class CAnimGraphDoc_RagdollNode : public CAnimGraphDoc_Node
{
public:
	CUtlString m_weightListName; // 0x40	
	RagdollPoseControl m_poseControlMethod; // 0x48	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x4c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Follow Path"
class CAnimGraphDoc_FollowPathNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Blend Out Time"
	float m_flBlendOutTime; // 0x48	
	// MPropertyFriendlyName "Block Non-Path Movement"
	bool m_bBlockNonPathMovement; // 0x4c	
	// MPropertyFriendlyName "Stop Feet at Goal"
	bool m_bStopFeetAtGoal; // 0x4d	
	// MPropertyFriendlyName "Enable Speed Scaling"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrChangeCallback
	bool m_bScaleSpeed; // 0x4e	
private:
	[[maybe_unused]] uint8_t __pad004f[0x1]; // 0x4f
public:
	// MPropertyFriendlyName "Scale"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flScale; // 0x50	
	// MPropertyFriendlyName "Min Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMinAngle; // 0x54	
	// MPropertyFriendlyName "Max Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMaxAngle; // 0x58	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrStateCallback
	float m_flSpeedScaleBlending; // 0x5c	
	// MPropertyFriendlyName "Enable Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	// MPropertyFriendlyName "Target"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x64	
	// MPropertyHideField
	CUtlString m_paramName; // 0x68	
	// MPropertyFriendlyName "Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x70	
	// MPropertyFriendlyName "Offset"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x74	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x78	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Aim Matrix"
class CAnimGraphDoc_AimMatrixNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x48	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
	// MPropertyFriendlyName "Max Yaw Angle"
	float m_flMaxYawAngle; // 0x58	
	// MPropertyFriendlyName "Max Pitch Angle"
	float m_flMaxPitchAngle; // 0x5c	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x68	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x78	
	// MPropertyFriendlyName "Blend Mode"
	// MPropertyAttrChangeCallback
	AimMatrixBlendMode m_blendMode; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	// MPropertyAttrStateCallback
	CUtlString m_boneMaskName; // 0x88	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x90	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x91	
	// MPropertyFriendlyName "Use Bias + Clamp"
	// MPropertyAttrChangeCallback
	bool m_bUseBiasAndClamp; // 0x92	
private:
	[[maybe_unused]] uint8_t __pad0093[0x1]; // 0x93
public:
	// MPropertyFriendlyName "Yaw Offset Angle"
	// MPropertyAttrStateCallback
	float m_flBiasAndClampYawOffset; // 0x94	
	// MPropertyFriendlyName "Pitch Offset Angle"
	// MPropertyAttrStateCallback
	float m_flBiasAndClampPitchOffset; // 0x98	
	// MPropertyFriendlyName "Clamp Blend Curve"
	// MPropertyAttributeEditor "AnimGraphBlendCurve()"
	// MPropertyAttrStateCallback
	CBlendCurve m_biasAndClampBlendCurve; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xa8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Turn Helper"
class CAnimGraphDoc_TurnHelperNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x48	
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x4c	
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x50	
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x54	
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x58	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyExtendedEditor
class CAnimGraphDoc_SelectorNode : public CAnimGraphDoc_Node
{
public:
	// MPropertySuppressField
	CUtlVector< CAnimGraphDoc_NodeConnection > m_children; // 0x40	
	// MPropertyHideField
	CUtlVector< AnimTagID > m_tags; // 0x58	
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyHideField
	CUtlString m_boolParamName; // 0x78	
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyHideField
	CUtlString m_enumParamName; // 0x88	
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x90	
	// MPropertyFriendlyName "Tag Parameter"
	// MPropertyAttributeChoiceName "Tag"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimTagID m_tagID; // 0x94	
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x98	
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0xb8	
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0xbc	
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0xbd	
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockWhenWaning; // 0xbe	
private:
	[[maybe_unused]] uint8_t __pad00bf[0x1]; // 0xbf
public:
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xc0	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Bind Pose"
class CAnimGraphDoc_BindPoseNode : public CAnimGraphDoc_Node
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Time Remaining Metric"
class CAnimGraphDoc_TimeRemainingMetric : public CAnimGraphDoc_MotionMetric
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

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "WayPoint Helper"
class CAnimGraphDoc_WayPointHelperNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x48	
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x4c	
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x50	
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x51	
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x52	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Subtract"
class CAnimGraphDoc_SubtractNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_baseInputConnection; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_subtractInputConnection; // 0x48	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x50	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x54	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x58	
	// MPropertyFriendlyName "Subtract Foot Motion"
	bool m_bApplyToFootMotion; // 0x5c	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x5d	
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x5e	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x5f	
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x60	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Add"
class CAnimGraphDoc_AddNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_baseInput; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_additiveInput; // 0x48	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x50	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x54	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x58	
	// MPropertyFriendlyName "Add Foot Motion"
	bool m_bApplyToFootMotion; // 0x5c	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x5d	
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x5e	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x5f	
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x60	
	// MPropertyFriendlyName "Apply Scale"
	// MPropertyDescription "Apply Scale Channels During Add.  Requires Treat Translation Separately."
	bool m_bApplyScale; // 0x61	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend Item"
class CBlendNodeChild
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x8	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x10	
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x18	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CActionComponent : public CAnimGraphDoc_Component
{
public:
	CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // 0x38	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Node Blend Item"
class CAnimGraphDoc_NodeBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x30	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimScriptComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x38	
	// MPropertyFriendlyName "Script File"
	// MPropertyAttributeEditor "AssetBrowse( as )"
	// MPropertyAttrChangeCallback
	CUtlString m_scriptFilename; // 0x40	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend 2D"
class CAnimGraphDoc_Blend2DNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Blend2DItem > > m_items; // 0x58	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x70	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x88	
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceX; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MPropertyHideField
	CUtlString m_paramNameX; // 0xa8	
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramX; // 0xb0	
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceY; // 0xb4	
	// MPropertyHideField
	CUtlString m_paramNameY; // 0xb8	
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramY; // 0xc0	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xc4	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0xc5	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0xc6	
private:
	[[maybe_unused]] uint8_t __pad00c7[0x1]; // 0xc7
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xd0	
	// MPropertyFriendlyName "AnimEvents and Tags Exclusive To Most Weighted"
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xe0	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_TagSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	AnimTagID m_id; // 0x20	
	float m_fStartCycle; // 0x24	
	float m_fDuration; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Future Velocity Metric"
class CAnimGraphDoc_FutureVelocityMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c	
	// MPropertyFriendlyName "Mode"
	// MPropertyAttrChangeCallback
	VelocityMetricMode m_eMode; // 0x30	
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bAutoTargetSpeed; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Damped Value"
class CDampedValueItem
{
public:
	// MPropertyFriendlyName "Value Type"
	// MPropertyAttrChangeCallback
	DampedValueType m_valueType; // 0x0	
	// MPropertyHideField
	CUtlString m_floatParamNameIn; // 0x8	
	// MPropertyHideField
	CUtlString m_floatParamNameOut; // 0x10	
	// MPropertyHideField
	CUtlString m_vectorParamNameIn; // 0x18	
	// MPropertyHideField
	CUtlString m_vectorParamNameOut; // 0x20	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamIn; // 0x28	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateFloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamOut; // 0x2c	
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamIn; // 0x30	
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateVectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamOut; // 0x34	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimTagConflict : public CAnimConflictBase
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Clip Data"
class CAnimGraphDoc_ClipData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x20	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_clipName; // 0x38	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ConflictManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimConflictBase > > m_conflicts; // 0x18	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Bone Mask"
class CAnimGraphDoc_BoneMaskNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection1; // 0x48	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection2; // 0x50	
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x58	
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
public:
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyHideField
	CUtlString m_blendParameterName; // 0x68	
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_blendParameter; // 0x70	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x74	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x78	
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x7c	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x80	
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x84	
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x85	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Sequence Blend Item"
// MPropertyElementNameFn
class CAnimGraphDoc_SequenceBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x38	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Single Frame"
class CAnimGraphDoc_SingleFrameNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
	// MPropertyFriendlyName "Frame Selection"
	// MPropertyAttrChangeCallback
	SingleFrameSelection m_eFrameSelection; // 0x58	
	// MPropertyFriendlyName "Frame Index"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x5c	
	CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // 0x60	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cycle Condition"
class CAnimGraphDoc_CycleCondition : public CAnimGraphDoc_Condition
{
public:
	Comparison_t m_comparisonOp; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlString m_comparisonString; // 0x30	
	float m_comparisonValue; // 0x38	
	ComparisonValueType m_comparisonValueType; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	CUtlString m_comparisonParamName; // 0x40	
	AnimParamID m_comparisonParamID; // 0x48	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Procedural Hit Reacts"
class CAnimGraphDoc_HitReactNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyHideField
	CUtlString m_triggerParamName; // 0x50	
	// MPropertyHideField
	CUtlString m_hitBoneParamName; // 0x58	
	// MPropertyHideField
	CUtlString m_hitOffsetParamName; // 0x60	
	// MPropertyHideField
	CUtlString m_hitDirectionParamName; // 0x68	
	// MPropertyHideField
	CUtlString m_hitStrengthParamName; // 0x70	
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x78	
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x7c	
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x80	
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x84	
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x90	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x98	
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0xa0	
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0xa4	
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0xa8	
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0xac	
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0xb0	
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0xb4	
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0xb8	
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0xbc	
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0xc0	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0xc4	
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0xc8	
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0xcc	
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0xd0	
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0xd4	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xd8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Foot Cycle Metric"
class CAnimGraphDoc_FootCycleMetric : public CAnimGraphDoc_MotionMetric
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Group"
class CAnimGraphDoc_GroupNode : public CAnimGraphDoc_ContainerNodeBase
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeManager m_nodeMgr; // 0x70	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_EmitTagAction : public CAnimGraphDoc_Action
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x28	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ToggleComponentAction : public CAnimGraphDoc_Action
{
public:
	// MPropertyFriendlyName "Component"
	// MPropertyAttributeChoiceName "Component"
	AnimComponentID m_componentID; // 0x28	
	// MPropertyFriendlyName "Set Enabled"
	bool m_bSetEnabled; // 0x2c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
class CMovementComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Motor > > m_motors; // 0x38	
	// MPropertyFriendlyName "Network Path"
	bool m_bNetworkPath; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x7]; // 0x51
public:
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_facingDamping; // 0x58	
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Network Facing"
	bool m_bNetworkFacing; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	// MPropertyHideField
	AnimParamID m_paramIDs[30]; // 0x6c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x148
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Graph : public CAnimGraphDoc_SubGraph
{
public:
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e8[0x8]; // 0xe8
public:
	CAnimGraphDoc_ClipDataManager m_clipDataManager; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad0120[0x18]; // 0x120
public:
	CUtlString m_modelName; // 0x138	
	CUtlString m_previewModelName; // 0x140	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
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
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10	
	// MPropertyFriendlyName "Override Solver Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKSolverSettings_t m_OverrideSolverSettings; // 0x14	
	// MPropertyFriendlyName "Target Setting Source"
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1c	
	// MPropertyFriendlyName "Override Target Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKTargetSettings_t m_OverrideTargetSettings; // 0x20	
	// MPropertyFriendlyName "Debug Setting"
	// MPropertyGroupName "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x48	
	// MPropertyFriendlyName "Debug Normalized Length"
	// MPropertyGroupName "Debug"
	float m_flDebugNormalizedLength; // 0x4c	
	// MPropertyFriendlyName "Debug Offset"
	// MPropertyGroupName "Debug"
	Vector m_vDebugOffset; // 0x50	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Current Rotation Velocity Metric"
class CAnimGraphDoc_CurrentRotationVelocityMetric : public CAnimGraphDoc_MotionMetric
{
public:
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x20
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ParamSpanSample
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimVariant m_value; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flCycle; // 0x1c	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_NodeStateTransition : public CAnimGraphDoc_StateTransition
{
public:
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x70	
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0091[0x3]; // 0x91
public:
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x94	
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	CFloatAnimValue m_flFixedCycleValue; // 0x98	
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xb8	
};

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CCPPScriptComponent : public CAnimGraphDoc_Component
{
public:
	// MPropertyFriendlyName "Scripts"
	CUtlVector< CUtlString > m_scriptsToRun; // 0x38	
};

