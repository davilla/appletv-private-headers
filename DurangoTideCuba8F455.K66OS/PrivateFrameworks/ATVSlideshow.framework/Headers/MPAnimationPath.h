/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class MCAnimationPath, NSMutableSet;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
@private
	MCAnimationPath *_animationPath;	// 4 = 0x4
	NSMutableSet *_keyframes;	// 8 = 0x8
	BOOL _postKeyframeChange;	// 12 = 0xc
	BOOL _isTriggered;	// 13 = 0xd
	NSObject<MPAnimationSupport> *_parentObject;	// 16 = 0x10
}
@property(retain) MCAnimationPath *animationPath;	// G=0x33c74711; S=0x33c74fe1; converted property
@property(assign) BOOL isTriggered;	// G=0x33c73351; S=0x33c73361; 
@property(readonly, retain) NSMutableSet *keyframes;	// G=0x33c73395; converted property
@property(retain) id parent;	// G=0x33c745c1; S=0x33c75bfd; converted property
@property(assign) BOOL postsKeyframeChangeNotifications;	// G=0x33c745d1; S=0x33c745e1; converted property
+ (id)animationPath;	// 0x33c72ed9
- (id)init;	// 0x33c72f09
- (id)initWithCoder:(id)coder;	// 0x33c73025
- (void)addKeyframe:(id)keyframe;	// 0x33c733e1
- (void)addKeyframes:(id)keyframes;	// 0x33c73415
// converted property getter: - (id)animationPath;	// 0x33c74711
- (void)cleanup;	// 0x33c74fcd
- (void)copyKeyframes:(id)keyframes;	// 0x33c74ed5
- (id)copyWithZone:(NSZone *)zone;	// 0x33c7320d
- (id)createKeyframeWithFunction:(id)function atTime:(double)time forDuration:(double)duration;	// 0x33c74515
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetType:(int)type forDuration:(double)duration;	// 0x33c74565
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x33c743c1
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x33c74429
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x33c74305
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x33c7436d
- (id)createKeyframeWithVector:(id)vector atTime:(double)time;	// 0x33c74479
- (id)createKeyframeWithVector:(id)vector atTime:(double)time offsetType:(int)type;	// 0x33c744c1
- (void)dealloc;	// 0x33c73185
- (id)description;	// 0x33c7326d
- (void)dump;	// 0x33c74d8d
- (void)encodeWithCoder:(id)coder;	// 0x33c72fa5
- (id)fullDebugLog;	// 0x33c74db1
// declared property getter: - (BOOL)isTriggered;	// 0x33c73351
- (id)key;	// 0x33c73311
// converted property getter: - (id)keyframes;	// 0x33c73395
- (id)newKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x33c74409
- (id)newKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x33c7434d
- (id)orderedKeyframes;	// 0x33c733a5
// converted property getter: - (id)parent;	// 0x33c745c1
- (id)parentDocument;	// 0x33c75c51
- (double)parentMainDuration;	// 0x33c74b01
- (double)parentPhaseInDuration;	// 0x33c74721
- (double)parentPhaseOutDuration;	// 0x33c74911
// converted property getter: - (BOOL)postsKeyframeChangeNotifications;	// 0x33c745d1
- (void)recreateWithAnimationPath:(id)animationPath;	// 0x33c75df5
- (double)relativeTimeForKeyframe:(id)keyframe;	// 0x33c745f1
- (void)removeAllKeyframes;	// 0x33c7422d
- (void)removeKeyframe:(id)keyframe;	// 0x33c73eb5
- (void)removeKeyframes:(id)keyframes;	// 0x33c74181
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x33c74fe1
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x33c73361
// converted property setter: - (void)setParent:(id)parent;	// 0x33c75bfd
// converted property setter: - (void)setPostsKeyframeChangeNotifications:(BOOL)notifications;	// 0x33c745e1
@end

