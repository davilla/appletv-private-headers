/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSNumber;

@interface SSRentalCheckinRequest : SSRequest {
@private
	NSNumber *_accountIdentifier;	// 36 = 0x24
	NSNumber *_rentalKeyIdentifier;	// 40 = 0x28
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x33ca5305; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x33ca533d; 
- (id)init;	// 0x33ca504d
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x33ca5061
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33ca5261
// declared property getter: - (id)accountIdentifier;	// 0x33ca5305
- (id)copyPropertyListEncoding;	// 0x33ca51e5
- (void)dealloc;	// 0x33ca5185
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x33ca5375
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x33ca53d1
// declared property getter: - (id)rentalKeyIdentifier;	// 0x33ca533d
@end

