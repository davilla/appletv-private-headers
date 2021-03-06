/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, SYDClient;

@interface SYDRemotePreferencesSource : NSObject {
@private
	int _generationCount;	// 4 = 0x4
	int _lastGenerationFromDisk;	// 8 = 0x8
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
@property(readonly, assign) unsigned char isInitialSync;	// G=0x33da459d; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x33da45c9
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x33da45bd
+ (void)noteAccountChanges:(id)changes;	// 0x33da6309
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x33da4c91
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x33da60f1
- (void)_cachePlistFromDisk;	// 0x33da5801
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x33da45d5
- (long)configurationValueForKey:(CFStringRef)key;	// 0x33da4e55
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x33da46a5
- (CFDictionaryRef)copyDictionary;	// 0x33da50bd
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x33da5271
- (CFArrayRef)copyKeyList;	// 0x33da51f1
- (void)dealloc;	// 0x33da6005
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x33da4b19
- (void)finalize;	// 0x33da4f79
- (long)generationCount;	// 0x33da45ad
- (void *)getValueForKey:(CFStringRef)key;	// 0x33da5fb9
- (unsigned char)hasExternalChanges;	// 0x33da49fd
// converted property getter: - (unsigned char)isInitialSync;	// 0x33da459d
- (long)maximumDataLengthPerKey;	// 0x33da4861
- (long)maximumKeyCount;	// 0x33da4829
- (long)maximumKeyLength;	// 0x33da4845
- (long)maximumTotalDataLength;	// 0x33da487d
- (void)registerForSynchronizedDefaults;	// 0x33da5035
- (void)scheduleRemoteSynchronization;	// 0x33da579d
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x33da5dfd
- (unsigned char)synchronize;	// 0x33da49e5
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x33da5455
- (void)unregisterForSynchronizedDefaults;	// 0x33da4b91
- (void)updateConfiguration;	// 0x33da4bd9
@end

