/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSManagedObject.h> // Unknown library

@class NSData, NSNumber, NSDate, MicroPaymentClient, NSString;

__attribute__((visibility("hidden")))
@interface MicroPayment : NSManagedObject {
@private
	NSString *_temporaryIdentifier;	// 48 = 0x30
	BOOL _transientFailed;	// 52 = 0x34
}
@property(retain, nonatomic) NSString *actionParams;	// S=0x367fef19; @dynamic
@property(retain, nonatomic) MicroPaymentClient *client;	// @dynamic
@property(retain, nonatomic) NSData *errorData;	// @dynamic
@property(retain, nonatomic) NSDate *insertDate;	// @dynamic
@property(readonly, assign, nonatomic) NSString *matchingIdentifier;	// G=0x367ffc61; 
@property(retain, nonatomic) NSDate *originalPurchaseDate;	// @dynamic
@property(retain, nonatomic) NSString *originalTransactionIdentifier;	// @dynamic
@property(retain, nonatomic) NSString *productIdentifier;	// @dynamic
@property(retain, nonatomic) NSDate *purchaseDate;	// @dynamic
@property(retain, nonatomic) NSNumber *quantity;	// @dynamic
@property(readonly, assign, nonatomic, getter=isReady) BOOL ready;	// G=0x367ffc09; 
@property(retain, nonatomic) NSData *receiptData;	// @dynamic
@property(retain, nonatomic) NSData *requestData;	// @dynamic
@property(retain, nonatomic) NSNumber *state;	// @dynamic
@property(retain, nonatomic) NSString *transactionIdentifier;	// S=0x367ffd75; @dynamic
@property(assign, nonatomic, getter=isTransientFailed) BOOL transientFailed;	// G=0x367ffe71; S=0x367ffe81; @synthesize=_transientFailed
@property(retain, nonatomic) NSNumber *userDSID;	// @dynamic
+ (id)paymentEntityFromContext:(id)context;	// 0x367ff0b1
+ (id)refundEntityFromContext:(id)context;	// 0x367ff105
+ (BOOL)responseIsValid:(id)valid;	// 0x367ff159
- (int)_clientStateForServerState:(int)serverState;	// 0x367ffe15
- (id)_temporaryIdentifier;	// 0x367ffe39
- (void)awakeFromInsert;	// 0x367ffd15
- (id)copyProcessingOperations;	// 0x367ff1a5
- (id)copyPropertyListRepresentation;	// 0x367ff399
- (void)dealloc;	// 0x367ff05d
- (BOOL)isEqualToResponse:(id)response compareAllFields:(BOOL)fields;	// 0x367ff65d
// declared property getter: - (BOOL)isReady;	// 0x367ffc09
// declared property getter: - (BOOL)isTransientFailed;	// 0x367ffe71
// declared property getter: - (id)matchingIdentifier;	// 0x367ffc61
- (void)mergeValuesFromResponse:(id)response;	// 0x367ff84d
// declared property setter: - (void)setActionParams:(id)params;	// 0x367fef19
- (void)setFailedWithError:(id)error;	// 0x367ffc95
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x367ffd75
// declared property setter: - (void)setTransientFailed:(BOOL)failed;	// 0x367ffe81
@end
