/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "AVRecorderImpl.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
	BOOL _isActive;	// 4 = 0x4
	BOOL _isRecording;	// 5 = 0x5
	BOOL _isWriting;	// 6 = 0x6
	NSMutableDictionary *_attributes;	// 8 = 0x8
	unsigned _fileType;	// 12 = 0xc
	unsigned _audioCodec;	// 16 = 0x10
	long long _maxPCMFramesToRecord;	// 20 = 0x14
	BOOL _haveRecordedMaxPCMFrames;	// 28 = 0x1c
	AudioStreamBasicDescription _recordingFormat;	// 32 = 0x20
	OpaqueAudioFileID *_audioFile;	// 72 = 0x48
	OpaqueAudioQueue *_audioQueue;	// 76 = 0x4c
	unsigned _numDeviceChannels;	// 80 = 0x50
	AudioQueueLevelMeterState *_audioLevels;	// 84 = 0x54
	AudioQueueLevelMeterState *_audioLevelsDB;	// 88 = 0x58
	unsigned _totalBytesRecorded;	// 92 = 0x5c
	unsigned _totalPacketsRecorded;	// 96 = 0x60
	unsigned _totalFramesRecorded;	// 100 = 0x64
	AudioQueueBuffer *_buffers[3];	// 104 = 0x68
	BOOL _bufferUsed[3];	// 116 = 0x74
}
@property(retain) id filePath;	// G=0x30f312d9; S=0x30f31305; converted property
@property(readonly, assign) BOOL isActive;	// G=0x30f31125; converted property
@property(readonly, assign) BOOL isRecording;	// G=0x30f3113d; converted property
@property(assign) float micVolume;	// G=0x30f31c81; S=0x30f31cad; converted property
- (id)init;	// 0x30f3135d
- (id)initWithAttributes:(id)attributes;	// 0x30f31449
- (BOOL)activate:(id *)activate;	// 0x30f315e9
- (id)attributeForKey:(id)key;	// 0x30f311e9
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x30f311a1
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x30f311c5
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2 useDB:(BOOL)db;	// 0x30f31535
- (unsigned)audioNumDeviceChannels;	// 0x30f31191
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x30f31139
- (void)copyEncoderCookieToFile;	// 0x30f31cc5
- (void)deactivate;	// 0x30f318dd
- (void)dealloc;	// 0x30f313bd
// converted property getter: - (id)filePath;	// 0x30f312d9
- (void)haveABuffer:(AudioQueueBuffer *)buffer withTimeStamp:(const AudioTimeStamp *)timeStamp andNumPackets:(unsigned long)packets andPacketDescs:(const AudioStreamPacketDescription *)descs;	// 0x30f31d55
// converted property getter: - (BOOL)isActive;	// 0x30f31125
// converted property getter: - (BOOL)isRecording;	// 0x30f3113d
// converted property getter: - (float)micVolume;	// 0x30f31c81
- (double)recordedDuration;	// 0x30f31161
- (long long)recordedFileSizeInBytes;	// 0x30f3114d
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30f31209
// converted property setter: - (void)setFilePath:(id)path;	// 0x30f31305
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x30f31cad
- (BOOL)start;	// 0x30f319ad
- (void)stop;	// 0x30f31b99
- (BOOL)takePhoto;	// 0x30f31135
@end
