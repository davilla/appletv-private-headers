/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSNode.h"

@class BRXMLSchema, BRXMLElement;

__attribute__((visibility("hidden")))
@interface ATVJSElement : ATVJSNode {
@private
	BRXMLElement *xmlElement;	// 8 = 0x8
	BRXMLSchema *xmlSchema;	// 12 = 0xc
}
@property(retain, nonatomic) BRXMLElement *xmlElement;	// G=0x33309a25; S=0x33309a35; @synthesize
@property(retain, nonatomic) BRXMLSchema *xmlSchema;	// G=0x33309a59; S=0x33309a69; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x33308d5d
+ (id)elementFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x333099b9
+ (id)elementInContext:(OpaqueJSContext *)context withElement:(id)element withSchema:(id)schema;	// 0x33309939
- (void)dealloc;	// 0x33308d05
// declared property setter: - (void)setXmlElement:(id)element;	// 0x33309a35
// declared property setter: - (void)setXmlSchema:(id)schema;	// 0x33309a69
// declared property getter: - (id)xmlElement;	// 0x33309a25
// declared property getter: - (id)xmlSchema;	// 0x33309a59
@end
