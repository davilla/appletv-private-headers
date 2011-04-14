/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
@private
	NSURLCredentialStorageInternal *_internal;	// 4 = 0x4
}
+ (id)sharedCredentialStorage;	// 0x324bf37d
- (id)init;	// 0x324bef9d
- (id)_internalInit;	// 0x324bf3a1
- (id)allCredentials;	// 0x324bf12d
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x324bf0cd
- (void)dealloc;	// 0x324befb5
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x324bf2cd
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x324bf28d
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x324bf24d
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x324bf33d
@end
