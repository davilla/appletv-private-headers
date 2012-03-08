/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"
#import "TLVibrationRecorderTouchSurfaceDelegate.h"
#import "TLVibrationRecorderControlsViewDelegate.h"

@class TLVibrationRecorderControlsView, TLVibrationRecorderTouchSurface, UILabel;
@protocol TLVibrationRecorderViewDelegate;

@interface TLVibrationRecorderView : UIView <TLVibrationRecorderTouchSurfaceDelegate, TLVibrationRecorderControlsViewDelegate> {
	id<TLVibrationRecorderViewDelegate> _delegate;	// 48 = 0x30
	TLVibrationRecorderTouchSurface *_touchSurface;	// 52 = 0x34
	TLVibrationRecorderControlsView *_controlsView;	// 56 = 0x38
	UILabel *_instructionsLabel;	// 60 = 0x3c
	BOOL _replayMode;	// 64 = 0x40
	unsigned _leftButtonIdentifier;	// 68 = 0x44
	unsigned _rightButtonIdentifier;	// 72 = 0x48
	double _vibrationPatternMaximumDuration;	// 76 = 0x4c
	double _currentVibrationProgressDidStartTimestamp;	// 84 = 0x54
	BOOL _isWaitingForEndOfCurrentVibrationComponent;	// 92 = 0x5c
	double _currentVibrationComponentDidStartTime;	// 96 = 0x60
	BOOL _animatingProgress;	// 104 = 0x68
}
@property(assign, nonatomic, setter=_setReplayMode:) BOOL _replayMode;	// G=0x36e028d1; S=0x36e01b25; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderViewDelegate> delegate;	// G=0x36e028b1; S=0x36e028c1; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x36e0135d
- (void)_enterWaitingModeWithAnimation:(BOOL)animation animateButtons:(BOOL)buttons enablePlayButton:(BOOL)button;	// 0x36e01f7d
- (void)_exitWaitingModeWithAnimation:(BOOL)animation;	// 0x36e0215d
- (void)_getButtonPropertiesForIdentifier:(unsigned)identifier enabled:(BOOL)enabled color:(int *)color title:(id *)title icon:(id *)icon;	// 0x36e01e11
// declared property getter: - (BOOL)_replayMode;	// 0x36e028d1
- (void)_setLeftButtonIdentifier:(unsigned)identifier enabled:(BOOL)enabled rightButtonIdentifier:(unsigned)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate;	// 0x36e019f1
- (void)_setLeftButtonIdentifier:(unsigned)identifier enabled:(BOOL)enabled rightButtonIdentifier:(unsigned)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate completion:(id)completion;	// 0x36e01a31
// declared property setter: - (void)_setReplayMode:(BOOL)mode;	// 0x36e01b25
- (void)_updateProgress:(id)progress;	// 0x36e02759
- (void)dealloc;	// 0x36e0197d
// declared property getter: - (id)delegate;	// 0x36e028b1
- (void)enterRecordingModeWithAnimation:(BOOL)animation;	// 0x36e0225d
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern animate:(BOOL)animate completion:(id)completion;	// 0x36e02405
- (void)exitRecordingModeWithAnimation:(BOOL)animation enablePlayButton:(BOOL)button;	// 0x36e02319
- (void)exitReplayModeWithAnimation:(BOOL)animation;	// 0x36e02581
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36e028c1
- (void)startAnimatingProgress;	// 0x36e02649
- (void)stopAnimatingProgress;	// 0x36e02705
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x36e01bc9
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x36e01b41
- (void)vibrationRecorderControlsView:(id)view buttonTappedAtIndex:(unsigned)index;	// 0x36e01c35
- (void)vibrationRecorderTouchSurface:(id)surface didExitRecordingModeWithContextObject:(id)contextObject;	// 0x36e01ddd
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)vibrationRecorderTouchSurface;	// 0x36e01db1
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)vibrationRecorderTouchSurface;	// 0x36e01c8d
@end
