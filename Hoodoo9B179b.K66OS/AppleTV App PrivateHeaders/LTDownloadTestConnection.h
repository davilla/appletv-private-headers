/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRDownload.h"

@class NSString, NSMutableArray, NSURLConnection, NSHTTPURLResponse, NSDictionary, NSTimer;
@protocol LTNetworkTestDownloadDelegate;

__attribute__((visibility("hidden")))
@interface LTDownloadTestConnection : XXUnknownSuperclass <BRDownload> {
	double _startTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _elapsedTime;	// 20 = 0x14
	unsigned _lastMarkedLength;	// 28 = 0x1c
	double _cachedMeasuredBandwidth;	// 32 = 0x20
	double _endTime;	// 40 = 0x28
	NSTimer *_measuringTimer;	// 48 = 0x30
	NSString *_urlString;	// 52 = 0x34
	NSDictionary *_options;	// 56 = 0x38
	NSURLConnection *_urlConnection;	// 60 = 0x3c
	unsigned _fetchedDataLength;	// 64 = 0x40
	NSHTTPURLResponse *_urlResponse;	// 68 = 0x44
	NSMutableArray *_progressArray;	// 72 = 0x48
	int _downloadState;	// 76 = 0x4c
	int _downloadContext;	// 80 = 0x50
	id<LTNetworkTestDownloadDelegate> _delegate;	// 84 = 0x54
	int _downloadCapTime;	// 88 = 0x58
	long _downloadCapBytes;	// 92 = 0x5c
}
@property(assign) id delegate;	// G=0x3c9bd; S=0x3c9a1; converted property
@property(readonly, assign) int downloadState;	// G=0x3d341; converted property
@property(readonly, assign) double elapsedTime;	// G=0x3c94d; converted property
@property(readonly, assign) unsigned fetchedDataLength;	// G=0x3c965; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x3d11d; converted property
@property(readonly, assign) double startTime;	// G=0x3c935; converted property
- (id)init;	// 0x3c785
- (id)initWithURLString:(id)urlstring;	// 0x3c7b5
- (id)initWithURLString:(id)urlstring andOptions:(id)options;	// 0x3c7dd
- (void).cxx_destruct;	// 0x3d3b9
- (unsigned long long)byteCount;	// 0x3d389
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3d2c9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3d1c9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3d15d
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x3d33d
- (void)connectionDidFinishLoading:(id)connection;	// 0x3d1f5
- (id)contentType;	// 0x3d0d5
- (void)dealloc;	// 0x3c729
// converted property getter: - (id)delegate;	// 0x3c9bd
// converted property getter: - (int)downloadState;	// 0x3d341
- (int)downloadStateContext;	// 0x3d361
// converted property getter: - (double)elapsedTime;	// 0x3c94d
- (unsigned)expectedContentLength;	// 0x3c975
- (unsigned long long)expectedSize;	// 0x3d371
// converted property getter: - (unsigned)fetchedDataLength;	// 0x3c965
- (void)markProgress;	// 0x3cda1
- (double)measuredBytesPerSecond;	// 0x3d145
// converted property getter: - (id)options;	// 0x3d11d
- (id)originalURLString;	// 0x3d131
- (void)pause;	// 0x3d3ad
- (id)progressLogs;	// 0x3d0f5
- (int)qualifiedDownloadState;	// 0x3d351
- (id)response;	// 0x3d109
- (void)resume;	// 0x3d3b1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3c9a1
- (void)setDownloadCapBytes:(long)bytes;	// 0x3c9e1
- (void)setDownloadCapTime:(int)time;	// 0x3c9d1
- (void)setPlayable:(BOOL)playable;	// 0x3d3a9
- (void)startConnection;	// 0x3c9f1
// converted property getter: - (double)startTime;	// 0x3c935
- (void)stopConnection;	// 0x3cd29
- (BOOL)testContent;	// 0x3d3b5
- (double)timeUntilPlayable;	// 0x3d39d
@end

