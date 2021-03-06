/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRTextControl, BRAlignmentAdjustingTextControl, BRHeaderControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRAlertController : BRController {
	id _eventDelegate;	// 96 = 0x60
	SEL _eventSelector;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
	int _type;	// 108 = 0x6c
	BRTextControl *_primary;	// 112 = 0x70
	BRAlignmentAdjustingTextControl *_secondary;	// 116 = 0x74
	BRAlignmentAdjustingTextControl *_footer;	// 120 = 0x78
	BRImageControl *_image;	// 124 = 0x7c
}
@property(retain) id footerText;	// G=0x29b1f5; S=0x29b1a5; converted property
@property(retain) id primaryText;	// G=0x29b03d; S=0x29af55; converted property
@property(retain) id secondaryText;	// G=0x29b0d5; S=0x29b085; converted property
+ (id)alertForError:(id)error;	// 0x29a61d
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x29a6bd
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x29a709
- (id)_imageForType:(int)type;	// 0x29b389
- (id)accessibilityLabel;	// 0x29b321
- (id)axSelectedItemText;	// 0x29b3d9
- (id)axTitleText;	// 0x29b3c9
- (BOOL)brEventAction:(id)action;	// 0x29ad5d
- (void)dealloc;	// 0x29a895
// converted property getter: - (id)footerText;	// 0x29b1f5
- (id)footerTextControl;	// 0x29b22d
- (BOOL)isAccessibilityElement;	// 0x29b31d
- (void)layoutSubcontrols;	// 0x29a949
// converted property getter: - (id)primaryText;	// 0x29b03d
- (id)primaryTextControl;	// 0x29b075
- (BOOL)recreateOnReselect;	// 0x29ad59
// converted property getter: - (id)secondaryText;	// 0x29b0d5
- (id)secondaryTextControl;	// 0x29b10d
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x29b2c5
// converted property setter: - (void)setFooterText:(id)text;	// 0x29b1a5
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x29b23d
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x29af55
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x29afa5
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x29b085
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x29b11d
- (void)setTitle:(id)title;	// 0x29af15
- (void)wasPushed;	// 0x29aeb5
@end

