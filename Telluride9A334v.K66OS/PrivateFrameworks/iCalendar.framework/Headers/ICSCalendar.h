/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSMutableSet, ICSColor, NSMutableDictionary, NSString, ICSDuration;

@interface ICSCalendar : ICSComponent {
	NSMutableSet *_keys;	// 12 = 0xc
	NSMutableDictionary *_masters;	// 16 = 0x10
	NSMutableDictionary *_occurrences;	// 20 = 0x14
	NSMutableDictionary *_timezones;	// 24 = 0x18
}
@property(retain) NSString *calscale;	// G=0x317b1ab1; S=0x317b1af9; 
@property(assign) int method;	// G=0x317b1b19; S=0x317b1b71; 
@property(retain) NSString *prodid;	// G=0x317b1bc1; S=0x317b1c09; 
@property(retain) NSString *version;	// G=0x317b1c29; S=0x317b1c71; 
@property(retain) ICSDuration *x_apple_auto_refresh;	// G=0x317b1c91; S=0x317b1cf5; 
@property(retain) ICSColor *x_apple_calendar_color;	// G=0x317b1d25; S=0x317b1ea1; 
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) int x_calendarserver_access;	// @dynamic
@property(retain) NSString *x_wr_caldesc;	// G=0x317b1f6d; S=0x317b1f4d; 
@property(retain) NSString *x_wr_calname;	// G=0x317b1fb5; S=0x317b1ffd; 
@property(retain) NSString *x_wr_relcalid;	// G=0x317b201d; S=0x317b2065; 
@property(retain) NSString *x_wr_timezone;	// G=0x317b2085; S=0x317b20cd; 
+ (id)ICSStringFromCalendarServerAccess:(int)calendarServerAccess;	// 0x317b195d
+ (id)ICSStringFromMethod:(int)method;	// 0x317b1861
+ (int)calendarServerAccessFromICSString:(id)icsstring;	// 0x317b18d5
+ (id)calendarWithKnownTimeZones;	// 0x317b13a1
+ (id)defaultProdid;	// 0x317b16a1
+ (int)methodFromICSString:(id)icsstring;	// 0x317b1769
+ (id)name;	// 0x317b15bd
+ (void)setDefaultProdid:(id)prodid;	// 0x317b15c9
- (id)init;	// 0x317b199d
- (void)_addComponent:(id)component;	// 0x317b2e05
- (void)_addTimeZonesInComponent:(id)component toDictionary:(id)dictionary;	// 0x317b2691
- (void)_addTimeZonesInComponent:(id)component toSet:(id)set;	// 0x317b241d
- (id)_init;	// 0x317b14ed
- (id)_timeZonesForComponents:(id)components options:(int)options;	// 0x317b2959
- (void)addComponent:(id)component;	// 0x317b3315
// declared property getter: - (id)calscale;	// 0x317b1ab1
- (id)componentForKey:(id)key;	// 0x317b3125
- (id)componentKeys;	// 0x317b3105
- (id)componentOccurrencesForKey:(id)key;	// 0x317b3145
- (void)dealloc;	// 0x317b1a29
- (void)fixComponent;	// 0x317b34d5
- (void)fixEntities;	// 0x317b3579
- (void)fixPropertiesInheritance;	// 0x317b337d
// declared property getter: - (int)method;	// 0x317b1b19
// declared property getter: - (id)prodid;	// 0x317b1bc1
// declared property setter: - (void)setCalscale:(id)calscale;	// 0x317b1af9
- (void)setComponents:(id)components;	// 0x317b3301
- (void)setComponents:(id)components options:(int)options;	// 0x317b3185
- (void)setComponents:(id)components timeZones:(BOOL)zones;	// 0x317b3165
// declared property setter: - (void)setMethod:(int)method;	// 0x317b1b71
// declared property setter: - (void)setProdid:(id)prodid;	// 0x317b1c09
// declared property setter: - (void)setVersion:(id)version;	// 0x317b1c71
// declared property setter: - (void)setX_apple_auto_refresh:(id)refresh;	// 0x317b1cf5
// declared property setter: - (void)setX_apple_calendar_color:(id)color;	// 0x317b1ea1
// declared property setter: - (void)setX_wr_caldesc:(id)caldesc;	// 0x317b1f4d
// declared property setter: - (void)setX_wr_calname:(id)calname;	// 0x317b1ffd
// declared property setter: - (void)setX_wr_relcalid:(id)relcalid;	// 0x317b2065
// declared property setter: - (void)setX_wr_timezone:(id)timezone;	// 0x317b20cd
- (id)systemCalendarForDate:(id)date options:(int)options;	// 0x317b21ed
- (id)systemDateForDate:(id)date options:(int)options;	// 0x317b22b5
- (id)systemTimeZoneForDate:(id)date;	// 0x317b20ed
- (id)timeZoneForKey:(id)key;	// 0x317b335d
// declared property getter: - (id)version;	// 0x317b1c29
// declared property getter: - (id)x_apple_auto_refresh;	// 0x317b1c91
// declared property getter: - (id)x_apple_calendar_color;	// 0x317b1d25
// declared property getter: - (id)x_wr_caldesc;	// 0x317b1f6d
// declared property getter: - (id)x_wr_calname;	// 0x317b1fb5
// declared property getter: - (id)x_wr_relcalid;	// 0x317b201d
// declared property getter: - (id)x_wr_timezone;	// 0x317b2085
@end

