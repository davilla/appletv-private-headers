/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSProtocolChecker, NSRecursiveLock;

@interface IMRemoteObject : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
	dispatch_source_s *_source;	// 12 = 0xc
	dispatch_queue_s *_queue;	// 16 = 0x10
	double _timeout;	// 20 = 0x14
	NSProtocolChecker *_protocolChecker;	// 28 = 0x1c
	NSString *_portName;	// 32 = 0x20
	NSDate *_firstDateClientWasInformedOfDisconnected;	// 36 = 0x24
	BOOL _willBeTerminated;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x31ae8511; 
@property(assign) double messageSendTimeout;	// G=0x31ae8e49; S=0x31ae8e1d; @synthesize=_timeout
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x31ae7555; @synthesize=_portName
+ (void)initialize;	// 0x31ae7811
- (id)initWithPortName:(id)portName protocol:(id)protocol;	// 0x31ae8b9d
- (void)_cleanupMachBits;	// 0x31ae85d1
- (void)_informClientOfDisconnect;	// 0x31ae87fd
- (void)_portDidBecomeInvalid;	// 0x31ae7c09
- (dispatch_queue_s *)_queue;	// 0x31ae7545
- (void)_systemShutdown:(id)shutdown;	// 0x31ae7ba5
- (void)dealloc;	// 0x31ae9589
- (id)description;	// 0x31ae8989
- (unsigned)forwardComponentArray:(id)array;	// 0x31ae9119
- (void)forwardInvocation:(id)invocation;	// 0x31ae93f9
- (void)invalidate;	// 0x31ae7b41
// declared property getter: - (BOOL)isValid;	// 0x31ae8511
// declared property getter: - (double)messageSendTimeout;	// 0x31ae8e49
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31ae77cd
// declared property getter: - (id)portName;	// 0x31ae7555
// declared property setter: - (void)setMessageSendTimeout:(double)timeout;	// 0x31ae8e1d
@end

