/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView {
@private
	CALayer *_mask;	// 48 = 0x30
}
@property(retain, nonatomic) CALayer *mask;	// G=0x3033362d; S=0x3033354d; 
+ (id)classFallbacksForKeyedArchiver;	// 0x303334d1
- (id)_cell;	// 0x303334f9
- (void)dealloc;	// 0x30166885
// declared property getter: - (id)mask;	// 0x3033362d
- (void)setBounds:(CGRect)bounds;	// 0x3033363d
- (void)setFrame:(CGRect)frame;	// 0x3008c6a5
// declared property setter: - (void)setMask:(id)mask;	// 0x3033354d
@end

