/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBXRayFilter : PBFilter {
}
- (const char *)_fragmentShaderSource;	// 0x310afb6d
- (id)_glesUniforms;	// 0x310afbb1
- (id)_lookupTableForName:(id)name;	// 0x310afc2d
- (id)_lookupTableNames;	// 0x310afb89
- (unsigned long)kernelArgCount;	// 0x310afb79
- (/*function-pointer*/ void *)kernelWrapper;	// 0x310afb7d
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x310afdf9
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x310afd85
@end

