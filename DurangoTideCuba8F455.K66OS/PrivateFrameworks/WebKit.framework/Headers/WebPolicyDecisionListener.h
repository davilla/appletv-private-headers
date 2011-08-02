/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"
#import "WebPolicyDecisionListener.h"
#import <NSObject.h> // Unknown library

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
- (void)download;
- (void)ignore;
- (void)use;
@end

__attribute__((visibility("hidden")))
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
@private
	WebPolicyDecisionListenerPrivate *_private;	// 4 = 0x4
}
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x30542dd5
- (void)_invalidate;	// 0x30542e9d
- (void)_usePolicy:(int)policy;	// 0x30542ed1
- (void)dealloc;	// 0x30542f05
- (void)download;	// 0x30542e55
- (void)ignore;	// 0x30542e6d
- (void)use;	// 0x30542e85
@end

