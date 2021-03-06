/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class APSConnection, NSData;

@interface AADeviceInfo : NSObject {
	lockdown_connection *connection;	// 4 = 0x4
	APSConnection *_apsConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	NSData *_token;	// 16 = 0x10
	dispatch_semaphore_s *_tokenSema;	// 20 = 0x14
}
+ (id)apnsToken;	// 0x35f6f059
+ (id)clientInfoHeader;	// 0x35f6f0a9
+ (id)infoDictionary;	// 0x35f6ef15
+ (id)osVersion;	// 0x35f6efb9
+ (id)productVersion;	// 0x35f6f2a5
+ (id)serialNumber;	// 0x35f6f009
+ (id)signatureWithDictionary:(id)dictionary;	// 0x35f6ef65
+ (id)udid;	// 0x35f6ef69
- (id)init;	// 0x35f6ee91
- (id)apnsToken;	// 0x35f6f665
- (id)buildVersion;	// 0x35f6f569
- (void)dealloc;	// 0x35f6eed5
- (id)deviceInfoDictionary;	// 0x35f6f2f5
- (id)lockDownValueForKey:(CFStringRef)key;	// 0x35f6f3f5
- (id)mobileMeSetupToken;	// 0x35f6f5d1
- (id)osName;	// 0x35f6f505
- (id)osVersion;	// 0x35f6f42d
- (id)productType;	// 0x35f6f4e5
- (id)productVersion;	// 0x35f6f4c5
- (id)regionCode;	// 0x35f6f5cd
- (id)serialNumber;	// 0x35f6f485
- (id)udid;	// 0x35f6f465
- (id)wifiMacAddress;	// 0x35f6f4a5
@end

