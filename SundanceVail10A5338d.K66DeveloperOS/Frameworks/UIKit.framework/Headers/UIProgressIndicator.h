/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityIndicatorView.h"
#import "UIKit-Structs.h"


@interface UIProgressIndicator : UIActivityIndicatorView {
}
@property(assign, nonatomic) int progressIndicatorStyle;	// G=0x30df5f8d; S=0x30df5f9d; 
+ (CGSize)size;	// 0x30df5fad
// declared property getter: - (int)progressIndicatorStyle;	// 0x30df5f8d
- (void)setAnimating:(BOOL)animating;	// 0x30df5fe1
// declared property setter: - (void)setProgressIndicatorStyle:(int)style;	// 0x30df5f9d
- (void)setStyle:(int)style;	// 0x30df5fd1
- (void)startAnimation;	// 0x30df6009
- (void)stopAnimation;	// 0x30df6019
@end

