/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface CPEnumerationMap : NSObject {
	CFDictionaryRef m_valueToString;	// 4 = 0x4
	CFDictionaryRef m_stringToValue;	// 8 = 0x8
	BOOL m_caseSensitive;	// 12 = 0xc
}
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count;	// 0x36fd9e15
- (id)initWithStructs:(const CPEnumerationStruct *)structs count:(int)count caseSensitive:(BOOL)sensitive;	// 0x36f194f1
- (void)dealloc;	// 0x370f5851
- (id)stringForValue:(int)value;	// 0x370861d1
- (int)valueForString:(id)string;	// 0x36fd7301
@end

