/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {
	double _duration;	// 4 = 0x4
	unsigned _index;	// 12 = 0xc
	double _time;	// 16 = 0x10
	NSString *_title;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
	int _markerType;	// 32 = 0x20
	NSDictionary *_metadata;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) double comparableTime;	// G=0x336cc831; 
@property(assign, nonatomic) double duration;	// G=0x336cc90d; S=0x336cc925; @synthesize=_duration
@property(readonly, assign, nonatomic) BOOL hasArtworkAtPlaybackTime;	// G=0x336cc889; 
@property(assign, nonatomic) unsigned index;	// G=0x336cc939; S=0x336cc949; @synthesize=_index
@property(readonly, assign, nonatomic) int markerType;	// G=0x336cc9b5; @synthesize=_markerType
@property(readonly, assign, nonatomic) double maxTime;	// G=0x336cc859; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x336cc9c5; S=0x336cc9d5; @synthesize=_metadata
@property(assign, nonatomic) double time;	// G=0x336cc959; S=0x336cc971; @synthesize=_time
@property(retain, nonatomic) NSString *title;	// G=0x336cc985; S=0x336cc8a9; @synthesize=_title
@property(retain, nonatomic) NSURL *url;	// G=0x336cc995; S=0x336cc9a5; @synthesize=_url
- (id)initWithMarkerType:(int)markerType;	// 0x336cc5b1
// declared property getter: - (double)comparableTime;	// 0x336cc831
- (void)dealloc;	// 0x336cc7c1
- (id)description;	// 0x336cc5f1
// declared property getter: - (double)duration;	// 0x336cc90d
// declared property getter: - (BOOL)hasArtworkAtPlaybackTime;	// 0x336cc889
// declared property getter: - (unsigned)index;	// 0x336cc939
// declared property getter: - (int)markerType;	// 0x336cc9b5
// declared property getter: - (double)maxTime;	// 0x336cc859
// declared property getter: - (id)metadata;	// 0x336cc9c5
// declared property setter: - (void)setDuration:(double)duration;	// 0x336cc925
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x336cc949
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x336cc9d5
// declared property setter: - (void)setTime:(double)time;	// 0x336cc971
// declared property setter: - (void)setTitle:(id)title;	// 0x336cc8a9
// declared property setter: - (void)setUrl:(id)url;	// 0x336cc9a5
// declared property getter: - (double)time;	// 0x336cc959
// declared property getter: - (id)title;	// 0x336cc985
// declared property getter: - (id)url;	// 0x336cc995
- (id)urlTitleTrimmingCharacterSet;	// 0x336cc88d
@end

