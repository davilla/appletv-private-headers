/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BROptionDialog.h"


@interface BRModalOptionDialog : BROptionDialog {
@private
	long _cancelIdx;	// 128 = 0x80
	BOOL _allowMenuButton;	// 132 = 0x84
}
- (id)init;	// 0x32f2cf2d
- (id)initAllowingMenuButton:(BOOL)button;	// 0x32f5f51d
- (void)_done:(id)done;	// 0x32f2d075
- (BOOL)brEventAction:(id)action;	// 0x32f2cfe9
- (long)runModal;	// 0x32f2cf45
- (void)setCancelIndex:(long)index;	// 0x32f5f50d
@end

