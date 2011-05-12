/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "SBSAccelerometerDelegate.h"
#import <NSObject.h> // Unknown library

@class SBSAccelerometer;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {
@private
	SBSAccelerometer *sbsaccel;	// 4 = 0x4
	opaque_pthread_mutex_t ringMutex;	// 8 = 0x8
	int ringIndex;	// 52 = 0x34
	float ringX[64];	// 56 = 0x38
	float ringY[64];	// 312 = 0x138
	float ringZ[64];	// 568 = 0x238
	double ringTime[64];	// 824 = 0x338
}
- (id)init;	// 0x3267b2d5
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x3267b451
- (void)dealloc;	// 0x3267b3c9
- (void)deferOnRunloop_accelerometerEventsEnable;	// 0x3267b2b1
- (void)getVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x3267b4f5
@end

