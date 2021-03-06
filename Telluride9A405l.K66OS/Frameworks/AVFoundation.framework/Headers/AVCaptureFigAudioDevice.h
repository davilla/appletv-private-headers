/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	BOOL _levelMeteringEnabled;	// 12 = 0xc
	BOOL _isConnected;	// 13 = 0xd
	NSString *_localizedName;	// 16 = 0x10
}
@property(readonly, assign) BOOL isConnected;	// G=0x346d4509; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x346d44f5; converted property
+ (id)_devices;	// 0x346d4575
- (id)init;	// 0x346d4521
- (id)initWithProperties:(id)properties;	// 0x346d49e9
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)audioInputDeviceLocalizedName;	// 0x346d46ed
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x346d47bd
- (void)dealloc;	// 0x346d4959
- (id)devicePropertiesDictionary;	// 0x346d489d
- (BOOL)hasMediaType:(id)type;	// 0x346d48d5
// converted property getter: - (BOOL)isConnected;	// 0x346d4509
- (BOOL)isInUseByAnotherApplication;	// 0x346d4505
// converted property getter: - (id)localizedName;	// 0x346d44f5
- (id)modelID;	// 0x346d4909
- (BOOL)startUsingDevice:(id *)device;	// 0x346d4519
- (void)stopUsingDevice;	// 0x346d451d
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x346d4869
- (id)uniqueID;	// 0x346d4931
@end

