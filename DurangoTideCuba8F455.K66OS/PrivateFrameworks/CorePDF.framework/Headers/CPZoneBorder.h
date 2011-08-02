/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSCopying.h"

@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying> {
	CGRect bounds;	// 4 = 0x4
	CPPage *page;	// 20 = 0x14
	NSMutableArray *ownerArray;	// 24 = 0x18
	NSMutableArray *graphicObjects;	// 28 = 0x1c
	NSMutableArray *neighbors;	// 32 = 0x20
	NSMutableArray *intersections;	// 36 = 0x24
	BOOL isHorizontal;	// 40 = 0x28
	BOOL hasForwardVector;	// 41 = 0x29
	BOOL hasBackwardVector;	// 42 = 0x2a
	float overhangMin;	// 44 = 0x2c
	float overhangMax;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x30bacb5d; S=0x30bacb79; converted property
@property(readonly, retain) NSMutableArray *graphicObjects;	// G=0x30bacba5; converted property
@property(assign) BOOL hasBackwardVector;	// G=0x30bacbe5; S=0x30bacbd5; converted property
@property(assign) BOOL hasForwardVector;	// G=0x30bacbc5; S=0x30bacbb5; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x30bacbf5; converted property
@property(readonly, retain) NSMutableArray *ownerArray;	// G=0x30bacb4d; converted property
@property(readonly, retain) CPPage *page;	// G=0x30bacb3d; converted property
+ (void)addIntersectionBetweenBorder:(id)border andBorder:(id)border2 atRect:(CGRect)rect;	// 0x30bad6e5
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)borders;	// 0x30bad57d
+ (CGRect)extendRect:(CGRect)rect;	// 0x30baea8d
+ (void)outerVertices:(CGPoint *)vertices fromBorders:(id)borders swollenBy:(float)by;	// 0x30bae72d
+ (void)removeIntersectionBetweenBorder:(id)border andBorder:(id)border2;	// 0x30bad615
- (id)init;	// 0x30bada59
- (id)initWithGraphicObject:(id)graphicObject;	// 0x30bad9f1
- (void)addGraphicObject:(id)object;	// 0x30bae239
- (void)addNeighbor:(id)neighbor;	// 0x30bad47d
- (void)addToArray:(id)array;	// 0x30bad95d
- (void)addToArray:(id)array atIndex:(unsigned)index;	// 0x30bad935
// converted property getter: - (CGRect)bounds;	// 0x30bacb5d
- (void)combine:(id)combine;	// 0x30bae969
- (int)compareXBounds:(id)bounds;	// 0x30baddbd
- (int)compareYBounds:(id)bounds;	// 0x30badd61
- (BOOL)continues:(id)continues;	// 0x30bae8e5
- (id)copyWithZone:(NSZone *)zone;	// 0x30badbdd
- (id)copyWithoutIntersections;	// 0x30badb25
- (BOOL)crosses:(id)crosses;	// 0x30bae461
- (void)dealloc;	// 0x30bad985
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward startingAtIndex:(unsigned)index;	// 0x30bacedd
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward throughIntersectionIndex:(unsigned)index returningTo:(id)to4 atRect:(CGRect *)rect;	// 0x30bade19
- (id)graphicObjectAtIndex:(unsigned)index;	// 0x30bad519
- (unsigned)graphicObjectCount;	// 0x30bad559
// converted property getter: - (id)graphicObjects;	// 0x30bacba5
// converted property getter: - (BOOL)hasBackwardVector;	// 0x30bacbe5
- (BOOL)hasClockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x30bad185
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x30bad0d1
// converted property getter: - (BOOL)hasForwardVector;	// 0x30bacbc5
- (BOOL)hasNeighborShape:(id)shape;	// 0x30bad3c5
- (BOOL)hasVectorGoingForward:(BOOL)forward startingAtIndex:(unsigned *)index;	// 0x30bacf85
- (unsigned)indexOfIntersectionWith:(id)with;	// 0x30bad2a9
- (void)instantiateVectors;	// 0x30bad025
- (unsigned)intersectionCount;	// 0x30bad3a1
- (BOOL)intersectsWith:(id)with atRect:(CGRect *)rect;	// 0x30bad30d
// converted property getter: - (BOOL)isHorizontal;	// 0x30bacbf5
- (BOOL)isVertical;	// 0x30bacc05
- (id)neighborAtIndex:(unsigned)index;	// 0x30bad43d
- (unsigned)neighborCount;	// 0x30bad4f5
// converted property getter: - (id)ownerArray;	// 0x30bacb4d
// converted property getter: - (id)page;	// 0x30bacb3d
- (void)removeFromArray;	// 0x30bad90d
- (void)removeFromArrayAtIndex:(unsigned)index;	// 0x30bad8d1
- (void)removeGraphicObjectAtIndex:(unsigned)index;	// 0x30bad539
- (void)removeLooseThreadsStartingFrom:(id)from;	// 0x30bacdc9
- (void)removeNeighborAtIndex:(unsigned)index;	// 0x30bad45d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x30bacb79
// converted property setter: - (void)setHasBackwardVector:(BOOL)vector;	// 0x30bacbd5
// converted property setter: - (void)setHasForwardVector:(BOOL)vector;	// 0x30bacbb5
- (void)setSide:(int)side ofPage:(id)page;	// 0x30bae5c5
- (void)trimToLastIntersections;	// 0x30bae2e9
- (BOOL)windsClockwiseOnto:(id)onto;	// 0x30bad239
- (long)zOrder;	// 0x30bad875
@end

