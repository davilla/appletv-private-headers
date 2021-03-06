/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVJSNode.h"
#import "AppleTV-Structs.h"

@class BRXMLElement, BRXMLSchema;

__attribute__((visibility("hidden")))
@interface ATVJSElement : ATVJSNode {
@private
	BRXMLElement *xmlElement;	// 8 = 0x8
	BRXMLSchema *xmlSchema;	// 12 = 0xc
}
@property(retain, nonatomic) BRXMLElement *xmlElement;	// G=0x35f00651; S=0x35f00661; @synthesize
@property(retain, nonatomic) BRXMLSchema *xmlSchema;	// G=0x35f00685; S=0x35f00695; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x35effad1
+ (id)elementFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x35f005e5
+ (id)elementInContext:(OpaqueJSContext *)context withElement:(id)element withSchema:(id)schema;	// 0x35f00565
- (void)dealloc;	// 0x35effa79
// declared property setter: - (void)setXmlElement:(id)element;	// 0x35f00661
// declared property setter: - (void)setXmlSchema:(id)schema;	// 0x35f00695
// declared property getter: - (id)xmlElement;	// 0x35f00651
// declared property getter: - (id)xmlSchema;	// 0x35f00685
@end

