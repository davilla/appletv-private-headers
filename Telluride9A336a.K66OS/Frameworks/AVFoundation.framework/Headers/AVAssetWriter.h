/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetWriterHelper, NSError, NSArray, AVAssetWriterInternal, NSString;

@interface AVAssetWriter : NSObject {
@private
	AVAssetWriterInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x31467539; 
@property(readonly, assign) NSError *error;	// G=0x31467589; 
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;	// G=0x3146a569; S=0x3146a501; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3146762d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x31467685; S=0x314676ad; 
@property(assign) XXStruct_pwHToB movieFragmentInterval;	// G=0x3146a4d1; S=0x3146a3f9; converted property
@property(assign) int movieTimeScale;	// G=0x31467605; S=0x314698fd; converted property
@property(readonly, copy, nonatomic) NSString *outputFileType;	// G=0x31467501; 
@property(readonly, copy, nonatomic) NSURL *outputURL;	// G=0x314674d9; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x314675b1; S=0x314675d9; 
@property(readonly, assign) int status;	// G=0x31467561; 
+ (id)assetWriterWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x314677b5
+ (void)initialize;	// 0x3146a3cd
+ (id)keyPathsForValuesAffectingError;	// 0x31467835
+ (id)keyPathsForValuesAffectingStatus;	// 0x3146780d
- (id)init;	// 0x314673d9
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;	// 0x3146a029
// declared property getter: - (id)_helper;	// 0x3146a569
// declared property setter: - (void)_setHelper:(id)helper;	// 0x3146a501
- (void)_transitionToFailedStatusWithError:(id)error;	// 0x31467789
- (void)addInput:(id)input;	// 0x31469a05
// declared property getter: - (id)availableMediaTypes;	// 0x31467539
- (BOOL)canAddInput:(id)input;	// 0x31469985
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x31467655
- (void)cancelWriting;	// 0x3146771d
- (void)dealloc;	// 0x3146a78d
- (id)description;	// 0x3146a6ad
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x31469b1d
// declared property getter: - (id)error;	// 0x31467589
- (void)finalize;	// 0x3146a731
- (BOOL)finishWriting;	// 0x31467745
// declared property getter: - (id)inputs;	// 0x3146762d
// declared property getter: - (id)metadata;	// 0x31467685
// converted property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x3146a4d1
// converted property getter: - (int)movieTimeScale;	// 0x31467605
// declared property getter: - (id)outputFileType;	// 0x31467501
// declared property getter: - (id)outputURL;	// 0x314674d9
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x314676ad
// converted property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3146a3f9
// converted property setter: - (void)setMovieTimeScale:(int)scale;	// 0x314698fd
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x314675d9
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x314675b1
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x31469a89
- (BOOL)startWriting;	// 0x314676d9
// declared property getter: - (int)status;	// 0x31467561
@end

