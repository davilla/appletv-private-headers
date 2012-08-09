/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BROptionDialog.h"
#import "ATVAutoDismissable.h"


__attribute__((visibility("hidden")))
@interface BROptionAlertControl : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	BOOL _allowAutoDismiss;	// 172 = 0xac
	long _autoDismissIdx;	// 176 = 0xb0
}
+ (int)postAlertWithTitle:(id)title primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus;	// 0x2a7af1
+ (int)postAlertWithTitleAndCancel:(id)titleAndCancel primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier cancelIndex:(int)index allowAutoDismiss:(BOOL)dismiss autoDismissIndex:(int)index11;	// 0x2a7915
+ (int)postDeleteConfirmationWithName:(id)name;	// 0x2a7cf5
+ (void)postError:(id)error;	// 0x2a7b39
- (BOOL)_itemSelected:(id)selected;	// 0x2a7f61
- (BOOL)autoDismiss;	// 0x2a7eed
- (BOOL)brEventAction:(id)action;	// 0x2a7e05
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x2a7ecd
- (void)setCancelIndex:(long)index;	// 0x2a7df5
@end
