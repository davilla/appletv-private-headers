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
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x346b29a1; S=0x346b5b49; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettings;	// G=0x346b3ac5; 
@property(readonly, assign, nonatomic) NSArray *videoTracks;	// G=0x346b2981; 
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x346b3b75
- (id)init;	// 0x346b3ab1
- (id)initWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x346b5ddd
- (id)_asset;	// 0x346b3b39
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x346b54bd
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x346b59c5
- (BOOL)alwaysCopiesSampleData;	// 0x346b5d59
- (void)dealloc;	// 0x346b541d
- (id)description;	// 0x346b5ced
- (void)finalize;	// 0x346b5d99
- (id)mediaType;	// 0x346b3af1
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x346b5b49
// declared property getter: - (id)videoComposition;	// 0x346b29a1
// declared property getter: - (id)videoSettings;	// 0x346b3ac5
// declared property getter: - (id)videoTracks;	// 0x346b2981
@end
