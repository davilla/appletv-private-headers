/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSSelfExpression : NSExpression {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30266ca9
+ (id)defaultInstance;	// 0x303281ad
+ (void)initialize;	// 0x302894b5
- (id)init;	// 0x30266cb9
- (id)initWithCoder:(id)coder;	// 0x302896a5
- (id)_initPrivate;	// 0x302894e9
- (BOOL)_isDeallocating;	// 0x303281c5
- (BOOL)_tryRetain;	// 0x303281c9
- (id)autorelease;	// 0x3028951d
- (id)copyWithZone:(NSZone *)zone;	// 0x3028d35d
- (void)encodeWithCoder:(id)coder;	// 0x303281cd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3028c0d9
- (unsigned)hash;	// 0x3032824d
- (BOOL)isEqual:(id)equal;	// 0x30289a15
- (id)predicateFormat;	// 0x30328255
- (oneway void)release;	// 0x30266d49
- (id)retain;	// 0x30266d45
- (unsigned)retainCount;	// 0x303281bd
@end
