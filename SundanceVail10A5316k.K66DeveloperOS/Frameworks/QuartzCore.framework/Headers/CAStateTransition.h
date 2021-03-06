/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
@private
	NSString *_fromState;	// 4 = 0x4
	NSString *_toState;	// 8 = 0x8
	NSArray *_elements;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *elements;	// G=0x32a7cb1d; S=0x32a7cb31; @synthesize=_elements
@property(copy, nonatomic) NSString *fromState;	// G=0x32a7cad5; S=0x32a7cae9; @synthesize=_fromState
@property(copy, nonatomic) NSString *toState;	// G=0x32a7caf9; S=0x32a7cb0d; @synthesize=_toState
- (id)init;	// 0x32a7c659
- (id)initWithCoder:(id)coder;	// 0x32a7c90d
- (id)copyWithZone:(NSZone *)zone;	// 0x32a7c9d9
- (void)dealloc;	// 0x32a7c6d1
- (id)debugDescription;	// 0x32a7ca71
- (double)duration;	// 0x32a7c749
// declared property getter: - (id)elements;	// 0x32a7cb1d
- (void)encodeWithCoder:(id)coder;	// 0x32a7c879
// declared property getter: - (id)fromState;	// 0x32a7cad5
// declared property setter: - (void)setElements:(id)elements;	// 0x32a7cb31
// declared property setter: - (void)setFromState:(id)state;	// 0x32a7cae9
// declared property setter: - (void)setToState:(id)state;	// 0x32a7cb0d
// declared property getter: - (id)toState;	// 0x32a7caf9
@end

