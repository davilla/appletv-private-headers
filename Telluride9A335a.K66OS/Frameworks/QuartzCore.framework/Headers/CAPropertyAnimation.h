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
@property(assign, getter=isAdditive) BOOL additive;	// G=0x335a2a15; S=0x335b6e7d; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x335a2a2d; S=0x33627859; 
@property(copy) NSString *keyPath;	// G=0x335a16bd; S=0x335a0d11; 
@property(retain) CAValueFunction *valueFunction;	// G=0x335a2a45; S=0x335b7235; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x335a0cc1
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x335a19fd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x335a254d
- (BOOL)additive;	// 0x33627841
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x336275cd
- (BOOL)cumulative;	// 0x33627829
// declared property getter: - (BOOL)isAdditive;	// 0x335a2a15
// declared property getter: - (BOOL)isCumulative;	// 0x335a2a2d
// declared property getter: - (id)keyPath;	// 0x335a16bd
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x335b6e7d
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x33627859
// declared property setter: - (void)setKeyPath:(id)path;	// 0x335a0d11
// declared property setter: - (void)setValueFunction:(id)function;	// 0x335b7235
// declared property getter: - (id)valueFunction;	// 0x335a2a45
@end

