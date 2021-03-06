/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
	SSPlayInfoRequestContext *_context;	// 28 = 0x1c
	SSPlayInfoResponse *_response;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSPlayInfoRequestContext *playInfoContext;	// G=0x31929d3d; 
@property(readonly, assign) SSPlayInfoResponse *playInfoResponse;	// G=0x31929d75; 
- (id)init;	// 0x31929c01
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x31929c15
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3192a705
- (id)copyXPCEncoding;	// 0x3192a611
- (void)dealloc;	// 0x31929cd9
// declared property getter: - (id)playInfoContext;	// 0x31929d3d
// declared property getter: - (id)playInfoResponse;	// 0x31929d75
- (BOOL)start;	// 0x3192a36d
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3192a599
- (void)startWithPlayInfoResponseBlock:(id)playInfoResponseBlock;	// 0x31929f39
@end

