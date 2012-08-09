/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"

@class NSMutableDictionary, NSMutableSet, NSCountedSet;

@interface DAPowerAssertionManager : NSObject {
	NSCountedSet *_contexts;	// 4 = 0x4
	NSMutableDictionary *_groupIdentifierToContexts;	// 8 = 0x8
	CFDictionaryRef _contextToGroupIdentifier;	// 12 = 0xc
	NSMutableSet *_heldAsideGroupIdentifiers;	// 16 = 0x10
	NSCountedSet *_heldAsideContexts;	// 20 = 0x14
	CFDictionaryRef _contextToPowerAssertionRef;	// 24 = 0x18
}
+ (id)sharedPowerAssertionManager;	// 0x3365e4d9
+ (void)vendDaemons:(Class)daemons;	// 0x3365e4c9
- (id)init;	// 0x3365e2c9
- (void)_releaseAssertionForContext:(id)context;	// 0x3365f7d1
- (void)_retainAssertionForContext:(id)context;	// 0x3365f6a1
- (void)dealloc;	// 0x3365e40d
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3365efad
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x3365e5ed
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3365f325
- (void)releasePowerAssertion:(id)assertion;	// 0x3365eb51
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x3365e769
- (id)stateString;	// 0x3365ee9d
@end
