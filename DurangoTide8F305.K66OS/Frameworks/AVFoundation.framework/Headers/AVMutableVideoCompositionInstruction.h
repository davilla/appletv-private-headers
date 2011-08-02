/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionInstruction.h"

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
@private
	AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 8 = 0x8
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x34757a69; S=0x34757a3d; 
@property(assign, nonatomic) BOOL enablePostProcessing;	// G=0x347579b9; S=0x3475798d; 
@property(copy, nonatomic) NSArray *layerInstructions;	// G=0x34757a11; S=0x347579e5; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x34759891; S=0x34757a95; 
+ (id)videoCompositionInstruction;	// 0x34758189
// declared property getter: - (CGColorRef)backgroundColor;	// 0x34757a69
// declared property getter: - (BOOL)enablePostProcessing;	// 0x347579b9
// declared property getter: - (id)layerInstructions;	// 0x34757a11
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x34757a3d
// declared property setter: - (void)setEnablePostProcessing:(BOOL)processing;	// 0x3475798d
// declared property setter: - (void)setLayerInstructions:(id)instructions;	// 0x347579e5
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x34757a95
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x34759891
@end
