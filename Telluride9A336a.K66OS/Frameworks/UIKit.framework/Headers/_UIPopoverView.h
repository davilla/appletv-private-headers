/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIPopoverBackgroundView, UIActionSheet, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView {
@private
	UIView *_contentView;	// 48 = 0x30
	UIPopoverBackgroundView *_backgroundView;	// 52 = 0x34
	Class _backgroundViewClass;	// 56 = 0x38
	UIImageView *_toolbarShine;	// 60 = 0x3c
	BOOL _showsBackgroundComponentHighlights;	// 64 = 0x40
	BOOL _showsBackgroundViewHighlight;	// 65 = 0x41
	BOOL _showsContentViewHighlight;	// 66 = 0x42
	UIActionSheet *_presentedActionSheet;	// 68 = 0x44
	UIPopoverController *_popoverController;	// 72 = 0x48
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x35476b61; S=0x35476b81; 
@property(assign, nonatomic) float arrowOffset;	// G=0x35476b05; S=0x35476b25; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x35476bbd; S=0x35476bdd; 
@property(readonly, retain) UIPopoverBackgroundView *backgroundView;	// G=0x35476a3d; converted property
@property(readonly, retain) UIView *contentView;	// G=0x35476a05; converted property
@property(assign, nonatomic) UIPopoverController *popoverController;	// G=0x354773d5; S=0x354773e5; @synthesize=_popoverController
@property(retain, nonatomic) UIActionSheet *presentedActionSheet;	// G=0x354773a1; S=0x354773b1; @synthesize=_presentedActionSheet
@property(assign, nonatomic) BOOL showsBackgroundComponentHighlights;	// G=0x35477341; S=0x35477351; @synthesize=_showsBackgroundComponentHighlights
@property(assign, nonatomic) BOOL showsBackgroundViewHighlight;	// G=0x35477361; S=0x35477371; @synthesize=_showsBackgroundViewHighlight
@property(assign, nonatomic) BOOL showsContentViewHighlight;	// G=0x35477381; S=0x35477391; @synthesize=_showsContentViewHighlight
@property(readonly, retain) UIImageView *toolbarShine;	// G=0x35476af1; converted property
+ (id)popoverViewContainingView:(id)view;	// 0x351e143d
- (id)initWithFrame:(CGRect)frame;	// 0x354764f9
- (id)initWithFrame:(CGRect)frame backgroundViewClass:(Class)aClass;	// 0x35476299
- (BOOL)_allowsCustomizationOfContent;	// 0x35476b01
- (BOOL)_isIgnoringTapsInDimmingView;	// 0x354771b5
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x354769e5
- (void)_presentationInPopoverDidBeginForViewController:(id)_presentationInPopover;	// 0x35477285
- (void)_presentationInPopoverDidEndForViewController:(id)_presentationInPopover;	// 0x354772dd
- (void)_presentationInPopoverWillBeginForViewController:(id)_presentationInPopover;	// 0x3547728d
- (void)_presentationInPopoverWillEndForViewController:(id)_presentationInPopover;	// 0x35477289
- (void)_setFrame:(CGRect)frame arrowOffset:(float)offset;	// 0x35476e25
- (void)_setIgnoreTapsInDimmingView:(BOOL)dimmingView;	// 0x354771e9
- (int)_style;	// 0x354769e1
- (id)_viewForModalPresentationOfViewController:(id)viewController;	// 0x3547715d
// declared property getter: - (unsigned)arrowDirection;	// 0x35476b61
// declared property getter: - (float)arrowOffset;	// 0x35476b05
// declared property getter: - (int)backgroundStyle;	// 0x35476bbd
// converted property getter: - (id)backgroundView;	// 0x35476a3d
// converted property getter: - (id)contentView;	// 0x35476a05
- (void)dealloc;	// 0x35476525
- (void)layoutSubviews;	// 0x35476701
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x354769f9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x35476a01
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x354769fd
// declared property getter: - (id)popoverController;	// 0x354773d5
// declared property getter: - (id)presentedActionSheet;	// 0x354773a1
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x35476b81
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x35476b25
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x35476bdd
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x354773e5
// declared property setter: - (void)setPresentedActionSheet:(id)sheet;	// 0x354773b1
// declared property setter: - (void)setShowsBackgroundComponentHighlights:(BOOL)highlights;	// 0x35477351
// declared property setter: - (void)setShowsBackgroundViewHighlight:(BOOL)highlight;	// 0x35477371
// declared property setter: - (void)setShowsContentViewHighlight:(BOOL)highlight;	// 0x35477391
- (void)setUseToolbarShine:(BOOL)shine;	// 0x35476c21
// declared property getter: - (BOOL)showsBackgroundComponentHighlights;	// 0x35477341
// declared property getter: - (BOOL)showsBackgroundViewHighlight;	// 0x35477361
// declared property getter: - (BOOL)showsContentViewHighlight;	// 0x35477381
- (id)standardChromeView;	// 0x35476a75
- (BOOL)toolbarIsVisible;	// 0x3547726d
// converted property getter: - (id)toolbarShine;	// 0x35476af1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x354769e9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x354769f5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x354769f1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x354769ed
- (id)viewController;	// 0x35477225
- (void)willMoveToWindow:(id)window;	// 0x35476599
@end

