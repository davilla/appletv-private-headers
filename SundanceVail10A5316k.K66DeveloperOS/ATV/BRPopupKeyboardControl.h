/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class NSTimer, BREvent;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardControl : BRKeyboardControl {
	BREvent *_currentEvent;	// 92 = 0x5c
	NSTimer *_retriggerTimer;	// 96 = 0x60
	long _retriggerCount;	// 100 = 0x64
	BOOL _initialDeleteHoldTimePassed;	// 104 = 0x68
}
@property(retain) id focusedKeyControl;	// G=0x2e1ae5; S=0x2e1b1d; converted property
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x2e13c9
- (BOOL)brEventAction:(id)action;	// 0x2e1575
- (void)dealloc;	// 0x2e14ad
- (id)defaultKeyControl;	// 0x2e1a21
// converted property getter: - (id)focusedKeyControl;	// 0x2e1ae5
- (CGPoint)focusedPoint;	// 0x2e1b75
- (void)retriggerEvent:(id)event;	// 0x2e19a9
- (void)retriggerEvent:(id)event afterDelay:(float)delay;	// 0x2e18e5
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x2e1b1d
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x2e1bfd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2e14f9
@end

