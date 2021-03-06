/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

@class UIKBTree;
@protocol UIKBHandwritingDelegateProtocol;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView {
@private
	KBStrokeList *_strokes;	// 72 = 0x48
	id<UIKBHandwritingDelegateProtocol> _delegate;	// 76 = 0x4c
	CGColorRef _inkColor;	// 80 = 0x50
	CGImageRef _inkMask;	// 84 = 0x54
	UIKBTree *_keyboard;	// 88 = 0x58
	CGPoint _last;	// 92 = 0x5c
	int _down;	// 100 = 0x64
	BOOL _stroked;	// 104 = 0x68
	BOOL _captureEnabled;	// 105 = 0x69
	BOOL _inGesture;	// 106 = 0x6a
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x356089ed
- (id).cxx_construct;	// 0x35609a49
- (BOOL)cancelTouchTracking;	// 0x356099b1
- (BOOL)clear;	// 0x35608f05
- (void)dealloc;	// 0x35608dad
- (void)drawRect:(CGRect)rect;	// 0x35609001
- (void)send;	// 0x35608f51
- (void)setDelegate:(id)delegate;	// 0x35608f41
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35609275
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35609955
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35609511
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3560937d
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x35608e95
@end

