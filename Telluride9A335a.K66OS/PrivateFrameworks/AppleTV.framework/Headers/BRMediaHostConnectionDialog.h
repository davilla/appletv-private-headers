/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextWithSpinnerController.h"

@class BRMediaHost;
@protocol BRMediaProvider, BRMediaLoading;

__attribute__((visibility("hidden")))
@interface BRMediaHostConnectionDialog : BRTextWithSpinnerController {
@private
	BRMediaHost *_mediaHost;	// 100 = 0x64
	id<BRMediaProvider, BRMediaLoading> _providerNeedingAuth;	// 104 = 0x68
	BRController *_controllerUnderneath;	// 108 = 0x6c
	BOOL _timerSatisfied;	// 112 = 0x70
	BOOL _wasBuried;	// 113 = 0x71
	BOOL _passwordWasEntered;	// 114 = 0x72
	BOOL _authAlreadyAttempted;	// 115 = 0x73
}
@property(retain) BRMediaHost *mediaHost;	// G=0x342584e1; S=0x342584a1; converted property
- (id)initWithHost:(id)host;	// 0x34258231
- (void)_authRequired:(id)required;	// 0x34259235
- (void)_checkMountStatus:(id)status;	// 0x34258af5
- (void)_hostsChanged:(id)changed;	// 0x342595fd
- (void)_waitForHostReset:(id)hostReset;	// 0x34258f19
- (BOOL)brEventAction:(id)action;	// 0x342584f1
- (void)dealloc;	// 0x3425836d
// converted property getter: - (id)mediaHost;	// 0x342584e1
// converted property setter: - (void)setMediaHost:(id)host;	// 0x342584a1
- (void)textDidChange:(id)text;	// 0x34258901
- (void)textDidEndEditing:(id)text;	// 0x34258905
- (void)wasBuried;	// 0x342588c1
- (void)wasPushed;	// 0x34258635
@end

