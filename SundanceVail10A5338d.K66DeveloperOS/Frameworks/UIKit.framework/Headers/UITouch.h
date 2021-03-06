/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIWindow, UIView, NSMutableArray;

@interface UITouch : NSObject {
	double _timestamp;	// 4 = 0x4
	int _phase;	// 12 = 0xc
	int _savedPhase;	// 16 = 0x10
	unsigned _tapCount;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	UIView *_view;	// 28 = 0x1c
	UIView *_gestureView;	// 32 = 0x20
	UIView *_warpedIntoView;	// 36 = 0x24
	NSMutableArray *_gestureRecognizers;	// 40 = 0x28
	NSMutableArray *_forwardingRecord;	// 44 = 0x2c
	CGPoint _locationInWindow;	// 48 = 0x30
	CGPoint _previousLocationInWindow;	// 56 = 0x38
	unsigned char _pathIndex;	// 64 = 0x40
	unsigned char _pathIdentity;	// 65 = 0x41
	float _pathMajorRadius;	// 68 = 0x44
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;	// 72 = 0x48
	BOOL _eaten;	// 73 = 0x49
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// G=0x30c2464d; S=0x30e36779; @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x30c27919; S=0x30c2462d; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x30d0c745; S=0x30c2461d; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x30d0c755; S=0x30c2463d; @synthesize
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x30c28c71; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x30c24ff1; S=0x30c246a9; 
@property(assign) BOOL isDelayed;	// G=0x30c2625d; S=0x30cffc0d; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x30c27929; S=0x30c24b35; 
@property(readonly, assign, nonatomic) int phase;	// G=0x30c24c4d; 
@property(assign, nonatomic) int phase;	// S=0x30c24441; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x30c2793d; S=0x30d27f59; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x30c27649; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x30c24b55; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x30d0c0a9; 
@property(assign, nonatomic) double timestamp;	// S=0x30c2442d; 
@property(retain, nonatomic) UIView *view;	// S=0x30c24665; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x30c24f45; 
@property(retain, nonatomic) UIView *warpedIntoView;	// G=0x30c246ed; S=0x30cddc99; 
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x30c24aad; 
@property(retain, nonatomic) UIWindow *window;	// S=0x30c24451; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x30e36789
- (void)_addGestureRecognizer:(id)recognizer;	// 0x30cfc8e5
- (void)_clearGestureRecognizers;	// 0x30e36a85
- (int)_compareIndex:(id)index;	// 0x30e36ae9
- (float)_distanceFrom:(id)from inView:(id)view;	// 0x30f71e09
- (id)_forwardingRecord;	// 0x30c26869
- (id)_gestureRecognizers;	// 0x30c25d11
// declared property getter: - (BOOL)_isEaten;	// 0x30c2464d
- (BOOL)_isFirstTouchForView;	// 0x30c26f69
- (void)_loadStateFromTouch:(id)touch;	// 0x30cffb09
- (CGPoint)_locationInWindow:(id)window;	// 0x30cfd839
// declared property getter: - (unsigned char)_pathIdentity;	// 0x30c27919
// declared property getter: - (unsigned char)_pathIndex;	// 0x30d0c745
// declared property getter: - (float)_pathMajorRadius;	// 0x30d0c755
- (id)_phaseDescription;	// 0x30e368c1
- (void)_popPhase;	// 0x30e36ac9
- (CGPoint)_previousLocationInWindow:(id)window;	// 0x30d74b59
- (void)_pushPhase:(int)phase;	// 0x30e36aa5
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x30d00465
// declared property setter: - (void)_setEaten:(BOOL)eaten;	// 0x30e36779
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x30c24b65
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x30c24711
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x30c2462d
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x30c2461d
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x30c2463d
- (BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;	// 0x30d1b249
- (void)dealloc;	// 0x30c28d45
- (id)description;	// 0x30e36929
// declared property getter: - (id)gestureRecognizers;	// 0x30c28c71
// declared property getter: - (id)gestureView;	// 0x30c24ff1
- (int)info;	// 0x30e36675
// converted property getter: - (BOOL)isDelayed;	// 0x30c2625d
// declared property getter: - (BOOL)isTap;	// 0x30c27929
- (CGPoint)locationInView:(id)view;	// 0x30c262cd
// declared property getter: - (int)phase;	// 0x30c24c4d
- (CGPoint)previousLocationInView:(id)view;	// 0x30e36679
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x30c2793d
// declared property setter: - (void)setGestureView:(id)view;	// 0x30c246a9
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x30cffc0d
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x30c24b35
// declared property setter: - (void)setPhase:(int)phase;	// 0x30c24441
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x30d27f59
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x30c24b55
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30c2442d
// declared property setter: - (void)setView:(id)view;	// 0x30c24665
// declared property setter: - (void)setWarpedIntoView:(id)view;	// 0x30cddc99
// declared property setter: - (void)setWindow:(id)window;	// 0x30c24451
// declared property getter: - (unsigned)tapCount;	// 0x30c27649
// declared property getter: - (double)timestamp;	// 0x30d0c0a9
// declared property getter: - (id)view;	// 0x30c24f45
// declared property getter: - (id)warpedIntoView;	// 0x30c246ed
// declared property getter: - (id)window;	// 0x30c24aad
@end

