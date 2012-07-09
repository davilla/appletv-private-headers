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
@property(retain) NSString *cn;	// G=0x3653ada9; S=0x3653acf9; 
@property(assign) int cutype;	// G=0x3653aebd; S=0x3653ae4d; 
@property(retain) NSString *dir;	// G=0x3653af2d; S=0x3653af0d; 
@property(retain) NSString *email;	// G=0x3653b4d5; S=0x3653b495; 
@property(assign) int partstat;	// G=0x3653afbd; S=0x3653af4d; 
@property(assign) int role;	// G=0x3653b2bd; S=0x3653b24d; 
@property(assign) BOOL rsvp;	// G=0x3653b381; S=0x3653b30d; 
@property(assign) int scheduleagent;	// G=0x3653b13d; S=0x3653b0cd; 
@property(assign) int scheduleforcesend;	// G=0x3653b1fd; S=0x3653b18d; 
@property(assign) int schedulestatus;	// G=0x3653b07d; S=0x3653b00d; 
@property(assign) BOOL x_apple_self_invited;	// G=0x3653b445; S=0x3653b3d1; 
@property(retain) id x_calendarserver_email;	// G=0x3653b52d; S=0x3653b51d; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x3653a62d
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x3653a67d
+ (id)ICSStringFromRole:(int)role;	// 0x3653a7d9
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x3653a701
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x3653a7b5
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x3653a725
+ (id)URLForNoMail;	// 0x3653b57d
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x3653a215
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x3653a2b5
+ (int)roleFromICSString:(id)icsstring;	// 0x3653a58d
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x3653a4f5
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x3653a541
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x3653a3c5
- (id)initWithEmailAddress:(id)emailAddress;	// 0x3653a87d
- (id)initWithURL:(id)url;	// 0x3653a829
// declared property getter: - (id)cn;	// 0x3653ada9
// declared property getter: - (int)cutype;	// 0x3653aebd
// declared property getter: - (id)dir;	// 0x3653af2d
- (id)displayName;	// 0x3653ac11
// declared property getter: - (id)email;	// 0x3653b4d5
- (id)emailAddress;	// 0x3653ab9d
- (void)fixAddress;	// 0x365382e9
- (BOOL)hasEmailAddress;	// 0x3653aa19
- (BOOL)isEmailAddress;	// 0x3653aa59
- (BOOL)isHTTPAddress;	// 0x3653aac5
- (BOOL)isHTTPSAddress;	// 0x3653ab31
// declared property getter: - (int)partstat;	// 0x3653afbd
// declared property getter: - (int)role;	// 0x3653b2bd
// declared property getter: - (BOOL)rsvp;	// 0x3653b381
// declared property getter: - (int)scheduleagent;	// 0x3653b13d
// declared property getter: - (int)scheduleforcesend;	// 0x3653b1fd
// declared property getter: - (int)schedulestatus;	// 0x3653b07d
// declared property setter: - (void)setCn:(id)cn;	// 0x3653acf9
// declared property setter: - (void)setCutype:(int)cutype;	// 0x3653ae4d
// declared property setter: - (void)setDir:(id)dir;	// 0x3653af0d
// declared property setter: - (void)setEmail:(id)email;	// 0x3653b495
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x3653af4d
// declared property setter: - (void)setRole:(int)role;	// 0x3653b24d
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x3653b30d
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x3653b0cd
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x3653b18d
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x3653b00d
- (void)setURL:(id)url;	// 0x3653b53d
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x3653b3d1
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x3653b51d
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x3653b445
// converted property getter: - (id)x_calendarserver_email;	// 0x3653b52d
@end
