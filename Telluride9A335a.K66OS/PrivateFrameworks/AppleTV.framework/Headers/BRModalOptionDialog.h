/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"


@interface BRModalOptionDialog : BROptionDialog {
@private
	long _cancelIdx;	// 148 = 0x94
	BOOL _allowMenuButton;	// 152 = 0x98
}
- (id)init;	// 0x341cf269
- (id)initAllowingMenuButton:(BOOL)button;	// 0x341cf27d
- (void)_done:(id)done;	// 0x341cf41d
- (BOOL)brEventAction:(id)action;	// 0x341cf38d
- (long)runModal;	// 0x341cf2cd
- (void)setCancelIndex:(long)index;	// 0x341cf37d
@end

