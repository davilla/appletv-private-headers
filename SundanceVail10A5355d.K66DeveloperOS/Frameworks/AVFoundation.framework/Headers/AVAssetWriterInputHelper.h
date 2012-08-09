/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference, NSArray, NSString, AVOutputSettings, NSDictionary, AVAssetWriterInputConfigurationState;

@interface AVAssetWriterInputHelper : NSObject {
	AVAssetWriterInputConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriterInput;	// 8 = 0x8
}
@property(assign, nonatomic) short alternateGroupID;	// G=0x32685785; S=0x326857ad; 
@property(readonly, assign, nonatomic) AVAssetWriterInputConfigurationState *configurationState;	// G=0x32685bbd; @synthesize=_configurationState
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x326853ed; S=0x32685415; 
@property(copy, nonatomic) NSString *extendedLanguageTag;	// G=0x3268561d; S=0x32685645; 
@property(copy, nonatomic) NSString *languageCode;	// G=0x32685569; S=0x32685591; 
@property(assign, nonatomic) BOOL marksOutputTrackAsEnabled;	// G=0x326856d1; S=0x326856f9; 
@property(assign, nonatomic) int mediaTimeScale;	// G=0x32685335; S=0x3268535d; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x32685139; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x32685281; S=0x326852a9; 
@property(assign, nonatomic) CGSize naturalSize;	// G=0x326854a1; S=0x326854dd; 
@property(readonly, assign, nonatomic) AVOutputSettings *outputSettings;	// G=0x32685161; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x32685b29; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x326853e9; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *sourceFormatHint;	// G=0x32685189; 
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x32685a99; S=0x32685ac1; 
@property(readonly, assign, nonatomic) int status;	// G=0x3268501d; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x32685135; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x32685839; 
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x326851b1; S=0x326851f5; 
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;	// G=0x32685bcd; S=0x32685be1; @synthesize=_weakReferenceToAssetWriterInput
- (id)initWithConfigurationState:(id)configurationState;	// 0x32684ed5
- (void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x32685b31
// declared property getter: - (short)alternateGroupID;	// 0x32685785
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x32685979
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x326858ed
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x32685b2d
// declared property getter: - (id)configurationState;	// 0x32685bbd
- (void)dealloc;	// 0x32684fb9
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x326853ed
// declared property getter: - (id)extendedLanguageTag;	// 0x3268561d
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x326853e9
// declared property getter: - (id)languageCode;	// 0x32685569
- (void)markAsFinished;	// 0x32685a0d
// declared property getter: - (BOOL)marksOutputTrackAsEnabled;	// 0x326856d1
// declared property getter: - (int)mediaTimeScale;	// 0x32685335
// declared property getter: - (id)mediaType;	// 0x32685139
// declared property getter: - (id)metadata;	// 0x32685281
// declared property getter: - (CGSize)naturalSize;	// 0x326854a1
// declared property getter: - (id)outputSettings;	// 0x32685161
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x32685b29
- (void)prepareToEndSession;	// 0x32685a05
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x32685a09
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x32685861
// declared property setter: - (void)setAlternateGroupID:(short)anId;	// 0x326857ad
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x32685415
// declared property setter: - (void)setExtendedLanguageTag:(id)tag;	// 0x32685645
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x32685591
// declared property setter: - (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x326856f9
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x3268535d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x326852a9
// declared property setter: - (void)setNaturalSize:(CGSize)size;	// 0x326854dd
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x32685ac1
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x326851f5
// declared property setter: - (void)setWeakReferenceToAssetWriterInput:(id)assetWriterInput;	// 0x32685be1
// declared property getter: - (opaqueCMFormatDescription *)sourceFormatHint;	// 0x32685189
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x32685a99
// declared property getter: - (int)status;	// 0x3268501d
// declared property getter: - (int)trackID;	// 0x32685135
// declared property getter: - (id)trackReferences;	// 0x32685839
// declared property getter: - (CGAffineTransform)transform;	// 0x326851b1
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;	// 0x326850f9
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x32685051
// declared property getter: - (id)weakReferenceToAssetWriterInput;	// 0x32685bcd
@end
