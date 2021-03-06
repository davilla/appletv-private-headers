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
@property(readonly, assign) PTPInitiator *initiator;	// G=0x3260498d; 
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x32605039
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x32604a71
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x32604f21
- (void)dealloc;	// 0x32604fdd
- (BOOL)eject;	// 0x32604a49
- (void)enumerateContent;	// 0x326049a1
- (void)finalize;	// 0x32604f81
// declared property getter: - (id)initiator;	// 0x3260498d
@end

