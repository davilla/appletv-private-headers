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
+ (id)allocWithZone:(NSZone *)zone;	// 0x32019ca9
+ (id)defaultInstance;	// 0x320db1ad
+ (void)initialize;	// 0x3203c4b5
- (id)init;	// 0x32019cb9
- (id)initWithCoder:(id)coder;	// 0x3203c6a5
- (id)_initPrivate;	// 0x3203c4e9
- (BOOL)_isDeallocating;	// 0x320db1c5
- (BOOL)_tryRetain;	// 0x320db1c9
- (id)autorelease;	// 0x3203c51d
- (id)copyWithZone:(NSZone *)zone;	// 0x3204035d
- (void)encodeWithCoder:(id)coder;	// 0x320db1cd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3203f0d9
- (unsigned)hash;	// 0x320db24d
- (BOOL)isEqual:(id)equal;	// 0x3203ca15
- (id)predicateFormat;	// 0x320db255
- (oneway void)release;	// 0x32019d49
- (id)retain;	// 0x32019d45
- (unsigned)retainCount;	// 0x320db1bd
@end

