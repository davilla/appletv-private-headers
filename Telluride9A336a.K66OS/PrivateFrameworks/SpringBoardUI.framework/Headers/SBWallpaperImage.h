/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIImage.h> // Unknown library

@class NSData;

@interface SBWallpaperImage : UIImage {
	int _variant;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x30a0b209; @synthesize=_data
@property(readonly, assign, nonatomic) int variant;	// G=0x30a0b219; @synthesize=_variant
+ (id)cachedWallpaperDataForVariant:(int)variant;	// 0x30a0b2a1
+ (void)clearCachedWallpaper;	// 0x30a0b229
- (id)initWithVariant:(int)variant;	// 0x30a0b3f1
// declared property getter: - (id)data;	// 0x30a0b209
- (void)dealloc;	// 0x30a0b3a5
- (BOOL)isEqual:(id)equal;	// 0x30a0b2e5
// declared property getter: - (int)variant;	// 0x30a0b219
@end

