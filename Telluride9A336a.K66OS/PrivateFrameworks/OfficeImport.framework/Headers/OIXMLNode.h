/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying> {
@private
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x34b866a9; converted property
@property(retain) NSString *name;	// G=0x34b864e9; S=0x34b7f3b5; converted property
@property(retain) id objectValue;	// G=0x34e4d431; S=0x34b7f3f9; converted property
@property(retain) id stringValue;	// G=0x34b866b9; S=0x34b81665; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x34b866d9
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x34e4d4f5
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x34b7f30d
+ (id)elementWithName:(id)name;	// 0x34b815bd
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x34c1d239
+ (id)textWithStringValue:(id)stringValue;	// 0x34b85b79
- (id)initWithKind:(unsigned)kind;	// 0x34b7f3a5
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x34b7f361
- (id)XMLString;	// 0x34b862a9
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x34b86561
- (id)closingTagString;	// 0x34e4d44d
- (id)contentString;	// 0x34e4d575
- (id)copyWithZone:(NSZone *)zone;	// 0x34e4d459
- (void)dealloc;	// 0x34c0b2f9
- (id)description;	// 0x34e4d585
// converted property getter: - (unsigned)kind;	// 0x34b866a9
// converted property getter: - (id)name;	// 0x34b864e9
// converted property getter: - (id)objectValue;	// 0x34e4d431
- (id)openingTagString;	// 0x34e4d441
// converted property setter: - (void)setName:(id)name;	// 0x34b7f3b5
// converted property setter: - (void)setObjectValue:(id)value;	// 0x34b7f3f9
// converted property setter: - (void)setStringValue:(id)value;	// 0x34b81665
// converted property getter: - (id)stringValue;	// 0x34b866b9
@end
