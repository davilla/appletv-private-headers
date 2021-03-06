/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library
#import "XPCObjects-Structs.h"

@class NSObject;
@protocol OS_xpc_object;

@interface XPCEncoder : NSCoder {
	NSObject<OS_xpc_object> *_encoding;	// 4 = 0x4
	NSObject<OS_xpc_object> *_currentObject;	// 8 = 0x8
	CFDictionaryRef _encodedObjects;	// 12 = 0xc
	CFDictionaryRef _conditionalObjects;	// 16 = 0x10
	unsigned _nextConditionalObjectID;	// 20 = 0x14
	CFDictionaryRef _replacementObjects;	// 24 = 0x18
}
+ (id)copyEncodingForRootObject:(id)rootObject;	// 0x3481a095
- (id)init;	// 0x3481a115
- (void)_fixUpConditionalObjects;	// 0x3481a7c5
- (id)_replacementObjectForObject:(id)object;	// 0x3481a77d
- (void)_verifyCurrentObject;	// 0x3481a269
- (BOOL)allowsKeyedCoding;	// 0x3481a235
- (void)dealloc;	// 0x3481a1ad
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3481a491
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x3481a605
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x3481a3d1
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3481a5b9
- (void)encodeEndpoint:(id)endpoint forKey:(id)key;	// 0x3481a651
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3481a58d
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3481a501
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3481a541
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3481a4e1
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x3481a521
- (void)encodeMachSendRight:(unsigned)right forKey:(id)key;	// 0x3481a6fd
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3481a2b9
- (void)encodeRootObject:(id)object;	// 0x3481a239
- (id)encoding;	// 0x3481a225
- (int)versionForClassName:(id)className;	// 0x3481a755
@end

