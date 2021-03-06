/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {
@private
	AVItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x33955999; 
- (id)init;	// 0x339558f5
- (id)initWithLogArray:(id)logArray;	// 0x33955455
- (id)copyWithZone:(NSZone *)zone;	// 0x339554b5
- (void)dealloc;	// 0x33955bb9
- (id)description;	// 0x33955c71
// declared property getter: - (id)events;	// 0x33955999
- (id)extendedLogData;	// 0x33955b2d
- (unsigned)extendedLogDataStringEncoding;	// 0x33955451
- (void)finalize;	// 0x33955c2d
@end

