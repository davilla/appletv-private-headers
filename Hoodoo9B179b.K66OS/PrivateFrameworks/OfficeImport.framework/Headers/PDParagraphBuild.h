/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDBuild.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild {
@private
	NSMutableArray *mTimeNodeDataList;	// 12 = 0xc
	double mAutoAdvanceTime;	// 16 = 0x10
	BOOL mIsReversedParagraphOrder;	// 24 = 0x18
	int mBuildLevel;	// 28 = 0x1c
	int mType;	// 32 = 0x20
}
@property(assign) double autoAdvanceTime;	// G=0x3294b5cd; S=0x3294b5e5; converted property
@property(assign) int buildLevel;	// G=0x3294b619; S=0x3294b629; converted property
@property(assign) BOOL isReversedParagraphOrder;	// G=0x3294b5f9; S=0x3294b609; converted property
@property(assign) int type;	// G=0x3294b639; S=0x3294b649; converted property
- (id)init;	// 0x3294d031
- (id)addTimeNodeData;	// 0x3294d0a5
// converted property getter: - (double)autoAdvanceTime;	// 0x3294b5cd
// converted property getter: - (int)buildLevel;	// 0x3294b619
- (void)dealloc;	// 0x3294d141
// converted property getter: - (BOOL)isReversedParagraphOrder;	// 0x3294b5f9
// converted property setter: - (void)setAutoAdvanceTime:(double)time;	// 0x3294b5e5
// converted property setter: - (void)setBuildLevel:(int)level;	// 0x3294b629
// converted property setter: - (void)setIsReversedParagraphOrder:(BOOL)order;	// 0x3294b609
// converted property setter: - (void)setType:(int)type;	// 0x3294b649
- (id)timeNodeDataAtIndex:(int)index;	// 0x3294d0fd
- (id)timeNodeDataList;	// 0x3294b5bd
- (int)timeNodeDataListCount;	// 0x3294d121
// converted property getter: - (int)type;	// 0x3294b639
@end

