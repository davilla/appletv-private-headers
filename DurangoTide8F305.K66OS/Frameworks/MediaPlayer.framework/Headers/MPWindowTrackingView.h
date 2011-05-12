/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library


@interface MPWindowTrackingView : UIView {
	id _observer;	// 44 = 0x2c
}
+ (void)beginTrackingInView:(id)view withObserver:(id)observer;	// 0x3372955d
+ (void)endTrackingInView:(id)view;	// 0x337295d5
- (id)initWithObserver:(id)observer;	// 0x3372e505
- (void)clearObserver;	// 0x33729459
- (void)didMoveToWindow;	// 0x337294cd
- (void)willMoveToWindow:(id)window;	// 0x33729525
@end

