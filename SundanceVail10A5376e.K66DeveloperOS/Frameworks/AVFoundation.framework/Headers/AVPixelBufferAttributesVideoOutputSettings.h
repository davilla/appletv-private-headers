/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x3691d5f5; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x3691d311
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x3691d2b9
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x3691d361
- (id)initWithTrustedPixelBufferAttributes:(id)trustedPixelBufferAttributes;	// 0x3691d519
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x3691d5f1
- (int)height;	// 0x3691d599
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x3691d5ed
// declared property getter: - (id)pixelBufferAttributes;	// 0x3691d5f5
- (int)width;	// 0x3691d549
- (BOOL)willYieldCompressedSamples;	// 0x3691d5e9
@end
