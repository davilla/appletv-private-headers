/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class NSString, UIPopoverController, MPNowPlayingItemQueueInfoButton, UILabel, UINavigationButton, UIActivityIndicatorView, MPWildcatFullScreenTransportControls, UIImageView, UINavigationBar, UINavigationItem;

@interface MPWildcatFullScreenVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
@private
	MPWildcatFullScreenTransportControls *_transportControls;	// 92 = 0x5c
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 96 = 0x60
	UIImageView *_hudImageView;	// 100 = 0x64
	UINavigationBar *_navigationBar;	// 104 = 0x68
	UINavigationItem *_navigationItem;	// 108 = 0x6c
	UIImageView *_navigationBarBackgroundShort;	// 112 = 0x70
	UIImageView *_navigationBarBackgroundTall;	// 116 = 0x74
	UIImageView *_navigationBarShadow;	// 120 = 0x78
	NSString *_title;	// 124 = 0x7c
	UINavigationButton *_scaleModeButton;	// 128 = 0x80
	UILabel *_scrubSpeedLabel;	// 132 = 0x84
	UILabel *_scrubInstructionsLabel;	// 136 = 0x88
	UIPopoverController *_popoverController;	// 140 = 0x8c
	UILabel *_loadingMovieLabel;	// 144 = 0x90
	UIActivityIndicatorView *_loadingMovieIndicator;	// 148 = 0x94
	unsigned _layoutSubviewsActive : 1;	// 152 = 0x98
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x3378d4d9; S=0x3378d4a5; converted property
@property(assign) unsigned disabledParts;	// G=0x3378ccf9; S=0x3378d1fd; converted property
@property(copy, nonatomic) NSString *title;	// G=0x3378cd09; S=0x3378cf2d; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x3378d875
- (void)_configureLinkButtonForCurrentItemTime;	// 0x3378d521
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x3378ce1d
- (void)_destinationDidChangeNotification:(id)_destination;	// 0x3378cef1
- (void)_doneButton:(id)button;	// 0x3378cfd5
- (void)_hideScrubInstructions;	// 0x3378d961
- (void)_initSubviews;	// 0x3378e339
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x3378ce8d
- (id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;	// 0x3378ec51
- (void)_reconfigureNavigationBarAnimated:(BOOL)animated;	// 0x3378dbbd
- (void)_scaleButton:(id)button;	// 0x3378cf91
- (void)_scheduleHidePopoverTimer;	// 0x3378cd5d
- (void)_showScrubInstructions;	// 0x3378da99
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x3378ce75
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x3378d4d9
- (void)crossedURLTimeMarker:(id)marker;	// 0x3378d50d
- (void)dealloc;	// 0x3378d6b9
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x3378d07d
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x3378d19d
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x3378d0bd
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x3378d12d
// converted property getter: - (unsigned)disabledParts;	// 0x3378ccf9
- (void)hideAlternateTracks;	// 0x3378cf09
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3378cd25
- (void)layoutSubviews;	// 0x3378efad
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x3378cced
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3378d019
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3378d4a5
- (void)setAlpha:(float)alpha;	// 0x3378d625
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x3378d2a9
// converted property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x3378d1fd
- (void)setInterfaceOrientation:(int)orientation;	// 0x3378d309
- (void)setItem:(id)item;	// 0x3378d3a9
// declared property setter: - (void)setTitle:(id)title;	// 0x3378cf2d
- (void)setVideoViewController:(id)controller;	// 0x3378d35d
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x3378d235
- (void)showAlternateTracks;	// 0x3378ee45
// declared property getter: - (id)title;	// 0x3378cd09
@end

