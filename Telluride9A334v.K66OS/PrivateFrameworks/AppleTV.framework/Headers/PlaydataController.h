/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PlaydataController : NSObject {
}
+ (void)cleanUp;	// 0x334f013c
+ (id)instance;	// 0x334f0178
- (id)init;	// 0x334f1170
- (void)changeState:(int)state;	// 0x334f0070
- (void)dealloc;	// 0x334f00bc
- (void)downloadableDidChange:(unsigned)downloadable playbackPosition:(double)position;	// 0x334f0614
- (void)playbackDidEnd:(double)playback;	// 0x334f0ab8
- (void)playbackDidPause:(double)playback;	// 0x334f093c
- (void)playbackDidResume:(double)playback;	// 0x334f07c0
- (void)playbackDidStart:(unsigned)playback position:(double)position;	// 0x334f0cb8
- (void)playbackNewSession;	// 0x334f1030
- (void)playbackRetrySend;	// 0x334f01cc
- (void)playbackUpdateProgress:(double)progress;	// 0x334f0664
- (BOOL)sessionOpened;	// 0x334f0084
- (id)stringWithState:(int)state;	// 0x334effd4
- (void)updatePersistor:(double)persistor;	// 0x334f02f8
@end

