/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library


@interface MCKeychain : NSObject {
}
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3472c26d
+ (BOOL)addCertificateToKeychain:(SecCertificate *)keychain;	// 0x3472b909
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x3472bc39
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x3472bc05
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x3472bc8d
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3472bd95
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x3472b959
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x3472bd4d
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x3472b9e1
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x3472c1e1
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x3472ba6d
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x3472bf29
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3472c199
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3472c201
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x3472b891
@end
