/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x307738a5
+ (id)singleton;	// 0x30773899
- (id)init;	// 0x30773985
- (void)dealloc;	// 0x307738c1
- (BOOL)haveWeQuitSinceBoot;	// 0x307738ed
- (BOOL)performObliterate;	// 0x30773a21
- (BOOL)performRestore;	// 0x307738bd
- (BOOL)performUpdates:(id)updates;	// 0x30773a0d
- (void)reboot;	// 0x307739f9
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x307738b9
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x307738b5
- (void)setSSHEnabled:(BOOL)enabled;	// 0x307739e5
- (BOOL)setSystemLanguage:(id)language;	// 0x307738b1
@end

