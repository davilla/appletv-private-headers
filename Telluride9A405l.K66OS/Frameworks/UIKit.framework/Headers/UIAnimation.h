/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;	// 20 = 0x14
@private
	double _startTime;	// 24 = 0x18
	double _duration;	// 32 = 0x20
	int _state;	// 40 = 0x28
}
@property(assign) SEL action;	// G=0x32dc7c75; S=0x32e0b835; converted property
@property(retain) id completion;	// G=0x32dc7c65; S=0x32e585dd; converted property
@property(assign) id delegate;	// G=0x32dc7489; S=0x32dc702d; converted property
@property(readonly, assign) int state;	// G=0x32dc7185; converted property
@property(readonly, retain) id target;	// G=0x32e0bc01; converted property
- (id)initWithTarget:(id)target;	// 0x32dc6f21
// converted property getter: - (SEL)action;	// 0x32dc7c75
// converted property getter: - (id)completion;	// 0x32dc7c65
- (void)dealloc;	// 0x32dc7c85
// converted property getter: - (id)delegate;	// 0x32dc7489
- (float)fractionForTime:(double)time;	// 0x32dc760d
- (void)markStart:(double)start;	// 0x32dc745d
- (void)markStop;	// 0x32dc7c51
- (float)progressForFraction:(float)fraction;	// 0x32dc76b5
// converted property setter: - (void)setAction:(SEL)action;	// 0x32e0b835
- (void)setAnimationCurve:(int)curve;	// 0x32e0b81d
// converted property setter: - (void)setCompletion:(id)completion;	// 0x32e585dd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32dc702d
- (void)setDuration:(double)duration;	// 0x32dc7195
- (void)setProgress:(float)progress;	// 0x32e5861d
// converted property getter: - (int)state;	// 0x32dc7185
- (void)stopAnimation;	// 0x32e585a5
// converted property getter: - (id)target;	// 0x32e0bc01
- (BOOL)tvOutput;	// 0x32dc7449
@end

