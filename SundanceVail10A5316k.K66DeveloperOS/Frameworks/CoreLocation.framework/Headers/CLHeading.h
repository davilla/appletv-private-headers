/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double headingAccuracy;	// G=0x33ae36e9; 
@property(readonly, assign, nonatomic) double magneticHeading;	// G=0x33ae3699; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x33ae3789; 
@property(readonly, assign, nonatomic) double trueHeading;	// G=0x33ae36c1; 
@property(readonly, assign, nonatomic) double x;	// G=0x33ae3711; 
@property(readonly, assign, nonatomic) double y;	// G=0x33ae3739; 
@property(readonly, assign, nonatomic) double z;	// G=0x33ae3761; 
- (id)initWithClientHeading:(XXStruct__AuldD)clientHeading;	// 0x33ae2ff9
- (id)initWithCoder:(id)coder;	// 0x33ae30e9
- (id)copyWithZone:(NSZone *)zone;	// 0x33ae34b5
- (void)dealloc;	// 0x33ae3469
- (id)description;	// 0x33ae3511
- (void)encodeWithCoder:(id)coder;	// 0x33ae32d1
// declared property getter: - (double)headingAccuracy;	// 0x33ae36e9
// declared property getter: - (double)magneticHeading;	// 0x33ae3699
- (id)shortDescription;	// 0x33ae35c5
// declared property getter: - (id)timestamp;	// 0x33ae3789
// declared property getter: - (double)trueHeading;	// 0x33ae36c1
// declared property getter: - (double)x;	// 0x33ae3711
// declared property getter: - (double)y;	// 0x33ae3739
// declared property getter: - (double)z;	// 0x33ae3761
@end
