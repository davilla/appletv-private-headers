/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x34ed2c49; S=0x34ee72a5; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x34ed2c61; S=0x34f58649; 
@property(copy) NSString *keyPath;	// G=0x34ed18f5; S=0x34ed0f49; 
@property(retain) CAValueFunction *valueFunction;	// G=0x34ed2c79; S=0x34ee765d; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x34ed0ef9
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x34ed1c35
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x34ed2781
- (BOOL)additive;	// 0x34f58631
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x34f583bd
- (BOOL)cumulative;	// 0x34f58619
// declared property getter: - (BOOL)isAdditive;	// 0x34ed2c49
// declared property getter: - (BOOL)isCumulative;	// 0x34ed2c61
// declared property getter: - (id)keyPath;	// 0x34ed18f5
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x34ee72a5
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x34f58649
// declared property setter: - (void)setKeyPath:(id)path;	// 0x34ed0f49
// declared property setter: - (void)setValueFunction:(id)function;	// 0x34ee765d
// declared property getter: - (id)valueFunction;	// 0x34ed2c79
@end
