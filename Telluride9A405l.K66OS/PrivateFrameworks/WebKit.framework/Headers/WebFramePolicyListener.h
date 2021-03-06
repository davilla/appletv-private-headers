/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"
#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
@private
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x35382d91
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x35382d95
- (void)continue;	// 0x353c78d1
- (void)dealloc;	// 0x3538546d
- (void)download;	// 0x353c78bd
- (void)finalize;	// 0x353c7921
- (void)ignore;	// 0x353c78a9
- (void)invalidate;	// 0x353c78e5
- (void)receivedPolicyDecision:(int)decision;	// 0x35382ed9
- (void)use;	// 0x35382ec5
@end

