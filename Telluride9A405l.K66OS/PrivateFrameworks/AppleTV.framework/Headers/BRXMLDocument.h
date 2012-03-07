/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRXMLNode.h"

@class BRXMLElement;

@interface BRXMLDocument : BRXMLNode {
@private
	BRXMLElement *_rootElement;	// 8 = 0x8
}
@property(retain, nonatomic) BRXMLElement *rootElement;	// G=0x35eaf459; S=0x35eaf5d9; 
- (id)init;	// 0x35eaf16d
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x35eaed5d
- (id)initWithRootElement:(id)rootElement;	// 0x35eaf199
- (id)initWithXMLString:(id)xmlstring options:(unsigned)options error:(id *)error;	// 0x35eaf34d
- (id)XMLData;	// 0x35eaf79d
- (id)XMLDataWithOptions:(unsigned)options;	// 0x35eaf921
- (void)dealloc;	// 0x35eaf385
- (id)elementById:(id)anId;	// 0x35f00a11
- (id)makeElementNamed:(id)named;	// 0x35eaf931
// declared property getter: - (id)rootElement;	// 0x35eaf459
// declared property setter: - (void)setRootElement:(id)element;	// 0x35eaf5d9
@end
