/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVTrackGroupInternal, NSArray;

@interface AVTrackGroup : NSObject <NSCopying> {
@private
	AVTrackGroupInternal *_trackGroup;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x3478a205; @dynamic
- (id)init;	// 0x3478a1b1
- (id)copyWithZone:(NSZone *)zone;	// 0x3478a19d
- (unsigned)hash;	// 0x3478a0f1
- (BOOL)isEqual:(id)equal;	// 0x3478a115
// declared property getter: - (id)trackIDs;	// 0x3478a205
@end

