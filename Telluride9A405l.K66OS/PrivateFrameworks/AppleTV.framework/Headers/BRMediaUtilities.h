/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRMediaUtilities : NSObject {
}
+ (void)_logDownloadKeyCookies;	// 0x35ecdc35
+ (id)defaultImageForMediaCollection:(ATVMediaCollectionRef)mediaCollection imageSize:(int)size;	// 0x35eccf85
+ (id)defaultImageForMediaItem:(ATVMediaItemRef)mediaItem imageSize:(int)size;	// 0x35eccf49
+ (void)deleteAllPlaybackCookies;	// 0x35ecdb39
+ (void)deleteCookiesForAsset:(id)asset;	// 0x35ecd9f9
+ (BOOL)iTunesServerID:(id)anId isEqualToITunesServerID:(id)itunesServerID;	// 0x35ecd73d
+ (BOOL)isAirPlayAsset:(id)asset;	// 0x35ecd4b9
+ (BOOL)isHomeShareRental:(id)rental;	// 0x35ecd519
+ (BOOL)isSagaMediaAsset:(id)asset;	// 0x35ecd6e1
+ (BOOL)isSagaMediaItem:(ATVMediaItemRef)item;	// 0x35ecd6bd
+ (BOOL)isTrilogyMediaAsset:(id)asset;	// 0x35ecd661
+ (BOOL)isTrilogyMediaItem:(ATVMediaItemRef)item;	// 0x35ecd635
+ (BOOL)isiTunesAsset:(id)asset;	// 0x35ecd439
+ (BOOL)isiTunesMediaItem:(ATVMediaItemRef)item;	// 0x35ecd495
+ (id)mediaAssetsFromMediaItems:(id)mediaItems;	// 0x35ecd381
+ (id)mediaTypeForATVMediaType:(ATVMediaTypeRef)atvmediaType;	// 0x35ecd071
+ (id)mediaTypeForMediaCollection:(ATVMediaCollectionRef)mediaCollection;	// 0x35ecd02d
+ (id)mediaTypeForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35eccfe9
+ (double)playedThresholdForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35ecccd1
+ (double)playedThresholdForMediaType:(ATVMediaTypeRef)mediaType duration:(double)duration;	// 0x35eccd89
+ (void)setCookiesForAsset:(id)asset;	// 0x35ecd849
+ (float)soundCheckValueForMediaAsset:(id)mediaAsset;	// 0x35ecce25
+ (float)soundCheckValueForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35ecce99
+ (int)watchedStateForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x35eccb11
+ (int)watchedStateForMediaType:(ATVMediaTypeRef)mediaType duration:(double)duration bookmarkInMS:(long)ms hasBeenPlayed:(BOOL)played playCount:(long)count;	// 0x35eccc49
@end
