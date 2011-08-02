/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSString, NSData;

@interface CoreDAVPostOrPutTask : CoreDAVTask {
	BOOL _forceToServer;	// 104 = 0x68
	NSString *_previousETag;	// 108 = 0x6c
	NSString *_requestDataContentType;	// 112 = 0x70
	NSData *_requestDataPayload;	// 116 = 0x74
	BOOL _sendOrder;	// 120 = 0x78
	int _order;	// 124 = 0x7c
}
@property(assign) BOOL forceToServer;	// G=0x3317f471; S=0x3317f481; @synthesize=_forceToServer
@property(assign, nonatomic) int order;	// G=0x3317f461; S=0x3317f445; @synthesize=_order
@property(retain) NSString *previousETag;	// G=0x3317fa79; S=0x3317faed; @synthesize=_previousETag
@property(retain) NSString *requestDataContentType;	// G=0x3317fa91; S=0x3317fb19; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x3317faa9; S=0x3317fb45; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x3317f9d9
- (id)initWithURL:(id)url;	// 0x3317f6d9
- (id)additionalHeaderValues;	// 0x3317f5a5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3317f549
- (void)dealloc;	// 0x3317f979
- (id)description;	// 0x3317f839
// declared property getter: - (BOOL)forceToServer;	// 0x3317f471
// declared property getter: - (int)order;	// 0x3317f461
// declared property getter: - (id)previousETag;	// 0x3317fa79
- (id)requestBody;	// 0x3317f575
// declared property getter: - (id)requestDataContentType;	// 0x3317fa91
// declared property getter: - (id)requestDataPayload;	// 0x3317faa9
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x3317f481
// declared property setter: - (void)setOrder:(int)order;	// 0x3317f445
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x3317faed
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x3317fb19
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x3317fb45
@end

