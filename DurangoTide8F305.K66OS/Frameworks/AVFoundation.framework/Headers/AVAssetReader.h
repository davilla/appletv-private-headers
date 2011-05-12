/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAsset, NSError, NSArray, AVAssetReaderInternal;

@interface AVAssetReader : NSObject {
@private
	AVAssetReaderInternal *_priv;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVAsset *asset;	// G=0x3474a469; 
@property(readonly, assign) NSError *error;	// G=0x3474b409; 
@property(readonly, assign, nonatomic, getter=_figAssetReader) OpaqueFigAssetReader *figAssetReader;	// G=0x3474a4d1; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x3474a5a9; 
@property(readonly, assign) int status;	// G=0x3474b545; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x3474a4a9; S=0x3474a9c1; 
+ (id)assetReaderWithAsset:(id)asset error:(id *)error;	// 0x3474a6b9
+ (void)initialize;	// 0x3474baed
- (id)init;	// 0x3474a6a1
- (id)initWithAsset:(id)asset error:(id *)error;	// 0x3474aaf5
- (BOOL)_canAddOutput:(id)output exceptionReason:(id *)reason;	// 0x3474a4ed
// declared property getter: - (OpaqueFigAssetReader *)_figAssetReader;	// 0x3474a4d1
- (void)_handleServerDiedNotification;	// 0x3474bab9
- (void)_transitionToStatus:(int)status failureError:(id)error;	// 0x3474b6a9
- (void)addOutput:(id)output;	// 0x3474a801
// declared property getter: - (id)asset;	// 0x3474a469
- (BOOL)canAddOutput:(id)output;	// 0x3474a94d
- (void)cancelReading;	// 0x3474b98d
- (void)dealloc;	// 0x3474b161
- (id)description;	// 0x3474aa75
// declared property getter: - (id)error;	// 0x3474b409
- (void)finalize;	// 0x3474b049
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3474af45
// declared property getter: - (id)outputs;	// 0x3474a5a9
- (void)release;	// 0x3474a751
- (id)retain;	// 0x3474a7a9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x3474a9c1
- (BOOL)startReading;	// 0x3474b765
// declared property getter: - (int)status;	// 0x3474b545
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x3474a4a9
@end

