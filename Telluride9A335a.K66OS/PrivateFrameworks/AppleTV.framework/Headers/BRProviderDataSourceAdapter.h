/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRProviderDataSourceAdapter : NSObject {
@private
	float _itemHeight;	// 4 = 0x4
	NSArray *_providers;	// 8 = 0x8
	BOOL _showsDividers;	// 12 = 0xc
	long _gridColumnCount;	// 16 = 0x10
	NSArray *_shelfSectionTitles;	// 20 = 0x14
	BOOL _variableItemHeight;	// 24 = 0x18
}
@property(assign) long gridColumnCount;	// G=0x341bc03d; S=0x341bc04d; @synthesize=_gridColumnCount
@property(retain) NSArray *providers;	// G=0x341bbfe5; S=0x341bbff9; @synthesize=_providers
@property(retain) NSArray *shelfSectionTitles;	// G=0x341bc05d; S=0x341bc071; @synthesize=_shelfSectionTitles
@property(assign) BOOL showsDividers;	// G=0x341bc01d; S=0x341bc02d; @synthesize=_showsDividers
@property(assign) BOOL variableItemHeight;	// G=0x341bc095; S=0x341bc0a5; @synthesize=_variableItemHeight
- (id)_dataAtIndex:(long)index;	// 0x341bc0b5
- (void)dealloc;	// 0x341bb7b1
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x341bbab1
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x341bba39
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x341bb995
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x341bb9fd
// declared property getter: - (long)gridColumnCount;	// 0x341bc03d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x341bb949
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x341bb945
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x341bb811
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x341bb8d5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x341bb90d
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x341bbcfd
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x341bbb99
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x341bbc95
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x341bbc5d
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x341bbdc1
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x341bbe59
- (long)numberOfColumnsInGrid:(id)grid;	// 0x341bb985
- (long)numberOfItemsInGrid:(id)grid;	// 0x341bb94d
- (long)numberOfSectionsInList:(id)list;	// 0x341bb8b5
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x341bbc3d
// declared property getter: - (id)providers;	// 0x341bbfe5
// declared property setter: - (void)setGridColumnCount:(long)count;	// 0x341bc04d
// declared property setter: - (void)setProviders:(id)providers;	// 0x341bbff9
// declared property setter: - (void)setShelfSectionTitles:(id)titles;	// 0x341bc071
// declared property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x341bc02d
// declared property setter: - (void)setVariableItemHeight:(BOOL)height;	// 0x341bc0a5
// declared property getter: - (id)shelfSectionTitles;	// 0x341bc05d
// declared property getter: - (BOOL)showsDividers;	// 0x341bc01d
// declared property getter: - (BOOL)variableItemHeight;	// 0x341bc095
@end

