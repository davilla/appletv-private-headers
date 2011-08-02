/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVSedonaItemProvider : NSObject <BRProvider> {
@private
	NSMutableDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x3078bd35; S=0x3078be41; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x3078be91
- (id)initWithCatalogItem:(id)catalogItem;	// 0x3078c015
- (void)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x3078bd45
- (id)controlFactory;	// 0x3078be21
- (id)dataAtIndex:(long)index;	// 0x3078bf39
- (long)dataCount;	// 0x3078be01
- (void)dealloc;	// 0x3078bfcd
- (id)hashForDataAtIndex:(long)index;	// 0x3078bec5
// converted property getter: - (BOOL)isOrderReversed;	// 0x3078bd35
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x3078be41
@end
