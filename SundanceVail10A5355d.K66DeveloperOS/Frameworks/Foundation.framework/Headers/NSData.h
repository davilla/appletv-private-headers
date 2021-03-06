/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x34641011
+ (id)data;	// 0x346636f9
+ (id)dataWithBytes:(const void *)bytes length:(unsigned)length;	// 0x34660ce1
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x34640fcd
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x346530b9
+ (id)dataWithContentsOfFile:(id)file;	// 0x34653735
+ (id)dataWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3467edd5
+ (id)dataWithContentsOfMappedFile:(id)mappedFile;	// 0x34681af1
+ (id)dataWithContentsOfURL:(id)url;	// 0x3469e38d
+ (id)dataWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3469e3cd
+ (id)dataWithData:(id)data;	// 0x34680db1
+ (BOOL)supportsSecureCoding;	// 0x3469e029
- (id)initWithBase64Encoding:(id)base64Encoding;	// 0x34688579
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x34660d25
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x3469e419
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x34641059
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x34653105
- (id)initWithCoder:(id)coder;	// 0x34679841
- (id)initWithContentsOfFile:(id)file;	// 0x3464148d
- (id)initWithContentsOfFile:(id)file error:(id *)error;	// 0x3469e64d
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3467f41d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x34648d55
- (id)initWithContentsOfMappedFile:(id)mappedFile error:(id *)error;	// 0x3469e62d
- (id)initWithContentsOfURL:(id)url;	// 0x3466a255
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3469e429
- (id)initWithData:(id)data;	// 0x34679bad
- (BOOL)_allowsDirectEncoding;	// 0x3469e02d
- (id)_asciiDescription;	// 0x3469df45
- (BOOL)_bytesAreVM;	// 0x3469e031
- (unsigned long)_cfTypeID;	// 0x3465273d
- (id)base64Encoding;	// 0x34688191
- (const void *)bytes;	// 0x3469dc69
- (Class)classForCoder;	// 0x3467c055
- (id)copyWithZone:(NSZone *)zone;	// 0x346887f5
- (id)description;	// 0x3469dc8d
- (void)encodeWithCoder:(id)coder;	// 0x346763e5
- (void)getBytes:(void *)bytes;	// 0x34675c05
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x3469e035
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x3469e0b5
- (unsigned)hash;	// 0x34680e1d
- (BOOL)isEqual:(id)equal;	// 0x3466b921
- (BOOL)isEqualToData:(id)data;	// 0x3466fd0d
- (unsigned)length;	// 0x3469dc45
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3468355d
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x3469e66d
- (id)subdataWithRange:(NSRange)range;	// 0x3468358d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x34667b69
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically error:(id *)error;	// 0x3469e361
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x34677b29
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3467d5e1
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3469e259
@end

@interface NSData (NSKindOfAdditions)
- (BOOL)isNSData__;	// 0x3466fd09
@end

@interface NSData (NSURLExtras)
- (id)_replaceCString:(const char *)string withCString:(const char *)cstring;	// 0x346f28b5
- (id)_web_guessedMIMEType;	// 0x346f2171
- (id)_web_guessedMIMETypeForExtension:(id)extension;	// 0x346f23b5
- (id)_web_guessedMIMETypeForXML;	// 0x346f2051
- (id)_web_parseRFC822HeaderFields;	// 0x346f243d
@end

@interface NSData (NSDataPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3478bebd
@end

