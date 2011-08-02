/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemCollection.h"

@class NSMutableDictionary, MPMediaQuery, MPMediaItem;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
@private
	long long _identifier;	// 4 = 0x4
	MPMediaQuery *_itemsQuery;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	int _grouping;	// 20 = 0x14
	MPMediaItem *_representativeItem;	// 24 = 0x18
}
@property(readonly, retain) MPMediaQuery *itemsQuery;	// G=0x3363ffc9; converted property
@property(readonly, retain) MPMediaItem *representativeItem;	// G=0x3363fded; converted property
- (id)initWithCoder:(id)coder;	// 0x33641339
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping;	// 0x3364145d
- (id)copyWithZone:(NSZone *)zone;	// 0x33640215
- (unsigned)count;	// 0x3363fdc9
- (void)dealloc;	// 0x336413f1
- (void)encodeWithCoder:(id)coder;	// 0x336401d1
- (unsigned)hash;	// 0x3363e80d
- (BOOL)isEqual:(id)equal;	// 0x336402a1
- (id)items;	// 0x3363ffa9
// converted property getter: - (id)itemsQuery;	// 0x3363ffc9
- (id)mediaLibrary;	// 0x336401b1
- (int)mediaTypes;	// 0x3364246d
- (unsigned long long)persistentID;	// 0x3363e81d
// converted property getter: - (id)representativeItem;	// 0x3363fded
- (id)valueForProperty:(id)property;	// 0x3363fff9
@end

