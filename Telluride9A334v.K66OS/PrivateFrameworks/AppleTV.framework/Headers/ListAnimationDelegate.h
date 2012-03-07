/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : NSObject {
@private
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x3320d06d
- (void)animationDidStart:(id)animation;	// 0x3320d15d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3320d16d
- (void)clearScroll;	// 0x3320d0b1
- (void)decrementBalance;	// 0x3320d105
- (void)incrementBalance;	// 0x3320d0c5
- (BOOL)scrolling;	// 0x3320d145
@end
