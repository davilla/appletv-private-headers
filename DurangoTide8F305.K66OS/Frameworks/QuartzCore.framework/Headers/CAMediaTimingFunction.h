/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface CAMediaTimingFunction : NSObject <NSCoding> {
@private
	CAMediaTimingFunctionPrivate *_priv;	// 4 = 0x4
}
+ (id)functionWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x334f6e6d
+ (id)functionWithName:(id)name;	// 0x334f3bcd
- (id)initWithCoder:(id)coder;	// 0x33554289
- (id)initWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x334ed385
- (void)_getPoints:(double *)points;	// 0x33554225
- (float)_solveForInput:(float)input;	// 0x33554589
- (void)dealloc;	// 0x334ed4b9
- (id)description;	// 0x335543a1
- (void)encodeWithCoder:(id)coder;	// 0x33554309
- (void)getControlPointAtIndex:(unsigned long)index values:(float [2])values;	// 0x335543fd
@end

