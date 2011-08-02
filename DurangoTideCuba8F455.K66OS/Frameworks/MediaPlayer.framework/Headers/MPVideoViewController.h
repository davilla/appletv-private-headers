/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPViewController.h"
#import "MPSwipableViewDelegate.h"
#import "UIModalViewDelegate.h"
#import "MPVideoTransferViewController.h"

@class MPImageCacheRequest, MPSwipableView, UIProgressIndicator, UIView, UIAlertView, UIImage, MPTVOutWindow, MPVideoBackgroundView, UIColor, MPVideoView;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView *_backgroundView;	// 160 = 0xa0
	MPSwipableView *_backstopView;	// 164 = 0xa4
	unsigned _desiredParts;	// 168 = 0xa8
	unsigned _disabledParts;	// 172 = 0xac
	unsigned _visibleParts;	// 176 = 0xb0
	unsigned _tvOutEnabled : 1;	// 180 = 0xb4
	unsigned _allowsTVOutInBackground : 1;	// 180 = 0xb4
	unsigned _itemTypeOverride;	// 184 = 0xb8
	unsigned _scaleMode;	// 188 = 0xbc
@private
	UIAlertView *_alertSheet;	// 192 = 0xc0
	MPImageCacheRequest *_artworkImageRequest;	// 196 = 0xc4
	UIColor *_backstopColor;	// 200 = 0xc8
	UIProgressIndicator *_loadingIndicator;	// 204 = 0xcc
	MPTVOutWindow *_tvOutWindow;	// 208 = 0xd0
	int _artworkImageStyle;	// 212 = 0xd4
	UIImage *_posterImage;	// 216 = 0xd8
	unsigned _canAnimateControlsOverlay : 1;	// 220 = 0xdc
	unsigned _canShowControlsOverlay : 1;	// 220 = 0xdc
	unsigned _disableControlsAutohide : 1;	// 220 = 0xdc
	unsigned _ownsStatusBar : 1;	// 220 = 0xdc
	unsigned _ownsVideoView : 1;	// 220 = 0xdc
	unsigned _playAfterPop : 1;	// 220 = 0xdc
	unsigned _scheduledLoadingIndicator : 1;	// 220 = 0xdc
	unsigned _displayPlaybackErrorAlerts : 1;	// 220 = 0xdc
	unsigned _allowsDetailScrubbing : 1;	// 221 = 0xdd
	unsigned _attemptAutoPlayWhenControlsHidden : 1;	// 221 = 0xdd
	unsigned _alwaysAllowHidingControlsOverlay : 1;	// 221 = 0xdd
	unsigned _hasShownFirstVideoFrame : 1;	// 221 = 0xdd
	unsigned _allowsWirelessPlayback : 1;	// 221 = 0xdd
	unsigned _disableAutoRotation : 1;	// 221 = 0xdd
	unsigned _inlinePlaybackUsesTVOut : 1;	// 221 = 0xdd
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x335eb2e9; S=0x335ecc39; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x335eb221; S=0x335eb235; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x335eb2fd; S=0x335ecbdd; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x335eb259; S=0x335ecf41; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x335eb3b5; S=0x335eb3c9; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x335eb401; S=0x335eb411; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x335eced9; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x335eb26d; S=0x335ecef9; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x335ed2e5; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x335ee80d; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x335eb431; S=0x335eb7f5; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x335eb35d; S=0x335eb389; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x335ed2ad; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x335eb371; S=0x335eba21; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x335ecb55; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x335eb3ad; S=0x335eba01; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x335eb471; S=0x335ed089; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x335eb281; S=0x335eb295; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x335ed23d; S=0x335eb1e1; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x335eb461; S=0x335ed061; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x335eb311; S=0x335eb321; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x335eb345; S=0x335ecb89; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x335eb2b1; S=0x335eb2c5; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x335eb421; S=0x335eb34d; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x335eb1b9; S=0x335eb1fd; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x335eb3f1; S=0x335ed3ed; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x335eb451; S=0x335ed049; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x335eb2e5; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x335ed499; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x335eb341; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x335eb33d; 
@property(readonly, retain, nonatomic) MPVideoView *videoView;	// G=0x335ecba1; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x335ec929; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x335eb441; S=0x335ecfe5; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x335eeb15
+ (BOOL)isPlayingToTVOut;	// 0x335ed869
+ (id)sharedVideoView:(BOOL)view;	// 0x335ebe81
+ (BOOL)supportsFullscreenDisplay;	// 0x335eb1b5
- (id)init;	// 0x335ed8a1
// declared property getter: - (BOOL)TVOutEnabled;	// 0x335eb2e9
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x335eb67d
- (void)_cancelArtworkImageRequest;	// 0x335eb7a5
- (void)_delayedPopForTimeJump;	// 0x335ebf39
- (void)_delayedShowLoading;	// 0x335ee9a1
- (void)_delayedUpdateBackgroundView;	// 0x335ec219
- (void)_enableAirPlayVideoRoutesIfNecessary;	// 0x335edd01
- (void)_exitPlayerForPlaybackError;	// 0x335ec5a5
- (void)_firstVideoFrameDisplayedNotification:(id)notification;	// 0x335ec25d
- (void)_hideLoadingIndicator;	// 0x335eb5d1
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x335ebf79
- (unsigned)_itemTypeWithActualTypePreference;	// 0x335ed525
- (void)_popForTimeJump:(id)timeJump;	// 0x335ec015
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x335eba6d
- (void)_screenDidConnect:(id)_screen;	// 0x335ebfdd
- (void)_screenDidDisconnect:(id)_screen;	// 0x335ebfa5
- (BOOL)_showDestinationPlaceholder;	// 0x335ee331
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x335ebb85
- (void)_updateAlwaysPlayWheneverPossible;	// 0x335ed1d1
- (void)_updateBackgroundView:(BOOL)view;	// 0x335ec0f5
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x335ed651
- (void)_updateProgressControlForItem:(id)item;	// 0x335eb525
- (void)_videoView_applicationDidEnterBackgroundNotification:(id)_videoView_application;	// 0x335eddcd
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x335ec7d9
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x335ef179
- (void)_videoView_availableRoutesDidChangeNotification:(id)_videoView_availableRoutes;	// 0x335ec731
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x335ec6f1
- (void)_videoView_destinationDidChangeNotification:(id)_videoView_destination;	// 0x335ec671
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x335ec629
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x335ef47d
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x335ec521
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x335ec4e5
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x335ec459
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x335ec3f9
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x335ec37d
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x335ec345
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x335ec2f1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x335ec839
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x335eb221
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x335eb2fd
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x335eb259
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x335eb3b5
// declared property getter: - (int)artworkImageStyle;	// 0x335eb401
// declared property getter: - (id)artworkImageView;	// 0x335eced9
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x335eb26d
// declared property getter: - (id)backgroundView;	// 0x335ed2e5
- (void)backgroundViewDidUpdate;	// 0x335eb3e9
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x335ee80d
// declared property getter: - (id)backstopColor;	// 0x335eb431
- (void)bufferingStateChangedNotification:(id)notification;	// 0x335ec09d
- (CGRect)calculateArtworkImageViewFrame;	// 0x335ee839
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x335eeb71
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x335eb35d
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x335ed2ad
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x335ed719
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x335eb371
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x335ecb55
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x335ec9cd
- (void)chapterListDidDisappear:(id)chapterList;	// 0x335ec9b9
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x335eb3ad
- (id)createChapterFlipTransition;	// 0x335eb859
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x335ed5ed
- (void)dealloc;	// 0x335eddd9
// declared property getter: - (unsigned)desiredParts;	// 0x335eb471
// declared property getter: - (BOOL)disableAutoRotation;	// 0x335eb281
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x335ed23d
// declared property getter: - (unsigned)disabledParts;	// 0x335eb461
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x335eb3ed
- (int)displayArtworkImageStyle;	// 0x335ed55d
- (void)displayFreshVideoViewContents;	// 0x335ebe41
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x335eb311
- (void)displayVideoView;	// 0x335ebdc9
- (void)displayVideoViewOnScreen;	// 0x335eb385
- (void)displayVideoViewOnTV;	// 0x335ebc85
- (void)handleScaleModeChange;	// 0x335ebc2d
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x335ecacd
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x335eb2b1
// declared property getter: - (BOOL)isFullscreen;	// 0x335eb345
- (BOOL)isFullscreenForLayoutPurposes;	// 0x335ed5a1
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x335eb341
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x335eb33d
// declared property getter: - (unsigned)itemTypeOverride;	// 0x335eb421
- (void)loadView;	// 0x335ecded
- (id)newAlternateTracksTransition;	// 0x335eb885
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x335ecd4d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x335ed3a5
// declared property getter: - (BOOL)ownsStatusBar;	// 0x335eb1b9
// declared property getter: - (id)posterImage;	// 0x335eb3f1
- (void)reloadArtworkImageView;	// 0x335eed2d
- (void)removeChildViewController:(id)controller;	// 0x335eccdd
// declared property getter: - (unsigned)scaleMode;	// 0x335eb451
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x335eb235
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x335ecbdd
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x335ecf41
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x335eb3c9
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x335eb411
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x335ecef9
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x335eb7f5
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x335eb389
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x335eba21
- (void)setControlsNeedLayout;	// 0x335eb2e1
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x335eba01
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x335eb9d9
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x335eb3b1
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x335ed089
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x335eb1cd
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x335eb295
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x335eb1e1
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x335ed061
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x335eb321
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x335ecb89
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x335eb349
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x335eb2c5
- (void)setItem:(id)item;	// 0x335ed0a1
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x335eb34d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x335ed459
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x335eb1fd
- (void)setOwnsVideoView:(BOOL)view;	// 0x335eb8b1
// declared property setter: - (void)setPosterImage:(id)image;	// 0x335ed3ed
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x335ed049
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x335ed00d
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x335ecc39
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x335ecfe5
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x335ecfad
- (void)showAlternateTracksController:(id)controller;	// 0x335ee6a5
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x335eb2e5
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x335ed499
- (void)showChaptersController;	// 0x335ed701
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x335ee3b5
- (void)tearDownTVOutWindow;	// 0x335ebed9
- (void)toggleScaleMode:(BOOL)mode;	// 0x335ecf85
// declared property getter: - (id)videoView;	// 0x335ecba1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x335ec2b1
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x335ec929
- (void)viewDidAppear:(BOOL)view;	// 0x335ef289
- (void)viewDidDisappear:(BOOL)view;	// 0x335ecc9d
- (void)viewDidUnload;	// 0x335ecd8d
- (void)viewWillDisappear:(BOOL)view;	// 0x335ef23d
// declared property getter: - (unsigned)visibleParts;	// 0x335eb441
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x335eb21d
@end

