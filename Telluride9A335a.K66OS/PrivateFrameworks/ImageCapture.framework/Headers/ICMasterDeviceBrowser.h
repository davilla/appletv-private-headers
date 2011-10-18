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
@property(readonly, assign) NSMutableArray *browsers;	// G=0x36dc846d; @synthesize=_browsers
@property(readonly, assign) NSMutableArray *devices;	// G=0x36dc8459; @synthesize=_devices
+ (id)defaultBrowser;	// 0x36dc85a9
+ (BOOL)exists;	// 0x36dc8441
- (id)init;	// 0x36dc847d
- (void)addBrowser:(id)browser;	// 0x36dcae51
- (int)addMSCamera:(id)camera;	// 0x36dc9cfd
- (int)addPTPCamera:(id)camera;	// 0x36dcaaa5
- (int)addRemoveMSCamera;	// 0x36dc9a4d
// declared property getter: - (id)browsers;	// 0x36dc846d
- (void)dealloc;	// 0x36dcaf71
- (id)deviceWithDelegate:(id)delegate;	// 0x36dc85f1
// declared property getter: - (id)devices;	// 0x36dc8459
- (void)finalize;	// 0x36dcae75
- (void)handleCommandCompletionNotification:(id)notification;	// 0x36dc8bf9
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x36dc86b5
- (void)informBrowserDelegateUsingSelector:(SEL)selector withObject:(id)object;	// 0x36dc8469
- (void)removeBrowser:(id)browser;	// 0x36dcae2d
- (void)removeMSCamera:(id)camera;	// 0x36dc9325
- (void)removePTPCamera:(id)camera;	// 0x36dca36d
- (int)start:(id)start;	// 0x36dc9019
- (void)stop:(id)stop;	// 0x36dc8c55
@end

