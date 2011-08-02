/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSArray, NSMutableArray;

@interface BRTableView : BRControl {
@private
	id _dataSource;	// 44 = 0x2c
	id _delegate;	// 48 = 0x30
	BOOL _showingHeader;	// 52 = 0x34
	NSArray *_rows;	// 56 = 0x38
	NSMutableArray *_widthValues;	// 60 = 0x3c
	BOOL _reloadNeeded;	// 64 = 0x40
	BOOL _rowsUseColorBanding;	// 65 = 0x41
}
@property(assign, nonatomic) id dataSource;	// G=0x330250a5; S=0x33025049; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x33025085; S=0x33025095; @synthesize=_delegate
@property(assign, nonatomic) BOOL rowsUseColorBanding;	// G=0x33025065; S=0x33025075; @synthesize=_rowsUseColorBanding
- (id)init;	// 0x330250b5
- (void)_createRows;	// 0x330252ad
- (void)_reloadIfNeeded;	// 0x330250f1
- (id)_widthValues;	// 0x33025115
- (id)accessibilityLabel;	// 0x330256b1
// declared property getter: - (id)dataSource;	// 0x330250a5
- (void)dealloc;	// 0x33025251
// declared property getter: - (id)delegate;	// 0x33025085
- (void)layoutSubcontrols;	// 0x330259c9
- (void)reload;	// 0x330251fd
// declared property getter: - (BOOL)rowsUseColorBanding;	// 0x33025065
// declared property setter: - (void)setDataSource:(id)source;	// 0x33025049
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33025095
// declared property setter: - (void)setRowsUseColorBanding:(BOOL)banding;	// 0x33025075
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3302580d
@end

