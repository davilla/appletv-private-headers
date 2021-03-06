/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMediaOption.h"
#import <NSObject.h> // Unknown library

@class AVMediaSelectionOption;

@interface ATVAudioOption : NSObject <ATVMediaOption> {
@private
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
}
+ (id)audioOptionFromOption:(id)option;	// 0x342ccaad
- (id)initWithOption:(id)option;	// 0x342ccae9
- (id)_selectionOption;	// 0x342ccd29
- (void)dealloc;	// 0x342ccb3d
- (BOOL)isEqual:(id)equal;	// 0x342ccb89
- (id)languageCode;	// 0x342ccc81
- (id)locale;	// 0x342ccc61
- (id)localizedDisplayString;	// 0x342cccc5
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x342ccc05
@end

