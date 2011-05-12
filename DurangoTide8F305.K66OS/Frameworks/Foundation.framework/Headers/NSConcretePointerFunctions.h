/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
@private
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x327b6105; S=0x327b607d; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x327b60f5; S=0x327b606d; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x327b60d5; S=0x327b603d; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x327b60e5; S=0x327b6055; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x327b6115; S=0x327b608d; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x327b60c5; S=0x327b602d; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x327b6125; S=0x327b609d; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x327b6139; S=0x327b60b1; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(bool)sentinel;	// 0x327486e5
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x32748415
- (id)initWithOptions:(unsigned)options;	// 0x327b6535
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x327b6105
- (id)copyWithZone:(NSZone *)zone;	// 0x327b61d1
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x327b60f5
- (unsigned)hash;	// 0x327b601d
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x327b60d5
- (BOOL)isEqual:(id)equal;	// 0x327b6021
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x327b60e5
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x327b6115
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x327b607d
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x327b606d
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x327b603d
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x327b6055
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x327b608d
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x327b602d
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x327b609d
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x327b60b1
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x327b60c5
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x327b6125
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x327b6139
@end

