/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIGridLayoutSection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutRow : NSObject {
@private
	NSMutableArray *_items;	// 4 = 0x4
	_UIGridLayoutSection *_section;	// 8 = 0x8
	CGSize _rowSize;	// 12 = 0xc
	CGRect _rowFrame;	// 20 = 0x14
	int _index;	// 36 = 0x24
	BOOL _isValid;	// 40 = 0x28
	BOOL _complete;	// 41 = 0x29
	int _verticalAlignement;	// 44 = 0x2c
	int _horizontalAlignement;	// 48 = 0x30
	BOOL _fixedItemSize;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL complete;	// G=0x304a4ca1; S=0x304a4cb1; @synthesize=_complete
@property(assign, nonatomic) BOOL fixedItemSize;	// G=0x304a4cc1; S=0x304a4cd1; @synthesize=_fixedItemSize
@property(assign, nonatomic) int index;	// G=0x304a4c71; S=0x304a4c81; @synthesize=_index
@property(readonly, assign, nonatomic) NSMutableArray *items;	// G=0x304a4c91; @synthesize=_items
@property(assign, nonatomic) CGRect rowFrame;	// G=0x304a4c31; S=0x304a4c55; @synthesize=_rowFrame
@property(assign, nonatomic) CGSize rowSize;	// G=0x304a4c05; S=0x304a4c1d; @synthesize=_rowSize
@property(assign, nonatomic) _UIGridLayoutSection *section;	// G=0x304a4be5; S=0x304a4bf5; @synthesize=_section
- (id)init;	// 0x304a3d09
- (void)addItem:(id)item;	// 0x304a475d
// declared property getter: - (BOOL)complete;	// 0x304a4ca1
- (id)copyFromSection:(id)section;	// 0x304a49e5
- (void)dealloc;	// 0x304a47a1
// declared property getter: - (BOOL)fixedItemSize;	// 0x304a4cc1
// declared property getter: - (int)index;	// 0x304a4c71
- (void)invalidate;	// 0x304a3d99
// declared property getter: - (id)items;	// 0x304a4c91
- (void)layoutRow;	// 0x304a3dc9
// declared property getter: - (CGRect)rowFrame;	// 0x304a4c31
// declared property getter: - (CGSize)rowSize;	// 0x304a4c05
// declared property getter: - (id)section;	// 0x304a4be5
// declared property setter: - (void)setComplete:(BOOL)complete;	// 0x304a4cb1
// declared property setter: - (void)setFixedItemSize:(BOOL)size;	// 0x304a4cd1
// declared property setter: - (void)setIndex:(int)index;	// 0x304a4c81
// declared property setter: - (void)setRowFrame:(CGRect)frame;	// 0x304a4c55
// declared property setter: - (void)setRowSize:(CGSize)size;	// 0x304a4c1d
// declared property setter: - (void)setSection:(id)section;	// 0x304a4bf5
- (id)snapshot;	// 0x304a47f1
@end

