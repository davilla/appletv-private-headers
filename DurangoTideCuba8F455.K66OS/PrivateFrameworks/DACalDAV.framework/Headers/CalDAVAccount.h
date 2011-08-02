/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CalNetworkChangeNotificationListener.h"
#import "DACalDAV-Structs.h"

@class MobileCalDAVAccount, NSRecursiveLock, NSHTTPCookieStorage, NSString, CalDAVPrincipal, NSArray, NSError, DAVSession, CalDAVOperationQueue;

@interface CalDAVAccount : NSObject <CalNetworkChangeNotificationListener> {
	CalDAVPrincipal *_principal;	// 4 = 0x4
	MobileCalDAVAccount *_mobileAccount;	// 8 = 0x8
	BOOL _isDelegate;	// 12 = 0xc
	BOOL _isWritable;	// 13 = 0xd
	NSString *_principalPath;	// 16 = 0x10
	NSString *_userDisplayName;	// 20 = 0x14
	NSString *_uid;	// 24 = 0x18
	DAVSession *_session;	// 28 = 0x1c
	NSError *_lastOperationError;	// 32 = 0x20
	NSArray *_tempCalendarList;	// 36 = 0x24
	int _queryOfficeHoursRunning;	// 40 = 0x28
	NSRecursiveLock *_connectedStateLock;	// 44 = 0x2c
	int _connectedState;	// 48 = 0x30
	BOOL _userPrefersOffline;	// 52 = 0x34
	NSError *_connectionError;	// 56 = 0x38
	CalDAVOperationQueue *_operationQueue;	// 60 = 0x3c
	BOOL _checkingCredentials;	// 64 = 0x40
	NSHTTPCookieStorage *_cookieStorage;	// 68 = 0x44
}
@property(assign) int connectedState;	// G=0x31459779; S=0x3145a869; converted property
@property(readonly, retain) NSHTTPCookieStorage *cookieStorage;	// G=0x31459971; converted property
@property(retain) id displayName;	// G=0x31458f39; S=0x31459ba5; converted property
@property(retain) id fullPrincipalAddress;	// G=0x31459d15; S=0x31459c15; converted property
@property(assign) BOOL isDelegate;	// G=0x31458ee9; S=0x31458ef9; converted property
@property(assign) BOOL isWritable;	// G=0x31458f09; S=0x31458f19; converted property
@property(retain) NSError *lastOperationError;	// G=0x31458f59; S=0x31459b41; converted property
@property(retain) MobileCalDAVAccount *mobileAccount;	// G=0x3145a21d; S=0x31458ebd; converted property
@property(readonly, retain) CalDAVOperationQueue *operationQueue;	// G=0x31458ed9; converted property
@property(retain) CalDAVPrincipal *principal;	// G=0x3145a24d; S=0x31458ead; converted property
@property(retain) NSString *principalPath;	// G=0x31458f29; S=0x31459e75; converted property
@property(readonly, retain) DAVSession *session;	// G=0x314597e5; converted property
@property(retain) NSString *uid;	// G=0x31458f49; S=0x3145a4c5; converted property
@property(assign) BOOL userPrefersOffline;	// G=0x314596dd; S=0x31459699; converted property
- (id)init;	// 0x3145a205
- (id)initWithConfiguration:(id)configuration;	// 0x3145a369
- (id)_icalendarVersionString;	// 0x31459a89
- (id)_systemVersionString;	// 0x3145a725
- (id)_userAgentString;	// 0x314599dd
- (void)attemptAutomaticConnect;	// 0x3145a0d1
- (void)attemptAutomaticConnectOnBackgroundThread;	// 0x31459ff1
- (void)automaticConnectDone:(id)done;	// 0x31459ef1
- (void)cancelRefresh;	// 0x3145a7e9
- (id)collectionSetName;	// 0x31459659
- (id)configuration;	// 0x3145a161
// converted property getter: - (int)connectedState;	// 0x31459779
// converted property getter: - (id)cookieStorage;	// 0x31459971
- (id)copyWithZone:(NSZone *)zone;	// 0x31459b91
- (void)dealloc;	// 0x3145a27d
// converted property getter: - (id)displayName;	// 0x31458f39
- (void)doneCheckingCredentials:(BOOL)credentials;	// 0x314594d1
// converted property getter: - (id)fullPrincipalAddress;	// 0x31459d15
- (id)getStringForState:(int)state;	// 0x31458f69
- (void)goOfflineAfterError:(BOOL)error;	// 0x314593ed
- (void)invalidateSession;	// 0x314597bd
- (BOOL)isBusy;	// 0x31459721
- (BOOL)isConnectionError:(id)error;	// 0x314591d9
- (BOOL)isConnectionErrorForAYError:(id)ayerror;	// 0x31458fe1
- (BOOL)isConnectionErrorForAYNetDBError:(id)aynetDBError;	// 0x31458fed
- (BOOL)isConnectionErrorForCFNetworkHTTPError:(id)cfnetworkHTTPError;	// 0x31458ff5
- (BOOL)isConnectionErrorForDAVError:(id)daverror;	// 0x314591b9
- (BOOL)isConnectionErrorForGenericError:(id)genericError;	// 0x31459111
- (BOOL)isConnectionErrorForNSPosixError:(id)nsposixError;	// 0x31458fe9
- (BOOL)isConnectionErrorForOSStatusError:(id)osstatusError;	// 0x31458fe5
- (BOOL)isConnectionErrorForStreamSocketSSLError:(id)streamSocketSSLError;	// 0x31458ff1
// converted property getter: - (BOOL)isDelegate;	// 0x31458ee9
- (BOOL)isOffline;	// 0x31458fc1
- (BOOL)isPendingRefresh;	// 0x31458ff9
- (BOOL)isRefreshing;	// 0x31459079
- (BOOL)isTransientError:(id)error;	// 0x3145931d
// converted property getter: - (BOOL)isWritable;	// 0x31458f09
- (id)key;	// 0x31459b7d
// converted property getter: - (id)lastOperationError;	// 0x31458f59
- (void)logError:(id)error;	// 0x3145a525
// converted property getter: - (id)mobileAccount;	// 0x3145a21d
// converted property getter: - (id)operationQueue;	// 0x31458ed9
// converted property getter: - (id)principal;	// 0x3145a24d
// converted property getter: - (id)principalPath;	// 0x31458f29
- (void)refreshAllSources;	// 0x3145949d
- (void)refreshWithContext:(id)context;	// 0x3145a981
- (id)searchPropertySet;	// 0x31459679
// converted property getter: - (id)session;	// 0x314597e5
- (id)sessionWithURL:(id)url;	// 0x31459811
// converted property setter: - (void)setConnectedState:(int)state;	// 0x3145a869
// converted property setter: - (void)setDisplayName:(id)name;	// 0x31459ba5
// converted property setter: - (void)setFullPrincipalAddress:(id)address;	// 0x31459c15
// converted property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x31458ef9
// converted property setter: - (void)setIsWritable:(BOOL)writable;	// 0x31458f19
// converted property setter: - (void)setLastOperationError:(id)error;	// 0x31459b41
// converted property setter: - (void)setMobileAccount:(id)account;	// 0x31458ebd
// converted property setter: - (void)setPrincipal:(id)principal;	// 0x31458ead
// converted property setter: - (void)setPrincipalPath:(id)path;	// 0x31459e75
- (void)setSourceError:(id)error;	// 0x31459519
// converted property setter: - (void)setUid:(id)uid;	// 0x3145a4c5
// converted property setter: - (void)setUserPrefersOffline:(BOOL)offline;	// 0x31459699
- (void)setupSources;	// 0x3145a105
- (int)statusForConnectedState;	// 0x31459745
- (void)systemDidWake;	// 0x31458ed5
- (void)systemNetworkDidChange;	// 0x31458ecd
- (void)systemWillSleep;	// 0x31458ed1
// converted property getter: - (id)uid;	// 0x31458f49
- (void)updateSessionTimeout:(id)timeout;	// 0x3145a671
// converted property getter: - (BOOL)userPrefersOffline;	// 0x314596dd
@end

