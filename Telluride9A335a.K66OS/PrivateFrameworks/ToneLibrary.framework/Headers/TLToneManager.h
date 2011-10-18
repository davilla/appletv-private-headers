/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

@interface TLToneManager : NSObject {
@private
	NSMutableDictionary *_iTunesTonesByIdentifier;	// 4 = 0x4
	NSMutableDictionary *_textTonesByIdentifier;	// 8 = 0x8
	NSMutableDictionary *_iTunesIdentifiersByPID;	// 12 = 0xc
	NSDictionary *_previewBehaviorForDefaultIdentifier;	// 16 = 0x10
	NSDictionary *_identifierAliasMap;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	BOOL _observingChangeNotifications;	// 28 = 0x1c
	BOOL _hasAdditionalTextTones;	// 29 = 0x1d
}
@property(retain) id currentRingtoneIdentifier;	// G=0x3059480d; S=0x3059657d; converted property
@property(assign) BOOL hasAdditionalTextTones;	// G=0x30596d21; S=0x30596d31; converted property
+ (BOOL)identifierIsTextTone:(id)tone;	// 0x30594941
+ (BOOL)migrateLegacyToneSettings;	// 0x305982a1
+ (id)sharedRingtoneManager;	// 0x30593e1d
- (id)init;	// 0x30593e69
- (id)initWithChangeNotifications:(BOOL)changeNotifications;	// 0x30593e7d
- (id)initWithITunesRingtonePlistAtPath:(id)path registerForChangeNotifications:(BOOL)changeNotifications;	// 0x30593e91
- (id)ITunesRingtoneInformationPlist;	// 0x305957d1
- (BOOL)_addToneToManifest:(id)manifest metadata:(id)metadata fileName:(id)name mediaDirectory:(id)directory;	// 0x30597465
- (id)_copyITunesRingtonesFromManifestPath:(id)manifestPath mediaDirectoryPath:(id)path;	// 0x30595461
- (unsigned long)_currentToneSoundID:(id)anId defaultIdentifier:(id)identifier;	// 0x30596d95
- (id)_defaultToneIdentifier:(int)identifier;	// 0x30596d41
- (id)_defaultToneName:(int)name;	// 0x30596d51
- (void)_deviceRingtonesChangedNotification;	// 0x3059473d
- (int)_lockManifest:(id)manifest;	// 0x30596e65
- (void)_reloadITunesRingtonesAfterExternalChange;	// 0x305956e5
- (BOOL)_removeToneFromManifest:(id)manifest fileName:(id)name deletedMetadata:(id *)metadata;	// 0x305976f9
- (unsigned long)_soundIDForSystemTone:(id)systemTone isValid:(BOOL *)valid;	// 0x305967c1
- (id)aliasForIdentifier:(id)identifier;	// 0x30596791
- (void)clearOldToneSettings;	// 0x30594481
- (id)copyCurrentRingtoneIdentifier;	// 0x305947bd
- (id)copyCurrentRingtoneName;	// 0x3059474d
- (id)copyCurrentTextToneIdentifier;	// 0x30596449
- (id)copyCurrentTextToneName;	// 0x305964e5
- (id)copyIdentifierForRingtoneAtPath:(id)path isValid:(BOOL *)valid;	// 0x30594ca5
- (id)copyNameOfIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x30595005
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier;	// 0x30594a05
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x30594a19
- (id)copyNameOfTextToneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x3059668d
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier;	// 0x30594a29
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x30594a3d
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)toneIdentifier;	// 0x30596c15
- (id)currentCalendarAlertToneIdentifier;	// 0x30597eed
- (unsigned long)currentNewCalendarAlertToneSoundID;	// 0x305981c9
- (id)currentNewMailToneIdentifier;	// 0x30597ce9
- (unsigned long)currentNewMailToneSoundID;	// 0x305980f1
- (unsigned long)currentNewReminderAlertToneSoundID;	// 0x30598211
- (id)currentNewVoicemailToneIdentifier;	// 0x30597e41
- (unsigned long)currentNewVoicemailToneSoundID;	// 0x30598181
- (id)currentReminderAlertToneIdentifier;	// 0x30597f99
// converted property getter: - (id)currentRingtoneIdentifier;	// 0x3059480d
- (id)currentRingtoneName;	// 0x30594835
- (id)currentSentMailToneIdentifier;	// 0x30597d95
- (unsigned long)currentSentMailToneSoundID;	// 0x30598139
- (id)currentSentTweetToneIdentifier;	// 0x30598045
- (unsigned long)currentSentTweetToneSoundID;	// 0x30598259
- (unsigned long)currentTextToneSoundID;	// 0x30596635
- (void)dealloc;	// 0x30594249
- (id)defaultCalendarAlertToneIdentifier;	// 0x30597cad
- (id)defaultNewMailToneIdentifier;	// 0x30597c71
- (id)defaultNewVoicemailToneIdentifier;	// 0x30597c99
- (id)defaultReminderAlertToneIdentifier;	// 0x30597cc1
- (id)defaultRingtoneIdentifier;	// 0x3059485d
- (id)defaultRingtoneName;	// 0x30594871
- (id)defaultRingtonePath;	// 0x305948b1
- (id)defaultSentMailToneIdentifier;	// 0x30597c85
- (id)defaultSentTweetToneIdentifier;	// 0x30597cd5
- (id)defaultTextToneIdentifier;	// 0x305965cd
- (id)defaultTextToneName;	// 0x305965e1
- (void)deleteAllSyncedData;	// 0x305978a5
- (BOOL)deleteSyncedToneByPID:(id)pid;	// 0x30596fd5
- (id)deviceITunesRingtoneDirectory;	// 0x30595789
- (id)deviceITunesRingtoneInformationPlist;	// 0x305957ad
- (unsigned)durationOfToneWithIdentifier:(id)identifier;	// 0x305953f5
- (BOOL)ensureDirectoryExists:(id)exists;	// 0x30596dd9
- (void)fixupMissingToneSettings;	// 0x30594335
// converted property getter: - (BOOL)hasAdditionalTextTones;	// 0x30596d21
- (id)iTunesRingtoneDirectory;	// 0x305957f5
- (id)iTunesToneForPID:(id)pid;	// 0x30597421
- (void)importTone:(id)tone metadata:(id)metadata completionBlock:(id)block;	// 0x30597159
- (BOOL)insertPurchasedToneMetadata:(id)metadata filename:(id)filename;	// 0x30596f69
- (BOOL)insertSyncedToneMetadata:(id)metadata filename:(id)filename;	// 0x30596efd
- (id)installedTones;	// 0x30597b05
- (BOOL)isAlertTone:(id)tone;	// 0x305953b5
- (BOOL)isRingtonePurchased:(id)purchased;	// 0x30595381
- (BOOL)isToneProtectedWithIdentifier:(id)identifier;	// 0x3059542d
- (BOOL)isValidToneIdentifier:(id)identifier;	// 0x30596369
- (void)loadITunesRingtoneInfoPlistAtPath:(id)path;	// 0x30594579
- (void)loadTextToneInfo;	// 0x30595859
- (id)localizedNameWithIdentifier:(id)identifier;	// 0x305948d9
- (id)localizedRingtoneNameWithIdentifier:(id)identifier;	// 0x30594931
- (id)newAVItemWithRingtoneIdentifier:(id)ringtoneIdentifier;	// 0x305952ad
- (id)nullTextToneName;	// 0x305965f5
- (id)pathFromIdentifier:(id)identifier withPrefix:(id)prefix;	// 0x30594999
- (int)previewBehaviorForDefaultIdentifier:(id)defaultIdentifier;	// 0x30596751
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x30596701
- (id)rootDirectory;	// 0x3059577d
// converted property setter: - (void)setCurrentRingtoneIdentifier:(id)identifier;	// 0x3059657d
- (void)setCurrentTextToneIdentifier:(id)identifier;	// 0x3059652d
- (void)setDelegate:(id)delegate;	// 0x30594325
// converted property setter: - (void)setHasAdditionalTextTones:(BOOL)tones;	// 0x30596d31
- (BOOL)shouldShowAlarmSounds;	// 0x30594321
- (BOOL)shouldShowRingtones;	// 0x3059431d
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x30596821
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier isValid:(BOOL *)valid;	// 0x30596835
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier;	// 0x30596845
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier isValid:(BOOL *)valid;	// 0x30596859
- (id)systemNewSoundDirectory;	// 0x3059584d
- (id)systemRingtoneDirectory;	// 0x30595819
- (id)systemSoundDirectory;	// 0x30595841
- (BOOL)toneWithIdentifierIsValid:(id)identifierIsValid;	// 0x3059522d
- (BOOL)transferPurchasedToITunes:(id)itunes;	// 0x30597b25
@end

