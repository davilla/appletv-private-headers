/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRViewController.h> // Unknown library

@class ATVThunderStandingsView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : BRViewController {
@private
	ATVThunderStandingsView *_standingsView;	// 64 = 0x40
	NSDictionary *_data;	// 68 = 0x44
}
- (id)initWithDictionary:(id)dictionary;	// 0x306df179
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x306dee55
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x306def1d
- (id)accessibilityLabel;	// 0x306df005
- (id)accessibilityNonFocusableElements;	// 0x306defe5
- (void)dealloc;	// 0x306df11d
- (float)headerHeightForTableView:(id)tableView;	// 0x306dee49
- (BOOL)isAccessibilityElement;	// 0x306dee51
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x306df09d
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x306df05d
- (long)numberOfRowsInTableView:(id)tableView;	// 0x306df0dd
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x306df709
- (float)tableView:(id)view heightForRow:(long)row;	// 0x306dee41
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x306df441
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x306df041
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x306df025
@end

