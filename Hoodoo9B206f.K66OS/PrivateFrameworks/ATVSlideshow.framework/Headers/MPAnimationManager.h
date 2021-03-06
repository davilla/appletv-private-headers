/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
	NSMutableDictionary *mAnimationSets;	// 8 = 0x8
}
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x30972c99
+ (void)releaseSharedManager;	// 0x30972bb5
+ (id)sharedManager;	// 0x30972b6d
- (id)initWithPaths:(id)paths;	// 0x30972cf5
- (id)animationDescriptionForAnimationID:(id)animationID;	// 0x30972c79
- (id)animationDescriptionForAnimationSetID:(id)animationSetID;	// 0x30972c59
- (void)dealloc;	// 0x30972be1
@end

