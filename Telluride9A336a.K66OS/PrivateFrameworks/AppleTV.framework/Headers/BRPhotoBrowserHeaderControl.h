/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSString, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
@private
	BRTextControl *_titleControl;	// 48 = 0x30
	BRTextControl *_rightJustifiedTextControl;	// 52 = 0x34
	BRTextControl *_subtitleControl;	// 56 = 0x38
	BRImageControl *_icon;	// 60 = 0x3c
	BRDividerControl *_divider;	// 64 = 0x40
	NSString *_title;	// 68 = 0x44
	long _count;	// 72 = 0x48
	BOOL _displaysCount;	// 76 = 0x4c
	float _iconVerticalOffset;	// 80 = 0x50
}
@property(assign) long count;	// G=0x33af618d; S=0x33af613d; converted property
@property(assign) BOOL displaysCount;	// G=0x33af61dd; S=0x33af619d; converted property
@property(assign) float dividerBrightness;	// G=0x33af632d; S=0x33af630d; converted property
@property(retain) BRImageControl *icon;	// G=0x33af62bd; S=0x33af6281; converted property
@property(assign) float iconVerticalOffset;	// G=0x33af62fd; S=0x33af62dd; converted property
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x33af6105; S=0x33af60a9; 
@property(retain) id subtitle;	// G=0x33af6249; S=0x33af61ed; converted property
@property(retain) NSString *title;	// G=0x33af6099; S=0x33af5edd; converted property
- (id)init;	// 0x33af5cd1
- (id)accessibilityLabel;	// 0x33af6785
// converted property getter: - (long)count;	// 0x33af618d
- (void)dealloc;	// 0x33af5e41
// converted property getter: - (BOOL)displaysCount;	// 0x33af61dd
// converted property getter: - (float)dividerBrightness;	// 0x33af632d
// converted property getter: - (id)icon;	// 0x33af62bd
// converted property getter: - (float)iconVerticalOffset;	// 0x33af62fd
- (void)layoutSubcontrols;	// 0x33af6405
- (id)photoBrowserHeader;	// 0x33af5c89
// declared property getter: - (id)rightJustifiedText;	// 0x33af6105
// converted property setter: - (void)setCount:(long)count;	// 0x33af613d
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x33af619d
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x33af630d
// converted property setter: - (void)setIcon:(id)icon;	// 0x33af6281
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x33af62dd
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x33af60a9
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33af61ed
// converted property setter: - (void)setTitle:(id)title;	// 0x33af5edd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33af634d
// converted property getter: - (id)subtitle;	// 0x33af6249
// converted property getter: - (id)title;	// 0x33af6099
@end

