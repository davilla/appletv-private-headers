/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"
#import <UIView.h> // Unknown library

@class MPAVController, MPVideoViewController, MPAVItem, UINavigationBar, NSMutableDictionary, MPDetailSlider;
@protocol MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) int interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item;
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(assign, nonatomic) MPVideoViewController *videoViewController;
@property(assign, nonatomic) unsigned visibleParts;
// declared property getter: - (BOOL)allowsWirelessPlayback;
// declared property getter: - (id)delegate;
// declared property getter: - (unsigned)desiredParts;
// declared property getter: - (unsigned)disabledParts;
- (void)hideAlternateTracks;
// declared property getter: - (int)interfaceOrientation;
// declared property getter: - (id)item;
// declared property getter: - (id)navigationBar;
// declared property getter: - (id)player;
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDesiredParts:(unsigned)parts;
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
// declared property setter: - (void)setDisabledParts:(unsigned)parts;
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;
// declared property setter: - (void)setItem:(id)item;
// declared property setter: - (void)setPlayer:(id)player;
// declared property setter: - (void)setVideoViewController:(id)controller;
// declared property setter: - (void)setVisibleParts:(unsigned)parts;
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (BOOL)updateTimeBasedValues;
// declared property getter: - (id)videoViewController;
// declared property getter: - (unsigned)visibleParts;
@end

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
	MPVideoViewController *_videoViewController;	// 48 = 0x30
	id<MPVideoOverlayDelegate> _delegate;	// 52 = 0x34
	MPAVItem *_item;	// 56 = 0x38
	MPAVController *_player;	// 60 = 0x3c
	MPDetailSlider *_scrubControl;	// 64 = 0x40
	int _interfaceOrientation;	// 68 = 0x44
	BOOL _controlsAutohideDisabled;	// 72 = 0x48
	BOOL _wantsTick;	// 73 = 0x49
	unsigned _desiredParts;	// 76 = 0x4c
	unsigned _visibleParts;	// 80 = 0x50
	unsigned _disabledParts;	// 84 = 0x54
	NSMutableDictionary *_tickTimeEvents;	// 88 = 0x58
	double _lastTickTime;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x301608a5; S=0x301608a9; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x3016109d; S=0x301610ad; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x301610bd; S=0x30160929; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x301610cd; S=0x301610dd; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x301610fd; S=0x3016110d; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x301610ed; S=0x301608ad; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x30160a65; 
@property(retain, nonatomic) MPAVController *player;	// G=0x3016111d; S=0x3016112d; @synthesize=_player
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x30161151; S=0x3016094d; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x30161161; S=0x30160991; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x301602cd
- (double)_duration;	// 0x30160f9d
- (void)_endSliderTracking;	// 0x301606b5
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x301607dd
- (double)_playableDuration;	// 0x3016101d
- (void)_tickNotification:(id)notification;	// 0x30160765
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x301608a5
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;	// 0x30160ea5
- (void)dealloc;	// 0x301603cd
// declared property getter: - (id)delegate;	// 0x3016109d
// declared property getter: - (unsigned)desiredParts;	// 0x301610bd
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x30160651
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x30160555
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x30160641
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x30160631
- (void)didMoveToSuperview;	// 0x301604dd
// declared property getter: - (unsigned)disabledParts;	// 0x301610cd
- (void)hideAlternateTracks;	// 0x30160a61
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30160519
// declared property getter: - (int)interfaceOrientation;	// 0x301610fd
// declared property getter: - (id)item;	// 0x301610ed
- (void)layoutSubviews;	// 0x301604d9
// declared property getter: - (id)navigationBar;	// 0x30160a65
- (void)performSelector:(SEL)selector whenTickingPastTime:(double)time;	// 0x30160db5
// declared property getter: - (id)player;	// 0x3016111d
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x301608a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x301610ad
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x30160929
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x3016093d
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x301610dd
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3016110d
// declared property setter: - (void)setItem:(id)item;	// 0x301608ad
// declared property setter: - (void)setPlayer:(id)player;	// 0x3016112d
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x3016094d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x30160991
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x301609a5
- (void)showAlternateTracks;	// 0x30160a5d
- (void)startTicking;	// 0x301609b5
- (void)stopTicking;	// 0x30160a19
- (BOOL)updateTimeBasedValues;	// 0x30160a69
// declared property getter: - (id)videoViewController;	// 0x30161151
// declared property getter: - (unsigned)visibleParts;	// 0x30161161
@end
