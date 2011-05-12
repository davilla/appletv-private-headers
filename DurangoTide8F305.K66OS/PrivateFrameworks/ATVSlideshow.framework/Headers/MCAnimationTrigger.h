/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCAnimationTrigger : MCAction {
	NSString *mAnimationKey;	// 24 = 0x18
	NSMutableDictionary *mAnimationAttributes;	// 28 = 0x1c
}
@property(copy) NSDictionary *animationAttributes;	// G=0x3331a009; S=0x3331a0f9; @synthesize=mAnimationAttributes
@property(copy) NSString *animationKey;	// G=0x3331a2c1; S=0x3331a2d9; @synthesize=mAnimationKey
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33319b85
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3331a245
- (id)animationAttributeForKey:(id)key;	// 0x33319d51
// declared property getter: - (id)animationAttributes;	// 0x3331a009
// declared property getter: - (id)animationKey;	// 0x3331a2c1
- (void)demolish;	// 0x33319c55
- (id)imprint;	// 0x33319ccd
- (void)setAnimationAttribute:(id)attribute forKey:(id)key;	// 0x33319e69
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x3331a0f9
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x3331a2d9
@end

