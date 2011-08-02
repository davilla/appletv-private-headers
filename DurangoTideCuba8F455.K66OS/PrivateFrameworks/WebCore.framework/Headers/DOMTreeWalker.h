/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMTreeWalker : DOMObject {
}
@property(retain) DOMNode *currentNode;	// G=0x3185bd2d; S=0x3185bbe9; 
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x3185ba29; 
@property(readonly, retain) id<DOMNodeFilter> filter;	// G=0x3185bd49; 
@property(readonly, retain) DOMNode *root;	// G=0x3185bd65; 
@property(readonly, assign) unsigned whatToShow;	// G=0x3185ba15; 
// declared property getter: - (id)currentNode;	// 0x3185bd2d
- (void)dealloc;	// 0x3185ba3d
// declared property getter: - (BOOL)expandEntityReferences;	// 0x3185ba29
// declared property getter: - (id)filter;	// 0x3185bd49
- (void)finalize;	// 0x3185bd81
- (id)firstChild;	// 0x3185bb91
- (id)lastChild;	// 0x3185bb65
- (id)nextNode;	// 0x3185bab5
- (id)nextSibling;	// 0x3185bb0d
- (id)parentNode;	// 0x3185bbbd
- (id)previousNode;	// 0x3185bae1
- (id)previousSibling;	// 0x3185bb39
// declared property getter: - (id)root;	// 0x3185bd65
// declared property setter: - (void)setCurrentNode:(id)node;	// 0x3185bbe9
// declared property getter: - (unsigned)whatToShow;	// 0x3185ba15
@end

