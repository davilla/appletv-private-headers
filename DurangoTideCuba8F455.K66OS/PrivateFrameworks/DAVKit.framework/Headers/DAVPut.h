/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVPut : DAVRequest {
}
+ (id)putRequestWithSession:(id)session URI:(id)uri data:(id)data;	// 0x314c777d
+ (id)putRequestWithSession:(id)session path:(id)path data:(id)data;	// 0x314c77c1
+ (id)putRequestWithURL:(id)url data:(id)data;	// 0x314c7805
- (id)initPutWithSession:(id)session URI:(id)uri data:(id)data;	// 0x314c783d
- (id)initPutWithSession:(id)session path:(id)path data:(id)data;	// 0x314c7881
- (id)initPutWithURL:(id)url data:(id)data;	// 0x314c78c5
- (long long)operationProgress;	// 0x314c7769
- (long long)operationTotal;	// 0x314c7755
@end

