/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
	NSMutableSet *mSongs;	// 20 = 0x14
}
- (id)init;	// 0x343b2aad
- (void)demolish;	// 0x343b2b11
- (void)forgetSong:(id)song;	// 0x343b2be5
- (BOOL)isInUse;	// 0x343b2b65
- (void)learnSong:(id)song;	// 0x343b2bc5
@end

