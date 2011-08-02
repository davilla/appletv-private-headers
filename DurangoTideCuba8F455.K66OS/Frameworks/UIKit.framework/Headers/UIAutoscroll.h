/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSTimer, UIView;
@protocol UIAutoscrollContainer;

__attribute__((visibility("hidden")))
@interface UIAutoscroll : NSObject {
@private
	id m_target;	// 4 = 0x4
	CGPoint m_point;	// 8 = 0x8
	UIView<UIAutoscrollContainer> *m_scrollContainer;	// 16 = 0x10
	int m_directions;	// 20 = 0x14
	double m_repeatInterval;	// 24 = 0x18
	NSTimer *m_timer;	// 32 = 0x20
	int m_count;	// 36 = 0x24
	BOOL m_active;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL active;	// G=0x3022fa81; S=0x3022fa91; @synthesize=m_active
@property(assign, nonatomic) int count;	// G=0x3022faa1; S=0x3022fab1; @synthesize=m_count
@property(assign, nonatomic) int directions;	// G=0x3022fae5; S=0x3022faf5; @synthesize=m_directions
@property(assign, nonatomic) CGPoint point;	// G=0x3022fb05; S=0x3022fb1d; @synthesize=m_point
@property(assign, nonatomic) double repeatInterval;	// G=0x3022fac1; S=0x3022fad1; @synthesize=m_repeatInterval
@property(retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer;	// G=0x3022fb35; S=0x3022ffd9; @synthesize=m_scrollContainer
@property(retain, nonatomic) id target;	// G=0x3022fb45; S=0x3022ffb1; @synthesize=m_target
// declared property getter: - (BOOL)active;	// 0x3022fa81
// declared property getter: - (int)count;	// 0x3022faa1
- (void)dealloc;	// 0x3022fbcd
// declared property getter: - (int)directions;	// 0x3022fae5
- (void)invalidate;	// 0x3022fec5
// declared property getter: - (CGPoint)point;	// 0x3022fb05
// declared property getter: - (double)repeatInterval;	// 0x3022fac1
// declared property getter: - (id)scrollContainer;	// 0x3022fb35
// declared property setter: - (void)setActive:(BOOL)active;	// 0x3022fa91
// declared property setter: - (void)setCount:(int)count;	// 0x3022fab1
// declared property setter: - (void)setDirections:(int)directions;	// 0x3022faf5
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x3022fb1d
// declared property setter: - (void)setRepeatInterval:(double)interval;	// 0x3022fad1
// declared property setter: - (void)setScrollContainer:(id)container;	// 0x3022ffd9
// declared property setter: - (void)setTarget:(id)target;	// 0x3022ffb1
- (BOOL)startAutoscroll:(id)autoscroll scrollContainer:(id)container point:(CGPoint)point directions:(int)directions repeatInterval:(double)interval;	// 0x3022fc09
// declared property getter: - (id)target;	// 0x3022fb45
- (void)timerFired:(id)fired;	// 0x3022fb55
@end

