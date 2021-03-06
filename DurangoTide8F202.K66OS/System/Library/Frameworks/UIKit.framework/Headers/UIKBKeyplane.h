/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKeyboardRivenKeyplane.h"

@class NSMutableArray, UIKBIdentifierList, UIKBAttributeList, NSArray, NSString;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying, UIKeyboardRivenKeyplane> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylayouts;	// 8 = 0x8
	UIKBAttributeList *m_attributes;	// 12 = 0xc
	UIKBIdentifierList *m_supportedTypes;	// 16 = 0x10
	NSArray *m_keys;	// 20 = 0x14
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x30595e65; S=0x3081e569; @synthesize=m_attributes
@property(retain, nonatomic) NSArray *keylayouts;	// G=0x30595af9; S=0x3081e541; @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x305a1e09; 
@property(readonly, assign, nonatomic) NSArray *keysOrderedByPosition;	// G=0x3081de45; 
@property(retain, nonatomic) NSString *name;	// G=0x3059f4b1; S=0x3081e519; @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList *supportedTypes;	// G=0x3081dd5d; S=0x3081e595; @synthesize=m_supportedTypes
+ (id)keyplane;	// 0x3081e0a1
- (id)init;	// 0x3081e045
- (id)initWithCoder:(id)coder;	// 0x3081def5
- (id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;	// 0x30670039
- (id)alternateKeyplaneName;	// 0x306da409
// declared property getter: - (id)attributes;	// 0x30595e65
- (id)copyWithZone:(NSZone *)zone;	// 0x3081e2b1
- (void)dealloc;	// 0x3081dfb5
- (id)description;	// 0x3081dd9d
- (void)encodeWithCoder:(id)coder;	// 0x3081de71
- (BOOL)isShiftKeyPlaneChooser;	// 0x30595e35
- (BOOL)isShiftKeyplane;	// 0x3059f4c1
- (id)keylayoutWithName:(id)name;	// 0x3081e1e1
// declared property getter: - (id)keylayouts;	// 0x30595af9
// declared property getter: - (id)keys;	// 0x305a1e09
- (id)keysByKeyName:(id)name;	// 0x3081e0e1
// declared property getter: - (id)keysOrderedByPosition;	// 0x3081de45
- (void)layoutInRect:(CGRect)rect;	// 0x30670885
- (BOOL)looksLike:(id)like;	// 0x306c6dd1
- (BOOL)looksLikeShiftAlternate;	// 0x30670f19
// declared property getter: - (id)name;	// 0x3059f4b1
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3081e569
// declared property setter: - (void)setKeylayouts:(id)keylayouts;	// 0x3081e541
// declared property setter: - (void)setName:(id)name;	// 0x3081e519
// declared property setter: - (void)setSupportedTypes:(id)types;	// 0x3081e595
- (id)shiftAlternateKeyplaneName;	// 0x3059f4f1
- (BOOL)shouldSkipCandidateSelection;	// 0x305a0799
// declared property getter: - (id)supportedTypes;	// 0x3081dd5d
- (BOOL)supportsType:(int)type;	// 0x3059f301
- (BOOL)usesAdaptiveKeys;	// 0x3081dd6d
- (BOOL)usesAutoShift;	// 0x3059b27d
- (BOOL)usesKeyCharging;	// 0x30597251
@end

