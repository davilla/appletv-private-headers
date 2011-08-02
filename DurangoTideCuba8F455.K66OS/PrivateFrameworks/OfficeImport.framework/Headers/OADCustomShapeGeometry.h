/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShapeGeometry.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomShapeGeometry : OADShapeGeometry {
@private
	CsRect<long int> *mGeometryCoordSpace;	// 12 = 0xc
	CsPoint<long int> *mLimo;	// 16 = 0x10
	NSMutableArray *mFormulas;	// 20 = 0x14
	NSMutableArray *mTextBodyRects;	// 24 = 0x18
	NSMutableArray *mPaths;	// 28 = 0x1c
}
@property(assign) CsRect<long int> geometryCoordSpace;	// G=0x32ba3a11; S=0x32b7d9f9; converted property
@property(assign) CsPoint<long int> limo;	// G=0x32cd3991; S=0x32b7dabd; converted property
- (id)init;	// 0x32b7c93d
- (void)addFormula:(id)formula;	// 0x32c1a8d9
- (void)addPath:(id)path;	// 0x32b7d655
- (void)addTextBodyRect:(id)rect;	// 0x32ba4511
- (void)dealloc;	// 0x32ba8e45
- (id)formulaAtIndex:(unsigned)index;	// 0x32c1aaf5
- (unsigned)formulaCount;	// 0x32c1aad5
// converted property getter: - (CsRect<long int>)geometryCoordSpace;	// 0x32ba3a11
// converted property getter: - (CsPoint<long int>)limo;	// 0x32cd3991
- (id)pathAtIndex:(unsigned)index;	// 0x32ba3655
- (unsigned)pathCount;	// 0x32ba3635
// converted property setter: - (void)setGeometryCoordSpace:(CsRect<long int>)space;	// 0x32b7d9f9
// converted property setter: - (void)setLimo:(CsPoint<long int>)limo;	// 0x32b7dabd
- (id)textBodyRectAtIndex:(unsigned)index;	// 0x32ba4531
- (unsigned)textBodyRectCount;	// 0x32b7de39
@end

