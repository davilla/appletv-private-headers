/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray;

@interface ISSoftwareMap : NSObject {
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x30780c11; 
+ (void)_startWatchingInstallationNotifications;	// 0x30780f69
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x30780551
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x3078056d
+ (id)currentMap;	// 0x30780371
+ (BOOL)currentMapIsValid;	// 0x307803b5
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x307801b1
+ (void)invalidateCurrentMap;	// 0x307803e1
+ (id)loadedMap;	// 0x30780445
+ (void)setCurrentMap:(id)map;	// 0x307804e9
+ (void)startObservingNotifications;	// 0x30780f1d
- (id)init;	// 0x307800c5
- (void)_loadFromMobileInstallation;	// 0x30781045
- (id)_newSoftwareUpdateDictionaryForApplication:(id)application;	// 0x307810d9
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x30780a09
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x30780b0d
// declared property getter: - (id)applications;	// 0x30780c11
- (id)copySoftwareUpdatesPropertyList;	// 0x30780c21
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x30780c35
- (void)dealloc;	// 0x30780161
@end
