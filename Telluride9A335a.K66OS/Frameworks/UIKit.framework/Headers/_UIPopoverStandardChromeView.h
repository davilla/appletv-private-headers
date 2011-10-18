/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverBackgroundView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
@private
	UIView *_arrowView;	// 48 = 0x30
	UIView *_leftCapView;	// 52 = 0x34
	UIView *_rightCapView;	// 56 = 0x38
	float _arrowOffset;	// 60 = 0x3c
	unsigned _arrowDirection;	// 64 = 0x40
	int _backgroundStyle;	// 68 = 0x44
	BOOL _arrowVisible;	// 72 = 0x48
	BOOL useShortMode;	// 73 = 0x49
	BOOL _debugMode;	// 74 = 0x4a
}
@property(assign) unsigned arrowDirection;	// G=0x33d38e71; S=0x33d38e81; converted property
@property(assign) float arrowOffset;	// G=0x33d38de5; S=0x33d38e25; converted property
@property(assign, nonatomic, getter=isArrowVisible) BOOL arrowVisible;	// G=0x33d399a9; S=0x33d399b9; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x33d39799; S=0x33d397a9; 
@property(assign, nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;	// G=0x33d39a05; S=0x33d39a15; @synthesize=_debugMode
@property(assign, nonatomic) BOOL useShortMode;	// G=0x33d399e5; S=0x33d399f5; @synthesize
+ (float)arrowBase;	// 0x33d38e99
+ (float)arrowHeight;	// 0x33d38e91
+ (UIEdgeInsets)contentViewInsets;	// 0x33d38ea1
- (id)initWithFrame:(CGRect)frame;	// 0x33d381e5
- (void)_layoutArrowViewsLeftOrRight;	// 0x33d3877d
- (void)_layoutArrowViewsNone;	// 0x33d38c11
- (void)_layoutArrowViewsUpOrDown;	// 0x33d38339
- (void)_loadNecessaryViews;	// 0x33d38eb1
// converted property getter: - (unsigned)arrowDirection;	// 0x33d38e71
// converted property getter: - (float)arrowOffset;	// 0x33d38de5
// declared property getter: - (int)backgroundStyle;	// 0x33d39799
- (void)dealloc;	// 0x33d3822d
- (BOOL)hasComponentViews;	// 0x33d39419
// declared property getter: - (BOOL)isArrowVisible;	// 0x33d399a9
// declared property getter: - (BOOL)isDebugModeEnabled;	// 0x33d39a05
- (BOOL)isPinned;	// 0x33d39459
- (BOOL)isRightArrowPinnedToBottom;	// 0x33d39751
- (BOOL)isRightArrowPinnedToTop;	// 0x33d39709
- (void)layoutSubviews;	// 0x33d38d1d
- (float)maxNonPinnedOffset;	// 0x33d39631
- (float)minNonPinnedOffset;	// 0x33d39535
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x33d38dd9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x33d38de1
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x33d38ddd
// converted property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x33d38e81
// converted property setter: - (void)setArrowOffset:(float)offset;	// 0x33d38e25
// declared property setter: - (void)setArrowVisible:(BOOL)visible;	// 0x33d399b9
- (void)setArrowVisible:(BOOL)visible animated:(BOOL)animated;	// 0x33d399c9
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x33d397a9
- (void)setBackgroundStyle:(int)style animated:(BOOL)animated;	// 0x33d39999
// declared property setter: - (void)setDebugModeEnabled:(BOOL)enabled;	// 0x33d39a15
// declared property setter: - (void)setUseShortMode:(BOOL)mode;	// 0x33d399f5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33d38dc9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33d38dd5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33d38dd1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33d38dcd
// declared property getter: - (BOOL)useShortMode;	// 0x33d399e5
- (void)willMoveToWindow:(id)window;	// 0x33d382a1
- (BOOL)wouldPinForOffset:(float)offset;	// 0x33d394cd
@end

