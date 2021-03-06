/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject {
@private
	BOOL _didBeginBlockAnimation;	// 4 = 0x4
	BOOL _allowUserInteraction;	// 5 = 0x5
	BOOL _isZeroDuration;	// 6 = 0x6
	id _start;	// 8 = 0x8
	id _completion;	// 12 = 0xc
}
+ (void)setAnimationBlockDelegateWithDuration:(double)duration options:(unsigned)options start:(id)start completion:(id)completion;	// 0x3009a39d
- (void)_didEndBlockAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x3009a481
- (void)_sendDeferredCompletion:(id)completion;	// 0x3009c06d
- (void)_willBeginBlockAnimation:(id)animation context:(void *)context;	// 0x300d7499
- (void)dealloc;	// 0x3009c0a9
@end

