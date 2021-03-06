/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMDiagramNodeInfo : NSObject {
@private
	int mTreeDepth;	// 4 = 0x4
	int mRow;	// 8 = 0x8
	ODIHRange mXRange;	// 12 = 0xc
	BOOL mConnectToVerticalSide;	// 20 = 0x14
	int mExtraRowsBetweenParentAndSelf;	// 24 = 0x18
	float mXOffsetRelativeToParent;	// 28 = 0x1c
	ODIHRangeVector *mXRanges;	// 32 = 0x20
}
@property(assign) BOOL connectToVerticalSide;	// G=0x3532c44d; S=0x354185c5; converted property
@property(assign) int extraRowsBetweenParentAndSelf;	// G=0x3532b9b5; S=0x3532b4c1; converted property
@property(assign) int row;	// G=0x3532bae5; S=0x3532b9c5; converted property
@property(assign) int treeDepth;	// G=0x3532c43d; S=0x3532ae31; converted property
@property(assign) float xOffsetRelativeToParent;	// G=0x3532b9d5; S=0x354185d5; converted property
@property(assign) ODIHRange xRange;	// G=0x3532b99d; S=0x3532b4d1; converted property
- (id)init;	// 0x3532ad8d
- (void)addToXOffsetRelativeToParent:(float)parent;	// 0x3532b6f9
// converted property getter: - (BOOL)connectToVerticalSide;	// 0x3532c44d
- (void)dealloc;	// 0x3532c5f1
// converted property getter: - (int)extraRowsBetweenParentAndSelf;	// 0x3532b9b5
// converted property getter: - (int)row;	// 0x3532bae5
// converted property setter: - (void)setConnectToVerticalSide:(BOOL)verticalSide;	// 0x354185c5
// converted property setter: - (void)setExtraRowsBetweenParentAndSelf:(int)aSelf;	// 0x3532b4c1
// converted property setter: - (void)setRow:(int)row;	// 0x3532b9c5
// converted property setter: - (void)setTreeDepth:(int)depth;	// 0x3532ae31
// converted property setter: - (void)setXOffsetRelativeToParent:(float)parent;	// 0x354185d5
// converted property setter: - (void)setXRange:(ODIHRange)range;	// 0x3532b4d1
// converted property getter: - (int)treeDepth;	// 0x3532c43d
// converted property getter: - (float)xOffsetRelativeToParent;	// 0x3532b9d5
// converted property getter: - (ODIHRange)xRange;	// 0x3532b99d
- (ODIHRangeVector *)xRanges;	// 0x3532b4b1
@end

