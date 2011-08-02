/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3ITImageLibrary : NSObject {
@private
	void *_imageLibrary;	// 4 = 0x4
	unsigned _triedToLoadDatabase : 1;	// 8 = 0x8
}
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x31bb2fe9
+ (id)sharedLibrary;	// 0x31bc5715
- (id)_init;	// 0x31bc576d
- (BOOL)_loadDatabase;	// 0x31bfafcd
- (BOOL)_loadImageLibraryIfNecessary;	// 0x31bc58ad
- (ITImageInfo *)_lookupITImageInfoForTrack:(id)track artworkType:(int)type;	// 0x31bfb145
- (id)availableArtworkFormatIDsForTrack:(id)track artworkType:(int)type atTime:(double)time;	// 0x31bfb199
- (void)dealloc;	// 0x31bfaf89
- (id)imageDataForTrack:(id)track artworkType:(int)type formatID:(unsigned)anId atTime:(double)time size:(CGSize)size returningArtworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x31bc7339
- (BOOL)isImageDataAvailableForTrack:(id)track artworkType:(int)type;	// 0x31bc57b9
- (BOOL)isImageDataIdenticalForTrack:(id)track otherTrack:(id)track2 artworkType:(int)type missingAlwaysComparesEqual:(BOOL)equal;	// 0x31bfafe5
@end

