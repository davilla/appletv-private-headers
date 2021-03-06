/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VSRecognitionRecognizeAction.h"

@class NSString, NSAttributedString;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
	VSRecognitionAction *_confirmedAction;	// 60 = 0x3c
	VSRecognitionAction *_deniedAction;	// 64 = 0x40
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	} _confirmFlags;	// 68 = 0x44
}
@property(retain) VSRecognitionAction *confirmedAction;	// G=0x30d6a765; S=0x30d6a721; converted property
@property(retain) VSRecognitionAction *deniedAction;	// G=0x30d6a7b9; S=0x30d6a775; converted property
- (id)init;	// 0x30d6a569
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x30d6a5e5
- (void)_setConfirmed:(BOOL)confirmed;	// 0x30d6a701
- (int)completionType;	// 0x30d6a69d
// converted property getter: - (id)confirmedAction;	// 0x30d6a765
- (void)dealloc;	// 0x30d6a639
// converted property getter: - (id)deniedAction;	// 0x30d6a7b9
// converted property setter: - (void)setConfirmedAction:(id)action;	// 0x30d6a721
// converted property setter: - (void)setDeniedAction:(id)action;	// 0x30d6a775
@end

