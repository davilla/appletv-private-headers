/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface _UITableViewHeaderFooterViewBackground : UIView {
	UIView *_opaqueBackgroundView;	// 84 = 0x54
	UIView *_transparentBackgroundView;	// 88 = 0x58
}
- (id)initWithFrame:(CGRect)frame;	// 0x31037f0d
- (id)_opaqueBackgroundView;	// 0x31037fc1
- (id)_transparentBackgroundView;	// 0x31038055
- (void)_updateBackingView;	// 0x310380fd
- (void)dealloc;	// 0x31037f5d
- (void)setBackgroundImage:(id)image;	// 0x31038285
- (void)setOpaque:(BOOL)opaque;	// 0x31038349
@end

