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
@property(retain, nonatomic) UIView *wrappedView;	// G=0x3580470d; S=0x35805601; 
- (id)initWithFrame:(CGRect)frame;	// 0x359e231d
- (void)_updateWrappedView;	// 0x3580565d
- (void)_updateWrappedViewFrame;	// 0x35805789
- (void)prepareForReuse;	// 0x35808195
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x35805889
// declared property setter: - (void)setWrappedView:(id)view;	// 0x35805601
// declared property getter: - (id)wrappedView;	// 0x3580470d
@end
