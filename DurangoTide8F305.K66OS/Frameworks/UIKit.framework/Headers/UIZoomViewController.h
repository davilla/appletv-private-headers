/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIWindow, UIButton;

__attribute__((visibility("hidden")))
@interface UIZoomViewController : UIViewController {
@private
	UIWindow *_window;	// 132 = 0x84
	UIButton *_zoomButton;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x321f0e3d; @synthesize=_window
- (id)init;	// 0x321f2631
- (void)_applicationDidFinishLaunching:(id)_application;	// 0x321f1019
- (void)_changeZoom:(id)zoom;	// 0x321f13d1
- (void)_getRotationContentSettings:(XXStruct_OrggeC *)settings forWindow:(id)window;	// 0x321f0e25
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)interfaceOrientation offscreen:(BOOL)offscreen;	// 0x321f3f55
- (void)_suspendAnimationStarted:(id)started;	// 0x321f0f55
- (void)_updateZoomButtonTitle;	// 0x321f136d
- (void)_zoomOrientationAnimationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x321f10dd
- (void)_zoomOrientationChange:(id)change;	// 0x321f11ed
- (id)_zoomText:(BOOL)text;	// 0x321f3629
- (void)dealloc;	// 0x321f2599
- (BOOL)isClassicControlWindow:(id)window;	// 0x321f0e0d
- (void)loadView;	// 0x321f3b61
// declared property getter: - (id)window;	// 0x321f0e3d
@end

