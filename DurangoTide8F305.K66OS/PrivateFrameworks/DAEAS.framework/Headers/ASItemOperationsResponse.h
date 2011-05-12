/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASItemOperationsResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSArray *_fetchResponses;	// 44 = 0x2c
}
@property(retain) NSArray *fetchResponses;	// G=0x302fe06d; S=0x302fe439; converted property
@property(retain) NSNumber *status;	// G=0x302fe225; S=0x302fe255; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x302fe595
+ (BOOL)frontingBasicTypes;	// 0x302fe4bd
+ (BOOL)notifyOfUnknownTokens;	// 0x302fe475
+ (BOOL)parsingLeafNode;	// 0x302fe54d
+ (BOOL)parsingWithSubItems;	// 0x302fe505
- (id)asParseRules;	// 0x302fe291
- (void)dealloc;	// 0x302fe5dd
- (id)description;	// 0x302fe72d
// converted property getter: - (id)fetchResponses;	// 0x302fe06d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x302fe639
// converted property setter: - (void)setFetchResponses:(id)responses;	// 0x302fe439
// converted property setter: - (void)setStatus:(id)status;	// 0x302fe255
// converted property getter: - (id)status;	// 0x302fe225
@end

