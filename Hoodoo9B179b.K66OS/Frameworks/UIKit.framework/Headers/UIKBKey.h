/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "NSCopying.h"

@class NSString, UIKBAttributeList, NSArray;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_representedString;	// 64 = 0x40
	NSString *m_displayString;	// 68 = 0x44
	NSString *m_displayType;	// 72 = 0x48
	NSString *m_interactionType;	// 76 = 0x4c
	NSString *m_variantType;	// 80 = 0x50
	UIKBAttributeList *m_attributes;	// 84 = 0x54
	unsigned m_displayTypeHint;	// 88 = 0x58
	NSString *m_displayRowHint;	// 92 = 0x5c
	NSArray *m_variantKeys;	// 96 = 0x60
	NSString *m_overrideDisplayString;	// 100 = 0x64
	NSString *m_clientVariantRepresentedString;	// 104 = 0x68
	NSString *m_clientVariantActionName;	// 108 = 0x6c
	BOOL m_visible;	// 112 = 0x70
	BOOL m_ghost;	// 113 = 0x71
	int m_splitMode;	// 116 = 0x74
	NSArray *m_flicks;	// 120 = 0x78
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x331c1ca1; S=0x331c1479; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x331c1a11; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x331c1de1; S=0x331c1df1; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x331c1dad; S=0x331c1dbd; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x331c16d9; S=0x331c1725; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x331c1d11; S=0x331c1d21; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x331c1bd1; S=0x331c1be1; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x331c1c05; S=0x331c1c15; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x331c1cf1; S=0x331c1d01; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x331c1e15; S=0x331c1e25; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x331c1439; S=0x331c145d; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x331c1c39; S=0x331c1c49; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x331c1985; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x331c1cd1; S=0x331c1ce1; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x331c1b69; S=0x331c1b79; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x331c1d79; S=0x331c1d89; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x331c1811; S=0x331c183d; 
@property(copy, nonatomic) NSString *representedString;	// G=0x331c1b9d; S=0x331c1bad; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x331c1e49; S=0x331c1e59; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x331c18ad; S=0x331c1915; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x331c1775; S=0x331c17a1; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x331c1d45; S=0x331c1d55; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x331c16ad; S=0x331c163d; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x331c1c6d; S=0x331c1c7d; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x331c1cb1; S=0x331c1cc1; @synthesize=m_visible
+ (id)key;	// 0x331c0a09
+ (id)keyWithKey:(id)key;	// 0x331c0a51
- (id)init;	// 0x331c0dad
- (id)initWithCoder:(id)coder;	// 0x331c1109
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x331c0e01
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x331c0e79
// declared property getter: - (id)attributes;	// 0x331c1ca1
- (BOOL)behavesAsShiftKey;	// 0x331c1b15
// declared property getter: - (id)cacheKey;	// 0x331c1a11
// declared property getter: - (id)clientVariantActionName;	// 0x331c1de1
// declared property getter: - (id)clientVariantRepresentedString;	// 0x331c1dad
- (id)copyWithZone:(NSZone *)zone;	// 0x331c13c9
- (void)dealloc;	// 0x331c0fe1
- (id)description;	// 0x331c13d9
// declared property getter: - (BOOL)disabled;	// 0x331c16d9
// declared property getter: - (id)displayRowHint;	// 0x331c1d11
// declared property getter: - (id)displayString;	// 0x331c1bd1
// declared property getter: - (id)displayType;	// 0x331c1c05
// declared property getter: - (unsigned)displayTypeHint;	// 0x331c1cf1
- (void)encodeWithCoder:(id)coder;	// 0x331c12ad
// declared property getter: - (id)flicks;	// 0x331c1e15
// declared property getter: - (BOOL)hidden;	// 0x331c1439
// declared property getter: - (id)interactionType;	// 0x331c1c39
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x331c1985
// declared property getter: - (BOOL)isGhost;	// 0x331c1cd1
- (void)mergeAttributes:(id)attributes;	// 0x331c14b9
// declared property getter: - (id)name;	// 0x331c1b69
// declared property getter: - (id)overrideDisplayString;	// 0x331c1d79
- (void)removeClientVariantActionInfo;	// 0x331c19dd
// declared property getter: - (id)rendering;	// 0x331c1811
// declared property getter: - (id)representedString;	// 0x331c1b9d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x331c1479
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x331c1df1
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x331c1dbd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x331c1725
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x331c1d21
// declared property setter: - (void)setDisplayString:(id)string;	// 0x331c1be1
// declared property setter: - (void)setDisplayType:(id)type;	// 0x331c1c15
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x331c1d01
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x331c1e25
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x331c145d
// declared property setter: - (void)setInteractionType:(id)type;	// 0x331c1c49
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x331c1ce1
// declared property setter: - (void)setName:(id)name;	// 0x331c1b79
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x331c1d89
// declared property setter: - (void)setRendering:(id)rendering;	// 0x331c183d
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x331c1bad
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x331c1e59
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x331c1915
// declared property setter: - (void)setTint:(id)tint;	// 0x331c17a1
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x331c1d55
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x331c163d
// declared property setter: - (void)setVariantType:(id)type;	// 0x331c1c7d
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x331c1cc1
// declared property getter: - (int)splitMode;	// 0x331c1e49
// converted property getter: - (int)textAlignment;	// 0x331c18ad
// declared property getter: - (id)tint;	// 0x331c1775
- (id)variantDisplayString;	// 0x331c1501
// declared property getter: - (id)variantKeys;	// 0x331c1d45
// converted property getter: - (id)variantPopupBias;	// 0x331c16ad
// declared property getter: - (id)variantType;	// 0x331c1c6d
// declared property getter: - (BOOL)visible;	// 0x331c1cb1
@end

