/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x31042219
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x31042239
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x310421f9
@end

@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x31042351
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x310422b1
@end

@interface NSDate (NSDate)
+ (id)dateWithString:(id)string;	// 0x3104ac61
- (id)initWithCoder:(id)coder;	// 0x3104ac99
- (id)initWithString:(id)string;	// 0x3104ad19
- (Class)classForCoder;	// 0x3101c809
- (void)encodeWithCoder:(id)coder;	// 0x3101c829
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x31096cdd
- (int)_web_compareDay:(id)day;	// 0x31096be9
- (BOOL)_web_isToday;	// 0x31096bb1
@end

