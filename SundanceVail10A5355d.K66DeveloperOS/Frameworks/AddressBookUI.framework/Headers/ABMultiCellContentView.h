/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABResponderDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABPersonCellContentView.h"

@class UITableViewCell, ABAbstractPropertyGroup;
@protocol ABMultiCellContentViewUpdateDelegate;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {
	UITableViewCell *_cell;	// 132 = 0x84
	BOOL _usesCustomPropertyCell;	// 136 = 0x88
	UIView *_labelDivider;	// 140 = 0x8c
	BOOL _isImportant;	// 144 = 0x90
	BOOL _isEmphasized;	// 145 = 0x91
	BOOL _isHighlighted;	// 146 = 0x92
	BOOL _allowsEditing;	// 147 = 0x93
	BOOL _isEditing;	// 148 = 0x94
	BOOL _shouldIgnoreEndEditing;	// 149 = 0x95
	int _property;	// 152 = 0x98
	ABAbstractPropertyGroup *_pg;	// 156 = 0x9c
	id _pgInfo;	// 160 = 0xa0
	BOOL _needsReload;	// 164 = 0xa4
	UIView *_touchedView;	// 168 = 0xa8
	id<ABMultiCellContentViewUpdateDelegate> _updateDelegate;	// 172 = 0xac
	int _abCellStyle;	// 176 = 0xb0
}
@property(assign, nonatomic) int abCellStyle;	// G=0x34f7b7a1; S=0x34f79969; @synthesize=_abCellStyle
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x34fd7d35; S=0x34f79a85; @synthesize=_allowsEditing
@property(assign, nonatomic) UITableViewCell *cell;	// G=0x34f9afa9; S=0x34f84e41; @synthesize=_cell
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x34f7ae51; S=0x34f799cd; @synthesize=_isEditing
@property(assign, nonatomic, getter=isEmphasized) BOOL emphasized;	// G=0x34fd7d55; S=0x34f84e95; @synthesize=_isEmphasized
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x34f9a93d; S=0x34f900e9; converted property
@property(assign, nonatomic, getter=isImportant) BOOL important;	// G=0x34fd7d45; S=0x34f84f21; @synthesize=_isImportant
@property(readonly, assign, nonatomic) ABAbstractPropertyGroup *propertyGroup;	// G=0x34f8faad; @synthesize=_pg
@property(retain, nonatomic) id propertyGroupInfo;	// G=0x34f8fabd; S=0x34f797b5; @synthesize=_pgInfo
@property(assign, nonatomic) BOOL shouldIgnoreEndEditing;	// G=0x34fd7d65; S=0x34f9dd0d; @synthesize=_shouldIgnoreEndEditing
@property(assign, nonatomic) id<ABMultiCellContentViewUpdateDelegate> updateDelegate;	// G=0x34f9ee51; S=0x34f79a95; @synthesize=_updateDelegate
@property(assign, nonatomic) BOOL usesCustomPropertyCell;	// G=0x34f85a69; S=0x34f84e51; @synthesize=_usesCustomPropertyCell
+ (Class)classForProperty:(int)property;	// 0x34f79331
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34f81e6d
+ (id)reuseIdentifierForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x34f84a69
+ (void)setupTextField:(id)field withStyleProvider:(id)styleProvider;	// 0x34f7b609
+ (CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34f81d4d
- (id)init;	// 0x34fd7a45
- (id)initCommonWithFrame:(CGRect)frame property:(int)property;	// 0x34f79489
- (id)initWithFrame:(CGRect)frame;	// 0x34fd7a75
- (id)initWithFrame:(CGRect)frame property:(int)property;	// 0x34f792b1
- (BOOL)ABTabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34fd7ce5
// declared property getter: - (int)abCellStyle;	// 0x34f7b7a1
// declared property getter: - (BOOL)allowsEditing;	// 0x34fd7d35
- (CGRect)backgroundRectForView:(id)view;	// 0x34fd7b49
- (id)badgeIconWhenEditing:(BOOL)editing;	// 0x34fd7aa1
- (BOOL)becomeFirstResponder;	// 0x34f9b631
- (BOOL)canBecomeFirstResponder;	// 0x34f9b609
- (BOOL)canBeginEditingAnytime;	// 0x34fd7c25
- (BOOL)canHandleProperty:(int)property;	// 0x34f79771
- (BOOL)canResignFirstResponder;	// 0x34fd7c2d
// declared property getter: - (id)cell;	// 0x34f9afa9
- (void)clearTextFieldDelegates:(id)delegates;	// 0x34f861d1
- (void)dealloc;	// 0x34f7958d
- (id)displayHighlightedTextColor;	// 0x34f7b7d1
- (id)displayTextColor;	// 0x34f86099
- (void)entryField:(id)field valueDidChange:(id)value forKey:(id)key;	// 0x34f9a229
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)responder;	// 0x34fd7d2d
- (void)entryFieldDidBeginEditing:(id)entryField;	// 0x34f99cd9
- (void)entryFieldDidEndEditing:(id)entryField;	// 0x34fd7bc5
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)responder;	// 0x34fd7d31
- (BOOL)entryFieldShouldBeginEditing:(id)entryField;	// 0x34f99c31
- (BOOL)entryFieldShouldEndEditing:(id)entryField;	// 0x34f9a695
- (BOOL)entryFieldShouldReturn:(id)entryField;	// 0x34fd7c05
- (CGRect)focusRectForView:(id)view;	// 0x34f99d0d
- (CGRect)frameForLabelDivider;	// 0x34f85f45
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x34f99b15
// declared property getter: - (BOOL)isEditing;	// 0x34f7ae51
// declared property getter: - (BOOL)isEmphasized;	// 0x34fd7d55
// converted property getter: - (BOOL)isHighlighted;	// 0x34f9a93d
// declared property getter: - (BOOL)isImportant;	// 0x34fd7d45
- (BOOL)isValidValue:(id)value;	// 0x34fd7bc1
- (id)labelTextColorWhenEditing:(BOOL)editing;	// 0x34f85df9
- (void)layoutLabel;	// 0x34f86c5d
- (void)layoutSubviews;	// 0x34f86b9d
- (id)newTextFieldWithFrame:(CGRect)frame tag:(int)tag keyboardSettings:(id)settings delegate:(id)delegate;	// 0x34f7b391
- (id)pickerView;	// 0x34f7c585
// declared property getter: - (id)propertyGroup;	// 0x34f8faad
// declared property getter: - (id)propertyGroupInfo;	// 0x34f8fabd
- (CGRect)rectForView:(id)view;	// 0x34f99f05
- (void)reload;	// 0x34f7adc5
- (void)reloadFromModel;	// 0x34f7c929
- (void)reloadIfNeeded:(BOOL)needed reloadFromModel:(BOOL)model;	// 0x34f84f4d
- (void)reloadLabelFromModel;	// 0x34f85131
- (BOOL)resignFirstResponder;	// 0x34f8fb25
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x34f79969
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x34f79a85
// declared property setter: - (void)setCell:(id)cell;	// 0x34f84e41
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x34f799cd
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34f79a39
// declared property setter: - (void)setEmphasized:(BOOL)emphasized;	// 0x34f84e95
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x34f900e9
// declared property setter: - (void)setImportant:(BOOL)important;	// 0x34f84f21
- (void)setKeyboardSettings:(id)settings onTextField:(id)field;	// 0x34f7b8ad
- (void)setLabelText:(id)text;	// 0x34f85875
- (void)setPropertyGroup:(id)group andInfo:(id)info;	// 0x34f7963d
// declared property setter: - (void)setPropertyGroupInfo:(id)info;	// 0x34f797b5
// declared property setter: - (void)setShouldIgnoreEndEditing:(BOOL)ignoreEndEditing;	// 0x34f9dd0d
// declared property setter: - (void)setUpdateDelegate:(id)delegate;	// 0x34f79a95
// declared property setter: - (void)setUsesCustomPropertyCell:(BOOL)cell;	// 0x34f84e51
// declared property getter: - (BOOL)shouldIgnoreEndEditing;	// 0x34fd7d65
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;	// 0x34f9a091
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34f8dae5
- (CGSize)sizeThatFits:(CGSize)fits forPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34f8db6d
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34fd7c21
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x34f997c5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34fd7c55
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x34f9a0c1
// declared property getter: - (id)updateDelegate;	// 0x34f9ee51
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x34f7c425
// declared property getter: - (BOOL)usesCustomPropertyCell;	// 0x34f85a69
- (id)viewForFirstResponder;	// 0x34fd7c29
- (BOOL)wantsLabelDivider;	// 0x34f88929
@end
