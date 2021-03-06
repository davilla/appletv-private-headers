/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class NSArray, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x31dc0ea1; S=0x31dc0ebd; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31dc0e91; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31dc0e71; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x31dc1375; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x31dc0e81; 
+ (id)collectionWithItems:(id)items;	// 0x31dc1299
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x31dc15a5
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x31dc15dd
- (id)init;	// 0x31dc1269
- (id)initWithCoder:(id)coder;	// 0x31dc106d
- (id)initWithItems:(id)items;	// 0x31dc11a9
- (id)_init;	// 0x31dc1335
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x31dc0ea1
// declared property getter: - (unsigned)count;	// 0x31dc0e91
- (void)dealloc;	// 0x31dc12d9
- (void)encodeWithCoder:(id)coder;	// 0x31dc0f65
// declared property getter: - (id)items;	// 0x31dc0e71
- (id)itemsQuery;	// 0x31dc0ee9
// declared property getter: - (int)mediaTypes;	// 0x31dc1375
// declared property getter: - (id)representativeItem;	// 0x31dc0e81
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x31dc0ebd
@end

