/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIBrowserDocumentController.h"
#import "UIWebFormAccessoryDelegate.h"

@class UIWindow, UIActionSheet, DOMNode, WebPDFView, NSMutableArray, NSTimer, UIWebFormAccessory, UIWebFormDelegate, UIInformalDelegate, UIWebTouchEventsGestureRecognizer;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory *_accessory;	// 520 = 0x208
	NSObject<UIFormPeripheral> *_input;	// 524 = 0x20c
	DOMNode *_currentAssistedNode;	// 528 = 0x210
	CGRect _inputViewBounds;	// 532 = 0x214
	float _lastAdjustmentForScroller;	// 548 = 0x224
	unsigned _accessoryEnabled : 1;	// 552 = 0x228
	unsigned _forceInputView : 1;	// 552 = 0x228
	unsigned _formIsAutoFilling : 1;	// 552 = 0x228
	unsigned _inputViewObeysDOMFocus : 1;	// 552 = 0x228
	unsigned _hasEditedTextField : 1;	// 552 = 0x228
	unsigned _requiresInputView : 1;	// 552 = 0x228
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 556 = 0x22c
	UIWebFormDelegate *_formDelegate;	// 560 = 0x230
	UIResponder *_editingDelegateForEverythingExceptForms;	// 564 = 0x234
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 568 = 0x238
	struct {
		WebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 600 = 0x258
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x322266d9; S=0x32228105; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x322266b9; S=0x3222812d; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x320a18ed; S=0x322266a9; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x322266c9; S=0x3208414d; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x32226679; S=0x3222668d; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x32228835; S=0x31ffced1; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x322265ed; @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// G=0x32226601; S=0x3222661d; @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x32226649; S=0x3222665d; @synthesize=_inputViewObeysDOMFocus
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x322287c1; S=0x322287f9; 
+ (id)_PDFPageNumberLabel;	// 0x32226789
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x32227021
+ (BOOL)isAutoFillAllowed;	// 0x322291dd
+ (float)preferredScrollDecelerationFactor;	// 0x31ff68b9
- (id)initWithFrame:(CGRect)frame;	// 0x31ff8e41
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x31ff8ec9
// declared property getter: - (id)_accessory;	// 0x322266d9
- (void)_autoFillFrame:(id)frame;	// 0x31ffc215
- (id)_buildVersion;	// 0x31ffc6bd
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x32228ac1
- (void)_cleanUpPDF;	// 0x3207dcb9
- (void)_clearAllConsoleMessages;	// 0x3207e44d
- (void)_clearSelectionAndUI;	// 0x320ad3cd
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x32227b21
// declared property getter: - (id)_currentAssistedNode;	// 0x322266b9
- (void)_displayFormNodeInputView;	// 0x3222886d
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;	// 0x3207ce3d
- (void)_dumpWebArchiveAtPath:(id)path;	// 0x3222906d
- (id)_editingDelegate;	// 0x32226fb5
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x320a18ed
- (CGRect)_editingRect;	// 0x322284f1
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32228155
- (void)_hidePDFPageNumberLabel;	// 0x3207dcdd
// declared property getter: - (id)_input;	// 0x322266c9
- (id)_keyboardResponder;	// 0x32226fe9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x32098e71
- (void)_keyboardWillShow:(id)_keyboard;	// 0x32098b81
- (void)_pdfPageNumberLabelAnimationDidStop:(id)_pdfPageNumberLabelAnimation finished:(id)finished;	// 0x32226745
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x3207cd45
- (BOOL)_requiresKeyboardResetOnReload;	// 0x320840dd
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32084239
- (void)_resetFormDataForFrame:(id)frame;	// 0x3207d9d5
- (void)_scrollCaretToVisible:(id)visible;	// 0x32228675
- (void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;	// 0x31ffc641
- (void)_setPDFView:(id)view;	// 0x322265dd
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x322284bd
- (void)_setUIWebViewUserAgent;	// 0x322266e9
- (void)_startAssistingKeyboard;	// 0x32226f79
- (void)_startAssistingSelectForNode:(id)node;	// 0x32226f41
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x3222913d
- (void)_stopAssistingFormNode;	// 0x32228419
- (void)_stopAssistingKeyboard;	// 0x32226f61
- (void)_stopAssistingSelectForNode:(id)node;	// 0x32226f29
- (void)_updateAccessory;	// 0x32226e49
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x32080739
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x32226ee9
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x322288d9
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x32228dd1
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x32226b2d
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x32229679
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x32226ad1
- (void)acceptedAutoFillWord:(id)word;	// 0x32226d85
- (void)accessoryAutoFill;	// 0x322286a9
- (void)accessoryDone;	// 0x32228799
- (void)accessoryTab:(BOOL)tab;	// 0x32228725
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x32228835
- (void)assistFormNode:(id)node;	// 0x322282dd
- (void)autoFillWithElementValue;	// 0x32226d45
- (BOOL)canAutoFill;	// 0x32226dc5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32227be9
- (void)clearMessagesMatchingMask:(int)mask;	// 0x31ffccd5
- (void)dealloc;	// 0x32227425
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x32228601
- (id)formElement;	// 0x32081d6d
// declared property getter: - (BOOL)hasEditedTextField;	// 0x322265ed
- (id)inputAccessoryView;	// 0x32084175
- (id)inputView;	// 0x320840e1
// declared property getter: - (CGRect)inputViewBounds;	// 0x32226601
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x32226649
- (void)installGestureRecognizers;	// 0x31ff9919
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x32226679
- (BOOL)isAutoFillMode;	// 0x32226ccd
- (BOOL)isAutoFilling;	// 0x322264ed
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x322287c1
- (id)messagesMatchingMask:(int)mask;	// 0x32226521
- (BOOL)playsNicelyWithGestures;	// 0x320a1869
- (void)promptForReplace:(id)replace;	// 0x32226f91
- (BOOL)resignFirstResponder;	// 0x320855e5
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x3222668d
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x31ffced1
- (void)setBounds:(CGRect)bounds;	// 0x32228225
- (void)setFrame:(CGRect)frame;	// 0x31ff95d5
// declared property setter: - (void)setInputViewBounds:(CGRect)bounds;	// 0x3222661d
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x3222665d
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x322287f9
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x32228105
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x3222812d
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x322266a9
// declared property setter: - (void)set_input:(id)input;	// 0x3208414d
- (id)textFormElement;	// 0x32081d49
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x3207e4c9
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x31ffc1dd
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x322267f1
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x3207d831
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x32226bc9
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x32226c39
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x3207d905
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x32226ba5
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x32226501
@end

