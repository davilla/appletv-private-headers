/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface UIAnimator : NSObject {
	NSMutableArray *_animations;	// 4 = 0x4
	double _lastUpdateTime;	// 8 = 0x8
	id _heartbeat[3];	// 16 = 0x10
	int _heartbeatClientCount[3];	// 28 = 0x1c
}
+ (void)disableAnimation;	// 0x302a76b9
+ (void)enableAnimation;	// 0x302af901
+ (id)sharedAnimator;	// 0x302d1149
- (void)_LCDHeartbeatCallback:(id)callback;	// 0x3037f785
- (void)_TVHeartbeatCallback:(id)callback;	// 0x30419dcd
- (void)_TimerHeartbeatCallback:(id)callback;	// 0x30419da1
- (void)_addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start startTime:(double)time;	// 0x3037efe5
- (void)_advanceAnimationsOfType:(int)type withTimestamp:(double)timestamp;	// 0x30419e09
- (BOOL)_isRunningAnimation:(id)animation;	// 0x30419f6d
- (void)_startAnimation:(id)animation withStartTime:(double)startTime;	// 0x3037f119
- (void)addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start;	// 0x3037ef81
- (void)addAnimations:(id)animations withDuration:(double)duration start:(BOOL)start;	// 0x30419ba9
- (void)dealloc;	// 0x30419ab9
- (float)fractionForAnimation:(id)animation;	// 0x30419d79
- (void)removeAnimationsForTarget:(id)target;	// 0x302d1201
- (void)removeAnimationsForTarget:(id)target ofKind:(Class)kind;	// 0x302d1241
- (void)startAnimation:(id)animation;	// 0x30419d49
- (void)stopAnimation:(id)animation;	// 0x3037fb4d
@end

