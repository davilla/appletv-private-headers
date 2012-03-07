/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface MicroPaymentProductsResponse : NSObject {
@private
	NSArray *_expectedIdentifiers;	// 4 = 0x4
	NSArray *_invalidIdentifiers;	// 8 = 0x8
	NSArray *_products;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *expectedIdentifiers;	// G=0x33bde961; S=0x33bde971; @synthesize=_expectedIdentifiers
@property(retain, nonatomic) NSArray *invalidIdentifiers;	// G=0x33bde995; S=0x33bde9a5; @synthesize=_invalidIdentifiers
@property(retain, nonatomic) NSArray *products;	// G=0x33bde9c9; S=0x33bde9d9; @synthesize=_products
- (void)dealloc;	// 0x33bde649
// declared property getter: - (id)expectedIdentifiers;	// 0x33bde961
// declared property getter: - (id)invalidIdentifiers;	// 0x33bde995
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x33bde6dd
// declared property getter: - (id)products;	// 0x33bde9c9
// declared property setter: - (void)setExpectedIdentifiers:(id)identifiers;	// 0x33bde971
// declared property setter: - (void)setInvalidIdentifiers:(id)identifiers;	// 0x33bde9a5
// declared property setter: - (void)setProducts:(id)products;	// 0x33bde9d9
@end
