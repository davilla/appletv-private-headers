/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSString *mPath;	// 12 = 0xc
	NSMutableSet *mTexts;	// 16 = 0x10
}
@property(readonly, assign) BOOL isInUse;	// G=0x31b989c1; 
@property(copy) NSString *path;	// G=0x31b98a75; S=0x31b98a89; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b9889d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31b98a31
- (void)demolish;	// 0x31b9890d
- (void)forgetText:(id)text;	// 0x31b98a11
- (id)imprint;	// 0x31b98961
// declared property getter: - (BOOL)isInUse;	// 0x31b989c1
- (void)learnText:(id)text;	// 0x31b989f1
// declared property getter: - (id)path;	// 0x31b98a75
// declared property setter: - (void)setPath:(id)path;	// 0x31b98a89
@end
