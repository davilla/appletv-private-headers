/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <UIView.h> // Unknown library

@class MPVolumeSlider;

@interface MPVolumeView : UIView <NSCoding> {
@private
	void *_internal;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;	// G=0x3037ece5; S=0x3037ed25; 
@property(readonly, assign, nonatomic) BOOL isShowingRouteButton;	// G=0x3037ee09; 
@property(readonly, assign, nonatomic) BOOL isVisible;	// G=0x3037edbd; 
@property(assign, nonatomic) BOOL showsRouteButton;	// G=0x3037ec39; S=0x3037ec59; 
@property(assign, nonatomic) BOOL showsVolumeSlider;	// G=0x3037ebcd; S=0x3037ebed; 
@property(readonly, assign, nonatomic) int style;	// G=0x3037eca5; 
@property(readonly, assign, nonatomic) MPVolumeSlider *volumeSlider;	// G=0x3037ecc5; 
@property(assign, nonatomic) BOOL volumeSliderShrinksFromBothEnds;	// G=0x3037ed05; S=0x3037ed71; 
- (id)initWithCoder:(id)coder;	// 0x3037e115
- (id)initWithFrame:(CGRect)frame;	// 0x3037df2d
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3037df59
- (void)_createSubviews;	// 0x3037ef99
- (void)_displayAudioRoutePicker;	// 0x3037f2f9
- (void)_initWithStyle:(int)style;	// 0x3037de49
- (id)_routeButton;	// 0x3037ef79
- (id)_routeButtonImage;	// 0x3037fd91
- (void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;	// 0x3037f64d
- (void)_setShowsVolumeSlider:(BOOL)slider;	// 0x3037fb45
- (void)_setVolumeAudioCategory:(id)category;	// 0x3037ef4d
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x3037e9b9
- (void)dealloc;	// 0x3037dfa9
- (void)didMoveToSuperview;	// 0x3037e8b1
- (void)didMoveToWindow;	// 0x3037e7b5
- (void)dismissActiveOverlaysAnimated:(BOOL)animated;	// 0x3037ee29
- (void)encodeWithCoder:(id)coder;	// 0x3037e285
// declared property getter: - (BOOL)hidesRouteLabelWhenNoRouteChoice;	// 0x3037ece5
- (BOOL)isShowingActiveOverlays;	// 0x3037ef15
// declared property getter: - (BOOL)isShowingRouteButton;	// 0x3037ee09
// declared property getter: - (BOOL)isVisible;	// 0x3037edbd
- (void)layoutSubviews;	// 0x3037e441
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3037e51d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3037eb45
- (void)setAlpha:(float)alpha;	// 0x3037e909
- (void)setFrame:(CGRect)frame;	// 0x3037e5cd
- (void)setHidden:(BOOL)hidden;	// 0x3037e961
// declared property setter: - (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)choice;	// 0x3037ed25
// declared property setter: - (void)setShowsRouteButton:(BOOL)button;	// 0x3037ec59
// declared property setter: - (void)setShowsVolumeSlider:(BOOL)slider;	// 0x3037ebed
// declared property setter: - (void)setVolumeSliderShrinksFromBothEnds:(BOOL)bothEnds;	// 0x3037ed71
// declared property getter: - (BOOL)showsRouteButton;	// 0x3037ec39
// declared property getter: - (BOOL)showsVolumeSlider;	// 0x3037ebcd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3037e665
// declared property getter: - (int)style;	// 0x3037eca5
// declared property getter: - (id)volumeSlider;	// 0x3037ecc5
// declared property getter: - (BOOL)volumeSliderShrinksFromBothEnds;	// 0x3037ed05
- (void)willMoveToWindow:(id)window;	// 0x3037e369
@end
