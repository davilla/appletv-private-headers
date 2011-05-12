/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
@private
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x326d5e8d; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x326d5609; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x326d54c1; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x326d5569; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x326d5475; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x326d5751; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x326d5705; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x326d55bd; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x326d5515; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x326d5dd5; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x326d5e31; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x326d56b1; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x326d565d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x326d5ee9; 
- (id)init;	// 0x326d586d
- (id)initWithDictionary:(id)dictionary;	// 0x326d57b1
// declared property getter: - (id)URI;	// 0x326d5e8d
- (id)copyWithZone:(NSZone *)zone;	// 0x326d579d
- (void)dealloc;	// 0x326d5a91
// declared property getter: - (double)durationWatched;	// 0x326d5609
- (void)finalize;	// 0x326d5af9
// declared property getter: - (double)indicatedBitrate;	// 0x326d54c1
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x326d5569
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x326d5475
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x326d5751
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x326d5705
// declared property getter: - (int)numberOfStalls;	// 0x326d55bd
// declared property getter: - (double)observedBitrate;	// 0x326d5515
// declared property getter: - (id)playbackSessionID;	// 0x326d5dd5
// declared property getter: - (id)playbackStartDate;	// 0x326d5e31
// declared property getter: - (double)playbackStartOffset;	// 0x326d56b1
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x326d565d
// declared property getter: - (id)serverAddress;	// 0x326d5ee9
@end

