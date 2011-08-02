/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection, NSString, EDReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mStyleIndex;	// 8 = 0x8
	unsigned mHeaderRowDxfIndex;	// 12 = 0xc
	unsigned mTotalsRowDxfIndex;	// 16 = 0x10
	unsigned mDataAreaDxfIndex;	// 20 = 0x14
	unsigned mHeaderRowBorderDxfIndex;	// 24 = 0x18
	unsigned mTotalsRowBorderDxfIndex;	// 28 = 0x1c
	unsigned mDataAreaBorderDxfIndex;	// 32 = 0x20
	unsigned mTableBorderDxfIndex;	// 36 = 0x24
	NSString *mName;	// 40 = 0x28
	NSString *mDisplayName;	// 44 = 0x2c
	EDReference *mTableRange;	// 48 = 0x30
	NSString *mStyleName;	// 52 = 0x34
	unsigned mHeaderRowCount;	// 56 = 0x38
	unsigned mTotalsRowCount;	// 60 = 0x3c
	bool mShowFirstColumn;	// 64 = 0x40
	bool mShowLastColumn;	// 65 = 0x41
	bool mShowRowStripes;	// 66 = 0x42
	bool mShowColumnStripes;	// 67 = 0x43
	EDCollection *mTableColumns;	// 68 = 0x44
}
@property(retain) id dataAreaBorderDxf;	// G=0x32cf6575; S=0x32cf6535; converted property
@property(assign) unsigned dataAreaBorderDxfIndex;	// G=0x32cf64c5; S=0x32cf64d5; converted property
@property(retain) id dataAreaDxf;	// G=0x32cf66e9; S=0x32cf66a9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x32cf6465; S=0x32cf6475; converted property
@property(retain) id displayName;	// G=0x32cf63c5; S=0x32ca0859; converted property
@property(retain) id headerRowBorderDxf;	// G=0x32cf666d; S=0x32cf662d; converted property
@property(assign) unsigned headerRowBorderDxfIndex;	// G=0x32cf6485; S=0x32cf6495; converted property
@property(assign) unsigned headerRowCount;	// G=0x32cba399; S=0x32cf63e5; converted property
@property(retain) id headerRowDxf;	// G=0x32cf67e1; S=0x32cf67a1; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x32cf6425; S=0x32cf6435; converted property
@property(retain) id name;	// G=0x32cf63b5; S=0x32ca081d; converted property
@property(assign) bool showColumnStripes;	// G=0x32cbad11; S=0x32cae2c1; converted property
@property(assign) bool showFirstColumn;	// G=0x32cbacf1; S=0x32cae291; converted property
@property(assign) bool showLastColumn;	// G=0x32cbad01; S=0x32cae2a1; converted property
@property(assign) bool showRowStripes;	// G=0x32cbc175; S=0x32cae2b1; converted property
@property(retain) id style;	// G=0x32cba115; S=0x32cf681d; converted property
@property(assign) unsigned styleIndex;	// G=0x32cf6405; S=0x32cf6415; converted property
@property(retain) id styleName;	// G=0x32cf63d5; S=0x32cb9c71; converted property
@property(retain) id tableBorderDxf;	// G=0x32cba1e1; S=0x32cf64f5; converted property
@property(assign) unsigned tableBorderDxfIndex;	// G=0x32cf64e5; S=0x32cae281; converted property
@property(retain) id tableRange;	// G=0x32cba2d5; S=0x32ca0895; converted property
@property(retain) id totalsRowBorderDxf;	// G=0x32cf65f1; S=0x32cf65b1; converted property
@property(assign) unsigned totalsRowBorderDxfIndex;	// G=0x32cf64a5; S=0x32cf64b5; converted property
@property(assign) unsigned totalsRowCount;	// G=0x32cba3a9; S=0x32cf63f5; converted property
@property(retain) id totalsRowDxf;	// G=0x32cf6765; S=0x32cf6725; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x32cf6445; S=0x32cf6455; converted property
+ (id)tableWithResources:(id)resources;	// 0x32cf685d
- (id)initWithResources:(id)resources;	// 0x32ca06e1
// converted property getter: - (id)dataAreaBorderDxf;	// 0x32cf6575
// converted property getter: - (unsigned)dataAreaBorderDxfIndex;	// 0x32cf64c5
// converted property getter: - (id)dataAreaDxf;	// 0x32cf66e9
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x32cf6465
- (void)dealloc;	// 0x32ca6ab1
// converted property getter: - (id)displayName;	// 0x32cf63c5
// converted property getter: - (id)headerRowBorderDxf;	// 0x32cf666d
// converted property getter: - (unsigned)headerRowBorderDxfIndex;	// 0x32cf6485
// converted property getter: - (unsigned)headerRowCount;	// 0x32cba399
// converted property getter: - (id)headerRowDxf;	// 0x32cf67e1
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x32cf6425
// converted property getter: - (id)name;	// 0x32cf63b5
// converted property setter: - (void)setDataAreaBorderDxf:(id)dxf;	// 0x32cf6535
// converted property setter: - (void)setDataAreaBorderDxfIndex:(unsigned)index;	// 0x32cf64d5
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x32cf66a9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x32cf6475
// converted property setter: - (void)setDisplayName:(id)name;	// 0x32ca0859
// converted property setter: - (void)setHeaderRowBorderDxf:(id)dxf;	// 0x32cf662d
// converted property setter: - (void)setHeaderRowBorderDxfIndex:(unsigned)index;	// 0x32cf6495
// converted property setter: - (void)setHeaderRowCount:(unsigned)count;	// 0x32cf63e5
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x32cf67a1
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x32cf6435
// converted property setter: - (void)setName:(id)name;	// 0x32ca081d
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x32cae2c1
// converted property setter: - (void)setShowFirstColumn:(bool)column;	// 0x32cae291
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x32cae2a1
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x32cae2b1
// converted property setter: - (void)setStyle:(id)style;	// 0x32cf681d
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x32cf6415
// converted property setter: - (void)setStyleName:(id)name;	// 0x32cb9c71
// converted property setter: - (void)setTableBorderDxf:(id)dxf;	// 0x32cf64f5
// converted property setter: - (void)setTableBorderDxfIndex:(unsigned)index;	// 0x32cae281
// converted property setter: - (void)setTableRange:(id)range;	// 0x32ca0895
// converted property setter: - (void)setTotalsRowBorderDxf:(id)dxf;	// 0x32cf65b1
// converted property setter: - (void)setTotalsRowBorderDxfIndex:(unsigned)index;	// 0x32cf64b5
// converted property setter: - (void)setTotalsRowCount:(unsigned)count;	// 0x32cf63f5
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x32cf6725
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x32cf6455
// converted property getter: - (bool)showColumnStripes;	// 0x32cbad11
// converted property getter: - (bool)showFirstColumn;	// 0x32cbacf1
// converted property getter: - (bool)showLastColumn;	// 0x32cbad01
// converted property getter: - (bool)showRowStripes;	// 0x32cbc175
// converted property getter: - (id)style;	// 0x32cba115
// converted property getter: - (unsigned)styleIndex;	// 0x32cf6405
// converted property getter: - (id)styleName;	// 0x32cf63d5
// converted property getter: - (id)tableBorderDxf;	// 0x32cba1e1
// converted property getter: - (unsigned)tableBorderDxfIndex;	// 0x32cf64e5
- (id)tableColumns;	// 0x32ca08d1
// converted property getter: - (id)tableRange;	// 0x32cba2d5
// converted property getter: - (id)totalsRowBorderDxf;	// 0x32cf65f1
// converted property getter: - (unsigned)totalsRowBorderDxfIndex;	// 0x32cf64a5
// converted property getter: - (unsigned)totalsRowCount;	// 0x32cba3a9
// converted property getter: - (id)totalsRowDxf;	// 0x32cf6765
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x32cf6445
@end

