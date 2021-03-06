/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "AFDictationDelegate.h"

@class NSArray, NSTimer, AFDictationConnection, UIAlertView, AFDictationOptions;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate> {
@private
	AFDictationConnection *_connection;	// 4 = 0x4
	AFDictationOptions *_options;	// 8 = 0x8
	NSArray *_availableLanguages;	// 12 = 0xc
	NSTimer *_recordingLimitTimer;	// 16 = 0x10
	void *_callCenterFrameworkFileHandle;	// 20 = 0x14
	id _callCenter;	// 24 = 0x18
	void *_facetimeCallFrameworkFileHandle;	// 28 = 0x1c
	id _facetimeCallManager;	// 32 = 0x20
	BOOL _wasDisabledDueToTelephonyActivity;	// 36 = 0x24
	UIAlertView *_dictationAvailableSoonAlert;	// 40 = 0x28
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;	// 44 = 0x2c
	BOOL dictationStartedFromGesture;	// 45 = 0x2d
}
@property(readonly, retain) AFDictationConnection *connection;	// G=0x30417829; converted property
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// G=0x30418a29; S=0x30418a39; @synthesize
@property(assign) int state;	// G=0x3041756d; S=0x304172c5; converted property
@property(readonly, assign) BOOL wasDisabledDueToTelephonyActivity;	// G=0x304179f1; converted property
+ (id)activeInstance;	// 0x30413d0d
+ (void)applicationDidBecomeActive;	// 0x30415501
+ (void)applicationDidChangeStatusBarFrame;	// 0x304155b9
+ (void)applicationWillResignActive;	// 0x30415539
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x3041628d
+ (BOOL)dictationIsFunctional;	// 0x30414931
+ (void)disableGestureHandler;	// 0x30414e41
+ (void)enableGestureHandlerIfNecessary;	// 0x3041512d
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x30414765
+ (id)inputModeNameForDictation;	// 0x30413da1
+ (BOOL)isRunning;	// 0x30413d8d
+ (void)keyboardDidSetDelegate;	// 0x30415491
+ (void)keyboardDidSetInputMode;	// 0x30415459
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x304154c9
+ (void)logCorrectionStatistics;	// 0x304149a1
+ (void)networkReachableCallback;	// 0x30415661
+ (BOOL)openAssistantFrameworkIfNecessary;	// 0x30413741
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x30416419
+ (id)serializedDictationPhrases:(id)phrases;	// 0x30416251
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard;	// 0x304157e1
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard;	// 0x30413dad
+ (id)serializedInterpretationFromTokens:(id)tokens;	// 0x304156a1
+ (BOOL)setupForOpeningConnections;	// 0x304137ed
+ (BOOL)setupForPhraseSerialization;	// 0x30413791
+ (id)sharedInstance;	// 0x30413d1d
+ (BOOL)shouldEnableGestureHandler;	// 0x304152d9
+ (void)updateLandingView;	// 0x304166a1
+ (void)willEndEditingInTextView:(id)textView;	// 0x304153f9
- (id)init;	// 0x30413865
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x304166f5
- (float)audioLevel;	// 0x304168fd
- (void)cancelDictation;	// 0x30417d59
- (void)cancelRecordingLimitTimer;	// 0x30417759
// converted property getter: - (id)connection;	// 0x30417829
- (id)connectionForStatisticsLogging;	// 0x30417901
- (void)dealloc;	// 0x3041757d
- (void)delayedTelephonyCheckingSetup;	// 0x30413bd5
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x304180c5
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x304187e9
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x30418679
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x304185b9
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x3041861d
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x304185c1
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x30418595
- (BOOL)dictationEnabled;	// 0x30417931
- (id)dictationPhraseArrayFromDictationResult:(id)dictationResult;	// 0x30417f0d
// declared property getter: - (BOOL)dictationStartedFromGesture;	// 0x30418a29
- (void)disableAutorotation;	// 0x30414f05
- (BOOL)disabledDueToTelephonyActivity;	// 0x30413b55
- (void)enableProximity;	// 0x30415085
- (void)errorAnimationDidFinish;	// 0x30417531
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x30416995
- (id)inputModeThatInvokedDictation;	// 0x30416865
- (float)normalizedAudioLevel;	// 0x30416925
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x30416c09
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x30416a9d
- (void)proximityStateChanged:(id)changed;	// 0x30414f3d
- (void)reenableAutorotation;	// 0x30414e99
- (void)releaseConnection;	// 0x3041788d
- (void)releaseConnectionAfterDictationRequest;	// 0x304178cd
- (void)releaseConnectionAfterStatisticsLogging;	// 0x304178dd
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x30416d75
// declared property setter: - (void)setDictationStartedFromGesture:(BOOL)gesture;	// 0x30418a39
// converted property setter: - (void)setState:(int)state;	// 0x304172c5
- (void)setupConnectionOptions;	// 0x30416e61
- (void)setupForDictationStart;	// 0x30417a01
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30417241
- (void)startConnectionForReason:(int)reason;	// 0x30417129
- (void)startDictation;	// 0x30417cb5
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30417cc9
- (void)startDictationForReason:(int)reason;	// 0x30417c81
- (void)startRecordingLimitTimer;	// 0x304177a1
// converted property getter: - (int)state;	// 0x3041756d
- (void)stopDictation;	// 0x30417de1
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x30416731
// converted property getter: - (BOOL)wasDisabledDueToTelephonyActivity;	// 0x304179f1
@end

