/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"


@interface NSTruePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x315a6815
+ (id)defaultInstance;	// 0x3158a8ed
+ (void)initialize;	// 0x315a5f5d
- (id)initWithCoder:(id)coder;	// 0x31641b59
- (BOOL)_isDeallocating;	// 0x31641ad1
- (BOOL)_tryRetain;	// 0x31641ad5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31641bd1
- (id)autorelease;	// 0x315a6825
- (id)copyWithZone:(NSZone *)zone;	// 0x31641bb9
- (void)encodeWithCoder:(id)coder;	// 0x31641ad9
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x31641bcd
- (unsigned)hash;	// 0x31641bbd
- (BOOL)isEqual:(id)equal;	// 0x3158a8fd
- (id)predicateFormat;	// 0x31641bc1
- (oneway void)release;	// 0x315a690d
- (id)retain;	// 0x315a6829
- (unsigned)retainCount;	// 0x31641ac9
@end

