/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSDictionary, NSString;

@interface MPLayerGroupInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	int loopingMode;	// 12 = 0xc
	double durationPadding;	// 16 = 0x10
	double duration;	// 24 = 0x18
	double timeIn;	// 32 = 0x20
	double phaseInDuration;	// 40 = 0x28
	double phaseOutDuration;	// 48 = 0x30
	NSString *backgroundAudioID;	// 56 = 0x38
	int lastSlideIndexUsed;	// 60 = 0x3c
	CGColorRef backgroundColor;	// 64 = 0x40
	NSDictionary *authoredVersionInfo;	// 68 = 0x44
	int sendLiveNotification;	// 72 = 0x48
	NSRecursiveLock *liveLock;	// 76 = 0x4c
	BOOL autoAdjustDuration;	// 80 = 0x50
	BOOL isDocumentLayerGroup;	// 81 = 0x51
	float opacity;	// 84 = 0x54
	CGPoint position;	// 88 = 0x58
	float zPosition;	// 96 = 0x60
	CGSize size;	// 100 = 0x64
	float rotationAngle;	// 108 = 0x6c
	float xRotationAngle;	// 112 = 0x70
	float yRotationAngle;	// 116 = 0x74
	int zIndex;	// 120 = 0x78
	NSString *uuid;	// 124 = 0x7c
}
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x33cdf035; S=0x33cdf045; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x33cdf0cd; S=0x33cdf0dd; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x33cdefa9; S=0x33cdefb9; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x33cdf005; S=0x33cdee59; @synthesize
@property(assign, nonatomic) double duration;	// G=0x33cdeee9; S=0x33cdef01; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x33cdeeb9; S=0x33cdeed1; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x33cdf0ed; S=0x33cdf0fd; @synthesize
@property(assign, nonatomic) int lastSlideIndexUsed;	// G=0x33cdf015; S=0x33cdf025; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x33cdf091; S=0x33cdf0a1; @synthesize
@property(assign, nonatomic) int loopingMode;	// G=0x33cdefe5; S=0x33cdeff5; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x33cdee89; S=0x33cdeea1; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x33cdf10d; S=0x33cdf11d; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x33cdef49; S=0x33cdef61; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x33cdef79; S=0x33cdef91; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x33cdf12d; S=0x33cdf145; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x33cdf1ad; S=0x33cdf1bd; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x33cdf071; S=0x33cdf081; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x33cdf17d; S=0x33cdf195; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x33cdef19; S=0x33cdef31; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x33cdf20d; S=0x33cdf21d; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x33cdf1cd; S=0x33cdf1dd; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x33cdf1ed; S=0x33cdf1fd; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x33cdf249; S=0x33cdf259; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x33cdf15d; S=0x33cdf16d; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x33cdf035
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x33cdf0cd
// declared property getter: - (id)backgroundAudioID;	// 0x33cdefa9
// declared property getter: - (CGColorRef)backgroundColor;	// 0x33cdf005
- (void)dealloc;	// 0x33cded95
// declared property getter: - (double)duration;	// 0x33cdeee9
// declared property getter: - (double)durationPadding;	// 0x33cdeeb9
- (void)finalize;	// 0x33cded4d
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x33cdf0ed
// declared property getter: - (int)lastSlideIndexUsed;	// 0x33cdf015
// declared property getter: - (id)liveLock;	// 0x33cdf091
// declared property getter: - (int)loopingMode;	// 0x33cdefe5
// declared property getter: - (double)numberOfLoops;	// 0x33cdee89
// declared property getter: - (float)opacity;	// 0x33cdf10d
// declared property getter: - (double)phaseInDuration;	// 0x33cdef49
// declared property getter: - (double)phaseOutDuration;	// 0x33cdef79
// declared property getter: - (CGPoint)position;	// 0x33cdf12d
// declared property getter: - (float)rotationAngle;	// 0x33cdf1ad
// declared property getter: - (int)sendLiveNotification;	// 0x33cdf071
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x33cdf045
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x33cdf0dd
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x33cdefb9
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x33cdee59
// declared property setter: - (void)setDuration:(double)duration;	// 0x33cdef01
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x33cdeed1
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x33cdf0fd
// declared property setter: - (void)setLastSlideIndexUsed:(int)used;	// 0x33cdf025
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x33cdf0a1
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x33cdeff5
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x33cdeea1
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x33cdf11d
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x33cdef61
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x33cdef91
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x33cdf145
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x33cdf1bd
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x33cdf081
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33cdf195
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33cdef31
// declared property setter: - (void)setUuid:(id)uuid;	// 0x33cdf21d
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x33cdf1dd
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x33cdf1fd
// declared property setter: - (void)setZIndex:(int)index;	// 0x33cdf259
// declared property setter: - (void)setZPosition:(float)position;	// 0x33cdf16d
// declared property getter: - (CGSize)size;	// 0x33cdf17d
// declared property getter: - (double)timeIn;	// 0x33cdef19
// declared property getter: - (id)uuid;	// 0x33cdf20d
// declared property getter: - (float)xRotationAngle;	// 0x33cdf1cd
// declared property getter: - (float)yRotationAngle;	// 0x33cdf1ed
// declared property getter: - (int)zIndex;	// 0x33cdf249
// declared property getter: - (float)zPosition;	// 0x33cdf15d
@end

