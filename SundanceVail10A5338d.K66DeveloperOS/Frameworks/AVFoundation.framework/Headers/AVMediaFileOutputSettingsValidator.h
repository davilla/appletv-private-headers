/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVOutputSettingsValidation.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
	AVMediaFileType *_fileType;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVMediaFileType *fileType;	// G=0x317c9041; 
+ (void)initialize;	// 0x317c8d0d
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)fileType;	// 0x317c8e5d
- (id)init;	// 0x317c8ee9
- (id)initWithFileType:(id)fileType;	// 0x317c8efd
- (void)dealloc;	// 0x317c8ff5
// declared property getter: - (id)fileType;	// 0x317c9041
- (BOOL)validateAudioOutputSettings:(id)settings reason:(id *)reason;	// 0x317c9051
- (BOOL)validateVideoOutputSettings:(id)settings reason:(id *)reason;	// 0x317c91dd
@end
