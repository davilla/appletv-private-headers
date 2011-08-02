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
- (void)_addShroud;	// 0x32f8e84d
- (void)_removeShroud;	// 0x32f8d795
- (void)_transitionInCompleted:(id)completed;	// 0x32f8d4b1
- (void)_transitionOutCompleted:(id)completed;	// 0x32f8d435
- (void)_updateContentForTransitionState;	// 0x32f8d511
- (void)dealloc;	// 0x32f8d861
- (void)layoutSubcontrols;	// 0x32f8dfa9
- (void)setContent:(id)content;	// 0x32f8d825
- (void)setTransitionedIn:(BOOL)anIn;	// 0x32f8d7d1
@end

