/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl;
@protocol BRTumblerDataSource, BRTumblerDelegate;

@interface BRTumblerControl : BRControl {
@private
	id<BRTumblerDataSource> _dataSource;	// 44 = 0x2c
	id<BRTumblerDelegate> _delegate;	// 48 = 0x30
	unsigned _currentIndex;	// 52 = 0x34
	unsigned _itemCount;	// 56 = 0x38
	BRControl *_currentItem;	// 60 = 0x3c
	BRControl *_nextItem;	// 64 = 0x40
	BRControl *_prevItem;	// 68 = 0x44
	BRControl *_nextNextItem;	// 72 = 0x48
	BRControl *_prevPrevItem;	// 76 = 0x4c
	int _tumbleState;	// 80 = 0x50
	BRControl *_nextFade;	// 84 = 0x54
	BRControl *_prevFade;	// 88 = 0x58
	BRControl *_nextBlackout;	// 92 = 0x5c
	BRControl *_prevBlackout;	// 96 = 0x60
	BRImageControl *_nextArrow;	// 100 = 0x64
	BRImageControl *_prevArrow;	// 104 = 0x68
	CGSize _sizeThatFits;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x330203c1; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x330203b1; S=0x33020de1; 
@property(assign, nonatomic) id<BRTumblerDataSource> dataSource;	// G=0x330203f1; S=0x33020dc1; @synthesize=_dataSource
@property(assign, nonatomic) id<BRTumblerDelegate> delegate;	// G=0x330203d1; S=0x330203e1; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x33021b75; @dynamic
- (id)init;	// 0x33020f05
- (id)_arrowAnimations;	// 0x33020461
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x33020421
- (CGPoint)_currentPos;	// 0x33021d39
- (id)_nextFadeFilters;	// 0x33021f49
- (CGPoint)_nextNextPos;	// 0x33021c8d
- (CGPoint)_nextPos;	// 0x33021ce9
- (id)_prevFadeFilters;	// 0x33021e4d
- (CGPoint)_prevPos;	// 0x33021d91
- (CGPoint)_prevPrevPos;	// 0x33021df1
- (BOOL)_tumbleNextShouldAnimate:(BOOL)_tumbleNext;	// 0x33021291
- (BOOL)_tumblePrevShouldAnimate:(BOOL)_tumblePrev;	// 0x33021705
- (id)accessibilityLabel;	// 0x33020401
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33020555
- (BOOL)brEventAction:(id)action;	// 0x330205f9
// declared property getter: - (id)currentItem;	// 0x330203c1
// declared property getter: - (unsigned)currentItemIndex;	// 0x330203b1
// declared property getter: - (id)dataSource;	// 0x330203f1
- (void)dealloc;	// 0x33020e09
// declared property getter: - (id)delegate;	// 0x330203d1
// declared property getter: - (float)itemPadding;	// 0x33021b75
- (void)layoutSubcontrols;	// 0x33022045
- (void)reload;	// 0x33020aed
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x33020de1
// declared property setter: - (void)setDataSource:(id)source;	// 0x33020dc1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x330203e1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33021bcd
@end

