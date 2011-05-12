/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class BRRoundRectOutlineLayer, BRScrollControl, NSAttributedString, BRTextEntryPlayPauseMessage, BRTextFieldBackgroundLayer, NSMutableString, BRTabControl, BRTextControl, BRInputMethod, BRKeyboard, BRCursorControl, BRTextFieldControl, NSArray, NSString, BRDeviceKeyboardMessage;

@interface BRTextEntryControl : BRControl <BRTabControlDelegate> {
@private
	int _textEntryStyle;	// 44 = 0x2c
	BRInputMethod *_inputMethod;	// 48 = 0x30
	BRKeyboard *_activeKeyboard;	// 52 = 0x34
	BOOL _displayTextEntryHistory;	// 56 = 0x38
	NSString *_textEntryHistoryClient;	// 60 = 0x3c
	NSString *_textEntryHistoryBehavior;	// 64 = 0x40
	BRTextEntryPlayPauseMessage *_playPauseMessage;	// 68 = 0x44
	BRControl *_roundRectBackground;	// 72 = 0x48
	BRRoundRectOutlineLayer *_roundRectOutline;	// 76 = 0x4c
	BRControl *_candidatesBackground;	// 80 = 0x50
	BRScrollControl *_candidatesKeysContainer;	// 84 = 0x54
	BRScrollControl *_keyboardContainer;	// 88 = 0x58
	BRControl *_actionKeysContainer;	// 92 = 0x5c
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 96 = 0x60
	BRTextControl *_textFieldLabel;	// 100 = 0x64
	NSAttributedString *_textFieldLabelString;	// 104 = 0x68
	BRTextFieldControl *_textField;	// 108 = 0x6c
	BRTabControl *_tabControl;	// 112 = 0x70
	BRCursorControl *_cursor;	// 116 = 0x74
	BOOL _providesOwnCursor;	// 120 = 0x78
	NSArray *_customizedTextFieldControls;	// 124 = 0x7c
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 128 = 0x80
	BRKeyboard *_popupKeyboard;	// 132 = 0x84
	CGPoint _focusedMainKeyRemembery;	// 136 = 0x88
	BOOL _displayPopupKeyboardAfterKeyboardSwitch;	// 144 = 0x90
	CGColorRef _popupBackgroundColor;	// 148 = 0x94
	CGColorRef _popupBorderColor;	// 152 = 0x98
	int _popupShadowStyle;	// 156 = 0x9c
	BOOL _constrainCursorToPopupKeyboard;	// 160 = 0xa0
	BRScrollControl *_popupKeyboardControl;	// 164 = 0xa4
	CGPoint _previousKeyboardFocus;	// 168 = 0xa8
	int _textLengthLimit;	// 176 = 0xb0
	NSMutableString *_userEnteredText;	// 180 = 0xb4
	BOOL _showUserEnteredText;	// 184 = 0xb8
	BOOL _textFieldIsInternal;	// 185 = 0xb9
	BOOL _shouldWrapHorizontally;	// 186 = 0xba
	BOOL _shouldWrapVertically;	// 187 = 0xbb
	BOOL _clientHasSpecifiedHorizontalWrapping;	// 188 = 0xbc
	BOOL _clientHasSpecifiedVerticalWrapping;	// 189 = 0xbd
}
@property(assign) BOOL canWrapHorizontally;	// G=0x32989e05; S=0x32989dc1; converted property
@property(assign) BOOL canWrapVertically;	// G=0x32989d9d; S=0x32989d59; converted property
@property(assign) BOOL providesOwnFocusCursor;	// G=0x32988031; S=0x32989b69; converted property
@property(retain) BRTabControl *tabControl;	// G=0x32988021; S=0x32989ca9; converted property
@property(assign) int textEntryStyle;	// G=0x32987ff1; S=0x329344d5; converted property
@property(retain) BRTextFieldControl *textField;	// G=0x32988011; S=0x32989e8d; converted property
@property(assign) id textFieldDelegate;	// G=0x32989c3d; S=0x329349b9; converted property
@property(assign) int textLengthLimit;	// G=0x32988001; S=0x3298a009; converted property
- (id)init;	// 0x32933a51
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x32933a25
- (id)initWithTextEntryStyle:(int)textEntryStyle textField:(id)field;	// 0x3298ab8d
- (void)_addActionKeysRowForKeyboard:(id)keyboard;	// 0x3298a675
- (void)_addCursor;	// 0x3298aa4d
- (void)_addCustomizedTextFieldControls;	// 0x3298a2a9
- (void)_addMainKeyboardContainerForKeyboard:(id)keyboard;	// 0x3298a80d
- (void)_addOrRemoveCandidatesContainer:(id)container;	// 0x3298b149
- (void)_addOrRemoveTabControl;	// 0x3298be81
- (id)_bestKeyboardLanguage:(int)language;	// 0x329888dd
- (void)_customizeTextEntryControls;	// 0x3298a345
- (void)_finalizeControlWasFocused;	// 0x32988a85
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x3298c461
- (void)_handleCharacterSelectionEvent:(id)event;	// 0x3298923d
- (void)_handleCustomActionKeyEvent:(id)event;	// 0x3298929d
- (void)_handlePopupKeyboardEvent:(BOOL)event;	// 0x3298c52d
- (void)_historyItemDeleted:(id)deleted;	// 0x32988559
- (void)_inputActionAppendCandidate:(id)candidate;	// 0x32988ed5
- (void)_inputActionAppendText:(id)text;	// 0x3298902d
- (void)_inputActionClearText:(id)text;	// 0x32988e1d
- (void)_inputActionDeleteText:(id)text;	// 0x3298c355
- (void)_inputActionEscape:(id)escape;	// 0x32988bc5
- (void)_inputActionSwitchInputMethod:(id)method;	// 0x32988c4d
- (void)_inputActionSwitchKeyboard:(id)keyboard;	// 0x3298b5c9
- (void)_invokeInputActionWithDictionary:(id)dictionary;	// 0x3298c25d
- (id)_keyboardMappingData;	// 0x3298cf69
- (void)_popupKeyboardDeleteCharacterHandler:(id)handler;	// 0x32988b75
- (void)_removeActionKeysRow;	// 0x3298a61d
- (void)_removeCursor;	// 0x3298aa11
- (void)_removeCustomizedTextFieldControls;	// 0x3298a249
- (void)_removePopupKeyboard;	// 0x32989121
- (void)_saveTextEntryHistory;	// 0x329885d9
- (void)_setActiveKeyboard:(id)keyboard;	// 0x3298a9e5
- (void)_stripTrailingDotIfNecessary:(id)necessary;	// 0x32988f31
- (void)_swapPopupkeyboard;	// 0x32988b8d
- (void)_wrapAroundEdge:(int)edge;	// 0x329892e5
- (id)accessibilityLabel;	// 0x32988759
- (id)accessibilityScreenContent;	// 0x32988719
- (id)accessibilityTraits;	// 0x32988779
- (id)accessibilityValue;	// 0x32988739
- (void)addSelectionHandlerForControl:(id)control forKeyboard:(id)keyboard;	// 0x329887a5
- (BOOL)brEventAction:(id)action;	// 0x32935031
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x32989e05
// converted property getter: - (BOOL)canWrapVertically;	// 0x32989d9d
- (void)completeTextEntry;	// 0x32989e75
- (void)controlWasActivated;	// 0x3298ab39
- (void)controlWasDeactivated;	// 0x3298aae5
- (void)controlWasFocused;	// 0x32988b1d
- (void)controlWasUnfocused;	// 0x32988a49
- (void)dealloc;	// 0x32938565
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x3298a039
- (void)deleteTextEntryHistoryItem:(id)item forTextEntryHistoryClients:(id)textEntryHistoryClients textEntryBehaviors:(id)behaviors;	// 0x3298a099
- (void)deviceKeyboardClose;	// 0x329884dd
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x329880d5
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x32988389
- (void)dismissPopupKeyboard;	// 0x32988879
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3298bda9
- (BOOL)focusIsAtRightEdge;	// 0x3298992d
- (CGPoint)keyboardFocus;	// 0x3298b125
- (void)layoutSubcontrols;	// 0x3298ac45
// converted property getter: - (BOOL)providesOwnFocusCursor;	// 0x32988031
- (void)reset;	// 0x32989b9d
- (void)saveTextEntryHistory;	// 0x3298a13d
- (void)saveTextEntryHistoryUsingClient:(id)client textEntryBehavior:(id)behavior;	// 0x3298a161
- (void)setBackgroundColor:(CGColorRef)color;	// 0x329888bd
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x32989dc1
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x32989d59
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x32988051
- (void)setDeviceKeyboardTitle:(id)title subText:(id)text;	// 0x32989e29
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x3298a201
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x329899c9
- (void)setInitialText:(id)text;	// 0x3298c1cd
- (BOOL)setKeyboardFocus:(CGPoint)focus;	// 0x3298984d
- (void)setOutlineColor:(CGColorRef)color;	// 0x3298889d
- (void)setPopupBackgroundColor:(CGColorRef)color;	// 0x3298cf39
- (void)setPopupOutlineColor:(CGColorRef)color;	// 0x3298cf09
- (void)setPopupShadowStyle:(int)style;	// 0x32988041
// converted property setter: - (void)setProvidesOwnFocusCursor:(BOOL)cursor;	// 0x32989b69
- (void)setShowUserEnteredText:(BOOL)text;	// 0x32989c5d
// converted property setter: - (void)setTabControl:(id)control;	// 0x32989ca9
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x3298a195
// converted property setter: - (void)setTextEntryStyle:(int)style;	// 0x329344d5
// converted property setter: - (void)setTextField:(id)field;	// 0x32989e8d
// converted property setter: - (void)setTextFieldDelegate:(id)delegate;	// 0x329349b9
- (void)setTextFieldLabel:(id)label;	// 0x329349d9
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x3298a009
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3298b0f1
- (void)startSpinning;	// 0x329355a9
- (void)stopSpinning;	// 0x329355c9
- (void)switchToKeyboardNamed:(id)keyboardNamed focusOnKeyboardAfterSwitch:(BOOL)aSwitch;	// 0x32989799
// converted property getter: - (id)tabControl;	// 0x32988021
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x329886b9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x32988061
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32988065
// converted property getter: - (int)textEntryStyle;	// 0x32987ff1
// converted property getter: - (id)textField;	// 0x32988011
// converted property getter: - (id)textFieldDelegate;	// 0x32989c3d
// converted property getter: - (int)textLengthLimit;	// 0x32988001
@end

