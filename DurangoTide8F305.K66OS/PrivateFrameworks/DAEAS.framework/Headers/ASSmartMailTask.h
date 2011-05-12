/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSendMailTask.h"

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {
	int _messageType;	// 112 = 0x70
	NSString *_originalMessageId;	// 116 = 0x74
	NSString *_originalFolderId;	// 120 = 0x78
	NSString *_originalLongId;	// 124 = 0x7c
	BOOL _retryWithoutReferences;	// 128 = 0x80
}
- (id)initWithMessage:(id)message messageID:(id)anId messageType:(int)type originalMessageID:(id)anId4 originalFolderID:(id)anId5 originalLongID:(id)anId6;	// 0x30340109
- (id)command;	// 0x3033ff81
- (int)commandCode;	// 0x3033ffe1
- (id)contentType;	// 0x3033ff01
- (void)dealloc;	// 0x3034009d
- (BOOL)expectsWBXML;	// 0x3033ff0d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3033ff11
- (void)handleTopLevelErrorStatus:(id)status;	// 0x30340901
- (id)parameterData;	// 0x30340031
- (BOOL)processContext:(id)context;	// 0x303404ad
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x3034018d
@end

