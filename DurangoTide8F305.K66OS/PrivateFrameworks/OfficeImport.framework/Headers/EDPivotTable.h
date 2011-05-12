/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection, NSString, EDReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	bool mShowLastColumn;	// 8 = 0x8
	bool mShowRowHeaders;	// 9 = 0x9
	bool mShowColumnHeaders;	// 10 = 0xa
	bool mShowRowStripes;	// 11 = 0xb
	bool mShowColumnStripes;	// 12 = 0xc
	bool mApplyNumberFormats;	// 13 = 0xd
	bool mApplyBorderFormats;	// 14 = 0xe
	bool mApplyFontFormats;	// 15 = 0xf
	bool mApplyPatternFormats;	// 16 = 0x10
	bool mApplyAlignmentFormats;	// 17 = 0x11
	bool mApplyWidthHeightFormats;	// 18 = 0x12
	bool mUseAutoFormatting;	// 19 = 0x13
	bool mColGrandTotals;	// 20 = 0x14
	bool mRowGrandTotals;	// 21 = 0x15
	bool mCustomListSort;	// 22 = 0x16
	bool mCompactData;	// 23 = 0x17
	bool mCompact;	// 24 = 0x18
	bool mDataCaption;	// 25 = 0x19
	bool mDataOnRows;	// 26 = 0x1a
	bool mDisableFieldList;	// 27 = 0x1b
	bool mMergeItem;	// 28 = 0x1c
	bool mMultipleFieldFilters;	// 29 = 0x1d
	bool mOutline;	// 30 = 0x1e
	bool mOutlineData;	// 31 = 0x1f
	bool mPageOverThenDown;	// 32 = 0x20
	bool mShowCalcMbrs;	// 33 = 0x21
	bool mShowDataDropDown;	// 34 = 0x22
	bool mShowDropZones;	// 35 = 0x23
	bool mShowEmptyCol;	// 36 = 0x24
	bool mShowEmptyRow;	// 37 = 0x25
	bool mShowHeaders;	// 38 = 0x26
	bool mShowMemberPropertyTips;	// 39 = 0x27
	bool mShowMissing;	// 40 = 0x28
	bool mShowMultipleLabel;	// 41 = 0x29
	bool mSubtotalHiddenItems;	// 42 = 0x2a
	NSString *mName;	// 44 = 0x2c
	NSString *mStyleName;	// 48 = 0x30
	NSString *mColumnHeaderCaption;	// 52 = 0x34
	NSString *mRowHeaderCaption;	// 56 = 0x38
	NSString *mPageStyleName;	// 60 = 0x3c
	EDReference *mPivotTableRange;	// 64 = 0x40
	unsigned mStyleIndex;	// 68 = 0x44
	int mFirstHeaderRow;	// 72 = 0x48
	int mFirstDataRow;	// 76 = 0x4c
	int mFirstDataColumn;	// 80 = 0x50
	unsigned mRowPageCount;	// 84 = 0x54
	unsigned mColumnPageCount;	// 88 = 0x58
	unsigned mPageWrap;	// 92 = 0x5c
	unsigned mAutoFormatId;	// 96 = 0x60
	unsigned mDataPosition;	// 100 = 0x64
	EDCollection *mRowFields;	// 104 = 0x68
	EDCollection *mColumnFields;	// 108 = 0x6c
	EDCollection *mRowItems;	// 112 = 0x70
	EDCollection *mColumnItems;	// 116 = 0x74
	EDCollection *mPivotFields;	// 120 = 0x78
	EDCollection *mDataFields;	// 124 = 0x7c
	EDCollection *mConditionalFields;	// 128 = 0x80
	EDCollection *mPivotAreas;	// 132 = 0x84
	EDCollection *mPageFields;	// 136 = 0x88
}
@property(assign) bool applyAlignmentFormats;	// G=0x345aa101; S=0x345aa111; converted property
@property(assign) bool applyBorderFormats;	// G=0x345aa0a1; S=0x345aa0b1; converted property
@property(assign) bool applyFontFormats;	// G=0x345aa0c1; S=0x345aa0d1; converted property
@property(assign) bool applyNumberFormats;	// G=0x345aa081; S=0x345aa091; converted property
@property(assign) bool applyPatternFormats;	// G=0x345aa0e1; S=0x345aa0f1; converted property
@property(assign) bool applyWidthHeightFormats;	// G=0x345aa121; S=0x345aa131; converted property
@property(assign) unsigned autoFormatId;	// G=0x345a9fa1; S=0x345a9fb1; converted property
@property(assign) bool colGrandTotals;	// G=0x345aa141; S=0x345aa151; converted property
@property(retain) id columnHeaderCaption;	// G=0x345a9e81; S=0x345aa61d; converted property
@property(assign) unsigned columnPageCount;	// G=0x345a9f01; S=0x345a9f11; converted property
@property(assign) bool compact;	// G=0x345aa1e1; S=0x345aa1f1; converted property
@property(assign) bool compactData;	// G=0x345aa1c1; S=0x345aa1d1; converted property
@property(assign) bool customListSort;	// G=0x345aa1a1; S=0x345aa1b1; converted property
@property(assign) bool dataCaption;	// G=0x345aa201; S=0x345aa211; converted property
@property(assign) bool dataOnRows;	// G=0x345aa221; S=0x345aa231; converted property
@property(assign) unsigned dataPosition;	// G=0x345a9fc1; S=0x345a9fd1; converted property
@property(assign) bool disableFieldList;	// G=0x345aa241; S=0x345aa251; converted property
@property(assign) int firstDataColumn;	// G=0x345a9f61; S=0x345a9f71; converted property
@property(assign) int firstDataRow;	// G=0x345a9f41; S=0x345a9f51; converted property
@property(assign) int firstHeaderRow;	// G=0x345a9f21; S=0x345a9f31; converted property
@property(assign) bool mergeItem;	// G=0x345aa261; S=0x345aa271; converted property
@property(assign) bool multipleFieldFilters;	// G=0x345aa281; S=0x345aa291; converted property
@property(retain) id name;	// G=0x345a9ec1; S=0x345aa52d; converted property
@property(assign) bool outline;	// G=0x345aa2a1; S=0x345aa2b1; converted property
@property(assign) bool outlineData;	// G=0x345aa2c1; S=0x345aa2d1; converted property
@property(assign) bool pageOverThenDown;	// G=0x345aa2e1; S=0x345aa2f1; converted property
@property(retain) id pageStyleName;	// G=0x345a9ea1; S=0x345aa5a5; converted property
@property(assign) unsigned pageWrap;	// G=0x345a9f81; S=0x345a9f91; converted property
@property(retain) id pivotTableRange;	// G=0x345a9ed1; S=0x345aa4f1; converted property
@property(assign) bool rowGrandTotals;	// G=0x345aa181; S=0x345aa191; converted property
@property(retain) id rowHeaderCaption;	// G=0x345a9e91; S=0x345aa5e1; converted property
@property(assign) unsigned rowPageCount;	// G=0x345a9ee1; S=0x345a9ef1; converted property
@property(assign) bool showCalcMbrs;	// G=0x345aa301; S=0x345aa311; converted property
@property(assign) bool showColumnHeaders;	// G=0x345aa061; S=0x345aa071; converted property
@property(assign) bool showColumnStripes;	// G=0x345aa021; S=0x345aa031; converted property
@property(assign) bool showDataDropDown;	// G=0x345aa321; S=0x345aa331; converted property
@property(assign) bool showDropZones;	// G=0x345aa341; S=0x345aa351; converted property
@property(assign) bool showEmptyCol;	// G=0x345aa361; S=0x345aa371; converted property
@property(assign) bool showEmptyRow;	// G=0x345aa381; S=0x345aa391; converted property
@property(assign) bool showHeaders;	// G=0x345aa3a1; S=0x345aa3b1; converted property
@property(assign) bool showLastColumn;	// G=0x345a9fe1; S=0x345a9ff1; converted property
@property(assign) bool showMemberPropertyTips;	// G=0x345aa3c1; S=0x345aa3d1; converted property
@property(assign) bool showMissing;	// G=0x345aa3e1; S=0x345aa3f1; converted property
@property(assign) bool showMultipleLabel;	// G=0x345aa401; S=0x345aa411; converted property
@property(assign) bool showRowHeaders;	// G=0x345aa041; S=0x345aa051; converted property
@property(assign) bool showRowStripes;	// G=0x345aa001; S=0x345aa011; converted property
@property(retain) id style;	// G=0x345aa699; S=0x345aa659; converted property
@property(assign) unsigned styleIndex;	// G=0x345aa4d1; S=0x345aa4e1; converted property
@property(retain) id styleName;	// G=0x345a9eb1; S=0x345aa569; converted property
@property(assign) bool subtotalHiddenItems;	// G=0x345aa421; S=0x345aa431; converted property
@property(assign) bool useAutoFormatting;	// G=0x345aa161; S=0x345aa171; converted property
+ (id)pivotTableWithResources:(id)resources;	// 0x345aa849
- (id)initWithResources:(id)resources;	// 0x345aa88d
// converted property getter: - (bool)applyAlignmentFormats;	// 0x345aa101
// converted property getter: - (bool)applyBorderFormats;	// 0x345aa0a1
// converted property getter: - (bool)applyFontFormats;	// 0x345aa0c1
// converted property getter: - (bool)applyNumberFormats;	// 0x345aa081
// converted property getter: - (bool)applyPatternFormats;	// 0x345aa0e1
// converted property getter: - (bool)applyWidthHeightFormats;	// 0x345aa121
// converted property getter: - (unsigned)autoFormatId;	// 0x345a9fa1
// converted property getter: - (bool)colGrandTotals;	// 0x345aa141
- (id)columnFields;	// 0x345aa451
// converted property getter: - (id)columnHeaderCaption;	// 0x345a9e81
- (id)columnItems;	// 0x345aa471
// converted property getter: - (unsigned)columnPageCount;	// 0x345a9f01
// converted property getter: - (bool)compact;	// 0x345aa1e1
// converted property getter: - (bool)compactData;	// 0x345aa1c1
- (id)conditionalFormats;	// 0x345aa4a1
// converted property getter: - (bool)customListSort;	// 0x345aa1a1
// converted property getter: - (bool)dataCaption;	// 0x345aa201
- (id)dataFields;	// 0x345aa491
// converted property getter: - (bool)dataOnRows;	// 0x345aa221
// converted property getter: - (unsigned)dataPosition;	// 0x345a9fc1
- (void)dealloc;	// 0x345aa6f1
// converted property getter: - (bool)disableFieldList;	// 0x345aa241
// converted property getter: - (int)firstDataColumn;	// 0x345a9f61
// converted property getter: - (int)firstDataRow;	// 0x345a9f41
// converted property getter: - (int)firstHeaderRow;	// 0x345a9f21
// converted property getter: - (bool)mergeItem;	// 0x345aa261
// converted property getter: - (bool)multipleFieldFilters;	// 0x345aa281
// converted property getter: - (id)name;	// 0x345a9ec1
// converted property getter: - (bool)outline;	// 0x345aa2a1
// converted property getter: - (bool)outlineData;	// 0x345aa2c1
- (id)pageFields;	// 0x345aa4c1
// converted property getter: - (bool)pageOverThenDown;	// 0x345aa2e1
// converted property getter: - (id)pageStyleName;	// 0x345a9ea1
// converted property getter: - (unsigned)pageWrap;	// 0x345a9f81
- (id)pivotAreas;	// 0x345aa4b1
- (id)pivotFields;	// 0x345aa481
// converted property getter: - (id)pivotTableRange;	// 0x345a9ed1
- (id)rowFields;	// 0x345aa441
// converted property getter: - (bool)rowGrandTotals;	// 0x345aa181
// converted property getter: - (id)rowHeaderCaption;	// 0x345a9e91
- (id)rowItems;	// 0x345aa461
// converted property getter: - (unsigned)rowPageCount;	// 0x345a9ee1
// converted property setter: - (void)setApplyAlignmentFormats:(bool)formats;	// 0x345aa111
// converted property setter: - (void)setApplyBorderFormats:(bool)formats;	// 0x345aa0b1
// converted property setter: - (void)setApplyFontFormats:(bool)formats;	// 0x345aa0d1
// converted property setter: - (void)setApplyNumberFormats:(bool)formats;	// 0x345aa091
// converted property setter: - (void)setApplyPatternFormats:(bool)formats;	// 0x345aa0f1
// converted property setter: - (void)setApplyWidthHeightFormats:(bool)formats;	// 0x345aa131
// converted property setter: - (void)setAutoFormatId:(unsigned)anId;	// 0x345a9fb1
// converted property setter: - (void)setColGrandTotals:(bool)totals;	// 0x345aa151
// converted property setter: - (void)setColumnHeaderCaption:(id)caption;	// 0x345aa61d
// converted property setter: - (void)setColumnPageCount:(unsigned)count;	// 0x345a9f11
// converted property setter: - (void)setCompact:(bool)compact;	// 0x345aa1f1
// converted property setter: - (void)setCompactData:(bool)data;	// 0x345aa1d1
// converted property setter: - (void)setCustomListSort:(bool)sort;	// 0x345aa1b1
// converted property setter: - (void)setDataCaption:(bool)caption;	// 0x345aa211
// converted property setter: - (void)setDataOnRows:(bool)rows;	// 0x345aa231
// converted property setter: - (void)setDataPosition:(unsigned)position;	// 0x345a9fd1
// converted property setter: - (void)setDisableFieldList:(bool)list;	// 0x345aa251
// converted property setter: - (void)setFirstDataColumn:(int)column;	// 0x345a9f71
// converted property setter: - (void)setFirstDataRow:(int)row;	// 0x345a9f51
// converted property setter: - (void)setFirstHeaderRow:(int)row;	// 0x345a9f31
// converted property setter: - (void)setMergeItem:(bool)item;	// 0x345aa271
// converted property setter: - (void)setMultipleFieldFilters:(bool)filters;	// 0x345aa291
// converted property setter: - (void)setName:(id)name;	// 0x345aa52d
// converted property setter: - (void)setOutline:(bool)outline;	// 0x345aa2b1
// converted property setter: - (void)setOutlineData:(bool)data;	// 0x345aa2d1
// converted property setter: - (void)setPageOverThenDown:(bool)down;	// 0x345aa2f1
// converted property setter: - (void)setPageStyleName:(id)name;	// 0x345aa5a5
// converted property setter: - (void)setPageWrap:(unsigned)wrap;	// 0x345a9f91
// converted property setter: - (void)setPivotTableRange:(id)range;	// 0x345aa4f1
// converted property setter: - (void)setRowGrandTotals:(bool)totals;	// 0x345aa191
// converted property setter: - (void)setRowHeaderCaption:(id)caption;	// 0x345aa5e1
// converted property setter: - (void)setRowPageCount:(unsigned)count;	// 0x345a9ef1
// converted property setter: - (void)setShowCalcMbrs:(bool)mbrs;	// 0x345aa311
// converted property setter: - (void)setShowColumnHeaders:(bool)headers;	// 0x345aa071
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x345aa031
// converted property setter: - (void)setShowDataDropDown:(bool)down;	// 0x345aa331
// converted property setter: - (void)setShowDropZones:(bool)zones;	// 0x345aa351
// converted property setter: - (void)setShowEmptyCol:(bool)col;	// 0x345aa371
// converted property setter: - (void)setShowEmptyRow:(bool)row;	// 0x345aa391
// converted property setter: - (void)setShowHeaders:(bool)headers;	// 0x345aa3b1
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x345a9ff1
// converted property setter: - (void)setShowMemberPropertyTips:(bool)tips;	// 0x345aa3d1
// converted property setter: - (void)setShowMissing:(bool)missing;	// 0x345aa3f1
// converted property setter: - (void)setShowMultipleLabel:(bool)label;	// 0x345aa411
// converted property setter: - (void)setShowRowHeaders:(bool)headers;	// 0x345aa051
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x345aa011
// converted property setter: - (void)setStyle:(id)style;	// 0x345aa659
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x345aa4e1
// converted property setter: - (void)setStyleName:(id)name;	// 0x345aa569
// converted property setter: - (void)setSubtotalHiddenItems:(bool)items;	// 0x345aa431
// converted property setter: - (void)setUseAutoFormatting:(bool)formatting;	// 0x345aa171
// converted property getter: - (bool)showCalcMbrs;	// 0x345aa301
// converted property getter: - (bool)showColumnHeaders;	// 0x345aa061
// converted property getter: - (bool)showColumnStripes;	// 0x345aa021
// converted property getter: - (bool)showDataDropDown;	// 0x345aa321
// converted property getter: - (bool)showDropZones;	// 0x345aa341
// converted property getter: - (bool)showEmptyCol;	// 0x345aa361
// converted property getter: - (bool)showEmptyRow;	// 0x345aa381
// converted property getter: - (bool)showHeaders;	// 0x345aa3a1
// converted property getter: - (bool)showLastColumn;	// 0x345a9fe1
// converted property getter: - (bool)showMemberPropertyTips;	// 0x345aa3c1
// converted property getter: - (bool)showMissing;	// 0x345aa3e1
// converted property getter: - (bool)showMultipleLabel;	// 0x345aa401
// converted property getter: - (bool)showRowHeaders;	// 0x345aa041
// converted property getter: - (bool)showRowStripes;	// 0x345aa001
// converted property getter: - (id)style;	// 0x345aa699
// converted property getter: - (unsigned)styleIndex;	// 0x345aa4d1
// converted property getter: - (id)styleName;	// 0x345a9eb1
// converted property getter: - (bool)subtotalHiddenItems;	// 0x345aa421
// converted property getter: - (bool)useAutoFormatting;	// 0x345aa161
@end

