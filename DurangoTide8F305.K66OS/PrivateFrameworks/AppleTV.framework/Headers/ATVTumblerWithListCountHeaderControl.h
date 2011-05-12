/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithListCountHeaderControl : BRControl {
@private
	BRTumblerControl *_tumbler;	// 44 = 0x2c
	BRTextControl *_itemCount;	// 48 = 0x30
}
@property(readonly, assign) BRTextControl *itemCount;	// G=0x307c1805; @synthesize=_itemCount
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x307c1815; @synthesize=_tumbler
- (id)init;	// 0x307c18a5
- (id)accessibilityLabel;	// 0x307c1a19
- (BOOL)brEventAction:(id)action;	// 0x307c1825
- (void)dealloc;	// 0x307c1849
// declared property getter: - (id)itemCount;	// 0x307c1805
- (void)layoutSubcontrols;	// 0x307c1a5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307c195d
// declared property getter: - (id)tumbler;	// 0x307c1815
@end

