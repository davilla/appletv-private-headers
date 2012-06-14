/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library


@interface AVSubtitleTextLayer : CALayer {
	OpaqueFigSubtitleRenderer *_renderer;	// 48 = 0x30
	dispatch_queue_s *_serialQueue;	// 52 = 0x34
	CFAttributedStringRef _currentSubtitleSample;	// 56 = 0x38
	BOOL _currentSubtitleSampleIsForced;	// 60 = 0x3c
	BOOL _nonForcedSubtitleDisplayEnabled;	// 61 = 0x3d
}
@property(assign) BOOL currentSubtitleSampleIsForced;	// G=0x326fc005; S=0x326fc015; @synthesize=_currentSubtitleSampleIsForced
@property(assign) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x326fc025; S=0x326fc035; @synthesize=_nonForcedSubtitleDisplayEnabled
- (id)init;	// 0x326fbc45
// declared property getter: - (BOOL)currentSubtitleSampleIsForced;	// 0x326fc005
- (void)dealloc;	// 0x326fbd09
- (void)drawInContext:(CGContextRef)context;	// 0x326fbde1
- (void)finalize;	// 0x326fbc99
// declared property getter: - (BOOL)nonForcedSubtitleDisplayEnabled;	// 0x326fc025
- (void)setCurrentSubtitleSample:(CFAttributedStringRef)sample;	// 0x326fbdad
// declared property setter: - (void)setCurrentSubtitleSampleIsForced:(BOOL)forced;	// 0x326fc015
// declared property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x326fc035
- (void)setSerialQueue:(dispatch_queue_s *)queue;	// 0x326fbd79
@end
