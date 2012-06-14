/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
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
+ (id)defaultContext;	// 0x36755c6d
+ (void)initialize;	// 0x367559c5
- (id)initWithMaxTasks:(int)maxTasks;	// 0x36755a29
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x36755a3d
- (void)_addManagerObserverForTask:(id)task;	// 0x367560c1
- (void)_cancelAllTasks;	// 0x367565f9
- (void)_removeManagerObserverForTask:(id)task;	// 0x36756119
- (void)_scheduleNextTask:(id)task;	// 0x36756299
- (void)_taskComplete:(id)complete;	// 0x36756165
- (void)_threadDeath:(id)death;	// 0x36756499
- (void)cancelTask:(id)task;	// 0x36755f1d
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x36755c7d
- (void)dealloc;	// 0x36755b65
- (id)description;	// 0x36755c05
- (void)scheduleTask:(id)task;	// 0x36755db5
@end
