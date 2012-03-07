/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCompositionTrack.h"

@class NSArray, AVMutableCompositionTrackInternal, NSString;

@interface AVMutableCompositionTrack : AVCompositionTrack {
@private
	AVMutableCompositionTrackInternal *_mutablePriv;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *extendedLanguageTag;	// G=0x346afab5; S=0x346afa91; 
@property(copy, nonatomic) NSString *languageCode;	// G=0x346afb05; S=0x346afae1; 
@property(assign, nonatomic) int naturalTimeScale;	// G=0x346afb81; S=0x346afb31; 
@property(assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x346afa65; S=0x346afa01; 
@property(assign, nonatomic) float preferredVolume;	// G=0x346af9d5; S=0x346af989; 
@property(copy, nonatomic) NSArray *segments;	// G=0x346af95d; S=0x346b0891; 
- (void)_setTrackReaderPropertyValue:(void *)value forKey:(CFStringRef)key;	// 0x346afbad
// declared property getter: - (id)extendedLanguageTag;	// 0x346afab5
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x346b012d
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofTrack:(id)track atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x346b06e1
- (BOOL)insertTimeRanges:(id)ranges ofTracks:(id)tracks atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x346b0209
// declared property getter: - (id)languageCode;	// 0x346afb05
// declared property getter: - (int)naturalTimeScale;	// 0x346afb81
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x346afa65
// declared property getter: - (float)preferredVolume;	// 0x346af9d5
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x346b0051
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x346aff69
// declared property getter: - (id)segments;	// 0x346af95d
// declared property setter: - (void)setExtendedLanguageTag:(id)tag;	// 0x346afa91
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x346afae1
// declared property setter: - (void)setNaturalTimeScale:(int)scale;	// 0x346afb31
// declared property setter: - (void)setPreferredTransform:(CGAffineTransform)transform;	// 0x346afa01
// declared property setter: - (void)setPreferredVolume:(float)volume;	// 0x346af989
// declared property setter: - (void)setSegments:(id)segments;	// 0x346b0891
- (BOOL)validateTrackSegments:(id)segments error:(id *)error;	// 0x346afc05
@end
