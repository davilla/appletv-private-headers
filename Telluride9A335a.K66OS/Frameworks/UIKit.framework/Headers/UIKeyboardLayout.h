/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayoutProtocol.h"
#import "UIView.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray *_uncommittedTouches;	// 48 = 0x30
	UITouch *_activeTouch;	// 52 = 0x34
	UITouch *_shiftKeyTouch;	// 56 = 0x38
	UITouch *_swipeTouch;	// 60 = 0x3c
	int _orientation;	// 64 = 0x40
@private
	int m_orientation;	// 68 = 0x44
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x33a96581; S=0x33a8b4d9; @synthesize=_activeTouch
@property(assign) int orientation;	// G=0x33a72cf5; S=0x33a68ad5; @synthesize=m_orientation
@property(retain, nonatomic) UITouch *shiftKeyTouch;	// G=0x33ba192d; S=0x33a72a25; @synthesize=_shiftKeyTouch
@property(retain, nonatomic) UITouch *swipeTouch;	// G=0x33ba193d; S=0x33ba194d; @synthesize=_swipeTouch
- (id)initWithFrame:(CGRect)frame;	// 0x33a685b5
- (id)activationIndicatorView;	// 0x33ba16f5
// declared property getter: - (id)activeTouch;	// 0x33a96581
- (void)addSwipeRecognizer;	// 0x33ba141d
- (void)addWipeRecognizer;	// 0x33ba1545
- (id)baseKeyForString:(id)string;	// 0x33ba1905
- (BOOL)canProduceString:(id)string;	// 0x33ba16fd
- (id)candidateList;	// 0x33ba16c9
- (void)changeToKeyplane:(id)keyplane;	// 0x33ba1911
- (void)clearAllKeyDelegates;	// 0x33ba16f1
- (void)clearUnusedObjects;	// 0x33ba1695
- (void)commitTouchesBeforeTouch:(id)touch;	// 0x33a894e9
- (void)deactivateActiveKeys;	// 0x33ba1699
- (void)dealloc;	// 0x33ba15d9
- (void)didClearInput;	// 0x33a87d05
- (BOOL)doesKeyCharging;	// 0x33ba16bd
- (float)flickDistance;	// 0x33ba1895
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x33ba18dd
- (SEL)handlerForNotification:(id)notification;	// 0x33ba1901
- (BOOL)hasCandidateKeys;	// 0x33ba16cd
- (float)hitBuffer;	// 0x33ba1891
- (BOOL)ignoresShiftState;	// 0x33ba16a9
- (BOOL)isShiftKeyBeingHeld;	// 0x33ba16b5
- (BOOL)isShiftKeyPlaneChooser;	// 0x33ba16b9
- (id)keyplaneForKey:(id)key;	// 0x33ba1909
- (id)keyplaneNamed:(id)named;	// 0x33ba190d
- (void)longPressAction;	// 0x33ba16c1
// declared property getter: - (int)orientation;	// 0x33a72cf5
- (BOOL)performReturnAction;	// 0x33ba16c5
- (void)phraseBoundaryDidChange;	// 0x33ba188d
- (void)restoreDefaultsForAllKeys;	// 0x33ba16e5
- (void)restoreDefaultsForKey:(id)key;	// 0x33ba16e1
- (void)setAction:(SEL)action forKey:(id)key;	// 0x33ba16d9
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x33a8b4d9
- (void)setAutoshift:(BOOL)autoshift;	// 0x33ba16b1
- (void)setDelegate:(id)delegate forKey:(id)key;	// 0x33ba16e9
- (void)setLabel:(id)label forKey:(id)key;	// 0x33ba16d1
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x33ba16dd
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x33a68ad5
- (void)setShift:(BOOL)shift;	// 0x33ba16ad
// declared property setter: - (void)setShiftKeyTouch:(id)touch;	// 0x33a72a25
// declared property setter: - (void)setSwipeTouch:(id)touch;	// 0x33ba194d
- (void)setTarget:(id)target forKey:(id)key;	// 0x33ba16d5
- (BOOL)shiftKeyRequiresImmediateUpdate;	// 0x33b1b029
// declared property getter: - (id)shiftKeyTouch;	// 0x33ba192d
- (BOOL)shouldShowIndicator;	// 0x33ba16f9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x33ba1691
- (id)simulateTouch:(CGPoint)touch;	// 0x33ba1915
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x33ba1921
- (void)swipeGestureRecognized:(id)recognized;	// 0x33ba1419
// declared property getter: - (id)swipeTouch;	// 0x33ba193d
- (void)touchCancelled:(id)cancelled;	// 0x33ba170d
- (void)touchDown:(id)down;	// 0x33ba1701
- (void)touchDragged:(id)dragged;	// 0x33ba1705
- (void)touchUp:(id)up;	// 0x33ba1709
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33a89379
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33ba1711
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33a91679
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33adb05d
- (BOOL)updateKeysWithDelegates;	// 0x33ba16ed
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x33ba16a1
- (void)updateReturnKey;	// 0x33ba169d
- (BOOL)usesAutoShift;	// 0x33ba16a5
- (void)wipeGestureRecognized:(id)recognized;	// 0x33ba14f5
@end

