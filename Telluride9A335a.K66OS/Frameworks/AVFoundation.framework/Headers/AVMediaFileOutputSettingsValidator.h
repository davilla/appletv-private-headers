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
@property(readonly, assign, nonatomic) AVMediaFileType *fileType;	// G=0x3234ed45; 
+ (void)initialize;	// 0x3234f61d
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)fileType;	// 0x3234f58d
- (id)init;	// 0x3234fa6d
- (id)initWithFileType:(id)fileType;	// 0x3234f965
- (void)dealloc;	// 0x3234f919
// declared property getter: - (id)fileType;	// 0x3234ed45
- (BOOL)validateAudioOutputSettings:(id)settings reason:(id *)reason;	// 0x3234f76d
- (BOOL)validateVideoOutputSettings:(id)settings reason:(id *)reason;	// 0x3234ed55
@end

