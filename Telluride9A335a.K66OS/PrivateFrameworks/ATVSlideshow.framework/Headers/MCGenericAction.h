/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MCGenericAction : MCAction {
	NSMutableDictionary *mAttributes;	// 16 = 0x10
}
@property(copy) NSDictionary *attributes;	// G=0x31b9260d; S=0x31b926f5; @synthesize=mAttributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x31b921f1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b92269
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31b92809
- (id)attributeForKey:(id)key;	// 0x31b923b1
// declared property getter: - (id)attributes;	// 0x31b9260d
- (void)demolish;	// 0x31b922fd
- (id)imprint;	// 0x31b92351
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x31b924d9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31b926f5
@end

