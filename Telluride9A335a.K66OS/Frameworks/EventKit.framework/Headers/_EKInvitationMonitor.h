/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class PCPersistentTimer, NSDate;

@interface _EKInvitationMonitor : NSObject {
@private
	BOOL _running;	// 4 = 0x4
	PCPersistentTimer *_timer;	// 8 = 0x8
	NSDate *_nextFireTime;	// 12 = 0xc
	dispatch_queue_s *_queue;	// 16 = 0x10
	int _lastCount;	// 20 = 0x14
	BOOL _notifyUnalerted;	// 24 = 0x18
	BOOL _initialCheck;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL notifyUnalerted;	// G=0x310293fd; S=0x3102940d; @synthesize=_notifyUnalerted
@property(readonly, assign, nonatomic) unsigned unreadCount;	// G=0x31028c85; 
- (id)initWithEventStore:(id)eventStore;	// 0x3102893d
- (void)_checkForUpdates:(id)updates;	// 0x30fd0861
- (void)_checkforUnalertedEvents:(id)events;	// 0x30fd0b11
- (void)_databaseChanged;	// 0x31029085
- (BOOL)_isDataProtected;	// 0x310293f9
- (void)_protectedDataDidBecomeAvailable;	// 0x30fcfe39
- (void)_protectedDataWillBecomeUnavailable;	// 0x310293f5
- (void)_resetTimer:(id)timer;	// 0x30fd029d
- (void)_timerFired;	// 0x31029115
- (void)adjust;	// 0x31028d51
- (void)dealloc;	// 0x3102894d
// declared property getter: - (BOOL)notifyUnalerted;	// 0x310293fd
// declared property setter: - (void)setNotifyUnalerted:(BOOL)unalerted;	// 0x3102940d
- (void)start;	// 0x310289ad
- (void)stop;	// 0x31028b29
// declared property getter: - (unsigned)unreadCount;	// 0x31028c85
@end

