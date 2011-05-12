/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSMutableIndexSet, NSArray;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest {
@private
	NSMutableIndexSet *_acknowledgedPurchases;	// 36 = 0x24
	NSArray *_purchases;	// 40 = 0x28
	BOOL _shouldValidatePurchases;	// 44 = 0x2c
}
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) NSArray *purchases;	// G=0x324c5c95; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x324c5ae1; S=0x324c5af1; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x324c5cc5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324c6265
- (id)initWithPurchases:(id)purchases;	// 0x324c5f49
- (void)_purchaseFailedNotification:(id)notification;	// 0x324c63a9
- (void)_purchaseFinishedNotification:(id)notification;	// 0x324c5ba5
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x324c5fa5
- (void)_sendError:(id)error forPurchase:(id)purchase;	// 0x324c5b01
- (id)copyPropertyListEncoding;	// 0x324c607d
- (void)dealloc;	// 0x324c5eed
- (void)handleDaemonExit;	// 0x324c5e15
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324c6381
// declared property getter: - (id)purchases;	// 0x324c5c95
- (void)registerForDaemonNotifications;	// 0x324c5d6d
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x324c5af1
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x324c5ae1
- (void)unregisterForDaemonNotifications;	// 0x324c5cdd
@end

