/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
@private
	AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x30e8c9a1; S=0x30e8fb49; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettings;	// G=0x30e8dac5; 
@property(readonly, assign, nonatomic) NSArray *videoTracks;	// G=0x30e8c981; 
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30e8db75
- (id)init;	// 0x30e8dab1
- (id)initWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30e8fddd
- (id)_asset;	// 0x30e8db39
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x30e8f4bd
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x30e8f9c5
- (BOOL)alwaysCopiesSampleData;	// 0x30e8fd59
- (void)dealloc;	// 0x30e8f41d
- (id)description;	// 0x30e8fced
- (void)finalize;	// 0x30e8fd99
- (id)mediaType;	// 0x30e8daf1
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x30e8fb49
// declared property getter: - (id)videoComposition;	// 0x30e8c9a1
// declared property getter: - (id)videoSettings;	// 0x30e8dac5
// declared property getter: - (id)videoTracks;	// 0x30e8c981
@end

