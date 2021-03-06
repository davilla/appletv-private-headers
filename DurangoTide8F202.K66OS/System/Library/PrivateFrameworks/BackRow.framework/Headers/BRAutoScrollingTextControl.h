/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMarqueeTextControl, NSAttributedString;

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
@property(assign) BOOL animationUsesDelay;	// G=0x3297a17d; S=0x3297a16d; converted property
@property(retain) id attributedString;	// G=0x3297a11d; S=0x3297a3f5; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x3297a14d; S=0x3297a3cd; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x3297a13d; S=0x3297a12d; converted property
@property(assign) BOOL displaysText;	// G=0x3297a15d; S=0x3297a34d; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x3297a19d; S=0x3297a18d; converted property
- (id)init;	// 0x3297a1ad
- (void)_removeMarqueeControl;	// 0x3297a1e9
- (void)_removeTextControl;	// 0x3297a225
// converted property getter: - (BOOL)animationUsesDelay;	// 0x3297a17d
// converted property getter: - (id)attributedString;	// 0x3297a11d
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x3297a14d
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x3297a13d
- (void)dealloc;	// 0x3297a4d5
// converted property getter: - (BOOL)displaysText;	// 0x3297a15d
- (void)layoutSubcontrols;	// 0x3297a5a5
- (id)preferredActionForKey:(id)key;	// 0x3297a261
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x3297a16d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x3297a3f5
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x3297a3cd
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x3297a12d
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x3297a34d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3297a541
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x3297a18d
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x3297a19d
@end

