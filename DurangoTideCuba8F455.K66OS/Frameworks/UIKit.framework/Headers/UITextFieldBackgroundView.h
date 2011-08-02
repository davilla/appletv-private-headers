/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView {
@private
	BOOL _active;	// 41 = 0x29
	float _progress;	// 44 = 0x2c
}
- (id)initWithFrame:(CGRect)frame active:(BOOL)active;	// 0x300fb00d
- (void)_updateImages;	// 0x3023e299
- (BOOL)ignoresMouseEvents;	// 0x301c3b89
- (void)setActive:(BOOL)active;	// 0x30100371
- (void)setBounds:(CGRect)bounds;	// 0x3023e405
- (void)setFrame:(CGRect)frame;	// 0x300fb0ad
- (void)setProgress:(float)progress;	// 0x3023e3b1
@end

