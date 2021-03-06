/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVPlaybackProgressMonitor.h"

@class AVPlayerItemAccessLogEvent;

__attribute__((visibility("hidden")))
@interface ATVPlaybackStreamingProgressMonitor : ATVPlaybackProgressMonitor {
@private
	AVPlayerItemAccessLogEvent *_latestEventForSampling;	// 180 = 0xb4
}
- (void)dealloc;	// 0x331ab735
- (void)finishPeriodicSample;	// 0x331ab865
- (void)startPeriodicSample;	// 0x331ab781
- (id)streamingType;	// 0x331ab8dd
@end

