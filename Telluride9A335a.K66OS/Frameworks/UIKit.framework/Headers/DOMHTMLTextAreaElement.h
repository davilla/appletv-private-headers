/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLTextAreaElement.h> // Unknown library


@interface DOMHTMLTextAreaElement (UITextInputAdditions)
- (BOOL)isTextControl;	// 0x33bb7d29
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x33bb7d2d
- (id)textInputTraits;	// 0x33bb7c09
@end

@interface DOMHTMLTextAreaElement (UIWebInteraction)
- (BOOL)nodeCanBecomeFirstResponder;	// 0x33c307e1
@end

@interface DOMHTMLTextAreaElement (UIWebBrowserViewPrivate)
- (BOOL)_requiresAccessoryView;	// 0x33ca4511
- (BOOL)_requiresInputView;	// 0x33ca4515
- (void)_startAssistingDocumentView:(id)view;	// 0x33ca44c1
- (void)_stopAssistingDocumentView:(id)view;	// 0x33ca44d5
- (BOOL)_supportsAutoFill;	// 0x33ca4519
- (id)_textFormElement;	// 0x33ca451d
@end

