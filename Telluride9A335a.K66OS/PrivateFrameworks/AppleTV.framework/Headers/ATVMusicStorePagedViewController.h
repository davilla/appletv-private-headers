/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : NSObject {
@private
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x341197a5
- (id)init;	// 0x34119891
- (id)initWithStoreItem:(id)storeItem;	// 0x34119895
- (long)_itemsPerPage;	// 0x3411a58d
- (long)_pageCount;	// 0x3411a591
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x34119e5d
- (void)dealloc;	// 0x34119b79
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x34119fd5
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x3411a581
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3411a06d
- (long)numberOfItemsInGrid:(id)grid;	// 0x34119fd9
- (long)pageCountForPagedView:(id)pagedView;	// 0x34119e4d
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x34119fd1
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x34119cd5
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x34119e61
- (void)toggleCursorMode:(id)mode;	// 0x34119c1d
- (id)view;	// 0x34119cd1
@end

