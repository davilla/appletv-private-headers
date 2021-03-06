/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSDateFormatter;

@interface PDCAPropertyList : NSObject {
@private
	NSMutableDictionary *plist;	// 4 = 0x4
	NSString *currentSequence;	// 8 = 0x8
	NSDateFormatter *dateFormatter;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *plist;	// G=0x32eaf8bd; converted property
- (id)init;	// 0x32eaf85d
- (id)initWithDictionary:(id)dictionary;	// 0x32eaf6cd
- (id)initWithPath:(id)path;	// 0x32eaf821
- (bool)addDeviceAttributes:(id)attributes;	// 0x32eaff95
- (bool)addParametricTest:(id)test result:(bool)result value:(id)value failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest upperLimit:(id)limit lowerLimit:(id)limit8 priority:(int)priority units:(id)units;	// 0x32eb03a9
- (bool)addPassFailTest:(id)test result:(bool)result failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest;	// 0x32eb02a5
- (bool)addTestSequenceRun:(id)run softwareName:(id)name softwareVersion:(id)version startTime:(id)time stopTime:(id)time5 limitsVersion:(id)version6 deviceAttributes:(id)attributes;	// 0x32eafa01
- (bool)createTest:(id)test name:(id)name result:(bool)result failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest;	// 0x32eb0045
- (void)dealloc;	// 0x32eaf871
- (id)makeAlphanumericString:(id)string;	// 0x32eaf669
// converted property getter: - (id)plist;	// 0x32eaf8bd
- (bool)setStartTime:(id)time;	// 0x32eaf8e9
- (bool)setStopTime:(id)time;	// 0x32eaf975
- (bool)stringIsAlphanumeric:(id)alphanumeric;	// 0x32eaf5d5
- (bool)stringIsAlphanumericPeriod:(id)period;	// 0x32eaf545
- (bool)stringIsNumeric:(id)numeric;	// 0x32eaf62d
@end

