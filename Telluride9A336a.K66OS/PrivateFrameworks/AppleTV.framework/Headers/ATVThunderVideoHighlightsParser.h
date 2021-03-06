/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVThunderXMLParser.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableString, ATVThunderVideoHighlight;

__attribute__((visibility("hidden")))
@interface ATVThunderVideoHighlightsParser : NSObject <ATVThunderXMLParser> {
@private
	NSMutableArray *_videoHighlights;	// 4 = 0x4
	NSMutableArray *_recaps;	// 8 = 0x8
	ATVThunderVideoHighlight *_currentHighlight;	// 12 = 0xc
	NSMutableString *_currentElement;	// 16 = 0x10
}
- (id)init;	// 0x339e90a1
- (id)createStorePage;	// 0x339e91b5
- (id)createStorePageForError:(int)error;	// 0x339e96c5
- (void)dealloc;	// 0x339e912d
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x339e98d9
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x339e9781
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x339e9b89
@end

