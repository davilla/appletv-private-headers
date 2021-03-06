/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import "CoreDAVTaskManager.h"
#import <DATaskManager.h> // Unknown library

@class NSRunLoop;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {
	int _numActiveTasks;	// 56 = 0x38
}
@property(retain) NSRunLoop *workRunLoop;	// G=0x338ff4c5; S=0x338ff4e1; 
- (void)_updateSpinner:(BOOL)spinner;	// 0x338ff16d
- (void)coreDAVTaskDidFinish:(id)coreDAVTask;	// 0x338ff4b5
- (void)coreDAVTaskEndModal:(id)modal;	// 0x338ff4a5
- (void)coreDAVTaskRequestModal:(id)modal;	// 0x338ff495
// declared property setter: - (void)setWorkRunLoop:(id)loop;	// 0x338ff4e1
- (void)submitIndependentCoreDAVTask:(id)task;	// 0x338ff485
- (void)submitQueuedCoreDAVTask:(id)task;	// 0x338ff475
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x338ff2c5
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x338ff39d
// declared property getter: - (id)workRunLoop;	// 0x338ff4c5
@end

