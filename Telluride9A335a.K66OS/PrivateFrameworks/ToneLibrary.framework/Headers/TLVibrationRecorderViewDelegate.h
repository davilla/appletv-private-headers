/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "NSObject.h"


@protocol TLVibrationRecorderViewDelegate <NSObject>
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)vibrationComponent;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)vibrationComponent;
- (void)vibrationRecorderView:(id)view buttonTappedWithIdentifier:(unsigned)identifier;
- (void)vibrationRecorderView:(id)view didExitRecordingModeWithContextObject:(id)contextObject;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)vibrationRecorderView;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)vibrationRecorderView;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)vibrationRecorderView;
@end

