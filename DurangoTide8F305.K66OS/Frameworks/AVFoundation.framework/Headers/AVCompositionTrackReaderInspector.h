/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
	OpaqueFigMutableComposition *_figMutableComposition;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x347851fd; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x347856f1
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x347851fd
- (void)dealloc;	// 0x34785a8d
- (void)finalize;	// 0x34785a4d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x34786331
- (id)segments;	// 0x347867d1
@end

