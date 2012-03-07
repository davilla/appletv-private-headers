/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, UIKBAttributeList;

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
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x33c7ce39; S=0x33c7c611; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x33c7cba9; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x33c7cf79; S=0x33c7cf89; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x33c7cf45; S=0x33c7cf55; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x33c7c871; S=0x33c7c8bd; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x33c7cea9; S=0x33c7ceb9; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x33c7cd69; S=0x33c7cd79; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x33c7cd9d; S=0x33c7cdad; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x33c7ce89; S=0x33c7ce99; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x33c7cfad; S=0x33c7cfbd; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x33c7c5d1; S=0x33c7c5f5; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x33c7cdd1; S=0x33c7cde1; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x33c7cb1d; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x33c7ce69; S=0x33c7ce79; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x33c7cd01; S=0x33c7cd11; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x33c7cf11; S=0x33c7cf21; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x33c7c9a9; S=0x33c7c9d5; 
@property(copy, nonatomic) NSString *representedString;	// G=0x33c7cd35; S=0x33c7cd45; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x33c7cfe1; S=0x33c7cff1; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x33c7ca45; S=0x33c7caad; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x33c7c90d; S=0x33c7c939; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x33c7cedd; S=0x33c7ceed; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x33c7c845; S=0x33c7c7d5; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x33c7ce05; S=0x33c7ce15; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x33c7ce49; S=0x33c7ce59; @synthesize=m_visible
+ (id)key;	// 0x33c7bba1
+ (id)keyWithKey:(id)key;	// 0x33c7bbe9
- (id)init;	// 0x33c7bf45
- (id)initWithCoder:(id)coder;	// 0x33c7c2a1
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x33c7bf99
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x33c7c011
// declared property getter: - (id)attributes;	// 0x33c7ce39
- (BOOL)behavesAsShiftKey;	// 0x33c7ccad
// declared property getter: - (id)cacheKey;	// 0x33c7cba9
// declared property getter: - (id)clientVariantActionName;	// 0x33c7cf79
// declared property getter: - (id)clientVariantRepresentedString;	// 0x33c7cf45
- (id)copyWithZone:(NSZone *)zone;	// 0x33c7c561
- (void)dealloc;	// 0x33c7c179
- (id)description;	// 0x33c7c571
// declared property getter: - (BOOL)disabled;	// 0x33c7c871
// declared property getter: - (id)displayRowHint;	// 0x33c7cea9
// declared property getter: - (id)displayString;	// 0x33c7cd69
// declared property getter: - (id)displayType;	// 0x33c7cd9d
// declared property getter: - (unsigned)displayTypeHint;	// 0x33c7ce89
- (void)encodeWithCoder:(id)coder;	// 0x33c7c445
// declared property getter: - (id)flicks;	// 0x33c7cfad
// declared property getter: - (BOOL)hidden;	// 0x33c7c5d1
// declared property getter: - (id)interactionType;	// 0x33c7cdd1
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x33c7cb1d
// declared property getter: - (BOOL)isGhost;	// 0x33c7ce69
- (void)mergeAttributes:(id)attributes;	// 0x33c7c651
// declared property getter: - (id)name;	// 0x33c7cd01
// declared property getter: - (id)overrideDisplayString;	// 0x33c7cf11
- (void)removeClientVariantActionInfo;	// 0x33c7cb75
// declared property getter: - (id)rendering;	// 0x33c7c9a9
// declared property getter: - (id)representedString;	// 0x33c7cd35
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33c7c611
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x33c7cf89
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x33c7cf55
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33c7c8bd
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x33c7ceb9
// declared property setter: - (void)setDisplayString:(id)string;	// 0x33c7cd79
// declared property setter: - (void)setDisplayType:(id)type;	// 0x33c7cdad
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x33c7ce99
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x33c7cfbd
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x33c7c5f5
// declared property setter: - (void)setInteractionType:(id)type;	// 0x33c7cde1
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x33c7ce79
// declared property setter: - (void)setName:(id)name;	// 0x33c7cd11
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x33c7cf21
// declared property setter: - (void)setRendering:(id)rendering;	// 0x33c7c9d5
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x33c7cd45
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x33c7cff1
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x33c7caad
// declared property setter: - (void)setTint:(id)tint;	// 0x33c7c939
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x33c7ceed
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x33c7c7d5
// declared property setter: - (void)setVariantType:(id)type;	// 0x33c7ce15
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x33c7ce59
// declared property getter: - (int)splitMode;	// 0x33c7cfe1
// converted property getter: - (int)textAlignment;	// 0x33c7ca45
// declared property getter: - (id)tint;	// 0x33c7c90d
- (id)variantDisplayString;	// 0x33c7c699
// declared property getter: - (id)variantKeys;	// 0x33c7cedd
// converted property getter: - (id)variantPopupBias;	// 0x33c7c845
// declared property getter: - (id)variantType;	// 0x33c7ce05
// declared property getter: - (BOOL)visible;	// 0x33c7ce49
@end
