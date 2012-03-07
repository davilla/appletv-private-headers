/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDResources;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mHeaderRowDxfIndex;	// 8 = 0x8
	unsigned mTotalsRowDxfIndex;	// 12 = 0xc
	unsigned mDataAreaDxfIndex;	// 16 = 0x10
	EDString *mName;	// 20 = 0x14
	EDString *mUniqueName;	// 24 = 0x18
	EDString *mTotalsRowLabel;	// 28 = 0x1c
}
@property(retain) id dataAreaDxf;	// G=0x30e34da5; S=0x30e34d5d; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x30e34c71; S=0x30dc9275; converted property
@property(retain) id headerRowDxf;	// G=0x30e34ec5; S=0x30e34e7d; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x30e34c31; S=0x30e34c41; converted property
@property(retain) id name;	// G=0x30e34c01; S=0x30dc1b31; converted property
@property(retain) id totalsRowDxf;	// G=0x30e34e35; S=0x30e34ded; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x30e34c51; S=0x30e34c61; converted property
@property(retain) id totalsRowLabel;	// G=0x30e34c21; S=0x30e34ccd; converted property
@property(retain) id uniqueName;	// G=0x30e34c11; S=0x30e34d15; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x30e34c81
- (id)initWithResources:(id)resources;	// 0x30dc1aad
// converted property getter: - (id)dataAreaDxf;	// 0x30e34da5
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x30e34c71
- (void)dealloc;	// 0x30dc9d29
// converted property getter: - (id)headerRowDxf;	// 0x30e34ec5
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x30e34c31
// converted property getter: - (id)name;	// 0x30e34c01
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x30e34d5d
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x30dc9275
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x30e34e7d
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x30e34c41
// converted property setter: - (void)setName:(id)name;	// 0x30dc1b31
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x30e34ded
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x30e34c61
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x30e34ccd
// converted property setter: - (void)setUniqueName:(id)name;	// 0x30e34d15
// converted property getter: - (id)totalsRowDxf;	// 0x30e34e35
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x30e34c51
// converted property getter: - (id)totalsRowLabel;	// 0x30e34c21
// converted property getter: - (id)uniqueName;	// 0x30e34c11
@end
