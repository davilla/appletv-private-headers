/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMainMenuShelfErrorControl : BRControl {
	BRTextControl *_text;	// 80 = 0x50
	BRTextControl *_subtext;	// 84 = 0x54
}
@property(retain) BRTextControl *subtext;	// G=0x2b7ed5; S=0x2b7e81; converted property
@property(retain) BRTextControl *text;	// G=0x2b7e49; S=0x2b7df5; converted property
- (id)init;	// 0x2b7cdd
- (id)_subtextAttributes;	// 0x2b8141
- (id)_textAttributes;	// 0x2b7fc9
- (id)accessibilityLabel;	// 0x2b82b9
- (void)dealloc;	// 0x2b7d91
- (void)layoutSubcontrols;	// 0x2b7f0d
// converted property setter: - (void)setSubtext:(id)subtext;	// 0x2b7e81
// converted property setter: - (void)setText:(id)text;	// 0x2b7df5
// converted property getter: - (id)subtext;	// 0x2b7ed5
// converted property getter: - (id)text;	// 0x2b7e49
@end

