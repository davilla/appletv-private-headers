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
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x30329d51; S=0x30329d65; converted property
@property(readonly, retain) ASItem *parent;	// G=0x30329d31; converted property
@property(readonly, assign) int parsingState;	// G=0x30329d41; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3032a33d
+ (BOOL)expectsContent;	// 0x30329d61
+ (BOOL)frontingBasicTypes;	// 0x3032a1c9
+ (BOOL)notifyOfUnknownTokens;	// 0x3032a14d
+ (BOOL)parsingLeafNode;	// 0x3032a2c1
+ (BOOL)parsingWithSubItems;	// 0x3032a245
- (id)init;	// 0x3032a0e1
- (int)_dataclass;	// 0x30329ec9
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x30329e55
- (BOOL)_itemPathMatches:(id)matches;	// 0x3032a849
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x3032b95d
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x3032b459
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x30329da1
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x3032a039
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x30329f41
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x3032ad15
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x3032a3b9
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x3032b885
- (id)asParseRules;	// 0x3032a8fd
// converted property getter: - (id)currentStreamInvocation;	// 0x30329d51
- (void)dealloc;	// 0x3032a075
- (void)ignoreThisContent:(id)content;	// 0x3032a939
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x3032ad9d
// converted property getter: - (id)parent;	// 0x30329d31
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3032a975
// converted property getter: - (int)parsingState;	// 0x30329d41
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x30329d65
@end

