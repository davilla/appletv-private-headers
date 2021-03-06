/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"


@interface MSPerformanceLogger : MSASModelBase {
}
+ (void)nukeCompletionBlock:(id)block;	// 0x3171f649
+ (id)sharedLogger;	// 0x3171f591
- (id)init;	// 0x3171f81d
- (void)_logSqliteErrorLine:(int)line;	// 0x3171f7d9
- (void)dbQueueDiscardOperation:(id)operation itemGUID:(id)guid;	// 0x3171ff1d
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x3171f875
- (void)discardOperation:(id)operation itemGUID:(id)guid;	// 0x3171ffdd
- (void)startOperation:(id)operation itemGUID:(id)guid;	// 0x3171f9c5
- (void)stopOperation:(id)operation itemGUID:(id)guid;	// 0x3171fc45
- (void)summarizeOperation:(id)operation itemGUID:(id)guid formatBlock:(id)block;	// 0x31720101
@end

