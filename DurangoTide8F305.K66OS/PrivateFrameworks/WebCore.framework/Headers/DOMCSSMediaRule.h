/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMCSSRule.h"

@class DOMCSSRuleList, DOMMediaList;

__attribute__((visibility("hidden")))
@interface DOMCSSMediaRule : DOMCSSRule {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x316680a1; 
@property(readonly, retain) DOMMediaList *media;	// G=0x31668085; 
// declared property getter: - (id)cssRules;	// 0x316680a1
- (void)deleteRule:(unsigned)rule;	// 0x3166833d
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x316681fd
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x316680bd
// declared property getter: - (id)media;	// 0x31668085
@end

