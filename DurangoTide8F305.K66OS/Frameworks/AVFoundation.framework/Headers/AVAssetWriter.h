/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInternal, NSError, NSString, NSURL, NSArray, AVAssetWriterHelper;

@interface AVAssetWriter : NSObject {
@private
	AVAssetWriterInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x3474f819; 
@property(readonly, assign) NSError *error;	// G=0x3474f781; 
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;	// G=0x34750825; S=0x34750989; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3474f6ed; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3474f69d; S=0x3474f675; 
@property(assign) XXStruct_pwHToB movieFragmentInterval;	// G=0x34750a11; S=0x34750a3d; converted property
@property(assign) int movieTimeScale;	// G=0x3474f711; S=0x34750299; converted property
@property(readonly, copy, nonatomic) NSString *outputFileType;	// G=0x3474f83d; 
@property(readonly, copy, nonatomic) NSURL *outputURL;	// G=0x3474f86d; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3474f75d; S=0x3474f735; 
@property(readonly, assign) int status;	// G=0x3474f7cd; 
+ (id)assetWriterWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x3474f985
+ (void)initialize;	// 0x34750b1d
+ (id)keyPathsForValuesAffectingError;	// 0x3474f7a5
+ (id)keyPathsForValuesAffectingStatus;	// 0x3474f7f1
- (id)init;	// 0x3474f965
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x34750311
// declared property getter: - (id)_helper;	// 0x34750825
// declared property setter: - (void)_setHelper:(id)helper;	// 0x34750989
- (void)_transitionToFailedStatusWithError:(id)error;	// 0x3474f5b1
- (void)addInput:(id)input;	// 0x34750199
// declared property getter: - (id)availableMediaTypes;	// 0x3474f819
- (BOOL)canAddInput:(id)input;	// 0x34750219
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x3474f6c1
- (void)cancelWriting;	// 0x3474f615
- (void)dealloc;	// 0x347506b9
- (id)description;	// 0x34750765
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x34750059
// declared property getter: - (id)error;	// 0x3474f781
- (void)finalize;	// 0x3475065d
- (BOOL)finishWriting;	// 0x3474f5d9
// declared property getter: - (id)inputs;	// 0x3474f6ed
// declared property getter: - (id)metadata;	// 0x3474f69d
// converted property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x34750a11
// converted property getter: - (int)movieTimeScale;	// 0x3474f711
// declared property getter: - (id)outputFileType;	// 0x3474f83d
// declared property getter: - (id)outputURL;	// 0x3474f86d
- (void)release;	// 0x3474fb09
- (id)retain;	// 0x3474fb61
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3474f675
// converted property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x34750a3d
// converted property setter: - (void)setMovieTimeScale:(int)scale;	// 0x34750299
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3474f735
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3474f75d
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x347500f9
- (BOOL)startWriting;	// 0x3474f639
// declared property getter: - (int)status;	// 0x3474f7cd
@end

