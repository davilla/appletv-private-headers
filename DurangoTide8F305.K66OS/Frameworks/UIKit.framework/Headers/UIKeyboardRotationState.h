/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardRotationState : NSObject {
@private
	int _state;	// 4 = 0x4
	BOOL _requiresNewState;	// 8 = 0x8
	int _postRotationState;	// 12 = 0xc
	UIInputViewAnimationStyle *_animationStyle;	// 16 = 0x10
	int _targetOrientation;	// 20 = 0x14
}
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x32218269; S=0x32219d4d; @synthesize=_animationStyle
@property(assign, nonatomic) int postRotationState;	// G=0x32218279; S=0x32218289; @synthesize=_postRotationState
@property(assign, nonatomic) BOOL requiresNewState;	// G=0x32218299; S=0x322182a9; @synthesize=_requiresNewState
@property(assign, nonatomic) int state;	// G=0x322182b9; S=0x322182c9; @synthesize=_state
@property(assign, nonatomic) int targetOrientation;	// G=0x32218249; S=0x32218259; @synthesize=_targetOrientation
+ (id)stateWithState:(int)state targetOrientation:(int)orientation;	// 0x3221830d
// declared property getter: - (id)animationStyle;	// 0x32218269
- (void)dealloc;	// 0x3221990d
// declared property getter: - (int)postRotationState;	// 0x32218279
// declared property getter: - (BOOL)requiresNewState;	// 0x32218299
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x32219d4d
// declared property setter: - (void)setPostRotationState:(int)state;	// 0x32218289
- (void)setPostRotationState:(int)state animationStyle:(id)style;	// 0x322182d9
// declared property setter: - (void)setRequiresNewState:(BOOL)state;	// 0x322182a9
// declared property setter: - (void)setState:(int)state;	// 0x322182c9
// declared property setter: - (void)setTargetOrientation:(int)orientation;	// 0x32218259
// declared property getter: - (int)state;	// 0x322182b9
// declared property getter: - (int)targetOrientation;	// 0x32218249
@end

