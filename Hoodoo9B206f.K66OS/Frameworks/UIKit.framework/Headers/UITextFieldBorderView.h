/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextFieldBorderView : UIView {
@private
	UIImage *_image;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame;	// 0x353733b9
- (void)_updateViewPropertiesForBackgroundImage;	// 0x353734c1
- (void)dealloc;	// 0x3546e93d
- (void)layoutSubviews;	// 0x35373919
- (void)setImage:(id)image;	// 0x35373409
- (BOOL)useBlockyMagnificationInClassic;	// 0x354e21dd
@end

