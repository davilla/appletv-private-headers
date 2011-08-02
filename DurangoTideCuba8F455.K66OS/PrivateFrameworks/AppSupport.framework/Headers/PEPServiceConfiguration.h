/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PEPServiceConfiguration : NSObject {
	NSString *_cacheFilePath;	// 4 = 0x4
	BOOL _shouldDownloadNetworkConfigFile;	// 8 = 0x8
	double _cachedFileLastModifyDate;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x322ad6d1
- (id)init;	// 0x322ad66d
- (void)_postNotification;	// 0x322ad5cd
- (void)_updateDefaults:(id)defaults;	// 0x322ad9fd
- (void)dealloc;	// 0x322ad625
- (void)registerNetworkDefaultsForAppID:(id)appID;	// 0x322ad715
@end

