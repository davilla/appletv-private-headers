/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPMovie : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double duration;	// G=0x33793ee9; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x337939d1; S=0x337939b1; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x33794365; 
@property(assign, nonatomic) int movieSourceType;	// G=0x33793959; S=0x33793f15; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3379446d; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x33793ebd; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x33793995; S=0x33793975; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x3379393d; 
+ (id)movieWithURL:(id)url error:(id *)error;	// 0x33794321
- (id)_MPArrayQueueItem;	// 0x337939ed
- (void)_determineMediaType;	// 0x3379449d
- (void)_durationAvailableNotification:(id)notification;	// 0x33793e05
- (void)_fileValidationDidFinishNotification:(id)_fileValidation;	// 0x33793afd
- (id)_initWithURL:(id)url error:(id *)error;	// 0x33794149
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x337943a9
- (void)_typeAvailableNotification:(id)notification;	// 0x33793d55
- (void)dealloc;	// 0x33793f99
// declared property getter: - (double)duration;	// 0x33793ee9
// declared property getter: - (double)endPlaybackTime;	// 0x337939d1
// declared property getter: - (int)movieMediaTypes;	// 0x33794365
// declared property getter: - (int)movieSourceType;	// 0x33793959
// declared property getter: - (CGSize)naturalSize;	// 0x3379446d
// declared property getter: - (double)playableDuration;	// 0x33793ebd
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x337939b1
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x33793f15
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x33793975
// declared property getter: - (double)startPlaybackTime;	// 0x33793995
// declared property getter: - (id)url;	// 0x3379393d
@end

