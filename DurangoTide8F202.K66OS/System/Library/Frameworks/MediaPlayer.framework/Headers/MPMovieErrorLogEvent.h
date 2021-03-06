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
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x31d6857d; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x31d665b1; S=0x31d665c1; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x31d6859d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x31d684dd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x31d684fd; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x31d6851d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x31d6853d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x31d6855d; 
// declared property getter: - (id)URI;	// 0x31d6857d
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x31d68619
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x31d665b1
- (id)copyWithZone:(NSZone *)zone;	// 0x31d685bd
// declared property getter: - (id)date;	// 0x31d6859d
- (void)dealloc;	// 0x31d685d1
// declared property getter: - (id)errorComment;	// 0x31d684dd
// declared property getter: - (id)errorDomain;	// 0x31d684fd
// declared property getter: - (int)errorStatusCode;	// 0x31d6851d
// declared property getter: - (id)playbackSessionID;	// 0x31d6853d
// declared property getter: - (id)serverAddress;	// 0x31d6855d
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x31d665c1
@end

