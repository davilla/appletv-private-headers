/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSFilePresenter.h"

@class NSString, NSTimer, NSMutableArray, NSDate, NSDocumentDifferenceSize, NSUndoManager, NSURL, NSOperationQueue, NSLock;

@interface UIDocument : NSObject <NSFilePresenter> {
@private
	NSURL *_fileURL;	// 4 = 0x4
	NSString *_fileType;	// 8 = 0x8
	NSString *_localizedName;	// 12 = 0xc
	NSUndoManager *_undoManager;	// 16 = 0x10
	NSDate *_fileModificationDate;	// 20 = 0x14
	dispatch_queue_s *_fileAccessQueue;	// 24 = 0x18
	dispatch_queue_s *_openingQueue;	// 28 = 0x1c
	dispatch_semaphore_s *_fileAccessSemaphore;	// 32 = 0x20
	NSOperationQueue *_filePresenterQueue;	// 36 = 0x24
	id _differenceDueToRecentChanges;	// 40 = 0x28
	id _differenceSincePreservingPreviousVersion;	// 44 = 0x2c
	id _differenceSinceSaving;	// 48 = 0x30
	NSTimer *_autosavingTimer;	// 52 = 0x34
	double _lastSaveTime;	// 56 = 0x38
	unsigned _fileContentsPreservationReason;	// 64 = 0x40
	double _lastPreservationTime;	// 68 = 0x44
	id _versionWithoutRecentChanges;	// 76 = 0x4c
	NSMutableArray *_versions;	// 80 = 0x50
	void *_conflictObserver;	// 84 = 0x54
	NSLock *_documentPropertyLock;	// 88 = 0x58
	id _alertPresenter;	// 92 = 0x5c
	docFlags _docFlags;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges;	// G=0x33cfcae5; @synthesize=_differenceDueToRecentChanges
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;	// G=0x33cfcaf5; @synthesize=_differenceSincePreservingPreviousVersion
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving;	// G=0x33cfcb05; @synthesize=_differenceSinceSaving
@property(readonly, assign) int documentState;	// G=0x33cf7a85; 
@property(assign, getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;	// G=0x33cf74e9; S=0x33cf73ad; 
@property(copy) NSDate *fileModificationDate;	// G=0x33cf7341; S=0x33cf72bd; 
@property(readonly, assign) NSString *fileType;	// G=0x33cf71c1; 
@property(readonly, assign) NSURL *fileURL;	// G=0x33cf70d1; 
@property(readonly, assign) NSString *localizedName;	// G=0x33cfb9ad; 
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x33cfba21; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x33cfba11; 
@property(retain) NSUndoManager *undoManager;	// G=0x33cfb541; S=0x33cfb421; 
+ (void)_autosavingTimerDidFireSoContinue:(id)_autosavingTimer;	// 0x33cf9c25
+ (id)_customizationOfError:(id)error withDescription:(id)description recoverySuggestion:(id)suggestion recoveryAttempter:(id)attempter;	// 0x33cf7c41
+ (id)_fileModificationDateForURL:(id)url;	// 0x33cfcb25
+ (void)_finishWritingToURL:(id)url withTemporaryDirectoryURL:(id)temporaryDirectoryURL newContentsURL:(id)url3 afterSuccess:(BOOL)success;	// 0x33cf8495
+ (id)_typeForContentsOfURL:(id)url error:(id *)error;	// 0x33cf5c09
+ (void)initialize;	// 0x33cf5a25
- (id)init;	// 0x33cf5c75
- (id)initWithFileURL:(id)fileURL;	// 0x33cf5d05
- (void)_applicationDidBecomeActive:(id)_application;	// 0x33cfc40d
- (void)_applicationWillResignActive:(id)_application;	// 0x33cfc2a1
- (void)_autosaveWithCompletionHandler:(id)completionHandler;	// 0x33cfa591
- (void)_autosavingCompletedSuccessfully:(BOOL)successfully;	// 0x33cf9c45
- (double)_autosavingDelay;	// 0x33cf9c19
- (void)_changeWasDone:(id)done;	// 0x33cfb135
- (void)_changeWasRedone:(id)redone;	// 0x33cfb299
- (void)_changeWasUndone:(id)undone;	// 0x33cfb211
- (void)_coordinateWritingItemAtURL:(id)url error:(id *)error byAccessor:(id)accessor;	// 0x33cf8a31
- (dispatch_queue_s *)_fileOpeningQueue;	// 0x33cfcb15
- (void)_finishSavingToURL:(id)url forSaveOperation:(int)saveOperation changeCount:(id)count;	// 0x33cf9b19
- (BOOL)_hasSavingError;	// 0x33cf77ed
- (BOOL)_hasUnsavedChanges;	// 0x33cfa8ed
// declared property getter: - (BOOL)_isEditingDisabled;	// 0x33cf74e9
- (BOOL)_isInConflict;	// 0x33cf78e1
- (BOOL)_isInOpen;	// 0x33cf76f9
- (BOOL)_isOpen;	// 0x33cf7649
- (void)_lockFileAccessQueueAndPerformBlock:(id)block;	// 0x33cf7b5d
- (void)_performBlock:(id)block synchronouslyOnQueue:(dispatch_queue_s *)queue;	// 0x33cfcbcd
- (void)_performBlockSynchronouslyOnMainThread:(id)thread;	// 0x33cfcbf1
- (id)_presentableFileNameForSaveOperation:(int)saveOperation url:(id)url;	// 0x33cf8591
- (void)_registerAsFilePresenterIfNecessary;	// 0x33cf63c5
- (void)_releaseUndoManager;	// 0x33cfb321
- (void)_rescheduleAutosaving;	// 0x33cf9c99
- (void)_saveUnsavedChangesWithCompletionHandler:(id)completionHandler;	// 0x33cfa171
- (void)_scheduleAutosaving;	// 0x33cfa139
- (void)_scheduleAutosavingAfterDelay:(double)delay reset:(BOOL)reset;	// 0x33cf9e2d
- (void)_sendStateChangedNotification;	// 0x33cf792d
// declared property setter: - (void)_setEditingDisabled:(BOOL)disabled;	// 0x33cf73ad
- (void)_setFileURL:(id)url;	// 0x33cf704d
- (void)_setHasSavingError:(BOOL)error;	// 0x33cf7745
- (void)_setInConflict:(BOOL)conflict;	// 0x33cf7839
- (void)_setInOpen:(BOOL)open;	// 0x33cf7695
- (void)_setOpen:(BOOL)open;	// 0x33cf7535
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;	// 0x33cfbac5
- (void)_unlockFileAccessQueue;	// 0x33cf7c2d
- (void)_unregisterAsFilePresenterIfNecessary;	// 0x33cf6571
- (void)_updateLocalizedName;	// 0x33cfb90d
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x33cfc5d1
- (void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id)handler;	// 0x33cfc88d
- (void)autosaveWithCompletionHandler:(id)completionHandler;	// 0x33cfa6ed
- (id)changeCountTokenForSaveOperation:(int)saveOperation;	// 0x33cfacf9
- (void)closeWithCompletionHandler:(id)completionHandler;	// 0x33cfa70d
- (id)contentsForType:(id)type error:(id *)error;	// 0x33cf8f35
- (void)dealloc;	// 0x33cf600d
- (id)description;	// 0x33cf623d
// declared property getter: - (id)differenceDueToRecentChanges;	// 0x33cfcae5
// declared property getter: - (id)differenceSincePreservingPreviousVersion;	// 0x33cfcaf5
// declared property getter: - (id)differenceSinceSaving;	// 0x33cfcb05
- (void)disableEditing;	// 0x33cfcae1
// declared property getter: - (int)documentState;	// 0x33cf7a85
- (void)enableEditing;	// 0x33cfcadd
- (id)fileAttributesToWriteToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x33cf89c5
// declared property getter: - (id)fileModificationDate;	// 0x33cf7341
- (id)fileNameExtensionForType:(id)type saveOperation:(int)operation;	// 0x33cfb9e5
// declared property getter: - (id)fileType;	// 0x33cf71c1
// declared property getter: - (id)fileURL;	// 0x33cf70d1
- (void)finishedHandlingError:(id)error recovered:(BOOL)recovered;	// 0x33cfb835
- (void)handleError:(id)error userInteractionPermitted:(BOOL)permitted;	// 0x33cfb5cd
- (BOOL)hasUnsavedChanges;	// 0x33cfa945
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;	// 0x33cf8449
// declared property getter: - (id)localizedName;	// 0x33cfb9ad
- (void)openWithCompletionHandler:(id)completionHandler;	// 0x33cf6721
- (void)performAsynchronousFileAccessUsingBlock:(id)block;	// 0x33cf7afd
- (void)presentedItemDidChange;	// 0x33cfc6b5
- (void)presentedItemDidGainVersion:(id)presentedItem;	// 0x33cfc715
- (void)presentedItemDidLoseVersion:(id)presentedItem;	// 0x33cfc7d1
- (void)presentedItemDidMoveToURL:(id)presentedItem;	// 0x33cfc63d
// declared property getter: - (id)presentedItemOperationQueue;	// 0x33cfba21
// declared property getter: - (id)presentedItemURL;	// 0x33cfba11
- (void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;	// 0x33cfca1d
- (void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;	// 0x33cfca7d
- (void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url2;	// 0x33cfc9b9
- (void)presentedSubitemDidAppearAtURL:(id)presentedSubitem;	// 0x33cfc8f9
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x33cfc959
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x33cf80dd
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x33cfba59
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x33cfbb21
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x33cf7e31
- (void)savePresentedItemChangesWithCompletionHandler:(id)completionHandler;	// 0x33cfc079
- (void)saveToURL:(id)url forSaveOperation:(int)saveOperation completionHandler:(id)handler;	// 0x33cf8f95
- (id)savingFileType;	// 0x33cfa6fd
// declared property setter: - (void)setFileModificationDate:(id)date;	// 0x33cf72bd
- (void)setFileType:(id)type;	// 0x33cf713d
// declared property setter: - (void)setUndoManager:(id)manager;	// 0x33cfb421
// declared property getter: - (id)undoManager;	// 0x33cfb541
- (void)updateChangeCount:(int)count;	// 0x33cfa95d
- (void)updateChangeCountWithToken:(id)token forSaveOperation:(int)saveOperation;	// 0x33cfaf05
- (void)userInteractionNoLongerPermittedForError:(id)error;	// 0x33cfb8ed
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x33cf8615
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x33cf87d1
@end

