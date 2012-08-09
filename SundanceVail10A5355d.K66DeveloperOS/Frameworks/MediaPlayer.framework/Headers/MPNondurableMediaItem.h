/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"


@interface MPNondurableMediaItem : MPMediaItem {
	unsigned long long _persistentID;	// 4 = 0x4
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x3370f3d1; converted property
+ (BOOL)canFilterByProperty:(id)property;	// 0x3370f439
+ (id)defaultPropertyValues;	// 0x3370f43d
- (id)initWithCoder:(id)coder;	// 0x3370f6a5
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x3370f38d
- (void)clearBookmarkTime;	// 0x3370f435
- (void)dealloc;	// 0x3370f3ed
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x3370f419
- (void)encodeWithCoder:(id)coder;	// 0x3370f709
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x3370f749
- (BOOL)existsInLibrary;	// 0x3370f3e9
- (void)incrementPlayCountForPlayingToEnd;	// 0x3370f429
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x3370f42d
- (void)incrementSkipCount;	// 0x3370f425
- (BOOL)isUsableAsRepresentativeItem;	// 0x3370f815
- (void)markNominalAmountHasBeenPlayed;	// 0x3370f41d
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x3370f421
// converted property getter: - (unsigned long long)persistentID;	// 0x3370f3d1
- (void)setValue:(id)value forKey:(id)key;	// 0x3370f629
- (void)updateLastUsedDateToCurrentDate;	// 0x3370f431
- (id)valueForProperty:(id)property;	// 0x3370f535
- (id)valuesForProperties:(id)properties;	// 0x3370f441
@end
