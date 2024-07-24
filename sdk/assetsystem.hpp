#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: assetsystem.dll
// Classes count: 0 (Allocated) | 19 (Unallocated)
// Enums count: 0 (Allocated) | 3 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class ResourceDataEncodingType_t : uint32_t
{
	RESOURCE_ENCODING_INVALID = 0xffffffffffffffff,
	RESOURCE_ENCODING_INTROSPECTED = 0x0,
	RESOURCE_ENCODING_KV3 = 0x1,
	RESOURCE_ENCODING_VTEX = 0x2,
	RESOURCE_ENCODING_RAW_BYTES = 0x3,
	RESOURCE_ENCODING_VSNAP = 0x4,
	RESOURCE_ENCODING_VRMAN = 0x5,
	RESOURCE_ENCODING_COMPILEIMAGEUTILS_TEXT = 0x6,
	RESOURCE_ENCODING_TEXT = 0x7,
	RESOURCE_ENCODING_MBUF = 0x8,
	RESOURCE_ENCODING_COUNT = 0x9,
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 23
// Alignment: 4
// Size: 0x4
enum class AssetEditInfoFilterFunc_t : uint32_t
{
	// MPropertyFriendlyName "=="
	ASSET_FILTER_EQUAL = 0x0,
	// MPropertyFriendlyName "!="
	ASSET_FILTER_NOT_EQUAL = 0x1,
	// MPropertyFriendlyName "== (or missing)"
	ASSET_FILTER_EQUAL_OR_MISSING = 0x2,
	// MPropertyFriendlyName "!= (or missing)"
	ASSET_FILTER_NOT_EQUAL_OR_MISSING = 0x3,
	// MPropertyFriendlyName "<"
	ASSET_FILTER_LESS = 0x4,
	// MPropertyFriendlyName "<="
	ASSET_FILTER_LESS_EQUAL = 0x5,
	// MPropertyFriendlyName ">"
	ASSET_FILTER_GREATER = 0x6,
	// MPropertyFriendlyName ">="
	ASSET_FILTER_GREATER_EQUAL = 0x7,
	// MPropertyFriendlyName "contains"
	ASSET_FILTER_CONTAINS = 0x8,
	// MPropertyFriendlyName "doesn't contain"
	ASSET_FILTER_DOES_NOT_CONTAIN = 0x9,
	// MPropertyFriendlyName "references or depends on asset"
	ASSET_FILTER_DEPREF_ASSET = 0xa,
	// MPropertyFriendlyName "referenced or depended-on by asset"
	ASSET_FILTER_DEPREF_BY_ASSET = 0xb,
	// MPropertyFriendlyName "parents asset"
	ASSET_FILTER_PARENTS_ASSET = 0xc,
	// MPropertyFriendlyName "parented by asset"
	ASSET_FILTER_PARENTED_BY_ASSET = 0xd,
	// MPropertyFriendlyName "references subasset"
	ASSET_FILTER_REF_SUBASSET = 0xe,
	// MPropertyFriendlyName "defines subasset"
	ASSET_FILTER_DEF_SUBASSET = 0xf,
	// MPropertyFriendlyName "references or depends on asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_ASSET = 0x10,
	// MPropertyFriendlyName "referenced or depended-on by asset (exact)"
	ASSET_FILTER_EXACT_DEPREF_BY_ASSET = 0x11,
	// MPropertyFriendlyName "parents asset (exact)"
	ASSET_FILTER_EXACT_PARENTS_ASSET = 0x12,
	// MPropertyFriendlyName "parented by asset (exact)"
	ASSET_FILTER_EXACT_PARENTED_BY_ASSET = 0x13,
	// MPropertyFriendlyName "references subasset (exact)"
	ASSET_FILTER_EXACT_REF_SUBASSET = 0x14,
	// MPropertyFriendlyName "defines subasset (exact)"
	ASSET_FILTER_EXACT_DEF_SUBASSET = 0x15,
	ASSET_FILTER_FUNC_COUNT = 0x16,
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AssetWarningFixType_t : uint32_t
{
	NONE = 0x0,
	VMDL_CONVERT_TO_MODELDOC = 0x1,
	VMAP_MANUAL_RECOMPILE = 0x2,
};

struct AutoTagVDataCondition_t;

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CAssetWarning
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CBufferString m_Title; // 0x8	
	CBufferString m_Message; // 0x18	
	CUtlVector< CAssetWarningCheck > m_Checks; // 0x28	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CAssetInfoFilterParams
{
public:
	CUtlVector< InfoDataFilter_t > m_Filters; // 0x0	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CBaseToolInfo
{
public:
	CUtlString m_Name; // 0x0	
	CUtlString m_OverrideToolShortcutName; // 0x8	
	CUtlString m_FriendlyName; // 0x10	
	CUtlString m_ToolIcon; // 0x18	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CSimpleAssetTypeInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_FriendlyName; // 0x10	
	CUtlString m_Ext; // 0x18	
	CUtlString m_IconLg; // 0x20	
	CUtlString m_IconSm; // 0x28	
	CUtlVector< CUtlString > m_SuppressSubstrings; // 0x30	
	CUtlVector< CUtlString > m_AdditionalExtensions; // 0x48	
	CUtlVector< AssetEngineCommand_t > m_EngineCommands; // 0x60	
	CUtlVector< CUtlString > m_LimitToMods; // 0x78	
	CUtlVector< CUtlString > m_ExcludeFromMods; // 0x90	
	CUtlVector< CUtlString > m_HideForRetailMods; // 0xa8	
	bool m_bHideTypeByDefault; // 0xc0	
	bool m_bCannotBeShown; // 0xc1	
	bool m_bIsNontrivialChildAssetType; // 0xc2	
	bool m_bSuppressFullFingerprintCalculation; // 0xc3	
	bool m_bIgnoreCompiledState; // 0xc4	
	bool m_bContentFileIsText; // 0xc5	
	bool m_bPrefersLivePreview; // 0xc6	
	bool m_bPresentInGameTree; // 0xc7	
	bool m_bShouldCompileErrorFallbackToDisk; // 0xc8	
	bool m_bUnrecognizedReferencesAreErrors; // 0xc9	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CEngineToolInfo : public CBaseToolInfo
{
public:
	CUtlString m_Library; // 0x20	
	CUtlString m_InterfaceName; // 0x28	
	bool m_bShowInRevisionSubMenu; // 0x30	
	bool m_bIsSecondaryTool; // 0x31	
	bool m_bDoNotWarnAboutLargeAssetBatches; // 0x32	
	bool m_bIsWorkshopManagerTool; // 0x33	
	bool m_bIsWorkshopItemTool; // 0x34	
	bool m_bCanHighlightSubassets; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	CUtlVector< CUtlString > m_AssetTypes; // 0x38	
	CUtlVector< CUtlString > m_LimitToMods; // 0x50	
	CUtlVector< CUtlString > m_ExcludeFromMods; // 0x68	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CResourceAssetTypeInfo : public CSimpleAssetTypeInfo
{
public:
	CUtlString m_CompilerIdentifier; // 0xd0	
	CUtlVector< CUtlString > m_CompileDependsOnResourceTypes; // 0xd8	
	CUtlVector< ResourceBlockTypeInfo_t > m_Blocks; // 0xf0	
	bool m_bPreventDirectCompile; // 0x108	
	bool m_bCannotBeAMultiParentChildCompile; // 0x109	
	bool m_bPrefersIconForThumbnail; // 0x10a	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CBitmapAssetTypeInfo : public CSimpleAssetTypeInfo
{
public:
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
class CModuleManifests
{
public:
	CUtlVector< CManifestInfo > m_Manifests; // 0x0	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CExternalToolInfo : public CBaseToolInfo
{
public:
	CUtlString m_Executable; // 0x20	
	CUtlString m_Args; // 0x28	
	CUtlString m_ArgsWithLineColumn; // 0x30	
	CUtlString m_WorkingDir; // 0x38	
	CUtlString m_MatchSystemExecutable; // 0x40	
	CUtlVector< CUtlString > m_SupportedExts; // 0x48	
	CUtlVector< CUtlString > m_PriorityExts; // 0x60	
	bool m_bDebugCommandline; // 0x78	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CAssetTypeConfig
{
public:
	CUtlVector< CSimpleAssetTypeInfo* > m_AssetTypes; // 0x0	
	CUtlVector< CAssetWarning* > m_AssetWarnings; // 0x18	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x158
// 
// MGetKV3ClassDefaults
struct AutoTagVDataCondition_t
{
public:
	// MPropertyDescription "The VData file to read"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVDataResource > > m_SourceFile; // 0x0	
	// MPropertyDescription "The key whose value must match the asset name (ie. something like 'm_Model' if you want to apply this tag to .vmdl assets that are referenced by the vdata file)"
	CKV3MemberNameWithStorage m_AssetKey; // 0xe0	
	// MPropertyDescription "Optional second key to check"
	CKV3MemberNameWithStorage m_AlternateAssetKey; // 0x118	
	// MPropertyDescription "This expression determines whether the tag should actually be applied to an asset
It will be evaluated against vdata entries where the key matches the asset - if any of them evaluate to true the tag will be applied.
Most simple expressions involving the VData keys are supported. Use 'true' to tag unconditionally."
	CUtlString m_Expression; // 0x150	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct ResourceBlockTypeInfo_t
{
public:
	ResourceDataEncodingType_t m_Encoding; // 0x0	
	CUtlString m_BlockID; // 0x8	
	CUtlString m_IntrospectedRootStruct; // 0x10	
	int32_t m_ResourceVersion; // 0x18	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
class CToolsConfig
{
public:
	CUtlVector< CEngineToolInfo > m_EngineTools; // 0x0	
	CUtlVector< CExternalToolInfo > m_ExternalTools; // 0x18	
	CUtlVector< CUtlString > m_EngineModulesThatReferenceAssets; // 0x30	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct AssetEngineCommand_t
{
public:
	CBufferString m_Command; // 0x0	
	CBufferString m_Icon; // 0x10	
	CBufferString m_Description; // 0x20	
	bool m_bBringEngineToFront; // 0x30	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct InfoDataFilter_t
{
public:
	CUtlString m_Name; // 0x0	
	AssetEditInfoFilterFunc_t m_FilterFunc; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlString m_Value; // 0x10	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CMapAssetTypeInfo : public CResourceAssetTypeInfo
{
public:
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CManifestInfo
{
public:
	CUtlString m_Name; // 0x0	
	CUtlString m_Group; // 0x8	
	CUtlString m_Mod; // 0x10	
	CUtlString m_SourceFile; // 0x18	
	int32_t m_nSourceLine; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< CUtlString > m_Resources; // 0x28	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x1e0
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataOutlinerDetailExpr
// MVDataOutlinerIconExpr
class CAssetTagInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MPropertyDescription "User-facing tag name"
	CUtlString m_TagName; // 0x30	
	// MPropertyDescription "User-facing description of the tag"
	// MPropertyAttributeEditor "TextBlock()"
	CUtlString m_TagDescription; // 0x38	
	// MPropertyDescription "Icon associated with the tag"
	// MPropertyAttributeEditor "ToolImage( 16 )"
	CUtlString m_TagIcon; // 0x40	
	// MPropertyDescription "Color for the tag badge"
	Color m_TagColor; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyDescription "Alternate strings this tag will match when searching for assets by name."
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_TagAliases; // 0x50	
	// MPropertyDescription "If set, draw this as an overlay image on the asset preview"
	// MPropertyAttributeEditor "ToolImage( 64 )"
	CUtlString m_ThumbnailOverlayImage; // 0x68	
	// MPropertyDescription "If set, the presence of this tag will cause the tools to suppress or dissuade use in several ways (and draw a red X over the asset preview)"
	bool m_bTagIndicatesRejectedAsset; // 0x70	
	// MPropertyDescription "If set, the presence of this tag will cause the tools to hide the asset from users by default. NOTE: This means if an asset gets tagged with this it might 'dissapear' from the UI!"
	bool m_bTagHidesAssetByDefault; // 0x71	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	// MPropertyStartGroup "+Auto Tags"
	// MPropertyDescription "Required for any auto-tag. Restricts the auto-application of this tag to a specific asset type (string from assettypes_common.txt like 'material_asset' or 'model_asset')"
	CUtlString m_RestrictAutoTagToAssetType; // 0x78	
	// MPropertyDescription "Set this to automatically apply this tag based on an asset filter string. (NOTE: Auto tag names MUST start with an '@' character!)"
	// MPropertyAutoExpandSelf
	// MPropertySuppressExpr "m_RestrictAutoTagToAssetType == """
	CUtlString m_AutoFilterTag; // 0x80	
	// MPropertyDescription "Set this to automatically apply this tag to assets based on references from a VData file. (NOTE: Auto tag names MUST start with an '@' character!)"
	// MPropertyAutoExpandSelf
	// MPropertySuppressExpr "m_RestrictAutoTagToAssetType == """
	// -> m_SourceFile - 0x88
	// -> m_AssetKey - 0x168
	// -> m_AlternateAssetKey - 0x1a0
	// -> m_Expression - 0x1d8
	AutoTagVDataCondition_t m_AutoDataTag; // 0x88	
};

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CAssetWarningCheck
{
public:
	CUtlString m_AssetType; // 0x0	
	CBufferString m_RequireSearchableIntKey; // 0x8	
	int32_t m_RequireSearchableIntValue; // 0x18	
	bool m_bOnlyWarnIfGameFilePresent; // 0x1c	
	bool m_bOnlyWarnIfContentFilePresent; // 0x1d	
	bool m_bOnlyWarnAddons; // 0x1e	
private:
	[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
public:
	CUtlVector< CUtlString > m_ExcludeAddonNames; // 0x20	
	CUtlString m_FixDescription; // 0x38	
	AssetWarningFixType_t m_FixType; // 0x40	
};

