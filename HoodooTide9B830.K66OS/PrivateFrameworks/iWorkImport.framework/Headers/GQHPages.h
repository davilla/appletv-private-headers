/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQPagesGenerator.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQHPages : NSObject <GQPagesGenerator> {
}
+ (int)beginPublication:(id)publication state:(id)state;	// 0x317c7611
+ (int)endPublication:(id)publication state:(id)state;	// 0x317c7821
+ (Class)enterBodyStorage:(id)storage;	// 0x317c7635
+ (Class)enterMainDrawablesForPage:(unsigned)page state:(id)state;	// 0x317c7619
+ (int)handleFooters:(CFArrayRef)footers state:(id)state;	// 0x317c7681
+ (int)handleHeaders:(CFArrayRef)headers state:(id)state;	// 0x317c7651
+ (int)handlePageSetup:(id)setup state:(id)state;	// 0x317c7bd1
+ (void)handlePagesOrders:(id)orders;	// 0x317c8b0d
+ (int)handleSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages state:(id)state;	// 0x317c76b1
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x317c7615
+ (void)handleZOrder:(unsigned)order cssClassName:(CFStringRef)name state:(id)state;	// 0x317c7b89
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)publication state:(id)state;	// 0x317c771d
+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)publication state:(id)state;	// 0x317c8511
+ (void)mapHeaderOrFooter:(id)footer isHeader:(BOOL)header toPublication:(id)publication state:(id)state;	// 0x317c87c1
+ (int)setCurrentPageIndex:(int)index state:(id)state;	// 0x317c76ed
@end
