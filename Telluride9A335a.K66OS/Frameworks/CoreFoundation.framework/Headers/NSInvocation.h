/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
@private
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x334630b9; S=0x33485785; converted property
@property(retain) id target;	// G=0x334a9e41; S=0x3348ee05; converted property
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x33462ea5
- (id)init;	// 0x33506ed9
- (void)_addAttachedObject:(id)object;	// 0x33507101
- (BOOL)argumentsRetained;	// 0x335070e9
- (id)copyWithZone:(NSZone *)zone;	// 0x33507159
- (void)dealloc;	// 0x33464179
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x334630dd
- (void)getReturnValue:(void *)value;	// 0x334a472d
- (void)invoke;	// 0x33463741
- (void)invokeSuper;	// 0x33507649
- (void)invokeUsingIMP:(/*function-pointer*/ void *)imp;	// 0x3350755d
- (void)invokeWithTarget:(id)target;	// 0x334633cd
- (id)methodSignature;	// 0x334855f5
- (void)retainArguments;	// 0x334856e9
// converted property getter: - (SEL)selector;	// 0x334630b9
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x33463405
- (void)setReturnValue:(void *)value;	// 0x335072d1
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x33485785
// converted property setter: - (void)setTarget:(id)target;	// 0x3348ee05
// converted property getter: - (id)target;	// 0x334a9e41
@end

