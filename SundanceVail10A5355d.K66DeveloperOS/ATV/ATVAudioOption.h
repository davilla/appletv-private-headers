/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMediaOption.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface ATVAudioOption : XXUnknownSuperclass <ATVMediaOption> {
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
}
+ (id)audioOptionFromOption:(id)option;	// 0x1fa88d
- (id)initWithOption:(id)option;	// 0x1fa8c9
- (id)_selectionOption;	// 0x1fab75
- (void)dealloc;	// 0x1fa91d
- (BOOL)isEqual:(id)equal;	// 0x1fa969
- (id)languageCode;	// 0x1faa61
- (id)locale;	// 0x1faa41
- (id)localizedDisplayString;	// 0x1faaa5
- (id)localizedDisplayStringForIdentifier;	// 0x1fab0d
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x1fa9e5
@end
