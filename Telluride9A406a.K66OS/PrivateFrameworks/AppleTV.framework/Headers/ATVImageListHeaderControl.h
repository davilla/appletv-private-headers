/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
}
@property(readonly, assign) BRImageControl *image;	// G=0x32ffbde9; @synthesize=_image
- (id)init;	// 0x32ffbbfd
- (id)accessibilityLabel;	// 0x32ffbdc9
- (void)dealloc;	// 0x32ffbc71
// declared property getter: - (id)image;	// 0x32ffbde9
- (void)layoutSubcontrols;	// 0x32ffbd35
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32ffbcbd
@end

