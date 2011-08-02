/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURLResponse, OAMutableURLRequest;

__attribute__((visibility("hidden")))
@interface OAServiceTicket : NSObject {
@private
	OAMutableURLRequest *request;	// 4 = 0x4
	NSURLResponse *response;	// 8 = 0x8
	BOOL succeeded;	// 12 = 0xc
	long long startRequestTime;	// 16 = 0x10
	long long endRequestTime;	// 24 = 0x18
}
@property(assign) long long endRequestTime;	// G=0x3073c18c; S=0x3073c14c; @synthesize
@property(retain) OAMutableURLRequest *request;	// G=0x3073c1cc; S=0x3073c20c; @synthesize
@property(retain) NSURLResponse *response;	// G=0x3073c1ec; S=0x3073c244; @synthesize
@property(assign) long long startRequestTime;	// G=0x3073c10c; S=0x3073c0cc; @synthesize
@property(assign) BOOL succeeded;	// G=0x3073be8c; S=0x3073bea0; @synthesize
+ (id)ticketWithRequest:(id)request response:(id)response succeeded:(BOOL)succeeded withRequestStartTime:(long long)requestStartTime withRequestEndTime:(long long)requestEndTime;	// 0x3073beb4
- (id)initWithRequest:(id)request response:(id)response succeeded:(BOOL)succeeded withRequestStartTime:(long long)requestStartTime withRequestEndTime:(long long)requestEndTime;	// 0x3073bf38
- (void)dealloc;	// 0x3073c010
// declared property getter: - (long long)endRequestTime;	// 0x3073c18c
// declared property getter: - (id)request;	// 0x3073c1cc
// declared property getter: - (id)response;	// 0x3073c1ec
// declared property setter: - (void)setEndRequestTime:(long long)time;	// 0x3073c14c
// declared property setter: - (void)setRequest:(id)request;	// 0x3073c20c
// declared property setter: - (void)setResponse:(id)response;	// 0x3073c244
// declared property setter: - (void)setStartRequestTime:(long long)time;	// 0x3073c0cc
// declared property setter: - (void)setSucceeded:(BOOL)succeeded;	// 0x3073bea0
// declared property getter: - (long long)startRequestTime;	// 0x3073c10c
// declared property getter: - (BOOL)succeeded;	// 0x3073be8c
@end

