/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class _UIGridLayoutInfo, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutSection : NSObject {
	NSMutableArray *_items;	// 4 = 0x4
	NSMutableArray *_rows;	// 8 = 0x8
	UIEdgeInsets _sectionMagins;	// 12 = 0xc
	float _verticalInterstice;	// 28 = 0x1c
	float _horizontalInterstice;	// 32 = 0x20
	CGRect _headerFrame;	// 36 = 0x24
	CGRect _footerFrame;	// 52 = 0x34
	float _headerDimension;	// 68 = 0x44
	float _footerDimension;	// 72 = 0x48
	_UIGridLayoutInfo *_layoutInfo;	// 76 = 0x4c
	BOOL _isValid;	// 80 = 0x50
	CGRect _frame;	// 84 = 0x54
	NSDictionary *_rowAlignmentOptions;	// 100 = 0x64
	BOOL _fixedItemSize;	// 104 = 0x68
	CGSize _itemSize;	// 108 = 0x6c
	float _otherMargin;	// 116 = 0x74
	float _beginMargin;	// 120 = 0x78
	float _endMargin;	// 124 = 0x7c
	float _actualGap;	// 128 = 0x80
	float _lastRowBeginMargin;	// 132 = 0x84
	float _lastRowEndMargin;	// 136 = 0x88
	float _lastRowActualGap;	// 140 = 0x8c
	BOOL _lastRowIncomplete;	// 144 = 0x90
	int _itemsCount;	// 148 = 0x94
	int _itemsByRowCount;	// 152 = 0x98
	int _indexOfImcompleteRow;	// 156 = 0x9c
	UIEdgeInsets _sectionMargins;	// 160 = 0xa0
}
@property(readonly, assign, nonatomic) float actualGap;	// G=0x31032651; @synthesize=_actualGap
@property(readonly, assign, nonatomic) float beginMargin;	// G=0x31032631; @synthesize=_beginMargin
@property(readonly, assign, nonatomic) float endMargin;	// G=0x31032641; @synthesize=_endMargin
@property(assign, nonatomic) BOOL fixedItemSize;	// G=0x31032601; S=0x31032611; @synthesize=_fixedItemSize
@property(assign, nonatomic) float footerDimension;	// G=0x310324e1; S=0x310324f1; @synthesize=_footerDimension
@property(assign, nonatomic) CGRect footerFrame;	// G=0x31032541; S=0x31032565; @synthesize=_footerFrame
@property(assign, nonatomic) CGRect frame;	// G=0x310325a1; S=0x310325c5; @synthesize=_frame
@property(assign, nonatomic) float headerDimension;	// G=0x310324c1; S=0x310324d1; @synthesize=_headerDimension
@property(assign, nonatomic) CGRect headerFrame;	// G=0x31032501; S=0x31032525; @synthesize=_headerFrame
@property(assign, nonatomic) float horizontalInterstice;	// G=0x31032461; S=0x31032471; @synthesize=_horizontalInterstice
@property(readonly, assign, nonatomic) int indexOfImcompleteRow;	// G=0x310326a1; @synthesize=_indexOfImcompleteRow
@property(assign, nonatomic) CGSize itemSize;	// G=0x310326e1; S=0x310326f9; @synthesize=_itemSize
@property(readonly, assign, nonatomic) NSMutableArray *items;	// G=0x31032421; @synthesize=_items
@property(readonly, assign, nonatomic) int itemsByRowCount;	// G=0x310326d1; @synthesize=_itemsByRowCount
@property(assign, nonatomic) int itemsCount;	// G=0x310326b1; S=0x310326c1; @synthesize=_itemsCount
@property(readonly, assign, nonatomic) float lastRowActualGap;	// G=0x31032681; @synthesize=_lastRowActualGap
@property(readonly, assign, nonatomic) float lastRowBeginMargin;	// G=0x31032661; @synthesize=_lastRowBeginMargin
@property(readonly, assign, nonatomic) float lastRowEndMargin;	// G=0x31032671; @synthesize=_lastRowEndMargin
@property(readonly, assign, nonatomic) BOOL lastRowIncomplete;	// G=0x31032691; @synthesize=_lastRowIncomplete
@property(assign, nonatomic) _UIGridLayoutInfo *layoutInfo;	// G=0x31032581; S=0x31032591; @synthesize=_layoutInfo
@property(readonly, assign, nonatomic) float otherMargin;	// G=0x31032621; @synthesize=_otherMargin
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions;	// G=0x310325e1; S=0x310325f1; @synthesize=_rowAlignmentOptions
@property(readonly, assign, nonatomic) NSMutableArray *rows;	// G=0x31032431; @synthesize=_rows
@property(assign, nonatomic) UIEdgeInsets sectionMargins;	// G=0x31032481; S=0x310324a5; @synthesize=_sectionMargins
@property(assign, nonatomic) float verticalInterstice;	// G=0x31032441; S=0x31032451; @synthesize=_verticalInterstice
- (id)init;	// 0x31030c81
// declared property getter: - (float)actualGap;	// 0x31032651
- (id)addItem;	// 0x31031dbd
- (id)addRow;	// 0x31031e41
// declared property getter: - (float)beginMargin;	// 0x31032631
- (void)computeLayout;	// 0x31030d71
- (id)copyFromLayoutInfo:(id)layoutInfo;	// 0x31032089
- (void)dealloc;	// 0x31031d31
// declared property getter: - (float)endMargin;	// 0x31032641
// declared property getter: - (BOOL)fixedItemSize;	// 0x31032601
// declared property getter: - (float)footerDimension;	// 0x310324e1
// declared property getter: - (CGRect)footerFrame;	// 0x31032541
// declared property getter: - (CGRect)frame;	// 0x310325a1
// declared property getter: - (float)headerDimension;	// 0x310324c1
// declared property getter: - (CGRect)headerFrame;	// 0x31032501
// declared property getter: - (float)horizontalInterstice;	// 0x31032461
// declared property getter: - (int)indexOfImcompleteRow;	// 0x310326a1
- (void)invalidate;	// 0x31030d41
// declared property getter: - (CGSize)itemSize;	// 0x310326e1
// declared property getter: - (id)items;	// 0x31032421
// declared property getter: - (int)itemsByRowCount;	// 0x310326d1
// declared property getter: - (int)itemsCount;	// 0x310326b1
// declared property getter: - (float)lastRowActualGap;	// 0x31032681
// declared property getter: - (float)lastRowBeginMargin;	// 0x31032661
// declared property getter: - (float)lastRowEndMargin;	// 0x31032671
// declared property getter: - (BOOL)lastRowIncomplete;	// 0x31032691
// declared property getter: - (id)layoutInfo;	// 0x31032581
// declared property getter: - (float)otherMargin;	// 0x31032621
- (void)recomputeFromIndex:(int)index;	// 0x31031d2d
// declared property getter: - (id)rowAlignmentOptions;	// 0x310325e1
// declared property getter: - (id)rows;	// 0x31032431
// declared property getter: - (UIEdgeInsets)sectionMargins;	// 0x31032481
// declared property setter: - (void)setFixedItemSize:(BOOL)size;	// 0x31032611
// declared property setter: - (void)setFooterDimension:(float)dimension;	// 0x310324f1
// declared property setter: - (void)setFooterFrame:(CGRect)frame;	// 0x31032565
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x310325c5
// declared property setter: - (void)setHeaderDimension:(float)dimension;	// 0x310324d1
// declared property setter: - (void)setHeaderFrame:(CGRect)frame;	// 0x31032525
// declared property setter: - (void)setHorizontalInterstice:(float)interstice;	// 0x31032471
// declared property setter: - (void)setItemSize:(CGSize)size;	// 0x310326f9
// declared property setter: - (void)setItemsCount:(int)count;	// 0x310326c1
// declared property setter: - (void)setLayoutInfo:(id)info;	// 0x31032591
// declared property setter: - (void)setRowAlignmentOptions:(id)options;	// 0x310325f1
// declared property setter: - (void)setSectionMargins:(UIEdgeInsets)margins;	// 0x310324a5
// declared property setter: - (void)setVerticalInterstice:(float)interstice;	// 0x31032451
- (id)snapshot;	// 0x31031ec5
// declared property getter: - (float)verticalInterstice;	// 0x31032441
@end

