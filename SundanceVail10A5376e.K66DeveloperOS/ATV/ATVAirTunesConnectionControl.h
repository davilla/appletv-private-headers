/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRWaitSpinnerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVAirTunesConnectionControl : BRControl {
	BRControl *_background;	// 84 = 0x54
	BRWaitSpinnerControl *_spinner;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0x1005b5
- (void)dealloc;	// 0x10070d
- (void)layoutSubcontrols;	// 0x1007d1
- (void)setStatus:(id)status;	// 0x100785
@end

