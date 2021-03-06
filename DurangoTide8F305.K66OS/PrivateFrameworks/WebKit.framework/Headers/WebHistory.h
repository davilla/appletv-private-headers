/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
@private
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x3400fa99; S=0x3400fab9; converted property
@property(assign) int historyItemLimit;	// G=0x3400fad9; S=0x3400faf9; converted property
+ (void)_removeAllVisitedLinks;	// 0x340106b9
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x340106c5
+ (id)optionalSharedHistory;	// 0x33fd2ea9
+ (void)setOptionalSharedHistory:(id)history;	// 0x33fc22c9
- (id)init;	// 0x33fc214d
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x33fd7855
- (id)_data;	// 0x34010699
- (id)_itemForURLString:(id)urlstring;	// 0x33fde505
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x33fd39c5
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x33fd2eb5
- (void)addItems:(id)items;	// 0x3400fbbd
- (id)allItems;	// 0x34010679
- (BOOL)containsURL:(id)url;	// 0x3400fb5d
- (void)dealloc;	// 0x3400fca9
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x3400fa99
// converted property getter: - (int)historyItemLimit;	// 0x3400fad9
- (id)itemForURL:(id)url;	// 0x33fd5789
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x33fcbf59
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x3400fb7d
- (id)orderedLastVisitedDays;	// 0x3400fb9d
- (void)removeAllItems;	// 0x3400fbfd
- (void)removeItems:(id)items;	// 0x3400fc5d
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x3400fb19
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x3400fab9
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3400faf9
@end

