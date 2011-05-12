/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVOutputSettings, NSString, NSArray;

@interface AVAssetWriterInputConfigurationState : NSObject {
@private
	NSString *_mediaType;	// 4 = 0x4
	AVOutputSettings *_outputSettings;	// 8 = 0x8
	NSDictionary *_sourcePixelBufferAttributes;	// 12 = 0xc
	BOOL _attachedToPixelBufferAdaptor;	// 16 = 0x10
	NSArray *_metadataItems;	// 20 = 0x14
	CGAffineTransform _transform;	// 24 = 0x18
	int _mediaTimeScale;	// 48 = 0x30
	BOOL _expectsMediaDataInRealTime;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL attachedToPixelBufferAdaptor;	// G=0x347524fd; S=0x3475250d; @synthesize=_attachedToPixelBufferAdaptor
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x3475245d; S=0x3475246d; @synthesize=_expectsMediaDataInRealTime
@property(assign, nonatomic) int mediaTimeScale;	// G=0x3475247d; S=0x3475248d; @synthesize=_mediaTimeScale
@property(copy, nonatomic) NSString *mediaType;	// G=0x3475253d; S=0x347538bd; @synthesize=_mediaType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x347524ed; S=0x34753941; @synthesize=_metadataItems
@property(copy, nonatomic) AVOutputSettings *outputSettings;	// G=0x3475252d; S=0x347538e9; @synthesize=_outputSettings
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x3475251d; S=0x34753915; @synthesize=_sourcePixelBufferAttributes
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x3475249d; S=0x347524b9; @synthesize=_transform
// declared property getter: - (BOOL)attachedToPixelBufferAdaptor;	// 0x347524fd
- (void)dealloc;	// 0x34753811
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x3475245d
// declared property getter: - (int)mediaTimeScale;	// 0x3475247d
// declared property getter: - (id)mediaType;	// 0x3475253d
// declared property getter: - (id)metadataItems;	// 0x347524ed
// declared property getter: - (id)outputSettings;	// 0x3475252d
// declared property setter: - (void)setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x3475250d
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x3475246d
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x3475248d
// declared property setter: - (void)setMediaType:(id)type;	// 0x347538bd
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x34753941
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x347538e9
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x34753915
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x347524b9
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x3475251d
// declared property getter: - (CGAffineTransform)transform;	// 0x3475249d
@end

