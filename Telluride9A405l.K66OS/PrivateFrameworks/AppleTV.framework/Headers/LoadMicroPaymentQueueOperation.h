/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class MicroPaymentQueueResponse, MicroPaymentQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueueOperation : ISOperation {
@private
	int _expectedCount;	// 60 = 0x3c
	NSString *_queueCountURLBagKey;	// 64 = 0x40
	NSString *_queuePaymentsURLBagKey;	// 68 = 0x44
	MicroPaymentQueueRequest *_request;	// 72 = 0x48
	MicroPaymentQueueResponse *_response;	// 76 = 0x4c
}
@property(assign) int expectedCount;	// G=0x35f5f5e1; S=0x35f5f5f1; @synthesize=_expectedCount
@property(retain) NSString *queueCountURLBagKey;	// G=0x35f5f601; S=0x35f5f615; @synthesize=_queueCountURLBagKey
@property(retain) NSString *queuePaymentsURLBagKey;	// G=0x35f5f639; S=0x35f5f64d; @synthesize=_queuePaymentsURLBagKey
@property(copy) MicroPaymentQueueRequest *request;	// G=0x35f5f671; S=0x35f5f685; @synthesize=_request
@property(retain) MicroPaymentQueueResponse *response;	// G=0x35f5f6a9; S=0x35f5f6bd; @synthesize=_response
- (BOOL)_getQueueCount:(int *)count error:(id *)error;	// 0x35f5f3a9
- (BOOL)_loadPaymentsWithExpectedCount:(int)expectedCount error:(id *)error;	// 0x35f5f4d1
- (void)dealloc;	// 0x35f5f229
// declared property getter: - (int)expectedCount;	// 0x35f5f5e1
// declared property getter: - (id)queueCountURLBagKey;	// 0x35f5f601
// declared property getter: - (id)queuePaymentsURLBagKey;	// 0x35f5f639
// declared property getter: - (id)request;	// 0x35f5f671
// declared property getter: - (id)response;	// 0x35f5f6a9
- (void)run;	// 0x35f5f2b1
// declared property setter: - (void)setExpectedCount:(int)count;	// 0x35f5f5f1
// declared property setter: - (void)setQueueCountURLBagKey:(id)key;	// 0x35f5f615
// declared property setter: - (void)setQueuePaymentsURLBagKey:(id)key;	// 0x35f5f64d
// declared property setter: - (void)setRequest:(id)request;	// 0x35f5f685
// declared property setter: - (void)setResponse:(id)response;	// 0x35f5f6bd
@end

