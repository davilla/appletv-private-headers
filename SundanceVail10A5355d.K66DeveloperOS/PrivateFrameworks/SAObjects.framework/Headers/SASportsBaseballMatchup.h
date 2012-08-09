/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsMatchup.h"

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup {
}
@property(copy, nonatomic) NSNumber *awayErrors;	// G=0x36638a91; S=0x36638aad; 
@property(copy, nonatomic) NSNumber *awayHits;	// G=0x36638afd; S=0x36638b19; 
@property(copy, nonatomic) NSNumber *balls;	// G=0x36638b69; S=0x36638b85; 
@property(copy, nonatomic) NSNumber *homeErrors;	// G=0x36638bd5; S=0x36638bf1; 
@property(copy, nonatomic) NSNumber *homeHits;	// G=0x36638c41; S=0x36638c5d; 
@property(copy, nonatomic) NSString *inningStatus;	// G=0x36638cad; S=0x36638cc9; 
@property(copy, nonatomic) NSNumber *onFirst;	// G=0x36638d19; S=0x36638d35; 
@property(copy, nonatomic) NSNumber *onSecond;	// G=0x36638d85; S=0x36638da1; 
@property(copy, nonatomic) NSNumber *onThird;	// G=0x36638df1; S=0x36638e0d; 
@property(copy, nonatomic) NSNumber *outs;	// G=0x36638e5d; S=0x36638e79; 
@property(copy, nonatomic) NSNumber *strikes;	// G=0x36638ec9; S=0x36638ee5; 
+ (id)baseballMatchup;	// 0x36638a01
+ (id)baseballMatchupWithDictionary:(id)dictionary context:(id)context;	// 0x36638a45
// declared property getter: - (id)awayErrors;	// 0x36638a91
// declared property getter: - (id)awayHits;	// 0x36638afd
// declared property getter: - (id)balls;	// 0x36638b69
- (id)encodedClassName;	// 0x366389f5
- (id)groupIdentifier;	// 0x366389e5
// declared property getter: - (id)homeErrors;	// 0x36638bd5
// declared property getter: - (id)homeHits;	// 0x36638c41
// declared property getter: - (id)inningStatus;	// 0x36638cad
// declared property getter: - (id)onFirst;	// 0x36638d19
// declared property getter: - (id)onSecond;	// 0x36638d85
// declared property getter: - (id)onThird;	// 0x36638df1
// declared property getter: - (id)outs;	// 0x36638e5d
// declared property setter: - (void)setAwayErrors:(id)errors;	// 0x36638aad
// declared property setter: - (void)setAwayHits:(id)hits;	// 0x36638b19
// declared property setter: - (void)setBalls:(id)balls;	// 0x36638b85
// declared property setter: - (void)setHomeErrors:(id)errors;	// 0x36638bf1
// declared property setter: - (void)setHomeHits:(id)hits;	// 0x36638c5d
// declared property setter: - (void)setInningStatus:(id)status;	// 0x36638cc9
// declared property setter: - (void)setOnFirst:(id)first;	// 0x36638d35
// declared property setter: - (void)setOnSecond:(id)second;	// 0x36638da1
// declared property setter: - (void)setOnThird:(id)third;	// 0x36638e0d
// declared property setter: - (void)setOuts:(id)outs;	// 0x36638e79
// declared property setter: - (void)setStrikes:(id)strikes;	// 0x36638ee5
// declared property getter: - (id)strikes;	// 0x36638ec9
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x36638f35
@end
