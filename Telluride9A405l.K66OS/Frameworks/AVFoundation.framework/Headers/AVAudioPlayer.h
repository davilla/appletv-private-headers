/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSData, NSURL, NSDictionary;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x34686a3d; S=0x3468649d; @dynamic
@property(readonly, assign) NSData *data;	// G=0x34685465; @dynamic
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x34685479; S=0x34685975; @dynamic
@property(readonly, assign) double deviceCurrentTime;	// G=0x346868e9; @dynamic
@property(readonly, assign) double duration;	// G=0x34686f0d; 
@property(assign) BOOL enableRate;	// G=0x346854b5; S=0x34686d25; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x3468552d; S=0x346863a5; @dynamic
@property(readonly, assign) unsigned numberOfChannels;	// G=0x346854f1; @dynamic
@property(assign) int numberOfLoops;	// G=0x34685519; S=0x34685505; @dynamic
@property(assign) float pan;	// G=0x346854dd; S=0x34686b35; @dynamic
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x34685435; @dynamic
@property(assign) float rate;	// G=0x346854c9; S=0x34686c09; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x3468548d; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x34685451; @dynamic
@property(assign) float volume;	// G=0x346854a1; S=0x34686e3d; @dynamic
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x34687519
- (id)initWithData:(id)data error:(id *)error;	// 0x34687421
- (float)averagePowerForChannel:(unsigned)channel;	// 0x3468557d
- (id)baseInit;	// 0x34685905
- (void)beginInterruption;	// 0x34685a4d
// declared property getter: - (double)currentTime;	// 0x34686a3d
// declared property getter: - (id)data;	// 0x34685465
- (void)dealloc;	// 0x346875f5
- (void)decodeError;	// 0x346859bd
// declared property getter: - (id)delegate;	// 0x34685479
// declared property getter: - (double)deviceCurrentTime;	// 0x346868e9
// declared property getter: - (double)duration;	// 0x34686f0d
// declared property getter: - (BOOL)enableRate;	// 0x346854b5
- (void)endInterruption;	// 0x34685a99
- (void)endInterruptionWithFlags;	// 0x34685a71
- (void)finalize;	// 0x34686351
- (void)finishedPlaying;	// 0x34685f91
- (AudioPlayerImpl *)impl;	// 0x34685425
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x3468552d
// declared property getter: - (BOOL)isPlaying;	// 0x34685435
// declared property getter: - (unsigned)numberOfChannels;	// 0x346854f1
// declared property getter: - (int)numberOfLoops;	// 0x34685519
// declared property getter: - (float)pan;	// 0x346854dd
- (void)pause;	// 0x34686f81
- (float)peakPowerForChannel:(unsigned)channel;	// 0x34685541
- (BOOL)play;	// 0x346871dd
- (BOOL)playAtTime:(double)time;	// 0x3468705d
- (BOOL)prepareToPlay;	// 0x34687321
- (void)privCommonCleanup;	// 0x346862e1
// declared property getter: - (float)rate;	// 0x346854c9
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x3468649d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34685975
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x34686d25
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x346863a5
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x34685505
// declared property setter: - (void)setPan:(float)pan;	// 0x34686b35
// declared property setter: - (void)setRate:(float)rate;	// 0x34686c09
// declared property setter: - (void)setVolume:(float)volume;	// 0x34686e3d
// declared property getter: - (id)settings;	// 0x3468548d
- (void)stop;	// 0x346860ad
- (void)updateMeters;	// 0x34686195
// declared property getter: - (id)url;	// 0x34685451
// declared property getter: - (float)volume;	// 0x346854a1
@end

