/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSArray, NSString;

@interface WebRenderLayer : NSObject {
@private
	NSArray *children;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSString *compositingInfo;	// 12 = 0xc
	CGRect bounds;	// 16 = 0x10
	BOOL composited;	// 32 = 0x20
	BOOL separator;	// 33 = 0x21
}
@property(readonly, retain) NSArray *children;	// G=0x33a009bd; converted property
@property(readonly, assign, getter=isComposited) BOOL composited;	// G=0x33a009ed; converted property
@property(readonly, retain) NSString *compositingInfo;	// G=0x33a009dd; converted property
@property(readonly, retain) NSString *name;	// G=0x33a009cd; converted property
@property(readonly, assign, getter=isSeparator) BOOL separator;	// G=0x33a009fd; converted property
+ (id)compositingInfoForLayer:(RenderLayer *)layer;	// 0x33a00a75
+ (id)nameForLayer:(RenderLayer *)layer;	// 0x33a00b1d
- (id)initWithName:(id)name;	// 0x33a00a0d
- (id)initWithRenderLayer:(RenderLayer *)renderLayer;	// 0x33a01539
- (id)initWithWebFrame:(id)webFrame;	// 0x33a013e1
- (void)buildDescendantLayers:(RenderLayer *)layers;	// 0x33a01061
// converted property getter: - (id)children;	// 0x33a009bd
// converted property getter: - (id)compositingInfo;	// 0x33a009dd
- (void)dealloc;	// 0x33a0136d
- (id)heightString;	// 0x33a00f69
// converted property getter: - (BOOL)isComposited;	// 0x33a009ed
// converted property getter: - (BOOL)isSeparator;	// 0x33a009fd
// converted property getter: - (id)name;	// 0x33a009cd
- (id)positionString;	// 0x33a01009
- (id)widthString;	// 0x33a00fb9
@end

