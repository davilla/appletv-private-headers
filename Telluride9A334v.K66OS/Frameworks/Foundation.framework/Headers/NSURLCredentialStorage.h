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
+ (id)sharedCredentialStorage;	// 0x306bf7ed
- (id)init;	// 0x306bf7d5
- (id)_internalInit;	// 0x306bfc9d
- (id)allCredentials;	// 0x306bf9d9
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x306bf859
- (void)dealloc;	// 0x306bf789
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x306bfbd5
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x306bfb8d
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x306bfb45
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x306bfc55
@end

