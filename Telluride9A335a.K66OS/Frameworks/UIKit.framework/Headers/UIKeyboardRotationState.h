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
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x33c986e9; S=0x33c986f9; @synthesize=_animationStyle
@property(assign, nonatomic) int postRotationState;	// G=0x33c986c9; S=0x33c986d9; @synthesize=_postRotationState
@property(assign, nonatomic) BOOL requiresNewState;	// G=0x33c986a9; S=0x33c986b9; @synthesize=_requiresNewState
@property(assign, nonatomic) int state;	// G=0x33c98689; S=0x33c98699; @synthesize=_state
@property(assign, nonatomic) int targetOrientation;	// G=0x33c9871d; S=0x33c9872d; @synthesize=_targetOrientation
+ (id)stateWithState:(int)state targetOrientation:(int)orientation;	// 0x33c98571
// declared property getter: - (id)animationStyle;	// 0x33c986e9
- (void)dealloc;	// 0x33c9860d
// declared property getter: - (int)postRotationState;	// 0x33c986c9
// declared property getter: - (BOOL)requiresNewState;	// 0x33c986a9
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x33c986f9
// declared property setter: - (void)setPostRotationState:(int)state;	// 0x33c986d9
- (void)setPostRotationState:(int)state animationStyle:(id)style;	// 0x33c98651
// declared property setter: - (void)setRequiresNewState:(BOOL)state;	// 0x33c986b9
// declared property setter: - (void)setState:(int)state;	// 0x33c98699
// declared property setter: - (void)setTargetOrientation:(int)orientation;	// 0x33c9872d
// declared property getter: - (int)state;	// 0x33c98689
// declared property getter: - (int)targetOrientation;	// 0x33c9871d
@end

