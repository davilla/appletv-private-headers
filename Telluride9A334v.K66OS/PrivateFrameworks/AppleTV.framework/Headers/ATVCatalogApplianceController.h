/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRController.h"

@class BRMerchant, BRPanelControl, BRControl, NSTimer, BRURLDocument;

@interface ATVCatalogApplianceController : BRController <BRSecureResource> {
@private
	BRPanelControl *_contentContainer;	// 80 = 0x50
	id _storeObject;	// 84 = 0x54
	BRControl *_catalogControl;	// 88 = 0x58
	BOOL _controllerToSwapOnActivate;	// 92 = 0x5c
	long _state;	// 96 = 0x60
	NSTimer *_timer;	// 100 = 0x64
	BOOL _isDirty;	// 104 = 0x68
	BOOL _isVolatile;	// 105 = 0x69
	BOOL _autoPlay;	// 106 = 0x6a
	BRMerchant *_merchant;	// 108 = 0x6c
	Class _catalogAgent;	// 112 = 0x70
	BRURLDocument *_document;	// 116 = 0x74
	BOOL requiresAuthentication;	// 120 = 0x78
	BOOL _shouldStartWaitPromptTimerOnActivate;	// 121 = 0x79
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x330b90e9; S=0x330b90f9; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x330b9159; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x330b9149; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x330b8d41; S=0x330b8cbd; 
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x330b9109; S=0x330b9119; @synthesize
@property(assign, nonatomic) BOOL shouldStartWaitPromptTimerOnActivate;	// G=0x330b9129; S=0x330b9139; @synthesize=_shouldStartWaitPromptTimerOnActivate
@property(retain) id storeObject;	// G=0x330b8e81; S=0x330b8e41; converted property
+ (id)control;	// 0x330b8865
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x330b8811
+ (void)initialize;	// 0x330b8765
- (id)init;	// 0x330b889d
- (void)_controlCreated:(id)created;	// 0x330b9f85
- (void)_controlNeedsAuth:(id)auth;	// 0x330ba411
- (void)_enterCompleteState;	// 0x330b9a25
- (void)_enterErrorState;	// 0x330b9861
- (void)_enterWaitingForAuthState;	// 0x330b98dd
- (void)_enterWaitingForControlState;	// 0x330b98f1
- (void)_enterWaitingForInitialState;	// 0x330b97dd
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x330b9c81
- (void)_showWaitTimer:(id)timer;	// 0x330b9c31
- (void)_swapInNewController:(id)newController;	// 0x330b9d2d
- (void)_updateStateForAction:(int)action;	// 0x330b9cc5
- (id)accessibilityLabel;	// 0x330b8f95
- (void)addControls;	// 0x330b9541
// declared property getter: - (BOOL)autoPlay;	// 0x330b90e9
// converted property getter: - (id)catalogControl;	// 0x330b9159
// converted property getter: - (id)contentContainer;	// 0x330b9149
- (void)controlWasActivated;	// 0x330b8a6d
- (void)controlWasDeactivated;	// 0x330b8bfd
- (void)dealloc;	// 0x330b89b5
- (void)didEnterErrorState;	// 0x330b97d1
- (id)errorContent;	// 0x330b9399
- (BOOL)isNetworkDependent;	// 0x330b8cb9
- (void)layoutSubcontrols;	// 0x330b8edd
- (void)markAsDirty;	// 0x330b8eb9
// declared property getter: - (id)merchant;	// 0x330b8d41
- (BOOL)recreateOnReselect;	// 0x330b8ea1
- (void)refreshDirtyPage;	// 0x330b970d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x330b9091
// declared property getter: - (BOOL)requiresAuthentication;	// 0x330b9109
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x330b90f9
- (void)setCatalogAgent:(Class)agent;	// 0x330b8ecd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x330b8cbd
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x330b9119
// declared property setter: - (void)setShouldStartWaitPromptTimerOnActivate:(BOOL)startWaitPromptTimerOnActivate;	// 0x330b9139
// converted property setter: - (void)setStoreObject:(id)object;	// 0x330b8e41
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x330b9169
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x330b8d51
- (BOOL)shouldAllowControllerContent;	// 0x330b97d9
- (BOOL)shouldAllowTransitionOnSwap;	// 0x330b97d5
- (BOOL)shouldShowWaitContent;	// 0x330b9395
// declared property getter: - (BOOL)shouldStartWaitPromptTimerOnActivate;	// 0x330b9129
- (id)storeMerchant;	// 0x330b8e91
// converted property getter: - (id)storeObject;	// 0x330b8e81
- (void)updateContent:(id)content;	// 0x330b9545
- (id)waitContent;	// 0x330b9289
- (float)waitContentDelay;	// 0x330b938d
- (void)wasPopped;	// 0x330b8c51
- (void)willEnterCompleteState;	// 0x330b97cd
@end

