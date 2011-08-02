/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
	MPMovieAccessLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x337227c9; 
@property(assign, nonatomic) MPMovieAccessLogEventInternal _internal;	// G=0x33720591; S=0x337205a1; @synthesize
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x33722709; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x33722689; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x337226c9; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x33722669; 
@property(readonly, assign, nonatomic) unsigned numberOfSegmentsDownloaded;	// G=0x33722809; 
@property(readonly, assign, nonatomic) unsigned numberOfServerAddressChanges;	// G=0x33722789; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x337226e9; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x337226a9; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x33722769; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x337227e9; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x33722749; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x33722729; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x337227a9; 
// declared property getter: - (id)URI;	// 0x337227c9
- (id)_initWithAVItemAccessLogEvent:(id)avitemAccessLogEvent;	// 0x33722885
// declared property getter: - (MPMovieAccessLogEventInternal)_internal;	// 0x33720591
- (id)copyWithZone:(NSZone *)zone;	// 0x33722829
- (void)dealloc;	// 0x3372283d
// declared property getter: - (double)durationWatched;	// 0x33722709
// declared property getter: - (double)indicatedBitrate;	// 0x33722689
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x337226c9
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x33722669
// declared property getter: - (unsigned)numberOfSegmentsDownloaded;	// 0x33722809
// declared property getter: - (unsigned)numberOfServerAddressChanges;	// 0x33722789
// declared property getter: - (int)numberOfStalls;	// 0x337226e9
// declared property getter: - (double)observedBitrate;	// 0x337226a9
// declared property getter: - (id)playbackSessionID;	// 0x33722769
// declared property getter: - (id)playbackStartDate;	// 0x337227e9
// declared property getter: - (double)playbackStartOffset;	// 0x33722749
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x33722729
// declared property getter: - (id)serverAddress;	// 0x337227a9
// declared property setter: - (void)set_internal:(MPMovieAccessLogEventInternal)internal;	// 0x337205a1
@end
