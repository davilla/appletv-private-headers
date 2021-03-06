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
@property(retain) NSMutableDictionary *applianceIdentifierToApplianceDictionary;	// G=0x34a139; S=0x34a14d; @synthesize=_applianceIdentifierToApplianceDictionary
@property(copy) NSArray *appliances;	// G=0x34a115; S=0x34a129; @synthesize=_appliances
@property(readonly, assign) NSArray *arrangedAppliances;	// G=0x34999d; 
+ (void)setSingleton:(id)singleton;	// 0x3497f5
+ (void)showMainMenu;	// 0x349805
+ (id)singleton;	// 0x3497e5
- (id)init;	// 0x349861
- (void)_applianceDidReloadCategories:(id)_appliance;	// 0x349b45
- (id)_applianceForInfo:(id)info;	// 0x34a4e1
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x34a15d
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x34a4d1
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x34a4c1
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x34a36d
- (void)_invalidateArrangedAppliances;	// 0x34a5ed
- (id)_loadApplianceAtPath:(id)path;	// 0x34aa35
- (void)_loadAppliances;	// 0x34a6b5
- (BOOL)_shouldLoadApp:(id)app;	// 0x34a5fd
- (id)applianceForInfo:(id)info;	// 0x349b09
// declared property getter: - (id)applianceIdentifierToApplianceDictionary;	// 0x34a139
- (id)applianceInfoForApplianceIdentifier:(id)applianceIdentifier;	// 0x349ad1
- (id)applianceInfoList;	// 0x349a9d
// declared property getter: - (id)appliances;	// 0x34a115
// declared property getter: - (id)arrangedAppliances;	// 0x34999d
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x349ec1
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x349ef1
- (void)dealloc;	// 0x349919
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x34a091
- (void)loadAppliances;	// 0x3499ad
// declared property setter: - (void)setApplianceIdentifierToApplianceDictionary:(id)applianceDictionary;	// 0x34a14d
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x34a129
@end

