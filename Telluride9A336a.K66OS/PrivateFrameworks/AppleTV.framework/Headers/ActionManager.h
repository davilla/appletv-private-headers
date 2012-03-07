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
+ (void)cleanup;	// 0x33c648f4
+ (id)instance;	// 0x33c64930
- (id)init;	// 0x33c64858
- (id)alertMessage;	// 0x33c64c74
- (id)alertType;	// 0x33c64cfc
- (id)alertUrlString;	// 0x33c64c0c
- (void)dealloc;	// 0x33c65fa0
- (id)getAlert;	// 0x33c64cb4
- (id)getDictionary;	// 0x33c64b40
- (BOOL)haveAlert;	// 0x33c64838
- (void)registerAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x33c653e8
- (void)registerAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c652c8
- (void)registerAlertByPriority:(id)priority;	// 0x33c65db8
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x33c65848
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c65728
- (void)registerErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x33c65618
- (void)registerErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c654f8
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x33c65ca8
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c65b88
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x33c65a78
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c65958
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error priority:(unsigned)priority;	// 0x33c651a0
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c65068
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error priority:(unsigned)priority;	// 0x33c64f28
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x33c64dd8
- (void)removeAlert;	// 0x33c6498c
- (id)stringActioninJson;	// 0x33c64ab0
@end
