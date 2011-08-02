/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class NSString, DOMNode;

@interface DOMMutationEvent : DOMEvent {
}
@property(readonly, assign) unsigned short attrChange;	// G=0x31853931; 
@property(readonly, copy) NSString *attrName;	// G=0x31853bf9; 
@property(readonly, copy) NSString *newValue;	// G=0x31853aad; 
@property(readonly, copy) NSString *prevValue;	// G=0x31853961; 
@property(readonly, retain) DOMNode *relatedNode;	// G=0x31853945; 
- (void)initMutationEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 :(unsigned short)arg8;	// 0x3185407d
- (void)initMutationEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable relatedNode:(id)node prevValue:(id)value newValue:(id)value6 attrName:(id)name attrChange:(unsigned short)change;	// 0x31853d45
// declared property getter: - (unsigned short)attrChange;	// 0x31853931
// declared property getter: - (id)attrName;	// 0x31853bf9
// declared property getter: - (id)newValue;	// 0x31853aad
// declared property getter: - (id)prevValue;	// 0x31853961
// declared property getter: - (id)relatedNode;	// 0x31853945
@end

