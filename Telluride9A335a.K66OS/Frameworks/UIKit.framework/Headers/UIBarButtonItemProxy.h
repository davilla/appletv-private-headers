/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIBarButtonItemProxy : NSObject {
@private
	UIBarButtonItem *_item;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
}
@property(readonly, retain) UIBarButtonItem *item;	// G=0x33b75621; converted property
@property(readonly, retain) UIView *view;	// G=0x33b75631; converted property
- (id)initWithItem:(id)item inToolbar:(id)toolbar;	// 0x33b7555d
- (void)dealloc;	// 0x33b755d5
// converted property getter: - (id)item;	// 0x33b75621
// converted property getter: - (id)view;	// 0x33b75631
@end

