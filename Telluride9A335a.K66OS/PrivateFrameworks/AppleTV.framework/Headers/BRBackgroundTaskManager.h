/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSTimer;

@interface BRBackgroundTaskManager : BRSingleton {
@private
	int _numberOfCurrentBackgroundProcesses;	// 4 = 0x4
	double _lastUserActivity;	// 8 = 0x8
	NSTimer *_backgroundProcessSuppressionTimer;	// 16 = 0x10
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 20 = 0x14
}
+ (BOOL)backgroundTasksRunning;	// 0x34275e71
+ (void)finishedBackgroundProcessing;	// 0x34275cf1
+ (void)finishedFileCopy:(id)copy;	// 0x34275e25
+ (void)finishedMediaSyncing;	// 0x34275d6d
+ (void)holdOffBackgroundTasks;	// 0x34275c79
+ (BOOL)mediaSyncInProgress;	// 0x34275dc1
+ (BOOL)okToDoBackgroundProcessing;	// 0x34275ca1
+ (void)setSingleton:(id)singleton;	// 0x34275ed1
+ (id)singleton;	// 0x34275ec1
+ (void)startedFileCopy:(id)copy;	// 0x34275dd9
+ (void)startingBackgroundProcessing;	// 0x34275cc9
+ (void)startingMediaSyncing;	// 0x34275d19
+ (double)timeSinceLastUserAction;	// 0x34275e99
- (id)init;	// 0x34275ee1
- (BOOL)_backgroundTasksRunning;	// 0x342763c1
- (void)_finishedBackgroundProcessing;	// 0x342763ad
- (void)_holdOffBackgroundTasks;	// 0x34275ff1
- (void)_holdOffHeavyBackgroundTasks;	// 0x342760cd
- (BOOL)_okToDoBackgroundProcessing;	// 0x34276251
- (void)_sendResumeBackgroundProcessingNotification;	// 0x342762b5
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x3427634d
- (void)_sendStopBackgroundProcessingNotification;	// 0x34276269
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x34276301
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x3427619d
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x342761d9
- (void)_startingBackgroundProcessing;	// 0x34276399
- (double)_timeSinceLastUserAction;	// 0x342763d9
- (void)_updateActivity:(id)activity;	// 0x3427641d
- (void)dealloc;	// 0x34275f95
@end

