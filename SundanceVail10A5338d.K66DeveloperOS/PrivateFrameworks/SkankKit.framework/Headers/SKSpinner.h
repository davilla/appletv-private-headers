/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKImageLayer.h"

@class NSTimer;

@interface SKSpinner : SKImageLayer {
	CGImageRef *_images;	// 56 = 0x38
	int _count;	// 60 = 0x3c
	BOOL _running;	// 64 = 0x40
	NSTimer *_runTimer;	// 68 = 0x44
	double _spin_rate;	// 72 = 0x48
}
@property(assign) BOOL running;	// G=0x33116b69; S=0x33116b8d; converted property
- (id)init;	// 0x33116925
- (void)dealloc;	// 0x33116a3d
- (void)incrementImage;	// 0x33116aad
// converted property getter: - (BOOL)running;	// 0x33116b69
- (void)setFrame:(CGRect)frame;	// 0x33116b09
// converted property setter: - (void)setRunning:(BOOL)running;	// 0x33116b8d
- (void)setSpinRate:(double)rate;	// 0x33116d09
- (void)spin:(id)spin;	// 0x33116cf9
- (void)start;	// 0x33116cd1
- (void)stop;	// 0x33116ce5
@end
