/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class UIViewController, UINavigationBar, UIView, MPVideoView;

@interface MPVideoTransferTransitionController : MPTransitionController {
	MPVideoView *_inflightVideoView;	// 52 = 0x34
	UINavigationBar *_portraitNavigationBar;	// 56 = 0x38
	BOOL _showOverlayAfterTransition;	// 60 = 0x3c
	UIView *_transitionBehindView;	// 64 = 0x40
	UIViewController *_inflightBackstopViewController;	// 68 = 0x44
	float _preTransitionWindowLevel;	// 72 = 0x48
}
@property(retain, nonatomic) UIViewController *inflightBackstopViewController;	// G=0x319d97ed; S=0x319da13d; @synthesize=_inflightBackstopViewController
@property(retain, nonatomic) UINavigationBar *portraitNavigationBar;	// G=0x319da0e9; S=0x319da0f9; @synthesize=_portraitNavigationBar
@property(assign, nonatomic) BOOL showOverlayAfterTransition;	// G=0x319da11d; S=0x319da12d; @synthesize=_showOverlayAfterTransition
@property(retain, nonatomic) UIView *transitionBehindView;	// G=0x319da161; S=0x319da171; @synthesize=_transitionBehindView
- (id)init;	// 0x319d9255
- (void)_animationDidStop;	// 0x319d9649
- (void)_prepareViewsWithBeginAnimationTransactionBlock:(id)beginAnimationTransactionBlock;	// 0x319d9825
- (void)_transformView:(id)view forOrientation:(int)orientation bounds:(CGRect)bounds;	// 0x319d9e1d
- (void)_updateStatusBar;	// 0x319d9ff1
- (void)dealloc;	// 0x319d929d
// declared property getter: - (id)inflightBackstopViewController;	// 0x319d97ed
- (void)performTransition:(unsigned)transition;	// 0x319d9329
// declared property getter: - (id)portraitNavigationBar;	// 0x319da0e9
// declared property setter: - (void)setInflightBackstopViewController:(id)controller;	// 0x319da13d
// declared property setter: - (void)setPortraitNavigationBar:(id)bar;	// 0x319da0f9
// declared property setter: - (void)setShowOverlayAfterTransition:(BOOL)transition;	// 0x319da12d
// declared property setter: - (void)setTransitionBehindView:(id)view;	// 0x319da171
// declared property getter: - (BOOL)showOverlayAfterTransition;	// 0x319da11d
// declared property getter: - (id)transitionBehindView;	// 0x319da161
@end
