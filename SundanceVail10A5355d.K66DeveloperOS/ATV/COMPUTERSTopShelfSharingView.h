/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface COMPUTERSTopShelfSharingView : BRControl {
	BRImageControl *_sharingImage;	// 80 = 0x50
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_text;	// 88 = 0x58
}
- (id)init;	// 0xbd161
- (void).cxx_destruct;	// 0xbd771
- (id)accessibilityLabel;	// 0xbd6fd
- (void)layoutSubcontrols;	// 0xbd5f1
- (void)setTitle:(id)title andDescription:(id)description;	// 0xbd315
@end

