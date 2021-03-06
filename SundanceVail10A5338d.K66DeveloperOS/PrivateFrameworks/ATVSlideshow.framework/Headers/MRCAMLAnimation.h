/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface MRCAMLAnimation : NSObject {
	double startTime;	// 4 = 0x4
	double duration;	// 12 = 0xc
	BOOL removedOnCompletion;	// 20 = 0x14
	NSString *keyPath;	// 24 = 0x18
	NSArray *keyframes;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *keyPath;	// G=0x33567ae9; S=0x33567afd; @synthesize
@property(retain, nonatomic) NSArray *keyframes;	// G=0x33567b21; S=0x33567b31; @synthesize
- (void)dealloc;	// 0x33567a91
// declared property getter: - (id)keyPath;	// 0x33567ae9
// declared property getter: - (id)keyframes;	// 0x33567b21
// declared property setter: - (void)setKeyPath:(id)path;	// 0x33567afd
// declared property setter: - (void)setKeyframes:(id)keyframes;	// 0x33567b31
@end

