/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, __NSHostExtraIvars;

@interface NSHost : NSObject {
@private
	NSArray *names;	// 4 = 0x4
	NSArray *addresses;	// 8 = 0x8
	id reserved;	// 12 = 0xc
}
@property(readonly, retain) NSArray *addresses;	// G=0x35e49919; converted property
@property(readonly, retain) NSArray *names;	// G=0x35e49719; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x35e49a65; S=0x35e49a75; @synthesize
+ (id)currentHost;	// 0x35e48049
+ (void)flushHostCache;	// 0x35e49a61
+ (id)hostWithAddress:(id)address;	// 0x35e480e1
+ (id)hostWithName:(id)name;	// 0x35e48095
+ (BOOL)isHostCacheEnabled;	// 0x35e49a59
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x35e49a5d
- (id)initToResolve:(id)resolve as:(int)as;	// 0x35e47f69
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x35e484e5
- (id)address;	// 0x35e49745
// converted property getter: - (id)addresses;	// 0x35e49919
- (void)blockingResolveUntil:(int)until;	// 0x35e4838d
- (void)dealloc;	// 0x35e499e5
- (id)description;	// 0x35e49959
- (BOOL)isEqualToHost:(id)host;	// 0x35e49465
- (id)localizedName;	// 0x35e49945
- (id)name;	// 0x35e49535
// converted property getter: - (id)names;	// 0x35e49719
// declared property getter: - (id)reserved;	// 0x35e49a65
- (void)resolve:(id)resolve;	// 0x35e4812d
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x35e48c2d
// declared property setter: - (void)setReserved:(id)reserved;	// 0x35e49a75
@end

