/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVAssetTrackSegment : NSObject {
	XXStruct_lthJfB _timeMapping;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x326c19c1; 
@property(readonly, assign, nonatomic) XXStruct_lthJfB timeMapping;	// G=0x326c1cfd; @synthesize=_timeMapping
- (id)_initWithTimeMapping:(XXStruct_lthJfB)timeMapping;	// 0x326c18fd
- (unsigned)hash;	// 0x326c1c3d
// declared property getter: - (BOOL)isEmpty;	// 0x326c19c1
- (BOOL)isEqual:(id)equal;	// 0x326c19dd
// declared property getter: - (XXStruct_lthJfB)timeMapping;	// 0x326c1cfd
@end

