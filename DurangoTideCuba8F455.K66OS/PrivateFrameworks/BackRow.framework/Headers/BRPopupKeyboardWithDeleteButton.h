/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRKeyboard.h"
#import "BackRow-Structs.h"

@class BREvent, NSTimer, BRPopupKeyboardVariableWidthKeyRowPlane;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
@private
	BREvent *_currentEvent;	// 32 = 0x20
	BRPopupKeyboardVariableWidthKeyRowPlane *_customKeyRow;	// 36 = 0x24
	NSTimer *_retriggerTimer;	// 40 = 0x28
	long _retriggerCount;	// 44 = 0x2c
	BOOL _initialDeleteHoldTimePassed;	// 48 = 0x30
}
- (BOOL)_baseKeyControlIsStringTypeGlyph;	// 0x3301f321
- (id)_filterRawKeyboardData:(id)data;	// 0x3301f545
- (id)_keyRows;	// 0x3301f41d
- (void)_retriggerEvent:(id)event;	// 0x3301f1fd
- (void)_retriggerEvent:(id)event afterDelay:(float)delay;	// 0x3301f269
- (void)dealloc;	// 0x3301fab9
- (BOOL)handleEvent:(id)event;	// 0x3301fb15
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x3301f385
- (float)popupKeyboardWidth:(id)width;	// 0x3301fea1
@end

