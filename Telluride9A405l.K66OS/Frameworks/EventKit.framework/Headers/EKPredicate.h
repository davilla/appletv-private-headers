/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library

@class NSArray;

@interface EKPredicate : NSPredicate {
	NSArray *_calendars;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x3320b8ed; 
- (id)initWithCalendars:(id)calendars;	// 0x331c7f7d
- (id)initWithCoder:(id)coder;	// 0x3320b87d
// declared property getter: - (id)calendars;	// 0x3320b8ed
- (void)dealloc;	// 0x331c893d
- (void)encodeWithCoder:(id)coder;	// 0x331c808d
@end
