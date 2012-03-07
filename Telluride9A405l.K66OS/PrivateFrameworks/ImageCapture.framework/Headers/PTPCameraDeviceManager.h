/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "DeviceManager.h"

@class NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSNetServiceBrowser *_netServiceBrowser;	// 16 = 0x10
	NSMutableArray *_netServices;	// 20 = 0x14
}
- (id)init;	// 0x370168b1
- (void)closeDeviceImp:(id)imp;	// 0x370157b5
- (void)closeSessionImp:(id)imp;	// 0x370154a5
- (void)dealloc;	// 0x37014531
- (void)deleteFileImp:(id)imp;	// 0x37014d11
- (void)downloadFileImp:(id)imp;	// 0x37014831
- (void)ejectImp:(id)imp;	// 0x3701478d
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x37014f2d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x370150f5
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x37014659
- (void)handleEventImp:(id)imp;	// 0x3701455d
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x37015fb9
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x37015ee1
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x370167a1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x37016735
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x370166c9
- (void)netServiceDidResolveAddress:(id)netService;	// 0x3701605d
- (void)netServiceDidStop:(id)netService;	// 0x37015f4d
- (void)openDeviceImp:(id)imp;	// 0x37015a45
- (void)openSessionImp:(id)imp;	// 0x370155d9
- (void)startRunning;	// 0x37016885
- (void)stopRunning;	// 0x37016859
- (void)syncClockImp:(id)imp;	// 0x3701538d
- (id)usbLocationIDsOfPTPDevices;	// 0x37015d21
@end
