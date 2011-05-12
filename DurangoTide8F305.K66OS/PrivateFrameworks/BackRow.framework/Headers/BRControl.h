/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRFocusContainer.h"
#import "BRResponder.h"

@class CALayer, NSMutableArray;
@protocol BREventDelegate;

@interface BRControl : NSObject <BRFocusContainer, BRResponder> {
@private
	CALayer *_backing;	// 4 = 0x4
	BRControl *_defaultFocus;	// 8 = 0x8
	BRControl *_focusedControl;	// 12 = 0xc
	BRControl *_previousFocus;	// 16 = 0x10
	BRControl *_keyEventTargetControl;	// 20 = 0x14
	unsigned _autoresizing;	// 24 = 0x18
	NSMutableArray *_subControls;	// 28 = 0x1c
	BOOL _dontAutoresizeSubviews;	// 32 = 0x20
	BOOL _acceptsFocus;	// 33 = 0x21
	BOOL _focused;	// 34 = 0x22
	BOOL _controlActive;	// 35 = 0x23
	BOOL _inhibitsFocusForChildren;	// 36 = 0x24
	BOOL _inhibitsScrollFocusForChildren;	// 37 = 0x25
	NSObject<BREventDelegate> *_brEventDelegate;	// 40 = 0x28
}
@property(assign) BOOL acceptsFocus;	// G=0x3291285d; S=0x32912479; converted property
@property(retain) id actions;	// G=0x32957899; S=0x329578b9; converted property
@property(assign) CGAffineTransform affineTransform;	// G=0x3295878d; S=0x32958329; converted property
@property(assign) CGPoint anchorPoint;	// G=0x329587b1; S=0x32958375; converted property
@property(assign) unsigned autoresizingMask;	// G=0x32957455; S=0x32957445; converted property
@property(assign) BOOL avoidsCursor;	// G=0x3292642d; S=0x3291b205; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x32957e95; S=0x32957eb5; converted property
@property(assign) CGColorRef borderColor;	// G=0x32957b35; S=0x32957b55; converted property
@property(assign) float borderWidth;	// G=0x32957af5; S=0x32957b15; converted property
@property(assign) CGRect bounds;	// G=0x329587d5; S=0x329587f9; converted property
@property(assign) int contentMode;	// G=0x32957b75; S=0x32957d31; converted property
@property(retain) id controls;	// G=0x32958001; S=0x3295802d; converted property
@property(retain) BRControl *defaultFocus;	// G=0x3295747d; S=0x3291c285; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x32958a05; S=0x32958a1d; @synthesize=_brEventDelegate
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x3291284d; converted property
@property(retain) BRControl *focusedControl;	// G=0x329128f5; S=0x32912a0d; converted property
@property(assign) CGRect frame;	// G=0x32958911; S=0x32959215; converted property
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32957e0d; S=0x32957e31; converted property
@property(retain) id identifier;	// G=0x329133ed; S=0x3291bd91; converted property
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x3295748d; S=0x329579fd; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x329574b5; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x32957435; S=0x329583b5; converted property
@property(assign) BOOL masksToBounds;	// G=0x32957ed5; S=0x32957ef9; converted property
@property(retain) id name;	// G=0x32958271; S=0x32958291; converted property
@property(retain) id object;	// G=0x329270d9; S=0x329234f1; converted property
@property(assign) float opacity;	// G=0x32957e55; S=0x32957e75; converted property
@property(assign) CGPoint position;	// G=0x329588ed; S=0x32958395; converted property
@property(retain) id selectionHandler;	// G=0x329579bd; S=0x329579dd; converted property
+ (id)control;	// 0x32912f2d
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x329ab675
+ (Class)layerClass;	// 0x32958581
- (id)init;	// 0x329123f9
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x329c9729
- (id)_axSubviews;	// 0x329c93c9
- (id)_axSuperviews;	// 0x329c9401
- (BOOL)_changeFocusTo:(id)to;	// 0x3291286d
- (void)_dumpControlTree;	// 0x32958d25
- (void)_dumpFocusTree;	// 0x32958f8d
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x32926025
- (BOOL)_focusControlTreeWithDefaults;	// 0x329127f9
- (id)_focusedLeafControl;	// 0x32926005
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x32925f41
- (id)_initialFocus;	// 0x32957641
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x329576e1
- (void)_layoutSublayersOfLayer:(id)layer;	// 0x3295842d
- (id)_parentScrollControl;	// 0x329fc8f1
- (void)_reevaluateFocusTree;	// 0x32921911
- (void)_removeAllControls;	// 0x32957685
- (void)_removeControl:(id)control;	// 0x3291b245
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x329590ad
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x32958bfd
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x329fc8bd
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x329fc86d
- (void)_scrollingCompleted;	// 0x329fc9d9
- (void)_scrollingInitiated;	// 0x329fc999
- (void)_setControlFocused:(BOOL)focused;	// 0x32912725
- (void)_setFocus:(id)focus;	// 0x32912905
- (CGRect)_visibleRectOfControl:(id)control;	// 0x329fd049
- (void)_visibleScrollRectChanged;	// 0x329fc841
// converted property getter: - (BOOL)acceptsFocus;	// 0x3291285d
- (id)accessibilityAncestor:(Class)ancestor;	// 0x329c94d1
- (BOOL)accessibilityElementIsHidden;	// 0x32957979
- (BOOL)accessibilityElementIsHidden;	// 0x329c949d
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x329c9519
- (id)actionForKey:(id)key;	// 0x329578d9
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x32958441
// converted property getter: - (id)actions;	// 0x32957899
- (BOOL)active;	// 0x32957465
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x32957959
- (void)addControl:(id)control;	// 0x32958235
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x3295878d
// converted property getter: - (CGPoint)anchorPoint;	// 0x329587b1
- (id)animationForKey:(id)key;	// 0x32957939
// converted property getter: - (unsigned)autoresizingMask;	// 0x32957455
// converted property getter: - (BOOL)avoidsCursor;	// 0x3292642d
// converted property getter: - (CGColorRef)backgroundColor;	// 0x32957e95
- (id)badge;	// 0x32968509
// converted property getter: - (CGColorRef)borderColor;	// 0x32957b35
// converted property getter: - (float)borderWidth;	// 0x32957af5
// converted property getter: - (CGRect)bounds;	// 0x329587d5
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x329585a1
- (BOOL)brEventAction:(id)action;	// 0x32925a1d
- (BOOL)brKeyEvent:(id)event;	// 0x3295850d
// converted property getter: - (int)contentMode;	// 0x32957b75
- (long)controlCount;	// 0x32957fd1
- (void)controlDidDisplayAsModalDialog;	// 0x3292bc55
- (id)controlForPoint:(CGPoint)point;	// 0x329574cd
- (void)controlWasActivated;	// 0x329582ed
- (void)controlWasDeactivated;	// 0x329582b1
- (void)controlWasFocused;	// 0x32912759
- (void)controlWasUnfocused;	// 0x3291f761
// converted property getter: - (id)controls;	// 0x32958001
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x329586f9
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x32958699
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x32958641
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x329585e9
- (void)dealloc;	// 0x3291f249
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x329574d5
// converted property getter: - (id)defaultFocus;	// 0x3295747d
- (void)drawInContext:(CGContextRef)context;	// 0x32957479
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x32958459
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x32957599
// declared property getter: - (id)eventDelegate;	// 0x32958a05
- (id)firstControlNamed:(id)named;	// 0x32959165
- (id)focusCandidates;	// 0x32957621
- (CGRect)focusCursorFrame;	// 0x3291c179
- (id)focusObjectForCandidate:(id)candidate;	// 0x32957609
// converted property getter: - (id)focusedControl;	// 0x329128f5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x329260d5
// converted property getter: - (CGRect)frame;	// 0x32958911
// converted property getter: - (id)identifier;	// 0x329133ed
- (id)inheritedValueForKey:(id)key;	// 0x32958471
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x3295748d
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x329574b5
- (id)initialFocus;	// 0x32957a29
- (void)insertControl:(id)control above:(id)above;	// 0x32958195
- (void)insertControl:(id)control atIndex:(long)index;	// 0x32958201
- (void)insertControl:(id)control below:(id)below;	// 0x32958149
// converted property getter: - (BOOL)isFocused;	// 0x3291284d
// converted property getter: - (BOOL)isHidden;	// 0x32957e0d
// converted property getter: - (id)keyEventTargetControl;	// 0x32957435
- (id)layer;	// 0x32957425
- (id)layerForBacking;	// 0x32958535
- (void)layoutSubcontrols;	// 0x32957475
// converted property getter: - (BOOL)masksToBounds;	// 0x32957ed5
// converted property getter: - (id)name;	// 0x32958271
// converted property getter: - (id)object;	// 0x329270d9
// converted property getter: - (float)opacity;	// 0x32957e55
- (id)parent;	// 0x32959195
- (id)parentScrollControl;	// 0x329fc915
// converted property getter: - (CGPoint)position;	// 0x329588ed
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x329585cd
- (id)preferredActionForKey:(id)key;	// 0x329574d1
- (float)preferredCursorRadius;	// 0x32968505
- (void)removeAllAnimations;	// 0x329578f9
- (void)removeAnimationForKey:(id)key;	// 0x32957919
- (void)removeFromParent;	// 0x32957fa9
- (id)root;	// 0x329591c5
- (void)scrollPoint:(CGPoint)point;	// 0x329fc97d
- (void)scrollRectToVisible:(CGRect)visible;	// 0x329fc93d
- (void)scrollingCompleted;	// 0x329fc69d
- (void)scrollingInitiated;	// 0x329fc6a1
// converted property getter: - (id)selectionHandler;	// 0x329579bd
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x32912479
// converted property setter: - (void)setActions:(id)actions;	// 0x329578b9
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x32958329
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x32958375
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x32957445
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x3291b205
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x32957eb5
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x32957b55
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x32957b15
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x329587f9
// converted property setter: - (void)setContentMode:(int)mode;	// 0x32957d31
// converted property setter: - (void)setControls:(id)controls;	// 0x3295802d
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x3291c285
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x329574c9
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x32958a1d
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x32912a0d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32959215
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x32957e31
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x3291bd91
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x329579fd
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x3295749d
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x329583b5
// converted property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x32957ef9
// converted property setter: - (void)setName:(id)name;	// 0x32958291
- (void)setNeedsDisplay;	// 0x32957f69
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32957f1d
- (void)setNeedsLayout;	// 0x32957f89
// converted property setter: - (void)setObject:(id)object;	// 0x329234f1
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x32957e75
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32958395
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x329579dd
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x32958935
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x329584cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32958759
- (void)sizeToFit;	// 0x32958a49
- (int)touchSensitivity;	// 0x329574c5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x329584ed
- (CGRect)visibleScrollRect;	// 0x329fd091
- (void)visibleScrollRectChanged;	// 0x329fc929
@end

