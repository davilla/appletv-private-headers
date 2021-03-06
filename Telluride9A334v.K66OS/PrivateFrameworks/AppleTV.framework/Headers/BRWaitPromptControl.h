/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRWaitSpinnerControl;

@interface BRWaitPromptControl : BRControl {
@private
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
	BRTextControl *_prompt;	// 52 = 0x34
}
@property(retain) BRTextControl *prompt;	// G=0x33253ebd; S=0x33253e81; converted property
@property(retain) id promptText;	// G=0x33253f6d; S=0x33253edd; converted property
+ (id)themeAttributes;	// 0x33253e4d
- (id)init;	// 0x33253d1d
- (id)accessibilityLabel;	// 0x332541b1
- (void)controlWasActivated;	// 0x332541f9
- (void)dealloc;	// 0x33253ded
- (BOOL)isAccessibilityElement;	// 0x332541f5
- (void)layoutSubcontrols;	// 0x33253fa5
// converted property getter: - (id)prompt;	// 0x33253ebd
// converted property getter: - (id)promptText;	// 0x33253f6d
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x33253e81
// converted property setter: - (void)setPromptText:(id)text;	// 0x33253edd
@end

