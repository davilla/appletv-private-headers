/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (MRMarimbaViewPlayback)
- (id)_currentEffectContainer;	// 0x320b17e1
- (id)_effectContainerForTime:(double)time;	// 0x320b1a39
- (id)_firstEffectContainer;	// 0x320b1989
- (int)_mainLayerIndex;	// 0x320b1b81
- (id)currentSlide;	// 0x320b1ef1
- (id)currentSlides;	// 0x320b1d0d
- (id)displayedEffectContainers;	// 0x320b0e89
- (void)gotoNextSlide;	// 0x320b2099
- (void)gotoPreviousSlide;	// 0x320b2521
- (void)gotoSlide:(id)slide;	// 0x320b28d1
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x320b0ef1
- (void)moveToNextEffectContainer;	// 0x320b1119
- (void)moveToPreviousEffectContainer;	// 0x320b11f9
- (void)moveToSubtitleForSlide:(id)slide;	// 0x320b152d
- (void)moveToTitleSlide;	// 0x320b12c5
- (double)relativeTime;	// 0x320b0d31
- (double)relativeTimeForBackgroundAudio;	// 0x320b0d81
- (double)relativeTimeForLayer:(id)layer;	// 0x320b0de1
- (void)watcherThread:(id)thread;	// 0x320b1c29
@end

@interface NSObject (WithResultSelector)
- (double)performWithDoubleResultSelector:(SEL)doubleResultSelector onThread:(id)thread withObject:(id)object;	// 0x32151281
@end

