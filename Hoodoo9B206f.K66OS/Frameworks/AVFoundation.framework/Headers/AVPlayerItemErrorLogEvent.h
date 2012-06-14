/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x326fe419; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x326fe3a5; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x326fe645; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x326fe5d1; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x326fe575; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x326fe501; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x326fe48d; 
- (id)init;	// 0x326fe1f5
- (id)initWithDictionary:(id)dictionary;	// 0x326fe28d
// declared property getter: - (id)URI;	// 0x326fe419
- (id)copyWithZone:(NSZone *)zone;	// 0x326fe2e1
// declared property getter: - (id)date;	// 0x326fe3a5
- (void)dealloc;	// 0x326fe335
// declared property getter: - (id)errorComment;	// 0x326fe645
// declared property getter: - (id)errorDomain;	// 0x326fe5d1
// declared property getter: - (int)errorStatusCode;	// 0x326fe575
- (void)finalize;	// 0x326fe2f1
// declared property getter: - (id)playbackSessionID;	// 0x326fe501
// declared property getter: - (id)serverAddress;	// 0x326fe48d
@end
