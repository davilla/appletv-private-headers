/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x30d72395; 
@property(readonly, assign) id<DOMNodeFilter> filter;	// G=0x30d72291; 
@property(readonly, assign) BOOL pointerBeforeReferenceNode;	// G=0x30d724c9; 
@property(readonly, assign) DOMNode *referenceNode;	// G=0x30d723c5; 
@property(readonly, assign) DOMNode *root;	// G=0x30d72161; 
@property(readonly, assign) unsigned whatToShow;	// G=0x30d72265; 
- (void)dealloc;	// 0x30c1abf5
- (void)detach;	// 0x30c1ad39
// declared property getter: - (BOOL)expandEntityReferences;	// 0x30d72395
// declared property getter: - (id)filter;	// 0x30d72291
- (void)finalize;	// 0x30d72045
- (id)nextNode;	// 0x30c19d39
// declared property getter: - (BOOL)pointerBeforeReferenceNode;	// 0x30d724c9
- (id)previousNode;	// 0x30d724f9
// declared property getter: - (id)referenceNode;	// 0x30d723c5
// declared property getter: - (id)root;	// 0x30d72161
// declared property getter: - (unsigned)whatToShow;	// 0x30d72265
@end

