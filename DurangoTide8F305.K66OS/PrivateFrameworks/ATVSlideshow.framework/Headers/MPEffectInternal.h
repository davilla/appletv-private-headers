/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPEffectInternal : NSObject {
	float opacity;	// 4 = 0x4
	CGPoint position;	// 8 = 0x8
	float zPosition;	// 16 = 0x10
	CGSize size;	// 20 = 0x14
	float rotationAngle;	// 28 = 0x1c
	float xRotationAngle;	// 32 = 0x20
	float yRotationAngle;	// 36 = 0x24
	double timeIn;	// 40 = 0x28
	double phaseInDuration;	// 48 = 0x30
	double phaseOutDuration;	// 56 = 0x38
	double mainDuration;	// 64 = 0x40
	NSString *effectID;	// 72 = 0x48
	NSString *presetID;	// 76 = 0x4c
	int audioPriority;	// 80 = 0x50
	int randomSeed;	// 84 = 0x54
	NSString *uuid;	// 88 = 0x58
}
@property(assign, nonatomic) int audioPriority;	// G=0x3322bb0d; S=0x3322bb1d; @synthesize
@property(retain, nonatomic) NSString *effectID;	// G=0x3322ba95; S=0x3322baa5; @synthesize
@property(assign, nonatomic) double mainDuration;	// G=0x3322ba65; S=0x3322ba7d; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x3322b8d5; S=0x3322b8e5; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x3322ba05; S=0x3322ba1d; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3322ba35; S=0x3322ba4d; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x3322b8f5; S=0x3322b90d; @synthesize
@property(retain, nonatomic) NSString *presetID;	// G=0x3322bad1; S=0x3322bae1; @synthesize
@property(assign, nonatomic) int randomSeed;	// G=0x3322bb2d; S=0x3322bb3d; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x3322b975; S=0x3322b985; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x3322b945; S=0x3322b95d; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x3322b9d5; S=0x3322b9ed; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x3322bb4d; S=0x3322bb5d; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x3322b995; S=0x3322b9a5; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x3322b9b5; S=0x3322b9c5; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x3322b925; S=0x3322b935; @synthesize
// declared property getter: - (int)audioPriority;	// 0x3322bb0d
- (void)dealloc;	// 0x3322b841
// declared property getter: - (id)effectID;	// 0x3322ba95
// declared property getter: - (double)mainDuration;	// 0x3322ba65
// declared property getter: - (float)opacity;	// 0x3322b8d5
// declared property getter: - (double)phaseInDuration;	// 0x3322ba05
// declared property getter: - (double)phaseOutDuration;	// 0x3322ba35
// declared property getter: - (CGPoint)position;	// 0x3322b8f5
// declared property getter: - (id)presetID;	// 0x3322bad1
// declared property getter: - (int)randomSeed;	// 0x3322bb2d
// declared property getter: - (float)rotationAngle;	// 0x3322b975
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x3322bb1d
// declared property setter: - (void)setEffectID:(id)anId;	// 0x3322baa5
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x3322ba7d
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x3322b8e5
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3322ba1d
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3322ba4d
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x3322b90d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3322bae1
// declared property setter: - (void)setRandomSeed:(int)seed;	// 0x3322bb3d
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x3322b985
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3322b95d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3322b9ed
// declared property setter: - (void)setUuid:(id)uuid;	// 0x3322bb5d
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x3322b9a5
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x3322b9c5
// declared property setter: - (void)setZPosition:(float)position;	// 0x3322b935
// declared property getter: - (CGSize)size;	// 0x3322b945
// declared property getter: - (double)timeIn;	// 0x3322b9d5
// declared property getter: - (id)uuid;	// 0x3322bb4d
// declared property getter: - (float)xRotationAngle;	// 0x3322b995
// declared property getter: - (float)yRotationAngle;	// 0x3322b9b5
// declared property getter: - (float)zPosition;	// 0x3322b925
@end

