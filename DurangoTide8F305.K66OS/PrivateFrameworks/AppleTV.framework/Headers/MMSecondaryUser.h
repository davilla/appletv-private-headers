/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "MMCredential.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMSecondaryUser : NSObject <MMCredential> {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	NSString *_owner;	// 12 = 0xc
	NSString *_app_id;	// 16 = 0x10
	NSString *_user_agent;	// 20 = 0x14
}
@property(readonly, retain) NSString *name;	// G=0x30a0cce9; converted property
@property(readonly, retain) NSString *owner;	// G=0x30a0cd09; converted property
@property(readonly, retain) NSString *password;	// G=0x30a0ccf9; converted property
+ (id)secondaryUserWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x30a0ce8d
- (id)initWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x30a0cde5
- (id)applicationID;	// 0x30a0cd19
- (void)dealloc;	// 0x30a0cd29
// converted property getter: - (id)name;	// 0x30a0cce9
// converted property getter: - (id)owner;	// 0x30a0cd09
// converted property getter: - (id)password;	// 0x30a0ccf9
@end

