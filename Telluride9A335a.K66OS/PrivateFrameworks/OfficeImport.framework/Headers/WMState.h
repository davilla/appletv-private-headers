/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class NSMutableDictionary, WDText, CMOutlineState;

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
@property(assign) unsigned blockIndex;	// G=0x35269a75; S=0x351b839d; converted property
@property(retain) CMOutlineState *currentListState;	// G=0x351c6f05; S=0x351c7241; converted property
@property(assign) unsigned currentPage;	// G=0x351c5019; S=0x351c5029; converted property
@property(assign) BOOL isFrame;	// G=0x351b89b1; S=0x351b8981; converted property
@property(assign) BOOL isFrameEnd;	// G=0x35269cfd; S=0x351b89a1; converted property
@property(assign) BOOL isFrameStart;	// G=0x35269a85; S=0x351b8991; converted property
@property(assign) BOOL isHeaderOrFooter;	// G=0x3526aab1; S=0x3525cf15; converted property
@property(retain) id lastFooter;	// G=0x351c5579; S=0x35269611; converted property
@property(retain) id lastHeader;	// G=0x351c6075; S=0x35268825; converted property
@property(assign) float leftMargin;	// G=0x353355d9; S=0x351c5bb9; converted property
@property(readonly, retain) CMOutlineState *outlineState;	// G=0x352c5f4d; converted property
@property(assign) float pageHeight;	// G=0x35416c75; S=0x351c5c59; converted property
@property(assign) unsigned runIndex;	// G=0x352e90e9; S=0x351b7835; converted property
@property(assign) float topMargin;	// G=0x35325301; S=0x351c5ba9; converted property
@property(assign) float totalPageHeight;	// G=0x3526ab91; S=0x3526aba1; converted property
- (id)init;	// 0x3525b395
// converted property getter: - (unsigned)blockIndex;	// 0x35269a75
- (void)clearCurrentListState;	// 0x351c727d
// converted property getter: - (id)currentListState;	// 0x351c6f05
// converted property getter: - (unsigned)currentPage;	// 0x351c5019
- (void)dealloc;	// 0x351c809d
- (BOOL)isCurrentListId:(int)anId;	// 0x351c6f15
- (BOOL)isCurrentListStateOverridden;	// 0x351c6f65
// converted property getter: - (BOOL)isFrame;	// 0x351b89b1
// converted property getter: - (BOOL)isFrameEnd;	// 0x35269cfd
// converted property getter: - (BOOL)isFrameStart;	// 0x35269a85
// converted property getter: - (BOOL)isHeaderOrFooter;	// 0x3526aab1
// converted property getter: - (id)lastFooter;	// 0x351c5579
// converted property getter: - (id)lastHeader;	// 0x351c6075
// converted property getter: - (float)leftMargin;	// 0x353355d9
- (id)listStateForListId:(int)listId;	// 0x351c6f8d
// converted property getter: - (id)outlineState;	// 0x352c5f4d
// converted property getter: - (float)pageHeight;	// 0x35416c75
- (float)pageOffset;	// 0x3526ab39
// converted property getter: - (unsigned)runIndex;	// 0x352e90e9
// converted property setter: - (void)setBlockIndex:(unsigned)index;	// 0x351b839d
// converted property setter: - (void)setCurrentListState:(id)state;	// 0x351c7241
// converted property setter: - (void)setCurrentPage:(unsigned)page;	// 0x351c5029
// converted property setter: - (void)setIsFrame:(BOOL)frame;	// 0x351b8981
// converted property setter: - (void)setIsFrameEnd:(BOOL)end;	// 0x351b89a1
// converted property setter: - (void)setIsFrameStart:(BOOL)start;	// 0x351b8991
// converted property setter: - (void)setIsHeaderOrFooter:(BOOL)footer;	// 0x3525cf15
// converted property setter: - (void)setLastFooter:(id)footer;	// 0x35269611
// converted property setter: - (void)setLastHeader:(id)header;	// 0x35268825
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x351c5bb9
- (void)setListState:(id)state forListId:(int)listId;	// 0x351c7031
// converted property setter: - (void)setPageHeight:(float)height;	// 0x351c5c59
// converted property setter: - (void)setRunIndex:(unsigned)index;	// 0x351b7835
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x351c5ba9
// converted property setter: - (void)setTotalPageHeight:(float)height;	// 0x3526aba1
// converted property getter: - (float)topMargin;	// 0x35325301
// converted property getter: - (float)totalPageHeight;	// 0x3526ab91
@end

