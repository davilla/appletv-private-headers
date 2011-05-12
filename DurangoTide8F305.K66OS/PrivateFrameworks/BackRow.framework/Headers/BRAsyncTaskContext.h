/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface BRAsyncTaskContext : NSObject {
@private
	int _maxRunningTasks;	// 4 = 0x4
	int _numRunningTasks;	// 8 = 0x8
	NSMutableArray *_taskQueue;	// 12 = 0xc
	NSMutableArray *_allTasks;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
}
+ (id)defaultContext;	// 0x32935da5
+ (void)initialize;	// 0x32914bd5
- (id)initWithMaxTasks:(int)maxTasks;	// 0x32914c2d
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x329ca53d
- (void)_addManagerObserverForTask:(id)task;	// 0x32935f59
- (void)_cancelAllTasks;	// 0x329ca36d
- (void)_removeManagerObserverForTask:(id)task;	// 0x32938349
- (void)_scheduleNextTask:(id)task;	// 0x329cab61
- (void)_taskComplete:(id)complete;	// 0x32938215
- (void)_threadDeath:(id)death;	// 0x329ca64d
- (void)cancelTask:(id)task;	// 0x329ca785
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x329ca8e1
- (void)dealloc;	// 0x329ca4a9
- (id)description;	// 0x329ca43d
- (void)scheduleTask:(id)task;	// 0x32935e21
@end

