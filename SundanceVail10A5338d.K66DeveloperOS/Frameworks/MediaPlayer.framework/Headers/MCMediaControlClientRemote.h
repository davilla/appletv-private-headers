/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;	// 0x341dd7bd
- (void)dealloc;	// 0x341dd711
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddb05
- (void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddb81
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddcf5
- (void)invalidate;	// 0x341dd7ad
- (void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x341dd9b1
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x341dd8c1
- (void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;	// 0x341ddded
- (void)setHost:(id)host;	// 0x341dd759
- (void)setPassword:(id)password;	// 0x341dd86d
- (void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddbfd
- (void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddc79
- (void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;	// 0x341ddd71
- (void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x341dda89
@end

