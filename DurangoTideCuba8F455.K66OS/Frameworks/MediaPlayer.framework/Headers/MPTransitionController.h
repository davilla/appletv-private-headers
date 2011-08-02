/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableSet, MPViewController, UIView;

@interface MPTransitionController : NSObject {
	CFDictionaryRef _observers;	// 4 = 0x4
	float _duration;	// 8 = 0x8
	UIView *_rootView;	// 12 = 0xc
	NSMutableSet *_persistentViewsToFadeOut;	// 16 = 0x10
	NSMutableSet *_viewsToFadeOut;	// 20 = 0x14
	NSMutableSet *_persistentViewsToFadeIn;	// 24 = 0x18
	NSMutableSet *_viewsToFadeIn;	// 28 = 0x1c
	MPViewController *_fromViewController;	// 32 = 0x20
	int _fromInterfaceOrientation;	// 36 = 0x24
	MPViewController *_toViewController;	// 40 = 0x28
	int _toInterfaceOrientation;	// 44 = 0x2c
}
@property(assign, nonatomic) float duration;	// G=0x335e2889; S=0x335e2899; @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// G=0x335e2869; S=0x335e2879; @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController *fromViewController;	// G=0x335e2859; S=0x335e2fbd; @synthesize=_fromViewController
@property(retain, nonatomic) UIView *rootView;	// G=0x335e2849; S=0x335e2fe5; @synthesize=_rootView
@property(assign, nonatomic) int toInterfaceOrientation;	// G=0x335e2829; S=0x335e2839; @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController *toViewController;	// G=0x335e2819; S=0x335e300d; @synthesize=_toViewController
- (id)init;	// 0x335e2a31
- (void)addObserver:(id)observer didEndSelector:(SEL)selector;	// 0x335e2b8d
- (void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;	// 0x335e2979
- (void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;	// 0x335e28c1
- (void)dealloc;	// 0x335e2a9d
// declared property getter: - (float)duration;	// 0x335e2889
- (void)fadeViewsForRestore:(BOOL)restore;	// 0x335e2d19
// declared property getter: - (int)fromInterfaceOrientation;	// 0x335e2869
// declared property getter: - (id)fromViewController;	// 0x335e2859
- (void)messageObserversWithSuccess:(BOOL)success;	// 0x335e2bf9
- (void)removeObserver:(id)observer;	// 0x335e2fa1
// declared property getter: - (id)rootView;	// 0x335e2849
// declared property setter: - (void)setDuration:(float)duration;	// 0x335e2899
// declared property setter: - (void)setFromInterfaceOrientation:(int)interfaceOrientation;	// 0x335e2879
// declared property setter: - (void)setFromViewController:(id)viewController;	// 0x335e2fbd
// declared property setter: - (void)setRootView:(id)view;	// 0x335e2fe5
// declared property setter: - (void)setToInterfaceOrientation:(int)interfaceOrientation;	// 0x335e2839
// declared property setter: - (void)setToViewController:(id)viewController;	// 0x335e300d
// declared property getter: - (int)toInterfaceOrientation;	// 0x335e2829
// declared property getter: - (id)toViewController;	// 0x335e2819
- (void)transition:(unsigned)transition;	// 0x335e28a9
@end

