/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlaylist.h"

@class NSMutableDictionary, MPMediaQuery, NSArray;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist {
@private
	NSMutableDictionary *_properties;	// 4 = 0x4
	MPMediaQuery *_itemsQuery;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	void *_clusterPlaylist;	// 16 = 0x10
	BOOL _ignoreNextLibraryChange;	// 20 = 0x14
}
@property(readonly, retain) NSArray *items;	// G=0x3363fa51; converted property
- (id)initWithCoder:(id)coder;	// 0x33641159
- (id)initWithProperties:(id)properties itemsQuery:(id)query;	// 0x336412c5
- (void)_mediaLibraryDidChangeNotification:(id)_mediaLibrary;	// 0x3363fcc5
- (void)addItem:(id)item completionBlock:(id)block;	// 0x3363f67d
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)seedItems error:(id *)error;	// 0x33643175
- (id)copyWithZone:(NSZone *)zone;	// 0x3363fc75
- (unsigned)count;	// 0x3363f9f5
- (void)dealloc;	// 0x33641221
- (void)encodeWithCoder:(id)coder;	// 0x3363fc11
- (void)endGeneratingGeniusClusterItems;	// 0x3363efbd
- (BOOL)existsInLibrary;	// 0x3363fbc5
- (id)geniusClusterItemsWithCount:(unsigned)count error:(id *)error;	// 0x33643089
- (unsigned)hash;	// 0x3363fd3d
- (void)insertItem:(id)item atIndex:(unsigned)index completionBlock:(id)block;	// 0x3363f639
- (void)insertItems:(id)items atIndex:(unsigned)index completionBlock:(id)block;	// 0x33643e35
- (BOOL)isEqual:(id)equal;	// 0x3363fd5d
// converted property getter: - (id)items;	// 0x3363fa51
- (int)mediaTypes;	// 0x33642391
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 completionBlock:(id)block;	// 0x3363f115
- (void)populateWithSeedItem:(id)seedItem completionBlock:(id)block;	// 0x3363f015
- (void)removeAllItems;	// 0x3363f389
- (void)removeItemAtIndex:(unsigned)index completionBlock:(id)block;	// 0x3363f455
- (id)representativeItem;	// 0x3363fa19
- (void)setValue:(id)value forProperty:(id)property;	// 0x3363fae5
- (id)valueForProperty:(id)property;	// 0x3363f86d
@end

