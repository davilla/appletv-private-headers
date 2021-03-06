/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "SettingsPINEntryViewDelegate.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsTouchRemotePINEntryController : BRViewController <SettingsPINEntryViewDelegate> {
	NSDictionary *_remoteInfo;	// 100 = 0x64
}
- (id)initWithTouchRemoteInfo:(id)touchRemoteInfo;	// 0xaae29
- (void).cxx_destruct;	// 0xab1c9
- (void)_pairingCanceled:(id)canceled;	// 0xab319
- (void)_pairingFailed:(id)failed;	// 0xab291
- (void)_pairingSucceeded:(id)succeeded;	// 0xab1dd
- (void)dealloc;	// 0xab0bd
- (void)pinEntryComplete:(id)complete;	// 0xab129
@end

