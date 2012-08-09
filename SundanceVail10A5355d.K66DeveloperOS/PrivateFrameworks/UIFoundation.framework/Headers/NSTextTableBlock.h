/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTextBlock.h"

@class NSTextTable;

__attribute__((visibility("hidden")))
@interface NSTextTableBlock : NSTextBlock {
	NSTextTable *_table;	// 32 = 0x20
	int _rowNum;	// 36 = 0x24
	int _colNum;	// 40 = 0x28
	int _rowSpan;	// 44 = 0x2c
	int _colSpan;	// 48 = 0x30
	void *_tableBlockPrimary;	// 52 = 0x34
	void *_tableBlockSecondary;	// 56 = 0x38
}
@property(readonly, assign) int rowSpan;	// G=0x32558e95; converted property
@property(readonly, retain) NSTextTable *table;	// G=0x32558e75; converted property
+ (void)initialize;	// 0x325588f9
- (id)initWithCoder:(id)coder;	// 0x32558bc9
- (id)initWithTable:(id)table startingRow:(int)row rowSpan:(int)span startingColumn:(int)column columnSpan:(int)span5;	// 0x32558939
- (void)_setColumnSpan:(int)span;	// 0x32558ed5
- (void)_setRowSpan:(int)span;	// 0x32558ec5
- (CGRect)boundsRectForContentRect:(CGRect)contentRect inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x32558f59
- (int)columnSpan;	// 0x32558eb5
- (id)copyWithZone:(NSZone *)zone;	// 0x32558dc5
- (void)dealloc;	// 0x325589fd
- (void)drawBackgroundWithFrame:(CGRect)frame inView:(id)view characterRange:(NSRange)range layoutManager:(id)manager;	// 0x32558fd9
- (void)encodeWithCoder:(id)coder;	// 0x32558a49
- (CGRect)rectForLayoutAtPoint:(CGPoint)point inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x32558ee5
// converted property getter: - (int)rowSpan;	// 0x32558e95
- (int)startingColumn;	// 0x32558ea5
- (int)startingRow;	// 0x32558e85
// converted property getter: - (id)table;	// 0x32558e75
@end
