/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, MSCameraDeviceManager, PTPCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {
	NSMutableArray *_devices;	// 4 = 0x4
	NSMutableArray *_browsers;	// 8 = 0x8
	int _numberOfBrowsingBrowsers;	// 12 = 0xc
	MSCameraDeviceManager *_msDevManager;	// 16 = 0x10
	PTPCameraDeviceManager *_ptpDevManager;	// 20 = 0x14
}
@property(readonly, assign) NSMutableArray *browsers;	// G=0x332b61f9; @synthesize=_browsers
@property(readonly, assign) NSMutableArray *devices;	// G=0x332b61e5; @synthesize=_devices
+ (id)defaultBrowser;	// 0x332b6585
+ (BOOL)exists;	// 0x332b61d1
- (id)init;	// 0x332b646d
- (void)addBrowser:(id)browser;	// 0x332b6275
- (int)addMSCamera:(id)camera;	// 0x332b87c5
- (int)addPTPCamera:(id)camera;	// 0x332b7b79
- (int)addRemoveMSCamera;	// 0x332b7e89
// declared property getter: - (id)browsers;	// 0x332b61f9
- (void)dealloc;	// 0x332b6381
- (id)deviceWithDelegate:(id)delegate;	// 0x332b68a9
// declared property getter: - (id)devices;	// 0x332b61e5
- (void)finalize;	// 0x332b6295
- (void)handleCommandCompletionNotification:(id)notification;	// 0x332b6209
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x332b6969
- (void)informBrowserDelegateUsingSelector:(SEL)selector withObject:(id)object;	// 0x332b61f5
- (void)removeBrowser:(id)browser;	// 0x332b6255
- (void)removeMSCamera:(id)camera;	// 0x332b6e39
- (void)removePTPCamera:(id)camera;	// 0x332b74c1
- (int)start:(id)start;	// 0x332b80fd
- (void)stop:(id)stop;	// 0x332b8391
@end

