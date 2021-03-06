/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface _UIHostedWindow : UIWindow {
}
@property(readonly, assign) unsigned contextID;	// G=0x33dd8cc5; 
- (id)initWithFrame:(CGRect)frame;	// 0x33dd8c45
- (BOOL)_canPromoteFromKeyWindowStack;	// 0x33dd8cc1
- (BOOL)_isWindowServerHostingManaged;	// 0x33dd8cbd
- (void)_registerScrollToTopView:(id)topView;	// 0x33dd8cd9
- (void)_unregisterScrollToTopView:(id)topView;	// 0x33dd8d79
- (void)_updateAppTintView;	// 0x33dd8e19
- (void)_updateTransformLayerForClassicPresentation;	// 0x33dd8e81
- (BOOL)_usesWindowServerHitTesting;	// 0x33dd8cd5
// declared property getter: - (unsigned)contextID;	// 0x33dd8cc5
@end

