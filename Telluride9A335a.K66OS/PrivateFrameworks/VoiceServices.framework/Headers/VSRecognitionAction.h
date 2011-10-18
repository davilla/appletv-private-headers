/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSAttributedString, VSRecognitionSession, NSString;

@interface VSRecognitionAction : NSObject {
@private
	NSString *_resultString;	// 4 = 0x4
	NSString *_statusString;	// 8 = 0x8
	union {
		NSString *stringValue;
		NSAttributedString *attributedStringValue;
	} _spokenString;	// 12 = 0xc
	VSRecognitionSession *_session;	// 16 = 0x10
	unsigned _spokenStringIsAttributed : 1;	// 20 = 0x14
}
@property(retain) id resultDisplayString;	// G=0x305da91d; S=0x305da975; converted property
@property(retain) id spokenFeedbackAttributedString;	// G=0x305da93d; S=0x305daac9; converted property
@property(retain) id spokenFeedbackString;	// G=0x305daa05; S=0x305daa41; converted property
@property(retain) id statusDisplayString;	// G=0x305da92d; S=0x305da9bd; converted property
- (void)_continueAfterDeferredStart;	// 0x305da971
- (BOOL)_hasDeferredStartCallback;	// 0x305da96d
- (id)_session;	// 0x305da8fd
- (void)_setSession:(id)session;	// 0x305da90d
- (id)cancel;	// 0x305da969
- (void)completeWithNextAction:(id)nextAction error:(id)error;	// 0x305dab51
- (int)completionType;	// 0x305da965
- (void)dealloc;	// 0x305daba5
- (id)perform;	// 0x305dac19
// converted property getter: - (id)resultDisplayString;	// 0x305da91d
- (BOOL)sensitiveActionsEnabled;	// 0x305dab81
// converted property setter: - (void)setResultDisplayString:(id)string;	// 0x305da975
// converted property setter: - (void)setSpokenFeedbackAttributedString:(id)string;	// 0x305daac9
// converted property setter: - (void)setSpokenFeedbackString:(id)string;	// 0x305daa41
// converted property setter: - (void)setStatusDisplayString:(id)string;	// 0x305da9bd
// converted property getter: - (id)spokenFeedbackAttributedString;	// 0x305da93d
// converted property getter: - (id)spokenFeedbackString;	// 0x305daa05
// converted property getter: - (id)statusDisplayString;	// 0x305da92d
@end

