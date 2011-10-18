/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUDataRepresentation : NSObject {
@private
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
}
- (id)bufferedInputStream;	// 0x352a7ef1
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x354039c1
- (CGDataProviderRef)cgDataProvider;	// 0x35403e49
- (int)compare:(id)compare;	// 0x35404371
- (long long)dataLength;	// 0x3540389d
- (long long)encodedLength;	// 0x35403929
- (BOOL)hasSameLocationAs:(id)as;	// 0x35403899
- (unsigned)hash;	// 0x35403f1d
- (id)inputStream;	// 0x35403939
- (BOOL)isEncrypted;	// 0x35403895
- (BOOL)isEqual:(id)equal;	// 0x35404169
- (BOOL)isReadable;	// 0x35403891
- (unsigned long)readIntoData:(id)data;	// 0x35403af1
- (xmlDoc *)xmlDocument;	// 0x352a9bbd
- (xmlTextReader *)xmlReader;	// 0x352b735d
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x35403a31
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x35403cf9
@end

