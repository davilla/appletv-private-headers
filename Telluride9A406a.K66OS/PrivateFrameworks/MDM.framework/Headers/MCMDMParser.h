/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import <MCTunnelParser.h> // Unknown library

@class NSString, MCMDMServer;

@interface MCMDMParser : MCTunnelParser {
@private
	NSString *_managingProfileIdentifier;	// 4 = 0x4
	MCMDMServer *_server;	// 8 = 0x8
	BOOL _isChaperone;	// 12 = 0xc
}
@property(readonly, assign) BOOL isChaperone;	// G=0x33fda2fd; @synthesize=_isChaperone
@property(assign, nonatomic) MCMDMServer *server;	// G=0x33fda30d; S=0x33fda31d; @synthesize=_server
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier;	// 0x33fdf30d
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier isChaperone:(BOOL)chaperone;	// 0x33fda32d
- (id)_allCommands;	// 0x33fdf125
- (id)_allSettingsItems;	// 0x33fdf0f9
- (id)_appStoreDisabledError;	// 0x33fdad69
- (BOOL)_appStoreEnabled;	// 0x33fdadc9
- (id)_applyRedemptionCode:(id)code;	// 0x33fda869
- (id)_availableCommandsWhileLocked;	// 0x33fdf151
- (id)_certificateList:(id)list;	// 0x33fdc899
- (id)_clearPasscode:(id)passcode;	// 0x33fddb69
- (id)_deviceInformationWithRequest:(id)request accessRights:(int)rights;	// 0x33fdd429
- (id)_deviceLock:(id)lock;	// 0x33fddd95
- (id)_eraseDevice:(id)device;	// 0x33fdd9dd
- (id)_installApplication:(id)application;	// 0x33fda9cd
- (id)_installProfile:(id)profile accessRights:(int)rights;	// 0x33fdbba9
- (id)_installProvisioningProfile:(id)profile;	// 0x33fdc5dd
- (id)_installedApplicationList:(id)list;	// 0x33fdc09d
- (id)_invalidRequestTypeError:(id)error;	// 0x33fdf261
- (BOOL)_isProfileIdentifierManaged:(id)managed;	// 0x33fdc559
- (BOOL)_isProvisioningProfileUUIDManaged:(id)managed;	// 0x33fdc4d5
- (id)_managedApplicationList:(id)list;	// 0x33fda5b5
- (id)_notAuthorizedError;	// 0x33fdf201
- (void)_performQuery:(id)query withResultDictionary:(id)resultDictionary;	// 0x33fdcc71
- (id)_performSetDataRoaming:(id)roaming;	// 0x33fdb2e5
- (id)_performSetVoiceRoaming:(id)roaming;	// 0x33fdb25d
- (id)_performSetWallpaper:(id)wallpaper;	// 0x33fdb36d
- (id)_performSetting:(id)setting;	// 0x33fdb0fd
- (id)_processRequest:(id)request withAccessRights:(int)accessRights;	// 0x33fde61d
- (id)_profileList:(id)list;	// 0x33fdddc9
- (id)_provisioningProfileList:(id)list;	// 0x33fdc689
- (id)_removeApplication:(id)application;	// 0x33fda395
- (id)_removeProfile:(id)profile;	// 0x33fdba01
- (id)_removeProvisioningProfile:(id)profile;	// 0x33fdc3a5
- (id)_requestUnlockToken:(id)token;	// 0x33fddad5
- (id)_restrictions:(id)restrictions;	// 0x33fdbd75
- (id)_securityInfo:(id)info;	// 0x33fdb7c1
- (id)_settings:(id)settings accessRights:(int)rights;	// 0x33fdae15
- (BOOL)_validateSetting:(id)setting accessRights:(int)rights outError:(id *)error;	// 0x33fdb4c9
- (void)dealloc;	// 0x33fdf2c1
// declared property getter: - (BOOL)isChaperone;	// 0x33fda2fd
- (id)malformedRequestErrorResult;	// 0x33fdf17d
- (id)processRequest:(id)request withAccessRights:(int)accessRights;	// 0x33fde9d9
// declared property getter: - (id)server;	// 0x33fda30d
// declared property setter: - (void)setServer:(id)server;	// 0x33fda31d
@end
