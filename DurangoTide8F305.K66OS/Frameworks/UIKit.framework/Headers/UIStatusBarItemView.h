/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarItem, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView {
@private
	UIStatusBarItem *_item;	// 44 = 0x2c
	int _foregroundStyle;	// 48 = 0x30
	BOOL _visible;	// 52 = 0x34
	BOOL _allowsUpdates;	// 53 = 0x35
	UIStatusBarLayoutManager *_layoutManager;	// 56 = 0x38
	float _currentOverlap;	// 60 = 0x3c
	CGContextRef _imageContext;	// 64 = 0x40
	float _imageContextScale;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x31f8b7fd; S=0x31f99c39; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x31f8d01d; S=0x31f9b6dd; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x31f8d335; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x31f8cda1; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x32208051; S=0x31f9a735; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x31f8cde5; S=0x31f9ab39; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(XXStruct_LyCp7D *)data actions:(int)actions foregroundStyle:(int)style;	// 0x31f99271
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x31fa78a1
- (id)initWithItem:(id)item data:(XXStruct_LyCp7D *)data actions:(int)actions style:(int)style;	// 0x31f9931d
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x31fa0455
// declared property getter: - (BOOL)allowsUpdates;	// 0x31f8b7fd
- (BOOL)animatesDataChange;	// 0x31f8b79d
- (BOOL)animatesFrameChange;	// 0x31f99c49
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x31f99f6d
- (id)contentsImageForStyle:(int)style;	// 0x3220804d
- (float)currentLeftOverlap;	// 0x31f9ba81
// converted property getter: - (float)currentOverlap;	// 0x31f8d01d
- (float)currentRightOverlap;	// 0x31f9bc99
- (void)dealloc;	// 0x31f9bd09
- (id)description;	// 0x32208061
- (void)drawText:(id)text forStyle:(int)style;	// 0x31f9a1bd
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x31f9a1f5
- (void)endImageContext;	// 0x31f9a715
- (float)extraLeftPadding;	// 0x31f8cfed
- (float)extraRightPadding;	// 0x31f8d069
// declared property getter: - (int)foregroundStyle;	// 0x31f8d335
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x31f9a609
// declared property getter: - (BOOL)isVisible;	// 0x31f8cde5
// declared property getter: - (id)item;	// 0x31f8cda1
// declared property getter: - (id)layoutManager;	// 0x32208051
- (float)maximumOverlap;	// 0x32208049
- (void)performPendedActions;	// 0x31f8d18d
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x31f99c39
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x31f9b6dd
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x31f9a735
- (float)setStatusBarData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x31f8b7ad
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x31f9ab39
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x31f9baa9
- (float)standardPadding;	// 0x31f8cfad
- (id)textColorForStyle:(int)style;	// 0x31f9a59d
- (id)textFont;	// 0x31f99ebd
- (float)updateContentsAndWidth;	// 0x31f99ced
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x31f8bd61
- (BOOL)usesSmallerTextFont;	// 0x31f99f05
@end

