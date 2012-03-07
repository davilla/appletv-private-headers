/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MPLayerGroupInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	int loopingMode;	// 12 = 0xc
	double durationPadding;	// 16 = 0x10
	double duration;	// 24 = 0x18
	double timeIn;	// 32 = 0x20
	double phaseInDuration;	// 40 = 0x28
	double phaseOutDuration;	// 48 = 0x30
	NSString *backgroundAudioID;	// 56 = 0x38
	CGColorRef backgroundColor;	// 60 = 0x3c
	NSDictionary *authoredVersionInfo;	// 64 = 0x40
	int sendLiveNotification;	// 68 = 0x44
	NSRecursiveLock *liveLock;	// 72 = 0x48
	BOOL autoAdjustDuration;	// 76 = 0x4c
	BOOL isDocumentLayerGroup;	// 77 = 0x4d
	BOOL isTriggered;	// 78 = 0x4e
	BOOL startsPaused;	// 79 = 0x4f
	float opacity;	// 80 = 0x50
	CGPoint position;	// 84 = 0x54
	float zPosition;	// 92 = 0x5c
	CGSize size;	// 96 = 0x60
	float rotationAngle;	// 104 = 0x68
	float xRotationAngle;	// 108 = 0x6c
	float yRotationAngle;	// 112 = 0x70
	float scale;	// 116 = 0x74
	int zIndex;	// 120 = 0x78
	NSString *uuid;	// 124 = 0x7c
	NSMutableDictionary *layerKeyDictionary;	// 128 = 0x80
}
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x342d04bd; S=0x342d04cd; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x342d0545; S=0x342d0555; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x342d0459; S=0x342d0469; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x342d04ad; S=0x342d02e5; @synthesize
@property(assign, nonatomic) double duration;	// G=0x342d0369; S=0x342d0381; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x342d033d; S=0x342d0355; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x342d0565; S=0x342d0575; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x342d03c1; S=0x342d03d1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x342d06f9; S=0x342d0709; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x342d0511; S=0x342d0521; @synthesize
@property(assign, nonatomic) int loopingMode;	// G=0x342d048d; S=0x342d049d; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x342d0311; S=0x342d0329; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x342d0585; S=0x342d0595; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x342d0401; S=0x342d0419; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x342d042d; S=0x342d0445; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x342d05a5; S=0x342d05c1; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x342d0625; S=0x342d0635; @synthesize
@property(assign, nonatomic) float scale;	// G=0x342d0685; S=0x342d0695; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x342d04f1; S=0x342d0501; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x342d05f5; S=0x342d0611; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x342d03e1; S=0x342d03f1; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x342d0395; S=0x342d03ad; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x342d06a5; S=0x342d06b5; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x342d0645; S=0x342d0655; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x342d0665; S=0x342d0675; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x342d06d9; S=0x342d06e9; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x342d05d5; S=0x342d05e5; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x342d04bd
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x342d0545
// declared property getter: - (id)backgroundAudioID;	// 0x342d0459
// declared property getter: - (CGColorRef)backgroundColor;	// 0x342d04ad
- (void)dealloc;	// 0x342d0209
// declared property getter: - (double)duration;	// 0x342d0369
// declared property getter: - (double)durationPadding;	// 0x342d033d
- (void)finalize;	// 0x342d01c5
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x342d0565
// declared property getter: - (BOOL)isTriggered;	// 0x342d03c1
// declared property getter: - (id)layerKeyDictionary;	// 0x342d06f9
// declared property getter: - (id)liveLock;	// 0x342d0511
// declared property getter: - (int)loopingMode;	// 0x342d048d
// declared property getter: - (double)numberOfLoops;	// 0x342d0311
// declared property getter: - (float)opacity;	// 0x342d0585
// declared property getter: - (double)phaseInDuration;	// 0x342d0401
// declared property getter: - (double)phaseOutDuration;	// 0x342d042d
// declared property getter: - (CGPoint)position;	// 0x342d05a5
// declared property getter: - (float)rotationAngle;	// 0x342d0625
// declared property getter: - (float)scale;	// 0x342d0685
// declared property getter: - (int)sendLiveNotification;	// 0x342d04f1
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x342d04cd
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x342d0555
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x342d0469
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x342d02e5
// declared property setter: - (void)setDuration:(double)duration;	// 0x342d0381
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x342d0355
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x342d0575
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x342d03d1
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x342d0709
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x342d0521
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x342d049d
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x342d0329
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x342d0595
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x342d0419
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x342d0445
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x342d05c1
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x342d0635
// declared property setter: - (void)setScale:(float)scale;	// 0x342d0695
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x342d0501
// declared property setter: - (void)setSize:(CGSize)size;	// 0x342d0611
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x342d03f1
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x342d03ad
// declared property setter: - (void)setUuid:(id)uuid;	// 0x342d06b5
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x342d0655
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x342d0675
// declared property setter: - (void)setZIndex:(int)index;	// 0x342d06e9
// declared property setter: - (void)setZPosition:(float)position;	// 0x342d05e5
// declared property getter: - (CGSize)size;	// 0x342d05f5
// declared property getter: - (BOOL)startsPaused;	// 0x342d03e1
// declared property getter: - (double)timeIn;	// 0x342d0395
// declared property getter: - (id)uuid;	// 0x342d06a5
// declared property getter: - (float)xRotationAngle;	// 0x342d0645
// declared property getter: - (float)yRotationAngle;	// 0x342d0665
// declared property getter: - (int)zIndex;	// 0x342d06d9
// declared property getter: - (float)zPosition;	// 0x342d05d5
@end
