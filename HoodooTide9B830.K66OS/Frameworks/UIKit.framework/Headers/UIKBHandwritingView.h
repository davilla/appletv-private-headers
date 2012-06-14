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
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x3031b9ed
- (id).cxx_construct;	// 0x3031ca49
- (BOOL)cancelTouchTracking;	// 0x3031c9b1
- (BOOL)clear;	// 0x3031bf05
- (void)dealloc;	// 0x3031bdad
- (void)drawRect:(CGRect)rect;	// 0x3031c001
- (void)send;	// 0x3031bf51
- (void)setDelegate:(id)delegate;	// 0x3031bf41
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3031c275
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3031c955
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3031c511
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3031c37d
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x3031be95
@end
