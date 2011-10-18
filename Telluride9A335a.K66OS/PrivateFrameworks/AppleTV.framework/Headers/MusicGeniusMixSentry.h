/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
@private
	BOOL _queryPending;	// 4 = 0x4
	ATVMediaQueryRef _geniusMixSongsQuery;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x342fb8c5
+ (id)singleton;	// 0x342fb8b5
- (ATVDataClientRef)_dataClient;	// 0x342fbb2d
- (void)_geniusMixSongsQueryComplete;	// 0x342fbc05
- (void)_playerAssetChanged:(id)changed;	// 0x342fba81
- (void)_playerStateChanged:(id)changed;	// 0x342fb9f1
- (void)_setGeniusMixSongsQuery:(ATVMediaQueryRef)query;	// 0x342fbb65
- (void)dealloc;	// 0x342fb8d5
- (void)enableWithQuery:(ATVMediaQueryRef)query;	// 0x342fb94d
@end

