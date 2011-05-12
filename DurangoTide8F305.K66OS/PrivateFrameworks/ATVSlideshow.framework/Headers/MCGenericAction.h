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
@property(copy) NSDictionary *attributes;	// G=0x3331a6c9; S=0x3331a7b9; @synthesize=mAttributes
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3331a305
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3331a905
- (id)attributeForKey:(id)key;	// 0x3331a44d
// declared property getter: - (id)attributes;	// 0x3331a6c9
- (void)demolish;	// 0x3331a39d
- (id)imprint;	// 0x3331a3f1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3331a565
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3331a7b9
@end

