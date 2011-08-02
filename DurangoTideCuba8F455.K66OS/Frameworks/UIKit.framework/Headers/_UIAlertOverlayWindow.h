/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface _UIAlertOverlayWindow : UIWindow {
@private
	BOOL _shouldDeferDisplay;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL shouldDeferDisplay;	// G=0x30342cf9; S=0x30189a75; 
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x30189a21
- (float)_contentScaleFactor;	// 0x30343811
- (void)_handleMouseUp:(GSEventRef)up;	// 0x30343935
- (BOOL)_shouldUseKeyWindowStack;	// 0x3018f641
- (BOOL)isInternalWindow;	// 0x30342cf5
- (id)representation;	// 0x30343851
- (void)setContentScaleFactor:(float)factor;	// 0x30189a3d
// declared property setter: - (void)setShouldDeferDisplay:(BOOL)deferDisplay;	// 0x30189a75
// declared property getter: - (BOOL)shouldDeferDisplay;	// 0x30342cf9
@end

