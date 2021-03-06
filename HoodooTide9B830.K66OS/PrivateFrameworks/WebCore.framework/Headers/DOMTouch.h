/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMTouch : DOMObject {
}
@property(readonly, assign) int clientX;	// G=0x3593bd51; 
@property(readonly, assign) int clientY;	// G=0x3593bd7d; 
@property(readonly, assign) unsigned identifier;	// G=0x3593bd25; 
@property(readonly, assign) int pageX;	// G=0x3593bda9; 
@property(readonly, assign) int pageY;	// G=0x3593bdd5; 
@property(readonly, assign) int screenX;	// G=0x3593be01; 
@property(readonly, assign) int screenY;	// G=0x3593be2d; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x3593bed5; 
// declared property getter: - (int)clientX;	// 0x3593bd51
// declared property getter: - (int)clientY;	// 0x3593bd7d
- (void)dealloc;	// 0x3593be59
- (void)finalize;	// 0x3593bf91
// declared property getter: - (unsigned)identifier;	// 0x3593bd25
// declared property getter: - (int)pageX;	// 0x3593bda9
// declared property getter: - (int)pageY;	// 0x3593bdd5
// declared property getter: - (int)screenX;	// 0x3593be01
// declared property getter: - (int)screenY;	// 0x3593be2d
// declared property getter: - (id)target;	// 0x3593bed5
@end

