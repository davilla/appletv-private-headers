/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSTimeZone.h> // Unknown library
#import "ASParsingLeafNode.h"
#import "DAEAS-Structs.h"


@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
	int _gmtOffset;	// 4 = 0x4
	int _dstOffset;	// 8 = 0x8
	SYSTEMTIME *_standardDate;	// 12 = 0xc
	SYSTEMTIME *_daylightDate;	// 16 = 0x10
	NSTimeZone *_wrappedTimeZone;	// 20 = 0x14
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x31db6e75
+ (BOOL)expectsContent;	// 0x31db9129
+ (BOOL)frontingBasicTypes;	// 0x31db6f71
+ (id)gmt;	// 0x31db7019
+ (BOOL)notifyOfUnknownTokens;	// 0x31db6fc5
+ (BOOL)parsingLeafNode;	// 0x31db6ec9
+ (BOOL)parsingWithSubItems;	// 0x31db6f1d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x31db7ba5
- (id)initWithCodingDict:(id)codingDict;	// 0x31db8df5
- (id)initWithName:(id)name;	// 0x31db8d9d
- (id)initWithName:(id)name data:(id)data;	// 0x31db8dc9
- (id)initWithTZNameFromCalDB:(id)calDB;	// 0x31db7061
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)minutes firstTransitionDate:(SYSTEMTIME *)date secondTransitionDate:(SYSTEMTIME *)date3;	// 0x31db757d
- (id)_bestGuessedNameFromPossibilities:(id)possibilities firstTransitionDate:(SYSTEMTIME *)date secondTransitionDate:(SYSTEMTIME *)date3;	// 0x31db7251
- (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year outDaylightBias:(int *)bias;	// 0x31db8545
- (BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year withTimeZone:(id)timeZone;	// 0x31db70fd
- (SYSTEMTIME)_ruleForDate:(id)date;	// 0x31db86e9
- (id)abbreviationForDate:(id)date;	// 0x31db8d5d
- (id)data;	// 0x31db8d3d
- (id)dateForRule:(SYSTEMTIME *)rule inYear:(int)year;	// 0x31db7ecd
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x31db8465
- (void)dealloc;	// 0x31db7e51
- (id)description;	// 0x31db7da1
- (id)dictForCoding;	// 0x31db8fc1
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x31db8269
- (XXStruct_wS5jrA *)mallocTZIForDate:(id)date;	// 0x31db89ad
- (id)name;	// 0x31db8d1d
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x31db8d7d
- (int)parsingState;	// 0x31db7ec9
- (int)secondsFromGMTForDate:(id)date;	// 0x31db8039
@end

