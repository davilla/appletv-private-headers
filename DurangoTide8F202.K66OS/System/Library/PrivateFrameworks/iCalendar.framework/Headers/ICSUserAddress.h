/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSUserAddress : ICSProperty {
}
@property(retain) NSString *cn;	// G=0x3001e409; S=0x3001e611; 
@property(assign) int cutype;	// G=0x3001dd01; S=0x3001dd41; 
@property(retain) NSString *dir;	// G=0x3001dcc1; S=0x3001dce1; 
@property(retain) NSString *email;	// G=0x3001d7d5; S=0x3001d811; 
@property(assign) int partstat;	// G=0x3001dc21; S=0x3001dc61; 
@property(assign) int role;	// G=0x3001d9a1; S=0x3001d9e1; 
@property(assign) BOOL rsvp;	// G=0x3001d8f9; S=0x3001d93d; 
@property(assign) int scheduleagent;	// G=0x3001dae1; S=0x3001db21; 
@property(assign) int scheduleforcesend;	// G=0x3001da41; S=0x3001da81; 
@property(assign) int schedulestatus;	// G=0x3001db81; S=0x3001dbc1; 
@property(assign) BOOL x_apple_self_invited;	// G=0x3001d851; S=0x3001d895; 
@property(retain) id x_calendarserver_email;	// G=0x3001d7ad; S=0x3001d7c1; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x3001d595
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x3001d5dd
+ (id)ICSStringFromRole:(int)role;	// 0x3001d711
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x3001d651
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x3001d6f1
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x3001d671
+ (id)URLForNoMail;	// 0x3001d74d
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x3001e329
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x3001e22d
+ (int)roleFromICSString:(id)icsstring;	// 0x3001e009
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x3001e0cd
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x3001e085
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x3001e115
- (id)initWithEmailAddress:(id)emailAddress;	// 0x3001e4a5
- (id)initWithURL:(id)url;	// 0x3001e3bd
// declared property getter: - (id)cn;	// 0x3001e409
// declared property getter: - (int)cutype;	// 0x3001dd01
// declared property getter: - (id)dir;	// 0x3001dcc1
- (id)displayName;	// 0x3001dda1
// declared property getter: - (id)email;	// 0x3001d7d5
- (id)emailAddress;	// 0x3001de65
- (void)fixAddress;	// 0x30019a59
- (BOOL)hasEmailAddress;	// 0x3001dfd1
- (BOOL)isEmailAddress;	// 0x3001df79
- (BOOL)isHTTPAddress;	// 0x3001df21
- (BOOL)isHTTPSAddress;	// 0x3001dec9
// declared property getter: - (int)partstat;	// 0x3001dc21
// declared property getter: - (int)role;	// 0x3001d9a1
// declared property getter: - (BOOL)rsvp;	// 0x3001d8f9
// declared property getter: - (int)scheduleagent;	// 0x3001dae1
// declared property getter: - (int)scheduleforcesend;	// 0x3001da41
// declared property getter: - (int)schedulestatus;	// 0x3001db81
// declared property setter: - (void)setCn:(id)cn;	// 0x3001e611
// declared property setter: - (void)setCutype:(int)cutype;	// 0x3001dd41
// declared property setter: - (void)setDir:(id)dir;	// 0x3001dce1
// declared property setter: - (void)setEmail:(id)email;	// 0x3001d811
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x3001dc61
// declared property setter: - (void)setRole:(int)role;	// 0x3001d9e1
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x3001d93d
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x3001db21
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x3001da81
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x3001dbc1
- (void)setURL:(id)url;	// 0x3001d775
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x3001d895
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x3001d7c1
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x3001d851
// converted property getter: - (id)x_calendarserver_email;	// 0x3001d7ad
@end

