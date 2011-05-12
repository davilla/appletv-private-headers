/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicyManagerDelegate.h"
#import <DATaskManager.h> // Unknown library

@class ASTask, ASPolicyManager, ASGetOptionsTask, NSMutableDictionary, NSError;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
@private
	ASPolicyManager *_policyManager;	// 52 = 0x34
	NSError *_versionError;	// 56 = 0x38
	NSMutableDictionary *_taskIDToTask;	// 60 = 0x3c
	ASTask *_modalGetOptionsTask;	// 64 = 0x40
	ASGetOptionsTask *_getOptionsTask;	// 68 = 0x44
	ASTask *_modalPolicyKeyUpdateTask;	// 72 = 0x48
}
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x3033d0b9; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x3033e20d
- (void)_finishAllTasksWithError:(id)error;	// 0x3033e3f1
- (void)_populateVersionDescriptions;	// 0x3033e38d
- (id)_version;	// 0x3033d1fd
- (void)cancelAllTasks;	// 0x3033d0c9
- (void)cancelTask:(id)task;	// 0x3033d439
- (void)cancelTaskWithID:(int)anId;	// 0x3033d4c5
- (void)dealloc;	// 0x3033e0e1
- (id)easProtocolVersion;	// 0x3033d1b5
- (void)finishTask:(id)task withError:(id)error;	// 0x3033d155
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x3033e4b9
- (id)policyKey;	// 0x3033d16d
// converted property getter: - (id)policyManager;	// 0x3033d0b9
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x3033dbf1
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x3033dc55
- (id)protocol;	// 0x3033d191
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x3033de21
- (void)setEASProtocolVersion:(id)version;	// 0x3033d1d9
- (void)shutdown;	// 0x3033d6d5
- (id)stateString;	// 0x3033daa9
- (void)taskDidFinish:(id)task;	// 0x3033d589
- (void)taskEndModal:(id)modal;	// 0x3033d3b1
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x3033d925
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x3033d841
- (void)taskRequestModal:(id)modal;	// 0x3033d3ed
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x3033dccd
@end

