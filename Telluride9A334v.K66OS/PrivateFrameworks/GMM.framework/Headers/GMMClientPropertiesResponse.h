/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMClientPropertiesResponse : PBCodable {
	NSString *_replacementCohort;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasReplacementCohort;	// G=0x35ba6dd9; 
@property(retain, nonatomic) NSString *replacementCohort;	// G=0x35ba6fbd; S=0x35ba6fcd; @synthesize=_replacementCohort
- (void)dealloc;	// 0x35ba6d95
- (id)description;	// 0x35ba6df1
- (id)dictionaryRepresentation;	// 0x35ba6e61
// declared property getter: - (BOOL)hasReplacementCohort;	// 0x35ba6dd9
- (BOOL)readFrom:(id)from;	// 0x35ba6eb5
// declared property getter: - (id)replacementCohort;	// 0x35ba6fbd
// declared property setter: - (void)setReplacementCohort:(id)cohort;	// 0x35ba6fcd
- (void)writeTo:(id)to;	// 0x35ba6f8d
@end

