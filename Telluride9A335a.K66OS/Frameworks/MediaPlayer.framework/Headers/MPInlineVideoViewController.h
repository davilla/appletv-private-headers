/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSTimer, NSString, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, UIView, UITapGestureRecognizer, UIWindow, MPInlineVideoOverlay, UIPinchGestureRecognizer;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;	// 280 = 0x118
	MPInlineVideoOverlay *_inlineOverlayView;	// 284 = 0x11c
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 288 = 0x120
	MPInlineAudioOverlay *_audioOverlayView;	// 292 = 0x124
	int _audioOverlayStyle;	// 296 = 0x128
	UIView *_overlayViewBeingHidden;	// 300 = 0x12c
	BOOL _overlayViewIsVisible;	// 304 = 0x130
	NSString *_playbackErrorDescription;	// 308 = 0x134
	UITapGestureRecognizer *_tapGestureRecognizer;	// 312 = 0x138
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 316 = 0x13c
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 320 = 0x140
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 324 = 0x144
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 328 = 0x148
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 332 = 0x14c
	NSTimer *_idleTimer;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
	UIWindow *_windowForDisablingAutorotation;	// 344 = 0x158
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 348 = 0x15c
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 348 = 0x15c
	unsigned _animatingOverlay : 1;	// 348 = 0x15c
	unsigned _inCloneMirrorMode : 1;	// 348 = 0x15c
	UIView *_fullscreenView;	// 352 = 0x160
	UIView *_superviewBeforeFullscreen;	// 356 = 0x164
	UIViewController *_parentViewControllerBeforeFullscreen;	// 360 = 0x168
	unsigned _indexInSuperviewBeforeFullscreen;	// 364 = 0x16c
	CGRect _nonFullscreenDestinationFrame;	// 368 = 0x170
	int _desiredInterfaceOrientation;	// 384 = 0x180
	int _previousStatusBarStyle;	// 388 = 0x184
	unsigned _statusBarWasHidden : 1;	// 392 = 0x188
	unsigned _isFullscreen : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransition : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransitionToInline : 1;	// 392 = 0x188
	unsigned _contentViewDidClipToBounds : 1;	// 392 = 0x188
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 392 = 0x188
	unsigned _swallowNextTapGesture : 1;	// 392 = 0x188
	unsigned _exited : 1;	// 392 = 0x188
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x3015c045; S=0x301584b5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x30158565; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x3015c055; S=0x301584fd; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x3015c065; S=0x301583b1; @synthesize=_videoOverlayStyle
- (id)init;	// 0x30156419
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x30158301
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x301591a5
- (void)_cancelOverlayIdleTimer;	// 0x30159c41
- (unsigned)_effectiveItemType;	// 0x3015bf6d
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x30159a59
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x301596a9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x30159995
- (void)_layoutForItemTypeAvailable;	// 0x30158695
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x301581fd
- (void)_removeCoverView;	// 0x3015c009
- (void)_resetOverlayIdleTimer;	// 0x30159b89
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x30159215
- (void)_showOverlayDidEnd;	// 0x30159621
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x3015b281
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x3015b295
- (void)_transitionFromFullscreenDidEnd;	// 0x3015bab9
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x30159e9d
- (void)_transitionToFullscreenDidEnd;	// 0x3015af7d
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x30159ca5
- (BOOL)_useInlineControls;	// 0x3015bfd9
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x3015bfa9
- (void)_viewWasPinched:(id)pinched;	// 0x301580a1
- (void)_viewWasTapped:(id)tapped;	// 0x30157f05
// declared property getter: - (int)audioOverlayStyle;	// 0x3015c045
- (id)audioOverlayViewIfLoaded;	// 0x30159195
- (id)backgroundView;	// 0x30156d95
- (BOOL)canShowQTAudioOnlyUI;	// 0x30157759
- (BOOL)controlsOverlayVisible;	// 0x30156ff5
- (id)createChapterFlipTransition;	// 0x30158575
- (void)dealloc;	// 0x3015652d
- (void)displayVideoViewOnScreen;	// 0x30157289
// declared property getter: - (id)fullscreenView;	// 0x30158565
- (BOOL)isFullscreen;	// 0x30157669
- (BOOL)isTransitioningFromFullscreen;	// 0x30159e71
- (BOOL)isTransitioningToFullscreen;	// 0x30159e41
- (void)loadView;	// 0x30156871
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x30157ef5
- (void)overlayTappedBackButton:(id)button;	// 0x30157e45
- (void)overlayTappedScaleModeButton:(id)button;	// 0x30157ec9
// declared property getter: - (id)playbackErrorDescription;	// 0x3015c055
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x30158619
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30157dcd
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x30156ad9
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x301584b5
- (void)setControlsNeedLayout;	// 0x30157405
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x30157005
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x30156c05
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x301576c1
- (void)setDisabledParts:(unsigned)parts;	// 0x30156d49
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3015767d
- (void)setItem:(id)item;	// 0x30156b39
- (void)setItemTypeOverride:(unsigned)override;	// 0x30157719
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x30157035
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x301584fd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x301569ed
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x301583b1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x30156c65
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30157031
- (void)startTicking;	// 0x3015699d
- (void)stopTicking;	// 0x301569c5
- (void)swipableViewHadActivity:(id)activity;	// 0x3015698d
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x301577b5
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x301577d1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x301577ed
// declared property getter: - (int)videoOverlayStyle;	// 0x3015c065
- (id)videoOverlayView;	// 0x30158cc9
- (id)videoOverlayViewIfLoaded;	// 0x30159159
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x30158371
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x30158291
- (void)viewDidAppear:(BOOL)view;	// 0x3015690d
- (void)viewDidDisappear:(BOOL)view;	// 0x3015694d
@end

