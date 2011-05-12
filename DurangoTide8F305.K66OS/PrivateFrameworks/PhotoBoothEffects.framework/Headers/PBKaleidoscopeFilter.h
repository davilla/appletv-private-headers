/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBKaleidoscopeFilter : PBFilter {
	float _inputAmount;	// 8 = 0x8
	CGPoint inputPoint;	// 12 = 0xc
	float inputRotation;	// 20 = 0x14
}
@property(assign) float inputAmount;	// G=0x310b657d; S=0x310b66b1; @dynamic
@property(assign) CGPoint inputPoint;	// G=0x310b6c9d; S=0x310b6c71; @synthesize
@property(assign) float inputRotation;	// G=0x310b6599; S=0x310b65a9; @synthesize
- (const char *)_fragmentShaderSource;	// 0x310b658d
- (id)_glesUniforms;	// 0x310b65c9
- (BOOL)allowAbsoluteGestures;	// 0x310b6579
// declared property getter: - (float)inputAmount;	// 0x310b657d
// declared property getter: - (CGPoint)inputPoint;	// 0x310b6c9d
// declared property getter: - (float)inputRotation;	// 0x310b6599
- (unsigned long)kernelArgCount;	// 0x310b65b9
- (/*function-pointer*/ void *)kernelWrapper;	// 0x310b65bd
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x310b6965
- (void)setDefaults;	// 0x310b6645
// declared property setter: - (void)setInputAmount:(float)amount;	// 0x310b66b1
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x310b6c71
// declared property setter: - (void)setInputRotation:(float)rotation;	// 0x310b65a9
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x310b66fd
@end

