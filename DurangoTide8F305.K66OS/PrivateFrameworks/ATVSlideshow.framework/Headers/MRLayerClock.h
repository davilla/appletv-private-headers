/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MRLayerClock : NSObject {
	double _time;	// 4 = 0x4
	double _containerTime;	// 12 = 0xc
	double _containerDuration;	// 20 = 0x14
	double _localTimeOffset;	// 28 = 0x1c
	double _stopAtTime;	// 36 = 0x24
	int _currentLoopIndex;	// 44 = 0x2c
	BOOL _isPaused;	// 48 = 0x30
	BOOL _jumpedBackInTime;	// 49 = 0x31
	BOOL _needsToUpdateLocalTimeOffset;	// 50 = 0x32
}
@property(readonly, assign) double containerDuration;	// G=0x332d9e91; @synthesize=_containerDuration
@property(readonly, assign) double containerTime;	// G=0x332d9e79; @synthesize=_containerTime
@property(readonly, assign) int currentLoopIndex;	// G=0x332d9f09; @synthesize=_currentLoopIndex
@property(readonly, assign) BOOL isPaused;	// G=0x332d9f19; @synthesize=_isPaused
@property(readonly, assign) BOOL jumpedBackInTime;	// G=0x332d9f29; @synthesize=_jumpedBackInTime
@property(assign, nonatomic) double localTimeOffset;	// G=0x332d9ea9; S=0x332d9ec1; @synthesize=_localTimeOffset
@property(assign, nonatomic) double stopAtTime;	// G=0x332d9ed9; S=0x332d9ef1; @synthesize=_stopAtTime
@property(assign, nonatomic) double time;	// G=0x332d9e49; S=0x332d9e61; @synthesize=_time
- (id)init;	// 0x332d9a99
// declared property getter: - (double)containerDuration;	// 0x332d9e91
// declared property getter: - (double)containerTime;	// 0x332d9e79
// declared property getter: - (int)currentLoopIndex;	// 0x332d9f09
// declared property getter: - (BOOL)isPaused;	// 0x332d9f19
// declared property getter: - (BOOL)jumpedBackInTime;	// 0x332d9f29
// declared property getter: - (double)localTimeOffset;	// 0x332d9ea9
- (void)pause;	// 0x332d9e39
- (void)reactivate;	// 0x332d9ae9
- (void)resume;	// 0x332d9e15
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x332d9ec1
// declared property setter: - (void)setStopAtTime:(double)time;	// 0x332d9ef1
// declared property setter: - (void)setTime:(double)time;	// 0x332d9e61
// declared property getter: - (double)stopAtTime;	// 0x332d9ed9
// declared property getter: - (double)time;	// 0x332d9e49
- (void)updateForTime:(double)time andPlug:(id)plug;	// 0x332d9b4d
@end

