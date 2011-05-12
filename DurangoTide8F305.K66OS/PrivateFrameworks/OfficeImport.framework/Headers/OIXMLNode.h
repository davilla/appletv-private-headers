/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying> {
@private
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x343c6901; converted property
@property(retain) NSString *name;	// G=0x343c6711; S=0x343bf329; converted property
@property(retain) id objectValue;	// G=0x34584169; S=0x343bf84d; converted property
@property(retain) id stringValue;	// G=0x343c6911; S=0x343bf365; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x343c6929
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x3458423d
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x343bf7c1
+ (id)elementWithName:(id)name;	// 0x343bf281
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x343c625d
+ (id)textWithStringValue:(id)stringValue;	// 0x343c4fb5
- (id)initWithKind:(unsigned)kind;	// 0x343bf319
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x343bf80d
- (id)XMLString;	// 0x343c6d5d
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x343c67b9
- (id)closingTagString;	// 0x34584185
- (id)contentString;	// 0x34584191
- (id)copyWithZone:(NSZone *)zone;	// 0x345841b9
- (void)dealloc;	// 0x3439d8a1
- (id)description;	// 0x345841a5
// converted property getter: - (unsigned)kind;	// 0x343c6901
// converted property getter: - (id)name;	// 0x343c6711
// converted property getter: - (id)objectValue;	// 0x34584169
- (id)openingTagString;	// 0x34584179
// converted property setter: - (void)setName:(id)name;	// 0x343bf329
// converted property setter: - (void)setObjectValue:(id)value;	// 0x343bf84d
// converted property setter: - (void)setStringValue:(id)value;	// 0x343bf365
// converted property getter: - (id)stringValue;	// 0x343c6911
@end

