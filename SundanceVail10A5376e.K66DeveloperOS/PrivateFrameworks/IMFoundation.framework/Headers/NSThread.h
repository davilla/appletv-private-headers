/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSThread.h> // Unknown library


@interface NSThread (_IMThreadBlockSupport)
+ (void)_im_runBlock:(id)block;	// 0x36ea9101
- (void)__im_performBlock:(id)block;	// 0x36ea9191
- (void)__im_performBlock:(id)block afterDelay:(double)delay;	// 0x36ea9355
- (void)__im_performBlock:(id)block afterDelay:(double)delay modes:(id)modes;	// 0x36ea93ad
- (void)__im_performBlock:(id)block modes:(id)modes;	// 0x36ea91f1
- (void)__im_performBlock:(id)block waitUntilDone:(BOOL)done;	// 0x36ea9279
- (void)__im_performBlock:(id)block waitUntilDone:(BOOL)done modes:(id)modes;	// 0x36ea92e5
@end

