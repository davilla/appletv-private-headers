/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSFileHandle, NSDate, DAStatusReport, NSTimer, NSString, NSURL, NSURLConnection, NSMutableData;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate> {
	NSURL *_url;	// 4 = 0x4
	id<SubCalURLRequestDelegate> _delegate;	// 8 = 0x8
	NSString *_username;	// 12 = 0xc
	NSString *_password;	// 16 = 0x10
	double _timestamp;	// 20 = 0x14
	NSURLConnection *_connection;	// 28 = 0x1c
	NSMutableData *_connectionData;	// 32 = 0x20
	BOOL _useFileCache;	// 36 = 0x24
	NSString *_filePath;	// 40 = 0x28
	NSFileHandle *_fileHandle;	// 44 = 0x2c
	BOOL _sendDataUpdateCallback;	// 48 = 0x30
	NSDate *_startTime;	// 52 = 0x34
	DAStatusReport *_statusReport;	// 56 = 0x38
	NSTimer *_idleTimer;	// 60 = 0x3c
	NSString *_startRunloopDescriptionString;	// 64 = 0x40
}
@property(retain, nonatomic) NSMutableData *connectionData;	// G=0x30d935e9; S=0x30d935f9; @synthesize=_connectionData
@property(assign, nonatomic) id<SubCalURLRequestDelegate> delegate;	// G=0x30d934a5; S=0x30d923c5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *filePath;	// G=0x30d935a5; @synthesize=_filePath
@property(copy, nonatomic) NSString *password;	// G=0x30d934e9; S=0x30d934f9; @synthesize=_password
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x30d935b5; S=0x30d935c5; @synthesize=_statusReport
@property(assign) double timestamp;	// G=0x30d9351d; S=0x30d93551; @synthesize=_timestamp
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x30d93495; @synthesize=_url
@property(assign) BOOL useFileCache;	// G=0x30d93585; S=0x30d93595; @synthesize=_useFileCache
@property(copy, nonatomic) NSString *username;	// G=0x30d934b5; S=0x30d934c5; @synthesize=_username
+ (id)_cachedICSFilesDirectory;	// 0x30d93149
+ (void)_initializeFileCache;	// 0x30d931c1
- (id)initWithURL:(id)url;	// 0x30d91659
- (void)_cancelIdleTimer;	// 0x30d91dad
- (void)_createIdleTimer;	// 0x30d91cb1
- (void)_extendIdleTimer;	// 0x30d91d51
- (void)_finishWithError:(id)error;	// 0x30d922a9
- (void)_idleTimerFired;	// 0x30d91af9
- (void)_markEndTime;	// 0x30d91a6d
- (void)_markStartTime;	// 0x30d91a29
- (void)_openFileHandle;	// 0x30d92b1d
- (void)_receivedDataForFile:(id)file;	// 0x30d92ca1
- (void)_respondToChallenge:(id)challenge withCredential:(id)credential noCredentialBehavior:(int)behavior;	// 0x30d924f9
- (void)_setHeadersOnRequest:(id)request;	// 0x30d91865
- (void)cancel;	// 0x30d92151
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x30d9240d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30d9303d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x30d92655
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30d92e89
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30d92955
// declared property getter: - (id)connectionData;	// 0x30d935e9
- (void)connectionDidFinishLoading:(id)connection;	// 0x30d92f3d
- (void)dealloc;	// 0x30d91751
// declared property getter: - (id)delegate;	// 0x30d934a5
// declared property getter: - (id)filePath;	// 0x30d935a5
// declared property getter: - (id)password;	// 0x30d934e9
// declared property setter: - (void)setConnectionData:(id)data;	// 0x30d935f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30d923c5
// declared property setter: - (void)setPassword:(id)password;	// 0x30d934f9
// declared property setter: - (void)setStatusReport:(id)report;	// 0x30d935c5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30d93551
// declared property setter: - (void)setUseFileCache:(BOOL)cache;	// 0x30d93595
// declared property setter: - (void)setUsername:(id)username;	// 0x30d934c5
- (void)startConnection;	// 0x30d91e25
// declared property getter: - (id)statusReport;	// 0x30d935b5
// declared property getter: - (double)timestamp;	// 0x30d9351d
// declared property getter: - (id)url;	// 0x30d93495
// declared property getter: - (BOOL)useFileCache;	// 0x30d93585
// declared property getter: - (id)username;	// 0x30d934b5
@end

