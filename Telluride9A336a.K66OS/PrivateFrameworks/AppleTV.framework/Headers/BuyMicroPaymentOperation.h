/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSData, ClientIdentity, NSString, MicroPaymentQueueResponse;

__attribute__((visibility("hidden")))
@interface BuyMicroPaymentOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	NSString *_buyParameters;	// 64 = 0x40
	NSData *_requestData;	// 68 = 0x44
	MicroPaymentQueueResponse *_response;	// 72 = 0x48
}
@property(retain) NSString *buyParameters;	// G=0x33bee591; S=0x33bee5a5; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x33bee5c9; S=0x33bee5dd; @synthesize=_clientIdentity
@property(retain) NSData *requestData;	// G=0x33bee601; S=0x33bee615; @synthesize=_requestData
@property(retain) MicroPaymentQueueResponse *response;	// G=0x33bee639; S=0x33bee64d; @synthesize=_response
- (id)_copyFullBuyParameters;	// 0x33bee031
- (void)_runPurchaseOperation;	// 0x33bee211
// declared property getter: - (id)buyParameters;	// 0x33bee591
// declared property getter: - (id)clientIdentity;	// 0x33bee5c9
- (void)dealloc;	// 0x33bedf0d
// declared property getter: - (id)requestData;	// 0x33bee601
// declared property getter: - (id)response;	// 0x33bee639
- (void)run;	// 0x33bedfb9
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x33bee5a5
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33bee5dd
// declared property setter: - (void)setRequestData:(id)data;	// 0x33bee615
// declared property setter: - (void)setResponse:(id)response;	// 0x33bee64d
@end

