/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPMediaDownloadObserver : NSObject {
	id _progressHandler;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	BOOL _hasPendingProgressHandlerExecution;	// 12 = 0xc
	BOOL _invalidated;	// 13 = 0xd
	int _retainCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL canCancel;	// G=0x33c6083d; 
@property(readonly, assign, getter=isCurrentlyPlayable) BOOL currentlyPlayable;	// G=0x33c60839; 
@property(readonly, assign) double downloadProgress;	// G=0x33c6082d; 
@property(copy) id progressHandler;	// G=0x33c60849; S=0x33c609f9; 
@property(readonly, assign, getter=isRestoreDownload) BOOL restoreDownload;	// G=0x33c60845; 
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadPersistentID:(long long)anId;	// 0x33c60151
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status itemPersistentID:(long long)anId;	// 0x33c60305
+ (id)newObserverForMediaItem:(id)mediaItem;	// 0x33c6033d
+ (id)sharedITunesStoreDownloadManager;	// 0x33c60671
- (id)init;	// 0x33c600a9
- (BOOL)_isDeallocating;	// 0x33c6007d
- (void)_onQueue_invalidate;	// 0x33c60aed
- (void)_onQueue_setShouldFireProgressHandler;	// 0x33c606dd
- (BOOL)_tryRetain;	// 0x33c60021
// declared property getter: - (BOOL)canCancel;	// 0x33c6083d
- (void)cancelDownload;	// 0x33c60841
- (void)dealloc;	// 0x33c600f9
// declared property getter: - (double)downloadProgress;	// 0x33c6082d
- (void)invalidate;	// 0x33c60b29
// declared property getter: - (BOOL)isCurrentlyPlayable;	// 0x33c60839
// declared property getter: - (BOOL)isRestoreDownload;	// 0x33c60845
// declared property getter: - (id)progressHandler;	// 0x33c60849
- (oneway void)release;	// 0x33c5ff6d
- (id)retain;	// 0x33c5ff35
- (unsigned)retainCount;	// 0x33c6000d
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x33c609f9
@end

