/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import <TPPhonePad.h> // Unknown library

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIButton *_deleteButton;	// 160 = 0xa0
	UIButton *_cancelButton;	// 164 = 0xa4
	BOOL _deleteEnabled;	// 168 = 0xa8
	BOOL _playKeyboardClicks;	// 169 = 0xa9
}
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;	// G=0x349b6a05; 
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;	// G=0x349b6a51; S=0x349b6a61; @synthesize=_deleteEnabled
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;	// G=0x349b6a01; 
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;	// G=0x349b6a09; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x349b69a1; S=0x349b69b1; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x349b69f9; S=0x349b69fd; 
+ (CGSize)defaultSize;	// 0x349b6a15
+ (id)keypadImage;	// 0x349b6a0d
+ (id)pressedImage;	// 0x349b6a11
- (id)initWithDefaultSize;	// 0x349b689d
- (id)initWithFrame:(CGRect)frame;	// 0x349b6791
- (id)_keypadImage;	// 0x349b684d
- (id)_pressedImage;	// 0x349b6875
// declared property getter: - (BOOL)cancelKeyChar;	// 0x349b6a05
- (void)dealloc;	// 0x349b67f5
// declared property getter: - (BOOL)deleteKeyChar;	// 0x349b6a01
// declared property getter: - (BOOL)emergencyKeyChar;	// 0x349b6a09
- (void)hiddenFromView;	// 0x349b6839
// declared property getter: - (BOOL)isDeleteEnabled;	// 0x349b6a51
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x349b69a1
// declared property setter: - (void)setDeleteEnabled:(BOOL)enabled;	// 0x349b6a61
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x349b69b1
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x349b69fd
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x349b69f9
- (void)willBecomeVisible;	// 0x349b683d
@end

