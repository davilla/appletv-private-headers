/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRTextEntryControl, NSMutableArray, BRControl, BRKeyboardControl, BRGridView, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboard : XXUnknownSuperclass {
	BRTextEntryControl *_textEntryControl;	// 4 = 0x4
	BRControl *_baseKeyControl;	// 8 = 0x8
	BRKeyboard *_baseKeyboard;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BRKeyboardControl *_keyboardControl;	// 20 = 0x14
	BRGridView *_mainKeysGrid;	// 24 = 0x18
	NSMutableArray *_mainKeyControls;	// 28 = 0x1c
	BRControl *_actionKeysContainer;	// 32 = 0x20
	NSMutableArray *_actionKeyControls;	// 36 = 0x24
	NSArray *_keyDataDictionaries;	// 40 = 0x28
	BOOL _shouldShowLanguageSwitchButton;	// 44 = 0x2c
	BOOL _constrainCursorToPopupKeyboard;	// 45 = 0x2d
	BOOL _canWrapHorizontally;	// 46 = 0x2e
	BOOL _canWrapVertically;	// 47 = 0x2f
}
@property(retain) BRControl *baseKeyControl;	// G=0x2e6cd9; S=0x2e6cc9; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x2e6cf9; S=0x2e6ce9; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x2e6c85; S=0x2e6c95; converted property
@property(assign) BOOL canWrapVertically;	// G=0x2e6ca5; S=0x2e6cb5; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x2e70f5; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x2e6d0d; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x2e70e5; converted property
@property(readonly, retain) NSString *name;	// G=0x2e6d09; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x2e74b5; S=0x2e74a5; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x2e6bf9; S=0x2e6c09; converted property
- (id)init;	// 0x2e69a5
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x2e6ac5
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x2e9381
- (float)_actionKeysContainerSpacing;	// 0x2e9f75
- (float)_actionKeysContainerWidth;	// 0x2e9f71
- (id)_controlForData:(id)data;	// 0x2e9521
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x2e92d5
- (void)_createMainAndActionKeyControls;	// 0x2e8111
- (id)_filterRawKeyboardData:(id)data;	// 0x2e8911
- (id)_glyphDataForImage:(id)image;	// 0x2e9395
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x2e8f11
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x2e8d01
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x2e9bb1
- (Class)_keyboardControlClass;	// 0x2e9a95
- (id)_keyboardDataFileName;	// 0x2e890d
- (id)_mainKeyRowPlane;	// 0x2e9b31
- (float)_mainKeysHorizontalSpacing;	// 0x2e9bad
- (float)_mainKeysVerticalSpacing;	// 0x2e9ba9
- (int)_numberOfActionKeyColumns;	// 0x2e9b2d
- (int)_numberOfActionKeyRows;	// 0x2e9b19
- (int)_numberOfMainKeyColumns;	// 0x2e9b15
- (int)_numberOfMainKeyRows;	// 0x2e9b11
- (int)_numberOfMainKeysInLastRow;	// 0x2e9b1d
- (id)_optionCharactersForKeyboardInput;	// 0x2e9a19
- (id)_popupKeyboardDataFileName;	// 0x2e8909
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x2e91a1
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x2e9d81
- (float)_preferredGlyphHeight:(id)height;	// 0x2e9a11
- (CGSize)_preferredGlyphSize:(id)size;	// 0x2e9c09
- (float)_preferredGlyphWidth:(id)width;	// 0x2e9a09
- (float)_preferredTextEntryControlWidth;	// 0x2e9d7d
- (id)_processGlyphDataChunk:(id)chunk;	// 0x2e8b81
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x2e9ab1
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x2e9f79
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x2e74c9
- (id)allPopupkeyboardsCharacterSet;	// 0x2e7b41
- (id)attributesForTextFieldLabel;	// 0x2e6c51
// converted property getter: - (id)baseKeyControl;	// 0x2e6cd9
// converted property getter: - (id)baseKeyboard;	// 0x2e6cf9
- (BOOL)canShowLanguageSwitchButton;	// 0x2e74c5
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x2e6c85
// converted property getter: - (BOOL)canWrapVertically;	// 0x2e6ca5
- (CGRect)candidatesBackgroundFrame;	// 0x2ea095
- (CGRect)candidatesContainerFrame;	// 0x2ea0b9
- (id)customizeTextEntryControls:(id)controls;	// 0x2e6c2d
- (id)customizedTextEntryFieldControls;	// 0x2e6c1d
- (void)customizedTextFieldControlsWereRemoved;	// 0x2e6c29
- (void)dealloc;	// 0x2e6b31
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x2e7489
- (id)focusedControlForRow:(id)row;	// 0x2e7475
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x2e717d
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x2e8081
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2e7fe1
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x2e7f81
- (BOOL)handleEvent:(id)event;	// 0x2e7899
// converted property getter: - (id)keyDataDictionaries;	// 0x2e70f5
- (id)keyboardCharacterSet;	// 0x2e789d
// converted property getter: - (id)keyboardControl;	// 0x2e6d0d
- (CGRect)keyboardControlFrame;	// 0x2ea071
- (float)layoutGapBelowKeyboardControl;	// 0x2e9f7d
- (float)layoutGapBelowTabControl;	// 0x2e9f81
// converted property getter: - (id)mainKeyControls;	// 0x2e70e5
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x2e749d
// converted property getter: - (id)name;	// 0x2e6d09
- (long)numberOfColumnsInGrid:(id)grid;	// 0x2e7f59
- (long)numberOfItemsInGrid:(id)grid;	// 0x2e7f25
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x2e6cc5
- (CGRect)playPauseFrame;	// 0x2e9f85
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x2e710d
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x2e7345
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x2e7349
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x2e6c4d
- (BOOL)requiresTextFieldLabel;	// 0x2e7885
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x2e6cc9
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x2e6ce9
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x2e6c95
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x2e6cb5
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x2e7889
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x2e7419
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x2e74a5
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x2e6c09
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x2e74b5
- (CGRect)spinnerFrame;	// 0x2ea285
- (void)startSpinning;	// 0x2e6c21
- (void)stopSpinning;	// 0x2e6c25
- (id)switchToThisKeyboardIdentifier;	// 0x2e6c19
- (CGRect)tabControlFrame;	// 0x2ea261
// converted property getter: - (id)textEntryControl;	// 0x2e6bf9
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x2e7109
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x2e7105
- (CGRect)textFieldBackgroundFrame;	// 0x2ea101
- (CGRect)textFieldFrame;	// 0x2ea125
- (CGRect)textFieldLabelFrame;	// 0x2ea0dd
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x2e7391
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x2e734d
@end

