/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRSimpleMenuItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_rightJustifiedText;	// 8 = 0x8
	int _titlePosition;	// 12 = 0xc
	int _menuItemType;	// 16 = 0x10
}
@property(readonly, assign) int menuItemType;	// G=0x32956ab5; converted property
@property(readonly, retain) NSString *rightJustifiedText;	// G=0x32956a95; converted property
@property(readonly, retain) NSString *title;	// G=0x32956a85; converted property
@property(readonly, assign) int titlePosition;	// G=0x32956aa5; converted property
+ (id)simpleMenuItemWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x32956ae9
+ (id)simpleMenuItemWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x32956b39
- (id)initWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x32956be5
- (id)initWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x32956ac5
- (void)dealloc;	// 0x32956b89
// converted property getter: - (int)menuItemType;	// 0x32956ab5
// converted property getter: - (id)rightJustifiedText;	// 0x32956a95
// converted property getter: - (id)title;	// 0x32956a85
// converted property getter: - (int)titlePosition;	// 0x32956aa5
@end

