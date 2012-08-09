/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
	BOOL _forceToServer;	// 140 = 0x8c
	NSString *_previousETag;	// 144 = 0x90
	NSString *_requestDataContentType;	// 148 = 0x94
	NSData *_requestDataPayload;	// 152 = 0x98
	BOOL _sendOrder;	// 156 = 0x9c
	int _absoluteOrder;	// 160 = 0xa0
	NSURL *_priorOrderedURL;	// 164 = 0xa4
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x304842c5; S=0x304841ad; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x30484229; S=0x30484241; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x30484259; S=0x3048426d; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x304842d5; S=0x304841d1; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x3048427d; S=0x30484291; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x304842a1; S=0x304842b5; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x30483ce1
- (id)initWithURL:(id)url;	// 0x30483cbd
// declared property getter: - (int)absoluteOrder;	// 0x304842c5
- (id)additionalHeaderValues;	// 0x30483f75
- (void)dealloc;	// 0x30483d85
- (id)description;	// 0x30483e11
// declared property getter: - (BOOL)forceToServer;	// 0x30484229
// declared property getter: - (id)previousETag;	// 0x30484259
// declared property getter: - (id)priorOrderedURL;	// 0x304842d5
- (id)requestBody;	// 0x30484175
// declared property getter: - (id)requestDataContentType;	// 0x3048427d
// declared property getter: - (id)requestDataPayload;	// 0x304842a1
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x304841ad
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x30484241
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x3048426d
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x304841d1
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x30484291
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x304842b5
@end
