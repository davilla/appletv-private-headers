/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterHelper.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3474fe8d
- (id)initWithURL:(id)url fileType:(id)type;	// 0x3474f49d
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;	// 0x3474f369
- (void)addInput:(id)input;	// 0x347510ad
- (BOOL)canAddInput:(id)input;	// 0x3474f351
- (void)cancelWriting;	// 0x3474f285
- (void)setMetadata:(id)metadata;	// 0x3474f401
- (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3474f451
- (void)setMovieTimeScale:(int)scale;	// 0x3474f3d9
- (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3474f429
- (void)startWriting;	// 0x3474f29d
- (int)status;	// 0x3474f02d
@end

