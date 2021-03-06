/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, SSDownloadMetadata, SSDownloadStatus, NSData;

@interface SSDownload : NSObject {
@private
	NSArray *_assets;	// 4 = 0x4
	id _identifier;	// 8 = 0x8
	BOOL _loadingThumbnailData;	// 12 = 0xc
	SSDownloadMetadata *_metadata;	// 16 = 0x10
	SSDownloadStatus *_status;	// 20 = 0x14
	NSData *_thumbnailImageData;	// 24 = 0x18
}
@property(retain, nonatomic) NSArray *assets;	// G=0x324bd44d; S=0x324be0a1; @synthesize=_assets
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x324bd745; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x324bdc05; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x324bd43d; S=0x324be0c9; @synthesize=_metadata
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x324bd42d; S=0x324be0f5; @synthesize=_status
@property(readonly, retain) NSData *thumbnailImageData;	// G=0x324bd7b5; converted property
- (id)init;	// 0x324bd82d
- (id)initWithAssets:(id)assets metadata:(id)metadata;	// 0x324bd8e5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324bda61
- (void)_artworkFailedNotification:(id)notification;	// 0x324bdde1
- (void)_artworkFinishedNotification:(id)notification;	// 0x324bdd09
- (void)_daemonExited:(id)exited;	// 0x324bd715
- (void)_mainThreadDaemonExited:(id)exited;	// 0x324bdcc1
- (BOOL)_requestThumbnailData;	// 0x324bde31
- (void)_setDownloadIdentifier:(id)identifier;	// 0x324bd6a5
- (BOOL)_shouldObserveArtworkNotification:(id)notification;	// 0x324bd5b9
- (void)_startWatchingDaemon;	// 0x324bdfc5
- (void)_stopWatchingDaemon;	// 0x324bd521
// declared property getter: - (id)assets;	// 0x324bd44d
- (id)copyPropertyListEncoding;	// 0x324bd959
- (void)dealloc;	// 0x324bd845
// declared property getter: - (id)downloadIdentifier;	// 0x324bd745
// declared property getter: - (BOOL)isExternal;	// 0x324bdc05
- (BOOL)loadThumbnailImageData;	// 0x324bd7f5
// declared property getter: - (id)metadata;	// 0x324bd43d
- (void)pause;	// 0x324bdbd9
- (void)resume;	// 0x324bdbad
// declared property setter: - (void)setAssets:(id)assets;	// 0x324be0a1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x324be0c9
// declared property setter: - (void)setStatus:(id)status;	// 0x324be0f5
// declared property getter: - (id)status;	// 0x324bd42d
// converted property getter: - (id)thumbnailImageData;	// 0x324bd7b5
@end

