/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import <NSObject.h> // Unknown library

@class CPCluster, CPChunk;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
	CPChunk *parentChunk;	// 4 = 0x4
	BOOL shapesAreVectorGraphics;	// 8 = 0x8
	unsigned shapeCount;	// 12 = 0xc
	id *shapes;	// 16 = 0x10
	double pageSpread;	// 20 = 0x14
	CPCluster *cluster;	// 28 = 0x1c
	unsigned groupInfoCount;	// 32 = 0x20
	XXStruct_OXiS4B *groupInfoArray;	// 36 = 0x24
	BOOL disposed;	// 40 = 0x28
}
+ (BOOL)makeCompoundGraphicsInZonesOf:(id)of;	// 0x34d09345
- (id)initWithGraphicsIn:(id)anIn ofClass:(Class)aClass;	// 0x34d090d9
- (void)addGroupInfoWithIndex:(unsigned)index bounds:(CGRect)bounds;	// 0x34d096e1
- (void)coalesceShapeGroups;	// 0x34d09889
- (void)dealloc;	// 0x34d092e5
- (void)dispose;	// 0x34d09241
- (void)finalize;	// 0x34d092a5
- (BOOL)findClusterLevel;	// 0x34d094f9
- (BOOL)groupOverlappingGraphics;	// 0x34d09ab9
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned)index count:(unsigned)count;	// 0x34d09731
- (BOOL)makeCompoundGraphics;	// 0x34d09e01
- (BOOL)makeCompoundGraphicsFromShapeGroups;	// 0x34d099b9
@end

