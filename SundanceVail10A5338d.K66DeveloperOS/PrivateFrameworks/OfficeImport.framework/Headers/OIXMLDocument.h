/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"

@class NSString, OIXMLElement;

@interface OIXMLDocument : OIXMLNode {
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x339c89cd; S=0x339c8641; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x339c85f9
- (id)XMLString;	// 0x33a15539
- (id)closingTagString;	// 0x339db771
- (id)contentString;	// 0x33c38d25
- (id)copyWithZone:(NSZone *)zone;	// 0x33c38c3d
- (id)createMutableXMLString;	// 0x33a15561
- (void)dealloc;	// 0x339dff59
- (id)description;	// 0x33c38d15
- (id)openingTagString;	// 0x339c91cd
// converted property getter: - (id)rootElement;	// 0x339c89cd
- (void)setCharacterEncoding:(id)encoding;	// 0x339c86c9
// converted property setter: - (void)setRootElement:(id)element;	// 0x339c8641
- (void)setVersion:(id)version;	// 0x339c8685
@end
