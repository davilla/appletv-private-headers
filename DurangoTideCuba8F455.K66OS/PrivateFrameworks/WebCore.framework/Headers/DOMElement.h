/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class DOMCSSStyleDeclaration, NSString;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x3182bc65; 
@property(readonly, assign) int clientHeight;	// G=0x3182bc4d; 
@property(readonly, assign) int clientLeft;	// G=0x3182bc05; 
@property(readonly, assign) int clientTop;	// G=0x3182bc1d; 
@property(readonly, assign) int clientWidth;	// G=0x3182bc35; 
@property(readonly, retain) DOMElement *firstElementChild;	// G=0x3182e555; 
@property(readonly, copy) NSString *innerText;	// G=0x3182bc7d; 
@property(readonly, retain) DOMElement *lastElementChild;	// G=0x3182e571; 
@property(readonly, retain) DOMElement *nextElementSibling;	// G=0x3182e5a9; 
@property(readonly, assign) int offsetHeight;	// G=0x3182bbed; 
@property(readonly, assign) int offsetLeft;	// G=0x3182bba5; 
@property(readonly, retain) DOMElement *offsetParent;	// G=0x3182e539; 
@property(readonly, assign) int offsetTop;	// G=0x3182bbbd; 
@property(readonly, assign) int offsetWidth;	// G=0x3182bbd5; 
@property(readonly, retain) DOMElement *previousElementSibling;	// G=0x3182e58d; 
@property(readonly, assign) int scrollHeight;	// G=0x317a0829; 
@property(assign) int scrollLeft;	// G=0x3182bb0d; S=0x3182bb29; 
@property(assign) int scrollTop;	// G=0x3182bb49; S=0x3182bb65; 
@property(readonly, assign) int scrollWidth;	// G=0x317a06e1; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x3161d269; 
@property(readonly, copy) NSString *tagName;	// G=0x316e8e69; 
- (GSFontRef)_font;	// 0x3181baed
- (id)_getURLAttribute:(id)attribute;	// 0x31775f51
- (void)blur;	// 0x3182dfe1
// declared property getter: - (unsigned)childElementCount;	// 0x3182bc65
// declared property getter: - (int)clientHeight;	// 0x3182bc4d
// declared property getter: - (int)clientLeft;	// 0x3182bc05
// declared property getter: - (int)clientTop;	// 0x3182bc1d
// declared property getter: - (int)clientWidth;	// 0x3182bc35
- (BOOL)contains:(id)contains;	// 0x3182e01d
// declared property getter: - (id)firstElementChild;	// 0x3182e555
- (void)focus;	// 0x3182bb85
- (id)getAttribute:(id)attribute;	// 0x3182bdb1
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x3182c811
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x3182c651
- (id)getAttributeNode:(id)node;	// 0x3182c0a1
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x3182d829
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x3182d611
- (id)getElementsByClassName:(id)name;	// 0x3182e09d
- (id)getElementsByTagName:(id)name;	// 0x3182c4ad
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x3182d3e9
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x3182d1c1
- (BOOL)hasAttribute:(id)attribute;	// 0x3182db7d
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x3182de3d
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x3182dc99
// declared property getter: - (id)innerText;	// 0x3182bc7d
- (BOOL)isFocused;	// 0x3181bad1
// declared property getter: - (id)lastElementChild;	// 0x3182e571
// declared property getter: - (id)nextElementSibling;	// 0x3182e5a9
// declared property getter: - (int)offsetHeight;	// 0x3182bbed
// declared property getter: - (int)offsetLeft;	// 0x3182bba5
// declared property getter: - (id)offsetParent;	// 0x3182e539
// declared property getter: - (int)offsetTop;	// 0x3182bbbd
// declared property getter: - (int)offsetWidth;	// 0x3182bbd5
// declared property getter: - (id)previousElementSibling;	// 0x3182e58d
- (id)querySelector:(id)selector;	// 0x3182e5c5
- (id)querySelectorAll:(id)all;	// 0x3182e241
- (void)removeAttribute:(id)attribute;	// 0x3177e425
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x3182d005
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x3182ce49
- (id)removeAttributeNode:(id)node;	// 0x3182c371
- (void)scrollByLines:(int)lines;	// 0x3182e065
- (void)scrollByPages:(int)pages;	// 0x3182e081
// declared property getter: - (int)scrollHeight;	// 0x317a0829
- (void)scrollIntoView:(BOOL)view;	// 0x3182dff9
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x3182e041
// declared property getter: - (int)scrollLeft;	// 0x3182bb0d
// declared property getter: - (int)scrollTop;	// 0x3182bb49
// declared property getter: - (int)scrollWidth;	// 0x317a06e1
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x3182bee5
- (void)setAttribute:(id)attribute value:(id)value;	// 0x31619cbd
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x3182cc0d
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x3182c9d1
- (id)setAttributeNode:(id)node;	// 0x3182c235
- (id)setAttributeNodeNS:(id)ns;	// 0x3182da41
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x3182bb29
// declared property setter: - (void)setScrollTop:(int)top;	// 0x3182bb65
- (int)structuralComplexityContribution;	// 0x3185c2fd
// declared property getter: - (id)style;	// 0x3161d269
// declared property getter: - (id)tagName;	// 0x316e8e69
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x3182e401
@end

