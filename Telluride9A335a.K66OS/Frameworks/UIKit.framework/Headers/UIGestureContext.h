/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureContext : NSObject {
@private
	CGPoint _startLocation;	// 4 = 0x4
	float _startTimestamp;	// 12 = 0xc
	CGPoint _currentLocation;	// 16 = 0x10
	UITouch *_touch;	// 24 = 0x18
	int _state;	// 28 = 0x1c
}
@property(assign, nonatomic) CGPoint currentLocation;	// G=0x33c7a425; S=0x33c7a441; @synthesize=_currentLocation
@property(assign, nonatomic) CGPoint startLocation;	// G=0x33c7a3f5; S=0x33c7a411; @synthesize=_startLocation
@property(assign, nonatomic) float startTimestamp;	// G=0x33c7a4a9; S=0x33c7a4b9; @synthesize=_startTimestamp
@property(assign, nonatomic) int state;	// G=0x33c7a489; S=0x33c7a499; @synthesize=_state
@property(retain, nonatomic) UITouch *touch;	// G=0x33c7a455; S=0x33c7a465; @synthesize=_touch
- (id)initWithTouch:(id)touch inView:(id)view;	// 0x33c7a30d
// declared property getter: - (CGPoint)currentLocation;	// 0x33c7a425
// declared property setter: - (void)setCurrentLocation:(CGPoint)location;	// 0x33c7a441
// declared property setter: - (void)setStartLocation:(CGPoint)location;	// 0x33c7a411
// declared property setter: - (void)setStartTimestamp:(float)timestamp;	// 0x33c7a4b9
// declared property setter: - (void)setState:(int)state;	// 0x33c7a499
// declared property setter: - (void)setTouch:(id)touch;	// 0x33c7a465
// declared property getter: - (CGPoint)startLocation;	// 0x33c7a3f5
// declared property getter: - (float)startTimestamp;	// 0x33c7a4a9
// declared property getter: - (int)state;	// 0x33c7a489
// declared property getter: - (id)touch;	// 0x33c7a455
@end

