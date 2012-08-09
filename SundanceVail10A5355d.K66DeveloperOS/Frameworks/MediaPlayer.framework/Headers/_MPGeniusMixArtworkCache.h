/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface _MPGeniusMixArtworkCache : NSObject {
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x3373830d; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x337384a1; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x33738549; 
@property(readonly, assign, nonatomic) unsigned long long entityArtworkCacheHash;	// G=0x3373860d; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x3373805d
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size entityArtworkCacheHash:(unsigned long long)hash artworkData:(void *)data length:(unsigned)length;	// 0x33737f69
- (id)init;	// 0x33737ea5
// declared property getter: - (CGImageRef)artworkImage;	// 0x3373830d
// declared property getter: - (unsigned)coverCount;	// 0x337384a1
// declared property getter: - (CGSize)coverSize;	// 0x33738549
- (void)dealloc;	// 0x33737f05
// declared property getter: - (unsigned long long)entityArtworkCacheHash;	// 0x3373860d
- (BOOL)writeToFile:(id)file;	// 0x337386b9
@end
