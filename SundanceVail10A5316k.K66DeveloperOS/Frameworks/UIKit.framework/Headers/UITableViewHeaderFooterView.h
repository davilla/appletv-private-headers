/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITableViewSubviewReusing.h"

@class UILabel, UIColor, UIImage, UITableView, NSString;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
@private
	BOOL _sectionHeader;	// 84 = 0x54
	CGRect _frame;	// 88 = 0x58
	int _textAlignment;	// 104 = 0x68
	UITableView *_tableView;	// 108 = 0x6c
	float _maxTitleWidth;	// 112 = 0x70
	BOOL _labelBackgroundColorNeedsUpdate;	// 116 = 0x74
	BOOL _detailLabelBackgroundColorNeedsUpdate;	// 117 = 0x75
	BOOL _floating;	// 118 = 0x76
	NSString *_reuseIdentifier;	// 120 = 0x78
	UIView *_backgroundView;	// 124 = 0x7c
	UILabel *_label;	// 128 = 0x80
	UILabel *_detailLabel;	// 132 = 0x84
	UIView *_contentView;	// 136 = 0x88
	UIColor *_tintColor;	// 140 = 0x8c
	int _tableViewStyle;	// 144 = 0x90
	UIImage *_backgroundImage;	// 148 = 0x94
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x304ac731; S=0x304ac741; @synthesize=_backgroundImage
@property(retain, nonatomic) UIView *backgroundView;	// G=0x304abe45; S=0x304abf35; 
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x304ac6bd; @synthesize=_contentView
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x304aadf1; 
@property(assign, nonatomic) BOOL floating;	// G=0x304ac12d; S=0x304ac13d; 
@property(assign) CGRect frame;	// G=0x304a9e85; S=0x304a9dc1; converted property
@property(assign, nonatomic) float maxTitleWidth;	// G=0x304ac711; S=0x304ac721; @synthesize=_maxTitleWidth
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x304ac6cd; @synthesize=_reuseIdentifier
@property(assign, nonatomic) BOOL sectionHeader;	// G=0x304ac6e1; S=0x304a9f15; @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView *tableView;	// G=0x304ac6f1; S=0x304ac701; @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// G=0x304ac099; S=0x304ac0a9; 
@property(copy, nonatomic) NSString *text;	// G=0x304aaf25; S=0x304aaf51; 
@property(assign, nonatomic) int textAlignment;	// G=0x304aa051; S=0x304aa01d; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x304aaddd; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x304ac655; S=0x304ac665; 
+ (id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;	// 0x304a9d5d
- (id)initWithFrame:(CGRect)frame;	// 0x304a9b89
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x304a9b35
- (CGRect)_detailLabelFrame;	// 0x304ab689
- (CGSize)_detailTextSizeForWidth:(float)width;	// 0x304aa1a5
- (void)_invalidateDetailLabelBackgroundColor;	// 0x304aa2fd
- (void)_invalidateLabelBackgroundColor;	// 0x304aa2c9
- (id)_label:(BOOL)label;	// 0x304aaca1
- (CGRect)_labelFrame;	// 0x304aafd1
- (id)_scriptingInfo;	// 0x304ac5c5
- (void)_setupLabelAppearance;	// 0x304aa879
- (CGSize)_textSizeForWidth:(float)width;	// 0x304aa061
- (void)_updateBackgroundImage;	// 0x304abc69
- (void)_updateDetailLabelBackgroundColor;	// 0x304aa5d5
- (void)_updateDetailLabelBackgroundColorIfNeeded;	// 0x304aa841
- (void)_updateLabelBackgroundColor;	// 0x304aa331
- (void)_updateLabelBackgroundColorIfNeeeded;	// 0x304aa59d
- (void)_updateLayerContents;	// 0x304abff5
- (BOOL)_useDetailText;	// 0x304ab8a1
// declared property getter: - (id)backgroundImage;	// 0x304ac731
// declared property getter: - (id)backgroundView;	// 0x304abe45
// declared property getter: - (id)contentView;	// 0x304ac6bd
- (void)dealloc;	// 0x304a9c5d
// declared property getter: - (id)detailTextLabel;	// 0x304aadf1
// declared property getter: - (BOOL)floating;	// 0x304ac12d
// converted property getter: - (CGRect)frame;	// 0x304a9e85
- (void)layoutSubviews;	// 0x304ac281
// declared property getter: - (float)maxTitleWidth;	// 0x304ac711
- (void)prepareForReuse;	// 0x304a9d11
// declared property getter: - (id)reuseIdentifier;	// 0x304ac6cd
// declared property getter: - (BOOL)sectionHeader;	// 0x304ac6e1
- (void)setBackgroundColor:(id)color;	// 0x304ac26d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x304ac741
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x304abf35
// declared property setter: - (void)setFloating:(BOOL)floating;	// 0x304ac13d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x304a9dc1
// declared property setter: - (void)setMaxTitleWidth:(float)width;	// 0x304ac721
- (void)setOpaque:(BOOL)opaque;	// 0x304ac175
// declared property setter: - (void)setSectionHeader:(BOOL)header;	// 0x304a9f15
// declared property setter: - (void)setTableView:(id)view;	// 0x304ac701
// declared property setter: - (void)setTableViewStyle:(int)style;	// 0x304ac0a9
// declared property setter: - (void)setText:(id)text;	// 0x304aaf51
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x304aa01d
// declared property setter: - (void)setTintColor:(id)color;	// 0x304ac665
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x304ab909
// declared property getter: - (id)tableView;	// 0x304ac6f1
// declared property getter: - (int)tableViewStyle;	// 0x304ac099
// declared property getter: - (id)text;	// 0x304aaf25
// declared property getter: - (int)textAlignment;	// 0x304aa051
// declared property getter: - (id)textLabel;	// 0x304aaddd
// declared property getter: - (id)tintColor;	// 0x304ac655
@end
