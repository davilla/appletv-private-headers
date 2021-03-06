/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"

@class BRFocusableImageControl, NSString, BRWaitSpinnerControl, NSTimer, BRControl, BRTextControl;

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
@property(retain) id noContentMessage;	// G=0x32f47141; S=0x32f476cd; converted property
@property(assign) BOOL showSpinner;	// G=0x32f46ee9; S=0x32f472e9; converted property
- (id)init;	// 0x32f3959d
- (void)_cleanupControlDelayTimer;	// 0x32f3a7fd
- (void)_controlDelayTimerHandler:(id)handler;	// 0x32f3e529
- (void)_playstateChanged;	// 0x32f3effd
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x32f46f01
- (void)_scrollWillStart:(id)_scroll;	// 0x32f3e479
- (void)_setDislaysActionControl:(BOOL)control;	// 0x32f3a2a1
- (void)_updateActionControl;	// 0x32f39755
- (void)_updateControls;	// 0x32f3972d
- (void)_updateControlsWithDelay;	// 0x32f3e4a1
- (void)_updatePreview;	// 0x32f3987d
- (id)accessibilityScreenContent;	// 0x32f46ff9
- (id)actionItemAtIndex:(long)index;	// 0x32f46efd
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x32f3a29d
- (BOOL)allowUnplayedMark;	// 0x32f3dc0d
- (BOOL)brEventAction:(id)action;	// 0x32f47209
- (void)clearPreviewController;	// 0x32f47171
- (void)controlWasActivated;	// 0x32f47019
- (void)controlWasDeactivated;	// 0x32f3a711
- (void)dealloc;	// 0x32f3a829
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32f3a61d
- (void)layoutSubcontrols;	// 0x32f47391
// converted property getter: - (id)noContentMessage;	// 0x32f47141
- (id)previewControlForItem:(long)item;	// 0x32f46f15
- (void)refreshControllerForModelUpdate;	// 0x32f445d5
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x32f3f575
- (void)resetPreviewController;	// 0x32f471d1
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x32f476cd
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x32f472e9
// converted property getter: - (BOOL)showSpinner;	// 0x32f46ee9
- (void)updatePreviewController;	// 0x32f39719
@end

