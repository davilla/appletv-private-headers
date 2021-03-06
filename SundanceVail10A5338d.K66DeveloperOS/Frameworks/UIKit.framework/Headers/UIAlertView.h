/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIWindow, UILabel, NSString, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
	id<UIAlertViewDelegate> _delegate;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UILabel *_subtitleLabel;	// 92 = 0x5c
	UILabel *_bodyTextLabel;	// 96 = 0x60
	UILabel *_taglineTextLabel;	// 100 = 0x64
	float _startY;	// 104 = 0x68
	CGPoint _center;	// 108 = 0x6c
	id _context;	// 116 = 0x74
	int _cancelButton;	// 120 = 0x78
	int _defaultButton;	// 124 = 0x7c
	int _firstOtherButton;	// 128 = 0x80
	UIToolbar *_toolbar;	// 132 = 0x84
	UIWindow *_originalWindow;	// 136 = 0x88
	UIWindow *_dimWindow;	// 140 = 0x8c
	int _suspendTag;	// 144 = 0x90
	int _dismissButtonIndex;	// 148 = 0x94
	float _bodyTextHeight;	// 152 = 0x98
	NSMutableArray *_buttons;	// 156 = 0x9c
	NSMutableArray *_textFields;	// 160 = 0xa0
	UIView *_keyboard;	// 164 = 0xa4
	UIView *_table;	// 168 = 0xa8
	UIView *_dimView;	// 172 = 0xac
	UIView *_backgroundImageView;	// 176 = 0xb0
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
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
	} _modalViewFlags;	// 180 = 0xb4
}
@property(assign) int alertSheetStyle;	// G=0x30f4c96d; S=0x30f4c999; converted property
@property(assign, nonatomic) int alertViewStyle;	// G=0x30f4d691; S=0x30f4d635; 
@property(assign) BOOL blocksInteraction;	// G=0x30f4cb4d; S=0x30f4cb25; converted property
@property(retain) id bodyText;	// G=0x30d5482d; S=0x30cda801; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x30f4ab15; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x30cdb151; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x30d59369; S=0x30cdb165; 
@property(retain) id context;	// G=0x30d59379; S=0x30d5430d; converted property
@property(retain) id defaultButton;	// G=0x30f485dd; S=0x30f485cd; converted property
@property(assign) int defaultButtonIndex;	// G=0x30f4d625; S=0x30f4d609; converted property
@property(assign, nonatomic) id delegate;	// G=0x30f4d56d; S=0x30cda88d; 
@property(retain) id destructiveButton;	// G=0x30f4865d; S=0x30f4861d; converted property
@property(assign) BOOL dimsBackground;	// G=0x30f4cb01; S=0x30f4cad9; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x30d542dd; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x30f4c981; S=0x30cda719; converted property
@property(assign) BOOL groupsTextFields;	// G=0x30f47539; S=0x30f47551; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x30f484b1; converted property
@property(copy, nonatomic) NSString *message;	// G=0x30d5481d; S=0x30cda7ed; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x30f4d5b9; 
@property(assign) int numberOfRows;	// G=0x30f4c959; S=0x30cda701; converted property
@property(assign) BOOL runsModal;	// G=0x30f4cb7d; S=0x30f4cb65; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30f48c95; S=0x30f48c7d; converted property
@property(retain) id subtitle;	// G=0x30f47a85; S=0x30f47a09; converted property
@property(assign) int suspendTag;	// G=0x30f4cb15; S=0x30d9bc8d; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x30f48895; S=0x30f48879; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x30f4ab25; converted property
@property(copy, nonatomic) NSString *title;	// G=0x30cda7c5; S=0x30cda735; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x30f4ab05; converted property
@property(assign) int titleMaxLineCount;	// G=0x30f47b4d; S=0x30f47aa5; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x30f4d5d9; 
+ (id)_alertViewForSessionWithRemoteViewController:(id)remoteViewController;	// 0x3103d409
+ (id)_alertWindow;	// 0x30c23df5
+ (id)_popupAlertBackground:(BOOL)background;	// 0x30d57bad
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)alert;	// 0x30f472e9
+ (BOOL)_springBoardAlertDisplayingOverApplicationAlert;	// 0x30f472f9
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x30f47359
+ (CGSize)minimumSize;	// 0x30f47309
- (id)initWithFrame:(CGRect)frame;	// 0x30cda569
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x30f47399
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x30cda401
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x30f4d435
- (id)_addButtonWithTitle:(id)title;	// 0x30f485ed
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x30cdaadd
- (id)_addButtonWithTitleText:(id)titleText;	// 0x30f48715
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x30cdb0e1
- (void)_addTextEntryFieldsWithStyle:(int)style;	// 0x30f4d6b5
- (id)_addTextFieldWithValue:(id)value label:(id)label;	// 0x30f47c29
- (void)_adjustLabelFontSizes;	// 0x30f4adbd
- (int)_alertOrientation;	// 0x30f4ada1
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x30f4c615
- (void)_alertSheetTextFieldDidChange:(id)_alertSheetTextField;	// 0x30d548a9
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x30f4808d
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x30f480bd
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x30f48191
- (void)_appSuspended:(id)suspended;	// 0x30f4c3f9
- (float)_bottomVerticalInset;	// 0x30d57d8d
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x30d58471
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x30d58379
- (id)_buttonAtIndex:(int)index;	// 0x30f48735
- (void)_buttonClicked:(id)clicked;	// 0x30d58909
- (float)_buttonHeight;	// 0x30d57c15
- (BOOL)_canShowAlerts;	// 0x30d54881
- (void)_cancelAnimated:(BOOL)animated;	// 0x30f4aa85
- (void)_cleanupAfterPopupAnimation;	// 0x30d58485
- (void)_cleanupKBWatcher;	// 0x30f483c9
- (void)_createBodyTextLabelIfNeeded;	// 0x30d540d9
- (void)_createSubtitleLabelIfNeeded;	// 0x30f475e9
- (void)_createTaglineTextLabelIfNeeded;	// 0x30f4779d
- (void)_createTitleLabelIfNeeded;	// 0x30d53fd9
- (int)_currentOrientation;	// 0x30d54f2d
- (id)_defaultButton;	// 0x30f486d9
- (id)_destructiveButton;	// 0x30f48795
- (id)_dimView;	// 0x30f4b6a1
- (BOOL)_dimsBackground;	// 0x30f4a9d1
- (id)_firstOtherButton;	// 0x30f487d1
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x30d58261
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30f4d209
- (BOOL)_isAnimating;	// 0x30f4a565
- (BOOL)_isSBAlert;	// 0x30f4d40d
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x30f49eb9
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x30f49fe9
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x30f4a139
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x30f4a289
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x30f4a3d9
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x30f4a529
- (void)_keyboardDidHide:(id)_keyboard;	// 0x30f4de19
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x30f48ca9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30f4dbc5
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30f4d8c5
- (void)_layoutIfNeeded;	// 0x30d54e01
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x30d54f79
- (BOOL)_manualKeyboardIsVisible;	// 0x30f48bb1
- (float)_maxHeight;	// 0x30d57db9
- (BOOL)_needsKeyboard;	// 0x30d54db9
- (void)_nukeOldTextFields;	// 0x30f4d2d5
- (void)_performPopoutAnimationAnimated:(BOOL)animated coveredBySpringBoardAlert:(BOOL)alert;	// 0x30f4a579
- (void)_performPopup:(BOOL)popup;	// 0x30f49ea5
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x30d54859
- (void)_performPopup:(BOOL)popup animationType:(int)type revealedBySpringBoardAlert:(BOOL)alert;	// 0x30f49101
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x30d58e11
- (void)_prepareForDisplay;	// 0x30f4d001
- (void)_prepareToBeReplaced;	// 0x30f4d1f1
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x30f4af81
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x30f4b7a1
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x30d5919d
- (void)_repopup;	// 0x30f4a97d
- (void)_repopupNoAnimation;	// 0x30f4a911
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x30f4aaf5
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x30f4756d
- (void)_setDefaultButton:(id)button;	// 0x30f48699
- (void)_setDestructiveButton:(id)button;	// 0x30f48755
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x30d542f1
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x30f47e75
- (void)_setupKBWatcher;	// 0x30f4826d
- (void)_setupTitleStyle;	// 0x30d57931
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30f48bcd
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x30f48d29
- (void)_showManualKBIfNecessary;	// 0x30f48cd5
- (void)_slideSheetOut:(BOOL)anOut;	// 0x30f4c0f9
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x30f4a9ed
- (id)_textFieldAtIndex:(int)index;	// 0x30f47fd9
- (float)_titleHorizontalInset;	// 0x30d57c41
- (float)_titleVerticalBottomInset;	// 0x30d57cfd
- (float)_titleVerticalTopInset;	// 0x30d57c71
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x30f4cd2d
- (void)_updateFrameForDisplay;	// 0x30d57f21
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x30f48149
- (void)_useUndoStyle:(BOOL)style;	// 0x30f4d8ad
- (void)_willRotateKeyboard;	// 0x30f4de7d
- (int)addButtonWithTitle:(id)title;	// 0x30cdaaa5
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x30f48835
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x30f48811
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x30f4d425
// converted property getter: - (int)alertSheetStyle;	// 0x30f4c96d
// declared property getter: - (int)alertViewStyle;	// 0x30f4d691
- (CGSize)backgroundSize;	// 0x30f4c3c1
- (BOOL)becomeFirstResponder;	// 0x30d58849
// converted property getter: - (BOOL)blocksInteraction;	// 0x30f4cb4d
- (int)bodyMaxLineCount;	// 0x30f47c15
// converted property getter: - (id)bodyText;	// 0x30d5482d
// converted property getter: - (id)bodyTextLabel;	// 0x30f4ab15
- (id)buttonAtIndex:(int)index;	// 0x30f485fd
- (int)buttonCount;	// 0x30f48855
- (id)buttonTitleAtIndex:(int)index;	// 0x30f4d581
// converted property getter: - (id)buttons;	// 0x30cdb151
- (BOOL)canBecomeFirstResponder;	// 0x30d588a5
// declared property getter: - (int)cancelButtonIndex;	// 0x30d59369
// converted property getter: - (id)context;	// 0x30d59379
- (void)dealloc;	// 0x30d59389
// converted property getter: - (id)defaultButton;	// 0x30f485dd
// converted property getter: - (int)defaultButtonIndex;	// 0x30f4d625
// declared property getter: - (id)delegate;	// 0x30f4d56d
// converted property getter: - (id)destructiveButton;	// 0x30f4865d
// converted property getter: - (BOOL)dimsBackground;	// 0x30f4cb01
- (void)dismiss;	// 0x30f4c379
- (void)dismissAnimated:(BOOL)animated;	// 0x30f4c38d
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30d58a81
// declared property getter: - (int)firstOtherButtonIndex;	// 0x30d542dd
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x30f4c981
// converted property getter: - (BOOL)groupsTextFields;	// 0x30f47539
- (BOOL)isBodyTextTruncated;	// 0x30f4ad89
// declared property getter: - (BOOL)isVisible;	// 0x30f4d5d9
// converted property getter: - (id)keyboard;	// 0x30f484b1
- (void)layout;	// 0x30d550c1
- (void)layoutAnimated:(BOOL)animated;	// 0x30d54fe9
- (void)layoutAnimated:(BOOL)animated withDuration:(double)duration;	// 0x30f4ab35
// declared property getter: - (id)message;	// 0x30d5481d
// declared property getter: - (int)numberOfButtons;	// 0x30f4d5b9
- (int)numberOfLinesInTitle;	// 0x30f4cbd9
// converted property getter: - (int)numberOfRows;	// 0x30f4c959
- (void)popupAlertAnimated:(BOOL)animated;	// 0x30f4af6d
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x30d5437d
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x30d543a5
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x30f4af4d
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x30f4b25d
- (void)presentSheetFromBehindView:(id)behindView;	// 0x30f4b249
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x30f4cf69
- (void)presentSheetInView:(id)view;	// 0x30f4b271
- (void)presentSheetToAboveView:(id)aboveView;	// 0x30f4b3ed
- (void)removeFromSuperview;	// 0x30f4d291
- (void)replaceAlert:(id)alert;	// 0x30f4d129
- (BOOL)requiresPortraitOrientation;	// 0x30d54f71
- (BOOL)resignFirstResponder;	// 0x30d58dcd
// converted property getter: - (BOOL)runsModal;	// 0x30f4cb7d
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x30f4c999
// declared property setter: - (void)setAlertViewStyle:(int)style;	// 0x30f4d635
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x30f4cb25
// converted property setter: - (void)setBodyText:(id)text;	// 0x30cda801
- (void)setBodyTextMaxLineCount:(int)count;	// 0x30f47b61
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x30cdb165
// converted property setter: - (void)setContext:(id)context;	// 0x30d5430d
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30f485cd
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x30f4d609
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30cda88d
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x30f4861d
- (void)setDimView:(id)view;	// 0x30f4b665
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x30f4cad9
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x30cda719
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x30f47551
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x30f48065
// declared property setter: - (void)setMessage:(id)message;	// 0x30cda7ed
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x30cda701
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x30f4cb65
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30f48c7d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x30f47a09
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x30d9bc8d
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x30f48879
- (void)setTaglineText:(id)text;	// 0x30f4798d
// declared property setter: - (void)setTitle:(id)title;	// 0x30cda735
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x30f47aa5
- (void)show;	// 0x30d54351
- (void)showWithAnimationType:(int)animationType;	// 0x30d54365
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30f48c95
// converted property getter: - (id)subtitle;	// 0x30f47a85
// converted property getter: - (int)suspendTag;	// 0x30f4cb15
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x30f48895
- (id)tableView;	// 0x30f488a9
// converted property getter: - (id)taglineTextLabel;	// 0x30f4ab25
- (id)textField;	// 0x30f48025
- (id)textFieldAtIndex:(int)index;	// 0x30f4d835
- (int)textFieldCount;	// 0x30f47ffd
// declared property getter: - (id)title;	// 0x30cda7c5
// converted property getter: - (id)titleLabel;	// 0x30f4ab05
// converted property getter: - (int)titleMaxLineCount;	// 0x30f47b4d
- (CGRect)titleRect;	// 0x30f4cb91
@end

