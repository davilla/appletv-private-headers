/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKProductsResponse : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *invalidProductIdentifiers;	// G=0x33bbca21; 
@property(readonly, assign, nonatomic) NSArray *products;	// G=0x33bbca65; 
- (id)init;	// 0x33bbc969
- (void)dealloc;	// 0x33bbc9cd
// declared property getter: - (id)invalidProductIdentifiers;	// 0x33bbca21
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x33bb3d75
// declared property getter: - (id)products;	// 0x33bbca65
@end
