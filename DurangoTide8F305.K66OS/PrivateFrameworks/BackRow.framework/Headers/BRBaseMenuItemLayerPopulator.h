/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library


@interface BRBaseMenuItemLayerPopulator : NSObject {
@private
	id _object;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	unsigned _matchOrder;	// 12 = 0xc
}
@property(readonly, assign) unsigned matchOrder;	// G=0x3291822d; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x32992361
- (id)init;	// 0x32918181
- (void)dealloc;	// 0x32992521
- (id)dividerLayer;	// 0x329923bd
- (id)lowerCenteredString;	// 0x32992379
- (id)lowerLeftString;	// 0x32992375
- (id)lowerRightImage;	// 0x32992385
// converted property getter: - (unsigned)matchOrder;	// 0x3291822d
- (id)menuItem;	// 0x32992421
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x329924cd
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x32992365
- (id)rightJustifiedText;	// 0x3299236d
- (void)setObject:(id)object;	// 0x32992441
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x32992389
- (id)subtitle;	// 0x32992371
- (id)thumbnailImage;	// 0x3299237d
- (id)title;	// 0x32992369
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x32992479
- (id)upperRightImage;	// 0x32992381
@end

