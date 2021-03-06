/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQHXMLOutput.h"


__attribute__((visibility("hidden")))
@interface GQHDOMXML : NSObject <GQHXMLOutput> {
@private
	xmlDoc *mXMLDoc;	// 4 = 0x4
	xmlNode *mCurrentNode;	// 8 = 0x8
}
- (id)initEmpty;	// 0x342885c1
- (id)initWithHead;	// 0x342887cd
- (void)addCharRef:(const char *)ref;	// 0x342886f9
- (void)addXmlCharContent:(const char *)content;	// 0x3428872d
- (CFDataRef)createHtml;	// 0x342886e5
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x3428867d
- (CFDataRef)createProgressiveHtml;	// 0x34288595
- (void)dealloc;	// 0x34288781
- (void)endElement;	// 0x34288581
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x34288771
- (void)removeStyleSheetLinkNodeAndAddStyle:(CFStringRef)style;	// 0x34288879
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x34288759
- (void)startElement:(const char *)element;	// 0x34288599
@end

