/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CADisplay;

@interface CADisplayLink : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CADisplay *display;	// G=0x3355c5b1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x3355cab5; 
@property(assign, nonatomic) int frameInterval;	// G=0x3355d4e1; S=0x3355c599; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x3355d49d; S=0x3355c579; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x3355cad1; 
@property(retain, nonatomic) id userInfo;	// G=0x3355c5c5; S=0x3355cf2d; 
+ (id)displayLinkWithDisplay:(id)display target:(id)target selector:(SEL)selector;	// 0x3355c805
+ (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x3355c85d
- (id)_initWithDisplayLink:(DisplayLink *)displayLink;	// 0x3355c655
- (void)addToRunLoop:(id)runLoop forMode:(id)mode;	// 0x3355d08d
- (void)dealloc;	// 0x3355c615
// declared property getter: - (id)display;	// 0x3355c5b1
// declared property getter: - (double)duration;	// 0x3355cab5
// declared property getter: - (int)frameInterval;	// 0x3355d4e1
- (void)invalidate;	// 0x3355ce61
// declared property getter: - (BOOL)isPaused;	// 0x3355d49d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3355cedd
// declared property setter: - (void)setFrameInterval:(int)interval;	// 0x3355c599
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x3355c579
// declared property setter: - (void)setUserInfo:(id)info;	// 0x3355cf2d
// declared property getter: - (double)timestamp;	// 0x3355cad1
// declared property getter: - (id)userInfo;	// 0x3355c5c5
@end

