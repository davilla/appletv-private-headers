/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
@private
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x323eeee5; S=0x323eeef9; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x323ee559; S=0x323ee569; 
- (id)init;	// 0x323ee3a5
- (void)cleanUpServerConnection;	// 0x323ee355
- (void)cleanUpServerConnectionNoLock;	// 0x323ee315
- (void)dealloc;	// 0x323ee4ad
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x323ee7e5
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x323ee61d
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x323ee6a5
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x323ee75d
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x323eebbd
- (void)postUpdatesIfNecessary;	// 0x323eedfd
- (void)reestablishServerConnectionIfNeeded;	// 0x323ee1d5
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x323eeef9
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x323ee569
- (BOOL)setUpServerConnection;	// 0x323edfc1
// declared property getter: - (id)subscriberCellularProvider;	// 0x323eeee5
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x323ee559
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x323ee859
@end

