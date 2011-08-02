/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVThunderXMLParser.h"

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewParser : NSObject <ATVThunderXMLParser> {
@private
	BOOL homeSection;	// 4 = 0x4
	int currentPeriod;	// 8 = 0x8
	NSString *_gameState;	// 12 = 0xc
	NSString *_gameStartTime;	// 16 = 0x10
	NSString *_gamePeriod;	// 20 = 0x14
	NSString *_gameClock;	// 24 = 0x18
	NSString *_courtURL;	// 28 = 0x1c
	NSString *_courtFrameURL;	// 32 = 0x20
	NSString *_homeTeamAbbrev;	// 36 = 0x24
	NSString *_homeTeamName;	// 40 = 0x28
	NSString *_homeTeamScore;	// 44 = 0x2c
	NSString *_homeTeamLogoURL;	// 48 = 0x30
	NSString *_homeQ1;	// 52 = 0x34
	NSString *_homeQ2;	// 56 = 0x38
	NSString *_homeQ3;	// 60 = 0x3c
	NSString *_homeQ4;	// 64 = 0x40
	NSString *_homeOT1;	// 68 = 0x44
	NSString *_homeOT2;	// 72 = 0x48
	NSString *_homeOT3;	// 76 = 0x4c
	NSString *_homeOT4;	// 80 = 0x50
	NSString *_homeFgPerc;	// 84 = 0x54
	NSString *_homeTimeouts;	// 88 = 0x58
	NSMutableArray *_homePlayers;	// 92 = 0x5c
	NSString *_awayTeamAbbrev;	// 96 = 0x60
	NSString *_awayTeamName;	// 100 = 0x64
	NSString *_awayTeamScore;	// 104 = 0x68
	NSString *_awayTeamLogoURL;	// 108 = 0x6c
	NSString *_awayQ1;	// 112 = 0x70
	NSString *_awayQ2;	// 116 = 0x74
	NSString *_awayQ3;	// 120 = 0x78
	NSString *_awayQ4;	// 124 = 0x7c
	NSString *_awayOT1;	// 128 = 0x80
	NSString *_awayOT2;	// 132 = 0x84
	NSString *_awayOT3;	// 136 = 0x88
	NSString *_awayOT4;	// 140 = 0x8c
	NSString *_awayFgPerc;	// 144 = 0x90
	NSString *_awayTimeouts;	// 148 = 0x94
	NSMutableArray *_awayPlayers;	// 152 = 0x98
}
@property(copy, nonatomic) NSString *awayFgPerc;	// G=0x306dbb99; S=0x306ddaf1; @synthesize=_awayFgPerc
@property(copy, nonatomic) NSString *awayOT1;	// G=0x306dbbd9; S=0x306dda41; @synthesize=_awayOT1
@property(copy, nonatomic) NSString *awayOT2;	// G=0x306dbbc9; S=0x306dda6d; @synthesize=_awayOT2
@property(copy, nonatomic) NSString *awayOT3;	// G=0x306dbbb9; S=0x306dda99; @synthesize=_awayOT3
@property(copy, nonatomic) NSString *awayOT4;	// G=0x306dbba9; S=0x306ddac5; @synthesize=_awayOT4
@property(retain, nonatomic) NSMutableArray *awayPlayers;	// G=0x306dbb79; S=0x306ddb49; @synthesize=_awayPlayers
@property(copy, nonatomic) NSString *awayQ1;	// G=0x306dbc19; S=0x306dd991; @synthesize=_awayQ1
@property(copy, nonatomic) NSString *awayQ2;	// G=0x306dbc09; S=0x306dd9bd; @synthesize=_awayQ2
@property(copy, nonatomic) NSString *awayQ3;	// G=0x306dbbf9; S=0x306dd9e9; @synthesize=_awayQ3
@property(copy, nonatomic) NSString *awayQ4;	// G=0x306dbbe9; S=0x306dda15; @synthesize=_awayQ4
@property(copy, nonatomic) NSString *awayTeamAbbrev;	// G=0x306dbc59; S=0x306dd8e1; @synthesize=_awayTeamAbbrev
@property(copy, nonatomic) NSString *awayTeamLogoURL;	// G=0x306dbc29; S=0x306dd965; @synthesize=_awayTeamLogoURL
@property(copy, nonatomic) NSString *awayTeamName;	// G=0x306dbc49; S=0x306dd90d; @synthesize=_awayTeamName
@property(copy, nonatomic) NSString *awayTeamScore;	// G=0x306dbc39; S=0x306dd939; @synthesize=_awayTeamScore
@property(copy, nonatomic) NSString *awayTimeouts;	// G=0x306dbb89; S=0x306ddb1d; @synthesize=_awayTimeouts
@property(copy, nonatomic) NSString *courtFrameURL;	// G=0x306dbd59; S=0x306dd625; @synthesize=_courtFrameURL
@property(copy, nonatomic) NSString *courtURL;	// G=0x306dbd69; S=0x306dd5f9; @synthesize=_courtURL
@property(copy, nonatomic) NSString *gameClock;	// G=0x306dbd79; S=0x306dd5cd; @synthesize=_gameClock
@property(copy, nonatomic) NSString *gamePeriod;	// G=0x306dbd89; S=0x306dd5a1; @synthesize=_gamePeriod
@property(copy, nonatomic) NSString *gameStartTime;	// G=0x306dbd99; S=0x306dd575; @synthesize=_gameStartTime
@property(copy, nonatomic) NSString *gameState;	// G=0x306dbda9; S=0x306dd549; @synthesize=_gameState
@property(copy, nonatomic) NSString *homeFgPerc;	// G=0x306dbc89; S=0x306dd861; @synthesize=_homeFgPerc
@property(copy, nonatomic) NSString *homeOT1;	// G=0x306dbcc9; S=0x306dd7b1; @synthesize=_homeOT1
@property(copy, nonatomic) NSString *homeOT2;	// G=0x306dbcb9; S=0x306dd7dd; @synthesize=_homeOT2
@property(copy, nonatomic) NSString *homeOT3;	// G=0x306dbca9; S=0x306dd809; @synthesize=_homeOT3
@property(copy, nonatomic) NSString *homeOT4;	// G=0x306dbc99; S=0x306dd835; @synthesize=_homeOT4
@property(retain, nonatomic) NSMutableArray *homePlayers;	// G=0x306dbc69; S=0x306dd8b9; @synthesize=_homePlayers
@property(copy, nonatomic) NSString *homeQ1;	// G=0x306dbd09; S=0x306dd701; @synthesize=_homeQ1
@property(copy, nonatomic) NSString *homeQ2;	// G=0x306dbcf9; S=0x306dd72d; @synthesize=_homeQ2
@property(copy, nonatomic) NSString *homeQ3;	// G=0x306dbce9; S=0x306dd759; @synthesize=_homeQ3
@property(copy, nonatomic) NSString *homeQ4;	// G=0x306dbcd9; S=0x306dd785; @synthesize=_homeQ4
@property(copy, nonatomic) NSString *homeTeamAbbrev;	// G=0x306dbd49; S=0x306dd651; @synthesize=_homeTeamAbbrev
@property(copy, nonatomic) NSString *homeTeamLogoURL;	// G=0x306dbd19; S=0x306dd6d5; @synthesize=_homeTeamLogoURL
@property(copy, nonatomic) NSString *homeTeamName;	// G=0x306dbd39; S=0x306dd67d; @synthesize=_homeTeamName
@property(copy, nonatomic) NSString *homeTeamScore;	// G=0x306dbd29; S=0x306dd6a9; @synthesize=_homeTeamScore
@property(copy, nonatomic) NSString *homeTimeouts;	// G=0x306dbc79; S=0x306dd88d; @synthesize=_homeTimeouts
- (id)init;	// 0x306dd4a9
// declared property getter: - (id)awayFgPerc;	// 0x306dbb99
// declared property getter: - (id)awayOT1;	// 0x306dbbd9
// declared property getter: - (id)awayOT2;	// 0x306dbbc9
// declared property getter: - (id)awayOT3;	// 0x306dbbb9
// declared property getter: - (id)awayOT4;	// 0x306dbba9
// declared property getter: - (id)awayPlayers;	// 0x306dbb79
// declared property getter: - (id)awayQ1;	// 0x306dbc19
// declared property getter: - (id)awayQ2;	// 0x306dbc09
// declared property getter: - (id)awayQ3;	// 0x306dbbf9
// declared property getter: - (id)awayQ4;	// 0x306dbbe9
// declared property getter: - (id)awayTeamAbbrev;	// 0x306dbc59
// declared property getter: - (id)awayTeamLogoURL;	// 0x306dbc29
// declared property getter: - (id)awayTeamName;	// 0x306dbc49
// declared property getter: - (id)awayTeamScore;	// 0x306dbc39
// declared property getter: - (id)awayTimeouts;	// 0x306dbb89
// declared property getter: - (id)courtFrameURL;	// 0x306dbd59
// declared property getter: - (id)courtURL;	// 0x306dbd69
- (id)createStorePage;	// 0x306dc7f5
- (id)createStorePageForError:(int)error;	// 0x306dbb75
- (void)dealloc;	// 0x306dd1e9
// declared property getter: - (id)gameClock;	// 0x306dbd79
// declared property getter: - (id)gamePeriod;	// 0x306dbd89
// declared property getter: - (id)gameStartTime;	// 0x306dbd99
// declared property getter: - (id)gameState;	// 0x306dbda9
// declared property getter: - (id)homeFgPerc;	// 0x306dbc89
// declared property getter: - (id)homeOT1;	// 0x306dbcc9
// declared property getter: - (id)homeOT2;	// 0x306dbcb9
// declared property getter: - (id)homeOT3;	// 0x306dbca9
// declared property getter: - (id)homeOT4;	// 0x306dbc99
// declared property getter: - (id)homePlayers;	// 0x306dbc69
// declared property getter: - (id)homeQ1;	// 0x306dbd09
// declared property getter: - (id)homeQ2;	// 0x306dbcf9
// declared property getter: - (id)homeQ3;	// 0x306dbce9
// declared property getter: - (id)homeQ4;	// 0x306dbcd9
// declared property getter: - (id)homeTeamAbbrev;	// 0x306dbd49
// declared property getter: - (id)homeTeamLogoURL;	// 0x306dbd19
// declared property getter: - (id)homeTeamName;	// 0x306dbd39
// declared property getter: - (id)homeTeamScore;	// 0x306dbd29
// declared property getter: - (id)homeTimeouts;	// 0x306dbc79
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x306dbdb9
// declared property setter: - (void)setAwayFgPerc:(id)perc;	// 0x306ddaf1
// declared property setter: - (void)setAwayOT1:(id)a1;	// 0x306dda41
// declared property setter: - (void)setAwayOT2:(id)a2;	// 0x306dda6d
// declared property setter: - (void)setAwayOT3:(id)a3;	// 0x306dda99
// declared property setter: - (void)setAwayOT4:(id)a4;	// 0x306ddac5
// declared property setter: - (void)setAwayPlayers:(id)players;	// 0x306ddb49
// declared property setter: - (void)setAwayQ1:(id)a1;	// 0x306dd991
// declared property setter: - (void)setAwayQ2:(id)a2;	// 0x306dd9bd
// declared property setter: - (void)setAwayQ3:(id)a3;	// 0x306dd9e9
// declared property setter: - (void)setAwayQ4:(id)a4;	// 0x306dda15
// declared property setter: - (void)setAwayTeamAbbrev:(id)abbrev;	// 0x306dd8e1
// declared property setter: - (void)setAwayTeamLogoURL:(id)url;	// 0x306dd965
// declared property setter: - (void)setAwayTeamName:(id)name;	// 0x306dd90d
// declared property setter: - (void)setAwayTeamScore:(id)score;	// 0x306dd939
// declared property setter: - (void)setAwayTimeouts:(id)timeouts;	// 0x306ddb1d
// declared property setter: - (void)setCourtFrameURL:(id)url;	// 0x306dd625
// declared property setter: - (void)setCourtURL:(id)url;	// 0x306dd5f9
// declared property setter: - (void)setGameClock:(id)clock;	// 0x306dd5cd
// declared property setter: - (void)setGamePeriod:(id)period;	// 0x306dd5a1
// declared property setter: - (void)setGameStartTime:(id)time;	// 0x306dd575
// declared property setter: - (void)setGameState:(id)state;	// 0x306dd549
// declared property setter: - (void)setHomeFgPerc:(id)perc;	// 0x306dd861
// declared property setter: - (void)setHomeOT1:(id)a1;	// 0x306dd7b1
// declared property setter: - (void)setHomeOT2:(id)a2;	// 0x306dd7dd
// declared property setter: - (void)setHomeOT3:(id)a3;	// 0x306dd809
// declared property setter: - (void)setHomeOT4:(id)a4;	// 0x306dd835
// declared property setter: - (void)setHomePlayers:(id)players;	// 0x306dd8b9
// declared property setter: - (void)setHomeQ1:(id)a1;	// 0x306dd701
// declared property setter: - (void)setHomeQ2:(id)a2;	// 0x306dd72d
// declared property setter: - (void)setHomeQ3:(id)a3;	// 0x306dd759
// declared property setter: - (void)setHomeQ4:(id)a4;	// 0x306dd785
// declared property setter: - (void)setHomeTeamAbbrev:(id)abbrev;	// 0x306dd651
// declared property setter: - (void)setHomeTeamLogoURL:(id)url;	// 0x306dd6d5
// declared property setter: - (void)setHomeTeamName:(id)name;	// 0x306dd67d
// declared property setter: - (void)setHomeTeamScore:(id)score;	// 0x306dd6a9
// declared property setter: - (void)setHomeTimeouts:(id)timeouts;	// 0x306dd88d
@end

