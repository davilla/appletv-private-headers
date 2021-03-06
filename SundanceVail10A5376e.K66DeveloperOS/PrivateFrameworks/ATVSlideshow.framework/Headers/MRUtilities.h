/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRUtilities : NSObject {
}
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x362f68cd
+ (void)initialize;	// 0x362f5071
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x362f68c9
+ (int)operatingSystemMajorVersion;	// 0x362f6ddd
+ (int)operatingSystemMinorVersion;	// 0x362f6d0d
+ (int)operationQueueConcurrentOperationCount;	// 0x362f6cc5
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath inPlug:(id)plug;	// 0x362f58e1
+ (CGPoint)valueForPointAnimationPath:(id)pointAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(CGPoint)to previousKeyPoint:(CGPoint *)point nextKeyPoint:(CGPoint *)point6;	// 0x362f55f5
+ (float)valueForScalarAnimationPath:(id)scalarAnimationPath inPlug:(id)plug atTime:(double)time defaultsTo:(float)to previousKeyValue:(float *)value nextKeyValue:(float *)value6;	// 0x362f538d
@end

