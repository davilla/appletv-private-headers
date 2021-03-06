/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSAttributedString, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
@private
	NSAttributedString *_text;	// 44 = 0x2c
	BRMarqueeTextControl *_scrollingTextControl;	// 48 = 0x30
	BRTextControl *_textControl;	// 52 = 0x34
	BOOL _crossfadeEnabled;	// 56 = 0x38
	BOOL _autoScrollEnabled;	// 57 = 0x39
	BOOL _displaysText;	// 58 = 0x3a
	BOOL _useAlphaFadeMask;	// 59 = 0x3b
	BOOL _animationUsesDelay;	// 60 = 0x3c
}
@property(assign) BOOL animationUsesDelay;	// G=0x32ff0801; S=0x32ff07f1; converted property
@property(retain) id attributedString;	// G=0x32ff07a1; S=0x32ff0a79; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x32ff07d1; S=0x32ff0a51; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x32ff07c1; S=0x32ff07b1; converted property
@property(assign) BOOL displaysText;	// G=0x32ff07e1; S=0x32ff09d1; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x32ff0821; S=0x32ff0811; converted property
- (id)init;	// 0x32ff0831
- (void)_removeMarqueeControl;	// 0x32ff086d
- (void)_removeTextControl;	// 0x32ff08a9
// converted property getter: - (BOOL)animationUsesDelay;	// 0x32ff0801
// converted property getter: - (id)attributedString;	// 0x32ff07a1
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x32ff07d1
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x32ff07c1
- (void)dealloc;	// 0x32ff0b59
// converted property getter: - (BOOL)displaysText;	// 0x32ff07e1
- (void)layoutSubcontrols;	// 0x32ff0c29
- (id)preferredActionForKey:(id)key;	// 0x32ff08e5
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x32ff07f1
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32ff0a79
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x32ff0a51
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x32ff07b1
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x32ff09d1
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x32ff0bc5
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x32ff0811
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x32ff0821
@end

