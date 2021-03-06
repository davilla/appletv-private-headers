/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRStatusAlertControlDelegate, BRImageControl;

@interface BRStatusAlertControl : BRControl {
@private
	BRStatusAlertControlDelegate *_animationDelegate;	// 48 = 0x30
	BRImageControl *_background;	// 52 = 0x34
	BRImageControl *_overlay;	// 56 = 0x38
	int _fadeHalfCount;	// 60 = 0x3c
	int _maxFadeCount;	// 64 = 0x40
}
+ (id)alertWithType:(int)type;	// 0x331ee455
+ (void)postStatusAlertOfType:(id)type;	// 0x331ee4b1
- (id)init;	// 0x331ee631
- (void)_cancel;	// 0x331eed19
- (void)_setDuration:(float)duration;	// 0x331eecc9
- (void)_setType:(int)type;	// 0x331ee8f9
- (id)accessibilityLabel;	// 0x331ee8d9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x331ee851
- (void)dealloc;	// 0x331ee671
- (BOOL)isAccessibilityElement;	// 0x331ee8d5
- (void)layoutSubcontrols;	// 0x331ee6fd
@end

