/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
@private
	AVAssetWriterInputWritingHelper *_writingHelper;	// 4 = 0x4
	dispatch_queue_s *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x3231cca5; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) dispatch_queue_s *requestQueue;	// G=0x3231ccb5; @synthesize=_requestQueue
- (id)init;	// 0x3231e74d
- (id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(dispatch_queue_s *)queue requestBlock:(id)block;	// 0x3231f7c5
- (void)_requestMediaDataIfReady;	// 0x3231f581
- (void)dealloc;	// 0x3231f781
- (void)finalize;	// 0x3231f73d
- (void)invalidate;	// 0x3231f6d5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3231f491
// declared property getter: - (id)requestBlock;	// 0x3231cca5
// declared property getter: - (dispatch_queue_s *)requestQueue;	// 0x3231ccb5
- (void)startRequestingMediaData;	// 0x3231e76d
@end

