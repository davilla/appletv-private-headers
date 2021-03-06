/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPNavigatorInternal : NSObject {
	NSString *startPlugID;	// 4 = 0x4
	float opacity;	// 8 = 0x8
	CGPoint position;	// 12 = 0xc
	float zPosition;	// 20 = 0x14
	CGSize size;	// 24 = 0x18
	float rotationAngle;	// 32 = 0x20
	float xRotationAngle;	// 36 = 0x24
	float yRotationAngle;	// 40 = 0x28
	int zIndex;	// 44 = 0x2c
	NSString *uuid;	// 48 = 0x30
	double numberOfLoops;	// 52 = 0x34
	double duration;	// 60 = 0x3c
	double timeIn;	// 68 = 0x44
	double phaseInDuration;	// 76 = 0x4c
	double phaseOutDuration;	// 84 = 0x54
}
@property(assign, nonatomic) double duration;	// G=0x33cead8d; S=0x33ceada5; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x33cead5d; S=0x33cead75; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x33ceac01; S=0x33ceac11; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x33ceaded; S=0x33ceae05; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x33ceae1d; S=0x33ceae35; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x33ceac21; S=0x33ceac39; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x33ceaca1; S=0x33ceacb1; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x33ceac71; S=0x33ceac89; @synthesize
@property(retain, nonatomic) NSString *startPlugID;	// G=0x33ceabc5; S=0x33ceabd5; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x33ceadbd; S=0x33ceadd5; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x33cead21; S=0x33cead31; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x33ceacc1; S=0x33ceacd1; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x33ceace1; S=0x33ceacf1; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x33cead01; S=0x33cead11; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x33ceac51; S=0x33ceac61; @synthesize
- (void)dealloc;	// 0x33ceab4d
// declared property getter: - (double)duration;	// 0x33cead8d
- (void)finalize;	// 0x33ceab1d
// declared property getter: - (double)numberOfLoops;	// 0x33cead5d
// declared property getter: - (float)opacity;	// 0x33ceac01
// declared property getter: - (double)phaseInDuration;	// 0x33ceaded
// declared property getter: - (double)phaseOutDuration;	// 0x33ceae1d
// declared property getter: - (CGPoint)position;	// 0x33ceac21
// declared property getter: - (float)rotationAngle;	// 0x33ceaca1
// declared property setter: - (void)setDuration:(double)duration;	// 0x33ceada5
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x33cead75
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x33ceac11
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x33ceae05
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x33ceae35
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x33ceac39
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x33ceacb1
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33ceac89
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x33ceabd5
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33ceadd5
// declared property setter: - (void)setUuid:(id)uuid;	// 0x33cead31
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x33ceacd1
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x33ceacf1
// declared property setter: - (void)setZIndex:(int)index;	// 0x33cead11
// declared property setter: - (void)setZPosition:(float)position;	// 0x33ceac61
// declared property getter: - (CGSize)size;	// 0x33ceac71
// declared property getter: - (id)startPlugID;	// 0x33ceabc5
// declared property getter: - (double)timeIn;	// 0x33ceadbd
// declared property getter: - (id)uuid;	// 0x33cead21
// declared property getter: - (float)xRotationAngle;	// 0x33ceacc1
// declared property getter: - (float)yRotationAngle;	// 0x33ceace1
// declared property getter: - (int)zIndex;	// 0x33cead01
// declared property getter: - (float)zPosition;	// 0x33ceac51
@end

