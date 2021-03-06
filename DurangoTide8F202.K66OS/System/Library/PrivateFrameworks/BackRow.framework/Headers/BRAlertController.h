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
@property(retain) id primaryText;	// G=0x328ec1a1; S=0x328baf89; converted property
@property(retain) id secondaryText;	// G=0x328ec171; S=0x328c7899; converted property
+ (id)alertForError:(id)error;	// 0x328bad39
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x328ec205
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x328badcd
- (id)_imageForType:(int)type;	// 0x328baf2d
- (id)accessibilityLabel;	// 0x328ec519
- (id)axSelectedItemText;	// 0x328ec0f9
- (id)axTitleText;	// 0x328ec10d
- (BOOL)brEventAction:(id)action;	// 0x328bb319
- (void)controlWasActivated;	// 0x328bb201
- (void)dealloc;	// 0x328bb439
- (BOOL)isAccessibilityElement;	// 0x328ec025
- (void)layoutSubcontrols;	// 0x328ec24d
// converted property getter: - (id)primaryText;	// 0x328ec1a1
- (id)primaryTextControl;	// 0x328ec005
- (BOOL)recreateOnReselect;	// 0x328c7961
// converted property getter: - (id)secondaryText;	// 0x328ec171
- (id)secondaryTextControl;	// 0x328ec015
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x328ec121
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x328baf89
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x328bafd1
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x328c7899
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x328c78e1
- (void)setTitle:(id)title;	// 0x328ec1d1
- (void)wasPushed;	// 0x328bb239
@end

