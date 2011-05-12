/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) NSDictionary *audioSettingsDictionary;	// G=0x34779b1d; 
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x34779b71
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x34779bad
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3477d201
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary;	// 0x3477b2a5
+ (id)defaultAudioOutputSettings;	// 0x3477b25d
+ (id)registeredOutputSettingsClasses;	// 0x34779bc1
- (id)initWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id *)reason;	// 0x34779b5d
// declared property getter: - (id)audioSettingsDictionary;	// 0x34779b1d
- (id)compatibleMediaTypes;	// 0x34779b31
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x34779b01
@end

