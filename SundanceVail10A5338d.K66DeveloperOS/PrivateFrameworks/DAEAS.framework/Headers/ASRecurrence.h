/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_firstDayOfWeek;	// 72 = 0x48
	NSNumber *_calendarType;	// 76 = 0x4c
	ASEvent *_parentEvent;	// 80 = 0x50
}
@property(retain) NSNumber *calendarType;	// G=0x36f319a1; S=0x36f319b5; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x36f318c9; S=0x36f318dd; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x36f318a5; S=0x36f318b9; @synthesize=_dayOfWeek
@property(retain) NSNumber *firstDayOfWeek;	// G=0x36f3197d; S=0x36f31991; @synthesize=_firstDayOfWeek
@property(retain) NSNumber *interval;	// G=0x36f31881; S=0x36f31895; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x36f31911; S=0x36f31925; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x36f31959; S=0x36f3196d; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x36f3185d; S=0x36f31871; @synthesize=_type
@property(retain) NSDate *until;	// G=0x36f31935; S=0x36f31949; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x36f318ed; S=0x36f31901; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x36f2f551
+ (id)asParseRules;	// 0x36f2f935
+ (BOOL)frontingBasicTypes;	// 0x36f2f64d
+ (BOOL)notifyOfUnknownTokens;	// 0x36f2f6a1
+ (BOOL)parsingLeafNode;	// 0x36f2f5a5
+ (BOOL)parsingWithSubItems;	// 0x36f2f5f9
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x36f30f65
- (id)initWithCoder:(id)coder;	// 0x36f31415
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x36f3070d
- (void *)_newRecurrenceWithParentStartDate:(id)parentStartDate;	// 0x36f30109
- (BOOL)_requiresParentEvent;	// 0x36f2fef1
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x36f2f825
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x36f2f705
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36f30ff1
// declared property getter: - (id)calendarType;	// 0x36f319a1
// declared property getter: - (id)dayOfMonth;	// 0x36f318c9
// declared property getter: - (id)dayOfWeek;	// 0x36f318a5
- (void)dealloc;	// 0x36f31311
- (void)encodeWithCoder:(id)coder;	// 0x36f31671
// declared property getter: - (id)firstDayOfWeek;	// 0x36f3197d
// declared property getter: - (id)interval;	// 0x36f31881
// declared property getter: - (id)monthOfYear;	// 0x36f31911
// declared property getter: - (id)occurrences;	// 0x36f31959
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36f2fef5
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x36f3068d
// declared property setter: - (void)setCalendarType:(id)type;	// 0x36f319b5
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x36f318dd
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x36f318b9
// declared property setter: - (void)setFirstDayOfWeek:(id)week;	// 0x36f31991
// declared property setter: - (void)setInterval:(id)interval;	// 0x36f31895
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x36f31925
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x36f3196d
- (void)setParentEvent:(id)event;	// 0x36f2f6f5
// declared property setter: - (void)setType:(id)type;	// 0x36f31871
// declared property setter: - (void)setUntil:(id)until;	// 0x36f31949
- (void)setUntilString:(id)string;	// 0x36f312d5
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x36f31901
// declared property getter: - (id)type;	// 0x36f3185d
// declared property getter: - (id)until;	// 0x36f31935
// declared property getter: - (id)weekOfMonth;	// 0x36f318ed
@end

