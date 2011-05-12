/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIToolbar, NSMutableArray, UIWindow, UILabel, NSString;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;	// 44 = 0x2c
	UILabel *_titleLabel;	// 48 = 0x30
	UILabel *_subtitleLabel;	// 52 = 0x34
	UILabel *_bodyTextLabel;	// 56 = 0x38
	UILabel *_taglineTextLabel;	// 60 = 0x3c
	float _startY;	// 64 = 0x40
	CGPoint _center;	// 68 = 0x44
	id _context;	// 76 = 0x4c
	int _cancelButton;	// 80 = 0x50
	int _defaultButton;	// 84 = 0x54
	int _firstOtherButton;	// 88 = 0x58
	UIToolbar *_toolbar;	// 92 = 0x5c
	UIWindow *_originalWindow;	// 96 = 0x60
	UIWindow *_dimWindow;	// 100 = 0x64
	int _suspendTag;	// 104 = 0x68
	int _dismissButtonIndex;	// 108 = 0x6c
	float _bodyTextHeight;	// 112 = 0x70
	NSMutableArray *_buttons;	// 116 = 0x74
	NSMutableArray *_textFields;	// 120 = 0x78
	UIView *_keyboard;	// 124 = 0x7c
	UIView *_table;	// 128 = 0x80
	UIView *_dimView;	// 132 = 0x84
	UIView *_backgroundImageView;	// 136 = 0x88
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
	} _modalViewFlags;	// 140 = 0x8c
}
@property(assign) int alertSheetStyle;	// G=0x3223acf9; S=0x3223b561; converted property
@property(assign) BOOL blocksInteraction;	// G=0x3223adad; S=0x3223ad85; converted property
@property(retain) id bodyText;	// G=0x3223c475; S=0x320994b5; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x3223acb1; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x32099db5; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x3209ee11; S=0x32099dc5; 
@property(retain) id context;	// G=0x3209edb9; S=0x32099dfd; converted property
@property(retain) id defaultButton;	// G=0x3223be15; S=0x3223be4d; converted property
@property(assign) int defaultButtonIndex;	// G=0x3223ae31; S=0x3223ae1d; converted property
@property(assign, nonatomic) id delegate;	// G=0x3223ae0d; S=0x3209973d; 
@property(retain) id destructiveButton;	// G=0x3223bda5; S=0x3223bddd; converted property
@property(assign) BOOL dimsBackground;	// G=0x3223ad4d; S=0x3223ad29; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x32099dd9; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x3223ad11; S=0x3209926d; converted property
@property(assign) BOOL groupsTextFields;	// G=0x3223ab65; S=0x3223ab7d; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x3223d13d; converted property
@property(copy, nonatomic) NSString *message;	// G=0x3223b2d1; S=0x320994a1; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x3223b281; 
@property(assign) int numberOfRows;	// G=0x3223ace5; S=0x32099251; converted property
@property(assign) BOOL runsModal;	// G=0x3223addd; S=0x3223adc1; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x3223ac55; S=0x3223ac39; converted property
@property(retain) id subtitle;	// G=0x3223c499; S=0x3223c4b9; converted property
@property(assign) int suspendTag;	// G=0x3223ad75; S=0x3223ad65; converted property
@property(readonly, retain) UIView *table;	// G=0x3223f409; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x3223ac0d; S=0x3223abf1; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x3223acc1; converted property
@property(copy, nonatomic) NSString *title;	// G=0x32099305; S=0x32099289; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x3223aca1; converted property
@property(assign) int titleMaxLineCount;	// G=0x3223ab99; S=0x3223c3d1; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x3223b259; 
+ (id)_alertWindow;	// 0x31fb7e11
+ (id)_popupAlertBackground:(BOOL)background;	// 0x3209df49
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x3223c771
+ (CGSize)minimumSize;	// 0x3223d25d
- (id)initWithFrame:(CGRect)frame;	// 0x32099101
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x3223c5fd
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x32098fb1
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x3223dd7d
- (id)_addButtonWithTitle:(id)title;	// 0x3223bd61
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x32099a5d
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x32099429
- (void)_adjustLabelFontSizes;	// 0x3223b931
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x3223d5dd
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x3223c011
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x3223bf95
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x3223be85
- (void)_appSuspended:(id)suspended;	// 0x3223b681
- (float)_bottomVerticalInset;	// 0x3209e175
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x3209e7f1
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x3209e721
- (void)_buttonClicked:(id)clicked;	// 0x3209ec0d
- (float)_buttonHeight;	// 0x3209dfb9
- (BOOL)_canShowAlerts;	// 0x3209ad8d
- (void)_cancelAnimated:(BOOL)animated;	// 0x3223ba5d
- (void)_cleanupAfterPopupAnimation;	// 0x3209e805
- (void)_cleanupKBWatcher;	// 0x3223d50d
- (void)_createBodyTextLabelIfNeeded;	// 0x32099535
- (void)_createSubtitleLabelIfNeeded;	// 0x3223ef69
- (void)_createTaglineTextLabelIfNeeded;	// 0x3223ed7d
- (void)_createTitleLabelIfNeeded;	// 0x32099329
- (int)_currentOrientation;	// 0x3209af55
- (id)_dimView;	// 0x3223cad5
- (BOOL)_dimsBackground;	// 0x3223ac85
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x3209e62d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3223dcfd
- (BOOL)_isAnimating;	// 0x3223ac6d
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x3223d03d
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x3223cf21
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x3223ce05
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x3223cce9
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x3223cbcd
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x3223bbb5
- (void)_keyboardDidHide:(id)_keyboard;	// 0x3223b205
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x3223bc45
- (void)_keyboardWillHide:(id)_keyboard;	// 0x3223d905
- (void)_keyboardWillShow:(id)_keyboard;	// 0x3209f439
- (void)_layoutIfNeeded;	// 0x3209aded
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x3209afcd
- (BOOL)_manualKeyboardIsVisible;	// 0x3223ac21
- (float)_maxHeight;	// 0x3209e19d
- (BOOL)_needsKeyboard;	// 0x3209adb1
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x3209f115
- (void)_performPopup:(BOOL)popup;	// 0x3223bbe9
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x3209a035
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x3209f729
- (void)_prepareForDisplay;	// 0x3223b395
- (void)_prepareToBeReplaced;	// 0x3223adf5
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x3223fa09
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x3223e125
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x3209fa59
- (void)_repopup;	// 0x3223bb2d
- (void)_repopupNoAnimation;	// 0x3223bb71
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x3223ba49
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x3223c591
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x32099de9
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x3223d299
- (void)_setupKBWatcher;	// 0x3223d3d9
- (void)_setupTitleStyle;	// 0x3209dc41
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x3223bc69
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x3223e985
- (void)_showManualKBIfNecessary;	// 0x3223bc01
- (void)_slideSheetOut:(BOOL)anOut;	// 0x3223dea1
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x3223bac5
- (float)_titleHorizontalInset;	// 0x3209e015
- (float)_titleVerticalBottomInset;	// 0x3209e0d9
- (float)_titleVerticalTopInset;	// 0x3209e03d
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x3223db11
- (void)_updateFrameForDisplay;	// 0x3209e2f9
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x3223bf59
- (void)_useUndoStyle:(BOOL)style;	// 0x3223ae41
- (void)_willRotateKeyboard;	// 0x3223ae5d
- (int)addButtonWithTitle:(id)title;	// 0x32099a2d
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x3223bd41
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x3223bd81
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x3223c0c5
// converted property getter: - (int)alertSheetStyle;	// 0x3223acf9
- (CGSize)backgroundSize;	// 0x3223caad
- (BOOL)becomeFirstResponder;	// 0x3209eb8d
// converted property getter: - (BOOL)blocksInteraction;	// 0x3223adad
- (int)bodyMaxLineCount;	// 0x3223abb1
// converted property getter: - (id)bodyText;	// 0x3223c475
// converted property getter: - (id)bodyTextLabel;	// 0x3223acb1
- (id)buttonAtIndex:(int)index;	// 0x3223bd01
- (int)buttonCount;	// 0x3223bd21
- (id)buttonTitleAtIndex:(int)index;	// 0x3223b2a1
// converted property getter: - (id)buttons;	// 0x32099db5
- (BOOL)canBecomeFirstResponder;	// 0x3209ebc9
// declared property getter: - (int)cancelButtonIndex;	// 0x3209ee11
// converted property getter: - (id)context;	// 0x3209edb9
- (void)dealloc;	// 0x3209fe71
// converted property getter: - (id)defaultButton;	// 0x3223be15
// converted property getter: - (int)defaultButtonIndex;	// 0x3223ae31
// declared property getter: - (id)delegate;	// 0x3223ae0d
// converted property getter: - (id)destructiveButton;	// 0x3223bda5
// converted property getter: - (BOOL)dimsBackground;	// 0x3223ad4d
- (void)dismiss;	// 0x3209edc9
- (void)dismissAnimated:(BOOL)animated;	// 0x3209ede1
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x3209ee21
// declared property getter: - (int)firstOtherButtonIndex;	// 0x32099dd9
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x3223ad11
// converted property getter: - (BOOL)groupsTextFields;	// 0x3223ab65
- (BOOL)isBodyTextTruncated;	// 0x3223acd1
// declared property getter: - (BOOL)isVisible;	// 0x3223b259
// converted property getter: - (id)keyboard;	// 0x3223d13d
- (void)layout;	// 0x3209b2c5
- (void)layoutAnimated:(BOOL)animated;	// 0x3209b039
// declared property getter: - (id)message;	// 0x3223b2d1
// declared property getter: - (int)numberOfButtons;	// 0x3223b281
- (int)numberOfLinesInTitle;	// 0x3223f541
// converted property getter: - (int)numberOfRows;	// 0x3223ace5
- (void)popupAlertAnimated:(BOOL)animated;	// 0x3223b8f9
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x32099e69
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x32099e91
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x3223b911
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x3223b8c9
- (void)presentSheetFromBehindView:(id)behindView;	// 0x3223b8e1
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x3223b4c9
- (void)presentSheetInView:(id)view;	// 0x3223f8b9
- (void)presentSheetToAboveView:(id)aboveView;	// 0x3223f685
- (void)replaceAlert:(id)alert;	// 0x3223b2e5
- (BOOL)requiresPortraitOrientation;	// 0x3209afc9
- (BOOL)resignFirstResponder;	// 0x3209ed79
// converted property getter: - (BOOL)runsModal;	// 0x3223addd
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x3223b561
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x3223ad85
// converted property setter: - (void)setBodyText:(id)text;	// 0x320994b5
- (void)setBodyTextMaxLineCount:(int)count;	// 0x3223c309
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x32099dc5
// converted property setter: - (void)setContext:(id)context;	// 0x32099dfd
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x3223be4d
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x3223ae1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3209973d
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x3223bddd
- (void)setDimView:(id)view;	// 0x3223b891
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x3223ad29
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x3209926d
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x3223ab7d
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x3223abcd
// declared property setter: - (void)setMessage:(id)message;	// 0x320994a1
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x32099251
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x3223adc1
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x3223ac39
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3223c4b9
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x3223ad65
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x3223abf1
- (void)setTaglineText:(id)text;	// 0x3223c525
// declared property setter: - (void)setTitle:(id)title;	// 0x32099289
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x3223c3d1
- (void)show;	// 0x32099e39
- (void)showWithAnimationType:(int)animationType;	// 0x32099e51
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x3223ac55
// converted property getter: - (id)subtitle;	// 0x3223c499
// converted property getter: - (int)suspendTag;	// 0x3223ad75
// converted property getter: - (id)table;	// 0x3223f409
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x3223ac0d
- (id)tableView;	// 0x3223f135
// converted property getter: - (id)taglineTextLabel;	// 0x3223acc1
- (id)textField;	// 0x3223c041
- (id)textFieldAtIndex:(int)index;	// 0x3223c0a1
- (int)textFieldCount;	// 0x3223c07d
// declared property getter: - (id)title;	// 0x32099305
// converted property getter: - (id)titleLabel;	// 0x3223aca1
// converted property getter: - (int)titleMaxLineCount;	// 0x3223ab99
- (CGRect)titleRect;	// 0x3223ca75
@end

