/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString;

@interface BRBaseParserDelegate : NSObject <NSXMLParserDelegate> {
@private
	NSMutableString *_characters;	// 4 = 0x4
	BOOL _ignoreCharacters;	// 8 = 0x8
	BOOL _trimWhitespace;	// 9 = 0x9
}
@property(readonly, retain) NSMutableString *characters;	// G=0x33b42ce5; converted property
@property(assign) BOOL ignoreCharacters;	// G=0x33b42f71; S=0x33b42f61; converted property
@property(assign) BOOL trimWhitespace;	// G=0x33b42d4d; S=0x33b42d3d; converted property
// converted property getter: - (id)characters;	// 0x33b42ce5
- (void)dealloc;	// 0x33b42aad
- (SEL)endSelectorForElementName:(id)elementName namespaceURI:(id)uri;	// 0x33b42e49
// converted property getter: - (BOOL)ignoreCharacters;	// 0x33b42f71
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x33b42b8d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33b42af9
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x33b42c41
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x33b42ce1
- (void)resetCharacters;	// 0x33b42f35
// converted property setter: - (void)setIgnoreCharacters:(BOOL)characters;	// 0x33b42f61
// converted property setter: - (void)setTrimWhitespace:(BOOL)whitespace;	// 0x33b42d3d
- (SEL)startSelectorForElementName:(id)elementName namespaceURI:(id)uri;	// 0x33b42d5d
// converted property getter: - (BOOL)trimWhitespace;	// 0x33b42d4d
@end

