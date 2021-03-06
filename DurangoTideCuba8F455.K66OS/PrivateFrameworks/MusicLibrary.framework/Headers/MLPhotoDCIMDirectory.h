/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString, NSMutableArray, NSMutableDictionary;

@interface MLPhotoDCIMDirectory : NSObject {
@private
	NSString *_dcimPath;	// 4 = 0x4
	NSString *_miscPath;	// 8 = 0x8
	NSString *_posterImagePath;	// 12 = 0xc
	NSMutableArray *_topLevelDirectories;	// 16 = 0x10
	CFDictionaryRef _topLevelDirectoriesByNumber;	// 20 = 0x14
	CFSetRef _unusableTopLevelDirectoryNumbers;	// 24 = 0x18
	int _lastUsedDirectoryNumber;	// 28 = 0x1c
	NSMutableDictionary *_userInfo;	// 32 = 0x20
	BOOL _userInfoDidChange;	// 36 = 0x24
	flock *_dcimDirectoryLock;	// 40 = 0x28
	int _dcimDirectoryLockDescriptor;	// 44 = 0x2c
}
@property(readonly, retain) NSString *dcimPath;	// G=0x31be1995; converted property
@property(assign) BOOL hasChangedExternally;	// G=0x31be19e5; S=0x31be19a5; converted property
@property(readonly, retain) NSString *miscPath;	// G=0x31be1d49; converted property
@property(readonly, retain) NSString *posterImagePath;	// G=0x31be1b95; converted property
@property(readonly, retain) NSMutableDictionary *userInfo;	// G=0x31be2199; converted property
- (id)initWithDCIMPath:(id)dcimpath;	// 0x31be1da9
- (id)_userInfoPath;	// 0x31be1bed
- (void)clearDCFDirectories;	// 0x31be1e35
- (void)countOfAllPhotos:(int *)allPhotos andVideos:(int *)videos stopAfterFirst:(BOOL)first;	// 0x31be1f5d
- (id)countOfAllPhotosAndVideos;	// 0x31be1a11
- (id)dcfDirectories;	// 0x31be2669
// converted property getter: - (id)dcimPath;	// 0x31be1995
- (void)dealloc;	// 0x31be1e99
// converted property getter: - (BOOL)hasChangedExternally;	// 0x31be19e5
- (BOOL)isValidImageExtension:(id)extension;	// 0x31be1d11
- (BOOL)isValidVideoExtension:(id)extension;	// 0x31be1cd9
- (void)lockDirectory;	// 0x31be2981
// converted property getter: - (id)miscPath;	// 0x31be1d49
- (id)nextAvailableDirectory;	// 0x31be24a1
// converted property getter: - (id)posterImagePath;	// 0x31be1b95
- (void)recreateInfoPlist;	// 0x31be2a99
- (void)reloadUserInfo;	// 0x31be1b05
- (void)saveUserInfo;	// 0x31be1b3d
// converted property setter: - (void)setHasChangedExternally:(BOOL)externally;	// 0x31be19a5
- (void)setUserInfoObject:(id)object forKey:(id)key;	// 0x31be1aa1
- (void)unlockDirectory;	// 0x31be2a49
// converted property getter: - (id)userInfo;	// 0x31be2199
- (id)userInfoObjectForKey:(id)key;	// 0x31be1add
@end

