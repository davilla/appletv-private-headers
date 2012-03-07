/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface GeniusMixArtworkCache : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x35bb284d; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x35bb26f5; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x35bb279d; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x35bb23ad
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size artworkData:(void *)data length:(unsigned)length;	// 0x35bb22bd
- (id)init;	// 0x35bb2631
// declared property getter: - (CGImageRef)artworkImage;	// 0x35bb284d
// declared property getter: - (unsigned)coverCount;	// 0x35bb26f5
// declared property getter: - (CGSize)coverSize;	// 0x35bb279d
- (void)dealloc;	// 0x35bb2691
- (BOOL)writeToFile:(id)file;	// 0x35bb2385
@end
