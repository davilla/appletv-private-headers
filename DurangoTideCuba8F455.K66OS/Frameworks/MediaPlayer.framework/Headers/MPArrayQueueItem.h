/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, MPAVItem;

@interface MPArrayQueueItem : NSObject {
	NSString *_path;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	double _stopTime;	// 16 = 0x10
	MPAVItem *_rawItem;	// 24 = 0x18
	NSString *_videoID;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *path;	// G=0x335d3b3d; S=0x335d3ee5; @synthesize=_path
@property(retain, nonatomic) MPAVItem *rawItem;	// G=0x335d3ae5; S=0x335d3f0d; @synthesize=_rawItem
@property(assign, nonatomic) double startTime;	// G=0x335d3b19; S=0x335d3b29; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x335d3af5; S=0x335d3b05; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x335d3ad5; S=0x335d3f35; @synthesize=_videoID
- (void)dealloc;	// 0x335d3c05
// declared property getter: - (id)path;	// 0x335d3b3d
// declared property getter: - (id)rawItem;	// 0x335d3ae5
// declared property setter: - (void)setPath:(id)path;	// 0x335d3ee5
// declared property setter: - (void)setRawItem:(id)item;	// 0x335d3f0d
// declared property setter: - (void)setStartTime:(double)time;	// 0x335d3b29
// declared property setter: - (void)setStopTime:(double)time;	// 0x335d3b05
// declared property setter: - (void)setVideoID:(id)anId;	// 0x335d3f35
// declared property getter: - (double)startTime;	// 0x335d3b19
// declared property getter: - (double)stopTime;	// 0x335d3af5
// declared property getter: - (id)videoID;	// 0x335d3ad5
@end

