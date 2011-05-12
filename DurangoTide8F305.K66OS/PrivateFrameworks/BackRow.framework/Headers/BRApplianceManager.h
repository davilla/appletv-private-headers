/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableArray;

@interface BRApplianceManager : BRSingleton {
@private
	NSMutableArray *_applianceList;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x329172c5
+ (void)showMainMenu;	// 0x329b3c09
+ (id)singleton;	// 0x329172b9
- (id)init;	// 0x329b3575
- (id)_applianceForInfo:(id)info;	// 0x3291c3a5
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x329b3751
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x329b35e9
- (void)_loadApplianceAtPath:(id)path;	// 0x32917469
- (void)_loadAppliancesInFolder:(id)folder;	// 0x32917329
- (void)_unloadCurrentAppliances;	// 0x329b35c1
- (id)applianceForInfo:(id)info;	// 0x3291c391
- (id)applianceInfoList;	// 0x3291b725
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x329b3b71
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x329b3c59
- (id)controllerForContentAlias:(id)contentAlias;	// 0x329b3ae1
- (void)dealloc;	// 0x329b3b99
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x329b3a5d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x329b39d9
- (void)loadAppliances;	// 0x329172d1
@end

