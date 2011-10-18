/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altGraphKey;	// G=0x35bf125d; 
@property(readonly, assign) BOOL altKey;	// G=0x35bf11f5; 
@property(readonly, assign) int charCode;	// G=0x35bf134d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x35bf118d; 
@property(readonly, assign) int keyCode;	// G=0x35bf128d; 
@property(readonly, copy) NSString *keyIdentifier;	// G=0x35bf140d; 
@property(readonly, assign) unsigned keyLocation;	// G=0x35bf1161; 
@property(readonly, assign) BOOL metaKey;	// G=0x35bf1229; 
@property(readonly, assign) BOOL shiftKey;	// G=0x35bf11c1; 
- (void)initKeyboardEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view keyIdentifier:(id)identifier keyLocation:(unsigned)location ctrlKey:(BOOL)key altKey:(BOOL)key8 shiftKey:(BOOL)key9 metaKey:(BOOL)key10;	// 0x35bf186d
- (void)initKeyboardEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view keyIdentifier:(id)identifier keyLocation:(unsigned)location ctrlKey:(BOOL)key altKey:(BOOL)key8 shiftKey:(BOOL)key9 metaKey:(BOOL)key10 altGraphKey:(BOOL)key11;	// 0x35bf1611
// declared property getter: - (BOOL)altGraphKey;	// 0x35bf125d
// declared property getter: - (BOOL)altKey;	// 0x35bf11f5
// declared property getter: - (int)charCode;	// 0x35bf134d
// declared property getter: - (BOOL)ctrlKey;	// 0x35bf118d
- (BOOL)getModifierState:(id)state;	// 0x35bf14d5
// declared property getter: - (int)keyCode;	// 0x35bf128d
// declared property getter: - (id)keyIdentifier;	// 0x35bf140d
// declared property getter: - (unsigned)keyLocation;	// 0x35bf1161
// declared property getter: - (BOOL)metaKey;	// 0x35bf1229
// declared property getter: - (BOOL)shiftKey;	// 0x35bf11c1
@end

