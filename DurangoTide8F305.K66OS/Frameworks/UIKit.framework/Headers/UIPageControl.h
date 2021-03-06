/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

@interface UIPageControl : UIControl {
@private
	NSMutableArray *_indicators;	// 68 = 0x44
	int _currentPage;	// 72 = 0x48
	int _displayedPage;	// 76 = 0x4c
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pageControlFlags;	// 80 = 0x50
}
@property(assign, nonatomic) int currentPage;	// G=0x32165351; S=0x32165595; @dynamic
@property(assign, nonatomic) BOOL defersCurrentPageDisplay;	// G=0x321653a1; S=0x32165375; @dynamic
@property(assign, nonatomic) BOOL hidesForSinglePage;	// G=0x32165361; S=0x32165535; @dynamic
@property(assign, nonatomic) int numberOfPages;	// G=0x321655bd; S=0x321655dd; @dynamic
- (id)initWithCoder:(id)coder;	// 0x321659d9
- (id)initWithFrame:(CGRect)frame;	// 0x32165b39
- (void)_commonPageControlInit;	// 0x32165881
- (int)_displayedPage;	// 0x321653b5
- (id)_pageIndicatorCurrentImageForPage:(int)page;	// 0x32165c7d
- (id)_pageIndicatorImageForPage:(int)page;	// 0x32165c91
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32165ba9
- (void)_setCurrentPage:(int)page;	// 0x321653e5
- (void)_setDisplayedPage:(int)page;	// 0x32165421
- (void)_updateCurrentPageDisplay;	// 0x321653c5
// declared property getter: - (int)currentPage;	// 0x32165351
- (void)dealloc;	// 0x321658b1
// declared property getter: - (BOOL)defersCurrentPageDisplay;	// 0x321653a1
- (void)encodeWithCoder:(id)coder;	// 0x321658f9
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32165d51
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32166255
// declared property getter: - (BOOL)hidesForSinglePage;	// 0x32165361
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3d5
- (void)layoutSubviews;	// 0x32165efd
// declared property getter: - (int)numberOfPages;	// 0x321655bd
// declared property setter: - (void)setCurrentPage:(int)page;	// 0x32165595
// declared property setter: - (void)setDefersCurrentPageDisplay:(BOOL)display;	// 0x32165375
// declared property setter: - (void)setHidesForSinglePage:(BOOL)singlePage;	// 0x32165535
// declared property setter: - (void)setNumberOfPages:(int)pages;	// 0x321655dd
- (CGSize)sizeForNumberOfPages:(int)pages;	// 0x32165ca5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x321660f5
- (void)updateCurrentPageDisplay;	// 0x3216550d
@end

