/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKeyboard.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class SBDeviceLockViewWithKeyboard;

@interface SBDeviceLockKeyboard : UIKeyboard {
	SBDeviceLockViewWithKeyboard *_deviceLockView;	// 100 = 0x64
}
- (id)initWithFrame:(CGRect)frame deviceLockView:(id)view;	// 0x36397009
- (BOOL)canDismiss;	// 0x3639706d
- (BOOL)isActive;	// 0x36397051
- (void)maximize;	// 0x363970d9
- (void)minimize;	// 0x363970b9
@end
