/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3CacheGenerator : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
}
- (id)initWithML3MusicLibrary:(id)ml3MusicLibrary;	// 0x31bc91f1
- (id)generateAlbumCacheForPlaylist:(unsigned long long)playlist;	// 0x31bc9a61
- (id)generateCacheForPlaylist:(unsigned long long)playlist property:(id)property;	// 0x31bc9e41
- (id)generateSectionInfoForPlaylist:(unsigned long long)playlist property:(id)property;	// 0x31bca13d
@end

