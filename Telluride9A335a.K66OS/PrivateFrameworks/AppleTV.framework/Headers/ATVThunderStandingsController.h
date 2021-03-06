/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class ATVThunderStandingsView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : BRViewController {
@private
	ATVThunderStandingsView *_standingsView;	// 84 = 0x54
	NSDictionary *_data;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x3414bfa5
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x3414cab5
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x3414c9dd
- (id)accessibilityLabel;	// 0x3414c99d
- (id)accessibilityNonFocusableElements;	// 0x3414c9bd
- (void)dealloc;	// 0x3414c2ed
- (float)headerHeightForTableView:(id)tableView;	// 0x3414c98d
- (BOOL)isAccessibilityElement;	// 0x3414c999
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x3414c395
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x3414c3dd
- (long)numberOfRowsInTableView:(id)tableView;	// 0x3414c34d
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x3414c769
- (float)tableView:(id)view heightForRow:(long)row;	// 0x3414c981
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x3414c425
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x3414c951
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x3414c969
@end

