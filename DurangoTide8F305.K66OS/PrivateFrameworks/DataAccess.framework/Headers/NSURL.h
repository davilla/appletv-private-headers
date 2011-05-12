/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSURL.h> // Unknown library


@interface NSURL (DAKeychainAddition)
- (id)URLByRemovingLastPathComponent;	// 0x30230fc1
- (id)URLWithUsername:(id)username;	// 0x30230c95
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x30230df9
- (id)URLWithoutUsername;	// 0x3023109d
- (id)uri;	// 0x30231189
@end

@interface NSURL (DAExtensions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x30236299
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x30235499
+ (id)URLWithScheme:(id)scheme host:(id)host user:(id)user port:(int)port uri:(id)uri;	// 0x302354cd
+ (int)classicPortForScheme:(id)scheme;	// 0x30235435
- (id)pathWithoutTrailingRemovingSlash;	// 0x30235641
- (id)rawPath;	// 0x30236281
- (id)urlBySettingHost:(id)host;	// 0x302356e5
- (id)urlBySettingHost:(id)host keepUsername:(BOOL)username;	// 0x30235a09
- (id)urlBySettingPath:(id)path;	// 0x302356b5
- (id)urlBySettingPath:(id)path keepUsername:(BOOL)username;	// 0x3023580d
- (id)urlBySettingPort:(id)port;	// 0x302356cd
- (id)urlBySettingPort:(id)port keepUsername:(BOOL)username;	// 0x30235911
- (id)urlBySettingScheme:(id)scheme;	// 0x302356fd
- (id)urlBySettingScheme:(id)scheme keepUsername:(BOOL)username;	// 0x30235b0d
- (id)urlBySettingUsername:(id)username;	// 0x30235715
@end

