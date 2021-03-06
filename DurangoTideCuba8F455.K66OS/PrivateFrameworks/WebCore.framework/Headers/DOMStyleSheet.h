/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode, DOMMediaList, NSString;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(assign) BOOL disabled;	// G=0x3185a745; S=0x3185a759; 
@property(readonly, copy) NSString *href;	// G=0x3185a841; 
@property(readonly, retain) DOMMediaList *media;	// G=0x3185a7fd; 
@property(readonly, retain) DOMNode *ownerNode;	// G=0x3185a885; 
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;	// G=0x3185a869; 
@property(readonly, copy) NSString *title;	// G=0x3185a819; 
@property(readonly, copy) NSString *type;	// G=0x3185a8a1; 
- (void)dealloc;	// 0x3185a781
// declared property getter: - (BOOL)disabled;	// 0x3185a745
- (void)finalize;	// 0x3185a9d5
// declared property getter: - (id)href;	// 0x3185a841
// declared property getter: - (id)media;	// 0x3185a7fd
// declared property getter: - (id)ownerNode;	// 0x3185a885
// declared property getter: - (id)parentStyleSheet;	// 0x3185a869
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3185a759
// declared property getter: - (id)title;	// 0x3185a819
// declared property getter: - (id)type;	// 0x3185a8a1
@end

