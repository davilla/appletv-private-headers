/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettings.h"

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings {
}
@property(readonly, assign, nonatomic) BOOL dimensionsAreBoundingBox;	// G=0x3149ef85; 
@property(readonly, assign, nonatomic) int height;	// G=0x3149f0fd; 
@property(readonly, assign, nonatomic) NSDictionary *pixelTransferProperties;	// G=0x3149efe1; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettingsDictionary;	// G=0x3149f165; 
@property(readonly, assign, nonatomic) int width;	// G=0x3149f131; 
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)outputSettingsDictionary exceptionReason:(id *)reason;	// 0x3149ee75
+ (id)_validValuesForScalingMode;	// 0x3149eef1
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x3149edc9
+ (id)defaultVideoOutputSettings;	// 0x3149eda9
+ (id)registeredOutputSettingsClasses;	// 0x3149ee85
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary;	// 0x3149ee0d
- (id)initWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x3149f1a1
- (id)compatibleMediaTypes;	// 0x3149f175
// declared property getter: - (BOOL)dimensionsAreBoundingBox;	// 0x3149ef85
// declared property getter: - (int)height;	// 0x3149f0fd
// declared property getter: - (id)pixelTransferProperties;	// 0x3149efe1
- (BOOL)validateUsingOutputSettingsValidator:(id)validator reason:(id *)reason;	// 0x3149ef69
// declared property getter: - (id)videoSettingsDictionary;	// 0x3149f165
// declared property getter: - (int)width;	// 0x3149f131
@end

