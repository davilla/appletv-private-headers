/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRBaseMediaAsset.h"
#import "BRATVMediaItem.h"

@class NSMutableDictionary;

@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem> {
@private
	ATVMediaItemRef _mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x32992941; S=0x32992e31; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x328a3429
+ (id)streamingMediaAssetWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x32992471
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x32992fc5
- (BOOL)_supportsBookmarkProperty;	// 0x32992559
- (id)artist;	// 0x32992add
- (id)assetID;	// 0x32992509
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x32992941
- (void)dealloc;	// 0x329924b1
- (long)duration;	// 0x329929a9
- (BOOL)hasVideoContent;	// 0x32992b45
- (id)imageProxy;	// 0x32992815
- (void)incrementPerformanceCount;	// 0x32992f41
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x329923a5
- (BOOL)isHD;	// 0x329929f9
- (id)mediaDescription;	// 0x32992a41
- (ATVMediaItemRef)mediaItemRef;	// 0x3299234d
- (id)mediaSummary;	// 0x32992a75
- (id)mediaType;	// 0x32992445
- (id)mediaURL;	// 0x32992c55
- (id)playbackMetadata;	// 0x3299259d
- (id)primaryCollectionTitle;	// 0x32992aa9
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x32992e31
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x3299235d
- (void)setWatched:(BOOL)watched;	// 0x32992c9d
- (unsigned)startTimeInMS;	// 0x329928f1
- (id)title;	// 0x32992b11
@end
