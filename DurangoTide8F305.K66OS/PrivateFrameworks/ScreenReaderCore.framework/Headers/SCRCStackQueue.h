/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"


@interface SCRCStackQueue : NSObject {
	SCRCStackNode *_firstNode;	// 4 = 0x4
	SCRCStackNode *_lastNode;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x30191779; converted property
// converted property getter: - (unsigned)count;	// 0x30191779
- (void)dealloc;	// 0x30191975
- (id)dequeueObject;	// 0x301918dd
- (id)dequeueObjectRetained;	// 0x301919b1
- (id)description;	// 0x30191809
- (void)enqueueObject:(id)object;	// 0x30191901
- (BOOL)isEmpty;	// 0x30191789
- (id)objectEnumerator;	// 0x301917bd
- (id)popObject;	// 0x30191915
- (id)popObjectRetained;	// 0x30191a09
- (void)pushArray:(id)array;	// 0x30191ad1
- (void)pushObject:(id)object;	// 0x30191b6d
- (void)removeAllObjects;	// 0x30191a65
- (id)topObject;	// 0x30191769
@end

