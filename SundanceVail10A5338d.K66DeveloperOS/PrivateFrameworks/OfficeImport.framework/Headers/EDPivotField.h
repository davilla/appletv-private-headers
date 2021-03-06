/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDPivotField : NSObject {
	int mAxis;	// 4 = 0x4
	bool mCompact;	// 8 = 0x8
	bool mDataField;	// 9 = 0x9
	bool mShowDefaultSubTotal;	// 10 = 0xa
	bool mInsertBlankRow;	// 11 = 0xb
	bool mOutlineItems;	// 12 = 0xc
	bool mShowAllItems;	// 13 = 0xd
	bool mSubtotalTop;	// 14 = 0xe
	unsigned mNumFmtId;	// 16 = 0x10
	EDCollection *mPivotFieldItems;	// 20 = 0x14
}
@property(assign) int axis;	// G=0x33b80425; S=0x33b0f215; converted property
@property(assign) bool compact;	// G=0x33b80389; S=0x33b0f225; converted property
@property(assign) bool dataField;	// G=0x33b8039d; S=0x33b0f235; converted property
@property(assign) bool insertBlankRow;	// G=0x33b803c5; S=0x33b0f255; converted property
@property(assign) unsigned numFmtId;	// G=0x33b80415; S=0x33b0f191; converted property
@property(assign) bool outlineItems;	// G=0x33b803d9; S=0x33b0f265; converted property
@property(assign) bool showAllItems;	// G=0x33b803ed; S=0x33b0f275; converted property
@property(assign) bool showDefaultSubTotal;	// G=0x33b803b1; S=0x33b0f245; converted property
@property(assign) bool subtotalTop;	// G=0x33b80401; S=0x33b0f285; converted property
+ (id)pivotField;	// 0x33b0f06d
- (id)init;	// 0x33b0f0b5
// converted property getter: - (int)axis;	// 0x33b80425
// converted property getter: - (bool)compact;	// 0x33b80389
// converted property getter: - (bool)dataField;	// 0x33b8039d
- (void)dealloc;	// 0x33b11a65
// converted property getter: - (bool)insertBlankRow;	// 0x33b803c5
// converted property getter: - (unsigned)numFmtId;	// 0x33b80415
// converted property getter: - (bool)outlineItems;	// 0x33b803d9
- (id)pivotFieldItems;	// 0x33b0f295
// converted property setter: - (void)setAxis:(int)axis;	// 0x33b0f215
// converted property setter: - (void)setCompact:(bool)compact;	// 0x33b0f225
// converted property setter: - (void)setDataField:(bool)field;	// 0x33b0f235
// converted property setter: - (void)setInsertBlankRow:(bool)row;	// 0x33b0f255
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x33b0f191
// converted property setter: - (void)setOutlineItems:(bool)items;	// 0x33b0f265
// converted property setter: - (void)setShowAllItems:(bool)items;	// 0x33b0f275
// converted property setter: - (void)setShowDefaultSubTotal:(bool)total;	// 0x33b0f245
// converted property setter: - (void)setSubtotalTop:(bool)top;	// 0x33b0f285
// converted property getter: - (bool)showAllItems;	// 0x33b803ed
// converted property getter: - (bool)showDefaultSubTotal;	// 0x33b803b1
// converted property getter: - (bool)subtotalTop;	// 0x33b80401
@end

