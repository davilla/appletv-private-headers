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
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x3156d795; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x3156d7cd; 
- (id)init;	// 0x3156d4dd
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x3156d4f1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3156d6f1
// declared property getter: - (id)accountIdentifier;	// 0x3156d795
- (id)copyPropertyListEncoding;	// 0x3156d675
- (void)dealloc;	// 0x3156d615
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x3156d805
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x3156d861
// declared property getter: - (id)rentalKeyIdentifier;	// 0x3156d7cd
@end
