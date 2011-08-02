/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItem, NSMutableDictionary, NSMutableSet, CALayer, NSArray, AVPropertyStorage, AVWeakReference, NSError;

@interface AVPlayerInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigPlayer *figPlayer;	// 8 = 0x8
	AVPropertyStorage *propertyStorage;	// 12 = 0xc
	NSMutableDictionary *pendingFigPlayerProperties;	// 16 = 0x10
	AVPlayerItem *currentItem;	// 20 = 0x14
	AVPlayerItem *lastItem;	// 24 = 0x18
	NSMutableSet *items;	// 28 = 0x1c
	CALayer *caLayer;	// 32 = 0x20
	int status;	// 36 = 0x24
	NSError *error;	// 40 = 0x28
	dispatch_queue_s *stateDispatchQueue;	// 44 = 0x2c
	NSArray *displaysUsedForPlayback;	// 48 = 0x30
	int figPlayerType;	// 52 = 0x34
	BOOL waitsUntilItemsAreReadyForInspectionBeforeEnqueuingIntoFigPlayer;	// 56 = 0x38
	BOOL needsToCreateFigPlayer;	// 57 = 0x39
	BOOL logPerformanceData;	// 58 = 0x3a
}
@end
