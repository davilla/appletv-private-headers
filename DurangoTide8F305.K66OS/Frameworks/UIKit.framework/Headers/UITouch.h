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
	NSMutableArray *_gestureRecognizers;	// 36 = 0x24
	CGPoint _locationInWindow;	// 40 = 0x28
	CGPoint _previousLocationInWindow;	// 48 = 0x30
	unsigned char _pathIndex;	// 56 = 0x38
	unsigned char _pathIdentity;	// 57 = 0x39
	float _pathMajorRadius;	// 60 = 0x3c
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _touchFlags;	// 64 = 0x40
}
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// G=0x31f91295; S=0x31f8e91d; @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// G=0x3205bf69; S=0x31f8e90d; @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// G=0x3205bf79; S=0x31f8e92d; @synthesize
@property(readonly, copy, nonatomic) NSArray *gestureRecognizers;	// G=0x31f9250d; 
@property(retain, nonatomic) UIView *gestureView;	// G=0x31f8f101; S=0x31f8e97d; 
@property(assign) BOOL isDelayed;	// G=0x31f8feb5; S=0x32016cad; converted property
@property(assign, nonatomic) BOOL isTap;	// G=0x31f912a5; S=0x31f8ed81; 
@property(assign, nonatomic) BOOL isWarped;	// G=0x31f8e9b9; S=0x3201cfed; 
@property(readonly, assign, nonatomic) int phase;	// G=0x31f8ede1; 
@property(assign, nonatomic) int phase;	// S=0x31f8e755; 
@property(assign, nonatomic) BOOL sentTouchesEnded;	// G=0x31f912b9; S=0x3202bf55; 
@property(readonly, assign, nonatomic) unsigned tapCount;	// G=0x31f9103d; 
@property(assign, nonatomic) unsigned tapCount;	// S=0x31f8ed9d; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x320296b5; 
@property(assign, nonatomic) double timestamp;	// S=0x31f8e741; 
@property(readonly, retain, nonatomic) UIView *view;	// G=0x31f8f051; 
@property(retain, nonatomic) UIView *view;	// S=0x31f8e941; 
@property(readonly, retain, nonatomic) UIWindow *window;	// G=0x31f8ed05; 
@property(retain, nonatomic) UIWindow *window;	// S=0x31f8e765; 
+ (id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;	// 0x32149b21
- (void)_addGestureRecognizer:(id)recognizer;	// 0x32014775
- (void)_clearGestureRecognizers;	// 0x32073b05
- (int)_compareIndex:(id)index;	// 0x32149995
- (id)_gestureRecognizers;	// 0x31f8fa59
- (BOOL)_isFirstTouchForView;	// 0x31f909b9
- (void)_loadStateFromTouch:(id)touch;	// 0x32016bb5
- (CGPoint)_locationInWindow:(id)window;	// 0x320457b1
// declared property getter: - (unsigned char)_pathIdentity;	// 0x31f91295
// declared property getter: - (unsigned char)_pathIndex;	// 0x3205bf69
// declared property getter: - (float)_pathMajorRadius;	// 0x3205bf79
- (id)_phaseDescription;	// 0x321498f9
- (void)_popPhase;	// 0x32149975
- (void)_pushPhase:(int)phase;	// 0x32149951
- (void)_removeGestureRecognizer:(id)recognizer;	// 0x32019bc1
- (void)_setIsFirstTouchForView:(BOOL)view;	// 0x31f8edad
- (void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;	// 0x31f8e9dd
// declared property setter: - (void)_setPathIdentity:(unsigned char)identity;	// 0x31f8e91d
// declared property setter: - (void)_setPathIndex:(unsigned char)index;	// 0x31f8e90d
// declared property setter: - (void)_setPathMajorRadius:(float)radius;	// 0x31f8e92d
- (void)dealloc;	// 0x31f925b9
- (id)description;	// 0x321499e5
// declared property getter: - (id)gestureRecognizers;	// 0x31f9250d
// declared property getter: - (id)gestureView;	// 0x31f8f101
- (int)info;	// 0x321498f5
// converted property getter: - (BOOL)isDelayed;	// 0x31f8feb5
// declared property getter: - (BOOL)isTap;	// 0x31f912a5
// declared property getter: - (BOOL)isWarped;	// 0x31f8e9b9
- (CGPoint)locationInView:(id)view;	// 0x31f90341
// declared property getter: - (int)phase;	// 0x31f8ede1
- (CGPoint)previousLocationInView:(id)view;	// 0x3201ce11
// declared property getter: - (BOOL)sentTouchesEnded;	// 0x31f912b9
// declared property setter: - (void)setGestureView:(id)view;	// 0x31f8e97d
// converted property setter: - (void)setIsDelayed:(BOOL)delayed;	// 0x32016cad
// declared property setter: - (void)setIsTap:(BOOL)tap;	// 0x31f8ed81
// declared property setter: - (void)setIsWarped:(BOOL)warped;	// 0x3201cfed
// declared property setter: - (void)setPhase:(int)phase;	// 0x31f8e755
// declared property setter: - (void)setSentTouchesEnded:(BOOL)ended;	// 0x3202bf55
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x31f8ed9d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x31f8e741
// declared property setter: - (void)setView:(id)view;	// 0x31f8e941
// declared property setter: - (void)setWindow:(id)window;	// 0x31f8e765
// declared property getter: - (unsigned)tapCount;	// 0x31f9103d
// declared property getter: - (double)timestamp;	// 0x320296b5
// declared property getter: - (id)view;	// 0x31f8f051
// declared property getter: - (id)window;	// 0x31f8ed05
@end

