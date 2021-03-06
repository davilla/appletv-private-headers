/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"

@class BRControl, NSTimer, BRTextControl, BRFocusableImageControl, BRWaitSpinnerControl, NSString;

@interface BRMediaMenuController : BRMenuController {
@private
	BRControl *_previewControl;	// 104 = 0x68
	BRControl *_previewContainer;	// 108 = 0x6c
	NSString *_previewControlItemHash;	// 112 = 0x70
	BRFocusableImageControl *_actionControl;	// 116 = 0x74
	BRWaitSpinnerControl *_spinner;	// 120 = 0x78
	float _controlDelay;	// 124 = 0x7c
	NSTimer *_controlDelayTimer;	// 128 = 0x80
	BRTextControl *_noContentMessageControl;	// 132 = 0x84
}
@property(retain) id noContentMessage;	// G=0x328d15d9; S=0x328d1b65; converted property
@property(assign) BOOL showSpinner;	// G=0x328d1381; S=0x328d1781; converted property
- (id)init;	// 0x328c3ae9
- (void)_cleanupControlDelayTimer;	// 0x328c4d49
- (void)_controlDelayTimerHandler:(id)handler;	// 0x328c8add
- (void)_playstateChanged;	// 0x328c9615
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x328d1399
- (void)_scrollWillStart:(id)_scroll;	// 0x328c8a2d
- (void)_setDislaysActionControl:(BOOL)control;	// 0x328c47ed
- (void)_updateActionControl;	// 0x328c3ca1
- (void)_updateControls;	// 0x328c3c79
- (void)_updateControlsWithDelay;	// 0x328c8a55
- (void)_updatePreview;	// 0x328c3dc9
- (id)accessibilityScreenContent;	// 0x328d1491
- (id)actionItemAtIndex:(long)index;	// 0x328d1395
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x328c47e9
- (BOOL)allowUnplayedMark;	// 0x328c81c1
- (BOOL)brEventAction:(id)action;	// 0x328d16a1
- (void)clearPreviewController;	// 0x328d1609
- (void)controlWasActivated;	// 0x328d14b1
- (void)controlWasDeactivated;	// 0x328c4c5d
- (void)dealloc;	// 0x328c4d75
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x328c4b69
- (void)layoutSubcontrols;	// 0x328d1829
// converted property getter: - (id)noContentMessage;	// 0x328d15d9
- (id)previewControlForItem:(long)item;	// 0x328d13ad
- (void)refreshControllerForModelUpdate;	// 0x328cebdd
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x328c9b7d
- (void)resetPreviewController;	// 0x328d1669
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x328d1b65
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x328d1781
// converted property getter: - (BOOL)showSpinner;	// 0x328d1381
- (void)updatePreviewController;	// 0x328c3c65
@end

