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
@property(retain) id currentRingtoneIdentifier;	// G=0x34f2080d; S=0x34f2257d; converted property
@property(assign) BOOL hasAdditionalTextTones;	// G=0x34f22d21; S=0x34f22d31; converted property
+ (BOOL)identifierIsTextTone:(id)tone;	// 0x34f20941
+ (BOOL)migrateLegacyToneSettings;	// 0x34f242a1
+ (id)sharedRingtoneManager;	// 0x34f1fe1d
- (id)init;	// 0x34f1fe69
- (id)initWithChangeNotifications:(BOOL)changeNotifications;	// 0x34f1fe7d
- (id)initWithITunesRingtonePlistAtPath:(id)path registerForChangeNotifications:(BOOL)changeNotifications;	// 0x34f1fe91
- (id)ITunesRingtoneInformationPlist;	// 0x34f217d1
- (BOOL)_addToneToManifest:(id)manifest metadata:(id)metadata fileName:(id)name mediaDirectory:(id)directory;	// 0x34f23465
- (id)_copyITunesRingtonesFromManifestPath:(id)manifestPath mediaDirectoryPath:(id)path;	// 0x34f21461
- (unsigned long)_currentToneSoundID:(id)anId defaultIdentifier:(id)identifier;	// 0x34f22d95
- (id)_defaultToneIdentifier:(int)identifier;	// 0x34f22d41
- (id)_defaultToneName:(int)name;	// 0x34f22d51
- (void)_deviceRingtonesChangedNotification;	// 0x34f2073d
- (int)_lockManifest:(id)manifest;	// 0x34f22e65
- (void)_reloadITunesRingtonesAfterExternalChange;	// 0x34f216e5
- (BOOL)_removeToneFromManifest:(id)manifest fileName:(id)name deletedMetadata:(id *)metadata;	// 0x34f236f9
- (unsigned long)_soundIDForSystemTone:(id)systemTone isValid:(BOOL *)valid;	// 0x34f227c1
- (id)aliasForIdentifier:(id)identifier;	// 0x34f22791
- (void)clearOldToneSettings;	// 0x34f20481
- (id)copyCurrentRingtoneIdentifier;	// 0x34f207bd
- (id)copyCurrentRingtoneName;	// 0x34f2074d
- (id)copyCurrentTextToneIdentifier;	// 0x34f22449
- (id)copyCurrentTextToneName;	// 0x34f224e5
- (id)copyIdentifierForRingtoneAtPath:(id)path isValid:(BOOL *)valid;	// 0x34f20ca5
- (id)copyNameOfIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x34f21005
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier;	// 0x34f20a05
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x34f20a19
- (id)copyNameOfTextToneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x34f2268d
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier;	// 0x34f20a29
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x34f20a3d
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)toneIdentifier;	// 0x34f22c15
- (id)currentCalendarAlertToneIdentifier;	// 0x34f23eed
- (unsigned long)currentNewCalendarAlertToneSoundID;	// 0x34f241c9
- (id)currentNewMailToneIdentifier;	// 0x34f23ce9
- (unsigned long)currentNewMailToneSoundID;	// 0x34f240f1
- (unsigned long)currentNewReminderAlertToneSoundID;	// 0x34f24211
- (id)currentNewVoicemailToneIdentifier;	// 0x34f23e41
- (unsigned long)currentNewVoicemailToneSoundID;	// 0x34f24181
- (id)currentReminderAlertToneIdentifier;	// 0x34f23f99
// converted property getter: - (id)currentRingtoneIdentifier;	// 0x34f2080d
- (id)currentRingtoneName;	// 0x34f20835
- (id)currentSentMailToneIdentifier;	// 0x34f23d95
- (unsigned long)currentSentMailToneSoundID;	// 0x34f24139
- (id)currentSentTweetToneIdentifier;	// 0x34f24045
- (unsigned long)currentSentTweetToneSoundID;	// 0x34f24259
- (unsigned long)currentTextToneSoundID;	// 0x34f22635
- (void)dealloc;	// 0x34f20249
- (id)defaultCalendarAlertToneIdentifier;	// 0x34f23cad
- (id)defaultNewMailToneIdentifier;	// 0x34f23c71
- (id)defaultNewVoicemailToneIdentifier;	// 0x34f23c99
- (id)defaultReminderAlertToneIdentifier;	// 0x34f23cc1
- (id)defaultRingtoneIdentifier;	// 0x34f2085d
- (id)defaultRingtoneName;	// 0x34f20871
- (id)defaultRingtonePath;	// 0x34f208b1
- (id)defaultSentMailToneIdentifier;	// 0x34f23c85
- (id)defaultSentTweetToneIdentifier;	// 0x34f23cd5
- (id)defaultTextToneIdentifier;	// 0x34f225cd
- (id)defaultTextToneName;	// 0x34f225e1
- (void)deleteAllSyncedData;	// 0x34f238a5
- (BOOL)deleteSyncedToneByPID:(id)pid;	// 0x34f22fd5
- (id)deviceITunesRingtoneDirectory;	// 0x34f21789
- (id)deviceITunesRingtoneInformationPlist;	// 0x34f217ad
- (unsigned)durationOfToneWithIdentifier:(id)identifier;	// 0x34f213f5
- (BOOL)ensureDirectoryExists:(id)exists;	// 0x34f22dd9
- (void)fixupMissingToneSettings;	// 0x34f20335
// converted property getter: - (BOOL)hasAdditionalTextTones;	// 0x34f22d21
- (id)iTunesRingtoneDirectory;	// 0x34f217f5
- (id)iTunesToneForPID:(id)pid;	// 0x34f23421
- (void)importTone:(id)tone metadata:(id)metadata completionBlock:(id)block;	// 0x34f23159
- (BOOL)insertPurchasedToneMetadata:(id)metadata filename:(id)filename;	// 0x34f22f69
- (BOOL)insertSyncedToneMetadata:(id)metadata filename:(id)filename;	// 0x34f22efd
- (id)installedTones;	// 0x34f23b05
- (BOOL)isAlertTone:(id)tone;	// 0x34f213b5
- (BOOL)isRingtonePurchased:(id)purchased;	// 0x34f21381
- (BOOL)isToneProtectedWithIdentifier:(id)identifier;	// 0x34f2142d
- (BOOL)isValidToneIdentifier:(id)identifier;	// 0x34f22369
- (void)loadITunesRingtoneInfoPlistAtPath:(id)path;	// 0x34f20579
- (void)loadTextToneInfo;	// 0x34f21859
- (id)localizedNameWithIdentifier:(id)identifier;	// 0x34f208d9
- (id)localizedRingtoneNameWithIdentifier:(id)identifier;	// 0x34f20931
- (id)newAVItemWithRingtoneIdentifier:(id)ringtoneIdentifier;	// 0x34f212ad
- (id)nullTextToneName;	// 0x34f225f5
- (id)pathFromIdentifier:(id)identifier withPrefix:(id)prefix;	// 0x34f20999
- (int)previewBehaviorForDefaultIdentifier:(id)defaultIdentifier;	// 0x34f22751
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x34f22701
- (id)rootDirectory;	// 0x34f2177d
// converted property setter: - (void)setCurrentRingtoneIdentifier:(id)identifier;	// 0x34f2257d
- (void)setCurrentTextToneIdentifier:(id)identifier;	// 0x34f2252d
- (void)setDelegate:(id)delegate;	// 0x34f20325
// converted property setter: - (void)setHasAdditionalTextTones:(BOOL)tones;	// 0x34f22d31
- (BOOL)shouldShowAlarmSounds;	// 0x34f20321
- (BOOL)shouldShowRingtones;	// 0x34f2031d
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x34f22821
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier isValid:(BOOL *)valid;	// 0x34f22835
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier;	// 0x34f22845
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier isValid:(BOOL *)valid;	// 0x34f22859
- (id)systemNewSoundDirectory;	// 0x34f2184d
- (id)systemRingtoneDirectory;	// 0x34f21819
- (id)systemSoundDirectory;	// 0x34f21841
- (BOOL)toneWithIdentifierIsValid:(id)identifierIsValid;	// 0x34f2122d
- (BOOL)transferPurchasedToITunes:(id)itunes;	// 0x34f23b25
@end

