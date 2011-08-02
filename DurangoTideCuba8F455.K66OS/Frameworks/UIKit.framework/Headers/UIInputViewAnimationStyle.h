/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject {
@private
	BOOL animated;	// 4 = 0x4
	double duration;	// 8 = 0x8
	int outDirection;	// 16 = 0x10
	BOOL force;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL animated;	// G=0x301048e1; S=0x3008b98d; @synthesize
@property(assign, nonatomic) double duration;	// G=0x30105495; S=0x3008b99d; @synthesize
@property(assign, nonatomic) BOOL force;	// G=0x301c9229; S=0x301b3fc9; @synthesize
@property(assign, nonatomic) int outDirection;	// G=0x30103d21; S=0x3008b9b1; @synthesize
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;	// 0x3008b90d
+ (id)animationStyleDefault;	// 0x3008b8d5
+ (id)animationStyleImmediate;	// 0x3010f65d
// declared property getter: - (BOOL)animated;	// 0x301048e1
- (id)description;	// 0x30320a91
// declared property getter: - (double)duration;	// 0x30105495
// declared property getter: - (BOOL)force;	// 0x301c9229
- (BOOL)isEqual:(id)equal;	// 0x301a2d95
// declared property getter: - (int)outDirection;	// 0x30103d21
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x3008b98d
// declared property setter: - (void)setDuration:(double)duration;	// 0x3008b99d
// declared property setter: - (void)setForce:(BOOL)force;	// 0x301b3fc9
// declared property setter: - (void)setOutDirection:(int)direction;	// 0x3008b9b1
@end
