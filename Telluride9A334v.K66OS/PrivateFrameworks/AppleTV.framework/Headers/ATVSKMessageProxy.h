/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVSKMessageProxy : NSObject {
}
+ (id)sharedInstance;	// 0x3332d7dd
- (void)_addPaymentRequest:(id)request userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332da65
- (void)_cancelStoreKitRequest:(id)request userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332dab9
- (void)_checkInPaymentClient:(id)paymentClient userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332db0d
- (void)_checkOutPaymentClient:(id)client userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332db61
- (void)_finishPayment:(id)payment userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332dbb5
- (void)_requestStoreKitProducts:(id)products userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332dc09
- (void)_restoreStoreKitCompletedTransactions:(id)transactions userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x3332dc5d
- (id)currentClientIdentity;	// 0x3332dcb1
- (BOOL)doesServerExist;	// 0x3332da61
- (BOOL)postNotificationName:(id)name userInfo:(id)info toBundleIdentifier:(id)bundleIdentifier;	// 0x3332d919
- (BOOL)sendMessageName:(id)name userInfo:(id)info;	// 0x3332d95d
@end
