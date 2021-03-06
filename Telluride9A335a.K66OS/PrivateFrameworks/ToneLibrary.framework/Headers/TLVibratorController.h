/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibratorController : NSObject {
	id _avController;	// 4 = 0x4
	BOOL _customAVController;	// 8 = 0x8
	BOOL _startedInterruption;	// 9 = 0x9
}
@property(retain, nonatomic, setter=setAVController:) id avController;	// G=0x305a4f49; S=0x305a4f59; 
- (id)init;	// 0x305a4d09
- (id)initWithAVController:(id)avcontroller;	// 0x305a4d1d
- (id)_avController;	// 0x305a4da9
- (id)_interruptedAVController;	// 0x305a4f69
- (void)_setAVController:(id)controller;	// 0x305a4eb5
- (void)_turnOff;	// 0x305a509d
- (void)_turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x305a5041
- (void)_uninterruptAVControllerIfAppropriate;	// 0x305a4fd5
// declared property getter: - (id)avController;	// 0x305a4f49
- (void)dealloc;	// 0x305a4d65
// declared property setter: - (void)setAVController:(id)controller;	// 0x305a4f59
- (void)turnOff;	// 0x305a50cd
- (void)turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x305a50bd
- (void)uninterruptAVControllerIfAppropriate;	// 0x305a5031
@end

