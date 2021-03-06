/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRScrollingTextBoxControl, NSString, BRHeaderControl, NSAttributedString, BRPanelControl;

__attribute__((visibility("hidden")))
@interface BRScrollingTextControl : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRScrollingTextBoxControl *_textBox;	// 88 = 0x58
	BRPanelControl *_buttonGrid;	// 92 = 0x5c
	NSAttributedString *_attributedString;	// 96 = 0x60
	long _selectedIndex;	// 100 = 0x64
	NSString *_dialogIdentifier;	// 104 = 0x68
}
@property(retain) NSAttributedString *attributedString;	// G=0x2e9299; S=0x2e925d; converted property
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x2e93b5; @dynamic
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2e8e05
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2e8d19
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x2e8ad5
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus modalIdentifier:(id)identifier;	// 0x2e8b39
- (id)init;	// 0x2e8ef1
- (id)_dialogIdentifier;	// 0x2e996d
- (id)_paragraphTextAttributes;	// 0x2e997d
- (long)_selectedIndex;	// 0x2e9921
- (void)_setDialogIdentifier:(id)identifier;	// 0x2e9931
- (void)_setSelectedIndexWithControl:(id)control;	// 0x2e98d9
- (id)accessibilityLabel;	// 0x2e9899
- (id)accessibilityScreenContent;	// 0x2e98b9
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x2e93d5
// converted property getter: - (id)attributedString;	// 0x2e9299
- (BOOL)brEventAction:(id)action;	// 0x2e94a9
// declared property getter: - (id)buttons;	// 0x2e93b5
- (void)dealloc;	// 0x2e90ad
- (BOOL)isAccessibilityElement;	// 0x2e9895
- (void)layoutSubcontrols;	// 0x2e95a9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2e925d
- (void)setDocumentPath:(id)path;	// 0x2e92a9
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x2e92bd
- (void)setSelectionHandler:(id)handler;	// 0x2e9541
- (void)setText:(id)text;	// 0x2e91d5
- (void)setTitle:(id)title;	// 0x2e9139
@end

