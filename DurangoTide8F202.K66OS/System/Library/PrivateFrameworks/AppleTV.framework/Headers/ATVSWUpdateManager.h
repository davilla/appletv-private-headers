/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <BRSingleton.h> // Unknown library

@class NSError, NSString, NSLock, NSDate, NSMutableArray, ATVRebootWaitController, ATVSWUpdateRecord;

@interface ATVSWUpdateManager : BRSingleton <BRSelectionHandler> {
@private
	BOOL _checkInProgress;	// 4 = 0x4
	BOOL _downloadInProgress;	// 5 = 0x5
	BOOL _applyInProgress;	// 6 = 0x6
	BOOL _singleFileDownloadInProgress;	// 7 = 0x7
	BOOL _downloadUpdatesAfterCheck;	// 8 = 0x8
	BOOL _automaticUpdateTriggered;	// 9 = 0x9
	BOOL _forceFullUpdate;	// 10 = 0xa
	BOOL _cancelRequested;	// 11 = 0xb
	BOOL _waitingForUserConfirmation;	// 12 = 0xc
	unsigned long long _amountDownloaded;	// 16 = 0x10
	NSDate *_downloadStartTime;	// 24 = 0x18
	NSError *_downloadError;	// 28 = 0x1c
	ATVRebootWaitController *_updateProgressController;	// 32 = 0x20
	ATVSWUpdateRecord *_pendingRecord;	// 36 = 0x24
	NSMutableArray *_licenses;	// 40 = 0x28
	BOOL _licenseAccepted;	// 44 = 0x2c
	NSString *_updateURL;	// 48 = 0x30
	NSLock *_accessLock;	// 52 = 0x34
}
+ (void)initialize;	// 0x336db7fd
+ (void)setSingleton:(id)singleton;	// 0x336dab35
+ (id)singleton;	// 0x336dab29
- (id)init;	// 0x336dab85
- (BOOL)_applyInProgress;	// 0x336db2f5
- (void)_applyUpdates;	// 0x336daccd
- (void)_checkStepFinishedWithInfo:(id)info;	// 0x336db011
- (void)_cleanUpFiles;	// 0x336dbd01
- (void)_collectAppleConnectID;	// 0x336dd165
- (BOOL)_constructUpdateURL:(BOOL)url;	// 0x336db40d
- (id)_downloadError;	// 0x336dab45
- (id)_downloadFileForURL:(id)url error:(id *)error;	// 0x336db0f9
- (id)_downloadLicensesFromRecord:(id)record;	// 0x336dba85
- (void)_downloadStepFinishedWithInfo:(id)info;	// 0x336daf95
- (id)_downloadUpdatePayloadsFromRecord:(id)record;	// 0x336dbbf1
- (BOOL)_downloadUpdates:(id *)updates;	// 0x336dcf35
- (BOOL)_downloadingAFile;	// 0x336db26d
- (void)_errorDuringSoftwareUpdate:(id)update;	// 0x336dc551
- (id)_getRetailType;	// 0x336dd589
- (id)_getUpdateIPAddress;	// 0x336db3c1
- (void)_handleCheckStepFinished:(id)finished;	// 0x336db9fd
- (void)_handleDownloadStepFinished:(id)finished;	// 0x336dcb0d
- (id)_imagePathForUpdateProgress;	// 0x336daca9
- (id)_localFileForURL:(id)url destFileName:(id)name error:(id *)error;	// 0x336dbd89
- (id)_localFilePathForUpdateURL:(id)updateURL;	// 0x336db08d
- (void)_performCheckStep;	// 0x336de039
- (void)_performDownloadStep;	// 0x336ddd39
- (void)_performMSUUpdateThreaded;	// 0x336de419
- (void)_playbackInitiated:(id)initiated;	// 0x336dad61
- (void)_sendCheckStartNotification;	// 0x336db055
- (void)_sendDownloadStartNotification;	// 0x336dafd9
- (void)_sendEmergencySpaceRequest:(id)request;	// 0x336dad89
- (void)_sendProgressNotification;	// 0x336daded
- (void)_setApplyInProgress:(BOOL)progress;	// 0x336db2b1
- (void)_setCancelRequest:(BOOL)request;	// 0x336db131
- (void)_setCheckInProgress:(BOOL)progress;	// 0x336db37d
- (void)_setDownloadAFile:(BOOL)file;	// 0x336db229
- (void)_setDownloadError:(id)error;	// 0x336db1b9
- (void)_setDownloadInProgress:(BOOL)progress;	// 0x336db339
- (void)_showLicenseAgreements;	// 0x336dc7a5
- (int)_showModalConfirmation:(BOOL)confirmation;	// 0x336dc9c1
- (void)_showUpdateOptions;	// 0x336dd71d
- (void)_updateProgressStatus:(id)status;	// 0x336dc689
- (BOOL)_wasCancelRequested;	// 0x336db175
- (void)cancelUpdates;	// 0x336dbf85
- (void)clearDownloadedUpdates;	// 0x336db661
- (void)dealloc;	// 0x336db759
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x336dab61
- (void)download:(id)download didFailWithError:(id)error;	// 0x336dad05
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x336db995
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x336dab5d
- (void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;	// 0x336dab59
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x336dab55
- (void)downloadDidBegin:(id)download;	// 0x336dad49
- (void)downloadDidFinish:(id)download;	// 0x336dad31
- (BOOL)handleSelectionForControl:(id)control;	// 0x336db5bd
- (id)localUpdateFolderPath;	// 0x336db8d1
- (BOOL)startDownload;	// 0x336dc155
- (BOOL)startExplicitUpdateCheck:(BOOL)check forceFullUpdate:(BOOL)update;	// 0x336dc425
- (void)startMonitoring;	// 0x336db739
- (void)startPeriodicUpdateCheck;	// 0x336dc2c5
- (void)stopMonitoring;	// 0x336dab41
- (BOOL)updateCheckInProgress;	// 0x336db6f5
- (BOOL)updateDownloadInProgress;	// 0x336db6b1
- (unsigned long long)updateDownloadSize;	// 0x336db689
- (void)updatesPostponed;	// 0x336db60d
@end

