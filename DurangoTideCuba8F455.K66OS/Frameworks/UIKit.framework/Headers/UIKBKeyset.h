/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSMutableArray;

@interface UIKBKeyset : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylists;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *keylists;	// G=0x3007eb19; S=0x30158e39; @synthesize=m_keylists
@property(retain, nonatomic) NSString *name;	// G=0x30305c79; S=0x30158aa1; @synthesize=m_name
+ (id)keyset;	// 0x30305e71
- (id)init;	// 0x30158a45
- (id)initWithCoder:(id)coder;	// 0x30305da5
- (BOOL)addKeylist:(id)keylist;	// 0x30305d05
- (id)copyWithZone:(NSZone *)zone;	// 0x30305f85
- (void)dealloc;	// 0x30305e15
- (id)description;	// 0x30305c89
- (void)encodeWithCoder:(id)coder;	// 0x30305d59
- (id)keylistWithName:(id)name;	// 0x30305eb1
// declared property getter: - (id)keylists;	// 0x3007eb19
// declared property getter: - (id)name;	// 0x30305c79
// declared property setter: - (void)setKeylists:(id)keylists;	// 0x30158e39
// declared property setter: - (void)setName:(id)name;	// 0x30158aa1
@end

