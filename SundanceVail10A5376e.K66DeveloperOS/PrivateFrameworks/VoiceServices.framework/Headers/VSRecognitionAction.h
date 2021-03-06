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
@property(retain) id resultDisplayString;	// G=0x32109849; S=0x32109859; converted property
@property(retain) id spokenFeedbackAttributedString;	// G=0x321099a9; S=0x321099d1; converted property
@property(retain) id spokenFeedbackString;	// G=0x321098f1; S=0x32109929; converted property
@property(retain) id statusDisplayString;	// G=0x3210989d; S=0x321098ad; converted property
- (void)_continueAfterDeferredStart;	// 0x32109afd
- (BOOL)_hasDeferredStartCallback;	// 0x32109ad5
- (id)_session;	// 0x321097a1
- (void)_setSession:(id)session;	// 0x321097b1
- (id)cancel;	// 0x32109aa1
- (void)completeWithNextAction:(id)nextAction error:(id)error;	// 0x32109aa5
- (int)completionType;	// 0x32109a51
- (void)dealloc;	// 0x321097c1
- (id)perform;	// 0x32109a55
// converted property getter: - (id)resultDisplayString;	// 0x32109849
- (BOOL)sensitiveActionsEnabled;	// 0x32109ad9
// converted property setter: - (void)setResultDisplayString:(id)string;	// 0x32109859
// converted property setter: - (void)setSpokenFeedbackAttributedString:(id)string;	// 0x321099d1
// converted property setter: - (void)setSpokenFeedbackString:(id)string;	// 0x32109929
// converted property setter: - (void)setStatusDisplayString:(id)string;	// 0x321098ad
// converted property getter: - (id)spokenFeedbackAttributedString;	// 0x321099a9
// converted property getter: - (id)spokenFeedbackString;	// 0x321098f1
// converted property getter: - (id)statusDisplayString;	// 0x3210989d
@end

