/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import <UIView.h> // Unknown library

@class MPAVItem, UILabel, MPButton, UIActivityIndicatorView, MPTimeMarker, CABasicAnimation, MPDetailSlider;
@protocol MPPlaybackControlsDelegate;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate> {
	id<MPPlaybackControlsDelegate> _delegate;	// 44 = 0x2c
	MPAVItem *_item;	// 48 = 0x30
	MPTimeMarker *_markerForProgressControlDuration;	// 52 = 0x34
	UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
	MPDetailSlider *_progressControl;	// 60 = 0x3c
	MPButton *_repeatButton;	// 64 = 0x40
	MPButton *_shuffleButton;	// 68 = 0x44
	MPButton *_playbackSpeedButton;	// 72 = 0x48
	MPButton *_geniusButton;	// 76 = 0x4c
	MPButton *_rewindButton;	// 80 = 0x50
	MPButton *_mailButton;	// 84 = 0x54
	MPButton *_socialLikeButton;	// 88 = 0x58
	MPButton *_socialPostButton;	// 92 = 0x5c
	UIView *_rewindButtonBezel;	// 96 = 0x60
	UILabel *_trackInfoLabel;	// 100 = 0x64
	CABasicAnimation *_rewindOpacityAnimation;	// 104 = 0x68
	double _progressOffset;	// 108 = 0x6c
	double _tickInterval;	// 116 = 0x74
	unsigned _visibleParts;	// 124 = 0x7c
	unsigned _wantsTick : 1;	// 128 = 0x80
	unsigned _geniusButtonDisabled : 1;	// 128 = 0x80
	unsigned _rewindButtonDisabled : 1;	// 128 = 0x80
	unsigned _playbackSpeedButtonDisabled : 1;	// 128 = 0x80
	unsigned _mailButtonDisabled : 1;	// 128 = 0x80
	unsigned _mailButtonHidden : 1;	// 128 = 0x80
	unsigned _socialLikeButtonHidden : 1;	// 128 = 0x80
	unsigned _socialLikeButtonSelected : 1;	// 128 = 0x80
	unsigned _socialPostButtonHidden : 1;	// 129 = 0x81
	unsigned _useMediaDetailSlider : 1;	// 129 = 0x81
	unsigned _detailScrubbing : 1;	// 129 = 0x81
	unsigned _needsUpdateButtonVisibility : 1;	// 129 = 0x81
	float _seekedToValue;	// 132 = 0x84
}
@property(assign, nonatomic) id<MPPlaybackControlsDelegate> delegate;	// G=0x33767e99; S=0x337693e9; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL hideGeniusButton;	// G=0x33767e45; 
@property(readonly, assign, nonatomic) BOOL isScrubbing;	// G=0x33767e49; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x33767e89; S=0x33769459; @synthesize=_item
@property(readonly, assign, nonatomic) unsigned repeatType;	// G=0x3376985d; 
@property(readonly, assign, nonatomic) unsigned shuffleType;	// G=0x33769815; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x33767e79; S=0x33769411; @synthesize=_visibleParts
+ (unsigned)defaultVisibleParts;	// 0x3376ba39
- (id)initWithFrame:(CGRect)frame;	// 0x33769ed9
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x33768bbd
- (void)_applicationWillResignActiveNotification:(id)_application;	// 0x33768bd1
- (void)_changeGeniusImageToNormalImage:(id)normalImage;	// 0x33768811
- (void)_changeGeniusImageToPressedImage:(id)pressedImage;	// 0x33768849
- (void)_contentsChangedNotification:(id)notification;	// 0x33768ba9
- (double)_currentDisplayTime;	// 0x33769a55
- (void)_geniusButton:(id)button;	// 0x33769375
- (id)_geniusButtonImage:(unsigned)image;	// 0x337688f1
- (void)_handleGeniusButtonClick;	// 0x337692e9
- (void)_initializeControls;	// 0x3376b2ed
- (void)_mailButton:(id)button;	// 0x3376929d
- (id)_mailButtonImage;	// 0x337688a5
- (void)_playbackSpeedButton:(id)button;	// 0x3376924d
- (void)_repeatButton:(id)button;	// 0x337691ad
- (id)_repeatButtonImage;	// 0x337687b1
- (void)_resetGeniusButtonImages;	// 0x33768881
- (void)_rewindButton:(id)button;	// 0x3376adf1
- (void)_setVisiblePartsNeedReload;	// 0x33767f11
- (void)_shuffleButton:(id)button;	// 0x33768fdd
- (id)_shuffleButtonImage;	// 0x3376874d
- (BOOL)_shuffleIsOn;	// 0x33768709
- (void)_socialLikeButton:(id)button;	// 0x33768f91
- (void)_socialPostButton:(id)button;	// 0x33768f45
- (void)_tickNotification:(id)notification;	// 0x33768979
- (void)_updateButtonVisibility;	// 0x337680a1
- (void)_updateForPlaybackSpeed;	// 0x33767f39
- (double)_updatedDisplayDurationForTime:(double)time;	// 0x337698e5
- (void)_validityChangedNotification:(id)notification;	// 0x33768935
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3376905d
- (id)createButtonForPart:(unsigned)part;	// 0x3376a089
- (id)createProgressIndicator;	// 0x33767e39
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x33767e71
- (void)crossedChapterTimeMarker:(id)marker;	// 0x33768a61
- (void)crossedURLTimeMarker:(id)marker;	// 0x33767e75
- (void)dealloc;	// 0x33769b39
// declared property getter: - (id)delegate;	// 0x33767e99
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x33767e6d
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x33768c15
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x33768cf5
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x33768ce1
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x33768ccd
- (void)didMoveToSuperview;	// 0x33769565
- (unsigned)displayablePartsInPartMask:(unsigned)partMask;	// 0x33767e61
- (void)handleChangeToRepeatType:(unsigned)repeatType;	// 0x33767e3d
- (void)handleChangeToShuffleType:(unsigned)shuffleType;	// 0x33767e41
// declared property getter: - (BOOL)hideGeniusButton;	// 0x33767e45
// declared property getter: - (BOOL)isScrubbing;	// 0x33767e49
// declared property getter: - (id)item;	// 0x33767e89
- (void)layoutSubviews;	// 0x33767ec1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3376adbd
- (BOOL)progressBarClipsToChapterDuration;	// 0x33769ad5
- (void)reloadButtonVisibility;	// 0x337698d1
- (void)reloadView;	// 0x3376a9a9
// declared property getter: - (unsigned)repeatType;	// 0x3376985d
- (void)resetDetailSlider:(id)slider;	// 0x3376a4e9
- (void)setCurrentTime:(double)time;	// 0x33769599
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337693e9
// declared property setter: - (void)setItem:(id)item;	// 0x33769459
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x33769411
// declared property getter: - (unsigned)shuffleType;	// 0x33769815
- (void)startTicking;	// 0x3376976d
- (void)stopTicking;	// 0x33769721
- (void)updateForEndOfDetailScrubbing;	// 0x33767e5d
// declared property getter: - (unsigned)visibleParts;	// 0x33767e79
@end

