/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UISectionTable;

__attribute__((visibility("hidden")))
@interface UISectionIndex : UIControl {
@private
	UISectionTable *_sectionTable;	// 68 = 0x44
	CGPoint _lastMousePoint;	// 72 = 0x48
}
+ (float)opaqueVisibleWidth;	// 0x320fd215
+ (float)visibleWidth;	// 0x320fce75
- (id)initWithSectionTable:(id)sectionTable;	// 0x320fd115
- (void)_scrollToClosestSectionAtPoint:(CGPoint)point;	// 0x320fcff1
- (id)_sectionTitles;	// 0x320fce91
- (id)_titleForPoint:(CGPoint)point pastTop:(BOOL *)top pastBottom:(BOOL *)bottom;	// 0x320fd2ad
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x320fd45d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320fcf95
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x320fd3f9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320fcf21
- (void)drawRect:(CGRect)rect;	// 0x320fd4c9
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x320fd38d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x320fceb1
- (void)noteIndexTitlesDidChangeInSectionList:(id)noteIndexTitles;	// 0x320fce7d
@end

