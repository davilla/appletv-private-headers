/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;
@protocol BRControlFactory;

@interface BRPhotoProvider : NSObject <BRProvider> {
@private
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x35dccc59; S=0x35dccc19; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x35dccb01
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x35dccb41
// converted property getter: - (id)controlFactory;	// 0x35dccc59
- (id)dataAtIndex:(long)index;	// 0x35dccc89
- (long)dataCount;	// 0x35dccc69
- (void)dealloc;	// 0x35dccbb9
- (id)hashForDataAtIndex:(long)index;	// 0x35dcccd5
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x35dccc19
@end

