/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference, AVAssetWriterHelper;

@interface AVAssetWriterInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	AVAssetWriterHelper *helper;	// 8 = 0x8
	dispatch_queue_s *helperReadWriteQueue;	// 12 = 0xc
}
@end

