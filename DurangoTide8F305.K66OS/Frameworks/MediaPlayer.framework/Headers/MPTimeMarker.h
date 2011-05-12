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
	id _thumbnail;	// 16 = 0x10
	double _time;	// 20 = 0x14
	NSString *_title;	// 28 = 0x1c
	NSURL *_url;	// 32 = 0x20
	int _markerType;	// 36 = 0x24
	NSDictionary *_metadata;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) double comparableTime;	// G=0x33735205; 
@property(assign, nonatomic) double duration;	// G=0x337352ed; S=0x337352fd; @synthesize=_duration
@property(assign, nonatomic) unsigned index;	// G=0x337352cd; S=0x337352dd; @synthesize=_index
@property(readonly, assign, nonatomic) int markerType;	// G=0x33735269; @synthesize=_markerType
@property(readonly, assign, nonatomic) double maxTime;	// G=0x3373522d; 
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x33735259; S=0x3373573d; @synthesize=_metadata
@property(retain, nonatomic) id thumbnail;	// G=0x337352bd; S=0x337356ed; @synthesize=_thumbnail
@property(assign, nonatomic) double time;	// G=0x33735299; S=0x337352a9; @synthesize=_time
@property(retain, nonatomic) NSString *title;	// G=0x33735289; S=0x33735545; @synthesize=_title
@property(retain, nonatomic) NSURL *url;	// G=0x33735279; S=0x33735715; @synthesize=_url
- (id)initWithMarkerType:(int)markerType;	// 0x33735311
// declared property getter: - (double)comparableTime;	// 0x33735205
- (void)dealloc;	// 0x337355c1
- (id)description;	// 0x33735635
// declared property getter: - (double)duration;	// 0x337352ed
// declared property getter: - (unsigned)index;	// 0x337352cd
// declared property getter: - (int)markerType;	// 0x33735269
// declared property getter: - (double)maxTime;	// 0x3373522d
// declared property getter: - (id)metadata;	// 0x33735259
// declared property setter: - (void)setDuration:(double)duration;	// 0x337352fd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x337352dd
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3373573d
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x337356ed
// declared property setter: - (void)setTime:(double)time;	// 0x337352a9
// declared property setter: - (void)setTitle:(id)title;	// 0x33735545
// declared property setter: - (void)setUrl:(id)url;	// 0x33735715
// declared property getter: - (id)thumbnail;	// 0x337352bd
// declared property getter: - (double)time;	// 0x33735299
// declared property getter: - (id)title;	// 0x33735289
// declared property getter: - (id)url;	// 0x33735279
- (id)urlTitleTrimmingCharacterSet;	// 0x337355a1
@end

