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
@property(assign) CsRect<long int> geometryCoordSpace;	// G=0x3122e479; S=0x311afd55; converted property
@property(assign) CsPoint<long int> limo;	// G=0x31384431; S=0x311afe39; converted property
- (id)init;	// 0x311ae959
- (void)addFormula:(id)formula;	// 0x312305f5
- (void)addPath:(id)path;	// 0x311af961
- (void)addTextBodyRect:(id)rect;	// 0x312306bd
- (void)dealloc;	// 0x311b46a9
- (id)formulaAtIndex:(unsigned)index;	// 0x312309a1
- (unsigned)formulaCount;	// 0x31230981
// converted property getter: - (CsRect<long int>)geometryCoordSpace;	// 0x3122e479
// converted property getter: - (CsPoint<long int>)limo;	// 0x31384431
- (id)pathAtIndex:(unsigned)index;	// 0x3122e079
- (unsigned)pathCount;	// 0x3122e059
// converted property setter: - (void)setGeometryCoordSpace:(CsRect<long int>)space;	// 0x311afd55
// converted property setter: - (void)setLimo:(CsPoint<long int>)limo;	// 0x311afe39
- (id)textBodyRectAtIndex:(unsigned)index;	// 0x31230769
- (unsigned)textBodyRectCount;	// 0x311b01e5
@end
