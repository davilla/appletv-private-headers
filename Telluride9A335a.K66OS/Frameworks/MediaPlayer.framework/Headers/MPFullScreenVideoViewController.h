/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"
#import "MPVideoOverlayDelegate.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
@private
	MPFullScreenVideoOverlay *_overlayView;	// 284 = 0x11c
	int _autorotationState;	// 288 = 0x120
	BOOL _inhibitOverlay;	// 292 = 0x124
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x301119a9; S=0x301119cd; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x30112d59; S=0x30112d69; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x30112d39; S=0x30112d49; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x30111f85; 
- (id)init;	// 0x30111221
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x30112ab9
- (void)_reallyRemoveOverlay;	// 0x30112cd1
- (void)_rotationAnimationFinished:(id)finished;	// 0x30112bdd
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x301119a9
// declared property getter: - (int)autorotationState;	// 0x30112d59
- (BOOL)controlsOverlayVisible;	// 0x30111979
- (id)createChapterFlipTransition;	// 0x30111841
- (void)dealloc;	// 0x3011127d
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x30112309
// converted property getter: - (BOOL)inhibitOverlay;	// 0x30112d39
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x30111459
- (void)overlayTappedBackButton:(id)button;	// 0x301128e9
- (void)overlayTappedScaleModeButton:(id)button;	// 0x301129c5
// declared property getter: - (id)overlayView;	// 0x30111f85
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x30112445
- (void)removeChildViewController:(id)controller;	// 0x30111521
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x301119cd
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x30112d69
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x30111669
- (void)setDisabledParts:(unsigned)parts;	// 0x30111759
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x30112d49
- (void)setItem:(id)item;	// 0x301115e9
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x301117c9
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x301116d9
- (void)showChaptersController;	// 0x301118f5
- (void)showOverlayAnimated:(BOOL)animated;	// 0x301121c1
- (void)startTicking;	// 0x301113f9
- (void)stopTicking;	// 0x30111439
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x301129f1
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x301119ed
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x301125fd
- (id)videoOverlayView;	// 0x301121a1
- (id)videoOverlayViewIfLoaded;	// 0x301121b1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x30112555
- (void)viewDidAppear:(BOOL)view;	// 0x30111311
- (void)viewDidDisappear:(BOOL)view;	// 0x301113b5
@end

