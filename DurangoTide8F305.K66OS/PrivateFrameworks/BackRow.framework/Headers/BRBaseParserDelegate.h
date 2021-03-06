/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "NSXMLParserDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableString;

@interface BRBaseParserDelegate : NSObject <NSXMLParserDelegate> {
@private
	NSMutableString *_characters;	// 4 = 0x4
	BOOL _ignoreCharacters;	// 8 = 0x8
	BOOL _trimWhitespace;	// 9 = 0x9
}
@property(readonly, retain) NSMutableString *characters;	// G=0x32937261; converted property
@property(assign) BOOL ignoreCharacters;	// G=0x329c892d; S=0x329c891d; converted property
@property(assign) BOOL trimWhitespace;	// G=0x329c890d; S=0x329c88fd; converted property
// converted property getter: - (id)characters;	// 0x32937261
- (void)dealloc;	// 0x32937c2d
- (SEL)endSelectorForElementName:(id)elementName;	// 0x329370dd
// converted property getter: - (BOOL)ignoreCharacters;	// 0x329c892d
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x32937039
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x32936d9d
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x32936fad
- (void)parser:(id)parser parseErrorOccurred:(id *)occurred;	// 0x329c88f9
- (void)resetCharacters;	// 0x329c893d
// converted property setter: - (void)setIgnoreCharacters:(BOOL)characters;	// 0x329c891d
// converted property setter: - (void)setTrimWhitespace:(BOOL)whitespace;	// 0x329c88fd
- (SEL)startSelectorForElementName:(id)elementName;	// 0x32936e21
// converted property getter: - (BOOL)trimWhitespace;	// 0x329c890d
@end

