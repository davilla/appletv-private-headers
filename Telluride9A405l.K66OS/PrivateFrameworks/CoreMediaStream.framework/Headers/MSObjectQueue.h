/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library


@interface MSObjectQueue : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	CFDictionaryRef _statements;	// 8 = 0x8
}
@property(readonly, assign) long long count;	// G=0x36fef005; 
- (id)initWithPath:(id)path;	// 0x36feec15
- (id)_objectWrapperFromQueueQuery:(sqlite3_stmt *)queueQuery outSize:(long long *)size;	// 0x36fef2c1
- (sqlite3_stmt *)_statementLabel:(id)label query:(const char *)query;	// 0x36feef4d
- (id)allObjectWrappersMaxCount:(long long)count;	// 0x36fef3d1
- (void)appendObjectWrappers:(id)wrappers;	// 0x36fef04d
- (void)commitErrorCountsForObjectWrappers:(id)objectWrappers;	// 0x36fefb25
- (void)commitObjectsWrappers:(id)wrappers;	// 0x36fefd55
// declared property getter: - (long long)count;	// 0x36fef005
- (void)dealloc;	// 0x36feee91
- (id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;	// 0x36fef57d
- (void)removeObjectWrappersFromQueue:(id)queue;	// 0x36fef959
- (id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;	// 0x36fef729
@end

