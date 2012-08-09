/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x34dd964d; S=0x34dd967d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d2a01d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34dd9601
- (id)init;	// 0x34dd97b9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x34d2a079
- (unsigned long)_cfTypeID;	// 0x34dd97b5
- (BOOL)allowsWeakReference;	// 0x34dd9599
- (void)finalize;	// 0x34dd95c1
- (void)fire;	// 0x34dd96bd
// converted property getter: - (id)fireDate;	// 0x34dd964d
- (unsigned)hash;	// 0x34dd9581
- (void)invalidate;	// 0x34dd9649
- (BOOL)isEqual:(id)equal;	// 0x34dd9569
- (BOOL)isValid;	// 0x34dd9635
- (oneway void)release;	// 0x34dd9595
- (id)retain;	// 0x34dd9585
- (unsigned)retainCount;	// 0x34dd95bd
- (BOOL)retainWeakReference;	// 0x34dd95ad
// converted property setter: - (void)setFireDate:(id)date;	// 0x34dd967d
- (double)timeInterval;	// 0x34dd9645
- (id)userInfo;	// 0x34dd96a5
@end
