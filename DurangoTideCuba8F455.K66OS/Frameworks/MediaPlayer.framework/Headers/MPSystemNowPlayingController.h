/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface MPSystemNowPlayingController : NSObject {
@private
	unsigned long long _lastPostedNowPlayingItemPersistentID;	// 4 = 0x4
	NSDictionary *_lastNowPlayingInfo;	// 12 = 0xc
	BOOL _hasSeenAnyItem;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x335c0291
- (id)init;	// 0x335bff65
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x335c0005
- (id)_init;	// 0x335c02d5
- (void)_sendAirTunesMetadataForItem:(id)item;	// 0x335c06fd
- (void)dealloc;	// 0x335c0211
- (void)postNowPlayingInfoForItem:(id)item isPlaying:(BOOL)playing additionalInfo:(id)info;	// 0x335c0369
- (void)postProgressUpdateForItem:(id)item;	// 0x335c0061
@end

