/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVJSObject.h"

@class SKProduct;

__attribute__((visibility("hidden")))
@interface ATVJSSKProduct : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKProduct *_product;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x303ca775; converted property
@property(readonly, assign, nonatomic) SKProduct *product;	// G=0x303ca785; @synthesize=_product
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x303ca2f5
+ (id)productFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x303ca5ad
- (id)init;	// 0x303ca609
- (id)initWithProduct:(id)product context:(OpaqueJSContext *)context;	// 0x303ca64d
- (void)dealloc;	// 0x303ca729
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x303ca775
// declared property getter: - (id)product;	// 0x303ca785
@end
