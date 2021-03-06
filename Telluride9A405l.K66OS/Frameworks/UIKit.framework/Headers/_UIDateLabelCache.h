/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _UIDateLabelCache : NSObject {
@private
	double _today;	// 4 = 0x4
	double _noon;	// 12 = 0xc
	double _tomorrow;	// 20 = 0x14
	double _previousWeek;	// 28 = 0x1c
	UIFont *_timeDesignatorFont;	// 36 = 0x24
	NSString *_amString;	// 40 = 0x28
	NSString *_pmString;	// 44 = 0x2c
	CGSize _amSize;	// 48 = 0x30
	CGSize _pmSize;	// 56 = 0x38
	CFDictionaryRef _dateStringCache;	// 64 = 0x40
	CFDictionaryRef _dateStringCacheForForceTimeOnly;	// 68 = 0x44
	CFDateFormatterRef _timeFormatter;	// 72 = 0x48
	CFDateFormatterRef _shortDateFormatter;	// 76 = 0x4c
	CFDateFormatterRef _shortTimeFormatter;	// 80 = 0x50
	CFCalendarRef _calendar;	// 84 = 0x54
	CFDictionaryRef _dateSizeCache;	// 88 = 0x58
	CFDictionaryRef _dateSizeCacheForForceTimeOnly;	// 92 = 0x5c
	BOOL _designatorValid;	// 96 = 0x60
	BOOL _use24HourTime;	// 97 = 0x61
	BOOL _timeDesignatorAppearsBeforeTime;	// 98 = 0x62
}
@property(readonly, assign) CGSize amSize;	// G=0x32e8923d; converted property
@property(readonly, retain) NSString *amString;	// G=0x32e891d5; converted property
@property(readonly, assign) CGSize pmSize;	// G=0x32e892c5; converted property
@property(readonly, retain) NSString *pmString;	// G=0x32e89209; converted property
@property(readonly, assign) BOOL timeDesignatorAppearsBeforeTime;	// G=0x32ce42dd; converted property
@property(readonly, retain) UIFont *timeDesignatorFont;	// G=0x32cde049; converted property
@property(readonly, assign) BOOL use24HourTime;	// G=0x32d56fd9; converted property
- (id)init;	// 0x32cd8a45
- (void)_loadDesignatorStrings;	// 0x32e890d1
- (void)_localeDidChange;	// 0x32e8906d
- (void)_localeWillChange;	// 0x32e89051
- (void)_significantTimeChange;	// 0x32e88fed
- (BOOL)_timeDesignatorAppearsBeforeTime;	// 0x32cd9ad5
- (void)_updateTodayAndNoon;	// 0x32cd9275
// converted property getter: - (CGSize)amSize;	// 0x32e8923d
// converted property getter: - (id)amString;	// 0x32e891d5
- (CFDateRef)createDateKeyForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only;	// 0x32cd917d
- (id)dateStringForAbsoluteTime:(double)absoluteTime dateKey:(CFDateRef)key forceTimeOnly:(BOOL)only;	// 0x32cd93c9
- (void)dealloc;	// 0x32dddcad
- (void)invalidateDateCache;	// 0x32e88e31
- (void)invalidateDateSizeCache;	// 0x32ce0801
- (CGSize)mainTimeSizeForDateKey:(CFDateRef)dateKey forceTimeOnly:(BOOL)only;	// 0x32cdde55
- (double)noonAbsoluteTime;	// 0x32e8938d
// converted property getter: - (CGSize)pmSize;	// 0x32e892c5
// converted property getter: - (id)pmString;	// 0x32e89209
- (void)setMainTimeSize:(CGSize)size forDateKey:(CFDateRef)dateKey forceTimeOnly:(BOOL)only;	// 0x32cddf0d
// converted property getter: - (BOOL)timeDesignatorAppearsBeforeTime;	// 0x32ce42dd
// converted property getter: - (id)timeDesignatorFont;	// 0x32cde049
- (id)timeDesignatorForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only;	// 0x32cd98e5
- (CGSize)timeDesignatorSizeForAbsoluteTime:(double)absoluteTime forceTimeOnly:(BOOL)only forFont:(id)font;	// 0x32cde0a1
- (double)todayAbsoluteTime;	// 0x32e8934d
// converted property getter: - (BOOL)use24HourTime;	// 0x32d56fd9
@end

