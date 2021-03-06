/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedAudioSettingsForFig.h"
#import "AVDecodedAudioSettingsForFig.h"
#import "AVFoundation-Structs.h"
#import "AVAudioOutputSettings.h"


@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig> {
}
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x3679399d
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x36793869
- (id)initWithAVAudioSettingsDictionary:(id)avaudioSettingsDictionary exceptionReason:(id *)reason;	// 0x367939f1
- (id)initWithTrustedAVAudioSettingsDictionary:(id)trustedAVAudioSettingsDictionary;	// 0x367946e9
- (id)audioOptions;	// 0x367953c1
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x3679479d
- (AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescription *)sourceFormatDescription audioChannelLayoutSize:(unsigned *)size;	// 0x36795271
- (void)getAudioStreamBasicDescription:(AudioStreamBasicDescription *)description forAudioFileTypeID:(unsigned long)audioFileTypeID sourceFormatDescription:(opaqueCMFormatDescription *)description3;	// 0x36794a09
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x36794755
- (BOOL)willYieldCompressedSamples;	// 0x367946fd
@end

