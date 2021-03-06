/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "_NSCFURLProtocolBridge.h"

@class NSMutableArray, NSCountedSet, NSThread;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge {
	NSMutableArray *_workQueue;	// 24 = 0x18
	NSCountedSet *_runloops;	// 28 = 0x1c
	BOOL _canSignalDirectly;	// 32 = 0x20
	NSThread *_processThread;	// 36 = 0x24
}
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x315b3331
- (void)dealloc;	// 0x315b42e9
- (void)finalize;	// 0x3162a42d
- (void)processEventQ;	// 0x315b3bb5
- (void)pushEvent:(id)event from:(const char *)from;	// 0x315b3939
- (void)releaseWorkQueue;	// 0x315b434d
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x315b37c9
- (BOOL)shouldSignalDirectly;	// 0x315b3b11
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x3162a46d
@end

