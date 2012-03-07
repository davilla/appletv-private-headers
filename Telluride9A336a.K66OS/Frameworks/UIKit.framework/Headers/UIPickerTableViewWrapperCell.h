/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"


__attribute__((visibility("hidden")))
@interface UIPickerTableViewWrapperCell : UITableViewCell {
@private
	UIView *_wrappedView;	// 248 = 0xf8
	CGSize _wrappedViewSize;	// 252 = 0xfc
}
@property(retain, nonatomic) UIView *wrappedView;	// G=0x3524570d; S=0x35246601; 
- (id)initWithFrame:(CGRect)frame;	// 0x3542331d
- (void)_updateWrappedView;	// 0x3524665d
- (void)_updateWrappedViewFrame;	// 0x35246789
- (void)prepareForReuse;	// 0x35249195
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x35246889
// declared property setter: - (void)setWrappedView:(id)view;	// 0x35246601
// declared property getter: - (id)wrappedView;	// 0x3524570d
@end
