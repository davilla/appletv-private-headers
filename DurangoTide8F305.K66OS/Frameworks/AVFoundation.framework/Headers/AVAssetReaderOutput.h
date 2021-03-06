/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVWeakReference, NSString, AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
@private
	AVAssetReaderOutputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;	// G=0x3474bb4d; S=0x3474bb69; 
@property(readonly, assign, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;	// G=0x3474c0e1; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3474cd5d; 
@property(readonly, assign, getter=_status) int status;	// G=0x3474c175; 
@property(readonly, assign, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;	// G=0x3474bb85; 
@property(readonly, assign, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;	// G=0x3474bb31; 
+ (void)initialize;	// 0x3474d359
- (id)init;	// 0x3474c439
- (id)_asset;	// 0x3474cd2d
- (void)_attachToWeakReferenceToAssetReader:(id)assetReader;	// 0x3474c1a9
- (void)_cancelReading;	// 0x3474c0b1
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x3474ccfd
// declared property getter: - (int)_extractionID;	// 0x3474bb4d
- (OpaqueFigAssetReader *)_figAssetReader;	// 0x3474bb15
- (void)_figAssetReaderDecodeError;	// 0x3474bfe9
// declared property getter: - (id)_figAssetReaderExtractionOptions;	// 0x3474c0e1
- (void)_figAssetReaderFailed;	// 0x3474bf8d
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)_figAssetReaderSampleBuffer;	// 0x3474c045
- (BOOL)_isFinished;	// 0x3474bb89
- (void)_markAsFinished;	// 0x3474cd8d
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x3474c0c9
// declared property setter: - (void)_setExtractionID:(int)anId;	// 0x3474bb69
- (void)_setFigAssetReader:(OpaqueFigAssetReader *)reader;	// 0x3474c7d1
// declared property getter: - (int)_status;	// 0x3474c175
// declared property getter: - (BOOL)_trimsSampleDurations;	// 0x3474bb85
// declared property getter: - (id)_weakReferenceToAssetReader;	// 0x3474bb31
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;	// 0x3474d125
- (void)dealloc;	// 0x3474cb49
- (void)finalize;	// 0x3474c9ed
// declared property getter: - (id)mediaType;	// 0x3474cd5d
- (void)release;	// 0x3474c2a5
- (id)retain;	// 0x3474c2fd
@end

