/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <UIResponder.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer, UIPDFPageView, UILongPressGestureRecognizer, UIPDFSelectionController, UIMenuController, UIPDFViewMagnifyController, UITextEffectsWindow;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
@private
	UIPDFPageView *_pdfPageView;	// 4 = 0x4
	UITapGestureRecognizer *_doubleTapRecognizer;	// 8 = 0x8
	UITapGestureRecognizer *_singleTapRecognizer;	// 12 = 0xc
	UILongPressGestureRecognizer *_briefPressRecognizer;	// 16 = 0x10
	UILongPressGestureRecognizer *_longPressRecognizer;	// 20 = 0x14
	UIMenuController *_menuController;	// 24 = 0x18
	UIPDFSelectionController *_selectionController;	// 28 = 0x1c
	UIPDFViewMagnifyController *_magnifyController;	// 32 = 0x20
	BOOL _trackingSelection;	// 36 = 0x24
	BOOL _showMagnifier;	// 37 = 0x25
	BOOL _showLoupe;	// 38 = 0x26
	UITextEffectsWindow *_textEffectsWindow;	// 40 = 0x28
}
- (id)initWithView:(id)view;	// 0x3265edfd
- (void)briefPressRecognized:(id)recognized;	// 0x3265f901
- (BOOL)canBecomeFirstResponder;	// 0x3265eacd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3265f465
- (void)copy:(id)copy;	// 0x3265f2dd
- (void)dealloc;	// 0x3265fc45
- (void)disableRecognizers;	// 0x3265ece1
- (void)doubleTapRecognized:(id)recognized;	// 0x3265f665
- (void)enableRecognizers;	// 0x3265ec61
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3265ead1
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3265ead5
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3265f4d1
- (void)hideMenu;	// 0x3265ead9
- (void)longPressRecognized:(id)recognized;	// 0x3265f70d
- (id)nextResponder;	// 0x3265eabd
- (BOOL)resignFirstResponder;	// 0x3265fbdd
- (void)selectAll:(id)all;	// 0x3265ed61
- (void)showMenu;	// 0x3265f185
- (void)singleTapRecognized:(id)recognized;	// 0x3265f5bd
@end

