/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSMutableDictionary, MLMovieProperties, NSDictionary, MLContentRating, NSString, NSArray;

@interface MLTrackImport : NSObject <NSCopying> {
@private
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x30e2708d; S=0x30e2709d; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x30e270c1; S=0x30e270d1; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x30e270f5; S=0x30e27105; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x30e27115; S=0x30e27125; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x30e26921; S=0x30e26ae1; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x30e2699d; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x30e269d5; S=0x30e26b35; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x30e26a25; S=0x30e26bbd; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x30e27149; S=0x30e27159; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x30e27169; S=0x30e27179; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x30e266d1
- (id)init;	// 0x30e26609
- (void)_addSortStrings;	// 0x30e26fe9
// declared property getter: - (id)artworkData;	// 0x30e2708d
// declared property getter: - (id)assetFilePath;	// 0x30e270c1
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x30e270f5
// declared property getter: - (id)chapters;	// 0x30e27115
// declared property getter: - (id)contentRating;	// 0x30e26921
- (id)copyEntityProperties;	// 0x30e26d7d
- (id)copyWithZone:(NSZone *)zone;	// 0x30e26815
- (void)dealloc;	// 0x30e26649
// declared property getter: - (id)entityProperties;	// 0x30e2699d
// declared property getter: - (unsigned long)mediaType;	// 0x30e269d5
// declared property getter: - (id)movieProperties;	// 0x30e26a25
- (void)normalizeEntityProperties;	// 0x30e26d9d
// declared property setter: - (void)setArtworkData:(id)data;	// 0x30e2709d
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x30e270d1
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x30e27105
// declared property setter: - (void)setChapters:(id)chapters;	// 0x30e27125
// declared property setter: - (void)setContentRating:(id)rating;	// 0x30e26ae1
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x30e26b35
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x30e26bbd
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x30e27159
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x30e27179
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x30e26cad
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x30e27149
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x30e27169
- (id)valueForEntityProperty:(id)entityProperty;	// 0x30e26d35
@end
