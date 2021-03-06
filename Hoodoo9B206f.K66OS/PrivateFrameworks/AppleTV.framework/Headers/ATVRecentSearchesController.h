/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 160 = 0xa0
	ATVSearchAgent *_searchAgent;	// 164 = 0xa4
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x365b43c5
- (void)_populateRecentSearchesList;	// 0x365b46d5
- (void)dealloc;	// 0x365b446d
- (float)heightForRow:(long)row;	// 0x365b4675
- (long)itemCount;	// 0x365b45fd
- (id)itemForRow:(long)row;	// 0x365b45a5
- (void)itemSelected:(long)selected;	// 0x365b44cd
- (id)previewControlForItem:(long)item;	// 0x365b46d1
- (BOOL)rowSelectable:(long)selectable;	// 0x365b46cd
- (id)titleForRow:(long)row;	// 0x365b461d
@end

