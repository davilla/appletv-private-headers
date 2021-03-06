/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL, NSData, NSString;

@interface CoreDAVPostOrPutTask : CoreDAVTask {
	BOOL _forceToServer;	// 120 = 0x78
	NSString *_previousETag;	// 124 = 0x7c
	NSString *_requestDataContentType;	// 128 = 0x80
	NSData *_requestDataPayload;	// 132 = 0x84
	BOOL _sendOrder;	// 136 = 0x88
	int _absoluteOrder;	// 140 = 0x8c
	NSURL *_priorOrderedURL;	// 144 = 0x90
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x30fede91; S=0x30fedd49; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x30feddc9; S=0x30feddd9; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x30fedde9; S=0x30feddfd; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x30fedea1; S=0x30fedd6d; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x30fede21; S=0x30fede35; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x30fede59; S=0x30fede6d; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x30fed82d
- (id)initWithURL:(id)url;	// 0x30fed809
// declared property getter: - (int)absoluteOrder;	// 0x30fede91
- (id)additionalHeaderValues;	// 0x30fedac9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30fedd15
- (void)dealloc;	// 0x30fed8cd
- (id)description;	// 0x30fed955
// declared property getter: - (BOOL)forceToServer;	// 0x30feddc9
// declared property getter: - (id)previousETag;	// 0x30fedde9
// declared property getter: - (id)priorOrderedURL;	// 0x30fedea1
- (id)requestBody;	// 0x30fedcdd
// declared property getter: - (id)requestDataContentType;	// 0x30fede21
// declared property getter: - (id)requestDataPayload;	// 0x30fede59
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x30fedd49
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x30feddd9
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x30feddfd
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x30fedd6d
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x30fede35
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x30fede6d
@end

