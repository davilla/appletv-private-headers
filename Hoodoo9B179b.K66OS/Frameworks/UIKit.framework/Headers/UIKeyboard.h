/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImplGeometryDelegate.h"
#import "UIView.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 48 = 0x30
	UITextInputTraits *m_defaultTraits;	// 52 = 0x34
	BOOL m_typingDisabled;	// 56 = 0x38
	BOOL m_minimized;	// 57 = 0x39
	BOOL m_respondingToImplGeometryChange;	// 58 = 0x3a
	int m_orientation;	// 60 = 0x3c
}
@property(retain) id defaultTextInputTraits;	// G=0x330e07dd; S=0x330e0841; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x32fabae5; S=0x330e1071; 
@property(readonly, assign) int orientation;	// G=0x32fb2bd1; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x330e0751; S=0x330e0795; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x330e0a1d; S=0x330e0a35; 
+ (void)initImplementationNow;	// 0x330e02a5
+ (void)_clearActiveKeyboard;	// 0x330e0295
+ (id)activeKeyboard;	// 0x32f2ef15
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x330e02dd
+ (CGSize)defaultSize;	// 0x33021a05
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32fa4d25
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x330e06a1
+ (BOOL)isOnScreen;	// 0x32fb5171
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x330e06cd
+ (CGRect)onscreenFrameForTextInputTraits:(id)textInputTraits;	// 0x330e03fd
+ (void)removeAllDynamicDictionaries;	// 0x330e02c1
+ (BOOL)respondsToProxGesture;	// 0x330e0659
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32f3a461
- (id)initWithDefaultSize;	// 0x330e0179
- (id)initWithFrame:(CGRect)frame;	// 0x32fa4e19
- (void)_acceptCurrentCandidate;	// 0x330e1be9
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x330599cd
- (void)_changeToKeyplane:(id)keyplane;	// 0x330e1a8d
- (void)_clearCurrentInputManager;	// 0x330e1c1d
- (id)_getAutocorrection;	// 0x330e1bb5
- (id)_getCurrentKeyboardName;	// 0x330e19dd
- (id)_getCurrentKeyplaneName;	// 0x3305a1bd
- (id)_getLocalizedInputMode;	// 0x330e1a11
- (BOOL)_hasCandidates;	// 0x330e1c8d
- (BOOL)_isAutomaticKeyboard;	// 0x331dc939
- (id)_keyplaneForKey:(id)key;	// 0x33059fd5
- (id)_keyplaneNamed:(id)named;	// 0x330e1a45
- (int)_positionInCandidateList:(id)candidateList;	// 0x330e1ce9
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x330e1b7d
- (void)_setInputMode:(id)mode;	// 0x330e1b45
- (id)_touchPoint:(CGPoint)point;	// 0x330e1ad5
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x3305a259
- (void)acceptAutocorrection;	// 0x32fdb68d
- (void)activate;	// 0x32fb2931
- (void)autoAdjustOrientation;	// 0x32fa53c1
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x32fa5129
- (BOOL)canDismiss;	// 0x330e15d5
- (void)clearSnapshot;	// 0x330e0919
- (void)deactivate;	// 0x330e0a51
- (void)dealloc;	// 0x330e01f1
// converted property getter: - (id)defaultTextInputTraits;	// 0x330e07dd
- (id)delegate;	// 0x330e08d5
- (void)displayLayer:(id)layer;	// 0x32fb4345
- (void)geometryChangeDone:(BOOL)done;	// 0x32fb5da9
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x330e11ed
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x330e0b6d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32fc85e1
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x330e1471
- (int)interfaceOrientation;	// 0x330e06f9
- (BOOL)isActive;	// 0x32fb1ff1
// declared property getter: - (BOOL)isMinimized;	// 0x32fabae5
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x330e10ed
- (void)manualKeyboardWasOrderedIn;	// 0x330e1935
- (void)manualKeyboardWasOrderedOut;	// 0x330e19a5
- (void)manualKeyboardWillBeOrderedIn;	// 0x330e18fd
- (void)manualKeyboardWillBeOrderedOut;	// 0x330e196d
- (void)maximize;	// 0x330e0eb5
- (void)minimize;	// 0x330e0cf9
- (void)movedFromSuperview:(id)superview;	// 0x32fb2839
// converted property getter: - (int)orientation;	// 0x32fb2bd1
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32fb771d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32fb76e1
- (void)prepareForGeometryChange;	// 0x32fb2cd5
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x330e13a1
- (void)removeAutocorrectPrompt;	// 0x32fdb649
- (void)removeFromSuperview;	// 0x32ffbfe9
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x32fd7aed
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x330e0751
- (void)setCaretBlinks:(BOOL)blinks;	// 0x330e0709
- (void)setCaretVisible:(BOOL)visible;	// 0x330130f1
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x330e0841
- (void)setFrame:(CGRect)frame;	// 0x32fa4f45
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x330e1071
- (void)setNeedsDisplay;	// 0x32fa50a9
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x330e0795
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x330e0a35
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x32fb26c5
- (void)takeSnapshot;	// 0x330e0945
- (int)textEffectsVisibilityLevel;	// 0x330e0b4d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x330e0b5d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x330e0b69
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x330e0b65
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x330e0b61
// declared property getter: - (BOOL)typingEnabled;	// 0x330e0a1d
- (void)updateLayout;	// 0x32fdb8bd
@end
