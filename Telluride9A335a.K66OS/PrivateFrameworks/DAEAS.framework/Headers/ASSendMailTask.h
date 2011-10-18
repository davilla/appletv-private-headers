/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSData, NSString;

@interface ASSendMailTask : ASTask {
	NSData *_mimeMessage;	// 104 = 0x68
	NSString *_messageID;	// 108 = 0x6c
}
- (id)initWithMessage:(id)message messageID:(id)anId;	// 0x321d9185
- (id)command;	// 0x321d9a15
- (int)commandCode;	// 0x321d99d1
- (int)connectionActionForResponse:(id)response;	// 0x321d9af5
- (id)contentType;	// 0x321d9a69
- (void)dealloc;	// 0x321d9211
- (BOOL)expectsWBXML;	// 0x321d9abd
- (void)finishWithError:(id)error;	// 0x321d92e1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321d9af9
- (id)parameterData;	// 0x321d99d5
- (BOOL)processContext:(id)context;	// 0x321d9b0d
- (id)requestBody;	// 0x321d9865
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x321d9599
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x321d9271
@end

