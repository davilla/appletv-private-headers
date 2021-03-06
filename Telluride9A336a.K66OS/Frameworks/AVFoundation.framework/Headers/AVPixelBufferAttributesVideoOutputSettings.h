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
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x314a08c1; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x314a070d
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x314a075d
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x314a0969
- (int)height;	// 0x314a08d1
- (BOOL)isDictionaryFullyFormed;	// 0x3149cd85
// declared property getter: - (id)pixelBufferAttributes;	// 0x314a08c1
- (int)width;	// 0x314a091d
- (BOOL)willYieldCompressedSamples;	// 0x3149cd81
@end

