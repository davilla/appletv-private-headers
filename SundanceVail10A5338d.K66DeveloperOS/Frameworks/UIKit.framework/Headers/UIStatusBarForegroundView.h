/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarLayoutManager, UIStatusBarComposedData;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView {
	int _foregroundStyle;	// 84 = 0x54
	BOOL _itemIsEnabled[23];	// 88 = 0x58
	UIStatusBarLayoutManager *_layoutManagers[3];	// 112 = 0x70
	int _ignoreDataLevel;	// 124 = 0x7c
	UIStatusBarComposedData *_pendedData;	// 128 = 0x80
	int _pendedActions;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x30c31131; @synthesize=_foregroundStyle
- (id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;	// 0x30c40961
- (void)_cleanUpAfterDataChange;	// 0x30c21349
- (void)_cleanUpAfterSimpleReflow;	// 0x30c42a6d
- (id)_computeVisibleItemsPreservingHistory:(BOOL)history;	// 0x30f0b921
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)duration;	// 0x30f0b179
- (void)_reflowItemViewsWithDuration:(double)duration preserveHistory:(BOOL)history;	// 0x30f0b83d
- (BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float *)remaining allowSwap:(BOOL)swap swappedItem:(id *)item;	// 0x30d468b9
- (void)dealloc;	// 0x30d64af1
// declared property getter: - (int)foregroundStyle;	// 0x30c31131
- (BOOL)ignoringData;	// 0x30c1f845
- (void)reflowItemViews:(BOOL)views;	// 0x30f0b7a9
- (void)reflowItemViewsCrossfadingCenter:(id)center duration:(double)duration;	// 0x30f0af09
- (void)reflowItemViewsForgettingEitherSideItemHistory;	// 0x30f0b7f1
- (void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x30c1f5a9
- (void)startIgnoringData;	// 0x30c1f861
- (void)stopIgnoringData:(BOOL)data;	// 0x30c21f35
@end

