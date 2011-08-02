/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
	MPMovieErrorLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x335c457d; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x335c25b1; S=0x335c25c1; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x335c459d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x335c44dd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x335c44fd; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x335c451d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x335c453d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x335c455d; 
// declared property getter: - (id)URI;	// 0x335c457d
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x335c4619
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x335c25b1
- (id)copyWithZone:(NSZone *)zone;	// 0x335c45bd
// declared property getter: - (id)date;	// 0x335c459d
- (void)dealloc;	// 0x335c45d1
// declared property getter: - (id)errorComment;	// 0x335c44dd
// declared property getter: - (id)errorDomain;	// 0x335c44fd
// declared property getter: - (int)errorStatusCode;	// 0x335c451d
// declared property getter: - (id)playbackSessionID;	// 0x335c453d
// declared property getter: - (id)serverAddress;	// 0x335c455d
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x335c25c1
@end

