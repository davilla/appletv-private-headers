/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskDelegate.h"

@class NSURL, NSMutableDictionary, NSDictionary, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSURL *_folderURL;	// 44 = 0x2c
	NSString *_lastKnownCTag;	// 48 = 0x30
	BOOL _validCTag;	// 52 = 0x34
	void *_context;	// 56 = 0x38
	unsigned _multiPutBatchMaxNumResources;	// 60 = 0x3c
	unsigned _multiPutBatchMaxSize;	// 64 = 0x40
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 68 = 0x44
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 72 = 0x48
	NSMutableDictionary *_uuidToHREF;	// 76 = 0x4c
	NSMutableDictionary *_hrefToETag;	// 80 = 0x50
}
@property(readonly, assign) void *context;	// G=0x317c7da9; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x317c7db9; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *hrefToETag;	// G=0x317c7d79; @synthesize=_hrefToETag
@property(assign) unsigned multiPutBatchMaxNumResources;	// G=0x317c7de9; S=0x317c7df9; @synthesize=_multiPutBatchMaxNumResources
@property(assign) unsigned multiPutBatchMaxSize;	// G=0x317c7dc9; S=0x317c7dd9; @synthesize=_multiPutBatchMaxSize
@property(retain) NSString *newCTag;	// G=0x317c89a1; S=0x317c89b9; @synthesize=_lastKnownCTag
@property(readonly, assign) NSDictionary *uuidToHREF;	// G=0x317c7d89; @synthesize=_uuidToHREF
@property(readonly, assign) BOOL validCTag;	// G=0x317c7d99; @synthesize=_validCTag
- (id)initWithFolderURL:(id)folderURL checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x317c7f99
- (void)_sendNextBatch;	// 0x317c83b9
- (void)cancelTasks;	// 0x317c7e51
// declared property getter: - (void *)context;	// 0x317c7da9
- (void)dealloc;	// 0x317c7ef5
- (id)description;	// 0x317c8161
// declared property getter: - (id)folderURL;	// 0x317c7db9
// declared property getter: - (id)hrefToETag;	// 0x317c7d79
// declared property getter: - (unsigned)multiPutBatchMaxNumResources;	// 0x317c7de9
// declared property getter: - (unsigned)multiPutBatchMaxSize;	// 0x317c7dc9
- (Class)multiPutTaskClass;	// 0x317c8375
// declared property getter: - (id)newCTag;	// 0x317c89a1
// declared property setter: - (void)setMultiPutBatchMaxNumResources:(unsigned)resources;	// 0x317c7df9
// declared property setter: - (void)setMultiPutBatchMaxSize:(unsigned)size;	// 0x317c7dd9
// declared property setter: - (void)setNewCTag:(id)tag;	// 0x317c89b9
- (void)startTaskGroup;	// 0x317c7e3d
- (void)syncAway;	// 0x317c7e29
- (void)task:(id)task didFinishWithError:(id)error;	// 0x317c81f1
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x317c7e65
// declared property getter: - (id)uuidToHREF;	// 0x317c7d89
// declared property getter: - (BOOL)validCTag;	// 0x317c7d99
@end
