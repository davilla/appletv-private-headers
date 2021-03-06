/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x33770509; 
@property(copy) NSString *mediaText;	// G=0x33770add; S=0x33770995; 
- (void)appendMedium:(id)medium;	// 0x337705b5
- (void)dealloc;	// 0x33770535
- (void)deleteMedium:(id)medium;	// 0x337706fd
- (void)finalize;	// 0x33770c29
- (id)item:(unsigned)item;	// 0x33770845
// declared property getter: - (unsigned)length;	// 0x33770509
// declared property getter: - (id)mediaText;	// 0x33770add
// declared property setter: - (void)setMediaText:(id)text;	// 0x33770995
@end

