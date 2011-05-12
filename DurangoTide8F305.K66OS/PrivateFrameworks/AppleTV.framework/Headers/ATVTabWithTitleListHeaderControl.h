/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTabControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTabWithTitleListHeaderControl : BRControl {
@private
	BRTabControl *_tab;	// 44 = 0x2c
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_subtitle;	// 52 = 0x34
}
@property(readonly, assign) BRTextControl *subtitle;	// G=0x307c13d1; @synthesize=_subtitle
@property(readonly, assign) BRTabControl *tab;	// G=0x307c13f1; @synthesize=_tab
@property(readonly, assign) BRTextControl *title;	// G=0x307c13e1; @synthesize=_title
- (id)init;	// 0x307c1491
- (id)accessibilityLabel;	// 0x307c1671
- (BOOL)brEventAction:(id)action;	// 0x307c1401
- (void)dealloc;	// 0x307c1425
- (void)layoutSubcontrols;	// 0x307c16b5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307c157d
// declared property getter: - (id)subtitle;	// 0x307c13d1
// declared property getter: - (id)tab;	// 0x307c13f1
// declared property getter: - (id)title;	// 0x307c13e1
@end

