/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRViewController.h> // Unknown library

@class NSDictionary, BRPageStripView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVStandingsController : BRViewController {
@private
	BRPageStripView *_pageStripView;	// 64 = 0x40
	NSDictionary *_data;	// 68 = 0x44
	NSArray *_items;	// 72 = 0x48
}
- (id)initWithDictionary:(id)dictionary;	// 0x3370d0b5
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x3370d29d
- (void)dealloc;	// 0x3370d049
- (float)headerHeightForTableView:(id)tableView;	// 0x3370cf5d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x3370cfa9
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x3370cf95
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x3370d029
- (long)numberOfRowsInTableView:(id)tableView;	// 0x3370cfe9
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x3370d395
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x3370d4ed
- (float)tableView:(id)view heightForRow:(long)row;	// 0x3370cf55
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x3370d619
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x3370cf79
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x3370cf65
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x3370cf4d
@end

