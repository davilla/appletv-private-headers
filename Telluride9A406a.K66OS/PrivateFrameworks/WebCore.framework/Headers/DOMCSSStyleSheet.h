/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRule, DOMCSSRuleList;

__attribute__((visibility("hidden")))
@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x36a23685; 
@property(readonly, retain) DOMCSSRule *ownerRule;	// G=0x36a235c1; 
@property(readonly, retain) DOMCSSRuleList *rules;	// G=0x36a237c9; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x36a23d41
// declared property getter: - (id)cssRules;	// 0x36a23685
- (void)deleteRule:(unsigned)rule;	// 0x36a23ba9
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x36a23a59
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x36a23909
// declared property getter: - (id)ownerRule;	// 0x36a235c1
- (void)removeRule:(unsigned)rule;	// 0x36a23c75
// declared property getter: - (id)rules;	// 0x36a237c9
@end

