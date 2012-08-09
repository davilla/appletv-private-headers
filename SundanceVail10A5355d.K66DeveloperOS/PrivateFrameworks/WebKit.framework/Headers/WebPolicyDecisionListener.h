/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "WebPolicyDecisionListener.h"

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
- (void)download;
- (void)ignore;
- (void)use;
@end

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
	WebPolicyDecisionListenerPrivate *_private;	// 4 = 0x4
}
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x316eba49
- (void)_invalidate;	// 0x316ebb41
- (void)_usePolicy:(int)policy;	// 0x316ebb0d
- (void)dealloc;	// 0x316ebac1
- (void)download;	// 0x316ebb9d
- (void)ignore;	// 0x316ebb89
- (void)use;	// 0x316ebb75
@end
