/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSCoding> {
	long long _groupPersistentID;	// 4 = 0x4
	NSMutableArray *_mutableItems;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x337b2671
- (id)initWithGroupPersistentID:(long long)groupPersistentID;	// 0x337b27dd
- (void)dealloc;	// 0x337b2795
- (id)description;	// 0x337b2715
- (void)encodeWithCoder:(id)coder;	// 0x337b25fd
@end

