/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVHardwareUtility : BRSingleton {
@private
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x340a62f9
+ (id)configurationInfo;	// 0x340a6395
+ (BOOL)isEmbeddedHardwareDevice;	// 0x340a62c5
+ (id)mediaFolderPath;	// 0x340a62fd
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x340a6701
+ (BOOL)reboot;	// 0x340a634d
+ (void)setSILState_HardwareProblem;	// 0x340a6291
+ (void)setSILState_Off;	// 0x340a61c1
+ (void)setSILState_On;	// 0x340a61f5
+ (void)setSILState_RejectedCommand;	// 0x340a625d
+ (void)setSILState_Starting;	// 0x340a6229
+ (void)setSingleton:(id)singleton;	// 0x340a61b1
+ (id)singleton;	// 0x340a61a1
- (id)init;	// 0x340a6859
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x340a68bd
- (BOOL)_isEmbeddedHardwareDevice;	// 0x340a68ad
@end
