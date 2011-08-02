/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject {
}
+ (CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;	// 0x3018dd61
+ (void)addToStack:(id)stack dontDimBackground:(BOOL)background;	// 0x301896fd
+ (void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void *)context;	// 0x303443f9
+ (BOOL)cancelAlertsAnimated:(BOOL)animated;	// 0x30342d85
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)animated;	// 0x30342f3d
+ (void)createAlertWindowIfNeeded:(BOOL)needed;	// 0x301898f5
+ (void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;	// 0x3018990d
+ (void)hideAlertsForTermination;	// 0x300e3ff1
+ (BOOL)hideTopMostAlertAnimated:(BOOL)animated;	// 0x30342f65
+ (void)hideTopmostMiniAlert:(int)alert;	// 0x30342fe5
+ (void)initialize;	// 0x300e3f89
+ (void)noteOrientationChangingTo:(int)to;	// 0x30342de5
+ (void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;	// 0x30342dfd
+ (void)removeFromStack:(id)stack;	// 0x3018ecb5
+ (void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;	// 0x3018da4d
+ (void)showTopmostMiniAlert;	// 0x30342f8d
+ (void)sizeAlertWindowForCurrentOrientation;	// 0x30189b6d
+ (BOOL)stackContainsAlert:(id)alert;	// 0x3018ec95
+ (void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated;	// 0x3018f0a5
+ (void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated;	// 0x3018deed
+ (id)topMostAlert;	// 0x3019693d
+ (id)visibleAlert;	// 0x30342d89
@end

