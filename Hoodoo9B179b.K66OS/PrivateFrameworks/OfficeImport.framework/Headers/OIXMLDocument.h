/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode {
@private
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x327bfefd; S=0x327f9c49; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x327f9c01
- (id)XMLString;	// 0x32833c3d
- (id)closingTagString;	// 0x327bff35
- (id)contentString;	// 0x32a02fdd
- (id)copyWithZone:(NSZone *)zone;	// 0x32a02ffd
- (id)createMutableXMLString;	// 0x32833c65
- (void)dealloc;	// 0x327c4d75
- (id)description;	// 0x32a02fed
- (id)openingTagString;	// 0x327f9f15
// converted property getter: - (id)rootElement;	// 0x327bfefd
- (void)setCharacterEncoding:(id)encoding;	// 0x327f9cd1
// converted property setter: - (void)setRootElement:(id)element;	// 0x327f9c49
- (void)setVersion:(id)version;	// 0x327f9c8d
@end

