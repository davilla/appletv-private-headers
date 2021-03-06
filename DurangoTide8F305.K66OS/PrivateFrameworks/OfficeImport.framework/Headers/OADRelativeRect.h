/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject <NSCopying> {
@private
	float mLeft;	// 4 = 0x4
	float mTop;	// 8 = 0x8
	float mRight;	// 12 = 0xc
	float mBottom;	// 16 = 0x10
}
@property(assign) float bottom;	// G=0x3443931d; S=0x344ae119; converted property
@property(assign) float left;	// G=0x344392ed; S=0x344ace69; converted property
@property(assign) float right;	// G=0x344392fd; S=0x344ace8d; converted property
@property(assign) float top;	// G=0x3443930d; S=0x344ae0f5; converted property
- (id)init;	// 0x344acdbd
- (id)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom;	// 0x344acde1
// converted property getter: - (float)bottom;	// 0x3443931d
- (id)copyWithZone:(NSZone *)zone;	// 0x34539715
- (unsigned)hash;	// 0x344396fd
- (BOOL)isEqual:(id)equal;	// 0x34586c4d
// converted property getter: - (float)left;	// 0x344392ed
// converted property getter: - (float)right;	// 0x344392fd
// converted property setter: - (void)setBottom:(float)bottom;	// 0x344ae119
// converted property setter: - (void)setLeft:(float)left;	// 0x344ace69
// converted property setter: - (void)setRight:(float)right;	// 0x344ace8d
// converted property setter: - (void)setTop:(float)top;	// 0x344ae0f5
// converted property getter: - (float)top;	// 0x3443930d
@end

