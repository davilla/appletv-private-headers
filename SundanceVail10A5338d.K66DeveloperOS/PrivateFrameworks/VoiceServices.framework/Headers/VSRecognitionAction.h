/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSAttributedString, VSRecognitionSession, NSString;

@interface VSRecognitionAction : NSObject {
	NSString *_resultString;	// 4 = 0x4
	NSString *_statusString;	// 8 = 0x8
	union {
		NSString *stringValue;
		NSAttributedString *attributedStringValue;
	} _spokenString;	// 12 = 0xc
	VSRecognitionSession *_session;	// 16 = 0x10
	unsigned _spokenStringIsAttributed : 1;	// 20 = 0x14
}
@property(retain) id resultDisplayString;	// G=0x345c1909; S=0x345c1919; converted property
@property(retain) id spokenFeedbackAttributedString;	// G=0x345c1a69; S=0x345c1a91; converted property
@property(retain) id spokenFeedbackString;	// G=0x345c19b1; S=0x345c19e9; converted property
@property(retain) id statusDisplayString;	// G=0x345c195d; S=0x345c196d; converted property
- (void)_continueAfterDeferredStart;	// 0x345c1bbd
- (BOOL)_hasDeferredStartCallback;	// 0x345c1b95
- (id)_session;	// 0x345c1861
- (void)_setSession:(id)session;	// 0x345c1871
- (id)cancel;	// 0x345c1b61
- (void)completeWithNextAction:(id)nextAction error:(id)error;	// 0x345c1b65
- (int)completionType;	// 0x345c1b11
- (void)dealloc;	// 0x345c1881
- (id)perform;	// 0x345c1b15
// converted property getter: - (id)resultDisplayString;	// 0x345c1909
- (BOOL)sensitiveActionsEnabled;	// 0x345c1b99
// converted property setter: - (void)setResultDisplayString:(id)string;	// 0x345c1919
// converted property setter: - (void)setSpokenFeedbackAttributedString:(id)string;	// 0x345c1a91
// converted property setter: - (void)setSpokenFeedbackString:(id)string;	// 0x345c19e9
// converted property setter: - (void)setStatusDisplayString:(id)string;	// 0x345c196d
// converted property getter: - (id)spokenFeedbackAttributedString;	// 0x345c1a69
// converted property getter: - (id)spokenFeedbackString;	// 0x345c19b1
// converted property getter: - (id)statusDisplayString;	// 0x345c195d
@end

