/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDatabaseManager : NSObject {
}
+ (void)didFinishLastTransaction;	// 0x33fcfb85
+ (void)endBackgroundTask;	// 0x33fcfb99
+ (void)removeEmptyDatabaseFiles;	// 0x33fc1d3d
+ (void)scheduleEmptyDatabaseRemoval;	// 0x33fc1d1d
+ (id)sharedWebDatabaseManager;	// 0x33ff12c9
+ (void)startBackgroundTask;	// 0x33fcf759
+ (void)willBeginFirstTransaction;	// 0x33fcf745
- (id)init;	// 0x33ff1a95
- (id)databasesWithOrigin:(id)origin;	// 0x33ff1745
- (void)deleteAllDatabases;	// 0x33ff1481
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x33ff1329
- (BOOL)deleteOrigin:(id)origin;	// 0x33ff1459
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x33ff1491
- (id)origins;	// 0x33ff18e9
@end
