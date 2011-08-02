/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MCGenericAction : MCAction {
	NSMutableDictionary *mAttributes;	// 24 = 0x18
}
@property(copy) NSDictionary *attributes;	// G=0x33da96b9; S=0x33da97a9; @synthesize=mAttributes
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33da92f5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33da98f5
- (id)attributeForKey:(id)key;	// 0x33da943d
// declared property getter: - (id)attributes;	// 0x33da96b9
- (void)demolish;	// 0x33da938d
- (id)imprint;	// 0x33da93e1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x33da9555
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33da97a9
@end

