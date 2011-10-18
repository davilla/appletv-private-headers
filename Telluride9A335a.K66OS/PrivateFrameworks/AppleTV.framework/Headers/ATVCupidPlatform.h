/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MSPlatform.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVCupidPlatform : NSObject <MSPlatform> {
}
+ (id)cupidMediaPath;	// 0x3417bbc5
- (id)OSString;	// 0x3417c1c5
- (id)OSVersion;	// 0x3417bf99
- (id)UDID;	// 0x3417befd
- (id)URLConnectionProperties;	// 0x3417bfd5
- (void)_initializePlatformStrings;	// 0x3417c26d
- (id)appBundleInfoString;	// 0x3417c1e9
- (id)authTokenForPersonID:(id)personID;	// 0x3417c0a5
- (id)baseURLForPersonID:(id)personID;	// 0x3417bfd9
- (id)fullNameFromFirstName:(id)firstName lastName:(id)name;	// 0x3417bd81
- (id)hardwareString;	// 0x3417bc65
- (void)logFacility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x3417bc89
- (void)logFile:(const char *)file func:(const char *)func line:(int)line facility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x3417bd05
- (id)pathMediaStreamDir;	// 0x3417bd85
- (BOOL)policyMayDownload;	// 0x3417bfd1
- (BOOL)policyMayUpload;	// 0x3417bfcd
- (Class)publisherPluginClass;	// 0x3417bda1
- (id)pushTokenForPersonID:(id)personID;	// 0x3417bdb9
- (Class)sharingPluginClass;	// 0x3417bdb5
- (BOOL)shouldLogAtLevel:(int)level;	// 0x3417bc61
- (id)socketOptions;	// 0x3417c1c1
- (Class)subscriberPluginClass;	// 0x3417bda5
- (id)theDaemon;	// 0x3417c155
@end

