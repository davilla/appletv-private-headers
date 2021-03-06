/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMerchant, NSMutableArray, ATVFeedPagedGridElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedPagedGridDataSource : XXUnknownSuperclass {
	unsigned _oldGridSelection;	// 4 = 0x4
	NSMutableArray *_grids;	// 8 = 0x8
	NSArray *_pages;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	ATVFeedPagedGridElement *_feedElement;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedPagedGridElement *feedElement;	// G=0x13d801; S=0x13d811; @synthesize=_feedElement
@property(readonly, assign) ATVMerchant *merchant;	// G=0x13d7ed; @synthesize=_merchant
@property(readonly, assign) NSArray *pages;	// G=0x13d7d9; @synthesize=_pages
- (id)initWithFeedElement:(id)feedElement;	// 0x13d0f9
- (id)initWithPages:(id)pages merchant:(id)merchant;	// 0x13d259
- (void)dealloc;	// 0x13d395
// declared property getter: - (id)feedElement;	// 0x13d801
// declared property getter: - (id)merchant;	// 0x13d7ed
- (long)pageCountForPagedView:(id)pagedView;	// 0x13d685
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x13d719
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x13d421
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x13d6dd
// declared property getter: - (id)pages;	// 0x13d7d9
// declared property setter: - (void)setFeedElement:(id)element;	// 0x13d811
@end

