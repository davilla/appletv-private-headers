/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceManager : BRSingleton {
	NSArray *_arrangedAppliances;	// 4 = 0x4
	BOOL _loadingAppliances;	// 8 = 0x8
	NSArray *_appliances;	// 12 = 0xc
	NSMutableDictionary *_applianceIdentifierToApplianceDictionary;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *applianceIdentifierToApplianceDictionary;	// G=0x334a49; S=0x334a5d; @synthesize=_applianceIdentifierToApplianceDictionary
@property(copy) NSArray *appliances;	// G=0x334a25; S=0x334a39; @synthesize=_appliances
@property(readonly, assign) NSArray *arrangedAppliances;	// G=0x3341e1; 
+ (void)setSingleton:(id)singleton;	// 0x334039
+ (void)showMainMenu;	// 0x334049
+ (id)singleton;	// 0x334029
- (id)init;	// 0x3340a5
- (void)_applianceDidReloadCategories:(id)_appliance;	// 0x334389
- (id)_applianceForInfo:(id)info;	// 0x334df1
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x334a6d
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x334de1
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x334dd1
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x334c7d
- (void)_invalidateArrangedAppliances;	// 0x334efd
- (id)_loadApplianceAtPath:(id)path;	// 0x33536d
- (void)_loadAppliances;	// 0x334fc5
- (BOOL)_shouldLoadApp:(id)app;	// 0x334f0d
- (id)applianceForInfo:(id)info;	// 0x33434d
// declared property getter: - (id)applianceIdentifierToApplianceDictionary;	// 0x334a49
- (id)applianceInfoForApplianceIdentifier:(id)applianceIdentifier;	// 0x334315
- (id)applianceInfoList;	// 0x3342e1
// declared property getter: - (id)appliances;	// 0x334a25
// declared property getter: - (id)arrangedAppliances;	// 0x3341e1
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x33474d
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x33477d
- (id)controllerForMerchant:(id)merchant;	// 0x334739
- (void)dealloc;	// 0x33415d
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x33491d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x3349a1
- (void)loadAppliances;	// 0x3341f1
// declared property setter: - (void)setApplianceIdentifierToApplianceDictionary:(id)applianceDictionary;	// 0x334a5d
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x334a39
@end
