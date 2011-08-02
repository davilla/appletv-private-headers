/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent {
}
@property(readonly, assign) int charCode;	// G=0x3185be91; 
@property(readonly, assign) int detail;	// G=0x3185be61; 
@property(readonly, assign) int keyCode;	// G=0x3185be75; 
@property(readonly, assign) int layerX;	// G=0x3185bead; 
@property(readonly, assign) int layerY;	// G=0x3185bec9; 
@property(readonly, assign) int pageX;	// G=0x3185bee5; 
@property(readonly, assign) int pageY;	// G=0x3185bf01; 
@property(readonly, retain) DOMAbstractView *view;	// G=0x3185bf39; 
@property(readonly, assign) int which;	// G=0x3185bf1d; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x3185c129
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x3185bf55
// declared property getter: - (int)charCode;	// 0x3185be91
// declared property getter: - (int)detail;	// 0x3185be61
// declared property getter: - (int)keyCode;	// 0x3185be75
// declared property getter: - (int)layerX;	// 0x3185bead
// declared property getter: - (int)layerY;	// 0x3185bec9
// declared property getter: - (int)pageX;	// 0x3185bee5
// declared property getter: - (int)pageY;	// 0x3185bf01
// declared property getter: - (id)view;	// 0x3185bf39
// declared property getter: - (int)which;	// 0x3185bf1d
@end

