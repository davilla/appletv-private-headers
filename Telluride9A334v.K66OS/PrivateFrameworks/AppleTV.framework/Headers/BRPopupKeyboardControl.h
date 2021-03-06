/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class NSTimer, BREvent;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardControl : BRKeyboardControl {
@private
	BREvent *_currentEvent;	// 60 = 0x3c
	NSTimer *_retriggerTimer;	// 64 = 0x40
	long _retriggerCount;	// 68 = 0x44
	BOOL _initialDeleteHoldTimePassed;	// 72 = 0x48
}
@property(retain) id focusedKeyControl;	// G=0x33244579; S=0x332445b1; converted property
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x33243e41
- (BOOL)brEventAction:(id)action;	// 0x33243fdd
- (void)dealloc;	// 0x33243f21
- (id)defaultKeyControl;	// 0x332444b9
// converted property getter: - (id)focusedKeyControl;	// 0x33244579
- (CGPoint)focusedPoint;	// 0x33244609
- (void)retriggerEvent:(id)event;	// 0x33244441
- (void)retriggerEvent:(id)event afterDelay:(float)delay;	// 0x3324436d
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x332445b1
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x332446a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33243f6d
@end

