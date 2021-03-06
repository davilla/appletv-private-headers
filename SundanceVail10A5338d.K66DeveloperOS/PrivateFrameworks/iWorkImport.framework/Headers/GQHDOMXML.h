/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHXMLOutput.h"
#import <NSObject.h> // Unknown library


@interface GQHDOMXML : NSObject <GQHXMLOutput> {
	xmlDoc *mXMLDoc;	// 4 = 0x4
	xmlNode *mCurrentNode;	// 8 = 0x8
}
- (id)initEmpty;	// 0x350c1bf9
- (id)initWithHead;	// 0x350c1cad
- (void)addCharRef:(const char *)ref;	// 0x350c1e31
- (void)addXmlCharContent:(const char *)content;	// 0x350c1e05
- (CFDataRef)createHtml;	// 0x350c1e65
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x350c1e79
- (CFDataRef)createProgressiveHtml;	// 0x350c1ee1
- (void)dealloc;	// 0x350c1d59
- (void)endElement;	// 0x350c1dc9
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x350c1ddd
- (void)removeStyleSheetLinkNodeAndAddStyle:(CFStringRef)style;	// 0x350c1ee5
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x350c1ded
- (void)startElement:(const char *)element;	// 0x350c1da1
@end

