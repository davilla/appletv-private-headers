/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <BasicAccount.h> // Unknown library
#import "ASDynamicAccountClassLoader.h"

@class NSLock, ACAccountStore, NSOperationQueue, ACAccount, NSString, NSArray, NSDictionary;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
	NSString *_cachedPassword;	// 24 = 0x18
	NSString *_cachedToken;	// 28 = 0x1c
	NSString *_cachedCommerceToken;	// 32 = 0x20
	NSString *_cachedFMIPToken;	// 36 = 0x24
	NSOperationQueue *_requesterQueue;	// 40 = 0x28
	NSLock *_tokenLock;	// 44 = 0x2c
	NSLock *_passwordLock;	// 48 = 0x30
	NSLock *_fmipTokenLock;	// 52 = 0x34
	NSString *_appleIDAccountIdentifier;	// 56 = 0x38
	ACAccountStore *_accountStore;	// 60 = 0x3c
	ACAccount *_appleIDAccount;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x34cdc201; 
@property(readonly, retain) ACAccount *appleIDAccount;	// G=0x34cdb8b9; converted property
@property(readonly, assign, nonatomic) NSString *appleIDAccountIdentifier;	// G=0x34cdbb61; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x34cdc0bd; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x34cdbbb1; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x34cdc05d; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x34cdc025; 
@property(readonly, assign, nonatomic) NSString *fmipToken;	// G=0x34cdbe11; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x34cdc041; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x34cdc245; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x34cdc1ad; 
@property(copy, nonatomic) NSString *password;	// G=0x34cdb25d; S=0x34ce1bad; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x34cdc009; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x34cdc079; S=0x34cdc0d9; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x34cdc149; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x34cdc165; 
@property(readonly, assign, nonatomic) NSString *protocolVersion;	// G=0x34cdbfed; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x34cdc319; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x34cdc405; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x34cdc46d; 
@property(copy, nonatomic) NSString *username;	// G=0x34cdb1ad; S=0x34cdb1cd; 
+ (id)accountTypeString;	// 0x34cdaf35
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x34cdaaf1
+ (id)basicAccountProperties;	// 0x34cdaf65
+ (id)classicAccountTypeString;	// 0x34cdaf4d
+ (id)configuredSyncAccountName;	// 0x34cdf7b9
+ (id)dataclassesBoundToPrimaryAccount;	// 0x34cdf925
+ (id)dataclassesBoundToSingleAccount;	// 0x34cdfa0d
+ (id)dataclassesBoundToSyncAccount;	// 0x34cdf9b1
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x34cdf6f9
+ (BOOL)isAOSEnabled;	// 0x34cdfad5
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x34ce1b55
+ (id)propertiesWhichRequireValidation;	// 0x34ce1b09
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x34cdfaf9
+ (id)supportedDataclasses;	// 0x34cdaf95
- (id)initWithProperties:(id)properties;	// 0x34cdab8d
- (void).cxx_destruct;	// 0x34ce1bbd
- (id)_accountStore;	// 0x34cdb04d
- (void)_accountStoreChanged:(id)changed;	// 0x34cdaf01
- (id)_createNewAppleIDAccount;	// 0x34cdb385
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x34cdfbed
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x34ce0005
- (id)_mailChildAccountProperties;	// 0x34cdfe6d
- (void)_migrateMobileMeMailChildAccount;	// 0x34ce0539
- (void)_performiCloudMigration;	// 0x34ce07f1
- (BOOL)_removeChildAccountsOfType:(id)type;	// 0x34ce0f1d
- (BOOL)_removeChildAccountsOfTypes:(id)types;	// 0x34ce0f69
- (BOOL)_requestAccessToAppleIDAccount;	// 0x34cdb6a1
- (void)_setFMIPToken:(id)token;	// 0x34cdfde9
- (void)_setToken:(id)token;	// 0x34cdfd49
- (void)_updateAccountRequestWithHandler:(id)handler;	// 0x34cdcc21
- (id)accountFirstDisplayAlert;	// 0x34cde9ad
- (id)accountFooterButton;	// 0x34cde949
- (id)accountFooterText;	// 0x34cde8e5
// declared property getter: - (int)accountServiceType;	// 0x34cdc201
- (void)addChildAccount:(id)account;	// 0x34ce1101
// converted property getter: - (id)appleIDAccount;	// 0x34cdb8b9
// declared property getter: - (id)appleIDAccountIdentifier;	// 0x34cdbb61
// declared property getter: - (id)appleIDAliases;	// 0x34cdc0bd
// declared property getter: - (id)authToken;	// 0x34cdbbb1
- (void)authenticateWithHandler:(id)handler;	// 0x34cdce1d
- (BOOL)becomeConfiguredSyncAccount;	// 0x34cdf841
- (void)cancelNetworkActivity;	// 0x34cdd461
- (void)configureAppleIDCerts;	// 0x34ce037d
// declared property getter: - (id)dataclassProperties;	// 0x34cdc05d
- (void)dealloc;	// 0x34cdafb5
- (id)description;	// 0x34cdb0a5
- (id)displayName;	// 0x34cdb135
// declared property getter: - (id)firstName;	// 0x34cdc025
- (BOOL)fixPartialiCloudMigration;	// 0x34ce0591
- (void)flushCachedPassword;	// 0x34cde895
- (void)flushCachedTokens;	// 0x34cde845
// declared property getter: - (id)fmipToken;	// 0x34cdbe11
- (BOOL)isConfiguredSyncAccount;	// 0x34cdfb71
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x34cdc2bd
// declared property getter: - (id)lastName;	// 0x34cdc041
- (void)lookupEmailAddresses:(id)addresses withHandler:(id)handler;	// 0x34cdd295
// declared property getter: - (int)mobileMeAccountStatus;	// 0x34cdc245
- (BOOL)needsEmailConfiguration;	// 0x34cdee95
// declared property getter: - (BOOL)needsRegistration;	// 0x34cdc1ad
- (void)notifyUserOfQuotaDepletion;	// 0x34cdd499
// declared property getter: - (id)password;	// 0x34cdb25d
// declared property getter: - (id)personID;	// 0x34cdc009
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x34cdde7d
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x34cdda2d
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x34cdda15
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x34cdd509
// declared property getter: - (BOOL)primaryAccount;	// 0x34cdc079
// declared property getter: - (id)primaryEmail;	// 0x34cdc149
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x34cdc165
- (id)propertiesForDataclass:(id)dataclass;	// 0x34cdc255
// declared property getter: - (id)protocolVersion;	// 0x34cdbfed
// declared property getter: - (id)provisionedDataclasses;	// 0x34cdc319
- (void)refreshTokensWithHandler:(id)handler;	// 0x34ce183d
- (void)registerWithHandler:(id)handler;	// 0x34cdc891
- (void)removeAppleIDAccount;	// 0x34ce1391
- (void)removeAppleIDCerts;	// 0x34ce04c1
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x34ce11e9
- (void)removePasswordFromKeychain;	// 0x34cde6b5
- (void)removeTokensFromKeychain;	// 0x34cde299
- (void)renewCredentialsForAppleIDWithHandler:(id)handler;	// 0x34ce1561
- (void)resendVerificationEmail:(id)email;	// 0x34cdd141
- (void)saveFMIPTokenInKeychain;	// 0x34cdde91
- (void)savePasswordInKeychain;	// 0x34cde4e5
- (void)saveTokensInKeychain;	// 0x34cde0bd
// declared property getter: - (BOOL)serviceUnavailable;	// 0x34cdc405
// declared property getter: - (id)serviceUnavailableInfo;	// 0x34cdc46d
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x34cdc345
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x34cdf699
// declared property setter: - (void)setPassword:(id)password;	// 0x34ce1bad
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x34cdc0d9
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x34cdc53d
// declared property setter: - (void)setUsername:(id)username;	// 0x34cdb1cd
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x34cdef5d
- (void)signInWithHandler:(id)handler;	// 0x34cdc619
- (id)syncStoreIdentifier;	// 0x34cdf7ed
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x34cdc8a1
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x34cdea11
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x34cdc4d1
// declared property getter: - (id)username;	// 0x34cdb1ad
- (void)verifyCredentialsForAppleIDWithHandler:(id)handler;	// 0x34ce16c5
@end

