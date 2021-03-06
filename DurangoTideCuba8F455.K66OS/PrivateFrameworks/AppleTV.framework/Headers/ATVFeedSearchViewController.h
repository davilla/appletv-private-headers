/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewController.h"

@class NSString, NSMutableDictionary, NSDictionary, ATVFeedSearchResultsLoader, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
@private
	ATVMerchant *_merchant;	// 80 = 0x50
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 84 = 0x54
	NSString *_baseURLString;	// 88 = 0x58
	NSDictionary *_results;	// 92 = 0x5c
	NSMutableDictionary *_headerCache;	// 96 = 0x60
}
- (id)initWithDictionary:(id)dictionary;	// 0x30711d1d
- (id)_indexPathForFirstItem;	// 0x30711679
- (id)_itemAtIndexPath:(id)indexPath;	// 0x307117b5
- (long)_numberOfRowsInSection:(long)section;	// 0x307116dd
- (long)_numberOfSections;	// 0x30711769
- (BOOL)_search:(id)search;	// 0x30711b65
- (void)_searchResultsReady:(id)ready;	// 0x3071185d
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x3071203d
- (void)dealloc;	// 0x30711c65
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x30711901
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x30711989
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x30711b0d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x30711ae1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x307119d5
- (long)numberOfSectionsInList:(id)list;	// 0x30711af9
@end

