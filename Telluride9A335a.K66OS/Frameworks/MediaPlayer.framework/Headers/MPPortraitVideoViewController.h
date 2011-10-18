/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"

@class UINavigationBar, MPPortraitInfoOverlay, MPPortraitTransportControls;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	MPPortraitInfoOverlay *_overlayView;	// 280 = 0x118
	UINavigationBar *_navigationBar;	// 284 = 0x11c
	MPPortraitTransportControls *_transportControls;	// 288 = 0x120
	unsigned _ownsTransportControls : 1;	// 292 = 0x124
	unsigned _waitingToShowOverlay : 1;	// 292 = 0x124
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x30114d45; S=0x30114d69; converted property
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x301156f1; S=0x30115701; @synthesize=_navigationBar
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;	// G=0x30114e41; 
+ (BOOL)supportsFullscreenDisplay;	// 0x30114001
- (id)init;	// 0x30114005
- (id)initWithTransportControls:(BOOL)transportControls;	// 0x30114019
- (void)_handleSwipeRight;	// 0x30115601
- (id)_overlayView;	// 0x30115425
- (void)_removeOverlayView;	// 0x30115685
- (void)_showOverlayView:(BOOL)view;	// 0x3011410d
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x30114d45
- (CGRect)backgroundViewSnapshotFrame;	// 0x30115375
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x30114339
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x30114389
- (id)createChapterFlipTransition;	// 0x3011446d
- (void)dealloc;	// 0x30114071
- (void)displayVideoViewOnScreen;	// 0x3011455d
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)transferedOverlayView;	// 0x30114961
- (BOOL)isStatusBarHidden;	// 0x301141a1
- (void)loadView;	// 0x3011461d
// declared property getter: - (id)navigationBar;	// 0x301156f1
- (id)newAlternateTracksTransition;	// 0x301143f1
- (id)newOverlayViewWithFrame:(CGRect)frame;	// 0x3011532d
// declared property getter: - (BOOL)ownsTransportControls;	// 0x30114e41
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x30114d69
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x30114d89
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x30114309
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x30114a45
- (void)setDisabledParts:(unsigned)parts;	// 0x30114ab1
- (void)setItem:(id)item;	// 0x30114e55
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x30115701
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x30114ec9
- (void)setPlayer:(id)player;	// 0x30114de1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x30114b0d
- (void)showChaptersController;	// 0x30114c61
- (void)showOverlayView;	// 0x301142d9
- (void)startTicking;	// 0x30114b99
- (int)statusBarStyle;	// 0x3011419d
- (void)stopTicking;	// 0x30114bb9
- (void)swipableView:(id)view swipedInDirection:(int)direction;	// 0x30114ef9
- (void)swipableView:(id)view tappedWithCount:(unsigned)count;	// 0x30114f2d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x30114fc1
- (void)transportControlsDidResize:(id)transportControls;	// 0x3011521d
- (id)videoOverlayView;	// 0x301155e1
- (id)videoOverlayViewIfLoaded;	// 0x301155f1
- (void)viewDidAppear:(BOOL)view;	// 0x301141a5
- (void)viewDidDisappear:(BOOL)view;	// 0x30114c1d
- (void)viewWillAppear:(BOOL)view;	// 0x30114bd9
@end

