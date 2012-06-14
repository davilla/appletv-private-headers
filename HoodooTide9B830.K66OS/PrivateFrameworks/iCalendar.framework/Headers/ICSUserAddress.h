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
@property(retain) NSString *cn;	// G=0x327fcec1; S=0x327fce05; 
@property(assign) int cutype;	// G=0x327fcfdd; S=0x327fcf71; 
@property(retain) NSString *dir;	// G=0x327fd04d; S=0x327fd02d; 
@property(retain) NSString *email;	// G=0x327fd5e1; S=0x327fd599; 
@property(assign) int partstat;	// G=0x327fd0d9; S=0x327fd06d; 
@property(assign) int role;	// G=0x327fd3c9; S=0x327fd35d; 
@property(assign) BOOL rsvp;	// G=0x327fd489; S=0x327fd419; 
@property(assign) int scheduleagent;	// G=0x327fd251; S=0x327fd1e5; 
@property(assign) int scheduleforcesend;	// G=0x327fd30d; S=0x327fd2a1; 
@property(assign) int schedulestatus;	// G=0x327fd195; S=0x327fd129; 
@property(assign) BOOL x_apple_self_invited;	// G=0x327fd549; S=0x327fd4d9; 
@property(retain) id x_calendarserver_email;	// G=0x327fd635; S=0x327fd625; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x327fc745
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x327fc795
+ (id)ICSStringFromRole:(int)role;	// 0x327fc8f1
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x327fc819
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x327fc8cd
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x327fc83d
+ (id)URLForNoMail;	// 0x327fd685
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x327fc335
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x327fc3d9
+ (int)roleFromICSString:(id)icsstring;	// 0x327fc6bd
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x327fc61d
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x327fc66d
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x327fc4ed
- (id)initWithEmailAddress:(id)emailAddress;	// 0x327fc985
- (id)initWithURL:(id)url;	// 0x327fc931
// declared property getter: - (id)cn;	// 0x327fcec1
// declared property getter: - (int)cutype;	// 0x327fcfdd
// declared property getter: - (id)dir;	// 0x327fd04d
- (id)displayName;	// 0x327fcd25
// declared property getter: - (id)email;	// 0x327fd5e1
- (id)emailAddress;	// 0x327fccb1
- (void)fixAddress;	// 0x327fa7b5
- (BOOL)hasEmailAddress;	// 0x327fcb29
- (BOOL)isEmailAddress;	// 0x327fcb6d
- (BOOL)isHTTPAddress;	// 0x327fcbd9
- (BOOL)isHTTPSAddress;	// 0x327fcc45
// declared property getter: - (int)partstat;	// 0x327fd0d9
// declared property getter: - (int)role;	// 0x327fd3c9
// declared property getter: - (BOOL)rsvp;	// 0x327fd489
// declared property getter: - (int)scheduleagent;	// 0x327fd251
// declared property getter: - (int)scheduleforcesend;	// 0x327fd30d
// declared property getter: - (int)schedulestatus;	// 0x327fd195
// declared property setter: - (void)setCn:(id)cn;	// 0x327fce05
// declared property setter: - (void)setCutype:(int)cutype;	// 0x327fcf71
// declared property setter: - (void)setDir:(id)dir;	// 0x327fd02d
// declared property setter: - (void)setEmail:(id)email;	// 0x327fd599
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x327fd06d
// declared property setter: - (void)setRole:(int)role;	// 0x327fd35d
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x327fd419
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x327fd1e5
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x327fd2a1
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x327fd129
- (void)setURL:(id)url;	// 0x327fd645
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x327fd4d9
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x327fd625
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x327fd549
// converted property getter: - (id)x_calendarserver_email;	// 0x327fd635
@end
