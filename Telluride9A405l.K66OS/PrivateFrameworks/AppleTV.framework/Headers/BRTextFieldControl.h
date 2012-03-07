/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, NSMutableString, NSTimer, NSDictionary;

@interface BRTextFieldControl : BRControl <BRTextField> {
@private
	id _delegate;	// 48 = 0x30
	id _characterDelegate;	// 52 = 0x34
	BRMarqueeTextControl *_displayString;	// 56 = 0x38
	NSMutableString *_clearString;	// 60 = 0x3c
	NSDictionary *_savedAttributes;	// 64 = 0x40
	BOOL _useSecureText;	// 68 = 0x44
	BOOL _processingDeleteChar;	// 69 = 0x45
	BOOL _showCursor;	// 70 = 0x46
	BOOL _cursorVisible;	// 71 = 0x47
	int _textLengthLimit;	// 72 = 0x48
	NSTimer *_textObscureTimer;	// 76 = 0x4c
	NSTimer *_cursorBlinkTimer;	// 80 = 0x50
}
@property(assign) id characterDelegate;	// G=0x35e3bea5; S=0x35e3beb5; converted property
@property(assign) id delegate;	// G=0x35e3be85; S=0x35e3be95; converted property
@property(assign) BOOL showCursor;	// G=0x35e3bec5; S=0x35e3bed5; converted property
@property(retain) id textAttributes;	// G=0x35e3bfd1; S=0x35e3bfe1; converted property
@property(assign) int textLengthLimit;	// G=0x35e3bfb1; S=0x35e3bfc1; converted property
@property(assign) BOOL useSecureText;	// G=0x35e3bf61; S=0x35e3bf71; converted property
- (id)init;	// 0x35e3bc81
- (void)_blinkCursorTimerFired:(id)fired;	// 0x35e3cc65
- (id)_secureTextFromClearText;	// 0x35e3c9d1
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x35e3cbcd
- (void)_startSecureTextObscureTimer;	// 0x35e3cae5
- (void)_stopBlinkCursorTimer;	// 0x35e3cc31
- (void)_stopSecureTextObscureTimer;	// 0x35e3cb99
- (id)accessibilityTraits;	// 0x35e3c2e5
- (id)accessibilityValue;	// 0x35e3c2c5
- (BOOL)brKeyEvent:(id)event;	// 0x35e3c3ad
// converted property getter: - (id)characterDelegate;	// 0x35e3bea5
- (void)controlWasDeactivated;	// 0x35e3be45
- (void)dealloc;	// 0x35e3bdbd
// converted property getter: - (id)delegate;	// 0x35e3be85
- (float)maxScrollPosition;	// 0x35e3c285
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x35e3c249
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x35e3beb5
- (void)setClearString:(id)string;	// 0x35e3c11d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35e3be95
- (void)setDisplayString:(id)string;	// 0x35e3c069
- (void)setScrollPosition:(float)position;	// 0x35e3c2a5
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x35e3bed5
- (void)setString:(id)string;	// 0x35e3c349
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x35e3bfe1
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x35e3bfc1
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x35e3bf71
// converted property getter: - (BOOL)showCursor;	// 0x35e3bec5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e3c179
- (id)stringValue;	// 0x35e3c311
// converted property getter: - (id)textAttributes;	// 0x35e3bfd1
// converted property getter: - (int)textLengthLimit;	// 0x35e3bfb1
// converted property getter: - (BOOL)useSecureText;	// 0x35e3bf61
@end
