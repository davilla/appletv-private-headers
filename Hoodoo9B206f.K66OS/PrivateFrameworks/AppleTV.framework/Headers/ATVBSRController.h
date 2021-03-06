/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, ATVBSRLayer, BRDisplayMode, NSTimer, CADisplay, NSString;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
@private
	id _completionBlock;	// 128 = 0x80
	ATVBSRLayer *_bsrControl;	// 132 = 0x84
	int _selectionKind;	// 136 = 0x88
	BRDisplayMode *_originalMode;	// 140 = 0x8c
	BRDisplayMode *_failedMode;	// 144 = 0x90
	BOOL _originalModeWasAuto;	// 148 = 0x94
	CADisplay *_mainDisplay;	// 152 = 0x98
	NSString *_mainDisplayUniqueID;	// 156 = 0x9c
	NSArray *_listOfResolutionsToTry;	// 160 = 0xa0
	NSTimer *_modeTimer;	// 164 = 0xa4
	int _secondsLeftBeforeNextDisplayMode;	// 168 = 0xa8
	int _attemptedModeNumber;	// 172 = 0xac
	int _numberOfBSRAttempts;	// 176 = 0xb0
	BOOL _isBSRController;	// 180 = 0xb4
	int _result;	// 184 = 0xb8
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x36552589
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x3655260d
- (id)init;	// 0x36552665
- (void)_availableModesChanged;	// 0x36553ac1
- (id)_countdownString;	// 0x36553581
- (BOOL)_executeDisplayChangeEvent;	// 0x36553645
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x36552fd5
- (id)_nextModeToTry;	// 0x36553479
- (void)_playResolutionSwitchFailedSound;	// 0x36553a4d
- (void)_restoreOriginalModeAndPopController;	// 0x36553961
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x3655332d
- (void)_timerCallback:(id)callback;	// 0x365535e5
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x36553299
- (BOOL)brEventAction:(id)action;	// 0x36552aa5
- (void)dealloc;	// 0x3655266d
- (float)heightForRow:(long)row;	// 0x36552e51
- (long)itemCount;	// 0x36552e15
- (id)itemForRow:(long)row;	// 0x36552d39
- (void)itemSelected:(long)selected;	// 0x36552b41
- (void)layoutSubcontrols;	// 0x36552749
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36552e59
- (BOOL)rowSelectable:(long)selectable;	// 0x36552e55
- (id)titleForRow:(long)row;	// 0x36552c2d
- (void)wasPopped;	// 0x365529dd
- (void)wasPushed;	// 0x36552849
@end

