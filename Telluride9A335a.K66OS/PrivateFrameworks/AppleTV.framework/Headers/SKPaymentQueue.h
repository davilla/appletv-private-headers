/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKPaymentQueue : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *transactions;	// G=0x34315a25; 
+ (BOOL)canMakePayments;	// 0x343154c9
+ (id)defaultQueue;	// 0x3431548d
- (id)init;	// 0x3431538d
- (void)_addLocalTransactionForPayment:(id)payment;	// 0x34316095
- (void)_applicationBecameActiveNotification:(id)notification;	// 0x34315a69
- (id)_copyRemovalsFromUnmergedIndexSet:(id)unmergedIndexSet;	// 0x343161a9
- (id)_copyTransactionsFromNotification:(id)notification;	// 0x343162b1
- (void)_daemonExited:(id)exited;	// 0x34315a79
- (void)_daemonLaunchedNotification;	// 0x34315aa5
- (void)_mainThreadDaemonExited:(id)exited;	// 0x34315af9
- (void)_notifyObserversAboutChanges:(id)changes;	// 0x34316429
- (void)_notifyObserversAboutRemovals:(id)removals;	// 0x343164e5
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)error;	// 0x343165a1
- (void)_notifyObserversRestoreTransactionsFinished;	// 0x3431665d
- (void)_processUpdates:(id)updates trimUnmatched:(BOOL)unmatched;	// 0x34316719
- (void)_registerForNotifications;	// 0x34316b7d
- (void)_registerForNotificationsIfNeeded;	// 0x34316d55
- (void)_removeLocalTransaction:(id)transaction;	// 0x34316da9
- (void)_restoreTransactionsFailedNotification:(id)notification;	// 0x34315c35
- (void)_restoreTransactionsFinishedNotification:(id)notification;	// 0x34315cb1
- (void)_transactionUpdatedNotification:(id)notification;	// 0x34315ff9
- (void)_transactionsAddedNotification:(id)notification;	// 0x34315cf1
- (void)_transactionsRefreshedNotification:(id)notification;	// 0x34315d39
- (void)_transactionsRemovedNotification:(id)notification;	// 0x34315d81
- (void)_unregisterForNotifications;	// 0x34316e95
- (void)addPayment:(id)payment;	// 0x343154cd
- (void)addTransactionObserver:(id)observer;	// 0x343156d9
- (void)dealloc;	// 0x34315429
- (void)finishTransaction:(id)transaction;	// 0x343157b5
- (void)removeTransactionObserver:(id)observer;	// 0x343158cd
- (void)restoreCompletedTransactions;	// 0x343159a9
// declared property getter: - (id)transactions;	// 0x34315a25
@end

