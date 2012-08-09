/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIHighlightView, UILabel, NSTimer;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView {
	UILabel *_label;	// 84 = 0x54
	UIHighlightView *_highlight;	// 88 = 0x58
	NSTimer *_timer;	// 92 = 0x5c
	unsigned currentPageIndex;	// 96 = 0x60
}
@property(assign, nonatomic) unsigned currentPageIndex;	// G=0x33db2799; S=0x33db27a9; @synthesize
@property(readonly, assign, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;	// G=0x33db2479; 
- (id)initWithFrame:(CGRect)frame;	// 0x33db2081
- (void)_fadeOutAnimationDidStop:(id)_fadeOutAnimation finished:(id)finished;	// 0x33db2681
- (double)_fadeOutDelay;	// 0x33db2491
- (double)_fadeOutDuration;	// 0x33db249d
- (void)clearTimer;	// 0x33db228d
// declared property getter: - (unsigned)currentPageIndex;	// 0x33db2799
- (void)dealloc;	// 0x33db22c9
- (void)fadeOut;	// 0x33db26b1
// declared property getter: - (BOOL)isTimerInstalled;	// 0x33db2479
// declared property setter: - (void)setCurrentPageIndex:(unsigned)index;	// 0x33db27a9
- (void)setText:(id)text;	// 0x33db243d
- (void)showNowInSuperView:(id)superView atOrigin:(CGPoint)origin withText:(id)text animated:(BOOL)animated;	// 0x33db24a9
- (void)sizeToFit;	// 0x33db233d
@end
