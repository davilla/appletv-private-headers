/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x30607a6d
- (id)init;	// 0x306076dd
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x30607fb5
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x30607fa5
- (id)allIncomingMessages;	// 0x30608155
- (id)decodeMessage:(id)message;	// 0x3060774d
- (id)deferredMessageWithId:(unsigned)anId;	// 0x306087e9
- (id)encodeMessage:(id)message;	// 0x3060776d
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x30608295
- (int)incomingMessageCount;	// 0x306085fd
- (id)incomingMessageWithId:(unsigned)anId;	// 0x30608835
- (id)incomingMessageWithId:(unsigned)anId telephonyCenter:(CTTelephonyCenterRef)center isDeferred:(BOOL)deferred;	// 0x30607fc5
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x306083cd
- (BOOL)isMmsConfigured;	// 0x3060834d
- (BOOL)isMmsEnabled;	// 0x30607735
- (XXStruct_K5nmsA)send:(id)send;	// 0x30607d19
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x30607bcd
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x30607d3d
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x3060863d
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x3060778d
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x30608455
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x30607709
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x30607ab1
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x3060839d
- (id)statusOfOutgoingMessages;	// 0x306086e9
@end

