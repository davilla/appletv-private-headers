/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"


@interface MRTransitionPageFlip : MRTransition {
	XXStruct_mi4pgC *mMesh;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x31b83f15
- (void)buildMesh;	// 0x31b83fe9
- (void)cleaup;	// 0x31b83f55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b84125
- (void)releaseByTransitioner:(id)transitioner;	// 0x31b83f9d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b84181
- (void)setAttributes:(id)attributes;	// 0x31b840c5
@end

