/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSError, NSMutableSet;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager, CoreDAVTaskGroupDelegate;

@interface CoreDAVTaskGroup : NSObject {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	double _timeoutInterval;	// 12 = 0xc
	NSMutableSet *_outstandingTasks;	// 20 = 0x14
	BOOL _isCancelling;	// 24 = 0x18
@private
	id<CoreDAVTaskGroupDelegate> _delegate;	// 28 = 0x1c
	id _progressBlock;	// 32 = 0x20
	id _completionBlock;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
}
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x33875d2d; @synthesize=_accountInfoProvider
@property(copy, nonatomic) id completionBlock;	// G=0x33875d1d; S=0x338761fd; @synthesize=_completionBlock
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// G=0x33875cfd; S=0x33875d0d; @synthesize=_delegate
@property(retain, nonatomic) NSError *error;	// G=0x33875ced; S=0x33876229; @synthesize=_error
@property(readonly, assign) NSMutableSet *outstandingTasks;	// G=0x33875cdd; @synthesize=_outstandingTasks
@property(copy, nonatomic) id progressBlock;	// G=0x33875ccd; S=0x33876251; @synthesize=_progressBlock
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x33875cbd; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x338761d1; S=0x338761a5; @synthesize=_timeoutInterval
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x33875fc9
- (void)_tearDownAllTasks;	// 0x33876075
// declared property getter: - (id)accountInfoProvider;	// 0x33875d2d
- (void)bailWithError:(id)error;	// 0x33875ded
- (void)cancelTaskGroup;	// 0x33875dd9
- (void)cancelTasks;	// 0x33875dc5
// declared property getter: - (id)completionBlock;	// 0x33875d1d
- (void)dealloc;	// 0x33875eb1
// declared property getter: - (id)delegate;	// 0x33875cfd
// declared property getter: - (id)error;	// 0x33875ced
- (void)finishCoreDAVTaskGroupWithError:(id)error;	// 0x33875d3d
// declared property getter: - (id)outstandingTasks;	// 0x33875cdd
// declared property getter: - (id)progressBlock;	// 0x33875ccd
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x338761fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33875d0d
// declared property setter: - (void)setError:(id)error;	// 0x33876229
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x33876251
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x338761a5
- (void)startTaskGroup;	// 0x33875e39
- (void)syncAway;	// 0x33875e25
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33875cb9
// declared property getter: - (id)taskManager;	// 0x33875cbd
// declared property getter: - (double)timeoutInterval;	// 0x338761d1
@end
