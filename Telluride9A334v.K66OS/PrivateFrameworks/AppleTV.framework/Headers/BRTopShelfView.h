/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaShelfView, BRMainMenuImageControl, BRMainMenuShelfErrorControl;

@interface BRTopShelfView : BRControl {
@private
	int _state;	// 48 = 0x30
	BRMediaShelfView *_shelf;	// 52 = 0x34
	BRMainMenuShelfErrorControl *_error;	// 56 = 0x38
	BRMainMenuImageControl *_productImage;	// 60 = 0x3c
	BRControl *_customLogoControl;	// 64 = 0x40
}
@property(retain, nonatomic) BRControl *customLogoControl;	// G=0x3321ab7d; S=0x3321ab8d; @synthesize=_customLogoControl
@property(readonly, assign) BRMainMenuShelfErrorControl *error;	// G=0x3321ab6d; @synthesize=_error
@property(readonly, assign) BRMediaShelfView *shelf;	// G=0x3321ab5d; @synthesize=_shelf
@property(assign) int state;	// G=0x3321a901; S=0x3321a911; 
- (id)init;	// 0x3321a471
- (BOOL)accessibilityElementIsHidden;	// 0x3321aaed
// declared property getter: - (id)customLogoControl;	// 0x3321ab7d
- (void)dealloc;	// 0x3321a5e5
// declared property getter: - (id)error;	// 0x3321ab6d
- (void)layoutSubcontrols;	// 0x3321a6f9
- (id)preferredActionForKey:(id)key;	// 0x3321a7b9
- (void)setAcceptsFocus:(BOOL)focus;	// 0x3321a66d
// declared property setter: - (void)setCustomLogoControl:(id)control;	// 0x3321ab8d
// declared property setter: - (void)setState:(int)state;	// 0x3321a911
// declared property getter: - (id)shelf;	// 0x3321ab5d
// declared property getter: - (int)state;	// 0x3321a901
@end

