/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
	long long _albumArtistPersisentID;	// 4 = 0x4
	NSData *_groupingKey;	// 12 = 0xc
	NSString *_feedURL;	// 16 = 0x10
	int _seasonNumber;	// 20 = 0x14
	BOOL _compilation;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) long long albumArtistPersisentID;	// G=0x3484531d; @synthesize=_albumArtistPersisentID
@property(readonly, assign, nonatomic) BOOL compilation;	// G=0x3484536d; @synthesize=_compilation
@property(readonly, assign, nonatomic) NSString *feedURL;	// G=0x34845349; @synthesize=_feedURL
@property(readonly, assign, nonatomic) NSData *groupingKey;	// G=0x34845335; @synthesize=_groupingKey
@property(readonly, assign, nonatomic) int seasonNumber;	// G=0x3484535d; @synthesize=_seasonNumber
- (id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation inLibrary:(id)library;	// 0x34844f31
- (id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID groupingKey:(id)key feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation;	// 0x34844fbd
- (void).cxx_destruct;	// 0x3484537d
// declared property getter: - (long long)albumArtistPersisentID;	// 0x3484531d
// declared property getter: - (BOOL)compilation;	// 0x3484536d
- (id)copyWithZone:(NSZone *)zone;	// 0x34845319
- (id)description;	// 0x34845091
// declared property getter: - (id)feedURL;	// 0x34845349
// declared property getter: - (id)groupingKey;	// 0x34845335
- (unsigned)hash;	// 0x348452ad
- (BOOL)isEqual:(id)equal;	// 0x34845175
// declared property getter: - (int)seasonNumber;	// 0x3484535d
@end

