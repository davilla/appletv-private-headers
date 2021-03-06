/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRTransitionControl.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl {
@private
	BRControl *_shroud;	// 52 = 0x34
}
- (void)_addShroud;	// 0x3291a88d
- (void)_removeShroud;	// 0x329197d5
- (void)_transitionInCompleted:(id)completed;	// 0x329194f1
- (void)_transitionOutCompleted:(id)completed;	// 0x32919475
- (void)_updateContentForTransitionState;	// 0x32919551
- (void)dealloc;	// 0x329198a1
- (void)layoutSubcontrols;	// 0x32919fe9
- (void)setContent:(id)content;	// 0x32919865
- (void)setTransitionedIn:(BOOL)anIn;	// 0x32919811
@end

