/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVCopyOrMoveTask.h"

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask {
}
@property(assign, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;	// @dynamic
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x339fbbd5
- (void)dealloc;	// 0x339fbb0d
- (id)httpMethod;	// 0x339fbb01
- (BOOL)validate:(id *)validate;	// 0x339fbb51
@end
