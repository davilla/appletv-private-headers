/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardZoomGesture : UIGestureRecognizer {
@private
	BOOL _waiting;	// 55 = 0x37
	int _zoomType;	// 56 = 0x38
	float _initialDistance;	// 60 = 0x3c
	double _maximumWaitForMultitouch;	// 64 = 0x40
	double _maximumWaitForMovement;	// 72 = 0x48
}
@property(assign, nonatomic) double maximumWaitForMovement;	// G=0x353bdbe1; S=0x353bdbf9; @synthesize=_maximumWaitForMovement
@property(assign, nonatomic) double maximumWaitForMultitouch;	// G=0x353bdbb5; S=0x353bdbcd; @synthesize=_maximumWaitForMultitouch
@property(assign, nonatomic) int zoomType;	// G=0x353bdb95; S=0x353bdba5; @synthesize=_zoomType
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x353bd4b5
- (void)_resetGestureRecognizer;	// 0x353bd525
- (float)averageDistanceForTouches:(id)touches;	// 0x353bda41
- (CGPoint)centroidForTouches:(id)touches;	// 0x353bd8cd
- (void)clearTimers;	// 0x353bd835
- (void)failAfterDelay:(double)delay;	// 0x353bd885
// declared property getter: - (double)maximumWaitForMovement;	// 0x353bdbe1
// declared property getter: - (double)maximumWaitForMultitouch;	// 0x353bdbb5
// declared property setter: - (void)setMaximumWaitForMovement:(double)movement;	// 0x353bdbf9
// declared property setter: - (void)setMaximumWaitForMultitouch:(double)multitouch;	// 0x353bdbcd
// declared property setter: - (void)setZoomType:(int)type;	// 0x353bdba5
- (void)tooSlow:(id)slow;	// 0x353bd821
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x353bd565
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x353bd7f1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x353bd72d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x353bd619
// declared property getter: - (int)zoomType;	// 0x353bdb95
@end
