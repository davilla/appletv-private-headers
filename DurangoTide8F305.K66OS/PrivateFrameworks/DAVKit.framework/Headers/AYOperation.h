/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSThread, NSError, NSLock;
@protocol AYGroup, AYNotificationDelegate;

@interface AYOperation : NSObject {
	id _asyncProxy;	// 4 = 0x4
	NSThread *_currentThread;	// 8 = 0x8
	NSThread *_baseThread;	// 12 = 0xc
	AYOperation *_parentOperation;	// 16 = 0x10
	AYOperation *_mainOperation;	// 20 = 0x14
	AYOperation *_currentChildOperation;	// 24 = 0x18
	id<AYGroup> _group;	// 28 = 0x1c
	NSLock *_operationLock;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	BOOL _operationEnded;	// 40 = 0x28
	BOOL _operationAborted;	// 41 = 0x29
	BOOL _silent;	// 42 = 0x2a
	BOOL _canAbortNow;	// 43 = 0x2b
	BOOL _inAbortProcess;	// 44 = 0x2c
	int _currentMark;	// 48 = 0x30
	void *_reserved;	// 52 = 0x34
	id<AYNotificationDelegate> _notificationDelegate;	// 56 = 0x38
	NSMutableDictionary *_privateInfos;	// 60 = 0x3c
}
@property(readonly, retain) NSThread *baseThread;	// G=0x3008f0d5; converted property
@property(assign) BOOL canAbortNow;	// G=0x3008f181; S=0x3008f4e5; converted property
@property(readonly, assign) int currentMark;	// G=0x3008f11d; converted property
@property(retain) NSError *error;	// G=0x3008f2dd; S=0x3008f30d; converted property
@property(readonly, retain) AYOperation *mainOperation;	// G=0x3008f0b5; converted property
@property(assign) id notificationDelegate;	// G=0x3008f161; S=0x3008f151; converted property
@property(retain) id operationCompanion;	// G=0x3008f7c9; S=0x3008f7e5; converted property
@property(retain) id operationGroup;	// G=0x3008f109; S=0x3008f81d; converted property
@property(readonly, retain) AYOperation *parentOperation;	// G=0x3008f0a5; converted property
@property(assign, getter=isSilent) BOOL silent;	// G=0x3008f13d; S=0x3008f12d; converted property
+ (BOOL)_dispatchNextOperationInQueue;	// 0x300910ed
+ (void)_initCurrentThread;	// 0x300908ed
+ (void)_initMainThread;	// 0x300908b1
+ (void)_lockForAllThreads;	// 0x3008f059
+ (BOOL)_lockWaitingForOperation;	// 0x300906a5
+ (void)_noLockForThread:(id)thread;	// 0x3008f04d
+ (void)_queueOneBlock;	// 0x30091771
+ (void)_setCurrentOperation:(id)operation;	// 0x3008fda5
+ (id)currentOperation;	// 0x3008fe31
+ (void)endAllPendingOperationsOfGroup:(id)group withError:(id)error;	// 0x300900d5
+ (void)initialize;	// 0x3009071d
+ (void)lockOperations;	// 0x3009065d
+ (id)mainThread;	// 0x3008f069
+ (BOOL)popOperation:(id)operation;	// 0x30090401
+ (void)pushInvocation:(id)invocation;	// 0x300904e5
+ (void)unblockAllOperationsForGroup:(id)group;	// 0x300902bd
+ (void)unlockOperations;	// 0x300905f1
- (id)init;	// 0x3008f199
- (id)_currentChildOperation;	// 0x3008f095
- (void)_handleEventRecursively:(id)recursively;	// 0x3008fc8d
- (void)_sendEventToThreadLocked:(id)threadLocked;	// 0x3008fbed
- (void)_setCurrentChildOperation:(id)operation;	// 0x3008f085
- (void)_setCurrentThread:(id)thread;	// 0x3008f075
- (void)_startAbortProcess;	// 0x3008fb39
- (void)abortOperation;	// 0x3008f981
- (id)async;	// 0x3008ff45
// converted property getter: - (id)baseThread;	// 0x3008f0d5
// converted property getter: - (BOOL)canAbortNow;	// 0x3008f181
- (void)clearError;	// 0x3008f4bd
// converted property getter: - (int)currentMark;	// 0x3008f11d
- (void)dealloc;	// 0x30090045
- (void)endOperationWithError:(id)error;	// 0x30090f7d
// converted property getter: - (id)error;	// 0x3008f2dd
- (void)finalizeOperation;	// 0x3008f195
- (BOOL)handleEventInThread:(id)thread;	// 0x3008faed
- (void)handleNotificationOfChildOperation:(id)childOperation notification:(id)notification;	// 0x3008f14d
- (BOOL)hasOperationEnded;	// 0x3008f0f9
- (id)infoForKey:(id)key;	// 0x3008f229
- (BOOL)isAsync;	// 0x3008f0e5
- (BOOL)isRunLoopBased;	// 0x3008f119
// converted property getter: - (BOOL)isSilent;	// 0x3008f13d
- (void)lockOperation;	// 0x3008fd5d
// converted property getter: - (id)mainOperation;	// 0x3008f0b5
- (void)markWithTag:(int)tag;	// 0x3008f7b1
- (void)markWithTag:(int)tag notify:(BOOL)notify;	// 0x3008f719
// converted property getter: - (id)notificationDelegate;	// 0x3008f161
- (void)notifyWithName:(id)name infos:(id)infos;	// 0x3008f54d
// converted property getter: - (id)operationCompanion;	// 0x3008f7c9
// converted property getter: - (id)operationGroup;	// 0x3008f109
- (long long)operationProgress;	// 0x3008f171
- (id)operationThread;	// 0x3008f0c5
- (long long)operationTotal;	// 0x3008f179
- (void)operationWillAbort;	// 0x3008f191
// converted property getter: - (id)parentOperation;	// 0x3008f0a5
- (void)postOperation;	// 0x3008f2b5
- (void)removeInfoForKey:(id)key;	// 0x3008f209
- (void)resetOperation;	// 0x3008f85d
- (void)runOperationWithTimeOut:(unsigned)timeOut;	// 0x30090ca9
- (void)sendEventToThread:(id)thread;	// 0x3008fba5
// converted property setter: - (void)setCanAbortNow:(BOOL)now;	// 0x3008f4e5
// converted property setter: - (void)setError:(id)error;	// 0x3008f30d
- (void)setInfo:(id)info forKey:(id)key;	// 0x3008f249
// converted property setter: - (void)setNotificationDelegate:(id)delegate;	// 0x3008f151
// converted property setter: - (void)setOperationCompanion:(id)companion;	// 0x3008f7e5
// converted property setter: - (void)setOperationGroup:(id)group;	// 0x3008f81d
// converted property setter: - (void)setSilent:(BOOL)silent;	// 0x3008f12d
- (id)syncFor:(id)aFor;	// 0x3008fea9
- (id)synchronous;	// 0x3008fe75
- (void)unlockOperation;	// 0x3008fd15
- (void)waitForOperationToEnd;	// 0x3008f8a9
@end

