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
@property(assign) BOOL connectToVerticalSide;	// G=0x356e744d; S=0x357d35c5; converted property
@property(assign) int extraRowsBetweenParentAndSelf;	// G=0x356e69b5; S=0x356e64c1; converted property
@property(assign) int row;	// G=0x356e6ae5; S=0x356e69c5; converted property
@property(assign) int treeDepth;	// G=0x356e743d; S=0x356e5e31; converted property
@property(assign) float xOffsetRelativeToParent;	// G=0x356e69d5; S=0x357d35d5; converted property
@property(assign) ODIHRange xRange;	// G=0x356e699d; S=0x356e64d1; converted property
- (id)init;	// 0x356e5d8d
- (void)addToXOffsetRelativeToParent:(float)parent;	// 0x356e66f9
// converted property getter: - (BOOL)connectToVerticalSide;	// 0x356e744d
- (void)dealloc;	// 0x356e75f1
// converted property getter: - (int)extraRowsBetweenParentAndSelf;	// 0x356e69b5
// converted property getter: - (int)row;	// 0x356e6ae5
// converted property setter: - (void)setConnectToVerticalSide:(BOOL)verticalSide;	// 0x357d35c5
// converted property setter: - (void)setExtraRowsBetweenParentAndSelf:(int)aSelf;	// 0x356e64c1
// converted property setter: - (void)setRow:(int)row;	// 0x356e69c5
// converted property setter: - (void)setTreeDepth:(int)depth;	// 0x356e5e31
// converted property setter: - (void)setXOffsetRelativeToParent:(float)parent;	// 0x357d35d5
// converted property setter: - (void)setXRange:(ODIHRange)range;	// 0x356e64d1
// converted property getter: - (int)treeDepth;	// 0x356e743d
// converted property getter: - (float)xOffsetRelativeToParent;	// 0x356e69d5
// converted property getter: - (ODIHRange)xRange;	// 0x356e699d
- (ODIHRangeVector *)xRanges;	// 0x356e64b1
@end
