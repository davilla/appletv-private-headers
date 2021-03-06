/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRScrollingTextBoxControl, NSString, NSAttributedString, BRHeaderControl, BRPanelControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRScrollingTextControl : BRControl {
	BRHeaderControl *_header;	// 80 = 0x50
	BRScrollingTextBoxControl *_textBox;	// 84 = 0x54
	BRPanelControl *_buttonGrid;	// 88 = 0x58
	NSAttributedString *_attributedString;	// 92 = 0x5c
	long _selectedIndex;	// 96 = 0x60
	NSString *_dialogIdentifier;	// 100 = 0x64
}
@property(retain) NSAttributedString *attributedString;	// G=0x2e1859; S=0x2e181d; converted property
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x2e1975; @dynamic
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2e13c5
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2e12d9
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x2e1095
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus modalIdentifier:(id)identifier;	// 0x2e10f9
- (id)init;	// 0x2e14b1
- (id)_dialogIdentifier;	// 0x2e1f2d
- (id)_paragraphTextAttributes;	// 0x2e1f3d
- (long)_selectedIndex;	// 0x2e1ee1
- (void)_setDialogIdentifier:(id)identifier;	// 0x2e1ef1
- (void)_setSelectedIndexWithControl:(id)control;	// 0x2e1e99
- (id)accessibilityLabel;	// 0x2e1e59
- (id)accessibilityScreenContent;	// 0x2e1e79
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x2e1995
// converted property getter: - (id)attributedString;	// 0x2e1859
- (BOOL)brEventAction:(id)action;	// 0x2e1a69
// declared property getter: - (id)buttons;	// 0x2e1975
- (void)dealloc;	// 0x2e166d
- (BOOL)isAccessibilityElement;	// 0x2e1e55
- (void)layoutSubcontrols;	// 0x2e1b69
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2e181d
- (void)setDocumentPath:(id)path;	// 0x2e1869
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x2e187d
- (void)setSelectionHandler:(id)handler;	// 0x2e1b01
- (void)setText:(id)text;	// 0x2e1795
- (void)setTitle:(id)title;	// 0x2e16f9
@end

