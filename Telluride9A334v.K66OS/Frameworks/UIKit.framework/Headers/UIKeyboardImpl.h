/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, UITextInputTraits, NSArray, UIDelayedAction, UIAutocorrectInlinePrompt, NSTimer, UIKeyboardLayout, NSMutableDictionary, UITextInputArrowKeyHistory, UIKeyboardCandidate, UIAlertView, UIKeyboardInputManager, NSString;
@protocol UIKeyboardRecording, UIApplicationEventRecording, UIKeyInput, UITextInput, UIKeyboardTypology, UITextInputPrivate, UIKeyboardInput, UIKeyboardImplGeometryDelegate, UIKeyboardCandidateList;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
	id<UIKeyInput> m_delegate;	// 48 = 0x30
	UIView *m_languageIndicator;	// 52 = 0x34
	NSString *m_previousInputString;	// 56 = 0x38
	UIKeyboardInputManager *m_inputManager;	// 60 = 0x3c
	UIKeyboardCandidate *m_autocorrection;	// 64 = 0x40
	UIAutocorrectInlinePrompt *m_autocorrectPrompt;	// 68 = 0x44
	UIDelayedAction *m_autocorrectPromptAction;	// 72 = 0x48
	NSMutableDictionary *m_autocorrectHistoryLists;	// 76 = 0x4c
	NSMutableArray *m_recentUnacceptedAutocorrections;	// 80 = 0x50
	NSArray *m_candidates;	// 84 = 0x54
	id<UIKeyboardCandidateList> m_candidateList;	// 88 = 0x58
	UIView *m_markedTextOverlay;	// 92 = 0x5c
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;	// 96 = 0x60
	NSObject<UIKeyboardRecording, UIApplicationEventRecording> *m_recorder;	// 100 = 0x64
	UIKeyboardLayout *m_layout;	// 104 = 0x68
	NSMutableDictionary *m_keyedLayouts;	// 108 = 0x6c
	NSString *m_inputModeLastChosen;	// 112 = 0x70
	struct {
		NSTimer *timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;	// 116 = 0x74
	NSTimer *m_autoDeleteTimer;	// 128 = 0x80
	unsigned m_autoDeleteCount;	// 132 = 0x84
	double m_autoDeleteLastDelete;	// 136 = 0x88
	double m_autoDeleteInterval;	// 144 = 0x90
	unsigned long m_autoDeleteShiftCharacter;	// 152 = 0x98
	UIDelayedAction *m_longPressAction;	// 156 = 0x9c
	int m_orientation;	// 160 = 0xa0
	int m_originalOrientation;	// 164 = 0xa4
	CGPoint m_inputPoint;	// 168 = 0xa8
	int m_changeCount;	// 176 = 0xb0
	double m_changeTime;	// 180 = 0xb4
	double m_doubleSpacePeriodTime;	// 188 = 0xbc
	id m_changedDelegate;	// 196 = 0xc4
	CFRunLoopObserverRef m_observer;	// 200 = 0xc8
	unsigned m_textInputChangingCount;	// 204 = 0xcc
	BOOL m_textInputChangingText;	// 208 = 0xd0
	BOOL m_textInputChangingDirection;	// 209 = 0xd1
	BOOL m_textInputChangesIgnored;	// 210 = 0xd2
	BOOL m_insideKeyInputDelegateCall;	// 211 = 0xd3
	UITextInputTraits *m_defaultTraits;	// 212 = 0xd4
	UITextInputTraits *m_traits;	// 216 = 0xd8
	int m_returnKeyState;	// 220 = 0xdc
	int m_currentDirection;	// 224 = 0xe0
	int m_learnsCorrections;	// 228 = 0xe4
	BOOL m_anotherTouchWaiting;	// 232 = 0xe8
	BOOL m_autoDeleteOK;	// 233 = 0xe9
	BOOL m_autocapitalizationPreference;	// 234 = 0xea
	BOOL m_autocorrectPromptTimerFired;	// 235 = 0xeb
	BOOL m_autocorrectionPreference;	// 236 = 0xec
	BOOL m_autoshift;	// 237 = 0xed
	BOOL m_caretShowingNow;	// 238 = 0xee
	BOOL m_changeNotificationDisabled;	// 239 = 0xef
	BOOL m_delegateIsSMSTextView;	// 240 = 0xf0
	BOOL m_delegateRequiresKeyEvents;	// 241 = 0xf1
	BOOL m_doubleSpacePeriodPreference;	// 242 = 0xf2
	BOOL m_hardwareKeyboardAttached;	// 243 = 0xf3
	BOOL m_inDealloc;	// 244 = 0xf4
	BOOL m_inHardwareKeyboardMode;	// 245 = 0xf5
	BOOL m_initializationDone;	// 246 = 0xf6
	BOOL m_performDecomposingDelete;	// 247 = 0xf7
	BOOL m_performanceLoggingEnabled;	// 248 = 0xf8
	BOOL m_selecting;	// 249 = 0xf9
	BOOL m_shift;	// 250 = 0xfa
	BOOL m_shiftLocked;	// 251 = 0xfb
	BOOL m_shiftLockedEnabled;	// 252 = 0xfc
	BOOL m_settingShift;	// 253 = 0xfd
	BOOL m_shouldSkipCandidateSelection;	// 254 = 0xfe
	BOOL m_usesCandidateSelection;	// 255 = 0xff
	BOOL m_updatingPreferences;	// 256 = 0x100
	BOOL m_changingGeometryWithSameOrientation;	// 257 = 0x101
	BOOL m_suppressGeometryChangeNotifications;	// 258 = 0x102
	BOOL m_acceptingCandidate;	// 259 = 0x103
	BOOL m_userChangedSelection;	// 260 = 0x104
	BOOL m_shouldChargeKeys;	// 261 = 0x105
	BOOL m_longPress;	// 262 = 0x106
	BOOL m_syntheticInput;	// 263 = 0x107
	BOOL m_replacingWord;	// 264 = 0x108
	BOOL m_shiftNeedsUpdate;	// 265 = 0x109
	BOOL m_shiftPreventAutoshift;	// 266 = 0x10a
	BOOL m_shiftHeldDownNeedsUpdated;	// 267 = 0x10b
	BOOL m_delegateAdoptsTextInput;	// 268 = 0x10c
	BOOL m_delegateAdoptsTextInputPrivate;	// 269 = 0x10d
	BOOL m_delegateAdoptsKeyboardInput;	// 270 = 0x10e
	BOOL m_clientVariantSupportEnabled;	// 271 = 0x10f
	BOOL m_clientVariantSupportEnabledEver;	// 272 = 0x110
	NSMutableArray *m_keyplaneNamesPreviousDelegate;	// 276 = 0x114
	NSMutableArray *m_keyplaneNamesCurrentDelegate;	// 280 = 0x118
	UITextInputArrowKeyHistory *m_arrowKeyHistory;	// 284 = 0x11c
	BOOL m_preRotateShift;	// 288 = 0x120
	BOOL m_preRotateShiftLocked;	// 289 = 0x121
	BOOL m_showInputModeIndicator;	// 290 = 0x122
	BOOL m_suppressUpdateCandidateView;	// 291 = 0x123
	BOOL m_shouldUpdateCacheOnInputModesChange;	// 292 = 0x124
	BOOL m_shouldSetInputModeInNextRun;	// 293 = 0x125
	BOOL m_rivenCenterFilled;	// 294 = 0x126
	float m_splitProgress;	// 296 = 0x128
	NSString *m_currentUsedInputMode;	// 300 = 0x12c
	NSString *m_lastUsedInputMode;	// 304 = 0x130
	BOOL m_needsCandidates;	// 308 = 0x134
	BOOL m_updateLayoutOnShowKeyboard;	// 309 = 0x135
	int _currentAlertReason;	// 312 = 0x138
@private
	id<UIKeyboardTypology> typologyRecorder;	// 316 = 0x13c
	BOOL m_showsCandidateBar;	// 320 = 0x140
	BOOL m_showsCandidateInline;	// 321 = 0x141
	UIAlertView *keyboardAlertView;	// 324 = 0x144
	BOOL committingCandidate;	// 328 = 0x148
	BOOL geometryIsChanging;	// 329 = 0x149
}
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory;	// G=0x30143f71; S=0x3012dd51; @synthesize=m_arrowKeyHistory
@property(readonly, assign) BOOL autocapitalizationPreference;	// G=0x30115435; converted property
@property(readonly, retain) UIAutocorrectInlinePrompt *autocorrectPrompt;	// G=0x300b84ed; converted property
@property(assign) BOOL autocorrectSpellingEnabled;	// G=0x301359f5; S=0x300a8e01; converted property
@property(readonly, assign) BOOL autocorrectionPreference;	// G=0x300a8dcd; converted property
@property(assign) BOOL automaticMinimizationEnabled;	// G=0x3024766d; S=0x302476a1; converted property
@property(assign) BOOL caretBlinks;	// G=0x3024c2bd; S=0x301169ad; converted property
@property(assign) BOOL caretVisible;	// G=0x3014209d; S=0x30116a15; converted property
@property(readonly, assign) BOOL centerFilled;	// G=0x302470a5; 
@property(readonly, assign) int changeCount;	// G=0x30114dfd; converted property
@property(assign) BOOL changeNotificationDisabled;	// G=0x302486e5; S=0x302486f5; converted property
@property(retain, nonatomic) id changedDelegate;	// G=0x30136f89; S=0x300ba3f9; @synthesize=m_changedDelegate
@property(retain, nonatomic) id changedDelegate;	// @dynamic
@property(readonly, assign, getter=isClientVariantSupportEnabled) BOOL clientVariantSupportEnabled;	// G=0x3011e5e5; converted property
@property(assign, nonatomic) BOOL committingCandidate;	// G=0x3024c491; S=0x3024c4a1; @synthesize
@property(retain, nonatomic) NSString *currentUsedInputMode;	// G=0x30145125; S=0x300ba441; @synthesize=m_currentUsedInputMode
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;	// G=0x300a1ac5; S=0x3004c895; 
@property(readonly, assign, nonatomic) UIResponder *delegateAsResponder;	// G=0x30248621; 
@property(readonly, assign) BOOL delegateIsSMSTextView;	// G=0x301150bd; converted property
@property(readonly, assign) BOOL doubleSpacePeriodPreference;	// G=0x300a2aed; converted property
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;	// G=0x30114ded; S=0x30114a51; @synthesize=m_geometryDelegate
@property(assign, nonatomic) BOOL geometryIsChanging;	// G=0x3024c4b1; S=0x3024c4c1; @synthesize
@property(retain) id hardwareKeyboardsSeenPreference;	// G=0x30247b79; S=0x30247bb1; converted property
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;	// G=0x300a6cb9; S=0x30143009; 
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *inputDelegate;	// G=0x300a614d; 
@property(retain, nonatomic) UIKeyboardInputManager *inputManager;	// G=0x300a87c1; S=0x300a879d; @synthesize=m_inputManager
@property(readonly, retain) NSString *inputModeLastChosen;	// G=0x30248279; converted property
@property(retain, nonatomic) UIAlertView *keyboardAlertView;	// G=0x3024c45d; S=0x3024c46d; @synthesize
@property(retain, nonatomic) NSString *lastUsedInputMode;	// G=0x3024c43d; S=0x300ba41d; @synthesize=m_lastUsedInputMode
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;	// G=0x300a5aed; 
@property(assign, getter=isLongPress) BOOL longPress;	// G=0x301689d9; S=0x3024c839; converted property
@property(readonly, retain) UIView *markedTextOverlay;	// G=0x30248795; converted property
@property(readonly, assign) unsigned minimumTouchesForTranslation;	// G=0x3024727d; 
@property(readonly, assign) int orientation;	// G=0x30127229; converted property
@property(assign) unsigned phraseBoundary;	// G=0x30248fa5; S=0x30248f1d; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;	// G=0x300a1aa1; 
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder;	// G=0x300a958d; S=0x300ba11d; 
@property(assign) BOOL returnKeyEnabled;	// G=0x30121391; S=0x3011520d; converted property
@property(assign) BOOL rivenSplitLock;	// G=0x302471ed; S=0x30247221; 
@property(assign, getter=isShiftLocked) BOOL shiftLocked;	// G=0x3011f1a5; S=0x301d4bd9; converted property
@property(readonly, assign) BOOL shiftLockedEnabled;	// G=0x301d4d25; converted property
@property(assign) BOOL shouldChargeKeys;	// G=0x3024b1c5; S=0x301151d9; converted property
@property(assign, nonatomic) BOOL shouldSetInputModeInNextRun;	// G=0x3024c41d; S=0x3024c42d; @synthesize=m_shouldSetInputModeInNextRun
@property(readonly, assign, nonatomic) BOOL shouldShowCandidateBar;	// G=0x300a99cd; 
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;	// G=0x30169521; S=0x30117ae5; 
@property(assign, nonatomic) BOOL showInputModeIndicator;	// G=0x3024c3fd; S=0x3024c40d; @synthesize=m_showInputModeIndicator
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x300a9ced; S=0x300a9ad5; @synthesize=m_showsCandidateBar
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x3024c44d; S=0x300a9911; @synthesize=m_showsCandidateInline
@property(readonly, assign, nonatomic) BOOL splitTransitionInProgress;	// G=0x300ae661; 
@property(retain, nonatomic) id<UIKeyboardTypology> typologyRecorder;	// G=0x300a87d1; S=0x300ba15d; @synthesize
+ (void)_clearHardwareKeyboardMinimizationPreference;	// 0x3024c6e5
+ (id)activeInstance;	// 0x3004c885
+ (float)additionalInstanceHeight;	// 0x300a9c95
+ (void)applicationDidReceiveMemoryWarning:(id)application;	// 0x30246a55
+ (void)applicationWillResignActive:(id)application;	// 0x300b960d
+ (void)applicationWillSuspend:(id)application;	// 0x300b98c5
+ (CGSize)defaultSize;	// 0x30246ccd
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x300a126d
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x30190f6d
+ (void)handleSpecificHardwareKeyboard:(id)keyboard;	// 0x30246cf1
+ (void)hardwareKeyboardAvailabilityChanged;	// 0x3024b591
+ (BOOL)isSplit;	// 0x300ab369
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x300af255
+ (void)markElapsed:(id)elapsed;	// 0x300a98a9
+ (void)markPerformance:(id)performance;	// 0x300a17c1
+ (id)normalizedInputModesFromPreference;	// 0x30246d29
+ (int)orientationForSize:(CGSize)size;	// 0x30114b01
+ (CGPoint)persistentOffset;	// 0x300ac989
+ (float)persistentSplitProgress;	// 0x302472d9
+ (void)refreshRivenStateWithTraits:(id)traits;	// 0x300a2729
+ (void)releaseSharedInstance;	// 0x3009dbb5
+ (BOOL)rivenInstalled;	// 0x300b03ad
+ (BOOL)rivenPreference;	// 0x300ae6f1
+ (BOOL)rivenTranslationPreference;	// 0x3013a1cd
+ (void)setParentTestForProfiling:(id)profiling;	// 0x3024c515
+ (void)setPersistentOffset:(CGPoint)offset;	// 0x30149919
+ (void)setPersistentSplitProgress:(float)progress;	// 0x3024734d
+ (id)sharedInstance;	// 0x300a10e5
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x300aaf71
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation textInputTraits:(id)traits;	// 0x300ab105
+ (float)splitProgress;	// 0x3024733d
+ (BOOL)supportsSplit;	// 0x30119ef1
+ (void)suppressSetPersistentOffset:(BOOL)offset;	// 0x30247419
- (id)initWithFrame:(CGRect)frame;	// 0x300a13e5
- (id)UILanguagePreference;	// 0x300a583d
- (CGRect)_autocorrectPromptRect;	// 0x301cb069
- (id)_getAutocorrection;	// 0x3024ca65
- (id)_getCurrentKeyboardName;	// 0x3024c975
- (id)_getCurrentKeyplaneName;	// 0x301c9801
- (id)_getLocalizedInputMode;	// 0x3024c9dd
- (void)_handleWebKeyEvent:(GSEventRef)event withEventType:(int)eventType withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x3024bf19
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString;	// 0x3024c075
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x3024bff9
- (BOOL)_hasCandidates;	// 0x300a63f1
- (unsigned)_inputCountForAutocorrectionCandidate;	// 0x3024cb75
- (id)_inputForAutocorrectionCandidate;	// 0x3018d51d
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;	// 0x3024c5b5
- (id)_layout;	// 0x300ab0e5
- (BOOL)_needsCandidates;	// 0x3024cb29
- (int)_positionInCandidateList:(id)candidateList;	// 0x3024ca85
- (id)_rangeForAutocorrection;	// 0x301cb181
- (void)_releaseInputManager;	// 0x3024cb59
- (void)_resetInputLocation;	// 0x3024cb39
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x3024ca45
- (void)_setInputManager:(id)manager;	// 0x3024c551
- (void)_setNeedsCandidates:(BOOL)candidates;	// 0x301c98e5
- (void)_setShiftLockedEnabled:(BOOL)enabled;	// 0x3024c561
- (id)_shortcutConversionCandidateForInput:(id)input;	// 0x301695e1
- (BOOL)_shouldMinimizeForHardwareKeyboard;	// 0x30114d8d
- (BOOL)_shouldShowCandidateBar:(BOOL)bar;	// 0x300a99e5
- (void)_updateSoundPreheatingForWindow:(id)window;	// 0x30114ec9
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x301224c1
- (void)acceptAutocorrection;	// 0x3014ac4d
- (void)acceptCandidate:(id)candidate atIndex:(unsigned)index;	// 0x30249459
- (void)acceptCurrentCandidate;	// 0x302497bd
- (void)acceptCurrentCandidateIfSelected;	// 0x301203a9
- (BOOL)acceptInputString:(id)string;	// 0x3013a27d
- (BOOL)acceptWord:(id)word firstDelete:(unsigned)aDelete;	// 0x3018c131
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x3024b199
- (void)addAutocorrectionRecord:(id)record forTyping:(id)typing;	// 0x3024ab51
- (void)addInputObject:(id)object;	// 0x30249a1d
- (void)addInputString:(id)string;	// 0x30248da1
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x30144125
- (void)addTyping:(id)typing forAutocorrection:(id)autocorrection;	// 0x301cf7f1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30247f15
- (void)animateAutocorrection;	// 0x301cebc5
- (void)applicationResumedEventsOnly:(id)only;	// 0x30246e01
- (void)applicationSuspendedEventsOnly:(id)only;	// 0x30246d95
// declared property getter: - (id)arrowKeyHistory;	// 0x30143f71
- (void)autoDeleteTimerFired:(id)fired;	// 0x3024b1f5
// converted property getter: - (BOOL)autocapitalizationPreference;	// 0x30115435
- (id)autocorrectHistoryForInputMode:(id)inputMode;	// 0x3014a9a9
// converted property getter: - (id)autocorrectPrompt;	// 0x300b84ed
// converted property getter: - (BOOL)autocorrectSpellingEnabled;	// 0x301359f5
- (void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void *)context;	// 0x301cfa19
// converted property getter: - (BOOL)autocorrectionPreference;	// 0x300a8dcd
- (BOOL)autocorrectionPreferenceForTraits;	// 0x300a8d5d
- (id)autocorrectionRecordForWord:(id)word;	// 0x3014a971
// converted property getter: - (BOOL)automaticMinimizationEnabled;	// 0x3024766d
- (void)callChanged;	// 0x30137585
- (void)callChangedSelection;	// 0x30116bbd
- (BOOL)callLayoutIgnoresShiftState;	// 0x30169aad
- (BOOL)callLayoutIsShiftKeyBeingHeld;	// 0x301218b9
- (BOOL)callLayoutIsShiftKeyPlaneChooser;	// 0x30121869
- (void)callLayoutLongPressAction;	// 0x3024c4d1
- (void)callLayoutSetAutoshift:(BOOL)autoshift;	// 0x3011727d
- (void)callLayoutSetShift:(BOOL)shift;	// 0x30117229
- (BOOL)callLayoutShiftKeyRequiresImmediateUpdate;	// 0x301c9fe1
- (void)callLayoutUpdateAllLocalizedKeys;	// 0x30116ce9
- (void)callLayoutUpdateLocalizedKeys;	// 0x300a8d15
- (void)callLayoutUpdateReturnKey;	// 0x30115239
- (BOOL)callLayoutUsesAutoShift;	// 0x301170f1
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)call characterCountForRapidDelete:(int)rapidDelete;	// 0x301c545d
- (BOOL)callShouldInsertText:(id)call;	// 0x30145189
- (BOOL)canHandleKeyHitTest;	// 0x30120e65
- (BOOL)canUseGeometryKeyTouch;	// 0x30120e89
- (void)cancelAllKeyEvents;	// 0x3004e4c5
- (void)cancelSplitTransition;	// 0x30247485
- (id)candidateList;	// 0x302498cd
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x30249855
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x30249881
// converted property getter: - (BOOL)caretBlinks;	// 0x3024c2bd
// converted property getter: - (BOOL)caretVisible;	// 0x3014209d
// declared property getter: - (BOOL)centerFilled;	// 0x302470a5
// converted property getter: - (int)changeCount;	// 0x30114dfd
// converted property getter: - (BOOL)changeNotificationDisabled;	// 0x302486e5
// declared property getter: - (id)changedDelegate;	// 0x30136f89
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x3024b1d5
- (BOOL)checkSpellingPreference;	// 0x300a8f19
- (BOOL)checkSpellingPreferenceForTraits;	// 0x300a8ea5
- (void)clearAnimations;	// 0x300b9ddd
- (void)clearAutocorrectPromptTimer;	// 0x300a6b39
- (void)clearChangeTimeAndCount;	// 0x30114e0d
- (void)clearDelegate;	// 0x300b9da1
- (void)clearEmojiLayout;	// 0x3024c769
- (void)clearInput;	// 0x300a602d
- (void)clearKeyAreas;	// 0x30120eb1
- (void)clearLanguageIndicator;	// 0x30247c1d
- (void)clearLayouts;	// 0x300a959d
- (void)clearLongPressTimer;	// 0x300b9eb5
- (void)clearSelection;	// 0x3024c325
- (void)clearShiftState;	// 0x301466a9
- (void)clearTimers;	// 0x300b9e29
- (void)clearTransientState;	// 0x3011508d
- (id)clientOverrideForKey:(id)key;	// 0x30247525
- (id)clientVariantDelegate;	// 0x301152fd
- (id)clientVariantsForKey:(id)key;	// 0x302474cd
// declared property getter: - (BOOL)committingCandidate;	// 0x3024c491
- (CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;	// 0x301cb579
- (id)currentInputContextFromInputDelegateWithWordRange:(id)wordRange;	// 0x301167f9
- (BOOL)currentKeyboardTraitsAllowCandidateBar;	// 0x3014ad7d
- (float)currentLandscapeHeight;	// 0x30246b4d
- (float)currentLandscapeWidth;	// 0x30246a59
- (float)currentPortraitHeight;	// 0x30121df9
- (float)currentPortraitWidth;	// 0x30121d05
// declared property getter: - (id)currentUsedInputMode;	// 0x30145125
- (void)dealloc;	// 0x300ba181
- (void)defaultsDidChange;	// 0x30246e15
- (void)delayedInit;	// 0x300b47a5
// declared property getter: - (id)delegate;	// 0x300a1ac5
// declared property getter: - (id)delegateAsResponder;	// 0x30248621
// converted property getter: - (BOOL)delegateIsSMSTextView;	// 0x301150bd
- (BOOL)delegateSuggestionsForCurrentInput;	// 0x3024ab8d
- (BOOL)delegateSupportsCorrectionUI;	// 0x3018d4ed
- (void)deleteBackward;	// 0x30248d8d
- (void)deleteBackwardAndNotify:(BOOL)notify;	// 0x301c59e1
- (void)deleteForwardAndNotify:(BOOL)notify;	// 0x30248d49
- (void)deleteFromInput;	// 0x301c4ef9
- (void)detach;	// 0x300b9fb1
- (void)dismissKeyboard;	// 0x3024b951
- (BOOL)displaysCandidates;	// 0x301374a9
// converted property getter: - (BOOL)doubleSpacePeriodPreference;	// 0x300a2aed
- (void)enable;	// 0x302486d1
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;	// 0x30247ee1
- (void)fadeAutocorrectPrompt;	// 0x3024a905
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x3024c8fd
- (void)firstHardwareAutoRepeat:(id)repeat;	// 0x3024b65d
- (BOOL)flushKeyplaneName:(id)name;	// 0x3014ae39
- (void)forceShiftUpdate;	// 0x301c9c0d
- (void)forceShiftUpdateIfKeyboardStateChanged;	// 0x30138b29
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x302471b9
- (id)generateAutocorrectionReplacements:(id)replacements;	// 0x3024b001
- (void)generateCandidates;	// 0x30125689
- (void)generateCandidatesWithOptions:(int)options;	// 0x3012569d
- (void)geometryChangeDone:(BOOL)done;	// 0x30125565
// declared property getter: - (id)geometryDelegate;	// 0x30114ded
// declared property getter: - (BOOL)geometryIsChanging;	// 0x3024c4b1
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x3024b0fd
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x3024b12d
- (void)handleDelete;	// 0x301c4e1d
- (void)handleDeleteAsRepeat:(BOOL)repeat;	// 0x301c4e31
- (void)handleDeleteWithNonZeroInputCount;	// 0x301c5759
- (void)handleDeleteWithZeroInputCount;	// 0x30249139
- (BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL *)okay;	// 0x30143121
- (void)handleKeyEvent:(GSEventRef)event;	// 0x30142889
- (void)handleObserverCallback;	// 0x30137511
- (void)handleSpecificHardwareKeyboard:(id)keyboard;	// 0x3024bb09
- (void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;	// 0x30144079
- (void)hardwareAutoRepeat:(id)repeat;	// 0x3024b63d
- (void)hardwareKeyboardAvailabilityChanged;	// 0x3024b5c5
// converted property getter: - (id)hardwareKeyboardsSeenPreference;	// 0x30247b79
- (BOOL)hasAutoRepeat;	// 0x3024c571
- (BOOL)hasEditableMarkedText;	// 0x3011663d
- (BOOL)hasMarkedText;	// 0x300a611d
- (BOOL)hideAccessoryViewsDuringSplit;	// 0x30247429
- (void)hideKeyboard;	// 0x3024b6f1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30137d65
// declared property getter: - (id)inputDelegate;	// 0x300a614d
// declared property getter: - (id)inputManager;	// 0x300a87c1
- (id)inputModeFirstPreference;	// 0x3024774d
// converted property getter: - (id)inputModeLastChosen;	// 0x30248279
- (id)inputModeLastChosenPreference;	// 0x3024779d
- (id)inputModeLastUsedForLanguage:(id)language;	// 0x30247909
- (id)inputModeLastUsedPreference;	// 0x300a5995
- (id)inputModePreference;	// 0x300a2b49
- (id)inputOverlayContainer;	// 0x301cb369
- (void)insertText:(id)text;	// 0x30169b6d
- (void)installRecorder;	// 0x300a968d
- (void)installTypology;	// 0x300a9745
- (BOOL)isAllowedInputMode:(id)mode;	// 0x300a5a21
- (BOOL)isAutoDeleteActive;	// 0x3024c6a5
- (BOOL)isAutoFillMode;	// 0x301cdcfd
- (BOOL)isAutoShifted;	// 0x30119fd5
// converted property getter: - (BOOL)isClientVariantSupportEnabled;	// 0x3011e5e5
- (BOOL)isDesiredInputMode:(id)mode;	// 0x30115f1d
// declared property getter: - (BOOL)isInHardwareKeyboardMode;	// 0x300a6cb9
// converted property getter: - (BOOL)isLongPress;	// 0x301689d9
- (BOOL)isMinimized;	// 0x300a8819
// converted property getter: - (BOOL)isShiftLocked;	// 0x3011f1a5
- (BOOL)isShifted;	// 0x3013777d
- (BOOL)isUsingDictationLayout;	// 0x30249f1d
- (BOOL)isValidKeyInput:(id)input;	// 0x30143f81
- (void)keyActivated;	// 0x30248d35
- (void)keyDeactivated;	// 0x30248d45
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x30139709
- (BOOL)keySlidIntoSwipe;	// 0x3018b41d
// declared property getter: - (id)keyboardAlertView;	// 0x3024c45d
- (BOOL)keyboardDrawsOpaque;	// 0x30114a01
- (BOOL)keyboardRecordingEnabled;	// 0x300a96cd
- (BOOL)keyboardsExpandedPreference;	// 0x30247639
- (id)keyplaneNameInCurrentDelegateListForIndex:(int)index;	// 0x302475c9
// declared property getter: - (id)lastUsedInputMode;	// 0x3024c43d
- (void)launchTypologyApplication;	// 0x3024c741
- (void)layoutHasChanged;	// 0x302486c1
// declared property getter: - (id)legacyInputDelegate;	// 0x300a5aed
- (void)longPressAction;	// 0x3024b51d
// converted property getter: - (id)markedTextOverlay;	// 0x30248795
- (unsigned)maximumNumberOfColumnsForSortingMethod:(id)sortingMethod interfaceOrientation:(int)orientation isInline:(BOOL)anInline reducedWidth:(BOOL)width;	// 0x3024b15d
- (void)mediaKeyDown:(GSEventRef)down;	// 0x3024c1d5
// declared property getter: - (unsigned)minimumTouchesForTranslation;	// 0x3024727d
- (void)movePhraseBoundaryToDirection:(int)direction;	// 0x30248fc5
- (BOOL)needsToDeferUpdateTextCandidateView;	// 0x30249e3d
- (BOOL)noContent;	// 0x30168711
- (void)notifyShiftState;	// 0x30117141
// converted property getter: - (int)orientation;	// 0x30127229
- (void)performClientVariantActionNamed:(id)named;	// 0x3024757d
- (BOOL)performanceLoggingPreference;	// 0x300b4899
// converted property getter: - (unsigned)phraseBoundary;	// 0x30248fa5
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30126f25
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30137e51
- (void)postEmptyDelegateNotificationIfNeeded;	// 0x30145135
- (void)prepareForGeometryChange;	// 0x3012254d
- (void)prepareForSelectionChange;	// 0x3012d025
- (void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;	// 0x30248321
- (void)prepareUsedKeyplaneNameListForNewDelegate;	// 0x301153ed
// declared property getter: - (id)privateInputDelegate;	// 0x300a1aa1
- (void)recomputeActiveInputModes;	// 0x30248c05
- (void)recomputeActiveInputModesFromList:(id)list;	// 0x30115bdd
// declared property getter: - (id)recorder;	// 0x300a958d
- (void)refreshRivenPreferences;	// 0x300a26fd
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x301211cd
- (void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;	// 0x30119a15
- (void)releaseSuppressUpdateCandidateView;	// 0x30125501
- (void)removeAutocorrectPrompt;	// 0x300a6a15
- (void)removeAutocorrection;	// 0x30249429
- (void)removeFromSuperview;	// 0x300b9f05
- (void)replaceText:(id)text;	// 0x30249b29
- (void)resizeCandidateBarWithDelta:(float)delta;	// 0x30249f65
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x3011a775
- (void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;	// 0x30119a61
- (id)returnKeyDisplayName;	// 0x301213ad
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x30121391
- (int)returnKeyType;	// 0x30121421
// declared property getter: - (BOOL)rivenSplitLock;	// 0x302471ed
- (void)saveInputModesPreference:(id)preference;	// 0x30247715
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x30249d11
- (id)searchStringForMarkedText;	// 0x30248809
- (void)selectionDidChange:(id)selection;	// 0x3012dc29
- (id)selectionView;	// 0x3024c849
- (void)selectionWillChange:(id)selection;	// 0x3012cfe5
- (void)setAnotherTouchWaiting:(BOOL)waiting;	// 0x3024b55d
// declared property setter: - (void)setArrowKeyHistory:(id)history;	// 0x3012dd51
// converted property setter: - (void)setAutocorrectSpellingEnabled:(BOOL)enabled;	// 0x300a8e01
- (void)setAutocorrection:(id)autocorrection;	// 0x300a6171
// converted property setter: - (void)setAutomaticMinimizationEnabled:(BOOL)enabled;	// 0x302476a1
- (void)setCandidates:(id)candidates;	// 0x300a6321
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x301169ad
// converted property setter: - (void)setCaretVisible:(BOOL)visible;	// 0x30116a15
// converted property setter: - (void)setChangeNotificationDisabled:(BOOL)disabled;	// 0x302486f5
- (void)setChanged;	// 0x30136fb9
// declared property setter: - (void)setChangedDelegate:(id)delegate;	// 0x300ba3f9
// declared property setter: - (void)setCommittingCandidate:(BOOL)candidate;	// 0x3024c4a1
// declared property setter: - (void)setCurrentUsedInputMode:(id)mode;	// 0x300ba441
- (void)setDefaultTextInputTraits:(id)traits;	// 0x30122431
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3004c895
- (void)setDelegate:(id)delegate force:(BOOL)force;	// 0x3004c8a9
- (void)setFrame:(CGRect)frame;	// 0x300a1829
// declared property setter: - (void)setGeometryDelegate:(id)delegate;	// 0x30114a51
// declared property setter: - (void)setGeometryIsChanging:(BOOL)changing;	// 0x3024c4c1
// converted property setter: - (void)setHardwareKeyboardsSeenPreference:(id)preference;	// 0x30247bb1
// declared property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x30143009
- (void)setInitialDirection;	// 0x30116a7d
// declared property setter: - (void)setInputManager:(id)manager;	// 0x300a879d
- (void)setInputMode:(id)mode;	// 0x300a5b21
- (void)setInputMode:(id)mode userInitiated:(BOOL)initiated;	// 0x300a5b35
- (void)setInputModeFromPreferences;	// 0x300a58d1
- (void)setInputModeLastChosenPreference;	// 0x302477f9
- (void)setInputModeToNextASCIICapableInPreferredList;	// 0x3024822d
- (void)setInputModeToNextInPreferredList;	// 0x30248105
- (void)setInputObject:(id)object;	// 0x302498dd
- (void)setInputPoint:(CGPoint)point;	// 0x3013a2bd
// declared property setter: - (void)setKeyboardAlertView:(id)view;	// 0x3024c46d
- (void)setLastUsedInputMode;	// 0x301450c9
// declared property setter: - (void)setLastUsedInputMode:(id)mode;	// 0x300ba41d
- (void)setLearnsCorrections:(int)corrections;	// 0x30248515
// converted property setter: - (void)setLongPress:(BOOL)press;	// 0x3024c839
- (void)setMarkedText;	// 0x30248705
- (void)setOrientationForSize:(CGSize)size;	// 0x300a1891
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x30248f1d
- (void)setPreviousInputString:(id)string;	// 0x30136d09
// declared property setter: - (void)setRecorder:(id)recorder;	// 0x300ba11d
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x3011520d
// declared property setter: - (void)setRivenSplitLock:(BOOL)lock;	// 0x30247221
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30248841
- (void)setShift:(BOOL)shift;	// 0x30136dd1
- (void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;	// 0x30136de5
// converted property setter: - (void)setShiftLocked:(BOOL)locked;	// 0x301d4bd9
- (void)setShiftLockedForced:(BOOL)forced;	// 0x30248c51
- (void)setShiftNeedsUpdate;	// 0x30136eed
- (void)setShiftOffIfNeeded;	// 0x30136d49
- (void)setShiftPreventAutoshift:(BOOL)autoshift;	// 0x30136f99
// converted property setter: - (void)setShouldChargeKeys:(BOOL)chargeKeys;	// 0x301151d9
// declared property setter: - (void)setShouldSetInputModeInNextRun:(BOOL)setInputModeInNextRun;	// 0x3024c42d
// declared property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x30117ae5
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)updateCacheOnInputModesChange;	// 0x30247b69
// declared property setter: - (void)setShowInputModeIndicator:(BOOL)indicator;	// 0x3024c40d
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x300a9ad5
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x300a9911
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x3024c8a1
- (void)setSplitProgress:(float)progress;	// 0x30247281
// declared property setter: - (void)setTypologyRecorder:(id)recorder;	// 0x300ba15d
- (void)setUsesCandidateSelection:(BOOL)selection;	// 0x3011a435
- (unsigned)shiftFlagsForInputString;	// 0x30169a35
- (BOOL)shiftLockPreference;	// 0x300a28c5
// converted property getter: - (BOOL)shiftLockedEnabled;	// 0x301d4d25
// converted property getter: - (BOOL)shouldChargeKeys;	// 0x3024b1c5
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)deletedCharacter;	// 0x301c5be1
// declared property getter: - (BOOL)shouldSetInputModeInNextRun;	// 0x3024c41d
// declared property getter: - (BOOL)shouldShowCandidateBar;	// 0x300a99cd
// declared property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x30169521
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x3024c3d9
- (BOOL)shouldSwitchInputMode:(id)mode;	// 0x30116011
- (void)showInformationalAlertIfNeededForReason:(int)reason;	// 0x30247f9d
// declared property getter: - (BOOL)showInputModeIndicator;	// 0x3024c3fd
- (void)showInternationalKeyInfoAlertIfNeeded;	// 0x302480f1
- (void)showKeyboard;	// 0x3024b79d
- (void)showNextCandidates;	// 0x30249835
// declared property getter: - (BOOL)showsCandidateBar;	// 0x300a9ced
// declared property getter: - (BOOL)showsCandidateInline;	// 0x3024c44d
- (id)sortingMethods;	// 0x3024b0a9
// declared property getter: - (BOOL)splitTransitionInProgress;	// 0x300ae661
- (void)startAutoDeleteTimer;	// 0x301c5c55
- (void)startCaretBlinkIfNeeded;	// 0x3024c259
- (void)startKeyboardRecording;	// 0x30319465
- (void)stopAutoDelete;	// 0x30114f9d
- (void)stopKeyboardRecording;	// 0x30319571
- (void)storeDelegateConformance;	// 0x30114e31
- (CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;	// 0x30113a7d
- (BOOL)suppliesCompletions;	// 0x30248c85
- (BOOL)supportsNumberKeySelection;	// 0x30248d11
- (BOOL)swipeToTabPreference;	// 0x30117aa1
- (void)takeTextInputTraitsFromDelegate;	// 0x300a1931
- (void)testAutocorrectionPromptWithCorrection:(id)correction;	// 0x3024c681
- (void)textChanged:(id)changed;	// 0x30136a79
- (void)textDidChange:(id)text;	// 0x30136a69
- (int)textInputChangingCount;	// 0x3024c671
- (id)textInputTraits;	// 0x300ab0f5
- (void)textWillChange:(id)text;	// 0x301369c1
- (void)timeElapsed:(unsigned)elapsed message:(id)message;	// 0x3013a45d
- (void)timeMark:(unsigned)mark;	// 0x3013a2d1
- (void)timeMark:(unsigned)mark message:(id)message;	// 0x3013a1dd
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x3024b0d1
- (void)toggleShift;	// 0x30248c29
- (void)touchAutoDeleteTimerWithThreshold:(double)threshold;	// 0x301c5cc9
- (void)touchAutocorrectPromptTimer;	// 0x301209c5
- (void)touchLongPressTimer;	// 0x3013a0c9
- (void)touchLongPressTimerWithDelay:(double)delay;	// 0x3013a0e1
- (BOOL)typologyEnabled;	// 0x300a9875
// declared property getter: - (id)typologyRecorder;	// 0x300a87d1
- (void)updateAutocorrectPrompt:(id)prompt;	// 0x300a65d5
- (void)updateAutocorrectPromptAction;	// 0x30126dc5
- (void)updateAutocorrectPromptDisplay:(CGRect)display;	// 0x301ce95d
- (void)updateCandidateDisplay;	// 0x300a6461
- (void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;	// 0x30249d79
- (void)updateChangeTimeAndIncrementCount;	// 0x3016994d
- (void)updateForChangedSelection;	// 0x3011605d
- (void)updateFromTextInputTraits;	// 0x3024c585
- (void)updateInputContextForDeletedText:(id)deletedText toWordRange:(id)wordRange;	// 0x302488a9
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only;	// 0x30247ecd
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only preserveIfPossible:(BOOL)possible;	// 0x30247c65
- (void)updateKeyboardEventsLagging:(GSEventRef)lagging;	// 0x30142f95
- (void)updateKeysWithDelegates;	// 0x30121ed1
- (void)updateLayout;	// 0x300a8855
- (void)updateLayoutAndSetShift;	// 0x30249109
- (void)updateLayoutIfNeeded;	// 0x30122689
- (void)updateLayoutToCurrentInterfaceOrientation;	// 0x302483d5
- (void)updateObserverState;	// 0x30136f0d
- (void)updateReturnKey;	// 0x3016af31
- (void)updateReturnKey:(BOOL)key;	// 0x3012124d
- (void)updateShiftState;	// 0x30116d31
- (void)updateTextCandidateView;	// 0x3024a109
@end
