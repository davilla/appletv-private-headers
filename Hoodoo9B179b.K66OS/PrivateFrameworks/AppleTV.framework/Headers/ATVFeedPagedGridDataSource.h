/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVMerchant, ATVFeedPagedGridElement, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedPagedGridDataSource : NSObject {
@private
	unsigned _oldGridSelection;	// 4 = 0x4
	NSMutableArray *_grids;	// 8 = 0x8
	NSArray *_pages;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	ATVFeedPagedGridElement *_feedElement;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedPagedGridElement *feedElement;	// G=0x30398525; S=0x30398535; @synthesize=_feedElement
@property(readonly, assign) ATVMerchant *merchant;	// G=0x30398511; @synthesize=_merchant
@property(readonly, assign) NSArray *pages;	// G=0x303984fd; @synthesize=_pages
- (id)initWithFeedElement:(id)feedElement;	// 0x30397e35
- (id)initWithPages:(id)pages merchant:(id)merchant;	// 0x30397f99
- (void)dealloc;	// 0x303980b9
// declared property getter: - (id)feedElement;	// 0x30398525
// declared property getter: - (id)merchant;	// 0x30398511
- (long)pageCountForPagedView:(id)pagedView;	// 0x303983a1
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x30398441
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x30398141
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x30398405
// declared property getter: - (id)pages;	// 0x303984fd
// declared property setter: - (void)setFeedElement:(id)element;	// 0x30398535
@end

