/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMCSSRule.h"

@class DOMCSSRuleList, NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitCSSKeyframesRule : DOMCSSRule {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x3073e039; 
@property(copy) NSString *name;	// G=0x3073ddb5; S=0x3073df01; 
// declared property getter: - (id)cssRules;	// 0x3073e039
- (void)deleteRule:(id)rule;	// 0x3073e22d
- (id)findRule:(id)rule;	// 0x3073e365
- (void)insertRule:(id)rule;	// 0x3073e0f5
// declared property getter: - (id)name;	// 0x3073ddb5
// declared property setter: - (void)setName:(id)name;	// 0x3073df01
@end
