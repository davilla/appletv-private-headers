/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library
#import "ToneLibrary-Structs.h"


@interface TLVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
	void *_recordedData;	// 4 = 0x4
	unsigned long _recordedDataElementsCount;	// 8 = 0x8
	unsigned long _recordedDataCursor;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	BOOL _hasActuallyStartedRecording;	// 24 = 0x18
	BOOL _warmUpMode;	// 25 = 0x19
	BOOL _displayLinkHasRefreshedAtLeastOnce;	// 26 = 0x1a
	unsigned _maximumFramesPerSecondRate;	// 28 = 0x1c
	double _vibrationPatternMaximumDuration;	// 32 = 0x20
}
- (id)initWithVibrationPatternMaximumDuration:(double)vibrationPatternMaximumDuration;	// 0x304c7295
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)recordingDuration maximumFramesPerSecondsRate:(unsigned)rate;	// 0x304c73b9
- (void)_recordFinalDataWithTouchLocation:(CGPoint)touchLocation touchPhase:(unsigned)phase timeIntervalSinceBeginningOfPattern:(double)pattern;	// 0x304c7461
- (void)_updateMaximumFramesPerSecondRate:(id)rate;	// 0x304c76ed
- (void)dealloc;	// 0x304c7375
- (void)didStopRecording;	// 0x304c78c5
- (BOOL)getTouchLocation:(CGPoint *)location touchPhase:(unsigned *)phase forTimeInterval:(double)timeInterval;	// 0x304c7909
- (void)recordTouchLocation:(CGPoint)location touchPhase:(unsigned)phase;	// 0x304c757d
@end
