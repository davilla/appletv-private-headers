/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderTeamRecord : NSObject {
@private
	NSString *teamAbbrev;	// 4 = 0x4
	int wins;	// 8 = 0x8
	int losses;	// 12 = 0xc
	int confSeed;	// 16 = 0x10
	NSString *confRecord;	// 20 = 0x14
	NSString *divRecord;	// 24 = 0x18
	NSString *last10Record;	// 28 = 0x1c
	NSString *currentStreak;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *confRecord;	// G=0x3371220d; S=0x337125ed; @synthesize
@property(assign, nonatomic) int confSeed;	// G=0x3371221d; S=0x3371222d; @synthesize
@property(retain, nonatomic) NSString *currentStreak;	// G=0x337121dd; S=0x33712665; @synthesize
@property(retain, nonatomic) NSString *divRecord;	// G=0x337121fd; S=0x33712615; @synthesize
@property(retain, nonatomic) NSString *last10Record;	// G=0x337121ed; S=0x3371263d; @synthesize
@property(assign, nonatomic) int losses;	// G=0x3371223d; S=0x3371224d; @synthesize
@property(retain, nonatomic) NSString *teamAbbrev;	// G=0x3371227d; S=0x337125c5; @synthesize
@property(readonly, assign, nonatomic) NSString *winPercentage;	// G=0x3371242d; 
@property(assign, nonatomic) int wins;	// G=0x3371225d; S=0x3371226d; @synthesize
// declared property getter: - (id)confRecord;	// 0x3371220d
// declared property getter: - (int)confSeed;	// 0x3371221d
- (id)createStandingsRowRelativeToFirstPlace:(id)firstPlace;	// 0x337122d1
// declared property getter: - (id)currentStreak;	// 0x337121dd
- (void)dealloc;	// 0x33712535
// declared property getter: - (id)divRecord;	// 0x337121fd
- (id)gamesBehind:(id)behind;	// 0x33712499
// declared property getter: - (id)last10Record;	// 0x337121ed
// declared property getter: - (int)losses;	// 0x3371223d
// declared property setter: - (void)setConfRecord:(id)record;	// 0x337125ed
// declared property setter: - (void)setConfSeed:(int)seed;	// 0x3371222d
// declared property setter: - (void)setCurrentStreak:(id)streak;	// 0x33712665
// declared property setter: - (void)setDivRecord:(id)record;	// 0x33712615
// declared property setter: - (void)setLast10Record:(id)record;	// 0x3371263d
// declared property setter: - (void)setLosses:(int)losses;	// 0x3371224d
// declared property setter: - (void)setTeamAbbrev:(id)abbrev;	// 0x337125c5
// declared property setter: - (void)setWins:(int)wins;	// 0x3371226d
// declared property getter: - (id)teamAbbrev;	// 0x3371227d
// declared property getter: - (id)winPercentage;	// 0x3371242d
// declared property getter: - (int)wins;	// 0x3371225d
@end
