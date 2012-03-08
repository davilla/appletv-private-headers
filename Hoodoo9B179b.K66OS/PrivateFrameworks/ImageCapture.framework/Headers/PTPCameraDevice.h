/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {
@private
	void *_ptpCameraProperties;	// 12 = 0xc
}
@property(readonly, assign) PTPInitiator *initiator;	// G=0x358c6975; 
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x358c7021
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x358c6a59
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x358c6f09
- (void)dealloc;	// 0x358c6fc5
- (BOOL)eject;	// 0x358c6a31
- (void)enumerateContent;	// 0x358c6989
- (void)finalize;	// 0x358c6f69
// declared property getter: - (id)initiator;	// 0x358c6975
@end
