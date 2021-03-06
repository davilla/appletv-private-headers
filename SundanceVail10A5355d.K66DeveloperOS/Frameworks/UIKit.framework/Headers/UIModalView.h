/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextFieldDelegate.h"

@class UIWindow, UILabel, NSMutableArray, NSString, UIToolbar;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
	id<UIModalViewDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UILabel *_subtitleLabel;	// 92 = 0x5c
	UILabel *_bodyTextLabel;	// 96 = 0x60
	UILabel *_taglineTextLabel;	// 100 = 0x64
	float _startX;	// 104 = 0x68
	float _startY;	// 108 = 0x6c
	id _context;	// 112 = 0x70
	int _cancelButton;	// 116 = 0x74
	int _defaultButton;	// 120 = 0x78
	int _firstOtherButton;	// 124 = 0x7c
	UIToolbar *_toolbar;	// 128 = 0x80
	UIWindow *_originalWindow;	// 132 = 0x84
	UIWindow *_dimWindow;	// 136 = 0x88
	int _suspendTag;	// 140 = 0x8c
	int _dismissButtonIndex;	// 144 = 0x90
	float _bodyTextHeight;	// 148 = 0x94
	NSMutableArray *_buttons;	// 152 = 0x98
	NSMutableArray *_textFields;	// 156 = 0x9c
	UIView *_keyboard;	// 160 = 0xa0
	UIView *_table;	// 164 = 0xa4
	UIView *_dimView;	// 168 = 0xa8
	UIView *_sheetView;	// 172 = 0xac
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	} _modalViewFlags;	// 176 = 0xb0
}
@property(assign) int alertSheetStyle;	// G=0x33d21c99; S=0x33d21cad; converted property
@property(assign) BOOL blocksInteraction;	// G=0x33d21e79; S=0x33d21e51; converted property
@property(retain) id bodyText;	// G=0x33d1c9c5; S=0x33d1c821; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x33d1bf19; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x33d253b5; S=0x33d25399; 
@property(retain) id context;	// G=0x33d1d6f5; S=0x33d1d6b1; converted property
@property(retain) id defaultButton;	// G=0x33d1d1bd; S=0x33d1d17d; converted property
@property(assign) int defaultButtonIndex;	// G=0x33d25389; S=0x33d2536d; converted property
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;	// G=0x33d251c9; S=0x33d25075; 
@property(retain) id destructiveButton;	// G=0x33d1d2b5; S=0x33d1d275; converted property
@property(assign) BOOL dimsBackground;	// G=0x33d21e1d; S=0x33d21df5; converted property
@property(assign, nonatomic) BOOL groupsTextFields;	// G=0x33d1be29; S=0x33d1be41; 
@property(readonly, retain) UIView *keyboard;	// G=0x33d1d061; converted property
@property(copy, nonatomic) NSString *message;	// G=0x33d252a1; S=0x33d25291; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x33d2531d; 
@property(assign) int numberOfRows;	// G=0x33d21c85; S=0x33d21c6d; converted property
@property(assign) BOOL runsModal;	// G=0x33d21ea9; S=0x33d21e91; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x33d1e2ad; S=0x33d1e295; converted property
@property(retain) id subtitle;	// G=0x33d1c9a5; S=0x33d1c929; converted property
@property(assign) int suspendTag;	// G=0x33d21e41; S=0x33d21e31; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x33d1e0a9; S=0x33d1e08d; converted property
@property(copy, nonatomic) NSString *title;	// G=0x33d25269; S=0x33d251d9; 
@property(assign) int titleMaxLineCount;	// G=0x33d1ca95; S=0x33d1c9ed; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x33d2533d; 
+ (id)_popupAlertBackground;	// 0x33b36a21
+ (BOOL)atLeastOneAlertVisible;	// 0x33d21ebd
+ (CGSize)minimumSize;	// 0x33b369d1
+ (void)noteOrientationChangingTo:(int)to;	// 0x33d21f5d
+ (id)topMostAlert;	// 0x33d21f25
+ (id)visibleAlert;	// 0x33d21f41
- (id)initWithFrame:(CGRect)frame;	// 0x33d24b09
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x33d1bcc5
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x33d24be9
- (id)_addButtonWithTitle:(id)title;	// 0x33d1d631
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x33d1d2f1
- (id)_addButtonWithTitleText:(id)titleText;	// 0x33d1d671
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x33d21975
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x33d1cf85
- (void)_appSuspended:(id)suspended;	// 0x33d217ad
- (float)_bottomVerticalInset;	// 0x33d21575
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x33d1edb9
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x33d1ecc1
- (void)_buttonClicked:(id)clicked;	// 0x33d1d705
- (float)_buttonHeight;	// 0x33d220fd
- (BOOL)_canShowAlerts;	// 0x33d1f539
- (void)_cancelAnimated:(BOOL)animated;	// 0x33d1f74d
- (void)_cleanupAfterPopupAnimation;	// 0x33d1dcb1
- (void)_createBodyTextLabelIfNeeded;	// 0x33d1c1d9
- (void)_createSubtitleLabelIfNeeded;	// 0x33d1c029
- (void)_createTaglineTextLabelIfNeeded;	// 0x33d1c3bd
- (void)_createTitleLabelIfNeeded;	// 0x33d1bf29
- (int)_currentOrientation;	// 0x33d1be5d
- (id)_defaultButton;	// 0x33d1d239
- (id)_dimView;	// 0x33d207e5
- (BOOL)_dimsBackground;	// 0x33d1f521
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x33d1eba9
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x33d24a81
- (void)_hideAnimated:(BOOL)animated;	// 0x33d1f73d
- (id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x33d24d39
- (BOOL)_isAnimating;	// 0x33d1edc9
- (BOOL)_isSBAlert;	// 0x33d1d7dd
- (void)_keyboardWillHide:(id)_keyboard;	// 0x33d1da75
- (void)_keyboardWillShow:(id)_keyboard;	// 0x33d1d7e1
- (void)_layoutIfNeeded;	// 0x33d1fd89
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x33d1fd19
- (BOOL)_manualKeyboardIsVisible;	// 0x33d1e1e1
- (float)_maxHeight;	// 0x33d21fc1
- (BOOL)_needsKeyboard;	// 0x33d1e1b5
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x33d1f119
- (void)_performPopup:(BOOL)popup;	// 0x33d1e2c1
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x33d1eddd
- (void)_prepareForDisplay;	// 0x33d24971
- (void)_prepareToBeReplaced;	// 0x33d24a69
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x33d200c5
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x33d208e1
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x33d1f55d
- (void)_repopup;	// 0x33d1f4d5
- (void)_repopupNoAnimation;	// 0x33d1f471
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x33d1fa25
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x33d1be9d
- (void)_setDefaultButton:(id)button;	// 0x33d1d1f9
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x33d253c5
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x33d1cd95
- (void)_setupInitialFrame;	// 0x33d1f7ad
- (void)_setupTitleStyle;	// 0x33d1c5a9
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x33d1e1e5
- (void)_slideSheetOut:(BOOL)anOut;	// 0x33d211f1
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x33d1f6d5
- (float)_titleHorizontalInset;	// 0x33d21549
- (float)_titleVerticalBottomInset;	// 0x33d2151d
- (float)_titleVerticalTopInset;	// 0x33d214f1
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x33d2227d
- (int)addButtonWithTitle:(id)title;	// 0x33d252b1
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x33d1d651
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x33d1d60d
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x33d1cb6d
// converted property getter: - (int)alertSheetStyle;	// 0x33d21c99
- (CGSize)backgroundSize;	// 0x33d214b9
// converted property getter: - (BOOL)blocksInteraction;	// 0x33d21e79
- (int)bodyMaxLineCount;	// 0x33d1cb59
// converted property getter: - (id)bodyText;	// 0x33d1c9c5
- (id)bodyTextView;	// 0x33d24951
- (int)buttonCount;	// 0x33d1d691
- (id)buttonTitleAtIndex:(int)index;	// 0x33d252e5
// converted property getter: - (id)buttons;	// 0x33d1bf19
- (BOOL)canBecomeFirstResponder;	// 0x33d24b05
// declared property getter: - (int)cancelButtonIndex;	// 0x33d253b5
// converted property getter: - (id)context;	// 0x33d1d6f5
- (void)dealloc;	// 0x33d24d61
// converted property getter: - (id)defaultButton;	// 0x33d1d1bd
// converted property getter: - (int)defaultButtonIndex;	// 0x33d25389
// declared property getter: - (id)delegate;	// 0x33d251c9
// converted property getter: - (id)destructiveButton;	// 0x33d1d2b5
// converted property getter: - (BOOL)dimsBackground;	// 0x33d21e1d
- (void)dismiss;	// 0x33d21471
- (void)dismissAnimated:(BOOL)animated;	// 0x33d21485
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x33d253f1
- (void)drawRect:(CGRect)rect;	// 0x33d215a1
- (int)firstOtherButtonIndex;	// 0x33d253e1
// declared property getter: - (BOOL)groupsTextFields;	// 0x33d1be29
- (BOOL)isBodyTextTruncated;	// 0x33d1fd01
// declared property getter: - (BOOL)isVisible;	// 0x33d2533d
// converted property getter: - (id)keyboard;	// 0x33d1d061
- (void)layout;	// 0x33d22359
- (void)layoutAnimated:(BOOL)animated;	// 0x33d1fcb9
- (void)layoutAnimated:(BOOL)animated withDuration:(double)duration;	// 0x33d1fa35
// declared property getter: - (id)message;	// 0x33d252a1
// declared property getter: - (int)numberOfButtons;	// 0x33d2531d
- (int)numberOfLinesInTitle;	// 0x33d22129
// converted property getter: - (int)numberOfRows;	// 0x33d21c85
- (void)popupAlertAnimated:(BOOL)animated;	// 0x33d200ad
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x33d1fea5
- (void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;	// 0x33d20061
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x33d203a1
- (void)presentSheetFromBehindView:(id)behindView;	// 0x33d2038d
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x33d248b9
- (void)presentSheetInView:(id)view;	// 0x33d203b5
- (void)presentSheetToAboveView:(id)aboveView;	// 0x33d20531
- (void)replaceAlert:(id)alert;	// 0x33d249a1
- (BOOL)requiresPortraitOrientation;	// 0x33d1be59
// converted property getter: - (BOOL)runsModal;	// 0x33d21ea9
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x33d21cad
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x33d21e51
// converted property setter: - (void)setBodyText:(id)text;	// 0x33d1c821
- (void)setBodyTextMaxLineCount:(int)count;	// 0x33d1caa9
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x33d25399
// converted property setter: - (void)setContext:(id)context;	// 0x33d1d6b1
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x33d1d17d
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x33d2536d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33d25075
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x33d1d275
- (void)setDimView:(id)view;	// 0x33d207a9
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x33d21df5
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x33d1be41
// declared property setter: - (void)setMessage:(id)message;	// 0x33d25291
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x33d21c6d
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x33d21e91
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x33d1e295
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33d1c929
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x33d21e31
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x33d1e08d
- (void)setTaglineText:(id)text;	// 0x33d1c8ad
// declared property setter: - (void)setTitle:(id)title;	// 0x33d251d9
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x33d1c9ed
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x33d1e2ad
// converted property getter: - (id)subtitle;	// 0x33d1c9a5
// converted property getter: - (int)suspendTag;	// 0x33d21e41
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x33d1e0a9
- (id)tableView;	// 0x33d1e0bd
- (id)taglineTextView;	// 0x33d24961
- (id)textField;	// 0x33d1cf45
- (id)textFieldAtIndex:(int)index;	// 0x33d1cef9
- (int)textFieldCount;	// 0x33d1cf1d
// declared property getter: - (id)title;	// 0x33d25269
// converted property getter: - (int)titleMaxLineCount;	// 0x33d1ca95
- (CGRect)titleRect;	// 0x33d21f79
- (void)userDidCancelPopoverView:(id)user;	// 0x33d200a9
@end

