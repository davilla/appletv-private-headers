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
@property(readonly, assign) int charCode;	// G=0x35417cd1; 
@property(readonly, assign) int detail;	// G=0x35417ba1; 
@property(readonly, assign) int keyCode;	// G=0x35417bcd; 
@property(readonly, assign) int layerX;	// G=0x35417dd5; 
@property(readonly, assign) int layerY;	// G=0x35417ed9; 
@property(readonly, assign) int pageX;	// G=0x35417fdd; 
@property(readonly, assign) int pageY;	// G=0x354180e1; 
@property(readonly, assign) DOMAbstractView *view;	// G=0x35417a9d; 
@property(readonly, assign) int which;	// G=0x354181e5; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x35418515
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x354182e9
// declared property getter: - (int)charCode;	// 0x35417cd1
// declared property getter: - (int)detail;	// 0x35417ba1
// declared property getter: - (int)keyCode;	// 0x35417bcd
// declared property getter: - (int)layerX;	// 0x35417dd5
// declared property getter: - (int)layerY;	// 0x35417ed9
// declared property getter: - (int)pageX;	// 0x35417fdd
// declared property getter: - (int)pageY;	// 0x354180e1
// declared property getter: - (id)view;	// 0x35417a9d
// declared property getter: - (int)which;	// 0x354181e5
@end

