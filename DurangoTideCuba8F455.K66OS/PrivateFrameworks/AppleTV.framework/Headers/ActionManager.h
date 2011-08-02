/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class AlertInfo;

__attribute__((visibility("hidden")))
@interface ActionManager : NSObject {
@private
	AlertInfo *mAlertInfo;	// 4 = 0x4
}
+ (void)cleanup;	// 0x30721980
+ (id)instance;	// 0x307219b4
- (id)init;	// 0x307205f8
- (id)alertMessage;	// 0x30720858
- (id)alertType;	// 0x307208d0
- (id)alertUrlString;	// 0x307207f8
- (void)dealloc;	// 0x30721a08
- (id)getAlert;	// 0x3072088c
- (id)getDictionary;	// 0x3072071c
- (BOOL)haveAlert;	// 0x307205dc
- (void)registerAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x30720fb0
- (void)registerAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x30720e90
- (void)registerAlertByPriority:(id)priority;	// 0x30721b60
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x30721410
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x307212f0
- (void)registerErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x307211e0
- (void)registerErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x307210c0
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x30721870
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x30721750
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x30721640
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x30721520
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error priority:(unsigned)priority;	// 0x30720d68
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x30720c30
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error priority:(unsigned)priority;	// 0x30720af0
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x307209a0
- (void)removeAlert;	// 0x30721a68
- (id)stringActioninJson;	// 0x3072068c
@end

