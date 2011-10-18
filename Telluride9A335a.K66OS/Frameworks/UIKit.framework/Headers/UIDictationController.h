/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, UIDictationView, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject {
@private
	UIDictationView *_view;	// 4 = 0x4
	NSArray *_availableLanguages;	// 8 = 0x8
	NSTimer *_recordingLimitTimer;	// 12 = 0xc
	void *_callCenterFrameworkFileHandle;	// 16 = 0x10
	id _callCenter;	// 20 = 0x14
	void *_facetimeCallFrameworkFileHandle;	// 24 = 0x18
	id _facetimeCallManager;	// 28 = 0x1c
	BOOL _disabledDueToTelephonyActivity;	// 32 = 0x20
}
@property(readonly, assign) BOOL disabledDueToTelephonyActivity;	// G=0x33d0dfa9; converted property
@property(assign) int state;	// G=0x33d0dcc9; S=0x33d0dacd; converted property
@property(retain, nonatomic) UIDictationView *view;	// G=0x33d0e6b9; S=0x33d0e6c9; @synthesize=_view
+ (id)activeInstance;	// 0x33d0b2cd
+ (void)applicationDidBecomeActive;	// 0x33d0bf45
+ (void)applicationDidChangeStatusBarFrame;	// 0x33d0bfdd
+ (void)applicationWillResignActive;	// 0x33d0bf7d
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x33d0cc61
+ (void)disableGestureHandler;	// 0x33d0b9c5
+ (void)enableGestureHandlerIfNecessary;	// 0x33d0bbe5
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x33d0b469
+ (id)inputModeNameForDictation;	// 0x33d0b45d
+ (BOOL)isRunning;	// 0x33d0b445
+ (void)keyboardDidSetDelegate;	// 0x33d0bed5
+ (void)keyboardDidSetInputMode;	// 0x33d0be9d
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x33d0bf0d
+ (void)logCorrectionStatistics;	// 0x33d0b5e9
+ (void)preheatIfNecessary;	// 0x33d0b365
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x33d0cdd1
+ (id)serializedDictationPhrases:(id)phrases;	// 0x33d0cc41
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard;	// 0x33d0c1b5
+ (id)serializedInterpretationFromTokens:(id)tokens;	// 0x33d0c069
+ (id)sharedInstance;	// 0x33d0b2dd
+ (BOOL)shouldEnableGestureHandler;	// 0x33d0bd69
+ (void)willEndEditingInTextView:(id)textView;	// 0x33d0be3d
- (id)init;	// 0x33d0af5d
- (id)_connection;	// 0x33d0b355
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x33d0d091
- (float)audioLevel;	// 0x33d0d279
- (void)cancelDictation;	// 0x33d0e2a9
- (void)cancelRecordingLimitTimer;	// 0x33d0dde9
- (void)dealloc;	// 0x33d0dcd9
- (void)dictationConnection:(id)connection didRecognizeSpeechPhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x33d0e40d
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x33d0e651
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x33d0e5e9
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x33d0e599
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x33d0e5c5
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x33d0e5a1
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x33d0e575
- (BOOL)dictationEnabled;	// 0x33d0deb5
- (void)disableAutorotation;	// 0x33d0ba89
// converted property getter: - (BOOL)disabledDueToTelephonyActivity;	// 0x33d0dfa9
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x33d0d301
- (id)inputModeThatInvokedDictation;	// 0x33d0d205
- (float)normalizedAudioLevel;	// 0x33d0d295
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x33d0d559
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x33d0d3f9
- (void)proximityStateChanged:(id)changed;	// 0x33d0bac1
- (void)reenableAutorotation;	// 0x33d0ba1d
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x33d0d6b9
// converted property setter: - (void)setState:(int)state;	// 0x33d0dacd
// declared property setter: - (void)setView:(id)view;	// 0x33d0e6c9
- (void)showDialogForError:(id)error;	// 0x33d0e3a9
- (void)startConnection;	// 0x33d0d7d1
- (void)startDictation;	// 0x33d0dfb9
- (void)startRecordingLimitTimer;	// 0x33d0de31
// converted property getter: - (int)state;	// 0x33d0dcc9
- (void)stopDictation;	// 0x33d0e329
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x33d0d0d1
// declared property getter: - (id)view;	// 0x33d0e6b9
@end

