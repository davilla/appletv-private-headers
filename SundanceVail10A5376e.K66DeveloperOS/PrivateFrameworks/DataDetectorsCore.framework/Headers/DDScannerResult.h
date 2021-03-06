/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding> {
	DDResult *_coreResult;	// 4 = 0x4
	NSArray *_subResultsCache;	// 8 = 0x8
}
@property(readonly, assign) DDResult *coreResult;	// G=0x3218e7ad; converted property
@property(assign) DDQueryRange queryRange;	// G=0x3218e859; S=0x3218e7fd; 
@property(assign) NSRange range;	// G=0x3218e7bd; S=0x3218e7e5; 
@property(retain) id subResults;	// G=0x3218eadd; S=0x3218ec19; converted property
@property(retain) id type;	// G=0x3218e89d; S=0x3218e8b1; converted property
+ (id)resultFromCoreResult:(DDResult *)coreResult;	// 0x3218e641
- (id)init;	// 0x3218e67d
- (id)initWithCoder:(id)coder;	// 0x3218f565
- (id)initWithCoreResult:(DDResult *)coreResult;	// 0x3218e6c1
- (DDQueryOffset)cfRange;	// 0x3218e871
- (id)contextualData;	// 0x3218e901
- (id)copyWithZone:(NSZone *)zone;	// 0x3218e795
// converted property getter: - (DDResult *)coreResult;	// 0x3218e7ad
- (id)dateFromReferenceDate:(id)referenceDate referenceTimezone:(id)timezone timezoneRef:(id *)ref allDayRef:(BOOL *)ref4;	// 0x3218ee81
- (void)dealloc;	// 0x3218e731
- (id)description;	// 0x3218e929
- (void)encodeWithCoder:(id)coder;	// 0x3218f409
- (BOOL)extractStartDate:(id *)date startTimezone:(id *)timezone endDate:(id *)date3 endTimezone:(id *)timezone4 allDayRef:(BOOL *)ref referenceDate:(id)date6 referenceTimezone:(id)timezone7;	// 0x3218ef2d
- (double)getDuration;	// 0x3218ee31
- (BOOL)getIMScreenNameValue:(id *)value type:(id *)type;	// 0x3218f1a9
- (BOOL)getMailValue:(id *)value label:(id *)label;	// 0x3218f0f5
- (BOOL)getPhoneValue:(id *)value label:(id *)label;	// 0x3218f04d
- (BOOL)getStreet:(id *)street city:(id *)city state:(id *)state zip:(id *)zip country:(id *)country;	// 0x3218f279
- (BOOL)isEqual:(id)equal;	// 0x3218e9ed
- (id)location;	// 0x3218e8ed
- (id)matchedString;	// 0x3218e915
// declared property getter: - (DDQueryRange)queryRange;	// 0x3218e859
// declared property getter: - (NSRange)range;	// 0x3218e7bd
- (id)rawValue;	// 0x3218e8d9
- (long)score;	// 0x3218e889
// declared property setter: - (void)setQueryRange:(DDQueryRange)range;	// 0x3218e7fd
// declared property setter: - (void)setRange:(NSRange)range;	// 0x3218e7e5
// converted property setter: - (void)setSubResults:(id)results;	// 0x3218ec19
// converted property setter: - (void)setType:(id)type;	// 0x3218e8b1
// converted property getter: - (id)subResults;	// 0x3218eadd
// converted property getter: - (id)type;	// 0x3218e89d
- (id)value;	// 0x3218e8c5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3218ed41
@end

