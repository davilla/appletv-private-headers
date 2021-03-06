/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSubtitleOption.h"

@class NSString, AVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface ATVAVFSubtitleOption : ATVSubtitleOption {
	AVMediaSelectionOption *_selectionOption;	// 24 = 0x18
	NSString *_sdhSuffixString;	// 28 = 0x1c
}
+ (id)emptySubtitleOption;	// 0x1f5d99
+ (id)subtitleOptionFromOption:(id)option;	// 0x1f5dd5
- (id)initWithOption:(id)option;	// 0x1f5e11
- (id)_selectionOption;	// 0x1f60ed
- (void)dealloc;	// 0x1f5ea5
- (BOOL)isEqual:(id)equal;	// 0x1f5f09
- (id)languageCode;	// 0x1f5fe9
- (id)localizedDisplayString;	// 0x1f602d
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x1f5f8d
@end

