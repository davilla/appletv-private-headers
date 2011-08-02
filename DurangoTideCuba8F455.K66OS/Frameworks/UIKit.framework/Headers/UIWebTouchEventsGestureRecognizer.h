/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
@private
	id _touchTarget;	// 60 = 0x3c
	SEL _touchAction;	// 64 = 0x40
	unsigned _passedHitTest : 1;	// 68 = 0x44
	unsigned _defaultPrevented : 1;	// 68 = 0x44
	unsigned _inJavaScriptGesture : 1;	// 68 = 0x44
	float _originalGestureDistance;	// 72 = 0x48
	float _originalGestureAngle;	// 76 = 0x4c
	int _type;	// 80 = 0x50
	CGPoint _locationInWindow;	// 84 = 0x54
	NSMutableArray *_touchLocations;	// 92 = 0x5c
	NSMutableArray *_touchIdentifiers;	// 96 = 0x60
	NSMutableArray *_touchPhases;	// 100 = 0x64
	float _scale;	// 104 = 0x68
	float _rotation;	// 108 = 0x6c
}
@property(assign, nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;	// G=0x303294bd; S=0x303294d1; @synthesize=_defaultPrevented
@property(readonly, assign, nonatomic) BOOL inJavaScriptGesture;	// G=0x30329451; @synthesize=_inJavaScriptGesture
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x30329495; @synthesize=_locationInWindow
@property(readonly, assign, nonatomic) float rotation;	// G=0x30329431; @synthesize=_rotation
@property(readonly, assign, nonatomic) float scale;	// G=0x30329441; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *touchIdentifiers;	// G=0x30329475; S=0x300fcc15; @synthesize=_touchIdentifiers
@property(retain, nonatomic) NSMutableArray *touchLocations;	// G=0x30329485; S=0x300fcbed; @synthesize=_touchLocations
@property(retain, nonatomic) NSMutableArray *touchPhases;	// G=0x30329465; S=0x300fcc3d; @synthesize=_touchPhases
@property(readonly, assign, nonatomic) int type;	// G=0x303294ad; @synthesize=_type
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300fc9b1
- (BOOL)_hitTestTouches:(id)touches;	// 0x30184809
- (id)_identifiersDescription;	// 0x3032aa19
- (id)_locationsDescription;	// 0x3032afe1
- (id)_phaseDescription:(int)description;	// 0x303293e1
- (id)_phasesDescription;	// 0x3032a8fd
- (void)_processTouches:(id)touches withEvent:(id)event type:(int)type;	// 0x3032a745
- (void)_recordTouches:(id)touches type:(int)type;	// 0x3032c281
- (void)_reset;	// 0x301849e1
- (void)_resetGestureRecognizer;	// 0x301849a5
- (id)_typeDescription;	// 0x30329391
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x3032942d
- (void)dealloc;	// 0x3032a6e5
- (id)description;	// 0x3032a5d1
// declared property getter: - (BOOL)inJavaScriptGesture;	// 0x30329451
// declared property getter: - (BOOL)isDefaultPrevented;	// 0x303294bd
// declared property getter: - (CGPoint)locationInWindow;	// 0x30329495
// declared property getter: - (float)rotation;	// 0x30329431
// declared property getter: - (float)scale;	// 0x30329441
// declared property setter: - (void)setDefaultPrevented:(BOOL)prevented;	// 0x303294d1
// declared property setter: - (void)setTouchIdentifiers:(id)identifiers;	// 0x300fcc15
// declared property setter: - (void)setTouchLocations:(id)locations;	// 0x300fcbed
// declared property setter: - (void)setTouchPhases:(id)phases;	// 0x300fcc3d
// declared property getter: - (id)touchIdentifiers;	// 0x30329475
// declared property getter: - (id)touchLocations;	// 0x30329485
// declared property getter: - (id)touchPhases;	// 0x30329465
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3018477d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3032a1e9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3032a225
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3032a261
// declared property getter: - (int)type;	// 0x303294ad
@end

