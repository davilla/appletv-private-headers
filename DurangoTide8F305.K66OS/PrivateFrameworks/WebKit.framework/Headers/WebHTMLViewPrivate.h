/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, WAKView, WebPluginController, WebEvent, NSString, NSTimer, WebDataSource, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject {
@private
	BOOL closed;	// 4 = 0x4
	BOOL needsToApplyStyles;	// 5 = 0x5
	BOOL ignoringMouseDraggedEvents;	// 6 = 0x6
	BOOL printing;	// 7 = 0x7
	BOOL avoidingPrintOrphan;	// 8 = 0x8
	WAKView *layerHostingView;	// 12 = 0xc
	WebEvent *mouseDownEvent;	// 16 = 0x10
	BOOL handlingMouseDownEvent;	// 20 = 0x14
	WebEvent *keyDownEvent;	// 24 = 0x18
	BOOL exposeInputContext;	// 28 = 0x1c
	CGPoint lastScrollPosition;	// 32 = 0x20
	BOOL inScrollPositionChanged;	// 40 = 0x28
	WebPluginController *pluginController;	// 44 = 0x2c
	NSString *toolTip;	// 48 = 0x30
	id trackingRectOwner;	// 52 = 0x34
	void *trackingRectUserData;	// 56 = 0x38
	NSTimer *autoscrollTimer;	// 60 = 0x3c
	WebEvent *autoscrollTriggerEvent;	// 64 = 0x40
	NSArray *pageRects;	// 68 = 0x44
	NSMutableDictionary *highlighters;	// 72 = 0x48
	BOOL transparentBackground;	// 76 = 0x4c
	WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;	// 80 = 0x50
	BOOL receivedNOOP;	// 84 = 0x54
	WebDataSource *dataSource;	// 88 = 0x58
	SEL selectorForDoCommandBySelector;	// 92 = 0x5c
}
+ (void)initialize;	// 0x33fc53e1
- (void)clear;	// 0x33fd7ff1
- (void)dealloc;	// 0x33fd81a5
- (void)finalize;	// 0x34016bf1
@end

