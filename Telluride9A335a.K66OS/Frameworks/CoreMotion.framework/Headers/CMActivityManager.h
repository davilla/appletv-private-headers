/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMActivityManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;	// G=0x36e9c97d; 
@property(copy) id activityHandler;	// G=0x36e9c95d; S=0x36e9c239; 
- (id)init;	// 0x36e9c189
// declared property getter: - (id)activityHandler;	// 0x36e9c95d
- (void)dealloc;	// 0x36e9c1ed
// declared property getter: - (BOOL)isActivityAvailable;	// 0x36e9c97d
// declared property setter: - (void)setActivityHandler:(id)handler;	// 0x36e9c239
- (void)startWatchdogCheckins;	// 0x36e9bee9
- (void)stopWatchdogCheckins;	// 0x36e9c151
@end

