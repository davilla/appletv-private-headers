/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import "BRController.h"
#import "AppleTV-Structs.h"

@class ATVIPv4AddressEntryControl, BRHeaderControl, BRTextControl, NSString;
@protocol ATVDottedQuadEntryDelegate;

@interface ATVDottedQuadEntryController : BRController <BRTextFieldDelegate> {
@private
	id<ATVDottedQuadEntryDelegate> _delegate;	// 80 = 0x50
	ATVIPv4AddressEntryControl *_editor;	// 84 = 0x54
	BRTextControl *_prompt;	// 88 = 0x58
	BRHeaderControl *_header;	// 92 = 0x5c
	NSString *_dottedQuad;	// 96 = 0x60
}
@property(retain) NSString *dottedQuad;	// G=0x35cd02f5; S=0x35cd0305; converted property
- (id)initWithTitle:(id)title prompt:(id)prompt label:(id)label notifying:(id)notifying;	// 0x35ccfd99
- (id)accessibilityLabel;	// 0x35cd0365
- (void)dealloc;	// 0x35ccff69
// converted property getter: - (id)dottedQuad;	// 0x35cd02f5
// converted property setter: - (void)setDottedQuad:(id)quad;	// 0x35cd0305
- (void)setFrame:(CGRect)frame;	// 0x35cd0005
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x35cd0219
- (void)textDidChange:(id)text;	// 0x35cd0239
- (void)textDidEndEditing:(id)text;	// 0x35cd023d
@end

