/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBTwirlFilter : PBFilter {
	float _inputAmount;	// 8 = 0x8
	CGPoint inputPoint;	// 12 = 0xc
	float inputRotation;	// 20 = 0x14
}
@property(assign) float inputAmount;	// G=0x30b5af49; S=0x30b5b091; @dynamic
@property(assign) CGPoint inputPoint;	// G=0x30b5b3e1; S=0x30b5b3b5; @synthesize
@property(assign) float inputRotation;	// G=0x30b5af65; S=0x30b5af75; @synthesize
- (const char *)_fragmentShaderSource;	// 0x30b5af59
- (id)_glesUniforms;	// 0x30b5afbd
- (id)_lookupTableNames;	// 0x30b5af95
// declared property getter: - (float)inputAmount;	// 0x30b5af49
// declared property getter: - (CGPoint)inputPoint;	// 0x30b5b3e1
// declared property getter: - (float)inputRotation;	// 0x30b5af65
- (unsigned long)kernelArgCount;	// 0x30b5af85
- (/*function-pointer*/ void *)kernelWrapper;	// 0x30b5af89
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x30b5b1f5
- (void)setDefaults;	// 0x30b5b025
// declared property setter: - (void)setInputAmount:(float)amount;	// 0x30b5b091
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x30b5b3b5
// declared property setter: - (void)setInputRotation:(float)rotation;	// 0x30b5af75
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x30b5b0dd
@end

