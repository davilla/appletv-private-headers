/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"


__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper {
@private
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x3457e465
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x344f2349
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x344bfe85
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3457e419
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x344c05f5
- (CGRect)getImageRect;	// 0x344c02ed
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x344c03dd
- (void)mapAt:(id)at withState:(id)state;	// 0x344bff85
- (void)mapBounds;	// 0x344c0259
- (void)mapChartAt:(id)at withState:(id)state;	// 0x344f23fd
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x3457e52d
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x344ffd45
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x344c09c1
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x344dd3c5
- (void)setBoundingBox;	// 0x3457e4f1
- (id)workbookMapper;	// 0x3457e4dd
- (id)worksheetMapper;	// 0x344bff01
@end

