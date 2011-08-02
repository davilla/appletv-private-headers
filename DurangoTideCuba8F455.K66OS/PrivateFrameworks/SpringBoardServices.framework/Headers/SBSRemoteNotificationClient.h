/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSRemoteNotificationClient : NSObject {
}
+ (int)enabledRemoteNotificationTypes;	// 0x31ec47b9
+ (id)getPendingNotificationUserInfo;	// 0x31ec47d5
+ (void)getSupportedTypes:(id *)types enabledTypes:(id *)types2;	// 0x31ec48c9
+ (BOOL)hasRegisteredBundleIdentifiers;	// 0x31ec48a5
+ (BOOL)isSystemwideEnabled;	// 0x31ec486d
+ (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x31ec47a5
+ (void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;	// 0x31ec49f5
+ (void)setSystemwideEnabled:(BOOL)enabled;	// 0x31ec4891
@end

