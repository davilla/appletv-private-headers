/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class SYDClient, NSMutableDictionary;

@interface SYDRemotePreferencesSource : NSObject {
	long _generationCount;	// 4 = 0x4
	long _lastGenerationFromDisk;	// 8 = 0x8
	CFStringRef preferenceID;	// 12 = 0xc
	CFURLRef urlOnDisk;	// 16 = 0x10
	CFDictionaryRef cache;	// 20 = 0x14
	long long storageChangeCount;	// 24 = 0x18
	long long initialSyncChangeCount;	// 32 = 0x20
	unsigned char isInitialSync;	// 40 = 0x28
	CFSetRef dirtyKeys;	// 44 = 0x2c
	SYDClient *client;	// 48 = 0x30
	CFDictionaryRef configurationDictionary;	// 52 = 0x34
	NSMutableDictionary *externalChanges;	// 56 = 0x38
	id registrationBlock;	// 60 = 0x3c
}
@property(readonly, assign) long generationCount;	// G=0x3306aa31; converted property
@property(readonly, assign) unsigned char isInitialSync;	// G=0x3306a4c1; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x3306aced
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x3306ace1
+ (void)initialize;	// 0x33068fe5
+ (void)noteAccountChanges:(id)changes;	// 0x3306aec1
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x3306acf9
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x3306943d
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared;	// 0x33069461
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared additionalSource:(BOOL)source;	// 0x33069485
- (void)_cachePlistFromDisk;	// 0x33069a85
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x3306902d
- (long)configurationValueForKey:(CFStringRef)key;	// 0x330691bd
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x33069101
- (CFDictionaryRef)copyDictionary;	// 0x3306a8fd
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x3306a4fd
- (CFArrayRef)copyKeyList;	// 0x3306a881
- (void)dealloc;	// 0x330696f1
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x3306a811
- (void)finalize;	// 0x330697dd
// converted property getter: - (long)generationCount;	// 0x3306aa31
- (void *)getValueForKey:(CFStringRef)key;	// 0x33069899
- (unsigned char)hasExternalChanges;	// 0x3306a4d1
// converted property getter: - (unsigned char)isInitialSync;	// 0x3306a4c1
- (long)maximumDataLengthPerKey;	// 0x33069405
- (long)maximumKeyCount;	// 0x330693cd
- (long)maximumKeyLength;	// 0x330693e9
- (long)maximumTotalDataLength;	// 0x33069421
- (void)registerForSynchronizedDefaults;	// 0x3306aa41
- (void)scheduleRemoteSynchronization;	// 0x3306a0e9
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x330698e5
- (unsigned char)synchronize;	// 0x3306a18d
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x3306a1a5
- (void)unregisterForSynchronizedDefaults;	// 0x3306abe5
- (void)updateConfiguration;	// 0x3306ac2d
@end

