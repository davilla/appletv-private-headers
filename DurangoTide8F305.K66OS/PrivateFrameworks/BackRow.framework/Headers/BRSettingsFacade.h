/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSArray;

@interface BRSettingsFacade : BRSingleton {
@private
	NSArray *_allMarimbaSlideshowThemeIdentifiers;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
}
@property(assign) BOOL UISoundsEnabled;	// G=0x329da081; S=0x329da001; converted property
@property(assign) int audioFormatSetting;	// G=0x329d9ba5; S=0x329d9b4d; converted property
@property(assign) int audioOutputQuality;	// G=0x329d9b11; S=0x329d9ab9; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x329da469; S=0x329da3ed; converted property
@property(retain) id defaultAudioLanguage;	// G=0x329d9ea5; S=0x329d9e4d; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x329d9f35; S=0x329d9edd; converted property
@property(assign) BOOL displayNewSlideshowThemes;	// G=0x329d9149; S=0x329d90f9; converted property
@property(assign) int favoritesSortMode;	// G=0x329d98f1; S=0x329d98b5; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x329d8e35; S=0x329d8dfd; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x329d8d61; S=0x329d8d29; converted property
@property(retain) id marimbaSlideshowDefaultMusicPlaylistID;	// G=0x329d8ea1; S=0x329d8e69; converted property
@property(retain) id marimbaSlideshowDefaultMusicServerID;	// G=0x329d8f0d; S=0x329d8ed5; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x329d903d; S=0x329d90c1; converted property
@property(assign) int musicRepeatMode;	// G=0x3293f0dd; S=0x329d9d71; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x329d9d35; S=0x329d9cad; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x329d9a41; S=0x329d9a05; converted property
@property(assign) BOOL preferHDVideo;	// G=0x329d998d; S=0x329d992d; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x32940641; S=0x329d99c9; converted property
@property(assign) BOOL slideshowPanAndZoom;	// G=0x329d95e1; S=0x329d95a5; converted property
@property(assign) BOOL slideshowPlayMusic;	// G=0x329d9569; S=0x329d952d; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x329d9749; S=0x329d970d; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x329d97e9; S=0x329d97ad; converted property
@property(retain) id slideshowSelectedPlaylistName;	// G=0x329d932d; S=0x329d92f5; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x329d9299; S=0x329d925d; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x329d9659; S=0x329d961d; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x329d96d1; S=0x329d9695; converted property
@property(retain) id slideshowTransitionDirection;	// G=0x329d91e1; S=0x329d91a5; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x3292e221; S=0x329d9f95; converted property
+ (void)setSingleton:(id)singleton;	// 0x329111d1
+ (id)singleton;	// 0x32911101
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x329da081
- (id)_availableDefaultAVLanguages;	// 0x329d8591
- (id)_existingSlideshowThemeKeys;	// 0x329d84cd
- (id)_existingSlideshowThemeTitleKeys;	// 0x329d8409
- (id)_newSlideshowThemeKeys;	// 0x329d83c5
- (id)_newSlideshowThemeTitleKeys;	// 0x329d8381
- (long)_preferredTrackIDForMedia:(id)media forType:(id)type;	// 0x329d88e1
- (void)_removeSavedPreferredTrackIDsForType:(id)type;	// 0x329d8669
- (void)_savePreferredTrackID:(long)anId forMedia:(id)media forType:(id)type;	// 0x329d86d5
- (void)_setSlideshowSelectedPlaylistName:(id)name forHost:(id)host;	// 0x329d8a49
- (id)_slideshowSelectedPlaylistNameForHost:(id)host;	// 0x329d8979
// converted property getter: - (int)audioFormatSetting;	// 0x329d9ba5
// converted property getter: - (int)audioOutputQuality;	// 0x329d9b11
- (id)availableDefaultAudioLanguages;	// 0x329d9f6d
- (id)availableDefaultSubtitleLanguages;	// 0x329d9f81
- (BOOL)bootedFromRecoveryPartition;	// 0x329d8379
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x329da469
- (BOOL)crashReportingPreferenceSet;	// 0x329d9a7d
// converted property getter: - (id)defaultAudioLanguage;	// 0x329d9ea5
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x329d9f35
// converted property getter: - (BOOL)displayNewSlideshowThemes;	// 0x329d9149
// converted property getter: - (int)favoritesSortMode;	// 0x329d98f1
- (void)flushDiskChanges;	// 0x32912ad5
- (id)hwDeviceName;	// 0x329d8c79
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x329dab25
- (BOOL)isTimeZoneSet;	// 0x329d8c01
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x329d8dc9
// converted property getter: - (id)keyboardLanguageKeys;	// 0x329d8e35
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x329d8d61
// converted property getter: - (id)marimbaSlideshowDefaultMusicPlaylistID;	// 0x329d8ea1
// converted property getter: - (id)marimbaSlideshowDefaultMusicServerID;	// 0x329d8f0d
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x329d903d
- (id)marimbaSlideshowThemeIdentifiers;	// 0x329da6d5
- (id)marimbaSlideshowThemeTitleKeys;	// 0x329da501
// converted property getter: - (int)musicRepeatMode;	// 0x3293f0dd
- (float)musicVolume;	// 0x329d9c71
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x329d9d35
- (id)parentalControlsPasscode;	// 0x329d987d
- (int)parentalControlsYTMode;	// 0x329d9845
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x329d9a41
// converted property getter: - (BOOL)preferHDVideo;	// 0x329d998d
- (long)preferredAlternateAudioTrackIDForMedia:(id)media;	// 0x329d9de1
- (long)preferredSubtitleTrackIDForMedia:(id)media;	// 0x329d9e2d
- (BOOL)saveConfiguration:(id)configuration;	// 0x329d837d
- (void)saveMusicVolume:(float)volume;	// 0x329d9c09
- (void)savePreferredAlternateAudioTrackID:(long)anId forMedia:(id)media;	// 0x329d9db5
- (void)savePreferredSubtitleTrackID:(long)anId forMedia:(id)media;	// 0x329d9e01
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x32940641
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x329d9b4d
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x329d9ab9
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x329dabf9
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x329da3ed
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x329d9e4d
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x329d9edd
// converted property setter: - (void)setDisplayNewSlideshowThemes:(BOOL)themes;	// 0x329d90f9
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x329d98b5
- (void)setHWDeviceName:(id)name;	// 0x329da8c5
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x329d8d95
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x329d8dfd
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x329d8d29
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicPlaylistID:(id)anId;	// 0x329d8e69
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicServerID:(id)anId;	// 0x329d8ed5
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x329d90c1
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x329d9d71
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x329d9cad
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x329d9a05
// converted property setter: - (void)setPreferHDVideo:(BOOL)video;	// 0x329d992d
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x329d99c9
// converted property setter: - (void)setSlideshowPanAndZoom:(BOOL)zoom;	// 0x329d95a5
// converted property setter: - (void)setSlideshowPlayMusic:(BOOL)music;	// 0x329d952d
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x329d970d
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x329d97ad
// converted property setter: - (void)setSlideshowSelectedPlaylistName:(id)name;	// 0x329d92f5
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x329d925d
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x329d961d
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x329d9695
// converted property setter: - (void)setSlideshowTransitionDirection:(id)direction;	// 0x329d91a5
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x329da989
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x329da001
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x329d8b85
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x329d9f95
// converted property getter: - (BOOL)slideshowPanAndZoom;	// 0x329d95e1
// converted property getter: - (BOOL)slideshowPlayMusic;	// 0x329d9569
- (id)slideshowPlaybackOptions;	// 0x329d9185
- (id)slideshowPlaylists;	// 0x329d9361
// converted property getter: - (BOOL)slideshowRepeat;	// 0x329d9749
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x329d97e9
// converted property getter: - (id)slideshowSelectedPlaylistName;	// 0x329d932d
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x329d9299
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x329d9659
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x329d96d1
// converted property getter: - (id)slideshowTransitionDirection;	// 0x329d91e1
- (id)slideshowTransitionNames;	// 0x329d8359
- (BOOL)slideshowTransitionsDisabled;	// 0x329d835d
- (BOOL)slideshowTransitionsRandom;	// 0x329d8361
- (id)syncHostName;	// 0x329d8cf1
- (id)timeZone;	// 0x329d8c59
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x329da2b9
- (id)timeZoneCityID;	// 0x329da1a9
- (void)updateHostID:(id)anId to:(id)to;	// 0x329da0ed
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x329d8bc5
- (id)versionEFI;	// 0x329d836d
- (id)versionGF;	// 0x329d8375
- (id)versionIR;	// 0x329d8371
- (id)versionOS;	// 0x329d8365
- (id)versionOSBuild;	// 0x329d8369
- (id)versionSoftware;	// 0x329142dd
- (id)versionSoftwareBuild;	// 0x329112a5
// converted property getter: - (int)videoClosedCaptionMode;	// 0x3292e221
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x329dab91
@end

