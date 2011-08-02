/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSOperation.h> // Unknown library

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCScheduleSystemWakeOperation : NSOperation {
@private
	BOOL _scheduleOrCancel;	// 12 = 0xc
	NSDate *_wakeDate;	// 16 = 0x10
	NSString *_serviceIdentifier;	// 20 = 0x14
	void *_unqiueIdentifier;	// 24 = 0x18
}
- (id)initForScheduledWake:(BOOL)scheduledWake wakeDate:(id)date serviceIdentifier:(id)identifier uniqueIdentifier:(void *)identifier4;	// 0x30630c01
- (void)dealloc;	// 0x30630ba5
- (void)main;	// 0x30630c89
@end

