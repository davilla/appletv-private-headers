/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


__attribute__((visibility("hidden")))
@interface WebVisiblePosition : NSObject {
@private
	WebObjectInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) int affinity;	// G=0x3539deb9; S=0x3539bfc1; 
+ (id)_wrapVisiblePosition:(VisiblePosition)position;	// 0x3539be9d
+ (id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;	// 0x3539e6b9
- (VisiblePosition)_visiblePosition;	// 0x3539c0f1
// declared property getter: - (int)affinity;	// 0x3539deb9
- (BOOL)atAlphaNumericBoundaryInDirection:(int)direction;	// 0x353edc29
- (BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x353f0b3d
- (int)compare:(id)compare;	// 0x3539eddd
- (void)dealloc;	// 0x3539e9ed
- (id)description;	// 0x353f0fc9
- (BOOL)directionIsDownstream:(int)downstream;	// 0x3539de7d
- (int)distanceFromPosition:(id)position;	// 0x353f117d
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)dictationPhraseAlternatives;	// 0x353ed769
- (id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x3539c25d
- (BOOL)isEditable;	// 0x353edef9
- (BOOL)isEqual:(id)equal;	// 0x353f14b9
- (id)nextCharacterBoundaryInDirection:(int)direction;	// 0x353f0901
- (id)nextDocumentBoundaryInDirection:(int)direction;	// 0x353eeb55
- (id)nextLineBoundaryInDirection:(int)direction;	// 0x353ef2d9
- (id)nextParagraphBoundaryInDirection:(int)direction;	// 0x353eed9d
- (id)nextSentenceBoundaryInDirection:(int)direction;	// 0x353ef7c5
- (id)nextWordBoundaryInDirection:(int)direction;	// 0x353efc45
- (id)positionAtStartOrEndOfWord;	// 0x353ee081
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;	// 0x3539def5
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;	// 0x3539df19
- (id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x353ed685
- (BOOL)requiresContextForWordBoundary;	// 0x353edddd
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x3539bfc1
- (int)textDirection;	// 0x353ed681
- (BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x3539d329
@end

