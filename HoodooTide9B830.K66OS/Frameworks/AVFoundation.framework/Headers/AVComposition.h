/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSMutableCopying.h"
#import "AVAsset.h"

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
@private
	AVCompositionInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x35e2a4a5; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x35e2a495; 
+ (void)initialize;	// 0x35e29eb1
- (id)init;	// 0x35e2a081
- (id)_assetInspector;	// 0x35e2a1f5
- (long)_createEmptyMutableCompositionIfNeeded;	// 0x35e29eb5
- (OpaqueFigFormatReader *)_formatReader;	// 0x35e2a27d
- (id)_initWithComposition:(id)composition;	// 0x35e29ef5
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x35e2a1d5
- (id)_mutableTracks;	// 0x35e2a381
- (id)_newTrackForIndex:(long)index;	// 0x35e2a345
- (void)_setNaturalSize:(CGSize)size;	// 0x35e2a581
- (void)dealloc;	// 0x35e2a095
- (void)finalize;	// 0x35e2a151
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e2a30d
// declared property getter: - (CGSize)naturalSize;	// 0x35e2a4a5
// declared property getter: - (id)tracks;	// 0x35e2a495
@end

