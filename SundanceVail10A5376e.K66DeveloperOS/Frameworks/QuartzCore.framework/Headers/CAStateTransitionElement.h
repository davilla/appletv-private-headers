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

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {
	CALayer *_target;	// 4 = 0x4
	CAAnimation *_animation;	// 8 = 0x8
	NSString *_key;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
}
@property(retain, nonatomic) CAAnimation *animation;	// G=0x33ce34f5; S=0x33ce3505; @synthesize=_animation
@property(assign, nonatomic) double beginTime;	// G=0x33ce3101; S=0x33ce3139; 
@property(assign, nonatomic) double duration;	// G=0x33ce3159; S=0x33ce3191; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x33ce3539; S=0x33ce3551; @synthesize=_enabled
@property(copy, nonatomic) NSString *key;	// G=0x33ce3515; S=0x33ce3529; @synthesize=_key
@property(assign, nonatomic) CALayer *target;	// G=0x33ce34d5; S=0x33ce34e5; @synthesize=_target
- (id)init;	// 0x33ce3059
- (id)initWithCoder:(id)coder;	// 0x33ce3275
// declared property getter: - (id)animation;	// 0x33ce34f5
// declared property getter: - (double)beginTime;	// 0x33ce3101
- (id)copyWithZone:(NSZone *)zone;	// 0x33ce3399
- (void)dealloc;	// 0x33ce3099
- (id)debugDescription;	// 0x33ce3451
// declared property getter: - (double)duration;	// 0x33ce3159
- (void)encodeWithCoder:(id)coder;	// 0x33ce31b1
// declared property getter: - (BOOL)isEnabled;	// 0x33ce3539
// declared property getter: - (id)key;	// 0x33ce3515
// declared property setter: - (void)setAnimation:(id)animation;	// 0x33ce3505
// declared property setter: - (void)setBeginTime:(double)time;	// 0x33ce3139
// declared property setter: - (void)setDuration:(double)duration;	// 0x33ce3191
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x33ce3551
// declared property setter: - (void)setKey:(id)key;	// 0x33ce3529
// declared property setter: - (void)setTarget:(id)target;	// 0x33ce34e5
// declared property getter: - (id)target;	// 0x33ce34d5
@end

