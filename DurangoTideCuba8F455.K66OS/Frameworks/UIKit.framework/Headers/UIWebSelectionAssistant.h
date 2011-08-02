/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizerDelegate.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UILongPressGestureRecognizer, UIWebSelectionView, UIWebSelection, UIWebDocumentView, UITapAndAHalfRecognizer;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UILongPressGestureRecognizerDelegate> {
@private
	UIWebDocumentView *_webView;	// 4 = 0x4
	UIWebSelectionView *_tintView;	// 8 = 0x8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 12 = 0xc
	UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL enabled;	// G=0x300fe241; S=0x300ff3d9; 
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x302d2b69; 
@property(readonly, assign, nonatomic) CGRect selectionFrame;	// G=0x302d2ea1; 
- (id)initWithWebView:(id)webView;	// 0x300fd7e5
- (void)clearSelection;	// 0x30185001
- (void)dealloc;	// 0x302d2ba9
- (void)didRotate:(id)rotate;	// 0x302d2a2d
- (void)doneDragging;	// 0x302d2a8d
// declared property getter: - (BOOL)enabled;	// 0x300fe241
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x301842ad
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x302d29bd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x302d2eed
- (void)hideCallout;	// 0x302d2a6d
- (id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;	// 0x302d2d31
- (BOOL)isSelectionGestureRecognizer:(id)recognizer;	// 0x302d2991
- (void)layoutChanged;	// 0x300ff459
- (void)makeWebSelection:(id)selection;	// 0x302d2dad
- (void)resignedFirstResponder;	// 0x30188659
- (void)scaleChanged;	// 0x302d2afd
// declared property getter: - (id)selection;	// 0x302d2b69
- (void)selectionChanged;	// 0x302d2b89
// declared property getter: - (CGRect)selectionFrame;	// 0x302d2ea1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300ff3d9
- (void)setGestureRecognizers;	// 0x300fdfd5
- (void)tap:(id)tap;	// 0x302d2b21
- (void)willDrag;	// 0x302d2ac5
- (void)willRotate:(id)rotate;	// 0x302d2a4d
@end

