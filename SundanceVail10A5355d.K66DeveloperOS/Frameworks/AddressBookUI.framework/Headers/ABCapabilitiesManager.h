/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library


@interface ABCapabilitiesManager : NSObject {
	BOOL _isListeningToFTCServiceAvailability;	// 4 = 0x4
}
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x34fceebd
+ (id)defaultCapabilitiesManager;	// 0x34f6dd91
- (void)_startListeningToFTCServiceAvailabilityIfNecessary;	// 0x34fcf0f5
- (void)addFTCServiceAvailabilityListener:(id)listener selector:(SEL)selector;	// 0x34fcf039
- (id)conferenceURLForDestinationID:(id)destinationID;	// 0x34fceff5
- (id)conferenceURLForPhoneNumber:(id)phoneNumber;	// 0x34fcefb1
- (void)dealloc;	// 0x34fceef5
- (BOOL)hasAdditionalTextTones;	// 0x34fcf16d
- (BOOL)hasCameraCapability;	// 0x34f994a1
- (BOOL)hasCellularDataCapability;	// 0x34fcefa5
- (BOOL)hasCellularTelephonyCapability;	// 0x34f78521
- (BOOL)hasPreviouslyConferencedWithID:(id)anId;	// 0x34f78a19
- (BOOL)hasSMSCapability;	// 0x34f71175
- (BOOL)hasTelephonyCapability;	// 0x34f6ddd9
- (BOOL)hasVibratorCapability;	// 0x34f6f13d
- (BOOL)isConferencingAvailable;	// 0x34f718a1
- (BOOL)isConferencingEverGonnaBeAvailable;	// 0x34f6dde5
- (BOOL)isEmailConfigured;	// 0x34f71191
- (BOOL)isMMSConfigured;	// 0x34f71241
- (BOOL)isMadridConfigured;	// 0x34f7124d
- (BOOL)isSensitiveUIAllowed;	// 0x34fcef89
- (BOOL)isTwitterServiceAvailable;	// 0x34fcf189
- (BOOL)isWeiboServiceAvailable;	// 0x34fcf1b9
- (void)removeFTCServiceAvailabilityListener:(id)listener;	// 0x34fcf0a1
@end
