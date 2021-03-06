/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSArray;

@interface BRSettingsFacade : BRSingleton {
@private
	NSArray *_allMarimbaSlideshowThemeIdentifiers;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
}
@property(assign) BOOL UISoundsEnabled;	// G=0x342bd619; S=0x342bd695; converted property
@property(assign) int audioFormatSetting;	// G=0x342bdf71; S=0x342bdfe5; converted property
@property(assign) int audioOutputQuality;	// G=0x342be049; S=0x342be08d; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x342be181; S=0x342be0f1; converted property
@property(retain) id defaultAudioLanguage;	// G=0x342bd911; S=0x342bd9a9; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x342bd815; S=0x342bd8ad; converted property
@property(assign) BOOL displayNewSlideshowThemes;	// G=0x342bec05; S=0x342bec45; converted property
@property(assign) int favoritesSortMode;	// G=0x342be431; S=0x342be475; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x342bf579; S=0x342bf5b9; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x342bf671; S=0x342bf6b1; converted property
@property(retain) id marimbaSlideshowDefaultMusicPlaylistID;	// G=0x342bf4f5; S=0x342bf535; converted property
@property(retain) id marimbaSlideshowDefaultMusicServerSetting;	// G=0x342bf191; S=0x342bf425; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x342bf0f5; S=0x342bf0b1; converted property
@property(assign) int musicRepeatMode;	// G=0x342bdd51; S=0x342bdd95; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x342bdde1; S=0x342bde25; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x342be265; S=0x342be2a9; converted property
@property(assign) BOOL preferHDVideo;	// G=0x342be37d; S=0x342be3c1; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x342be2f1; S=0x342be335; converted property
@property(assign) BOOL slideshowPanAndZoom;	// G=0x342be7c5; S=0x342be809; converted property
@property(assign) BOOL slideshowPlayMusic;	// G=0x342be851; S=0x342be895; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x342be5f9; S=0x342be665; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x342be545; S=0x342be5b1; converted property
@property(retain) id slideshowSelectedPlaylistName;	// G=0x342bead1; S=0x342beb0d; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x342beb51; S=0x342bebbd; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x342be739; S=0x342be77d; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x342be6ad; S=0x342be6f1; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x342bd72d; S=0x342bd771; converted property
+ (void)setSingleton:(id)singleton;	// 0x342bd4a9
+ (id)singleton;	// 0x342bd499
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x342bd619
- (id)_avSelectionPlistForMedia:(id)media forType:(id)type;	// 0x342c05c9
- (id)_availableDefaultAVLanguages;	// 0x342c074d
- (id)_existingSlideshowThemeKeys;	// 0x342c0819
- (id)_existingSlideshowThemeTitleKeys;	// 0x342c0905
- (id)_newSlideshowThemeKeys;	// 0x342c09f1
- (id)_newSlideshowThemeTitleKeys;	// 0x342c09f5
- (void)_removeSavedPreferredOptionsForType:(id)type;	// 0x342c06d1
- (void)_saveAVSelectionDictionary:(id)dictionary forMedia:(id)media forType:(id)type;	// 0x342c038d
- (void)_setSlideshowSelectedPlaylistName:(id)name forHost:(id)host;	// 0x342c0165
- (id)_slideshowSelectedPlaylistNameForHost:(id)host;	// 0x342c02a5
// converted property getter: - (int)audioFormatSetting;	// 0x342bdf71
// converted property getter: - (int)audioOutputQuality;	// 0x342be049
- (id)avAudioSelectionPlistForMedia:(id)media;	// 0x342bdcbd
- (id)avSubtitleSelectionPlistForMedia:(id)media;	// 0x342bdc29
- (id)availableDefaultAudioLanguages;	// 0x342bd805
- (id)availableDefaultSubtitleLanguages;	// 0x342bd7f5
- (BOOL)bootedFromRecoveryPartition;	// 0x342bf909
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x342be181
- (BOOL)crashReportingPreferenceSet;	// 0x342be21d
// converted property getter: - (id)defaultAudioLanguage;	// 0x342bd911
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x342bd815
- (int)deviceActivationState;	// 0x342bf94d
// converted property getter: - (BOOL)displayNewSlideshowThemes;	// 0x342bec05
- (id)externalSubtitleSelectionForMedia:(id)media;	// 0x342bda0d
// converted property getter: - (int)favoritesSortMode;	// 0x342be431
- (void)flushDiskChanges;	// 0x342bd585
- (id)hwDeviceName;	// 0x342bf7a1
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x342bfe49
- (BOOL)isTimeZoneSet;	// 0x342bfce5
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x342bf5fd
// converted property getter: - (id)keyboardLanguageKeys;	// 0x342bf579
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x342bf671
// converted property getter: - (id)marimbaSlideshowDefaultMusicPlaylistID;	// 0x342bf4f5
// converted property getter: - (id)marimbaSlideshowDefaultMusicServerSetting;	// 0x342bf191
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x342bf0f5
- (id)marimbaSlideshowThemeIdentifiers;	// 0x342bec99
- (id)marimbaSlideshowThemeTitleKeys;	// 0x342beeb9
// converted property getter: - (int)musicRepeatMode;	// 0x342bdd51
- (float)musicVolume;	// 0x342bdec5
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x342bdde1
- (id)parentalControlsPasscode;	// 0x342be4bd
- (int)parentalControlsYTMode;	// 0x342be501
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x342be265
// converted property getter: - (BOOL)preferHDVideo;	// 0x342be37d
- (BOOL)runningAnInternalBuild;	// 0x342bf911
- (void)saveAVAudioSelectionPlist:(id)plist forMedia:(id)media;	// 0x342bdcd9
- (void)saveAVSubtitleSelectionPlist:(id)plist forMedia:(id)media;	// 0x342bdc45
- (BOOL)saveConfiguration:(id)configuration;	// 0x342bf90d
- (void)saveExternalSubtitleSelection:(id)selection forMedia:(id)media;	// 0x342bdb25
- (void)saveMusicVolume:(float)volume;	// 0x342bdf0d
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x342be2f1
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x342bdfe5
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x342be08d
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x342bfe6d
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x342be0f1
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x342bd9a9
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x342bd8ad
- (void)setDeviceActivationFailureState:(int)state;	// 0x342bf9fd
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x342bfab5
// converted property setter: - (void)setDisplayNewSlideshowThemes:(BOOL)themes;	// 0x342bec45
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x342be475
- (void)setHWDeviceName:(id)name;	// 0x342bf829
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x342bf635
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x342bf5b9
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x342bf6b1
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicPlaylistID:(id)anId;	// 0x342bf535
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicServerSetting:(id)setting;	// 0x342bf425
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x342bf0b1
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x342bdd95
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x342bde25
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x342be2a9
// converted property setter: - (void)setPreferHDVideo:(BOOL)video;	// 0x342be3c1
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x342be335
// converted property setter: - (void)setSlideshowPanAndZoom:(BOOL)zoom;	// 0x342be809
// converted property setter: - (void)setSlideshowPlayMusic:(BOOL)music;	// 0x342be895
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x342be665
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x342be5b1
// converted property setter: - (void)setSlideshowSelectedPlaylistName:(id)name;	// 0x342beb0d
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x342bebbd
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x342be77d
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x342be6f1
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x342bfb29
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x342bd695
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x342bfd91
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x342bd771
// converted property getter: - (BOOL)slideshowPanAndZoom;	// 0x342be7c5
// converted property getter: - (BOOL)slideshowPlayMusic;	// 0x342be851
- (id)slideshowPlaylists;	// 0x342be8dd
// converted property getter: - (BOOL)slideshowRepeat;	// 0x342be5f9
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x342be545
// converted property getter: - (id)slideshowSelectedPlaylistName;	// 0x342bead1
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x342beb51
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x342be739
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x342be6ad
- (id)slideshowTransitionNames;	// 0x342beb4d
- (id)syncHostName;	// 0x342bf75d
- (id)timeZone;	// 0x342bfb0d
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x342bfef5
- (id)timeZoneCityID;	// 0x342c0039
- (void)updateHostID:(id)anId to:(id)to;	// 0x342bd4b9
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x342bfd4d
- (id)versionEFI;	// 0x342bf751
- (id)versionGF;	// 0x342bf759
- (id)versionIR;	// 0x342bf755
- (id)versionOS;	// 0x342bf749
- (id)versionOSBuild;	// 0x342bf74d
- (id)versionSoftware;	// 0x342bf6f5
- (id)versionSoftwareBuild;	// 0x342bf745
// converted property getter: - (int)videoClosedCaptionMode;	// 0x342bd72d
- (BOOL)wasDeviceActivationSkipped;	// 0x342bfa71
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x342bfdd5
@end

