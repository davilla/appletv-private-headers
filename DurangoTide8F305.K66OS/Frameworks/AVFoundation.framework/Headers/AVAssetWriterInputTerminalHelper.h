/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper {
@private
	int _terminalStatus;	// 12 = 0xc
	BOOL _didRequestMediaDataOnce;	// 16 = 0x10
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x34752b55
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x34753acd
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x34753661
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x347536cd
- (BOOL)isReadyForMoreMediaData;	// 0x34753719
- (void)markAsFinished;	// 0x34753621
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x34755a15
- (int)status;	// 0x347525b9
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x347525c9
@end

