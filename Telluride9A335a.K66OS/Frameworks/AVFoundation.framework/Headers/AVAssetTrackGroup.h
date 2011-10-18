/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackGroup.h"

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup {
@private
	id _assetComparisonToken;	// 8 = 0x8
	NSArray *_trackIDs;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x323675c1; @synthesize=_trackIDs
- (id)init;	// 0x323677ed
- (id)initWithAsset:(id)asset trackIDs:(id)ids;	// 0x323675d1
- (id)_assetComparisonToken;	// 0x323675b1
- (void)dealloc;	// 0x3236778d
- (unsigned)hash;	// 0x32367699
- (BOOL)isEqual:(id)equal;	// 0x323676e5
// declared property getter: - (id)trackIDs;	// 0x323675c1
@end

