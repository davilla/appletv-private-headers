/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRFrameManager : NSObject {
	NSMutableDictionary *mFrameRepository;	// 4 = 0x4
	NSMutableDictionary *mFrameSets;	// 8 = 0x8
	NSMutableDictionary *mFramePools;	// 12 = 0xc
}
+ (void)initialize;	// 0x332cdd05
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x332cdd81
+ (id)sharedManager;	// 0x332cdd75
- (id)initWithPaths:(id)paths;	// 0x332cdde1
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x332cec11
- (void)cleanup;	// 0x332ce409
- (void)dealloc;	// 0x332ce3c9
- (id)descriptionForFrameID:(id)frameID;	// 0x332ceb79
- (id)frameWithFrameID:(id)frameID;	// 0x332ce651
- (void)recycleFrame:(id)frame;	// 0x332ce9fd
- (void)releaseResources;	// 0x332ce481
- (id)resourcePathForFrameID:(id)frameID andResource:(id)resource;	// 0x332ceb99
- (id)sizeScriptForFrameID:(id)frameID;	// 0x332cebe1
@end

