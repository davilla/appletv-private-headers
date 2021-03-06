/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableRowElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x316967ed; S=0x31696921; 
@property(copy) NSString *bgColor;	// G=0x31696a39; S=0x31696b6d; 
@property(readonly, retain) DOMHTMLCollection *cells;	// G=0x316966c5; 
@property(copy) NSString *ch;	// G=0x31696c85; S=0x31696db9; 
@property(copy) NSString *chOff;	// G=0x31696ed1; S=0x31697005; 
@property(readonly, assign) int rowIndex;	// G=0x31696695; 
@property(readonly, assign) int sectionRowIndex;	// G=0x316966ad; 
@property(copy) NSString *vAlign;	// G=0x3169711d; S=0x31697251; 
// declared property getter: - (id)align;	// 0x316967ed
// declared property getter: - (id)bgColor;	// 0x31696a39
// declared property getter: - (id)cells;	// 0x316966c5
// declared property getter: - (id)ch;	// 0x31696c85
// declared property getter: - (id)chOff;	// 0x31696ed1
- (void)deleteCell:(int)cell;	// 0x31697499
- (id)insertCell:(int)cell;	// 0x31697369
// declared property getter: - (int)rowIndex;	// 0x31696695
// declared property getter: - (int)sectionRowIndex;	// 0x316966ad
// declared property setter: - (void)setAlign:(id)align;	// 0x31696921
// declared property setter: - (void)setBgColor:(id)color;	// 0x31696b6d
// declared property setter: - (void)setCh:(id)ch;	// 0x31696db9
// declared property setter: - (void)setChOff:(id)off;	// 0x31697005
// declared property setter: - (void)setVAlign:(id)align;	// 0x31697251
// declared property getter: - (id)vAlign;	// 0x3169711d
@end

