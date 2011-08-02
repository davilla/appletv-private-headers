/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
@private
	int mColumnCount;	// 112 = 0x70
	int mRowCount;	// 116 = 0x74
	float mRectWidth;	// 120 = 0x78
	float mRectHeight;	// 124 = 0x7c
	BOOL mHasArrows;	// 128 = 0x80
	BOOL mIsSnake;	// 129 = 0x81
	BOOL mIsHorizontal;	// 130 = 0x82
	BOOL mIsLinear;	// 131 = 0x83
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x32c8dc59
- (CGRect)circumscribedBounds;	// 0x32c8e041
- (int)columnCount;	// 0x32c8dee1
- (double)gapRatio;	// 0x32c8ec09
- (CGSize)gapSize;	// 0x32c8eb79
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32c8e5c5
- (void)setColumnsAndRowsCount;	// 0x32c8de89
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32c8ef75
@end

