/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVDelete : DAVRequest {
}
+ (id)deleteRequestWithSession:(id)session URI:(id)uri;	// 0x314cf391
+ (id)deleteRequestWithSession:(id)session path:(id)path;	// 0x314cf3bd
+ (id)deleteRequestWithURL:(id)url;	// 0x314cf3e9
- (id)initDeleteWithSession:(id)session URI:(id)uri;	// 0x314cf319
- (id)initDeleteWithSession:(id)session path:(id)path;	// 0x314cf345
- (id)initDeleteWithURL:(id)url;	// 0x314cf371
- (id)dependenciesList;	// 0x314cf251
@end

