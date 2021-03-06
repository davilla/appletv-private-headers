/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : XXUnknownSuperclass {
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x1d5a35; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x1d35a9
- (id)init;	// 0x1d35e9
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x1d5f29
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x1d6091
- (float)_shelfWidthForData:(id)data;	// 0x1d5f91
- (id)buttonForData:(id)data;	// 0x1d36a1
- (float)buttonHeightForData:(id)data;	// 0x1d56a9
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x1d5a49
- (id)gridForData:(id)data;	// 0x1d47b1
- (float)gridHeightForData:(id)data;	// 0x1d58d5
- (id)listForData:(id)data;	// 0x1d4b65
- (float)listHeightForData:(id)data;	// 0x1d58d9
- (id)listRowForData:(id)data;	// 0x1d4e15
- (float)listRowHeightForData:(id)data;	// 0x1d58dd
- (id)mainMenuButtonForData:(id)data;	// 0x1d3e35
// declared property getter: - (unsigned)matchOrder;	// 0x1d5a35
- (id)mediaPreviewControlForData:(id)data;	// 0x1d5375
- (float)mediaPreviewHeightForData:(id)data;	// 0x1d5a25
- (id)pagedViewForData:(id)data;	// 0x1d5675
- (float)pagedViewHeightForData:(id)data;	// 0x1d5a29
- (id)placeholderImageForData:(id)data;	// 0x1d5b55
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x1d5ea9
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x1d5d71
- (id)playButtonEnabledMenuItem;	// 0x1d62e1
- (id)shelfForData:(id)data;	// 0x1d3fd1
- (float)shelfHeightForData:(id)data;	// 0x1d57b9
@end

