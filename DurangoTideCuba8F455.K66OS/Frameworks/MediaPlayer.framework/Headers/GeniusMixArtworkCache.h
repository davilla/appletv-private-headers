/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSData;

@interface GeniusMixArtworkCache : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x33638401; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x33637321; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x33637279; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x33637419
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size artworkData:(void *)data length:(unsigned)length;	// 0x3363833d
- (id)init;	// 0x336373bd
- (void)_cleanUpCachesInBackground;	// 0x33638089
// declared property getter: - (CGImageRef)artworkImage;	// 0x33638401
// declared property getter: - (unsigned)coverCount;	// 0x33637321
// declared property getter: - (CGSize)coverSize;	// 0x33637279
- (void)dealloc;	// 0x33637eed
- (BOOL)writeToFile:(id)file;	// 0x336374ed
@end

