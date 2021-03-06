/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface ATVITunesMetricsUploader : BRSingleton {
@private
	NSMutableArray *_uploadQueue;	// 4 = 0x4
	NSMutableDictionary *_logCurrentlyUploading;	// 8 = 0x8
	int _lastDSID;	// 12 = 0xc
}
@property(assign) int lastDSID;	// G=0x306f36ed; S=0x306f36fd; @synthesize=_lastDSID
@property(retain) NSMutableDictionary *logCurrentlyUploading;	// G=0x306f3c25; S=0x306f3c69; @synthesize=_logCurrentlyUploading
@property(retain) NSMutableArray *uploadQueue;	// G=0x306f3c0d; S=0x306f3c3d; @synthesize=_uploadQueue
+ (id)generateGUID;	// 0x306f3c95
+ (unsigned long long)preferredAccountDSID;	// 0x306f3959
+ (void)setSingleton:(id)singleton;	// 0x306f36e1
+ (id)singleton;	// 0x306f36d5
- (id)init;	// 0x306f38e5
- (void)_sendNextUploadLog;	// 0x306f3cd5
- (void)augmentDownloadInfoWithExtraData:(id)extraData;	// 0x306f3749
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x306f4585
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x306f3711
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x306f370d
- (void)connectionDidFinishLoading:(id)connection;	// 0x306f461d
- (void)dealloc;	// 0x306f3889
- (void)enqueueBlock:(id)block;	// 0x306f3af9
- (void)enqueueMetricsDictionary:(id)dictionary withDelegate:(id)delegate;	// 0x306f39e9
// declared property getter: - (int)lastDSID;	// 0x306f36ed
// declared property getter: - (id)logCurrentlyUploading;	// 0x306f3c25
// declared property setter: - (void)setLastDSID:(int)dsid;	// 0x306f36fd
// declared property setter: - (void)setLogCurrentlyUploading:(id)uploading;	// 0x306f3c69
// declared property setter: - (void)setUploadQueue:(id)queue;	// 0x306f3c3d
- (void)uploadAvailableMetrics;	// 0x306f386d
// declared property getter: - (id)uploadQueue;	// 0x306f3c0d
@end

