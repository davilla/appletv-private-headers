/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x3123dc19
+ (BOOL)isChart:(id)chart;	// 0x3123dbcd
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x312da8c9
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x312994a9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x3123da89
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x3129924d
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x312ab1b5
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x3123ce7d
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x3123aa51
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x312f4719
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x3123d3c9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x31299619
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x3123db19
@end
