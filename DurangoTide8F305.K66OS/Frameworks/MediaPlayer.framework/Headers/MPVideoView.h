/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class CALayer, MPVideoBufferLayerContainer, MPMovieSnapshotController, UIMovieSubtitlesView, NSString;

@interface MPVideoView : UIView {
	UIView *_videoBufferContainerView;	// 44 = 0x2c
	MPVideoBufferLayerContainer *_videoBufferContainerLayer;	// 48 = 0x30
	CALayer *_videoBufferLayer;	// 52 = 0x34
	UIMovieSubtitlesView *_subtitlesView;	// 56 = 0x38
	CGSize _subtitlesMargin;	// 60 = 0x3c
	MPMovieSnapshotController *_snapshotController;	// 68 = 0x44
	NSString *_moviePath;	// 72 = 0x48
	NSString *_movieSubtitle;	// 76 = 0x4c
	NSString *_movieTitle;	// 80 = 0x50
	NSString *_videoID;	// 84 = 0x54
	unsigned _scaleMode;	// 88 = 0x58
	double _startTime;	// 92 = 0x5c
	double _stopTime;	// 100 = 0x64
	unsigned _effectiveScaleMode;	// 108 = 0x6c
	unsigned _disableFudgingScaleToFullScreen : 1;	// 112 = 0x70
	unsigned _requiresIntegralScreenFrame : 1;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x3375fa35; 
@property(assign) double currentTime;	// G=0x337607e9; S=0x33760685; converted property
@property(assign, nonatomic) unsigned effectiveScaleMode;	// G=0x3375e475; S=0x3375e485; @synthesize=_effectiveScaleMode
@property(readonly, assign, nonatomic) CGRect movieFrame;	// G=0x3375f995; 
@property(readonly, retain) NSString *moviePath;	// G=0x3375e3c1; converted property
@property(retain, nonatomic) NSString *movieSubtitle;	// G=0x3375f309; S=0x3375fae5; @synthesize=_movieSubtitle
@property(retain, nonatomic) NSString *movieTitle;	// G=0x3375e4a5; S=0x3375fb0d; @synthesize=_movieTitle
@property(assign, nonatomic) BOOL requiresIntegralScreenFrame;	// G=0x3375e3d1; S=0x3375e3e5; 
@property(assign, nonatomic) unsigned scaleMode;	// G=0x3375e495; S=0x3375eec9; @synthesize=_scaleMode
@property(assign, nonatomic) double startTime;	// G=0x3375e439; S=0x3375e449; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x3375e415; S=0x3375e425; @synthesize=_stopTime
@property(assign, nonatomic) float subtitlesFontSize;	// G=0x3375ecd5; S=0x3375ecf5; 
@property(assign, nonatomic) CGSize subtitlesMargin;	// G=0x3375e45d; S=0x3375ed35; @synthesize=_subtitlesMargin
@property(assign, nonatomic) CGSize subtitlesPadding;	// G=0x3375fa11; S=0x3375ed15; 
@property(copy, nonatomic) NSString *videoID;	// G=0x3375e405; S=0x3375fb35; @synthesize=_videoID
- (id)initWithFrame:(CGRect)frame;	// 0x3375f5c9
- (BOOL)_allowFudgingScaleToFullScreen;	// 0x3375e891
- (id)_avController;	// 0x3375e94d
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x3375ec39
- (BOOL)_isCloseToFullScreenWithTransform:(CGAffineTransform)transform;	// 0x3375ff35
- (BOOL)_isExactlyFullScreenWithTransform:(CGAffineTransform)transform;	// 0x3375e8f1
- (void)_itemWillChangeNotification:(id)_item;	// 0x33760425
- (void)_layoutSublayers;	// 0x3375e869
- (void)_layoutSubtitleLayers;	// 0x3375fb61
- (void)_layoutVideoLayers:(BOOL)layers;	// 0x3375ff95
- (void)_playbackStateChangedNotification:(id)notification;	// 0x3375eb99
- (void)_sizeDidChangedNotification:(id)_size;	// 0x3375eb81
- (BOOL)_sizeDifferenceFromFullScreenIsLessThan:(CGSize)fullScreenIsLessThan allowingZero:(BOOL)zero withTransform:(CGAffineTransform)transform;	// 0x3375fded
- (void)_validityChangedNotification:(id)notification;	// 0x3375eb29
- (void)addSubview:(id)subview;	// 0x3375e755
- (id)avController;	// 0x33760841
- (void)bringSubviewToFront:(id)front;	// 0x3375e6f9
- (int)bufferingStatusMask;	// 0x33760815
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x3375fa35
- (void)cancelSnapshots;	// 0x3375ea19
- (void)clearSubtitles;	// 0x3375ecb5
// converted property getter: - (double)currentTime;	// 0x337607e9
- (void)dealloc;	// 0x3375f391
- (double)duration;	// 0x337607ad
// declared property getter: - (unsigned)effectiveScaleMode;	// 0x3375e475
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x3375e7b1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3375e62d
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x3375e80d
- (void)insertSubview:(id)subview below:(id)below;	// 0x3375e69d
// declared property getter: - (CGRect)movieFrame;	// 0x3375f995
// converted property getter: - (id)moviePath;	// 0x3375e3c1
// declared property getter: - (id)movieSubtitle;	// 0x3375f309
// declared property getter: - (id)movieTitle;	// 0x3375e4a5
- (id)mpavController;	// 0x3376086d
- (void)pause;	// 0x337606e5
- (void)play;	// 0x337606b9
- (void)play;	// 0x3375eee1
- (void)playFromBeginning;	// 0x3375ef1d
- (void)playWhenLikelyToKeepUp;	// 0x3375ef75
- (int)playableContentType;	// 0x33760761
- (int)playbackState;	// 0x33760711
- (void)prepareAVControllerQueue;	// 0x3375f109
// declared property getter: - (BOOL)requiresIntegralScreenFrame;	// 0x3375e3d1
// declared property getter: - (unsigned)scaleMode;	// 0x3375e495
- (void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x3375e96d
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x33760685
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x33760635
// declared property setter: - (void)setEffectiveScaleMode:(unsigned)mode;	// 0x3375e485
- (void)setFrame:(CGRect)frame;	// 0x3375e5d1
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x3375fae5
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x3375fb0d
- (void)setMovieWithPath:(id)path;	// 0x3375efb1
- (void)setNeedsDisplay;	// 0x3375e56d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3375e4b5
- (void)setRepeatGap:(double)gap;	// 0x33760601
- (void)setRepeatMode:(int)mode;	// 0x337605d1
// declared property setter: - (void)setRequiresIntegralScreenFrame:(BOOL)frame;	// 0x3375e3e5
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x3375eec9
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x3375ed81
- (void)setScaleMode:(unsigned)mode duration:(float)duration;	// 0x3375edb5
// declared property setter: - (void)setStartTime:(double)time;	// 0x3375e449
// declared property setter: - (void)setStopTime:(double)time;	// 0x3375e425
// declared property setter: - (void)setSubtitlesFontSize:(float)size;	// 0x3375ecf5
// declared property setter: - (void)setSubtitlesMargin:(CGSize)margin;	// 0x3375ed35
// declared property setter: - (void)setSubtitlesPadding:(CGSize)padding;	// 0x3375ed15
// declared property setter: - (void)setVideoID:(id)anId;	// 0x3375fb35
// declared property getter: - (double)startTime;	// 0x3375e439
- (void)stop;	// 0x337605a5
// declared property getter: - (double)stopTime;	// 0x3375e415
- (void)subtitlesDidClear:(id)subtitles;	// 0x3375eb09
- (void)subtitlesDidUpdate:(id)subtitles;	// 0x3375ea55
// declared property getter: - (float)subtitlesFontSize;	// 0x3375ecd5
// declared property getter: - (CGSize)subtitlesMargin;	// 0x3375e45d
// declared property getter: - (CGSize)subtitlesPadding;	// 0x3375fa11
- (void)toggleScaleMode:(BOOL)mode;	// 0x3375ec75
// declared property getter: - (id)videoID;	// 0x3375e405
- (id)viewWithTag:(int)tag;	// 0x3375e67d
@end

