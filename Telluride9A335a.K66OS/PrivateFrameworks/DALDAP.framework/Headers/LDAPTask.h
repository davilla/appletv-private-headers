/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <DADisableableObject.h> // Unknown library
#import "DATask.h"

@class LDAPTaskManager;

@interface LDAPTask : DADisableableObject <DATask> {
	LDAPTaskManager *_taskManager;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x33566fd5; S=0x33566fc5; 
@property(assign) LDAPTaskManager *taskManager;	// G=0x335671a5; S=0x335671b5; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x335670a1
// declared property getter: - (id)delegate;	// 0x33566fd5
- (void)finishWithError:(id)error;	// 0x33567065
- (int)numDownloadedElements;	// 0x33566fe5
- (void)performTask;	// 0x33566ec5
- (void)performTaskInBackground;	// 0x33566fc1
- (void)reportStatusWithError:(id)error;	// 0x33566fe9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33566fc5
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x335671b5
- (BOOL)shouldHoldPowerAssertion;	// 0x335670fd
// declared property getter: - (id)taskManager;	// 0x335671a5
- (int)taskStatusForError:(id)error;	// 0x33567101
@end

