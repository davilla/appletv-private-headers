/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGet : DAVRequest {
}
+ (id)getRequestWithSession:(id)session URI:(id)uri;	// 0x300824ed
+ (id)getRequestWithSession:(id)session path:(id)path;	// 0x30082525
+ (id)getRequestWithURL:(id)url;	// 0x3008255d
- (id)initGetWithSession:(id)session URI:(id)uri;	// 0x30082591
- (id)initGetWithSession:(id)session path:(id)path;	// 0x3008262d
- (id)initGetWithURL:(id)url;	// 0x300826c9
- (id)data;	// 0x300824bd
@end

