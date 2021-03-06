/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class MPVideoView, UINavigationBar, UIView;

@interface MPVideoTransferTransitionController : MPTransitionController {
	MPVideoView *_inflightVideoView;	// 48 = 0x30
	UINavigationBar *_portraitNavigationBar;	// 52 = 0x34
	UIView *_topmostView;	// 56 = 0x38
	UIView *_transitionBehindView;	// 60 = 0x3c
}
@property(retain, nonatomic) UINavigationBar *portraitNavigationBar;	// G=0x31d88061; S=0x31d88b19; @synthesize=_portraitNavigationBar
@property(retain, nonatomic) UIView *topmostView;	// G=0x31d88041; S=0x31d88b69; @synthesize=_topmostView
@property(retain, nonatomic) UIView *transitionBehindView;	// G=0x31d88051; S=0x31d88b41; @synthesize=_transitionBehindView
- (id)init;	// 0x31d88349
- (void)_animationDidStop;	// 0x31d88181
- (void)_prepareViews;	// 0x31d8838d
- (id)_topmostView;	// 0x31d8814d
- (id)_topmostViewWindow;	// 0x31d88111
- (void)_transformView:(id)view forOrientation:(int)orientation bounds:(CGRect)bounds;	// 0x31d88905
- (void)_updateStatusBar;	// 0x31d88071
- (void)dealloc;	// 0x31d882c5
// declared property getter: - (id)portraitNavigationBar;	// 0x31d88061
// declared property setter: - (void)setPortraitNavigationBar:(id)bar;	// 0x31d88b19
// declared property setter: - (void)setTopmostView:(id)view;	// 0x31d88b69
// declared property setter: - (void)setTransitionBehindView:(id)view;	// 0x31d88b41
// declared property getter: - (id)topmostView;	// 0x31d88041
- (void)transition:(unsigned)transition;	// 0x31d886a1
// declared property getter: - (id)transitionBehindView;	// 0x31d88051
@end

