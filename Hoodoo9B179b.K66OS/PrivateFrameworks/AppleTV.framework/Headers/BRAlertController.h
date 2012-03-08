/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRHeaderControl, BRImageControl, BRTextControl, BRAlignmentAdjustingTextControl;

@interface BRAlertController : BRController {
@private
	id _eventDelegate;	// 84 = 0x54
	SEL _eventSelector;	// 88 = 0x58
	BRHeaderControl *_header;	// 92 = 0x5c
	int _type;	// 96 = 0x60
	BRTextControl *_primary;	// 100 = 0x64
	BRAlignmentAdjustingTextControl *_secondary;	// 104 = 0x68
	BRAlignmentAdjustingTextControl *_footer;	// 108 = 0x6c
	BRImageControl *_image;	// 112 = 0x70
}
@property(retain) id footerText;	// G=0x3027b459; S=0x3027b409; converted property
@property(retain) id primaryText;	// G=0x3027b2a1; S=0x3027b1b9; converted property
@property(retain) id secondaryText;	// G=0x3027b339; S=0x3027b2e9; converted property
+ (id)alertForError:(id)error;	// 0x3027a841
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x3027a8e9
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x3027a935
- (id)_imageForType:(int)type;	// 0x3027b5ed
- (id)accessibilityLabel;	// 0x3027b585
- (id)axSelectedItemText;	// 0x3027b63d
- (id)axTitleText;	// 0x3027b62d
- (BOOL)brEventAction:(id)action;	// 0x3027afe9
- (void)dealloc;	// 0x3027aab1
// converted property getter: - (id)footerText;	// 0x3027b459
- (id)footerTextControl;	// 0x3027b491
- (BOOL)isAccessibilityElement;	// 0x3027b581
- (void)layoutSubcontrols;	// 0x3027ab61
// converted property getter: - (id)primaryText;	// 0x3027b2a1
- (id)primaryTextControl;	// 0x3027b2d9
- (BOOL)recreateOnReselect;	// 0x3027afe5
// converted property getter: - (id)secondaryText;	// 0x3027b339
- (id)secondaryTextControl;	// 0x3027b371
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x3027b529
// converted property setter: - (void)setFooterText:(id)text;	// 0x3027b409
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x3027b4a1
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x3027b1b9
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x3027b209
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x3027b2e9
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x3027b381
- (void)setTitle:(id)title;	// 0x3027b179
- (void)wasPushed;	// 0x3027b119
@end
