/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, UIKBAttributeList, NSString, UIKBIdentifierList, NSArray;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylayouts;	// 8 = 0x8
	UIKBAttributeList *m_attributes;	// 12 = 0xc
	UIKBIdentifierList *m_supportedTypes;	// 16 = 0x10
	NSArray *m_keys;	// 20 = 0x14
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x305348e5; S=0x305348f9; @synthesize=m_attributes
@property(retain, nonatomic) NSArray *keylayouts;	// G=0x305348c5; S=0x305348d5; @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x30533f41; 
@property(readonly, assign, nonatomic) NSArray *keysOrderedByPosition;	// G=0x30534119; 
@property(retain, nonatomic) NSString *name;	// G=0x305348a5; S=0x305348b5; @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList *supportedTypes;	// G=0x30534909; S=0x3053491d; @synthesize=m_supportedTypes
+ (id)keyplane;	// 0x305337c9
- (id)init;	// 0x30533811
- (id)initWithCoder:(id)coder;	// 0x305339bd
- (id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;	// 0x30533879
- (id)alternateKeyplaneName;	// 0x305344e9
// declared property getter: - (id)attributes;	// 0x305348e5
- (id)copyWithZone:(NSZone *)zone;	// 0x30533b19
- (void)dealloc;	// 0x3053391d
- (id)description;	// 0x30534409
- (void)encodeWithCoder:(id)coder;	// 0x30533a81
- (BOOL)isShiftKeyPlaneChooser;	// 0x3053462d
- (BOOL)isShiftKeyplane;	// 0x30534591
- (id)keylayoutWithName:(id)name;	// 0x30533cf9
// declared property getter: - (id)keylayouts;	// 0x305348c5
// declared property getter: - (id)keys;	// 0x30533f41
- (id)keysByKeyName:(id)name;	// 0x305342ed
// declared property getter: - (id)keysOrderedByPosition;	// 0x30534119
- (void)layoutInRect:(CGRect)rect;	// 0x30533ddd
- (BOOL)looksLike:(id)like;	// 0x30533ead
- (BOOL)looksLikeShiftAlternate;	// 0x30533f0d
// declared property getter: - (id)name;	// 0x305348a5
- (BOOL)notUseCandidateSelection;	// 0x305345f9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x305348f9
// declared property setter: - (void)setKeylayouts:(id)keylayouts;	// 0x305348d5
// declared property setter: - (void)setName:(id)name;	// 0x305348b5
// declared property setter: - (void)setSupportedTypes:(id)types;	// 0x3053491d
- (id)shiftAlternateKeyplaneName;	// 0x3053453d
- (BOOL)shouldSkipCandidateSelection;	// 0x305345c5
// declared property getter: - (id)supportedTypes;	// 0x30534909
- (BOOL)supportsType:(int)type;	// 0x305346c9
- (BOOL)usesAdaptiveKeys;	// 0x30534661
- (BOOL)usesAutoShift;	// 0x305344b5
- (BOOL)usesKeyCharging;	// 0x30534695
@end
