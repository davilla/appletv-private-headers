/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRListView, BRScrollControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRMenuView : BRControl {
	float _verticalSpacer;	// 80 = 0x50
	BRImageControl *_titleImage;	// 84 = 0x54
	float _titleImageVerticalOffset;	// 88 = 0x58
	BRTextControl *_title;	// 92 = 0x5c
	BRTextControl *_menuDescription;	// 96 = 0x60
	BRListView *_list;	// 100 = 0x64
	BRScrollControl *_scroller;	// 104 = 0x68
	int _listAlignment;	// 108 = 0x6c
	XXStruct_qlg9jA _listWidth;	// 112 = 0x70
	XXStruct_qlg9jA _listLeadingGap;	// 116 = 0x74
	XXStruct_qlg9jA _listTrailingGap;	// 120 = 0x78
}
@property(readonly, retain) BRListView *list;	// G=0x30d065; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x30d899; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x30d0a5; S=0x30d075; converted property
@property(assign, nonatomic) XXStruct_qlg9jA listLeadingGap;	// G=0x30d8d5; S=0x30d8f1; @synthesize=_listLeadingGap
@property(assign, nonatomic) XXStruct_qlg9jA listTrailingGap;	// G=0x30d901; S=0x30d91d; @synthesize=_listTrailingGap
@property(assign, nonatomic) XXStruct_qlg9jA listWidth;	// G=0x30d8a9; S=0x30d8c5; @synthesize=_listWidth
@property(retain) BRTextControl *menuDescription;	// G=0x30d02d; S=0x30d019; converted property
@property(retain) BRTextControl *title;	// G=0x30ce95; S=0x30ce81; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x30c981
- (id)init;	// 0x30c9bd
- (id)initWithListAlignment:(int)listAlignment;	// 0x30c9d1
- (id)accessibilityLabel;	// 0x30d879
- (id)accessibilitySecondaryLabel;	// 0x30d889
- (void)dealloc;	// 0x30cc41
- (void)layoutSubcontrols;	// 0x30d0d9
// converted property getter: - (id)list;	// 0x30d065
// declared property getter: - (int)listAlignment;	// 0x30d899
// converted property getter: - (CGRect)listFrame;	// 0x30d0a5
// declared property getter: - (XXStruct_qlg9jA)listLeadingGap;	// 0x30d8d5
// declared property getter: - (XXStruct_qlg9jA)listTrailingGap;	// 0x30d901
// declared property getter: - (XXStruct_qlg9jA)listWidth;	// 0x30d8a9
// converted property getter: - (id)menuDescription;	// 0x30d02d
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x30d075
// declared property setter: - (void)setListLeadingGap:(XXStruct_qlg9jA)gap;	// 0x30d8f1
// declared property setter: - (void)setListTrailingGap:(XXStruct_qlg9jA)gap;	// 0x30d91d
// declared property setter: - (void)setListWidth:(XXStruct_qlg9jA)width;	// 0x30d8c5
// converted property setter: - (void)setMenuDescription:(id)description;	// 0x30d019
- (void)setMenuDescription:(id)description withAttributes:(id)attributes;	// 0x30cecd
// converted property setter: - (void)setTitle:(id)title;	// 0x30ce81
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x30cda5
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x30ccf1
- (void)setVerticalSpacer:(float)spacer;	// 0x30cce1
// converted property getter: - (id)title;	// 0x30ce95
@end

