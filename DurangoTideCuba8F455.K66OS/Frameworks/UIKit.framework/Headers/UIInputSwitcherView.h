/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class UITableView, NSTimer;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIView <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView *m_table;	// 44 = 0x2c
	UIView *m_shadowView;	// 48 = 0x30
	UIView *m_selExtraView;	// 52 = 0x34
	int m_mode;	// 56 = 0x38
	CGRect m_referenceRect;	// 60 = 0x3c
	float m_pointerOffset;	// 76 = 0x4c
	int m_currentInputModeIndex;	// 80 = 0x50
	int m_firstVisibleRow;	// 84 = 0x54
	int m_visibleRows;	// 88 = 0x58
	BOOL m_scrollable;	// 92 = 0x5c
	BOOL m_scrolling;	// 93 = 0x5d
	CGPoint m_point;	// 96 = 0x60
	double m_scrollStartTime;	// 104 = 0x68
	int m_scrollDirection;	// 112 = 0x70
	NSTimer *m_scrollTimer;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) int mode;	// G=0x30318ccd; @synthesize=m_mode
+ (id)activeInstance;	// 0x3015be81
+ (id)sharedInstance;	// 0x301b66d1
- (id)initWithFrame:(CGRect)frame;	// 0x301b6739
- (void)applicationWillSuspend:(id)application;	// 0x30319229
- (void)autoscrollTimerFired:(id)fired;	// 0x30319bb5
- (void)dealloc;	// 0x30319275
- (void)endScrolling:(id)scrolling;	// 0x30318e69
- (void)fade;	// 0x3031910d
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished context:(void *)context;	// 0x30318fa9
- (void)fadeWithDelay:(double)delay;	// 0x30319019
- (id)font;	// 0x30319205
- (void)hide;	// 0x30318fd5
- (int)indexForIndexPath:(id)indexPath;	// 0x30318cdd
- (BOOL)isVisible;	// 0x301c3b6d
// declared property getter: - (int)mode;	// 0x30318ccd
- (id)nextInputMode;	// 0x30319739
- (id)previousInputMode;	// 0x303196bd
- (void)removeFromSuperview;	// 0x3031923d
- (void)selectInputMode:(id)mode;	// 0x30318d6d
- (void)selectNextInputMode;	// 0x30318d31
- (void)selectPreviousInputMode;	// 0x30318cf5
- (void)selectRowForInputMode:(id)inputMode;	// 0x303197a1
- (id)selectedInputMode;	// 0x30319899
- (void)setFrame:(CGRect)frame;	// 0x301b6945
- (void)setInputMode:(id)mode;	// 0x30318d99
- (void)setNeedsDisplayForCell:(id)cell;	// 0x30318f69
- (void)setNeedsDisplayForTopBottomCells;	// 0x30318f05
- (void)show;	// 0x3031aa1d
- (void)showAsHUD;	// 0x303191c1
- (void)showAsPopupFromRect:(CGRect)rect inView:(id)view;	// 0x3031912d
- (void)stopAnyAutoscrolling;	// 0x30318dcd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3031a279
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30319655
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x30318cc5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303196a5
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x303198e5
@end

