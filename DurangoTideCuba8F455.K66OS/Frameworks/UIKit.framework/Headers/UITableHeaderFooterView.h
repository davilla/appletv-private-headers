/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, UITableHeaderFooterViewLabel, UITableView, NSString;

@interface UITableHeaderFooterView : UIView {
	UITableHeaderFooterViewLabel *_label;	// 44 = 0x2c
	UIImage *_backgroundImage;	// 48 = 0x30
	int _tableViewStyle;	// 52 = 0x34
	BOOL _sectionHeader;	// 56 = 0x38
	CGRect _frame;	// 60 = 0x3c
	int _textAlignment;	// 76 = 0x4c
	UITableView *_tableView;	// 80 = 0x50
	float _maxTitleWidth;	// 84 = 0x54
	BOOL _labelBackgroundColorNeedsUpdate;	// 88 = 0x58
}
@property(assign) CGRect frame;	// G=0x30175f9d; S=0x300f22ed; converted property
@property(assign, nonatomic) float maxTitleWidth;	// G=0x30279ee1; S=0x300f2899; @synthesize=_maxTitleWidth
@property(assign, nonatomic) BOOL sectionHeader;	// G=0x300f277d; S=0x300f26f1; @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView *tableView;	// G=0x30279ef1; S=0x300f27f1; @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// S=0x300f2515; @dynamic
@property(retain, nonatomic) NSString *text;	// G=0x30279fdd; S=0x300f28a9; 
@property(assign, nonatomic) int textAlignment;	// G=0x30279ed1; S=0x300f2cb5; 
+ (id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;	// 0x300f278d
- (id)initWithFrame:(CGRect)frame;	// 0x300f225d
- (void)_invalidateLabelBackgroundColor;	// 0x300f26c1
- (id)_label:(BOOL)label;	// 0x300f2921
- (CGRect)_labelFrame;	// 0x300f40c9
- (id)_scriptingInfo;	// 0x30279f01
- (CGSize)_textSizeForWidth:(float)width;	// 0x300f45a9
- (void)_updateBackgroundImage;	// 0x300f260d
- (void)_updateLabelBackgroundColor;	// 0x300f4701
- (void)_updateLabelBackgroundColorIfNeeeded;	// 0x300f46d1
- (void)_updateLayerContents;	// 0x300f2581
- (void)dealloc;	// 0x3017589d
// converted property getter: - (CGRect)frame;	// 0x30175f9d
- (void)layoutSubviews;	// 0x300f23c9
// declared property getter: - (float)maxTitleWidth;	// 0x30279ee1
// declared property getter: - (BOOL)sectionHeader;	// 0x300f277d
- (void)setBackgroundColor:(id)color;	// 0x30279f75
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x300f22ed
// declared property setter: - (void)setMaxTitleWidth:(float)width;	// 0x300f2899
- (void)setOpaque:(BOOL)opaque;	// 0x300f2ce9
// declared property setter: - (void)setSectionHeader:(BOOL)header;	// 0x300f26f1
// declared property setter: - (void)setTableView:(id)view;	// 0x300f27f1
// declared property setter: - (void)setTableViewStyle:(int)style;	// 0x300f2515
// declared property setter: - (void)setText:(id)text;	// 0x300f28a9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x300f2cb5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301113a5
// declared property getter: - (id)tableView;	// 0x30279ef1
// declared property getter: - (id)text;	// 0x30279fdd
// declared property getter: - (int)textAlignment;	// 0x30279ed1
@end

