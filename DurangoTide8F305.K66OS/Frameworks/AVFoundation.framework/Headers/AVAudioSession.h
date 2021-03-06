/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol AVAudioSessionDelegate;

@interface AVAudioSession : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSString *category;	// G=0x3472d8e1; @dynamic
@property(readonly, assign) int currentHardwareInputNumberOfChannels;	// G=0x3472d7a1; @dynamic
@property(readonly, assign) int currentHardwareOutputNumberOfChannels;	// G=0x3472d769; @dynamic
@property(readonly, assign) double currentHardwareSampleRate;	// G=0x3472d85d; @dynamic
@property(assign) id<AVAudioSessionDelegate> delegate;	// G=0x3472d5e1; S=0x3472d5ed; @dynamic
@property(readonly, assign) BOOL inputIsAvailable;	// G=0x3472d8a1; @dynamic
@property(readonly, assign) double preferredHardwareSampleRate;	// G=0x3472d819; @dynamic
@property(readonly, assign) double preferredIOBufferDuration;	// G=0x3472d7d9; @dynamic
+ (id)sharedInstance;	// 0x3472d719
// declared property getter: - (id)category;	// 0x3472d8e1
// declared property getter: - (int)currentHardwareInputNumberOfChannels;	// 0x3472d7a1
// declared property getter: - (int)currentHardwareOutputNumberOfChannels;	// 0x3472d769
// declared property getter: - (double)currentHardwareSampleRate;	// 0x3472d85d
// declared property getter: - (id)delegate;	// 0x3472d5e1
// declared property getter: - (BOOL)inputIsAvailable;	// 0x3472d8a1
// declared property getter: - (double)preferredHardwareSampleRate;	// 0x3472d819
// declared property getter: - (double)preferredIOBufferDuration;	// 0x3472d7d9
- (void)privateBeginInterruption;	// 0x3472d6c5
- (void)privateEndInterruption;	// 0x3472d6a5
- (void)privateEndInterruptionWithFlags:(id)flags;	// 0x3472d671
- (void)privateInputIsAvailableChanged:(id)changed;	// 0x3472d6e5
- (BOOL)setActive:(BOOL)active error:(id *)error;	// 0x3472de01
- (BOOL)setActive:(BOOL)active withFlags:(int)flags error:(id *)error;	// 0x3472de5d
- (BOOL)setCategory:(id)category error:(id *)error;	// 0x3472dca1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3472d5ed
- (BOOL)setPreferredHardwareSampleRate:(double)rate error:(id *)error;	// 0x3472dc39
- (BOOL)setPreferredIOBufferDuration:(double)duration error:(id *)error;	// 0x3472dbbd
@end

