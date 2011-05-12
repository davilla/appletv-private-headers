/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRController.h"
#import "BRAXSelectionChangeProtocol.h"
#import "BRAXTitleChangeProtocol.h"

@class BRAlignmentAdjustingTextControl, BRTextControl, BRHeaderControl, BRImageControl;

@interface BRAlertController : BRController <BRAXTitleChangeProtocol, BRAXSelectionChangeProtocol> {
@private
	id _eventDelegate;	// 60 = 0x3c
	SEL _eventSelector;	// 64 = 0x40
	BRHeaderControl *_header;	// 68 = 0x44
	int _type;	// 72 = 0x48
	BRTextControl *_primary;	// 76 = 0x4c
	BRAlignmentAdjustingTextControl *_secondary;	// 80 = 0x50
	BRImageControl *_image;	// 84 = 0x54
}
@property(retain) id primaryText;	// G=0x3296107d; S=0x3292fda9; converted property
@property(retain) id secondaryText;	// G=0x3296104d; S=0x3293c6b9; converted property
+ (id)alertForError:(id)error;	// 0x3292fb59
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x329610e1
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x3292fbed
- (id)_imageForType:(int)type;	// 0x3292fd4d
- (id)accessibilityLabel;	// 0x329613f5
- (id)axSelectedItemText;	// 0x32960fd5
- (id)axTitleText;	// 0x32960fe9
- (BOOL)brEventAction:(id)action;	// 0x32930139
- (void)controlWasActivated;	// 0x32930021
- (void)dealloc;	// 0x32930259
- (BOOL)isAccessibilityElement;	// 0x32960f01
- (void)layoutSubcontrols;	// 0x32961129
// converted property getter: - (id)primaryText;	// 0x3296107d
- (id)primaryTextControl;	// 0x32960ee1
- (BOOL)recreateOnReselect;	// 0x3293c781
// converted property getter: - (id)secondaryText;	// 0x3296104d
- (id)secondaryTextControl;	// 0x32960ef1
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x32960ffd
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x3292fda9
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x3292fdf1
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x3293c6b9
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x3293c701
- (void)setTitle:(id)title;	// 0x329610ad
- (void)wasPushed;	// 0x32930059
@end

