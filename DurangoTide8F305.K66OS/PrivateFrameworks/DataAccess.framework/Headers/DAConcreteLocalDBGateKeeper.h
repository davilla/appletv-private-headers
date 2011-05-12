/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSString, NSMutableDictionary;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 68 = 0x44
	NSMutableDictionary *_refreshingWaiters;	// 72 = 0x48
	NSMutableDictionary *_failedWaiters;	// 76 = 0x4c
	NSMutableDictionary *_restrictedWaiters;	// 80 = 0x50
}
- (id)init;	// 0x3024402d
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x30244acd
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x30243819
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x30244609
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x30245ac9
- (void)_reloadBabysitterProperties;	// 0x30244d99
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x302447a9
- (void)_sendAllClearNotifications;	// 0x30246811
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x3024457d
- (void)dealloc;	// 0x30243b65
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x302437cd
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x30246585
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x30245f51
- (void)setBookmarksLockHolder:(id)holder;	// 0x30243a75
- (void)setContactsLockHolder:(id)holder;	// 0x30243b29
- (void)setEventsLockHolder:(id)holder;	// 0x30243aed
- (void)setNotesLockHolder:(id)holder;	// 0x30243ab1
- (id)stateString;	// 0x302454f5
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x30245719
@end

