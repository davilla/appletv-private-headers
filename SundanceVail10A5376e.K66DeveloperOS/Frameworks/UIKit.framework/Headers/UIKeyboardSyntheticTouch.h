/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x304cfc4d; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x304cfc3d; @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// G=0x304cfc5d; S=0x304cfc6d; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x304cfc25; S=0x304cfb85; @synthesize
@property(assign, nonatomic) int phase;	// G=0x304cfbc5; S=0x304cfbd5; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x304cfbe5; S=0x304cfbf5; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x304cfb99; S=0x304cfbb1; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x304cfc05; S=0x304cfc15; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x304cf9d5
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x304cfa31
// declared property getter: - (unsigned char)_pathIdentity;	// 0x304cfc4d
// declared property getter: - (unsigned char)_pathIndex;	// 0x304cfc3d
// declared property getter: - (float)_pathMajorRadius;	// 0x304cfc5d
- (CGPoint)getLocationInWindow;	// 0x304cfb6d
- (CGPoint)locationInView:(id)view;	// 0x304cfabd
// declared property getter: - (CGPoint)locationInWindow;	// 0x304cfc25
// declared property getter: - (int)phase;	// 0x304cfbc5
- (CGPoint)previousLocationInView:(id)view;	// 0x304cfb15
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x304cfb85
// declared property setter: - (void)setPhase:(int)phase;	// 0x304cfbd5
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x304cfbf5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x304cfbb1
// declared property setter: - (void)setWindow:(id)window;	// 0x304cfc15
// declared property setter: - (void)set_pathMajorRadius:(float)radius;	// 0x304cfc6d
// declared property getter: - (unsigned)tapCount;	// 0x304cfbe5
// declared property getter: - (double)timestamp;	// 0x304cfb99
// declared property getter: - (id)window;	// 0x304cfc05
@end

