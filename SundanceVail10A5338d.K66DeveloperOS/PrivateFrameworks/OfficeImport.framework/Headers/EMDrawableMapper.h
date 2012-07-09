/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"


@interface EMDrawableMapper : CMDrawableMapper {
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x33b3a6cd
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x33ad1819
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x33a0e261
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x33b3a615
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x33a0e7e1
- (CGRect)getImageRect;	// 0x33a0e391
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x33a0e4d1
- (void)mapAt:(id)at withState:(id)state;	// 0x33a13651
- (void)mapBounds;	// 0x33a13945
- (void)mapChartAt:(id)at withState:(id)state;	// 0x33ad18d5
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x33b3a74d
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x33a1bfbd
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x33a139d1
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x33a1b641
- (void)setBoundingBox;	// 0x33b3a669
- (id)workbookMapper;	// 0x33b3a6bd
- (id)worksheetMapper;	// 0x33a0e2e9
@end
