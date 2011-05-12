/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

#import "MediaControl-Structs.h"
#import <NSObject.h> // Unknown library

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	dispatch_queue_s *_internalQueue;	// 4 = 0x4
	dispatch_semaphore_s *_internalSem;	// 8 = 0x8
	MediaControlClient *_client;	// 12 = 0xc
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 16 = 0x10
	dispatch_queue_s *_userQueue;	// 20 = 0x14
	BOOL _started;	// 24 = 0x18
	double _startTime;	// 28 = 0x1c
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x30008fd1; S=0x3000924d; @synthesize=_delegate
- (id)init;	// 0x3000926d
- (void)_configureEventHandler;	// 0x30009139
- (void)dealloc;	// 0x30009829
// declared property getter: - (id)delegate;	// 0x30008fd1
- (void)getFeaturesWithCompletion:(id)completion;	// 0x300098b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3000924d
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x300099f9
- (void)setHost:(id)host;	// 0x300099a9
- (void)setPassword:(id)password;	// 0x30009959
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x30009a5d
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x30009b79
@end

