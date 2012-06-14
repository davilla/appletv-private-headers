/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRMenuItem;

@interface BRMenuItemMediator : NSObject {
@private
	BRMenuItem *_menuItem;	// 4 = 0x4
	SEL _mediaParadeSelector;	// 8 = 0x8
	SEL _menuSelector;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(assign) SEL mediaPreviewSelector;	// G=0x366eda91; S=0x366eda81; converted property
@property(assign) SEL menuActionSelector;	// G=0x366edab1; S=0x366edaa1; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x366eda71; converted property
@property(readonly, retain) id object;	// G=0x366edb0d; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x366ed971
- (id)initWithMenuItem:(id)menuItem;	// 0x366ed9bd
- (void)dealloc;	// 0x366eda11
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x366eda91
// converted property getter: - (SEL)menuActionSelector;	// 0x366edab1
// converted property getter: - (id)menuItem;	// 0x366eda71
// converted property getter: - (id)object;	// 0x366edb0d
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x366eda81
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x366edaa1
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x366edac1
@end
