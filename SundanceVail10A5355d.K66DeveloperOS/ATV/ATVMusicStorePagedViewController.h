/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : XXUnknownSuperclass {
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1b9855
- (id)init;	// 0x1b9911
- (id)initWithStoreItem:(id)storeItem;	// 0x1b9915
- (long)_itemsPerPage;	// 0x1ba42d
- (long)_pageCount;	// 0x1ba431
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1ba039
- (void)dealloc;	// 0x1b9bc9
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1ba035
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1ba421
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1ba0d1
- (long)numberOfItemsInGrid:(id)grid;	// 0x1ba03d
- (long)pageCountForPagedView:(id)pagedView;	// 0x1b9ea9
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1ba031
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1b9d35
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1b9eb9
- (void)toggleCursorMode:(id)mode;	// 0x1b9c6d
- (id)view;	// 0x1b9d31
@end

