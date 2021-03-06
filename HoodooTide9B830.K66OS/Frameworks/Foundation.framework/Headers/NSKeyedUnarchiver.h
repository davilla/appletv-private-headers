/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSKeyedUnarchiver : NSCoder {
@private
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _objRefMap;	// 12 = 0xc
	id _replacementMap;	// 16 = 0x10
	id _nameClassMap;	// 20 = 0x14
	id _tmpRefObjMap;	// 24 = 0x18
	id _refObjMap;	// 28 = 0x1c
	int _genericKey;	// 32 = 0x20
	id _data;	// 36 = 0x24
	void *_offsetData;	// 40 = 0x28
	id _containers;	// 44 = 0x2c
	id _objects;	// 48 = 0x30
	const char *_bytes;	// 52 = 0x34
	unsigned long long _len;	// 56 = 0x38
	id _helper;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(retain) id allowedClasses;	// G=0x315f2371; S=0x3159f209; converted property
@property(assign) id delegate;	// G=0x315f22fd; S=0x315f22ed; converted property
+ (Class)classForClassName:(id)className;	// 0x3157e06d
+ (void)initialize;	// 0x3159e6a1
+ (void)setClass:(Class)aClass forClassName:(id)className;	// 0x3159e735
+ (id)unarchiveObjectWithData:(id)data;	// 0x315a060d
+ (id)unarchiveObjectWithFile:(id)file;	// 0x3157c639
- (id)init;	// 0x315f1ea1
- (id)initForReadingWithData:(id)data;	// 0x3157c789
- (id)initWithStream:(id)stream;	// 0x315f1f89
- (id)_blobForCurrentObject;	// 0x315f1de1
- (unsigned)_currentUniqueIdentifier;	// 0x315f3731
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x3157e5ed
- (id)_decodePropertyListForKey:(id)key;	// 0x315ad6f1
- (id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;	// 0x315f1ee9
- (void)_replaceObject:(id)object withObject:(id)object2;	// 0x3157ece1
- (void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;	// 0x315f2391
// converted property getter: - (id)allowedClasses;	// 0x315f2371
- (BOOL)allowsKeyedCoding;	// 0x3157e5e9
- (Class)classForClassName:(id)className;	// 0x3157e049
- (BOOL)containsValueForKey:(id)key;	// 0x315a06c1
- (void)dealloc;	// 0x3157fcdd
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x315f3f75
- (BOOL)decodeBoolForKey:(id)key;	// 0x3157f67d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x315f332d
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x315f3849
- (id)decodeDataObject;	// 0x315f3839
- (double)decodeDoubleForKey:(id)key;	// 0x315f3291
- (float)decodeFloatForKey:(id)key;	// 0x315f2d11
- (int)decodeInt32ForKey:(id)key;	// 0x3157ee91
- (long long)decodeInt64ForKey:(id)key;	// 0x315f2c75
- (int)decodeIntForKey:(id)key;	// 0x3157f389
- (id)decodeObject;	// 0x315f3751
- (id)decodeObjectForKey:(id)key;	// 0x3157d191
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x315f3ad5
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x315f3981
// converted property getter: - (id)delegate;	// 0x315f22fd
- (id)description;	// 0x315f22c1
- (void)finalize;	// 0x315f2161
- (void)finishDecoding;	// 0x3157fc39
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x315f2415
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x3159f209
- (void)setClass:(Class)aClass forClassName:(id)className;	// 0x315f230d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x315f22ed
- (unsigned)systemVersion;	// 0x315f4161
- (int)versionForClassName:(id)className;	// 0x315f4139
@end

