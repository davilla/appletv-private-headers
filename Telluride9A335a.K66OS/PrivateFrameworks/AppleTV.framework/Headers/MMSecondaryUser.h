/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MMCredential.h"
#import <NSObject.h> // Unknown library

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
@property(readonly, retain) NSString *name;	// G=0x343b319d; converted property
@property(readonly, retain) NSString *owner;	// G=0x343b31bd; converted property
@property(readonly, retain) NSString *password;	// G=0x343b31ad; converted property
+ (id)secondaryUserWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x343b32a5
- (id)initWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x343b31dd
- (id)applicationID;	// 0x343b31cd
- (void)dealloc;	// 0x343b32f1
// converted property getter: - (id)name;	// 0x343b319d
// converted property getter: - (id)owner;	// 0x343b31bd
// converted property getter: - (id)password;	// 0x343b31ad
@end

