/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MusicAlbumsController : MusicController {
@private
	ATVMediaCollectionRef _artist;	// 124 = 0x7c
	NSNumber *_artistID;	// 128 = 0x80
	NSString *_genre;	// 132 = 0x84
	BOOL _displaysCompilationsOnly;	// 136 = 0x88
	BOOL _displaysAudiobooksOnly;	// 137 = 0x89
}
+ (id)albumsControllerForArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f3fad
+ (id)albumsControllerForArtistID:(id)artistID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f4009
+ (id)allAlbumsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f3de9
+ (id)allAlbumsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x342f3dc5
+ (id)allAudiobooksControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x342f3f1d
+ (id)allCompilationsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x342f3e7d
- (id)initWithArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f4119
- (id)initWithArtistID:(id)artistID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f40bd
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x342f4061
- (int)_headerCount;	// 0x342f5015
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x342f503d
- (void)_setDisplaysCompilationsOnly:(BOOL)only;	// 0x342f502d
- (ATVMediaQueryRef)createDataQuery;	// 0x342f4495
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x342f46f5
- (ATVMediaQueryRef)createPreDataQuery;	// 0x342f4255
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x342f4651
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x342f4a1d
- (void)dealloc;	// 0x342f41dd
- (id)errorForNoContent;	// 0x342f49b1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x342f4c75
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x342f4dc9
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x342f4be5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x342f4ac1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x342f4c2d
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x342f48ad
- (BOOL)preDataQueryComplete:(id)complete;	// 0x342f42d5
@end

