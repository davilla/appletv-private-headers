/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockViewWithKeyboard.h"


@interface SBDeviceLockViewWithKeyboardPhone : SBDeviceLockViewWithKeyboard {
}
@property(assign) BOOL showsEmergencyCallButton;	// G=0x33092f01; S=0x33092f41; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x33092eb5
- (void)_layoutForCurrentOrientation;	// 0x3309305d
- (void)hardwareReturnKeyPressed:(id)pressed;	// 0x3309304d
- (void)returnKeyPressed:(id)pressed;	// 0x33092fd5
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x33092f41
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x33092f01
@end
