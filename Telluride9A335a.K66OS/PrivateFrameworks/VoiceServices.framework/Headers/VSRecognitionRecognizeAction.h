/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionAction.h"

@class NSString, NSAttributedString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
	NSString *_modelIdentifier;	// 24 = 0x18
	NSArray *_keywords;	// 28 = 0x1c
	void *_recognition;	// 32 = 0x20
	NSArray *_results;	// 36 = 0x24
	NSString *_debugDumpPath;	// 40 = 0x28
	NSString *_audioInputPath;	// 44 = 0x2c
	double _levelInterval;	// 48 = 0x30
	struct {
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned resetEngine : 1;
		unsigned bluetoothAllowed : 1;
		unsigned hasStarted : 1;
	} _recognizeFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *modelIdentifier;	// G=0x305db671; converted property
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x305db709
- (id)_actionForEmptyResults;	// 0x305db6dd
- (void)_configureNewRecognitionInstance;	// 0x305dc12d
- (void)_continueAfterDeferredStart;	// 0x305db929
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x305dc255
- (id)_debugDumpPath;	// 0x305db6cd
- (void)_handleRecognitionCompleted:(VSRecognitionRef)completed withResults:(CFArrayRef)results error:(CFErrorRef)error;	// 0x305dbb69
- (void)_handleRecognitionPrepared:(VSRecognitionRef)prepared;	// 0x305db981
- (void)_handleRecognitionStarted:(VSRecognitionRef)started;	// 0x305db6e1
- (void)_handledThreadedResults:(id)results nextAction:(id)action;	// 0x305db9e1
- (BOOL)_hasDeferredStartCallback;	// 0x305db681
- (float)_inputLevel;	// 0x305dc4cd
- (BOOL)_isActivelyRecognizing;	// 0x305dc55d
- (BOOL)_isRecognizing;	// 0x305dc585
- (id)_keywordAtIndex:(int)index;	// 0x305db7dd
- (int)_keywordCount;	// 0x305db825
- (BOOL)_keywordIndexChanged;	// 0x305db84d
- (id)_keywords;	// 0x305db749
- (void)_releaseFromPrepare;	// 0x305dbfad
- (void)_reset;	// 0x305dba29
- (BOOL)_setAudioInputPath:(id)path;	// 0x305dc2e9
- (BOOL)_setBluetoothInputAllowed:(BOOL)allowed;	// 0x305db685
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled;	// 0x305db881
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled dumpPath:(id)path;	// 0x305dc3c1
- (BOOL)_setDebugDumpPath:(id)path;	// 0x305db899
- (BOOL)_setEngineResetRequired:(BOOL)required;	// 0x305dc289
- (BOOL)_setInputLevelUpdateInterval:(double)interval;	// 0x305dc511
- (BOOL)_setPreferredEngine:(int)engine;	// 0x305dc361
- (void)_setResults:(id)results;	// 0x305db939
- (id)cancel;	// 0x305dc001
- (int)completionType;	// 0x305db66d
- (void)dealloc;	// 0x305dbaa5
// converted property getter: - (id)modelIdentifier;	// 0x305db671
- (id)perform;	// 0x305dc05d
@end

