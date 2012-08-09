/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSDate;

@interface MPNowPlayingInfoCenter : NSObject {
	NSDictionary *_nowPlayingInfo;	// 4 = 0x4
	NSDictionary *_queuedNowPlayingInfo;	// 8 = 0x8
	NSDate *_pushDate;	// 12 = 0xc
}
@property(copy) NSDictionary *nowPlayingInfo;	// G=0x3376939d; S=0x33768f29; 
+ (id)defaultCenter;	// 0x33768e31
- (id)init;	// 0x33768edd
- (id)_init;	// 0x33768eb1
- (void)_pushNowPlayingInfoAndRetry:(BOOL)retry;	// 0x33769011
// declared property getter: - (id)nowPlayingInfo;	// 0x3376939d
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x33768f29
@end
