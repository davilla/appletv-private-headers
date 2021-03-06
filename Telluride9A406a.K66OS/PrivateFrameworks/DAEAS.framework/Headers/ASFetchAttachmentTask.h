/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFetchAttachmentTaskProtocol.h"
#import "ASTask.h"

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
	NSString *_messageServerID;	// 104 = 0x68
	NSString *_attachmentName;	// 108 = 0x6c
}
@property(readonly, retain) NSString *attachmentName;	// G=0x343d7fe5; converted property
- (id)initForMessageServerID:(id)messageServerID andAttachmentName:(id)name;	// 0x343d8005
// converted property getter: - (id)attachmentName;	// 0x343d7fe5
- (id)command;	// 0x343d7d99
- (int)commandCode;	// 0x343d7cd5
- (int)connectionActionForResponse:(id)response;	// 0x343d7cd1
- (id)contentType;	// 0x343d7e09
- (void)dealloc;	// 0x343d8079
- (BOOL)expectsWBXML;	// 0x343d7ccd
- (void)finishWithError:(id)error;	// 0x343d7b21
- (id)messageID;	// 0x343d7ff5
- (id)parameterData;	// 0x343d7cd9
- (BOOL)processContext:(id)context;	// 0x343d7e0d
- (id)requestBody;	// 0x343d7cc9
- (BOOL)shouldLogIncomingData;	// 0x343d80d9
@end

