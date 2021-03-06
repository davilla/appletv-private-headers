/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDatabaseManager : NSObject {
}
+ (void)didFinishLastTransaction;	// 0x3165f739
+ (void)endBackgroundTask;	// 0x3165f749
+ (void)removeEmptyDatabaseFiles;	// 0x31652261
+ (void)scheduleEmptyDatabaseRemoval;	// 0x31652025
+ (id)sharedWebDatabaseManager;	// 0x31681941
+ (void)startBackgroundTask;	// 0x3165f521
+ (void)willBeginFirstTransaction;	// 0x3165f511
- (id)init;	// 0x316819a1
- (id)databasesWithOrigin:(id)origin;	// 0x31681b85
- (void)deleteAllDatabases;	// 0x31681fd9
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x31682049
- (BOOL)deleteOrigin:(id)origin;	// 0x31682021
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x31681d15
- (id)origins;	// 0x316819d9
@end

