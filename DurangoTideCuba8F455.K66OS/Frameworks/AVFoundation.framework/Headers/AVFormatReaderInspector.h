/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"


@interface AVFormatReaderInspector : AVAssetInspector {
	OpaqueFigFormatReader *_formatReader;	// 4 = 0x4
	BOOL didCheckForSaveRestriction;	// 8 = 0x8
	BOOL hasSaveRestriction;	// 9 = 0x9
}
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) OpaqueFigFormatReader *formatReader;	// G=0x325bfd01; S=0x325c049d; 
- (id)initWithFormatReader:(OpaqueFigFormatReader *)formatReader;	// 0x325c028d
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x325bfd01
- (BOOL)_hasQTSaveRestriction;	// 0x325c0835
- (void *)_propertyAccessor:(CFStringRef)accessor;	// 0x325c0d69
// declared property setter: - (void)_setFormatReader:(OpaqueFigFormatReader *)reader;	// 0x325c049d
- (id)alternateTrackGroups;	// 0x325bfe7d
- (id)availableMetadataFormats;	// 0x325c0971
- (id)commonMetadata;	// 0x325c0b41
- (void)dealloc;	// 0x325c0251
- (XXStruct_pwHToB)duration;	// 0x325c0559
- (void)finalize;	// 0x325c0215
- (unsigned)hash;	// 0x325c0429
- (BOOL)isComposable;	// 0x325bfdfd
- (BOOL)isEqual:(id)equal;	// 0x325c0365
- (BOOL)isExportable;	// 0x325bfe3d
- (BOOL)isReadable;	// 0x325bfe1d
- (id)lyrics;	// 0x325bfe5d
- (id)metadataForFormat:(id)format;	// 0x325c0da9
- (CGSize)naturalSize;	// 0x325c0601
- (int)naturalTimeScale;	// 0x325bfedd
- (float)preferredRate;	// 0x325bff1d
- (CGAffineTransform)preferredTransform;	// 0x325c05ad
- (float)preferredVolume;	// 0x325bfefd
- (BOOL)providesPreciseDurationAndTiming;	// 0x325bfeb9
- (long)trackCount;	// 0x325c04cd
- (id)trackReferences;	// 0x325c0631
@end

