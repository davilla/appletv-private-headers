/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x31ad4f55; 
@property(readonly, assign) int clientHeight;	// G=0x31ad4825; 
@property(readonly, assign) int clientLeft;	// G=0x31ad4525; 
@property(readonly, assign) int clientTop;	// G=0x31ad4625; 
@property(readonly, assign) int clientWidth;	// G=0x31ad4725; 
@property(readonly, assign) DOMElement *firstElementChild;	// G=0x31a189b9; 
@property(readonly, assign) NSString *innerText;	// G=0x31ad5055; 
@property(readonly, assign) DOMElement *lastElementChild;	// G=0x31ad4d35; 
@property(readonly, assign) DOMElement *nextElementSibling;	// G=0x31a18ac5; 
@property(readonly, assign) int offsetHeight;	// G=0x31a0eae1; 
@property(readonly, assign) int offsetLeft;	// G=0x31ad4219; 
@property(readonly, assign) DOMElement *offsetParent;	// G=0x31ad4419; 
@property(readonly, assign) int offsetTop;	// G=0x31ad4319; 
@property(readonly, assign) int offsetWidth;	// G=0x31a0e9e1; 
@property(readonly, assign) DOMElement *previousElementSibling;	// G=0x31ad4e41; 
@property(readonly, assign) int scrollHeight;	// G=0x31a18d71; 
@property(assign) int scrollLeft;	// G=0x31ad4925; S=0x31ad4a29; 
@property(assign) int scrollTop;	// G=0x31ad4b2d; S=0x31ad4c31; 
@property(readonly, assign) int scrollWidth;	// G=0x31a18c35; 
@property(readonly, assign) DOMCSSStyleDeclaration *style;	// G=0x319d4b6d; 
@property(readonly, assign) NSString *tagName;	// G=0x31907e91; 
- (GSFontRef)_font;	// 0x31abb479
- (id)_getURLAttribute:(id)attribute;	// 0x319fc671
- (void)blur;	// 0x31a14a19
// declared property getter: - (unsigned)childElementCount;	// 0x31ad4f55
// declared property getter: - (int)clientHeight;	// 0x31ad4825
// declared property getter: - (int)clientLeft;	// 0x31ad4525
// declared property getter: - (int)clientTop;	// 0x31ad4625
// declared property getter: - (int)clientWidth;	// 0x31ad4725
// declared property getter: - (id)firstElementChild;	// 0x31a189b9
- (void)focus;	// 0x31ad7ded
- (id)getAttribute:(id)attribute;	// 0x318c00a5
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x31ad5ef1
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x31ad5c95
- (id)getAttributeNode:(id)node;	// 0x31ad5579
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x31ad7395
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x31ad70f5
- (id)getElementsByClassName:(id)name;	// 0x31ad8301
- (id)getElementsByTagName:(id)name;	// 0x31ad5a89
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x31ad6e51
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x31ad6bad
- (BOOL)hasAttribute:(id)attribute;	// 0x31ad77b9
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x31ad7ba9
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x31ad7965
// declared property getter: - (id)innerText;	// 0x31ad5055
- (BOOL)isFocused;	// 0x31a14db1
// declared property getter: - (id)lastElementChild;	// 0x31ad4d35
// declared property getter: - (id)nextElementSibling;	// 0x31a18ac5
// declared property getter: - (int)offsetHeight;	// 0x31a0eae1
// declared property getter: - (int)offsetLeft;	// 0x31ad4219
// declared property getter: - (id)offsetParent;	// 0x31ad4419
// declared property getter: - (int)offsetTop;	// 0x31ad4319
// declared property getter: - (int)offsetWidth;	// 0x31a0e9e1
// declared property getter: - (id)previousElementSibling;	// 0x31ad4e41
- (id)querySelector:(id)selector;	// 0x31ad850d
- (id)querySelectorAll:(id)all;	// 0x31ad8725
- (void)removeAttribute:(id)attribute;	// 0x3199b5d9
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x31ad696d
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x31ad672d
- (id)removeAttributeNode:(id)node;	// 0x31ad5905
- (void)scrollByLines:(int)lines;	// 0x31ad8101
- (void)scrollByPages:(int)pages;	// 0x31ad8201
// declared property getter: - (int)scrollHeight;	// 0x31a18d71
- (void)scrollIntoView:(BOOL)view;	// 0x31ad7ef1
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x31ad7ff9
// declared property getter: - (int)scrollLeft;	// 0x31ad4925
// declared property getter: - (int)scrollTop;	// 0x31ad4b2d
// declared property getter: - (int)scrollWidth;	// 0x31a18c35
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x31ad5329
- (void)setAttribute:(id)attribute value:(id)value;	// 0x3199e735
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x31ad643d
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x31ad614d
- (id)setAttributeNode:(id)node;	// 0x31ad5781
- (id)setAttributeNodeNS:(id)ns;	// 0x31ad7635
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x31ad4a29
// declared property setter: - (void)setScrollTop:(int)top;	// 0x31ad4c31
- (int)structuralComplexityContribution;	// 0x31b3d15d
// declared property getter: - (id)style;	// 0x319d4b6d
// declared property getter: - (id)tagName;	// 0x31907e91
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x31ad8941
- (id)webkitRegionOverflow;	// 0x31ad5211
@end

