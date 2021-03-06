/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBShape.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableArray, UIKBKeyset, NSString;

@interface UIKBKeylayout : UIKBShape <NSCoding, NSCopying> {
	NSString *m_name;	// 64 = 0x40
	UIKBKeyset *m_keyset;	// 68 = 0x44
	NSMutableArray *m_refs;	// 72 = 0x48
}
@property(retain, nonatomic) UIKBKeyset *keyset;	// G=0x30379fd5; S=0x30379fe5; @synthesize=m_keyset
@property(retain, nonatomic) NSString *name;	// G=0x30379fb5; S=0x30379fc5; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *references;	// G=0x303799e9; 
+ (id)keylayout;	// 0x303791c1
- (id)init;	// 0x30379209
- (id)initWithCoder:(id)coder;	// 0x303792e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3037944d
- (void)dealloc;	// 0x30379271
- (id)description;	// 0x303796f9
- (void)encodeWithCoder:(id)coder;	// 0x303793b1
// declared property getter: - (id)keyset;	// 0x30379fd5
- (void)layoutInRect:(CGRect)rect;	// 0x30379a35
// declared property getter: - (id)name;	// 0x30379fb5
- (id)referenceWithName:(id)name;	// 0x30379901
// declared property getter: - (id)references;	// 0x303799e9
// declared property setter: - (void)setKeyset:(id)keyset;	// 0x30379fe5
// declared property setter: - (void)setName:(id)name;	// 0x30379fc5
- (void)setRef:(id)ref;	// 0x303799f9
- (void)setReferenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x30379789
@end

