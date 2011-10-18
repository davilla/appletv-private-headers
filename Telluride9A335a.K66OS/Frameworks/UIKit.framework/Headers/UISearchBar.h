/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UITextField, UIButton, UIColor, UIImage, NSString, UILabel, NSArray;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView {
@private
	UITextField *_searchField;	// 48 = 0x30
	UILabel *_promptLabel;	// 52 = 0x34
	UIButton *_cancelButton;	// 56 = 0x38
	id<UISearchBarDelegate> _delegate;	// 60 = 0x3c
	id _controller;	// 64 = 0x40
	UIColor *_tintColor;	// 68 = 0x44
	UIImageView *_separator;	// 72 = 0x48
	NSString *_cancelButtonText;	// 76 = 0x4c
	NSArray *_scopes;	// 80 = 0x50
	int _selectedScope;	// 84 = 0x54
	UIView *_background;	// 88 = 0x58
	UIView *_scopeBar;	// 92 = 0x5c
	UIEdgeInsets _contentInset;	// 96 = 0x60
	id _appearanceStorage;	// 112 = 0x70
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 116 = 0x74
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x33bfa015; S=0x33a30361; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x33bfa035; S=0x339c95f1; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x33bfa445; S=0x33a4d02d; 
@property(assign, nonatomic) int barStyle;	// G=0x33ab927d; S=0x33a4c1f5; 
@property(retain) UIButton *cancelButton;	// G=0x33bfa005; S=0x33bf9fad; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x33bf9f85; S=0x339c9e75; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x33bfa17d; S=0x339cabfd; converted property
@property(retain) id controller;	// G=0x33b14f2d; S=0x339c9c89; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x33bfabc5; S=0x339c92ed; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x339e7669; S=0x33bf9f19; converted property
@property(assign, nonatomic) int keyboardType;	// G=0x33bfa095; S=0x33a30341; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x339c9e99; S=0x339c92fd; 
@property(assign) BOOL pretendsIsInBar;	// G=0x33bfabe5; S=0x33bfabf9; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x33bf9db9; S=0x33bf9d41; 
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;	// G=0x33bfa729; S=0x33bfa6d5; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x33bfa1a1; S=0x33a297d5; 
@property(readonly, retain) UITextField *searchField;	// G=0x33abb1ed; converted property
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;	// G=0x33bfaa29; S=0x33bfa8d9; 
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x33bf9e7d; S=0x33bf9e35; 
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;	// G=0x33bfaac9; S=0x33bfaa7d; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x33bfa1d9; S=0x33a29799; 
@property(assign) int shortcutConversionType;	// G=0x33bfa0d5; S=0x33bfa0b5; converted property
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x33bf9ed9; S=0x33bf9e91; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x33addb49; S=0x33a17f8d; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x33bfa209; S=0x33a30381; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x33bf9e21; S=0x33bf9dd9; 
@property(assign, nonatomic) int spellCheckingType;	// G=0x33bfa075; S=0x33bfa055; 
@property(copy, nonatomic) NSString *text;	// G=0x33a4c5b9; S=0x33abc26d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33bfabd5; S=0x33bfa431; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x33ab9259; S=0x33bf9cdd; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x33bf9f99; S=0x339c9cbd; converted property
- (id)initWithCoder:(id)coder;	// 0x33bf90a5
- (id)initWithFrame:(CGRect)frame;	// 0x339c4ef5
- (float)_availableBoundsWidth;	// 0x339e7751
- (void)_bookmarkButtonPressed;	// 0x33bfaf41
- (void)_cancelButtonPressed;	// 0x33abc045
- (id)_currentSeparatorImage;	// 0x339c96d5
- (void)_destroyCancelButton;	// 0x33abc501
- (void)_hideShowAnimationDidFinish;	// 0x33bf9eed
- (id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x339c7ab5
- (BOOL)_isEnabled;	// 0x33bfb075
- (BOOL)_isInBar;	// 0x339c98fd
- (float)_landscapeScopeBarWidth;	// 0x33bfa131
- (float)_landscapeSearchFieldWidth;	// 0x33bfa0f5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33bf9779
- (void)_resultsListButtonPressed;	// 0x33bfaf89
- (id)_scopeBar;	// 0x33adc491
- (void)_scopeChanged:(id)changed;	// 0x33bfa221
- (void)_searchFieldBeginEditing;	// 0x33ab8d95
- (void)_searchFieldEditingChanged;	// 0x33abb045
- (void)_searchFieldEndEditing;	// 0x33abc39d
- (float)_searchFieldHeight;	// 0x339e76f9
- (void)_searchFieldReturnPressed;	// 0x33add92d
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x339c9c99
- (void)_setCancelButtonText:(id)text;	// 0x33bfaee9
- (void)_setEnabled:(BOOL)enabled;	// 0x33bfb08d
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x33bfb0a1
- (void)_setScopeBarHidden:(BOOL)hidden;	// 0x33bfa1e9
- (void)_setShowsCancelButton:(BOOL)button;	// 0x33ab9451
- (void)_setShowsSeparator:(BOOL)separator;	// 0x339c9611
- (void)_setTintColor:(id)color forceUpdate:(BOOL)update;	// 0x33bfa2b9
- (void)_setUpScopeBar;	// 0x33a2996d
- (void)_setupCancelButton;	// 0x33bfaf2d
- (void)_setupCancelButtonWithAppearance:(id)appearance;	// 0x33ab8e4d
- (void)_setupPromptLabel;	// 0x33bfac1d
- (void)_setupSearchField;	// 0x339c4ff5
- (BOOL)_shouldCombineLandscapeBars;	// 0x339e7529
- (void)_updateMagnifyingGlassView;	// 0x339c7a1d
- (void)_updateOpacity;	// 0x339e7685
- (void)_updateRightView;	// 0x339c7bcd
- (void)_updateSearchFieldArt;	// 0x339c8b01
// declared property getter: - (int)autocapitalizationType;	// 0x33bfa015
// declared property getter: - (int)autocorrectionType;	// 0x33bfa035
// declared property getter: - (id)backgroundImage;	// 0x33bfa445
// declared property getter: - (int)barStyle;	// 0x33ab927d
- (BOOL)becomeFirstResponder;	// 0x33bfb02d
- (BOOL)canBecomeFirstResponder;	// 0x33bfb009
- (BOOL)canResignFirstResponder;	// 0x33bfb051
// converted property getter: - (id)cancelButton;	// 0x33bfa005
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x33bf9f85
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x33bfa17d
// converted property getter: - (id)controller;	// 0x33b14f2d
- (void)dealloc;	// 0x33ae2e11
// declared property getter: - (id)delegate;	// 0x33bfabc5
// converted property getter: - (BOOL)drawsBackground;	// 0x339e7669
- (void)encodeWithCoder:(id)coder;	// 0x33bf9879
- (id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x33bfa689
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c06615
- (BOOL)isFirstResponder;	// 0x339a91b1
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x33bf9e7d
// declared property getter: - (BOOL)isTranslucent;	// 0x33ab9259
// declared property getter: - (int)keyboardType;	// 0x33bfa095
- (void)layoutSubviews;	// 0x339e6b59
- (void)movedToSuperview:(id)superview;	// 0x339ca999
// declared property getter: - (id)placeholder;	// 0x339c9e99
- (UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;	// 0x33bfab6d
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x33bfabe5
// declared property getter: - (id)prompt;	// 0x33bf9db9
- (void)reloadInputViews;	// 0x33bfafe9
- (BOOL)resignFirstResponder;	// 0x33a1bbe1
// declared property getter: - (id)scopeBarBackgroundImage;	// 0x33bfa729
- (id)scopeBarButtonBackgroundImageForState:(unsigned)state;	// 0x33bfa7a5
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x33bfa831
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;	// 0x33bfa8b9
// declared property getter: - (id)scopeButtonTitles;	// 0x33bfa1a1
// converted property getter: - (id)searchField;	// 0x33abb1ed
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x33bfa52d
// declared property getter: - (UIOffset)searchFieldBackgroundPositionAdjustment;	// 0x33bfaa29
// declared property getter: - (UIOffset)searchTextPositionAdjustment;	// 0x33bfaac9
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x33bfa1d9
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x33a30361
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x339c95f1
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x33a4d02d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x33a4c1f5
// converted property setter: - (void)setCancelButton:(id)button;	// 0x33bf9fad
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x339c9e75
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x339cabfd
// converted property setter: - (void)setController:(id)controller;	// 0x339c9c89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339c92ed
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x33bf9f19
- (void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x33bfa579
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x33a30341
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x339c92fd
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;	// 0x33bfab1d
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x33bfabf9
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x33bf9d41
// declared property setter: - (void)setScopeBarBackgroundImage:(id)image;	// 0x33bfa6d5
- (void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;	// 0x33bfa749
- (void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x33bfa7c5
- (void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33bfa861
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x33a297d5
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x33bfa465
// declared property setter: - (void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;	// 0x33bfa8d9
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x33bf9e35
// declared property setter: - (void)setSearchTextPositionAdjustment:(UIOffset)adjustment;	// 0x33bfaa7d
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x33a29799
// converted property setter: - (void)setShortcutConversionType:(int)type;	// 0x33bfa0b5
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x33bf9e91
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x33a17f8d
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x33a17fa1
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x33a30381
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x33bf9dd9
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x33bfa055
// declared property setter: - (void)setText:(id)text;	// 0x33abc26d
// declared property setter: - (void)setTintColor:(id)color;	// 0x33bfa431
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x33bf9cdd
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x339c9cbd
// converted property getter: - (int)shortcutConversionType;	// 0x33bfa0d5
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x33bf9ed9
// declared property getter: - (BOOL)showsCancelButton;	// 0x33addb49
// declared property getter: - (BOOL)showsScopeBar;	// 0x33bfa209
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x33bf9e21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x339c9751
// declared property getter: - (int)spellCheckingType;	// 0x33bfa075
// declared property getter: - (id)text;	// 0x33a4c5b9
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x33aba57d
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x33ab8895
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x33abc351
// declared property getter: - (id)tintColor;	// 0x33bfabd5
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x33bf9f99
- (void)willMoveToSuperview:(id)superview;	// 0x339ca8b9
@end

