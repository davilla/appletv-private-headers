/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class NSTimer, MPAVController, UILabel, NSString, UIImageView;

@interface MPVolumeSlider : UISlider {
@private
	NSTimer *_commitTimer;	// 112 = 0x70
	MPAVController *_avController;	// 116 = 0x74
	NSString *_volumeAudioCategory;	// 120 = 0x78
	int _style;	// 124 = 0x7c
	UILabel *_routeNameLabel;	// 128 = 0x80
	UIImageView *_thumbImageView;	// 132 = 0x84
	UIImageView *_thumbMaskImageView;	// 136 = 0x88
}
@property(retain, nonatomic) MPAVController *MPAVController;	// G=0x336028f1; S=0x3360301d; 
@property(readonly, assign, nonatomic) int style;	// G=0x33602901; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x33602fa5; S=0x33602f31; 
- (id)initWithFrame:(CGRect)frame;	// 0x33603325
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3360475d
// declared property getter: - (id)MPAVController;	// 0x336028f1
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x33602ec9
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x33602e61
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x33602e39
- (void)_commitVolumeChange;	// 0x3360294d
- (void)_destinationDidChangeNotification:(id)_destination;	// 0x33602e11
- (void)_endTracking;	// 0x3360323d
- (void)_layoutForAvailableRoutes;	// 0x33604001
- (void)_layoutMaskForThumb;	// 0x33603b19
- (id)_maxTrackImageForStyle:(int)style;	// 0x33603cf5
- (id)_minTrackImageForStyle:(int)style;	// 0x33603d99
- (void)_routeNameLabelAnimationDidEnd;	// 0x33602911
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x33602de5
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x33602c4d
- (id)_thumbImageForStyle:(int)style;	// 0x33603e3d
- (void)_updateVolumeFromAVController;	// 0x33602a09
- (void)_volumeDidChange:(id)_volume;	// 0x33602ad1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x336038e5
- (void)cancelTrackingWithEvent:(id)event;	// 0x33603459
- (id)createThumbView;	// 0x336034d1
- (void)dealloc;	// 0x33603549
- (void)didMoveToSuperview;	// 0x336031b9
- (void)didMoveToWindow;	// 0x33603149
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33603495
- (void)layoutSubviews;	// 0x3360340d
- (float)maximumValue;	// 0x336028e9
- (float)minimumValue;	// 0x336028e5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33603835
- (void)setAlpha:(float)alpha;	// 0x336033bd
- (void)setFrame:(CGRect)frame;	// 0x336046c9
- (void)setHidden:(BOOL)hidden;	// 0x33603369
// declared property setter: - (void)setMPAVController:(id)controller;	// 0x3360301d
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x33602f31
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x336037e5
// declared property getter: - (int)style;	// 0x33602901
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x33603ec1
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x3360376d
// declared property getter: - (id)volumeAudioCategory;	// 0x33602fa5
@end

