/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsing.h"
#import <NSObject.h> // Unknown library

@class NSInvocation, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {
	ASItem *_root;	// 4 = 0x4
	ASItem *_parent;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	NSObject<ASParsing> *_currentlyParsingSubItem;	// 20 = 0x14
	int _currentlyParsingCPTNumber;	// 24 = 0x18
	NSInvocation *_currentStreamInvocation;	// 28 = 0x1c
	int _parsingState;	// 32 = 0x20
	NSMutableDictionary *_parseRuleUsageNumbers;	// 36 = 0x24
}
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x3437ad51; S=0x3437ad65; converted property
@property(readonly, retain) ASItem *parent;	// G=0x3437ad31; converted property
@property(readonly, assign) int parsingState;	// G=0x3437ad41; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3437b33d
+ (BOOL)expectsContent;	// 0x3437ad61
+ (BOOL)frontingBasicTypes;	// 0x3437b1c9
+ (BOOL)notifyOfUnknownTokens;	// 0x3437b14d
+ (BOOL)parsingLeafNode;	// 0x3437b2c1
+ (BOOL)parsingWithSubItems;	// 0x3437b245
- (id)init;	// 0x3437b0e1
- (int)_dataclass;	// 0x3437aec9
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x3437ae55
- (BOOL)_itemPathMatches:(id)matches;	// 0x3437b849
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x3437c95d
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x3437c459
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x3437ada1
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x3437b039
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x3437af41
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x3437bd15
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x3437b3b9
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x3437c885
- (id)asParseRules;	// 0x3437b8fd
// converted property getter: - (id)currentStreamInvocation;	// 0x3437ad51
- (void)dealloc;	// 0x3437b075
- (void)ignoreThisContent:(id)content;	// 0x3437b939
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x3437bd9d
// converted property getter: - (id)parent;	// 0x3437ad31
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3437b975
// converted property getter: - (int)parsingState;	// 0x3437ad41
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x3437ad65
@end

