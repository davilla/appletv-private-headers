/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIControl, UIView, UIRemoveControl;

__attribute__((visibility("hidden")))
@interface _UITableViewCellOldEditingData : NSObject {
	UIRemoveControl *_removeControl;	// 4 = 0x4
	UIControl *_grabber;	// 8 = 0x8
	UIView *_separator;	// 12 = 0xc
}
@property(retain, nonatomic) UIControl *reorderControl;	// G=0x30486cf5; S=0x30486d05; @synthesize=_grabber
@property(retain, nonatomic) UIView *separatorView;	// G=0x30486d15; S=0x30486d25; @synthesize=_separator
- (BOOL)dataRequired;	// 0x30486c55
- (void)dealloc;	// 0x30486c91
// declared property getter: - (id)reorderControl;	// 0x30486cf5
// declared property getter: - (id)separatorView;	// 0x30486d15
// declared property setter: - (void)setReorderControl:(id)control;	// 0x30486d05
// declared property setter: - (void)setSeparatorView:(id)view;	// 0x30486d25
@end

