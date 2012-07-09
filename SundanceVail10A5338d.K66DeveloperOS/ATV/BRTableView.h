/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface BRTableView : BRControl {
	id _dataSource;	// 80 = 0x50
	id _delegate;	// 84 = 0x54
	BOOL _showingHeader;	// 88 = 0x58
	NSArray *_rows;	// 92 = 0x5c
	NSMutableArray *_widthValues;	// 96 = 0x60
	BOOL _reloadNeeded;	// 100 = 0x64
	BOOL _rowsUseColorBanding;	// 101 = 0x65
}
@property(assign, nonatomic) id dataSource;	// G=0x284021; S=0x283b19; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x284031; S=0x284041; @synthesize=_delegate
@property(assign, nonatomic) BOOL rowsUseColorBanding;	// G=0x284051; S=0x284061; @synthesize=_rowsUseColorBanding
- (id)init;	// 0x283a71
- (void)_createRows;	// 0x284071
- (void)_reloadIfNeeded;	// 0x284799
- (id)_widthValues;	// 0x284521
- (id)accessibilityLabel;	// 0x28461d
// declared property getter: - (id)dataSource;	// 0x284021
- (void)dealloc;	// 0x283ab5
// declared property getter: - (id)delegate;	// 0x284031
- (float)headerYOrigin;	// 0x283b99
- (void)layoutSubcontrols;	// 0x283dfd
- (void)reload;	// 0x283b39
// declared property getter: - (BOOL)rowsUseColorBanding;	// 0x284051
// declared property setter: - (void)setDataSource:(id)source;	// 0x283b19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x284041
// declared property setter: - (void)setRowsUseColorBanding:(BOOL)banding;	// 0x284061
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x283c19
@end
