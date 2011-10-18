/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class OAMutableURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface OAServiceTicket : NSObject {
@private
	OAMutableURLRequest *request;	// 4 = 0x4
	NSURLResponse *response;	// 8 = 0x8
	BOOL succeeded;	// 12 = 0xc
	long long startRequestTime;	// 16 = 0x10
	long long endRequestTime;	// 24 = 0x18
}
@property(assign) long long endRequestTime;	// G=0x343dc8ec; S=0x343dc8a4; @synthesize
@property(retain) OAMutableURLRequest *request;	// G=0x343dc7a0; S=0x343dc76c; @synthesize
@property(retain) NSURLResponse *response;	// G=0x343dc7f4; S=0x343dc7c0; @synthesize
@property(assign) long long startRequestTime;	// G=0x343dc85c; S=0x343dc814; @synthesize
@property(assign) BOOL succeeded;	// G=0x343dc6b8; S=0x343dc6d0; @synthesize
+ (id)ticketWithRequest:(id)request response:(id)response succeeded:(BOOL)succeeded withRequestStartTime:(long long)requestStartTime withRequestEndTime:(long long)requestEndTime;	// 0x343dc6e4
- (id)initWithRequest:(id)request response:(id)response succeeded:(BOOL)succeeded withRequestStartTime:(long long)requestStartTime withRequestEndTime:(long long)requestEndTime;	// 0x343dc934
- (void)dealloc;	// 0x343dca20
// declared property getter: - (long long)endRequestTime;	// 0x343dc8ec
// declared property getter: - (id)request;	// 0x343dc7a0
// declared property getter: - (id)response;	// 0x343dc7f4
// declared property setter: - (void)setEndRequestTime:(long long)time;	// 0x343dc8a4
// declared property setter: - (void)setRequest:(id)request;	// 0x343dc76c
// declared property setter: - (void)setResponse:(id)response;	// 0x343dc7c0
// declared property setter: - (void)setStartRequestTime:(long long)time;	// 0x343dc814
// declared property setter: - (void)setSucceeded:(BOOL)succeeded;	// 0x343dc6d0
// declared property getter: - (long long)startRequestTime;	// 0x343dc85c
// declared property getter: - (BOOL)succeeded;	// 0x343dc6b8
@end

