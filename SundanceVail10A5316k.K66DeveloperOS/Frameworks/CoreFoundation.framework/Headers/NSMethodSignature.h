/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSMethodSignature : NSObject {
@private
	void *_private;	// 4 = 0x4
	void *_reserved[6];	// 8 = 0x8
}
+ (id)signatureWithObjCTypes:(const char *)objCTypes;	// 0x37086e61
- (id)init;	// 0x37133e1d
- (NSMethodFrameArgInfo *)_argInfo:(int)info;	// 0x37087705
- (Class)_classForObjectAtArgumentIndex:(int)argumentIndex;	// 0x37134099
- (XXStruct_0V86UA *)_frameDescriptor;	// 0x370876c9
- (id)_protocolsForObjectAtArgumentIndex:(int)argumentIndex;	// 0x371340f9
- (id)_signatureForBlockAtArgumentIndex:(int)argumentIndex;	// 0x37133fed
- (id)_typeString;	// 0x37133f01
- (void)dealloc;	// 0x37133e35
- (id)debugDescription;	// 0x37134365
- (void)finalize;	// 0x37133ead
- (unsigned)frameLength;	// 0x370876ed
- (const char *)getArgumentTypeAtIndex:(unsigned)index;	// 0x370a9735
- (unsigned)hash;	// 0x371341cd
- (BOOL)isEqual:(id)equal;	// 0x37134229
- (BOOL)isOneway;	// 0x370b88c9
- (unsigned)methodReturnLength;	// 0x370b2019
- (const char *)methodReturnType;	// 0x370a970d
- (unsigned)numberOfArguments;	// 0x370879f9
@end

