/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keys;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x33c7f099; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x33c7f0ed; S=0x33c7f0fd; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x33c7f0b9; S=0x33c7f0c9; @synthesize=m_name
+ (id)keylist;	// 0x33c7eac1
- (id)init;	// 0x33c7eb71
- (id)initWithCoder:(id)coder;	// 0x33c7ec35
- (id)initWithName:(id)name keys:(id)keys;	// 0x33c7eb09
- (id)copyWithZone:(NSZone *)zone;	// 0x33c7ed05
// declared property getter: - (unsigned)count;	// 0x33c7f099
- (void)dealloc;	// 0x33c7ebd5
- (id)description;	// 0x33c7f019
- (void)encodeWithCoder:(id)coder;	// 0x33c7ecad
- (id)keyWithName:(id)name;	// 0x33c7ee5d
// declared property getter: - (id)keys;	// 0x33c7f0ed
- (id)keysWithInteractionType:(id)interactionType;	// 0x33c7ef21
// declared property getter: - (id)name;	// 0x33c7f0b9
// declared property setter: - (void)setKeys:(id)keys;	// 0x33c7f0fd
// declared property setter: - (void)setName:(id)name;	// 0x33c7f0c9
@end

