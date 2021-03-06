/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPSwipableViewDelegate.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"


@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	unsigned _requestExitAfterHidingControls : 1;	// 224 = 0xe0
	unsigned _rotateAfterHidingControls : 1;	// 224 = 0xe0
	unsigned _showControlsAfterRotate : 1;	// 224 = 0xe0
	unsigned _autoHidingForItemChange : 1;	// 224 = 0xe0
	unsigned _scheduledAutoHide : 1;	// 224 = 0xe0
}
@property(assign) BOOL inhibitOverlay;	// G=0x33744291; S=0x33744295; converted property
- (id)init;	// 0x33746c89
- (void)_autohideControlsOverlay;	// 0x337462e1
- (void)_hideOverlayWithAnimation:(BOOL)animation;	// 0x337462c9
- (void)_hideOverlayWithAnimation:(BOOL)animation shouldUpdateAutohideFlag:(BOOL)flag;	// 0x33746275
- (void)_resumedEventsOnlyNotification:(id)notification;	// 0x337463f9
- (void)_setStatusBarVisible:(BOOL)visible duration:(float)duration;	// 0x33746131
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x3374429d
- (void)_stopWatchingAVController;	// 0x337460c5
- (int)_validInterfaceOrientation;	// 0x33746045
- (void)bufferingStateChangedNotification:(id)notification;	// 0x3374647d
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x33746b89
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x33746a4d
- (void)cancelControlsOverlayAutohide;	// 0x33746371
- (BOOL)controlsOverlayVisible;	// 0x33744299
- (void)dealloc;	// 0x33746bf9
- (void)displayVideoViewOnScreen;	// 0x337476a9
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x337463b9
// converted property getter: - (BOOL)inhibitOverlay;	// 0x33744291
- (void)loadView;	// 0x33746755
- (id)newAlternateTracksTransition;	// 0x33746acd
- (BOOL)phoneTVOutModeEnabled;	// 0x33746079
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x33746411
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)delay;	// 0x33746311
- (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x337468bd
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x337469e9
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x33744335
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x3374685d
- (void)setDisabledParts:(unsigned)parts;	// 0x337442f9
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x33744295
- (void)setItem:(id)item;	// 0x33746b1d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x33746dd1
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x33746901
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x33746959
- (void)showOverlayAnimated:(BOOL)animated;	// 0x337463cd
- (void)showOverlayIfNecessary;	// 0x33746bb1
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x33746595
- (void)swipableViewHadActivity:(id)activity;	// 0x33746565
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x337442a1
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x3374654d
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x33746535
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x3374680d
- (void)viewDidAppear:(BOOL)view;	// 0x33746d35
- (void)viewWillAppear:(BOOL)view;	// 0x337466f1
- (void)viewWillDisappear:(BOOL)view;	// 0x337477f1
@end

