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
	NSNumber *_calendarType;	// 72 = 0x48
	ASEvent *_parentEvent;	// 76 = 0x4c
}
@property(retain) NSNumber *calendarType;	// G=0x30336161; S=0x303362d9; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x303360e9; S=0x303361fd; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x303360d1; S=0x303361d1; @synthesize=_dayOfWeek
@property(retain) NSNumber *interval;	// G=0x303360b9; S=0x303361a5; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x30336119; S=0x30336255; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x30336149; S=0x303362ad; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x303360a1; S=0x30336179; @synthesize=_type
@property(retain) NSDate *until;	// G=0x30336131; S=0x30336281; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x30336101; S=0x30336229; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x3033592d
+ (BOOL)frontingBasicTypes;	// 0x30335855
+ (BOOL)notifyOfUnknownTokens;	// 0x3033580d
+ (BOOL)parsingLeafNode;	// 0x303358e5
+ (BOOL)parsingWithSubItems;	// 0x3033589d
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x30335c71
- (id)initWithCoder:(id)coder;	// 0x30335975
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x30336305
- (void *)_newRecurrence;	// 0x303369e5
- (BOOL)_requiresParentEvent;	// 0x30334835
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x303355cd
- (id)_untilDateForCalFramework;	// 0x303356d5
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x30334f75
- (id)asParseRules;	// 0x303351c5
// declared property getter: - (id)calendarType;	// 0x30336161
// declared property getter: - (id)dayOfMonth;	// 0x303360e9
// declared property getter: - (id)dayOfWeek;	// 0x303360d1
- (void)dealloc;	// 0x30335b99
- (void)encodeWithCoder:(id)coder;	// 0x30334da9
// declared property getter: - (id)interval;	// 0x303360b9
// declared property getter: - (id)monthOfYear;	// 0x30336119
// declared property getter: - (id)occurrences;	// 0x30336149
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30335cf9
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x3033603d
// declared property setter: - (void)setCalendarType:(id)type;	// 0x303362d9
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x303361fd
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x303361d1
// declared property setter: - (void)setInterval:(id)interval;	// 0x303361a5
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x30336255
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x303362ad
- (void)setParentEvent:(id)event;	// 0x30334825
// declared property setter: - (void)setType:(id)type;	// 0x30336179
// declared property setter: - (void)setUntil:(id)until;	// 0x30336281
- (void)setUntilString:(id)string;	// 0x30334f41
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x30336229
// declared property getter: - (id)type;	// 0x303360a1
// declared property getter: - (id)until;	// 0x30336131
// declared property getter: - (id)weekOfMonth;	// 0x30336101
@end

