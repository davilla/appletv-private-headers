/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSTimeZone : NSObject <NSCopying, NSCoding> {
}
+ (id)abbreviationDictionary;	// 0x3349ec81
+ (id)allocWithZone:(NSZone *)zone;	// 0x33474459
+ (id)defaultTimeZone;	// 0x33474175
+ (id)knownTimeZoneNames;	// 0x33514e41
+ (id)localTimeZone;	// 0x33514dfd
+ (void)resetSystemTimeZone;	// 0x33514d8d
+ (void)setAbbreviationDictionary:(id)dictionary;	// 0x335187a9
+ (void)setDefaultTimeZone:(id)zone;	// 0x33514da5
+ (id)systemTimeZone;	// 0x334741f1
+ (id)timeZoneDataVersion;	// 0x335187f5
+ (id)timeZoneForSecondsFromGMT:(int)gmt;	// 0x334a4741
+ (id)timeZoneWithAbbreviation:(id)abbreviation;	// 0x33518b0d
+ (id)timeZoneWithName:(id)name;	// 0x3347441d
+ (id)timeZoneWithName:(id)name data:(id)data;	// 0x33518a85
- (id)initWithCoder:(id)coder;	// 0x33518c19
- (id)initWithName:(id)name;	// 0x33518ae9
- (id)initWithName:(id)name data:(id)data;	// 0x33518ac5
- (unsigned long)_cfTypeID;	// 0x33514cf5
- (id)abbreviation;	// 0x3351887d
- (id)abbreviationForDate:(id)date;	// 0x33514c91
- (id)copyWithZone:(NSZone *)zone;	// 0x3349d3dd
- (id)data;	// 0x33514c49
- (double)daylightSavingTimeOffset;	// 0x335188f1
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33514cd9
- (id)description;	// 0x335189d1
- (void)encodeWithCoder:(id)coder;	// 0x33518c1d
- (unsigned)hash;	// 0x3351896d
- (BOOL)isDaylightSavingTime;	// 0x335188b9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33514cb5
- (BOOL)isEqual:(id)equal;	// 0x33518989
- (BOOL)isEqualToTimeZone:(id)timeZone;	// 0x3349e5c5
- (BOOL)isNSTimeZone__;	// 0x33514cf1
- (id)localizedName:(int)name locale:(id)locale;	// 0x33518969
- (id)name;	// 0x33514c25
- (id)nextDaylightSavingTimeTransition;	// 0x3351892d
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x33514ced
- (int)secondsFromGMT;	// 0x33518841
- (int)secondsFromGMTForDate:(id)date;	// 0x33514c6d
@end

