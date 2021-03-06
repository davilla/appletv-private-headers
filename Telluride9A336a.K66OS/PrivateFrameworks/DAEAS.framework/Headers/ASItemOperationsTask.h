/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class ASMailMessage, NSArray;

@interface ASItemOperationsTask : ASTask {
	NSArray *_commands;	// 104 = 0x68
	int _numReplacedItems;	// 108 = 0x6c
	int _bodyTruncationBytes;	// 112 = 0x70
	int _mimeSupport;	// 116 = 0x74
	ASMailMessage *_streamingMailMessage;	// 120 = 0x78
}
@property(retain) NSArray *commands;	// G=0x31556d3d; S=0x31556d4d; converted property
@property(readonly, assign) int mimeSupport;	// G=0x31556cf5; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x31557b29; S=0x31557b39; converted property
- (id)init;	// 0x31556ca5
- (int)_mimeSupportCode;	// 0x31556d91
- (int)bodyType;	// 0x31556d15
- (int)commandCode;	// 0x31556c41
// converted property getter: - (id)commands;	// 0x31556d3d
- (void)dealloc;	// 0x31556c45
- (void)finishWithError:(id)error;	// 0x315577f9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x315572ed
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x3155710d
// converted property getter: - (int)mimeSupport;	// 0x31556cf5
- (BOOL)processContext:(id)context;	// 0x31557301
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x31557281
- (id)requestBody;	// 0x31556dcd
- (void)setBodyTruncationBytes:(int)bytes;	// 0x31556d2d
// converted property setter: - (void)setCommands:(id)commands;	// 0x31556d4d
- (void)setMIMESupport:(int)support;	// 0x31556d05
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x31557b39
// converted property getter: - (id)streamingMailMessage;	// 0x31557b29
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31557a99
@end

