/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVLock : DAVRequest {
}
+ (id)lockRequestWithSession:(id)session path:(id)path;	// 0x32da33d1
+ (id)lockRequestWithURL:(id)url;	// 0x32da3409
+ (id)relockRequestWithSession:(id)session path:(id)path lockToken:(id)token;	// 0x32da31d5
+ (id)relockRequestWithURL:(id)url lockToken:(id)token;	// 0x32da3219
- (id)initLockWithSession:(id)session path:(id)path;	// 0x32da335d
- (id)initLockWithURL:(id)url;	// 0x32da339d
- (id)initRelockWithSession:(id)session path:(id)path lockToken:(id)token;	// 0x32da3159
- (id)initRelockWithURL:(id)url lockToken:(id)token;	// 0x32da319d
- (void)_initLockRequest;	// 0x32da343d
- (void)_initRelockRequestWithToken:(id)token;	// 0x32da3251
- (id)dependenciesList;	// 0x32da3025
- (void)finalizeOperation;	// 0x32da2fa5
- (int)lockTimeout;	// 0x32da30f9
- (id)lockToken;	// 0x32da3129
@end
