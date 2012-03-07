/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
@private
	XXStruct_DOQIoC _transformStruct;	// 4 = 0x4
}
@property(assign) XXStruct_DOQIoC transformStruct;	// G=0x3369f88d; S=0x3369f8c1; converted property
+ (id)transform;	// 0x3369ee79
- (id)init;	// 0x3369eeb1
- (id)initWithCoder:(id)coder;	// 0x3369faa5
- (id)initWithTransform:(id)transform;	// 0x3369ef19
- (void)appendTransform:(id)transform;	// 0x3369f581
- (id)copyWithZone:(NSZone *)zone;	// 0x3369ef89
- (void)encodeWithCoder:(id)coder;	// 0x3369f8f5
- (unsigned)hash;	// 0x3369f0c1
- (void)invert;	// 0x3369f47d
- (BOOL)isEqual:(id)equal;	// 0x3369efc1
- (void)prependTransform:(id)transform;	// 0x3369f6a1
- (void)rotateByDegrees:(float)degrees;	// 0x3369f185
- (void)rotateByRadians:(float)radians;	// 0x3369f2b1
- (void)scaleBy:(float)by;	// 0x3369f3b5
- (void)scaleXBy:(float)by yBy:(float)by2;	// 0x3369f415
// converted property setter: - (void)setTransformStruct:(XXStruct_DOQIoC)aStruct;	// 0x3369f8c1
- (CGPoint)transformPoint:(CGPoint)point;	// 0x3369f7c1
- (CGSize)transformSize:(CGSize)size;	// 0x3369f835
// converted property getter: - (XXStruct_DOQIoC)transformStruct;	// 0x3369f88d
- (void)translateXBy:(float)by yBy:(float)by2;	// 0x3369f105
@end
