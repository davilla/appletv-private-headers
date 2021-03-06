/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionRecognizeAction.h"

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
	NSString *_repeatedSpokenFeedbackString;	// 60 = 0x3c
	NSString *_sequenceTag;	// 64 = 0x40
	NSMutableDictionary *_knownValues;	// 68 = 0x44
	NSMutableDictionary *_knownPhoneticValues;	// 72 = 0x48
	NSMutableDictionary *_ambiguousValues;	// 76 = 0x4c
	NSMutableDictionary *_ambiguousPhoneticValues;	// 80 = 0x50
	void *_context;	// 84 = 0x54
}
@property(retain) NSString *repeatedSpokenFeedbackString;	// G=0x33f38365; S=0x33f38911; converted property
@property(retain) NSString *sequenceTag;	// G=0x33f38375; S=0x33f388d5; converted property
- (id)_actionForEmptyResults;	// 0x33f38389
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x33f38c6d
- (VSRecognitionDisambiguationContextRef)_disambiguationContext;	// 0x33f38b59
- (BOOL)_keywordIndexChanged;	// 0x33f38385
- (id)_keywords;	// 0x33f38a01
- (id)ambiguousValuesForClassIdentifier:(id)classIdentifier;	// 0x33f38579
- (int)completionType;	// 0x33f38361
- (void)dealloc;	// 0x33f3894d
- (id)knownValueForClassIdentifier:(id)classIdentifier;	// 0x33f3886d
- (id)knownValuesForClassIdentifier:(id)classIdentifier;	// 0x33f386c9
// converted property getter: - (id)repeatedSpokenFeedbackString;	// 0x33f38365
// converted property getter: - (id)sequenceTag;	// 0x33f38375
- (void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x33f3845d
- (void)setKeywords:(id)keywords;	// 0x33f383d1
- (void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;	// 0x33f3873d
- (void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x33f38599
// converted property setter: - (void)setRepeatedSpokenFeedbackString:(id)string;	// 0x33f38911
// converted property setter: - (void)setSequenceTag:(id)tag;	// 0x33f388d5
@end

