/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "StoreBookkeeper-Structs.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : NSObject <NSCopying> {
@private
	NSString *_itemIdentifier;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	double _bookmarkTime;	// 16 = 0x10
	BOOL _hasBeenPlayed;	// 24 = 0x18
	unsigned _playCount;	// 28 = 0x1c
}
@property(assign, nonatomic) double bookmarkTime;	// G=0x3085e6e9; S=0x3085e701; @synthesize=_bookmarkTime
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x3085e715; S=0x3085e725; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x3085e699; S=0x3085e6ad; @synthesize=_itemIdentifier
@property(assign, nonatomic) unsigned playCount;	// G=0x3085e735; S=0x3085e745; @synthesize=_playCount
@property(assign, nonatomic) double timestamp;	// G=0x3085e6bd; S=0x3085e6d5; @synthesize=_timestamp
+ (id)keyValueStoreItemIdentifierForItem:(id)item;	// 0x3085d7e9
+ (id)metadataWithValuesFromDataSourceItem:(id)dataSourceItem;	// 0x3085dcb1
+ (id)metadataWithValuesItemIdentifier:(id)valuesItemIdentifier keyValueStorePayload:(id)payload;	// 0x3085dfc9
- (id)init;	// 0x3085d311
// declared property getter: - (double)bookmarkTime;	// 0x3085e6e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3085d4f1
- (void)dealloc;	// 0x3085d79d
- (id)description;	// 0x3085d341
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x3085e715
- (unsigned)hash;	// 0x3085d5ed
- (BOOL)isEqual:(id)equal;	// 0x3085d6b9
// declared property getter: - (id)itemIdentifier;	// 0x3085e699
- (id)keyValueStorePayload;	// 0x3085e505
// declared property getter: - (unsigned)playCount;	// 0x3085e735
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x3085e701
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x3085e725
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3085e6ad
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x3085e745
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3085e6d5
// declared property getter: - (double)timestamp;	// 0x3085e6bd
@end

