/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying> {
	MPMovieErrorLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;	// G=0x335c2571; S=0x335c2581; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x335c89c9; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x335c48f5; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x335c48d5; 
- (id)_initWithAVItemErrorLog:(id)avitemErrorLog;	// 0x335c4971
// declared property getter: - (MPMovieErrorLogInternal)_internal;	// 0x335c2571
- (id)copyWithZone:(NSZone *)zone;	// 0x335c4915
- (void)dealloc;	// 0x335c4929
// declared property getter: - (id)events;	// 0x335c89c9
// declared property getter: - (id)extendedLogData;	// 0x335c48f5
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x335c48d5
// declared property setter: - (void)set_internal:(MPMovieErrorLogInternal)internal;	// 0x335c2581
@end

