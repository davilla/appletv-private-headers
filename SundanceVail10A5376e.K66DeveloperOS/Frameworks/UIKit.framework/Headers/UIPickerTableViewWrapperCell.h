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
	UIView *_wrappedView;	// 300 = 0x12c
	CGSize _wrappedViewSize;	// 304 = 0x130
}
@property(retain, nonatomic) UIView *wrappedView;	// G=0x303c8ecd; S=0x303ca6dd; 
- (id)initWithFrame:(CGRect)frame;	// 0x30598789
- (void)_updateWrappedView;	// 0x303ca74d
- (void)_updateWrappedViewFrame;	// 0x303ca87d
- (void)prepareForReuse;	// 0x303cc059
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x303ca961
// declared property setter: - (void)setWrappedView:(id)view;	// 0x303ca6dd
// declared property getter: - (id)wrappedView;	// 0x303c8ecd
@end

