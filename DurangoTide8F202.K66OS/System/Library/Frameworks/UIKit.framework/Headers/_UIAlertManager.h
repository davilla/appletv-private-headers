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
+ (CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;	// 0x306a4d61
+ (void)addToStack:(id)stack dontDimBackground:(BOOL)background;	// 0x306a06fd
+ (void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void *)context;	// 0x3085b3f9
+ (BOOL)cancelAlertsAnimated:(BOOL)animated;	// 0x30859d85
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)animated;	// 0x30859f3d
+ (void)createAlertWindowIfNeeded:(BOOL)needed;	// 0x306a08f5
+ (void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;	// 0x306a090d
+ (void)hideAlertsForTermination;	// 0x305faff1
+ (BOOL)hideTopMostAlertAnimated:(BOOL)animated;	// 0x30859f65
+ (void)hideTopmostMiniAlert:(int)alert;	// 0x30859fe5
+ (void)initialize;	// 0x305faf89
+ (void)noteOrientationChangingTo:(int)to;	// 0x30859de5
+ (void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;	// 0x30859dfd
+ (void)removeFromStack:(id)stack;	// 0x306a5cb5
+ (void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;	// 0x306a4a4d
+ (void)showTopmostMiniAlert;	// 0x30859f8d
+ (void)sizeAlertWindowForCurrentOrientation;	// 0x306a0b6d
+ (BOOL)stackContainsAlert:(id)alert;	// 0x306a5c95
+ (void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated;	// 0x306a60a5
+ (void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated;	// 0x306a4eed
+ (id)topMostAlert;	// 0x306ad93d
+ (id)visibleAlert;	// 0x30859d89
@end
