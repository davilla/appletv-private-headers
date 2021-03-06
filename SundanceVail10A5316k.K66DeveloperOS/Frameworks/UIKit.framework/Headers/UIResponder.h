/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView, NSUndoManager, NSString;

@interface UIResponder : NSObject {
}
@property(readonly, assign, nonatomic) UIResponder *_editingDelegate;	// G=0x30185e19; 
@property(readonly, assign, nonatomic) UIResponder *_responderForEditing;	// G=0x30185df5; 
@property(readonly, assign, nonatomic, getter=_caretRect) CGRect caretRect;	// G=0x30367b99; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x30367b79; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x30367b7d; 
@property(readonly, assign) UIView *inputAccessoryView;	// G=0x30097109; 
@property(readonly, assign) UIView *inputView;	// G=0x30097079; 
@property(copy, nonatomic) NSString *restorationIdentifier;	// G=0x304acf25; S=0x304acfa1; 
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x30270cd5; 
+ (void)_cleanupAllStateRestorationTables;	// 0x304ad581
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;	// 0x304ad52d
+ (void)_finishStateRestoration;	// 0x304ad5c5
+ (void)_prepareForSecondPassStateRestoration;	// 0x304ad571
+ (void)_setRestoredIdentifierPathForObject:(id)object identifierPath:(id)path;	// 0x304ad43d
+ (void)_startTrackingObjectsWithIdentifiers;	// 0x304ad339
+ (void)_stopTrackingObjectsWithIdentifiers;	// 0x304ad349
+ (void)_updateStateRestorationIdentifierMap;	// 0x304ad359
+ (id)objectWithRestorationIdentifierPath:(id)restorationIdentifierPath;	// 0x304acfd5
- (id)_asTextSelection;	// 0x30367b95
- (void)_becomeFirstResponder;	// 0x300966e1
- (void)_becomeFirstResponderAndMakeVisible;	// 0x30270e61
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x300fa9c5
- (void)_beginPinningInputViews;	// 0x301b29f9
- (BOOL)_canBecomeFirstResponderWhenPossible;	// 0x30270f61
// declared property getter: - (CGRect)_caretRect;	// 0x30367b99
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x30121d21
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event;	// 0x300a3e69
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event index:(unsigned)index;	// 0x300a3e8d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x300e41c9
- (BOOL)_containsResponder:(id)responder;	// 0x300abbf9
- (void)_controlMouseDown:(GSEventRef)down;	// 0x30270df5
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x30270dfd
- (void)_controlMouseUp:(GSEventRef)up;	// 0x30270df9
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x300a4e89
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x300a6139
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x301be419
- (id)_deepestDefaultFirstResponder;	// 0x300b3741
- (id)_deepestDefaultFirstResponderMatching:(id)matching;	// 0x30270e71
// declared property getter: - (id)_editingDelegate;	// 0x30185e19
- (void)_endPinningInputViews;	// 0x30159eb1
- (void)_finishResignFirstResponder;	// 0x300abd2d
- (id)_firstResponder;	// 0x300ac781
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30193201
- (BOOL)_isPinningInputViews;	// 0x30159e51
- (BOOL)_isRootForKeyResponderCycle;	// 0x30270cd1
- (BOOL)_isSettingFirstResponder;	// 0x30096501
- (BOOL)_isTransitioningFromView:(id)view;	// 0x30197ca5
- (BOOL)_isViewController;	// 0x30270f15
- (id)_keyboardResponder;	// 0x300971e5
- (id)_nextFirstResponderIfAllowed;	// 0x300abc3d
- (id)_nextKeyResponder;	// 0x30270cc9
- (id)_nextViewControllerInResponderChain;	// 0x30270f19
- (id)_previousKeyResponder;	// 0x30270ccd
- (BOOL)_promoteDeepestDefaultFirstResponder;	// 0x300b35ed
- (BOOL)_requiresKeyboardResetOnReload;	// 0x30096ea1
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x30097165
- (void)_resignFirstResponder;	// 0x300ac6c1
- (id)_responderForBecomeFirstResponder;	// 0x300abbf5
// declared property getter: - (id)_responderForEditing;	// 0x30185df5
- (id)_restorationIdentifierPath;	// 0x304ad06d
- (void)_setFirstResponder:(id)responder;	// 0x300966f5
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x30096625
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x300b37dd
- (BOOL)_shouldUseKeyWindowStack;	// 0x300ac7a9
- (BOOL)_shouldUseNextFirstResponder;	// 0x300abc89
- (id)_targetForAction:(SEL)action withSender:(id)sender;	// 0x30270e01
- (void)_trackObjectWithIdentifier:(id)identifier;	// 0x304acf35
- (id)_window;	// 0x30104855
- (void)_windowBecameKey;	// 0x30197c35
- (void)_windowResignedKey;	// 0x30197c31
- (BOOL)becomeFirstResponder;	// 0x3009629d
- (void)beginSelectionChange;	// 0x30367c1d
- (BOOL)canBecomeFirstResponder;	// 0x300ac77d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3015a761
- (BOOL)canResignFirstResponder;	// 0x300abc39
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x304ad5d9
- (id)defaultFirstResponder;	// 0x300b37d9
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x304ad5d5
- (void)endSelectionChange;	// 0x30367c5d
- (id)firstResponder;	// 0x30096599
- (void)gestureChanged:(GSEventRef)changed;	// 0x30270cc5
- (void)gestureEnded:(GSEventRef)ended;	// 0x30270cc1
- (void)gestureStarted:(GSEventRef)started;	// 0x30270cbd
// declared property getter: - (id)inputAccessoryView;	// 0x30097109
// declared property getter: - (id)inputView;	// 0x30097079
- (id)interactionAssistant;	// 0x30367b75
// declared property getter: - (BOOL)isEditable;	// 0x30367b79
// declared property getter: - (BOOL)isEditing;	// 0x30367b7d
- (BOOL)isFirstResponder;	// 0x300969c5
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x30270ca9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x30270cb1
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x30270cad
- (void)mouseDown:(GSEventRef)down;	// 0x30270c51
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30270c99
- (void)mouseEntered:(GSEventRef)entered;	// 0x30270c9d
- (void)mouseExited:(GSEventRef)exited;	// 0x30270ca1
- (void)mouseMoved:(GSEventRef)moved;	// 0x30270ca5
- (void)mouseUp:(GSEventRef)up;	// 0x30270c95
- (id)nextFirstResponder;	// 0x300abcc1
- (id)nextResponder;	// 0x30097105
- (void)reloadInputViews;	// 0x30096919
- (void)reloadInputViewsWithoutReset;	// 0x30270d0d
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x30270cb5
- (BOOL)resignFirstResponder;	// 0x3009395d
// declared property getter: - (id)restorationIdentifier;	// 0x304acf25
- (void)scrollWheel:(GSEventRef)wheel;	// 0x30270cb9
// declared property setter: - (void)setRestorationIdentifier:(id)identifier;	// 0x304acfa1
- (id)textInputView;	// 0x30367b4d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301a26c1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30198765
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x301a4d2d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301d5f59
// declared property getter: - (id)undoManager;	// 0x30270cd5
@end

