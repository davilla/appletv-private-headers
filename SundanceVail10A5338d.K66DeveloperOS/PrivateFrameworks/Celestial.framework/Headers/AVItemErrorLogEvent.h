/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
	AVItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x363d0949; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x363d08d5; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x363d0b75; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x363d0b01; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x363d0aa5; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x363d0a31; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x363d09bd; 
- (id)init;	// 0x363d0729
- (id)initWithDictionary:(id)dictionary;	// 0x363d07c1
// declared property getter: - (id)URI;	// 0x363d0949
- (id)copyWithZone:(NSZone *)zone;	// 0x363d0815
// declared property getter: - (id)date;	// 0x363d08d5
- (void)dealloc;	// 0x363d0869
// declared property getter: - (id)errorComment;	// 0x363d0b75
// declared property getter: - (id)errorDomain;	// 0x363d0b01
// declared property getter: - (int)errorStatusCode;	// 0x363d0aa5
- (void)finalize;	// 0x363d0825
// declared property getter: - (id)playbackSessionID;	// 0x363d0a31
// declared property getter: - (id)serverAddress;	// 0x363d09bd
@end

