/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class CMOutlineState, NSMutableDictionary, WDText;

__attribute__((visibility("hidden")))
@interface WMState : CMState {
@private
	CMOutlineState *currentListState;	// 40 = 0x28
	CMOutlineState *outlineState;	// 44 = 0x2c
	NSMutableDictionary *listStates;	// 48 = 0x30
	WDText *mLastHeader;	// 52 = 0x34
	WDText *mLastFooter;	// 56 = 0x38
	unsigned mCurrentPage;	// 60 = 0x3c
	unsigned mBlockIndex;	// 64 = 0x40
	unsigned mRunIndex;	// 68 = 0x44
	float mTopMargin;	// 72 = 0x48
	float mLeftMargin;	// 76 = 0x4c
	float mPageHeight;	// 80 = 0x50
	BOOL mIsFrame;	// 84 = 0x54
	BOOL mIsFrameStart;	// 85 = 0x55
	BOOL mIsFrameEnd;	// 86 = 0x56
	BOOL mIsHeaderOrFooter;	// 87 = 0x57
	float mTotalPageHeight;	// 88 = 0x58
}
@property(assign) unsigned blockIndex;	// G=0x32bde6d1; S=0x32bac039; converted property
@property(retain) CMOutlineState *currentListState;	// G=0x32bb05dd; S=0x32bb08bd; converted property
@property(assign) unsigned currentPage;	// G=0x32bafe55; S=0x32bafe65; converted property
@property(assign) BOOL isFrame;	// G=0x32bac531; S=0x32bac501; converted property
@property(assign) BOOL isFrameEnd;	// G=0x32bde85d; S=0x32bac521; converted property
@property(assign) BOOL isFrameStart;	// G=0x32bde6e1; S=0x32bac511; converted property
@property(assign) BOOL isHeaderOrFooter;	// G=0x32cc23c1; S=0x32cc23b1; converted property
@property(retain) id lastFooter;	// G=0x32bb5681; S=0x32bde2e1; converted property
@property(retain) id lastHeader;	// G=0x32bb6041; S=0x32c123f1; converted property
@property(assign) float leftMargin;	// G=0x32cc23a1; S=0x32bb5c05; converted property
@property(readonly, retain) CMOutlineState *outlineState;	// G=0x32c67651; converted property
@property(assign) float pageHeight;	// G=0x32cc2391; S=0x32bb5c99; converted property
@property(assign) unsigned runIndex;	// G=0x32c8856d; S=0x32babe1d; converted property
@property(assign) float topMargin;	// G=0x32cb7209; S=0x32bb5bf5; converted property
@property(assign) float totalPageHeight;	// G=0x32c139c5; S=0x32c139d5; converted property
- (id)init;	// 0x32bdc4b9
// converted property getter: - (unsigned)blockIndex;	// 0x32bde6d1
- (void)clearCurrentListState;	// 0x32bb08f1
// converted property getter: - (id)currentListState;	// 0x32bb05dd
// converted property getter: - (unsigned)currentPage;	// 0x32bafe55
- (void)dealloc;	// 0x32bb6ae1
- (BOOL)isCurrentListId:(int)anId;	// 0x32bb05ed
- (BOOL)isCurrentListStateOverridden;	// 0x32bb0631
// converted property getter: - (BOOL)isFrame;	// 0x32bac531
// converted property getter: - (BOOL)isFrameEnd;	// 0x32bde85d
// converted property getter: - (BOOL)isFrameStart;	// 0x32bde6e1
// converted property getter: - (BOOL)isHeaderOrFooter;	// 0x32cc23c1
// converted property getter: - (id)lastFooter;	// 0x32bb5681
// converted property getter: - (id)lastHeader;	// 0x32bb6041
// converted property getter: - (float)leftMargin;	// 0x32cc23a1
- (id)listStateForListId:(int)listId;	// 0x32bb0655
// converted property getter: - (id)outlineState;	// 0x32c67651
// converted property getter: - (float)pageHeight;	// 0x32cc2391
- (float)pageOffset;	// 0x32c13971
// converted property getter: - (unsigned)runIndex;	// 0x32c8856d
// converted property setter: - (void)setBlockIndex:(unsigned)index;	// 0x32bac039
// converted property setter: - (void)setCurrentListState:(id)state;	// 0x32bb08bd
// converted property setter: - (void)setCurrentPage:(unsigned)page;	// 0x32bafe65
// converted property setter: - (void)setIsFrame:(BOOL)frame;	// 0x32bac501
// converted property setter: - (void)setIsFrameEnd:(BOOL)end;	// 0x32bac521
// converted property setter: - (void)setIsFrameStart:(BOOL)start;	// 0x32bac511
// converted property setter: - (void)setIsHeaderOrFooter:(BOOL)footer;	// 0x32cc23b1
// converted property setter: - (void)setLastFooter:(id)footer;	// 0x32bde2e1
// converted property setter: - (void)setLastHeader:(id)header;	// 0x32c123f1
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32bb5c05
- (void)setListState:(id)state forListId:(int)listId;	// 0x32bb06e1
// converted property setter: - (void)setPageHeight:(float)height;	// 0x32bb5c99
// converted property setter: - (void)setRunIndex:(unsigned)index;	// 0x32babe1d
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x32bb5bf5
// converted property setter: - (void)setTotalPageHeight:(float)height;	// 0x32c139d5
// converted property getter: - (float)topMargin;	// 0x32cb7209
// converted property getter: - (float)totalPageHeight;	// 0x32c139c5
@end

