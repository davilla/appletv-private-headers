/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBRuntimeWrapper : NSObject {
@private
	void **argList;	// 4 = 0x4
	unsigned *argSizeList;	// 8 = 0x8
	unsigned argIndex;	// 12 = 0xc
	CFArrayRef extraArgsList;	// 16 = 0x10
	id *cleanupHandler;	// 20 = 0x14
	CGSize imageDims;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned argIndex;	// G=0x310b63e5; S=0x310b63f5; @synthesize
@property(assign, nonatomic) void **argList;	// G=0x310b6425; S=0x310b6435; @synthesize
@property(assign, nonatomic) unsigned *argSizeList;	// G=0x310b6405; S=0x310b6415; @synthesize
@property(assign, nonatomic) id *cleanupHandler;	// G=0x310b63c5; S=0x310b63d5; @synthesize
@property(assign, nonatomic) CFArrayRef extraArgsList;	// G=0x310b63a5; S=0x310b63b5; @synthesize
@property(assign, nonatomic) CGSize imageDims;	// G=0x310b6375; S=0x310b638d; @synthesize
- (id)init;	// 0x310b64ad
- (void)_applyFilter:(id)filter onInputSurface:(IOSurfaceRef)surface mirrored:(BOOL)mirrored withResultHandler:(id)resultHandler;	// 0x310b6d61
- (void)_setKernelArg:(void *)arg withSize:(unsigned long)size;	// 0x310b73c9
- (void)_setKernelArgAsBuffer:(void *)buffer withSize:(unsigned long)size;	// 0x310b6cf5
- (void)_setKernelCleanupHandler:(id *)handler;	// 0x310b6ce1
- (void)applyFilter:(id)filter onInputSurface:(IOSurfaceRef)surface mirrored:(BOOL)mirrored withResultHandler:(id)resultHandler;	// 0x310b6481
// declared property getter: - (unsigned long)argIndex;	// 0x310b63e5
// declared property getter: - (void **)argList;	// 0x310b6425
// declared property getter: - (unsigned *)argSizeList;	// 0x310b6405
// declared property getter: - (id *)cleanupHandler;	// 0x310b63c5
- (IOSurfaceRef)createIOSurfaceForWidth:(unsigned long)width height:(unsigned long)height pixelFormat:(unsigned)format workOnRawData:(id)data;	// 0x310b745d
- (void)dealloc;	// 0x310b6509
// declared property getter: - (CFArrayRef)extraArgsList;	// 0x310b63a5
// declared property getter: - (CGSize)imageDims;	// 0x310b6375
// declared property setter: - (void)setArgIndex:(unsigned long)index;	// 0x310b63f5
// declared property setter: - (void)setArgList:(void **)list;	// 0x310b6435
// declared property setter: - (void)setArgSizeList:(unsigned *)list;	// 0x310b6415
// declared property setter: - (void)setCleanupHandler:(id *)handler;	// 0x310b63d5
// declared property setter: - (void)setExtraArgsList:(CFArrayRef)list;	// 0x310b63b5
// declared property setter: - (void)setImageDims:(CGSize)dims;	// 0x310b638d
- (void)setKernelArg:(void *)arg withSize:(unsigned long)size;	// 0x310b646d
- (void)setKernelArgAsBuffer:(void *)buffer withSize:(unsigned long)size;	// 0x310b6459
- (void)setKernelCleanupHandler:(id *)handler;	// 0x310b6445
@end

