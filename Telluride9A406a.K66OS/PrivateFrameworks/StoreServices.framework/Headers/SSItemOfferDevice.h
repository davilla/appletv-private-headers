/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSItemOfferDeviceError, NSString;

@interface SSItemOfferDevice : NSObject {
@private
	int _deviceIdentifier;	// 4 = 0x4
	SSItemOfferDeviceError *_incompatibleDeviceError;	// 8 = 0x8
	SSItemOfferDeviceError *_incompatibleSystemError;	// 12 = 0xc
	NSString *_minimumProductVersion;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int deviceIdentifier;	// G=0x31559f11; @synthesize=_deviceIdentifier
@property(readonly, assign, nonatomic) SSItemOfferDeviceError *incompatibleDeviceError;	// G=0x31559f21; @synthesize=_incompatibleDeviceError
@property(readonly, assign, nonatomic) SSItemOfferDeviceError *incompatibleSystemError;	// G=0x31559f31; @synthesize=_incompatibleSystemError
@property(readonly, assign, nonatomic) NSString *minimumProductVersion;	// G=0x31559f41; @synthesize=_minimumProductVersion
- (id)init;	// 0x3155999d
- (id)initWithDeviceIdentifier:(int)deviceIdentifier;	// 0x315599b1
- (id)initWithOfferDeviceDicitionary:(id)offerDeviceDicitionary;	// 0x315599f1
- (void)dealloc;	// 0x31559e9d
// declared property getter: - (int)deviceIdentifier;	// 0x31559f11
// declared property getter: - (id)incompatibleDeviceError;	// 0x31559f21
// declared property getter: - (id)incompatibleSystemError;	// 0x31559f31
// declared property getter: - (id)minimumProductVersion;	// 0x31559f41
@end

