/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {
	NSString *_volumePath;	// 4 = 0x4
	BOOL _ejectable;	// 8 = 0x8
	BOOL _beingEjected;	// 9 = 0x9
	BOOL _locked;	// 10 = 0xa
	BOOL _allowsSyncingClock;	// 11 = 0xb
	unsigned _contentCatalogPercentCompleted;	// 12 = 0xc
	BOOL _batteryLevelAvailable;	// 16 = 0x10
	unsigned _batteryLevel;	// 20 = 0x14
	NSMutableArray *_contents;	// 24 = 0x18
	NSMutableArray *_mediaFiles;	// 28 = 0x1c
	NSMutableArray *_toBeNotifiedAddedItems;	// 32 = 0x20
	int _contentsLock;	// 36 = 0x24
	int _mediaFilesLock;	// 40 = 0x28
	double _timeOffset;	// 44 = 0x2c
	unsigned _estimatedNumberOfDownloadableItems;	// 52 = 0x34
	unsigned _numberOfDownloadableItems;	// 56 = 0x38
	BOOL _contentReceived;	// 60 = 0x3c
	double _downloadCancelTimestamp;	// 64 = 0x40
	dispatch_queue_s *_thumbnailFetchQ;	// 72 = 0x48
	dispatch_queue_s *_metadataFetchQ;	// 76 = 0x4c
	dispatch_queue_s *_downloadQ;	// 80 = 0x50
	dispatch_queue_s *_generalQ;	// 84 = 0x54
	dispatch_semaphore_s *_deviceQSemaphore;	// 88 = 0x58
	BOOL _accessRestrictedAppleDevice;	// 92 = 0x5c
}
@property(assign) BOOL accessRestrictedAppleDevice;	// G=0x30d71d6d; S=0x30d71d85; @synthesize=_accessRestrictedAppleDevice
@property(assign) BOOL allowsSyncingClock;	// G=0x30d71981; S=0x30d71999; @synthesize=_allowsSyncingClock
@property(assign) unsigned batteryLevel;	// G=0x30d71a0d; S=0x30d71a21; @synthesize=_batteryLevel
@property(assign) BOOL batteryLevelAvailable;	// G=0x30d719dd; S=0x30d719f5; @synthesize=_batteryLevelAvailable
@property(assign) BOOL beingEjected;	// G=0x30d71921; S=0x30d71939; @synthesize=_beingEjected
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x30d719b1; S=0x30d719c5; @synthesize=_contentCatalogPercentCompleted
@property(assign) BOOL contentReceived;	// G=0x30d71bf9; S=0x30d71c11; @synthesize=_contentReceived
@property(retain) NSMutableArray *contents;	// G=0x30d71a39; S=0x30d71a4d; @synthesize=_contents
@property(assign) int contentsLock;	// G=0x30d71b0d; S=0x30d71b21; @synthesize=_contentsLock
@property(assign) dispatch_semaphore_s *deviceQSemaphore;	// G=0x30d71d41; S=0x30d71d55; @synthesize=_deviceQSemaphore
@property(assign) double downloadCancelTimestamp;	// G=0x30d71c29; S=0x30d71c5d; @synthesize=_downloadCancelTimestamp
@property(assign) dispatch_queue_s *downloadQ;	// G=0x30d71ce9; S=0x30d71cfd; @synthesize=_downloadQ
@property(assign) BOOL ejectable;	// G=0x30d718f1; S=0x30d71909; @synthesize=_ejectable
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x30d71ba1; S=0x30d71bb5; @synthesize=_estimatedNumberOfDownloadableItems
@property(assign) dispatch_queue_s *generalQ;	// G=0x30d71d15; S=0x30d71d29; @synthesize=_generalQ
@property(assign) BOOL locked;	// G=0x30d71951; S=0x30d71969; @synthesize=_locked
@property(retain) NSMutableArray *mediaFiles;	// G=0x30d71a71; S=0x30d71a85; @synthesize=_mediaFiles
@property(assign) int mediaFilesLock;	// G=0x30d71ae1; S=0x30d71af5; @synthesize=_mediaFilesLock
@property(assign) dispatch_queue_s *metadataFetchQ;	// G=0x30d71cbd; S=0x30d71cd1; @synthesize=_metadataFetchQ
@property(assign) unsigned numberOfDownloadableItems;	// G=0x30d71bcd; S=0x30d71be1; @synthesize=_numberOfDownloadableItems
@property(assign) dispatch_queue_s *thumbnailFetchQ;	// G=0x30d71c91; S=0x30d71ca5; @synthesize=_thumbnailFetchQ
@property(assign) double timeOffset;	// G=0x30d71b39; S=0x30d71b6d; @synthesize=_timeOffset
@property(retain) NSMutableArray *toBeNotifiedAddedItems;	// G=0x30d71aa9; S=0x30d71abd; @synthesize=_toBeNotifiedAddedItems
@property(retain) NSString *volumePath;	// G=0x30d718b9; S=0x30d718cd; @synthesize=_volumePath
// declared property getter: - (BOOL)accessRestrictedAppleDevice;	// 0x30d71d6d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x30d71981
// declared property getter: - (unsigned)batteryLevel;	// 0x30d71a0d
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x30d719dd
// declared property getter: - (BOOL)beingEjected;	// 0x30d71921
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x30d719b1
// declared property getter: - (BOOL)contentReceived;	// 0x30d71bf9
// declared property getter: - (id)contents;	// 0x30d71a39
// declared property getter: - (int)contentsLock;	// 0x30d71b0d
- (void)dealloc;	// 0x30d717b9
// declared property getter: - (dispatch_semaphore_s *)deviceQSemaphore;	// 0x30d71d41
// declared property getter: - (double)downloadCancelTimestamp;	// 0x30d71c29
// declared property getter: - (dispatch_queue_s *)downloadQ;	// 0x30d71ce9
// declared property getter: - (BOOL)ejectable;	// 0x30d718f1
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x30d71ba1
- (void)finalize;	// 0x30d71839
// declared property getter: - (dispatch_queue_s *)generalQ;	// 0x30d71d15
- (void)lockContents;	// 0x30d71791
- (void)lockMediaFiles;	// 0x30d71769
// declared property getter: - (BOOL)locked;	// 0x30d71951
// declared property getter: - (id)mediaFiles;	// 0x30d71a71
// declared property getter: - (int)mediaFilesLock;	// 0x30d71ae1
// declared property getter: - (dispatch_queue_s *)metadataFetchQ;	// 0x30d71cbd
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x30d71bcd
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x30d71d85
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x30d71999
// declared property setter: - (void)setBatteryLevel:(unsigned)level;	// 0x30d71a21
// declared property setter: - (void)setBatteryLevelAvailable:(BOOL)available;	// 0x30d719f5
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x30d71939
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x30d719c5
// declared property setter: - (void)setContentReceived:(BOOL)received;	// 0x30d71c11
// declared property setter: - (void)setContents:(id)contents;	// 0x30d71a4d
// declared property setter: - (void)setContentsLock:(int)lock;	// 0x30d71b21
// declared property setter: - (void)setDeviceQSemaphore:(dispatch_semaphore_s *)semaphore;	// 0x30d71d55
// declared property setter: - (void)setDownloadCancelTimestamp:(double)timestamp;	// 0x30d71c5d
// declared property setter: - (void)setDownloadQ:(dispatch_queue_s *)q;	// 0x30d71cfd
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x30d71909
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x30d71bb5
// declared property setter: - (void)setGeneralQ:(dispatch_queue_s *)q;	// 0x30d71d29
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x30d71969
// declared property setter: - (void)setMediaFiles:(id)files;	// 0x30d71a85
// declared property setter: - (void)setMediaFilesLock:(int)lock;	// 0x30d71af5
// declared property setter: - (void)setMetadataFetchQ:(dispatch_queue_s *)q;	// 0x30d71cd1
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x30d71be1
// declared property setter: - (void)setThumbnailFetchQ:(dispatch_queue_s *)q;	// 0x30d71ca5
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x30d71b6d
// declared property setter: - (void)setToBeNotifiedAddedItems:(id)beNotifiedAddedItems;	// 0x30d71abd
// declared property setter: - (void)setVolumePath:(id)path;	// 0x30d718cd
// declared property getter: - (dispatch_queue_s *)thumbnailFetchQ;	// 0x30d71c91
// declared property getter: - (double)timeOffset;	// 0x30d71b39
// declared property getter: - (id)toBeNotifiedAddedItems;	// 0x30d71aa9
- (void)unlockContents;	// 0x30d717a5
- (void)unlockMediaFiles;	// 0x30d7177d
// declared property getter: - (id)volumePath;	// 0x30d718b9
@end

