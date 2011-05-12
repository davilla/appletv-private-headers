/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitAnimationEvent : DOMEvent {
}
@property(readonly, copy) NSString *animationName;	// G=0x316a5b11; 
@property(readonly, assign) double elapsedTime;	// G=0x316a5b3d; 
- (void)initWebKitAnimationEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 animationNameArg:(id)arg4 elapsedTimeArg:(double)arg5;	// 0x316a5b55
// declared property getter: - (id)animationName;	// 0x316a5b11
// declared property getter: - (double)elapsedTime;	// 0x316a5b3d
@end

