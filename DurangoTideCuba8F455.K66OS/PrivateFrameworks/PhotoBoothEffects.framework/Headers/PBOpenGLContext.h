/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBContext.h"


@interface PBOpenGLContext : PBContext {
	void *_priv;	// 4 = 0x4
}
@property(assign) CVPixelBufferPoolRef largePool;	// G=0x30b5cb35; S=0x30b5cb65; converted property
@property(assign) CAImageQueueRef outputImageQueue;	// G=0x30b5cb45; S=0x30b5cb55; converted property
@property(assign) CVPixelBufferPoolRef smallPool;	// G=0x30b5cb25; S=0x30b5cb8d; converted property
- (id)init;	// 0x30b5cc49
- (id)_compileFilter:(id)filter;	// 0x30b5cf71
- (unsigned)_compileShader:(const char *)shader type:(unsigned)type;	// 0x30b5d7b1
- (void)_createPixelBuffer:(CVBufferRef *)buffer fromPool:(CVPixelBufferPoolRef)pool;	// 0x30b5d551
- (void)_createPixelBufferPools;	// 0x30b5d591
- (void)_debugDump;	// 0x30b5d85d
- (BOOL)_registerFilter:(id)filter;	// 0x30b5cedd
- (unsigned)_textureForLookupTableName:(id)lookupTableName;	// 0x30b5cbb5
- (CGImageRef)createCGImageForFilterViaGL:(id)filterViaGL inputPixelBuffer:(CVBufferRef)buffer;	// 0x30b5dcb9
- (CVBufferRef)createCVPixelBufferForFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;	// 0x30b5d8f1
- (void)dealloc;	// 0x30b5ce21
// converted property getter: - (CVPixelBufferPoolRef)largePool;	// 0x30b5cb35
// converted property getter: - (CAImageQueueRef)outputImageQueue;	// 0x30b5cb45
- (void)preloadFilter:(id)filter;	// 0x30b5cc31
- (void)renderFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer;	// 0x30b5cc0d
- (void)renderFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;	// 0x30b5e1a1
- (void)renderNineUp:(id)up inputPixelBuffer:(CVBufferRef)buffer;	// 0x30b5cbe9
- (void)renderNineUp:(id)up inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;	// 0x30b5df09
// converted property setter: - (void)setLargePool:(CVPixelBufferPoolRef)pool;	// 0x30b5cb65
// converted property setter: - (void)setOutputImageQueue:(CAImageQueueRef)queue;	// 0x30b5cb55
// converted property setter: - (void)setSmallPool:(CVPixelBufferPoolRef)pool;	// 0x30b5cb8d
// converted property getter: - (CVPixelBufferPoolRef)smallPool;	// 0x30b5cb25
@end
