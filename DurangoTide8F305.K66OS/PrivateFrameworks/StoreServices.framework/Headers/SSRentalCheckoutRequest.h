/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest {
@private
	NSNumber *_accountIdentifier;	// 36 = 0x24
	NSNumber *_rentalKeyIdentifier;	// 40 = 0x28
	NSArray *_sinfs;	// 44 = 0x2c
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x324ca439; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x324ca409; 
@property(readonly, assign) NSArray *sinfs;	// G=0x324ca3d9; 
- (id)init;	// 0x324ca469
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x324ca63d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324ca481
- (id)initWithSinfs:(id)sinfs;	// 0x324ca74d
// declared property getter: - (id)accountIdentifier;	// 0x324ca439
- (id)copyPropertyListEncoding;	// 0x324ca545
- (void)dealloc;	// 0x324ca5d1
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324ca7f1
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324ca845
// declared property getter: - (id)rentalKeyIdentifier;	// 0x324ca409
// declared property getter: - (id)sinfs;	// 0x324ca3d9
@end

