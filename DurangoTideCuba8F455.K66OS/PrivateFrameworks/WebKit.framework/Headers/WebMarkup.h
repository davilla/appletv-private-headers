/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class DOMDocument, WAKWindow, DOMElement, WebView;

@interface WebMarkup : NSObject {
@private
	WebView *_webView;	// 4 = 0x4
	DOMDocument *_doc;	// 8 = 0x8
	WAKWindow *_window;	// 12 = 0xc
	DOMElement *_textElement;	// 16 = 0x10
	DOMElement *_sizeElement;	// 20 = 0x14
	CGContextRef _graphicsContext;	// 24 = 0x18
	CGPoint _stringDrawingOrigin;	// 28 = 0x1c
}
+ (BOOL)isSharedMarkupCreated;	// 0x3053d805
+ (id)sharedWebMarkup;	// 0x3053da1d
- (id)init;	// 0x3053d855
- (void)_setupWithStyle:(id)style width:(float)width height:(float)height;	// 0x3053e0e5
- (id)_styleFormatString:(id)string;	// 0x3053d829
- (BOOL)_webPrepareContextForTextDrawing:(BOOL)textDrawing;	// 0x3053e211
- (id)_webView;	// 0x3053d819
- (void)clearStringDrawingOrigin;	// 0x3053d841
- (void)dealloc;	// 0x3053e35d
- (void)drawMarkup:(id)markup atPoint:(CGPoint)point;	// 0x3053def5
- (void)drawMarkup:(id)markup inRect:(CGRect)rect;	// 0x3053dd09
- (void)drawString:(id)string atPoint:(CGPoint)point withStyle:(id)style;	// 0x3053e0b5
- (void)drawString:(id)string inRect:(CGRect)rect withStyle:(id)style;	// 0x3053df21
- (void)setStringDrawingOrigin:(CGPoint)origin;	// 0x3053d82d
- (CGSize)sizeOfMarkup:(id)markup forWidth:(float)width;	// 0x3053da65
- (CGSize)sizeOfString:(id)string withStyle:(id)style forWidth:(float)width;	// 0x3053dbcd
@end

