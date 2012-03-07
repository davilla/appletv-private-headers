/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIDevice : NSObject {
@private
	int _numDeviceOrientationObservers;	// 4 = 0x4
	float _batteryLevel;	// 8 = 0x8
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
	} _deviceFlags;	// 12 = 0xc
}
@property(assign, nonatomic, setter=_setBacklightLevel:) float _backlightLevel;	// G=0x3530ee55; S=0x3530ee41; 
@property(readonly, assign, nonatomic) float batteryLevel;	// G=0x3530ec8d; 
@property(assign, nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;	// G=0x3530ec79; S=0x352606a1; 
@property(readonly, assign, nonatomic) int batteryState;	// G=0x35260b55; 
@property(readonly, assign, nonatomic) NSString *buildVersion;	// G=0x350e32a5; 
@property(readonly, assign, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;	// G=0x350f9a95; 
@property(assign) BOOL isWildcat;	// G=0x350d8a35; S=0x3530ef8d; converted property
@property(readonly, assign, nonatomic) NSString *localizedModel;	// G=0x3530eb6d; 
@property(readonly, assign, nonatomic) NSString *model;	// G=0x351883dd; 
@property(readonly, assign, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;	// G=0x3517913d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3530eb39; 
@property(readonly, assign, nonatomic) int orientation;	// G=0x350e080d; 
@property(assign, nonatomic) int orientation;	// S=0x350f8fd5; 
@property(assign, nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;	// G=0x3530ecc1; S=0x3530ecd5; 
@property(readonly, assign, nonatomic) BOOL proximityState;	// G=0x3530edd5; 
@property(readonly, assign, nonatomic) NSString *systemName;	// G=0x3530ebd1; 
@property(readonly, assign, nonatomic) NSString *systemVersion;	// G=0x3530ec29; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x3530ec5d; 
@property(readonly, assign, nonatomic) int userInterfaceIdiom;	// G=0x350b5301; 
+ (id)currentDevice;	// 0x350b5295
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)ambiguous;	// 0x350f8f4d
+ (id)modelSpecificLocalizedStringKeyForKey:(id)key;	// 0x35214f7d
// declared property getter: - (float)_backlightLevel;	// 0x3530ee55
- (void)_enableDeviceOrientationEvents:(BOOL)events;	// 0x350f8f05
- (BOOL)_isTTYEnabled;	// 0x3530ef21
- (void)_playSystemSound:(unsigned long)sound;	// 0x351c54c1
- (void)_registerForSystemSounds:(id)systemSounds;	// 0x351b0291
// declared property setter: - (void)_setBacklightLevel:(float)level;	// 0x3530ee41
- (void)_setBatteryLevel:(float)level;	// 0x35260b69
- (void)_setBatteryState:(int)state;	// 0x35260ebd
- (void)_setExpectsFaceContactInLandscape:(BOOL)landscape;	// 0x3530ed61
- (void)_setProximityState:(BOOL)state;	// 0x3530eead
- (float)_softwareDimmingAlpha;	// 0x3530ee71
- (void)_unregisterForSystemSounds:(id)systemSounds;	// 0x351450dd
- (void)_updateSystemSoundActiveStatus:(id)status;	// 0x351f7135
// declared property getter: - (float)batteryLevel;	// 0x3530ec8d
// declared property getter: - (int)batteryState;	// 0x35260b55
- (void)beginGeneratingDeviceOrientationNotifications;	// 0x350f8e99
// declared property getter: - (id)buildVersion;	// 0x350e32a5
- (id)deviceInfoForKey:(CFStringRef)key;	// 0x350e32d9
- (void)endGeneratingDeviceOrientationNotifications;	// 0x35178631
// declared property getter: - (BOOL)isBatteryMonitoringEnabled;	// 0x3530ec79
// declared property getter: - (BOOL)isGeneratingDeviceOrientationNotifications;	// 0x350f9a95
// declared property getter: - (BOOL)isMultitaskingSupported;	// 0x3517913d
// declared property getter: - (BOOL)isProximityMonitoringEnabled;	// 0x3530ecc1
// converted property getter: - (BOOL)isWildcat;	// 0x350d8a35
// declared property getter: - (id)localizedModel;	// 0x3530eb6d
// declared property getter: - (id)model;	// 0x351883dd
// declared property getter: - (id)name;	// 0x3530eb39
// declared property getter: - (int)orientation;	// 0x350e080d
- (void)playInputClick;	// 0x3530eded
// declared property getter: - (BOOL)proximityState;	// 0x3530edd5
// declared property setter: - (void)setBatteryMonitoringEnabled:(BOOL)enabled;	// 0x352606a1
// converted property setter: - (void)setIsWildcat:(BOOL)wildcat;	// 0x3530ef8d
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x350f8fd5
- (void)setOrientation:(int)orientation animated:(BOOL)animated;	// 0x350bab39
// declared property setter: - (void)setProximityMonitoringEnabled:(BOOL)enabled;	// 0x3530ecd5
// declared property getter: - (id)systemName;	// 0x3530ebd1
// declared property getter: - (id)systemVersion;	// 0x3530ec29
// declared property getter: - (id)uniqueIdentifier;	// 0x3530ec5d
// declared property getter: - (int)userInterfaceIdiom;	// 0x350b5301
@end
