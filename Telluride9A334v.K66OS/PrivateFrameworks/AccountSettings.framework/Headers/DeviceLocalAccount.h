/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "BasicAccount.h"
#import "AccountCreationProtocol.h"


@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}
+ (id)_identifier;	// 0x32d4c09d
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x32d4c0e1
+ (id)basicAccountProperties;	// 0x32d4c145
+ (BOOL)isTetheredSyncingDataclass:(id)dataclass;	// 0x32d4c339
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;	// 0x32d4c389
+ (id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;	// 0x32d4c4c5
+ (id)tetheredSourceForDataClass:(id)dataClass;	// 0x32d4c331
+ (id)typeString;	// 0x32d4c659
- (id)displayName;	// 0x32d4c0a9
- (id)identifier;	// 0x32d4c091
- (id)syncStoreIdentifier;	// 0x32d4c0d1
@end

