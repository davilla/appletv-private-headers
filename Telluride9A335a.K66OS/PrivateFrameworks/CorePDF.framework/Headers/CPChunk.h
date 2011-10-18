/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;	// 24 = 0x18
	BOOL shrinksWithChildren;	// 40 = 0x28
	BOOL dirtyBounds;	// 41 = 0x29
	unsigned position;	// 44 = 0x2c
	long insertionOrder;	// 48 = 0x30
}
@property(assign) CGPoint anchor;	// G=0x3122e3d9; S=0x3122f395; converted property
@property(assign) CGRect bounds;	// G=0x3122f5c1; S=0x3122e3a1; converted property
@property(assign) unsigned chunkPosition;	// G=0x3122e49d; S=0x3122e4ad; converted property
@property(assign) long insertionOrder;	// G=0x3122e425; S=0x3122e3f5; converted property
@property(assign) BOOL shrinksWithChildren;	// G=0x3122e459; S=0x3122e469; converted property
+ (float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;	// 0x3122e349
- (id)init;	// 0x3122e4bd
- (float)absoluteGapTo:(id)to;	// 0x3122f28d
- (void)accept:(id)accept;	// 0x3122f97d
- (void)add:(id)add;	// 0x3122f911
- (void)add:(id)add atIndex:(unsigned)index;	// 0x3122f8a5
- (void)addChildrenOf:(id)of;	// 0x3122f865
- (CGRect)adjustToPointBoundary:(CGRect)pointBoundary;	// 0x3122f555
- (CGSize)advance;	// 0x3122e439
- (float)advanceDeltaAfterSpace;	// 0x3122e3f1
// converted property getter: - (CGPoint)anchor;	// 0x3122e3d9
- (float)bottom;	// 0x3122e975
// converted property getter: - (CGRect)bounds;	// 0x3122f5c1
- (BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;	// 0x3122e715
- (float)center;	// 0x3122e9d5
// converted property getter: - (unsigned)chunkPosition;	// 0x3122e49d
- (float)clusterGapTo:(id)to;	// 0x3122f31d
- (int)clusterLevelHint;	// 0x3122e455
- (int)compareAnchorX:(id)x;	// 0x3122ef11
- (int)compareAnchorY:(id)y;	// 0x3122ef69
- (int)compareAnchorYDescending:(id)descending;	// 0x3122eeb9
- (int)compareChunkPosition:(id)position;	// 0x3122ea6d
- (int)compareInsertionOrder:(id)order;	// 0x3122ee2d
- (int)compareLinearBounds:(id)bounds;	// 0x3122ecb5
- (int)compareTopDescending:(id)descending;	// 0x3122eb89
- (int)compareX:(id)x;	// 0x3122ee61
- (int)compareXBounds:(id)bounds;	// 0x3122ed69
- (int)compareY:(id)y;	// 0x3122ec45
- (int)compareYBounds:(id)bounds;	// 0x3122ebd5
- (int)compareYDescending:(id)descending;	// 0x3122eb31
- (int)compareYDescendingX:(id)x;	// 0x3122eaa1
- (int)compareZ:(id)z;	// 0x3122edf9
- (int)compareZDescending:(id)descending;	// 0x3122edc5
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x3122f995
- (id)copyWithZone:(NSZone *)zone;	// 0x3122fa39
- (id)describeBounds;	// 0x3122f41d
- (void)fitBoundsToChildren;	// 0x3122f10d
- (float)fontSize;	// 0x3122e435
- (BOOL)geometricallyContains:(id)contains;	// 0x3122e76d
// converted property getter: - (long)insertionOrder;	// 0x3122e425
- (BOOL)intersectsChild:(CGRect)child;	// 0x3122e5b1
- (float)left;	// 0x3122ea3d
- (float)opticalLeading;	// 0x3122e39d
- (void)orderedInsert:(id)insert usingSelector:(SEL)selector;	// 0x3122e8f9
- (BOOL)overlapsHorizontallyWith:(id)with;	// 0x3122e879
- (BOOL)overlapsVerticallyWith:(id)with;	// 0x3122e7e9
- (float)referenceAdvanceWidth;	// 0x3122f26d
- (void)remove:(id)remove;	// 0x3122f815
- (void)removeAll;	// 0x3122f7a5
- (CGRect)renderedBounds;	// 0x3122f439
- (void)resizeWith:(id)with;	// 0x3122efe5
- (float)right;	// 0x3122ea0d
- (float)rotationAngle;	// 0x3122e52d
// converted property setter: - (void)setAnchor:(CGPoint)anchor;	// 0x3122f395
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3122e3a1
- (void)setChildren:(id)children;	// 0x3122f609
// converted property setter: - (void)setChunkPosition:(unsigned)position;	// 0x3122e4ad
// converted property setter: - (void)setInsertionOrder:(long)order;	// 0x3122e3f5
// converted property setter: - (void)setShrinksWithChildren:(BOOL)children;	// 0x3122e469
// converted property getter: - (BOOL)shrinksWithChildren;	// 0x3122e459
- (void)sortUsingSelector:(SEL)selector;	// 0x3122efc1
- (id)takeChildren;	// 0x3122f735
- (id)takeChildrenAmong:(id)among;	// 0x3122f6cd
- (float)top;	// 0x3122e9a5
- (void)translateObjectYBy:(float)by;	// 0x3122e479
@end

