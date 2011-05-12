/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

@interface EKWatchdog : NSObject {
@private
	double _timeout;	// 4 = 0x4
	NSString *_identifier;	// 12 = 0xc
	dispatch_source_s *_timer;	// 16 = 0x10
}
+ (void)executeWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x3346f479
- (id)initWithTimeout:(double)timeout identifier:(id)identifier;	// 0x334b2b25
- (id)initWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x334b2b3d
- (void)dealloc;	// 0x334b2bdd
- (void)invalidate;	// 0x334b2bc5
- (void)start;	// 0x334b2c3d
@end

