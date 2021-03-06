/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
@private
	BOOL _dictionaryWasFullyFormed;	// 8 = 0x8
	NSDictionary *_adaptedVideoCompressionProperties;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned videoCodecType;	// G=0x314a1145; 
@property(readonly, assign, nonatomic) NSDictionary *videoCompressionProperties;	// G=0x314a1039; 
@property(readonly, assign, nonatomic) NSDictionary *videoEncoderSpecification;	// G=0x3149cd9d; 
+ (BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id *)reason;	// 0x314a0b2d
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x314a0f61
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x314a0fb1
- (id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id *)reason;	// 0x314a1269
- (void)dealloc;	// 0x314a121d
- (int)height;	// 0x314a1185
- (BOOL)isDictionaryFullyFormed;	// 0x3149cd8d
// declared property getter: - (unsigned long)videoCodecType;	// 0x314a1145
// declared property getter: - (id)videoCompressionProperties;	// 0x314a1039
// declared property getter: - (id)videoEncoderSpecification;	// 0x3149cd9d
- (int)width;	// 0x314a11d1
- (BOOL)willYieldCompressedSamples;	// 0x3149cd89
@end

