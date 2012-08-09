/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSInvocation;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject {
	BOOL _enableUserInteraction;	// 4 = 0x4
	int _reqcnt;	// 8 = 0x8
	NSInvocation *_presentInvocation;	// 12 = 0xc
	id _cancellationHandler;	// 16 = 0x10
	double _timeout;	// 20 = 0x14
	NSObject<OS_dispatch_source> *_timerSource;	// 28 = 0x1c
}
@property(copy, nonatomic) id cancellationHandler;	// G=0x3041c43d; S=0x3041c451; @synthesize=_cancellationHandler
@property(retain, nonatomic) NSInvocation *presentInvocation;	// G=0x3041c461; S=0x3041c471; @synthesize=_presentInvocation
- (id)initWithTimeout:(double)timeout cancellationHandler:(id)handler;	// 0x3041bef1
- (void)beginDelayedPresentation;	// 0x3041c191
- (void)cancelDelayedPresentation:(BOOL)presentation;	// 0x3041c081
// declared property getter: - (id)cancellationHandler;	// 0x3041c43d
- (void)dealloc;	// 0x3041bf6d
- (int)decrementRequestCount;	// 0x3041c051
- (id)delayingController;	// 0x3041c005
- (void)finishDelayedPresentation:(id)presentation;	// 0x3041c351
- (int)incrementRequestCount;	// 0x3041c069
- (id)invocationTarget;	// 0x3041bfe5
// declared property getter: - (id)presentInvocation;	// 0x3041c461
- (int)requestCount;	// 0x3041c041
// declared property setter: - (void)setCancellationHandler:(id)handler;	// 0x3041c451
// declared property setter: - (void)setPresentInvocation:(id)invocation;	// 0x3041c471
@end
