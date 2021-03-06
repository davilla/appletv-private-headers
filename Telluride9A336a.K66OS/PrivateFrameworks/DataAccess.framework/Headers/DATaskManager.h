/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableSet, DAAccount, NSMutableArray;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(assign) DAAccount *account;	// G=0x345fa0d9; S=0x345fa1a5; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x345f98e9; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x345fe109; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x345f9555; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x345fe119; @synthesize=_queuedTasks
- (id)init;	// 0x345e87d9
- (id)initWithAccount:(id)account;	// 0x345f98f9
- (void)_cancelTasksWithReason:(int)reason;	// 0x345fdc11
- (id)_getHeldIndependentTasks;	// 0x345fdfc1
- (id)_getIndependentTasks;	// 0x345fdf71
- (id)_getModalHeldIndependentTasks;	// 0x345fe011
- (id)_getQueuedExclusiveTasks;	// 0x345fdf21
- (id)_getQueuedModalTasks;	// 0x345fe0b1
- (id)_getQueuedTasks;	// 0x345fe061
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x345fb0cd
- (void)_makeStateTransition;	// 0x345fcdfd
- (void)_performTask:(id)task;	// 0x345fc8a5
- (void)_populateVersionDescriptions;	// 0x345f9ff1
- (void)_reactivateHeldTasks;	// 0x345fcb95
- (void)_releasePowerAssertionForTask:(id)task;	// 0x345fdeb5
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x345fc989
- (void)_retainPowerAssertionForTask:(id)task;	// 0x345fde21
- (void)_schedulePerformTask:(id)task;	// 0x345fdb85
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x345fdadd
- (void)_scheduleStartModal:(id)modal;	// 0x345fdba5
- (void)_startModal:(id)modal;	// 0x345fcab1
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x345fafe5
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x345fb025
- (BOOL)_useFakeDescriptions;	// 0x345fa07d
- (void)_useOpportunisticSocketsAgain;	// 0x345faf6d
- (id)_version;	// 0x345fa055
// declared property getter: - (id)account;	// 0x345fa0d9
- (id)accountID;	// 0x345fa2b1
- (id)accountPersistentUUID;	// 0x345fa2d1
// declared property getter: - (id)activeModalTask;	// 0x345f98e9
// declared property getter: - (id)activeQueuedTask;	// 0x345fe109
// declared property getter: - (id)allTasks;	// 0x345f9555
- (void)cancelAllTasks;	// 0x345faba5
- (void)cancelTask:(id)task;	// 0x345fab91
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x345fab31
- (void)dealloc;	// 0x345f99d9
- (id)deviceID;	// 0x345fa0d5
- (id)deviceType;	// 0x345fa081
- (id)identityPersist;	// 0x345fa271
- (id)password;	// 0x345fa22d
- (int)port;	// 0x345fa1ed
// declared property getter: - (id)queuedTasks;	// 0x345fe119
- (id)scheme;	// 0x345fa291
- (id)server;	// 0x345fa20d
// declared property setter: - (void)setAccount:(id)account;	// 0x345fa1a5
- (void)shutdown;	// 0x345fac51
- (id)stateString;	// 0x345fadb9
- (void)submitExclusiveTask:(id)task;	// 0x345fa2f1
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x345fa305
- (void)submitIndependentTask:(id)task;	// 0x345fa619
- (void)submitQueuedTask:(id)task;	// 0x345fa88d
- (void)taskDidFinish:(id)task;	// 0x345fb249
- (void)taskEndModal:(id)modal;	// 0x345fc591
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x345fe101
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x345fe105
- (void)taskRequestModal:(id)modal;	// 0x345fc059
- (BOOL)useSSL;	// 0x345fa24d
- (id)user;	// 0x345fa1cd
- (id)userAgent;	// 0x345fa085
@end

