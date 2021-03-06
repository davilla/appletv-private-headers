/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSMethodSignature : NSObject {
@private
	void *_private;	// 4 = 0x4
	void *_reserved[6];	// 8 = 0x8
}
+ (id)signatureWithObjCTypes:(const char *)objCTypes;	// 0x32e281d1
- (id)init;	// 0x32eae975
- (NSMethodFrameArgInfo *)_argInfo:(int)info;	// 0x32e28da9
- (XXStruct_0V86UA *)_frameDescriptor;	// 0x32e28bdd
- (id)_typeString;	// 0x32eaea79
- (void)dealloc;	// 0x32eaea09
- (id)debugDescription;	// 0x32eaf355
- (void)finalize;	// 0x32eae9b5
- (unsigned)frameLength;	// 0x32e28d91
- (const char *)getArgumentTypeAtIndex:(unsigned)index;	// 0x32eaec59
- (unsigned)hash;	// 0x32eaed41
- (BOOL)isEqual:(id)equal;	// 0x32eaedc1
- (BOOL)isOneway;	// 0x32e4f891
- (unsigned)methodReturnLength;	// 0x32e4f86d
- (const char *)methodReturnType;	// 0x32e542b1
- (unsigned)numberOfArguments;	// 0x32e2909d
@end

