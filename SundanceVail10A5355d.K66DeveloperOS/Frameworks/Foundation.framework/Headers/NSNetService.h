/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSNetService : NSObject {
	id _netService;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _reserved;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x3470ba15; S=0x3470ba25; converted property
+ (id)dataFromTXTRecordDictionary:(id)txtrecordDictionary;	// 0x3470ccb1
+ (id)dictionaryFromTXTRecordData:(id)txtrecordData;	// 0x3470cc31
- (id)initWithCFNetService:(CFNetServiceRef)cfnetService;	// 0x3470b6d1
- (id)initWithDomain:(id)domain type:(id)type name:(id)name;	// 0x3470b9f1
- (id)initWithDomain:(id)domain type:(id)type name:(id)name port:(int)port;	// 0x3470b881
- (id)TXTRecordData;	// 0x3470cbcd
- (void)_dispatchCallBackWithError:(XXStruct_K5nmsA)error;	// 0x3470c13d
- (CFNetServiceRef)_internalNetService;	// 0x3470c6b5
- (id)_monitors;	// 0x3470ca25
- (void)_scheduleInDefaultRunLoopForMode:(id)mode;	// 0x3470ba35
- (id)addresses;	// 0x3470bdcd
- (void)dealloc;	// 0x3470c429
// converted property getter: - (id)delegate;	// 0x3470ba15
- (id)description;	// 0x3470c6c5
- (id)domain;	// 0x3470bd0d
- (void)finalize;	// 0x3470c57d
- (BOOL)getInputStream:(out id *)stream outputStream:(out id *)stream2;	// 0x3470c7d5
- (unsigned)hash;	// 0x3470c751
- (id)hostName;	// 0x3470bd9d
- (BOOL)isEqual:(id)equal;	// 0x3470c765
- (id)name;	// 0x3470bd6d
- (int)port;	// 0x3470be3d
- (void)publish;	// 0x3470c06d
- (void)publishWithOptions:(unsigned)options;	// 0x3470be59
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3470bc15
- (void)resolve;	// 0x3470ca0d
- (void)resolveWithTimeout:(double)timeout;	// 0x3470c885
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3470bb1d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3470ba25
- (BOOL)setTXTRecordData:(id)data;	// 0x3470cbad
- (void)startMonitoring;	// 0x3470ca35
- (void)stop;	// 0x3470c0c9
- (void)stopMonitoring;	// 0x3470caf1
- (id)type;	// 0x3470bd3d
@end

