/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimation : NSObject {
	id _completion;	// 4 = 0x4
	int _state;	// 8 = 0x8
	unsigned _began : 1;	// 12 = 0xc
	unsigned _running : 1;	// 12 = 0xc
	unsigned _yield : 1;	// 12 = 0xc
	unsigned _grouped : 1;	// 12 = 0xc
	unsigned _usesNSTimer : 1;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int state;	// G=0x30fbcc75; 
+ (void)_updateAnimations:(id)animations;	// 0x30fbbf51
+ (void)_updateAnimations:(id)animations timer:(id)timer;	// 0x30fbb829
+ (void)_updateAnimationsWithTimer:(id)timer;	// 0x30fbbf65
+ (id)dynamicAnimationForView:(id)view withInitialValue:(double)initialValue velocity:(double)velocity type:(int)type anchorPoint:(CGPoint)point;	// 0x30fbbf79
- (id)init;	// 0x30fbc539
- (BOOL)_animateForInterval:(double)interval;	// 0x30fbc6b1
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x30fbcd21
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x30fbcd1d
- (void)_callAppliers:(id)appliers additionalEndAppliers:(id)appliers2 done:(BOOL)done;	// 0x30fbc6b5
- (void)_cancelWithAppliers:(id)appliers;	// 0x30fbcc2d
- (BOOL)_isGrouped;	// 0x30fbccdd
- (BOOL)_isRunning;	// 0x30fbcd09
- (void)_setGrouped:(BOOL)grouped;	// 0x30fbccf1
- (void)_setShouldYield:(BOOL)_set;	// 0x30fbcc99
- (void)_setUsesNSTimer:(BOOL)timer;	// 0x30fbccc5
- (BOOL)_shouldYield;	// 0x30fbcc85
- (void)_stopAnimation;	// 0x30fbc651
- (BOOL)_usesNSTimer;	// 0x30fbccb1
- (void)dealloc;	// 0x30fbc605
- (id)description;	// 0x30fbcf59
- (void)runWithCompletion:(id)completion;	// 0x30fbcba9
- (void)runWithCompletion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x30fbc749
// declared property getter: - (int)state;	// 0x30fbcc75
- (void)stop;	// 0x30fbcbc9
@end

