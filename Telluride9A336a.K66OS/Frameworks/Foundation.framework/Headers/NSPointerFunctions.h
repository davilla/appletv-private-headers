/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSPointerFunctions : NSObject <NSCopying> {
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x336ddadd; S=0x336dda9d; 
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x336ddad5; S=0x336dda95; 
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x336ddac5; S=0x336dda85; 
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x336ddacd; S=0x336dda8d; 
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x336ddae5; S=0x336ddaa5; 
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x336ddabd; S=0x336dda7d; 
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x336ddaed; S=0x336ddaad; 
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x336ddaf5; S=0x336ddab5; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x33683d4d
+ (id)pointerFunctionsWithOptions:(unsigned)options;	// 0x336dd991
- (id)initWithOptions:(unsigned)options;	// 0x336dd9e1
// declared property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x336ddadd
- (id)copyWithZone:(NSZone *)zone;	// 0x336dda75
// declared property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x336ddad5
// declared property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x336ddac5
// declared property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x336ddacd
// declared property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x336ddae5
// declared property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x336dda9d
// declared property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x336dda95
// declared property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x336dda85
// declared property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x336dda8d
// declared property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x336ddaa5
// declared property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x336dda7d
// declared property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x336ddaad
// declared property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x336ddab5
// declared property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x336ddabd
// declared property getter: - (BOOL)usesStrongWriteBarrier;	// 0x336ddaed
// declared property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x336ddaf5
@end

