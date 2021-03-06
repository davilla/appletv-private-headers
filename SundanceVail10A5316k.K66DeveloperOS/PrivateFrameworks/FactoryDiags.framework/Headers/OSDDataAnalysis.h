/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library


@interface OSDDataAnalysis : NSObject {
}
+ (void)initialize;	// 0x36b4a9a9
+ (id)sharedInstance;	// 0x36b4aa01
- (id)init;	// 0x36b4aa11
- (double)average:(double *)average size:(unsigned)size;	// 0x36b4ab19
- (double)interpolate:(double)interpolate vx:(double *)vx vy:(double *)vy size:(unsigned)size;	// 0x36b4aa69
- (double)stdev:(double *)stdev size:(unsigned)size;	// 0x36b4abb1
- (double)variance:(double *)variance size:(unsigned)size;	// 0x36b4ab51
@end

