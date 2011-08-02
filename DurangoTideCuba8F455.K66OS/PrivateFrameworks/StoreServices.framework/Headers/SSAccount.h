/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSLock, NSNumber;

@interface SSAccount : NSObject <NSCopying> {
@private
	int _accountKind;	// 4 = 0x4
	NSString *_accountName;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	BOOL _active;	// 16 = 0x10
	NSString *_creditsString;	// 20 = 0x14
	BOOL _demo;	// 24 = 0x18
	NSLock *_lock;	// 28 = 0x1c
	NSString *_secureToken;	// 32 = 0x20
	BOOL _socialEnabled;	// 36 = 0x24
	NSNumber *_uniqueIdentifier;	// 40 = 0x28
}
@property(assign) int accountKind;	// G=0x3272b5c5; S=0x3272b2c9; 
@property(copy) NSString *accountName;	// G=0x3272b565; S=0x3272b259; 
@property(assign) int accountScope;	// G=0x3272b521; S=0x3272b215; 
@property(assign, getter=isActive) BOOL active;	// G=0x3272b47d; S=0x3272b1d1; 
@property(readonly, assign, getter=isAuthenticated) BOOL authenticated;	// G=0x3272b455; 
@property(copy) NSString *creditsString;	// G=0x3272b4c1; S=0x3272b161; 
@property(assign, getter=isDemoAccount) BOOL demoAccount;	// G=0x3272b36d; S=0x3272b11d; 
@property(copy) NSString *secureToken;	// G=0x3272b30d; S=0x3272b0ad; 
@property(assign, getter=isSocialEnabled) BOOL socialEnabled;	// G=0x3272b411; S=0x3272b069; 
@property(retain) NSNumber *uniqueIdentifier;	// G=0x3272b3b1; S=0x3272aff9; 
- (id)init;	// 0x3272bba9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3272b7dd
// declared property getter: - (int)accountKind;	// 0x3272b5c5
// declared property getter: - (id)accountName;	// 0x3272b565
// declared property getter: - (int)accountScope;	// 0x3272b521
- (id)copyPropertyListEncoding;	// 0x3272b991
- (id)copyWithZone:(NSZone *)zone;	// 0x3272b6bd
// declared property getter: - (id)creditsString;	// 0x3272b4c1
- (void)dealloc;	// 0x3272bb19
- (id)description;	// 0x3272b609
// declared property getter: - (BOOL)isActive;	// 0x3272b47d
// declared property getter: - (BOOL)isAuthenticated;	// 0x3272b455
// declared property getter: - (BOOL)isDemoAccount;	// 0x3272b36d
// declared property getter: - (BOOL)isSocialEnabled;	// 0x3272b411
- (void)resetTransientData;	// 0x3272bc05
// declared property getter: - (id)secureToken;	// 0x3272b30d
// declared property setter: - (void)setAccountKind:(int)kind;	// 0x3272b2c9
// declared property setter: - (void)setAccountName:(id)name;	// 0x3272b259
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x3272b215
// declared property setter: - (void)setActive:(BOOL)active;	// 0x3272b1d1
// declared property setter: - (void)setCreditsString:(id)string;	// 0x3272b161
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x3272b11d
// declared property setter: - (void)setSecureToken:(id)token;	// 0x3272b0ad
// declared property setter: - (void)setSocialEnabled:(BOOL)enabled;	// 0x3272b069
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x3272aff9
// declared property getter: - (id)uniqueIdentifier;	// 0x3272b3b1
@end

