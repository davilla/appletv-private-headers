/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMClientPropertiesResponse : PBCodable {
@private
	NSString *_new_cohort;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasNew_cohort;	// G=0x30a8ed8d; 
@property(retain, nonatomic) NSString *new_cohort;	// G=0x30a8eda1; S=0x30a8efd5; @synthesize=_new_cohort
- (id)init;	// 0x30a8edb1
- (void)dealloc;	// 0x30a8ef8d
- (id)description;	// 0x30a8eddd
// declared property getter: - (BOOL)hasNew_cohort;	// 0x30a8ed8d
// declared property getter: - (id)new_cohort;	// 0x30a8eda1
- (BOOL)readFrom:(id)from;	// 0x30a8eeb5
// declared property setter: - (void)setNew_cohort:(id)cohort;	// 0x30a8efd5
- (void)writeTo:(id)to;	// 0x30a8ee79
@end

