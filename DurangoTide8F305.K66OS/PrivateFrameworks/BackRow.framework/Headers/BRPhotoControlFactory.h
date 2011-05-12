/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library

@class NSDateFormatter;
@protocol BRSelectionHandler;

@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
	BOOL _useLocalProviders;	// 13 = 0xd
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x329a3bc9; converted property
@property(retain) id selectionHandler;	// G=0x329a3505; S=0x329a3c61; converted property
+ (id)mainMenuFactory;	// 0x329a3d7d
+ (id)standardFactory;	// 0x329a3dbd
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x329a3cf5
- (id)_cyclerForData:(id)data;	// 0x329a3769
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329a3f1d
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x329a4685
- (id)_gridItemForData:(id)data;	// 0x329a38d5
- (id)_menuItemForData:(id)data;	// 0x329a3a79
- (id)_previewControlForData:(id)data;	// 0x329a369d
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329a3535
- (id)_subtitleForCollection:(id)collection;	// 0x329a4931
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329a3dfd
- (void)dealloc;	// 0x329a3c99
// converted property getter: - (id)formatter;	// 0x329a3bc9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x329a4455
// converted property getter: - (id)selectionHandler;	// 0x329a3505
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x329a3c61
- (void)setUseMinimumImages:(BOOL)images;	// 0x329a3515
- (BOOL)useMinumumImages;	// 0x329a3525
@end

