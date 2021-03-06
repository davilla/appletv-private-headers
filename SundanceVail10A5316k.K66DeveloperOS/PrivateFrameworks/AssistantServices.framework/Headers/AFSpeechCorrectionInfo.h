/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library


@interface AFSpeechCorrectionInfo : NSObject {
@private
	int _alternativeSelectionCount;	// 4 = 0x4
	int _characterModificationCount;	// 8 = 0x8
}
@property(assign, nonatomic) int alternativeSelectionCount;	// G=0x345b243d; S=0x345b244d; @synthesize=_alternativeSelectionCount
@property(assign, nonatomic) int characterModificationCount;	// G=0x345b245d; S=0x345b246d; @synthesize=_characterModificationCount
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x345b2365
// declared property getter: - (int)alternativeSelectionCount;	// 0x345b243d
// declared property getter: - (int)characterModificationCount;	// 0x345b245d
- (id)dkPlistRepresentation;	// 0x345b228d
// declared property setter: - (void)setAlternativeSelectionCount:(int)count;	// 0x345b244d
// declared property setter: - (void)setCharacterModificationCount:(int)count;	// 0x345b246d
@end

