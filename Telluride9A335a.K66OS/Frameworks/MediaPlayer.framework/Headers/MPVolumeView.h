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
@property(assign, nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;	// G=0x301327e9; S=0x30132829; 
@property(readonly, assign, nonatomic) BOOL isShowingRouteButton;	// G=0x3013290d; 
@property(readonly, assign, nonatomic) BOOL isVisible;	// G=0x301328c1; 
@property(assign, nonatomic) BOOL showsRouteButton;	// G=0x3013273d; S=0x3013275d; 
@property(assign, nonatomic) BOOL showsVolumeSlider;	// G=0x301326d1; S=0x301326f1; 
@property(readonly, assign, nonatomic) int style;	// G=0x301327a9; 
@property(readonly, assign, nonatomic) MPVolumeSlider *volumeSlider;	// G=0x301327c9; 
@property(assign, nonatomic) BOOL volumeSliderShrinksFromBothEnds;	// G=0x30132809; S=0x30132875; 
- (id)initWithCoder:(id)coder;	// 0x30131c29
- (id)initWithFrame:(CGRect)frame;	// 0x30131a41
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x30131a6d
- (void)_createSubviews;	// 0x30132a9d
- (void)_displayAudioRoutePicker;	// 0x30132dfd
- (void)_initWithStyle:(int)style;	// 0x3013195d
- (id)_routeButton;	// 0x30132a7d
- (id)_routeButtonImage;	// 0x30133855
- (void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;	// 0x30133151
- (void)_setShowsVolumeSlider:(BOOL)slider;	// 0x30133609
- (void)_setVolumeAudioCategory:(id)category;	// 0x30132a51
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x301324bd
- (void)dealloc;	// 0x30131abd
- (void)didMoveToSuperview;	// 0x301323b5
- (void)didMoveToWindow;	// 0x301322b9
- (void)dismissActiveOverlaysAnimated:(BOOL)animated;	// 0x3013292d
- (void)encodeWithCoder:(id)coder;	// 0x30131d99
// declared property getter: - (BOOL)hidesRouteLabelWhenNoRouteChoice;	// 0x301327e9
- (BOOL)isShowingActiveOverlays;	// 0x30132a19
// declared property getter: - (BOOL)isShowingRouteButton;	// 0x3013290d
// declared property getter: - (BOOL)isVisible;	// 0x301328c1
- (void)layoutSubviews;	// 0x30131f55
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30132031
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30132649
- (void)setAlpha:(float)alpha;	// 0x3013240d
- (void)setFrame:(CGRect)frame;	// 0x301320e1
- (void)setHidden:(BOOL)hidden;	// 0x30132465
// declared property setter: - (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)choice;	// 0x30132829
// declared property setter: - (void)setShowsRouteButton:(BOOL)button;	// 0x3013275d
// declared property setter: - (void)setShowsVolumeSlider:(BOOL)slider;	// 0x301326f1
// declared property setter: - (void)setVolumeSliderShrinksFromBothEnds:(BOOL)bothEnds;	// 0x30132875
// declared property getter: - (BOOL)showsRouteButton;	// 0x3013273d
// declared property getter: - (BOOL)showsVolumeSlider;	// 0x301326d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30132179
// declared property getter: - (int)style;	// 0x301327a9
// declared property getter: - (id)volumeSlider;	// 0x301327c9
// declared property getter: - (BOOL)volumeSliderShrinksFromBothEnds;	// 0x30132809
- (void)willMoveToWindow:(id)window;	// 0x30131e7d
@end

