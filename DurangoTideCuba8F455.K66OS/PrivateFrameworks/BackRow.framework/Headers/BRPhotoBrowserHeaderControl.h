/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDividerControl, NSString, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
@private
	BRTextControl *_titleControl;	// 44 = 0x2c
	BRTextControl *_subtitleControl;	// 48 = 0x30
	BRImageControl *_icon;	// 52 = 0x34
	BRDividerControl *_divider;	// 56 = 0x38
	NSString *_title;	// 60 = 0x3c
	long _count;	// 64 = 0x40
	BOOL _displaysCount;	// 68 = 0x44
	float _iconVerticalOffset;	// 72 = 0x48
}
@property(assign) long count;	// G=0x32fe7ac1; S=0x32fe7c0d; converted property
@property(assign) BOOL displaysCount;	// G=0x32fe7ad1; S=0x32fe7bd9; converted property
@property(assign) float dividerBrightness;	// G=0x32fe7af1; S=0x32fe7b11; converted property
@property(retain) BRImageControl *icon;	// G=0x32fe7b55; S=0x32fe7b75; converted property
@property(assign) float iconVerticalOffset;	// G=0x32fe7ae1; S=0x32fe7b31; converted property
@property(retain) id subtitle;	// G=0x32fe7ba9; S=0x32fe7fd9; converted property
@property(retain) NSString *title;	// G=0x32fe7ab1; S=0x32fe7e4d; converted property
- (id)init;	// 0x32fe7d11
// converted property getter: - (long)count;	// 0x32fe7ac1
- (void)dealloc;	// 0x32fe7c91
// converted property getter: - (BOOL)displaysCount;	// 0x32fe7ad1
// converted property getter: - (float)dividerBrightness;	// 0x32fe7af1
// converted property getter: - (id)icon;	// 0x32fe7b55
// converted property getter: - (float)iconVerticalOffset;	// 0x32fe7ae1
- (void)layoutSubcontrols;	// 0x32fe80f1
- (id)photoBrowserHeader;	// 0x32fe7c51
// converted property setter: - (void)setCount:(long)count;	// 0x32fe7c0d
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x32fe7bd9
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x32fe7b11
// converted property setter: - (void)setIcon:(id)icon;	// 0x32fe7b75
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x32fe7b31
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32fe7fd9
// converted property setter: - (void)setTitle:(id)title;	// 0x32fe7e4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fe8031
// converted property getter: - (id)subtitle;	// 0x32fe7ba9
// converted property getter: - (id)title;	// 0x32fe7ab1
@end

