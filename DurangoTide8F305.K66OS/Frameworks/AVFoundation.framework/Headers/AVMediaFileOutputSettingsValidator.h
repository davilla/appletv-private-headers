/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVOutputSettingsValidation.h"

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
@private
	AVMediaFileType *_fileType;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVMediaFileType *fileType;	// G=0x34778fdd; 
+ (void)initialize;	// 0x3477a361
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)fileType;	// 0x3477a2e5
- (id)init;	// 0x3477a2cd
- (id)initWithFileType:(id)fileType;	// 0x3477b9c1
- (void)dealloc;	// 0x3477a285
// declared property getter: - (id)fileType;	// 0x34778fdd
- (BOOL)validateAudioOutputSettings:(id)settings reason:(id *)reason;	// 0x3477d4a9
- (BOOL)validateVideoOutputSettings:(id)settings reason:(id *)reason;	// 0x34778fed
@end

